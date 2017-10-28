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
 *      Configuration defines for use on Unix platforms.
 *
 *      By Michael Bukin.
 *
 *      See readme.txt for copyright information.
 */


#include <fcntl.h>
#include <unistd.h>

/* Describe this platform.  */
#define ALLEGRO_LEGACY_PLATFORM_STR  "Unix"
#define ALLEGRO_LEGACY_CONSOLE_OK
#define ALLEGRO_LEGACY_VRAM_SINGLE_SURFACE

#define ALLEGRO_LEGACY_EXTRA_HEADER "allegro/platform/alunix.h"
#define ALLEGRO_LEGACY_INTERNAL_HEADER "allegro/platform/aintunix.h"

/* These defines will be provided by configure script.  */
#undef ALLEGRO_LEGACY_COLOR8
#undef ALLEGRO_LEGACY_COLOR16
#undef ALLEGRO_LEGACY_COLOR24
#undef ALLEGRO_LEGACY_COLOR32

/* Include configuration generated by configure script.  */
#include "allegro/platform/alunixac.h"

/* Enable multithreaded library */
#ifdef ALLEGRO_LEGACY_HAVE_LIBPTHREAD
#define ALLEGRO_LEGACY_MULTITHREADED
#endif

/* Provide implementations of missing functions.  */
#ifndef ALLEGRO_LEGACY_HAVE_STRICMP
#define ALLEGRO_LEGACY_NO_STRICMP
#endif

#ifndef ALLEGRO_LEGACY_HAVE_STRLWR
#define ALLEGRO_LEGACY_NO_STRLWR
#endif

#ifndef ALLEGRO_LEGACY_HAVE_STRUPR
#define ALLEGRO_LEGACY_NO_STRUPR
#endif

#ifndef ALLEGRO_LEGACY_HAVE_MEMCMP
#define ALLEGRO_LEGACY_NO_MEMCMP
#endif
