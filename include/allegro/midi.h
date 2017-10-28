/*         ______   ___    ___
 *        /\  _  \ /\_ \  /\_ \
 *        \ \ \L\ \\//\ \ \//\ \      __     __   _ __   ___
 *         \ \  __ \ \ \ \  \ \ \   /'__`\ /'_ `\/\`'__\/ __`\
 *          \ \ \/\ \ \_\ \_ \_\ \_/\  __//\ \L\ \ \ \//\ \L\ \
 *           \ \_\ \_\/\____\/\____\ \____\ \____ \ \_\\ \____/
 *            \/_/\/_/\/____/\/____/\/____/\/___L\ \/_/ \/___/
 *                                           /\____/
 *                                           \_/__/
 *
 *      MIDI music routines.
 *
 *      By Shawn Hargreaves.
 *
 *      See readme.txt for copyright information.
 */


#ifndef ALLEGRO_LEGACY_MIDI_H
#define ALLEGRO_LEGACY_MIDI_H

#include "base.h"

#ifdef __cplusplus
   extern "C" {
#endif
                                       /* Theoretical maximums: */
#define MIDI_VOICES           64       /* actual drivers may not be */
#define MIDI_TRACKS           32       /* able to handle this many */



typedef struct MIDI                    /* a midi file */
{
   int divisions;                      /* number of ticks per quarter note */
   struct {
      unsigned char *data;             /* MIDI message stream */
      int len;                         /* length of the track data */
   } track[MIDI_TRACKS];
} MIDI;



#define MIDI_AUTODETECT       -1
#define MIDI_NONE             0
#define MIDI_DIGMID           AL_ID('D','I','G','I')

typedef struct MIDI_DRIVER             /* driver for playing midi music */
{
   int  id;                            /* driver ID code */
   AL_LEGACY_CONST char *name;                /* driver name */
   AL_LEGACY_CONST char *desc;                /* description string */
   AL_LEGACY_CONST char *ascii_name;          /* ASCII format name string */
   int  voices;                        /* available voices */
   int  basevoice;                     /* voice number offset */
   int  max_voices;                    /* maximum voices we can support */
   int  def_voices;                    /* default number of voices to use */
   int  xmin, xmax;                    /* reserved voice range */

   /* setup routines */
   AL_LEGACY_METHOD(int,  detect, (int input));
   AL_LEGACY_METHOD(int,  init, (int input, int voices));
   AL_LEGACY_METHOD(void, exit, (int input));
   AL_LEGACY_METHOD(int,  set_mixer_volume, (int volume));
   AL_LEGACY_METHOD(int,  get_mixer_volume, (void));

   /* raw MIDI output to MPU-401, etc. */
   AL_LEGACY_METHOD(void, raw_midi, (int data));

   /* dynamic patch loading routines */
   AL_LEGACY_METHOD(int,  load_patches, (AL_LEGACY_CONST char *patches, AL_LEGACY_CONST char *drums));
   AL_LEGACY_METHOD(void, adjust_patches, (AL_LEGACY_CONST char *patches, AL_LEGACY_CONST char *drums));

   /* note control functions */
   AL_LEGACY_METHOD(void, key_on, (int inst, int note, int bend, int vol, int pan));
   AL_LEGACY_METHOD(void, key_off, (int voice));
   AL_LEGACY_METHOD(void, set_volume, (int voice, int vol));
   AL_LEGACY_METHOD(void, set_pitch, (int voice, int note, int bend));
   AL_LEGACY_METHOD(void, set_pan, (int voice, int pan));
   AL_LEGACY_METHOD(void, set_vibrato, (int voice, int amount));
} MIDI_DRIVER;


AL_LEGACY_VAR(MIDI_DRIVER, midi_digmid);

AL_LEGACY_ARRAY(_DRIVER_INFO, _midi_driver_list);


/* macros for constructing the driver lists */
#define BEGIN_MIDI_DRIVER_LIST                                 \
   _DRIVER_INFO _midi_driver_list[] =                          \
   {

#define END_MIDI_DRIVER_LIST                                   \
      {  0,                NULL,                0     }        \
   };

#define MIDI_DRIVER_DIGMID                                     \
      {  MIDI_DIGMID,      &midi_digmid,        TRUE  },


AL_LEGACY_VAR(MIDI_DRIVER *, midi_driver);

AL_LEGACY_VAR(MIDI_DRIVER *, midi_input_driver);

AL_LEGACY_VAR(int, midi_card);

AL_LEGACY_VAR(int, midi_input_card);

AL_LEGACY_VAR(volatile long, midi_pos);       /* current position in the midi file, in beats */
AL_LEGACY_VAR(volatile long, midi_time);      /* current position in the midi file, in seconds */

AL_LEGACY_VAR(long, midi_loop_start);         /* where to loop back to at EOF */
AL_LEGACY_VAR(long, midi_loop_end);           /* loop when we hit this position */

AL_LEGACY_FUNC(int, detect_midi_driver, (int driver_id));

AL_LEGACY_FUNC(MIDI *, load_midi, (AL_LEGACY_CONST char *filename));
AL_LEGACY_FUNC(void, destroy_midi, (MIDI *midi));
AL_LEGACY_FUNC(int, play_midi, (MIDI *midi, int loop));
AL_LEGACY_FUNC(int, play_looped_midi, (MIDI *midi, int loop_start, int loop_end));
AL_LEGACY_FUNC(void, stop_midi, (void));
AL_LEGACY_FUNC(void, midi_pause, (void));
AL_LEGACY_FUNC(void, midi_resume, (void));
AL_LEGACY_FUNC(int, midi_seek, (int target));
AL_LEGACY_FUNC(int, get_midi_length, (MIDI *midi));
AL_LEGACY_FUNC(void, midi_out, (unsigned char *data, int length));
AL_LEGACY_FUNC(int, load_midi_patches, (void));

AL_LEGACY_FUNCPTR(void, midi_msg_callback, (int msg, int byte1, int byte2));
AL_LEGACY_FUNCPTR(void, midi_meta_callback, (int type, AL_LEGACY_CONST unsigned char *data, int length));
AL_LEGACY_FUNCPTR(void, midi_sysex_callback, (AL_LEGACY_CONST unsigned char *data, int length));

AL_LEGACY_FUNCPTR(void, midi_recorder, (unsigned char data));

AL_LEGACY_FUNC(void, lock_midi, (struct MIDI *midi));

#ifdef __cplusplus
   }
#endif

#endif          /* ifndef ALLEGRO_LEGACY_MIDI_H */


