set(ALLEGRO_LEGACY_SRC_FILES
        src/allegro.c
        src/blit.c
        src/bmp.c
        src/clip3d.c
        src/clip3df.c
        src/colblend.c
        src/color.c
        src/config.c
        src/datafile.c
        src/dataregi.c
        src/digmid.c
        src/dither.c
        src/dispsw.c
        src/drvlist.c
        src/file.c
        src/fli.c
        src/flood.c
        src/font.c
        src/fontbios.c
        src/fontbmp.c
        src/fontdat.c
        src/fontgrx.c
        src/fonttxt.c
        src/fsel.c
        src/gfx.c
        src/glyph.c
        src/graphics.c
        src/gsprite.c
        src/gui.c
        src/guiproc.c
        src/inline.c
        src/joystick.c
        src/keyboard.c
        src/lbm.c
        src/libc.c
        src/lzss.c
        src/math.c
        src/math3d.c
        src/midi.c
        src/mixer.c
        src/modesel.c
        src/mouse.c
        src/pcx.c
        src/poly3d.c
        src/polygon.c
        src/quantize.c
        src/quat.c
        src/readbmp.c
        src/readfont.c
        src/readsmp.c
        src/rle.c
        src/rotate.c
        src/rsfb.c
        src/scene3d.c
        src/sound.c
        src/spline.c
        src/stream.c
        src/text.c
        src/tga.c
        src/timer.c
        src/unicode.c
        src/vtable.c
        src/vtable15.c
        src/vtable16.c
        src/vtable24.c
        src/vtable32.c
        src/vtable8.c
        )

set(ALLEGRO_LEGACY_SRC_C_FILES
        src/c/cblit16.c
        src/c/cblit24.c
        src/c/cblit32.c
        src/c/cblit8.c
        src/c/ccpu.c
        src/c/ccsprite.c
        src/c/cgfx15.c
        src/c/cgfx16.c
        src/c/cgfx24.c
        src/c/cgfx32.c
        src/c/cgfx8.c
        src/c/cmisc.c
        src/c/cscan15.c
        src/c/cscan16.c
        src/c/cscan24.c
        src/c/cscan32.c
        src/c/cscan8.c
        src/c/cspr15.c
        src/c/cspr16.c
        src/c/cspr24.c
        src/c/cspr32.c
        src/c/cspr8.c
        src/c/cstretch.c
        src/c/czscan15.c
        src/c/czscan16.c
        src/c/czscan24.c
        src/c/czscan32.c
        src/c/czscan8.c
        src/misc/ccolconv.c
        src/misc/colconv.c
        )

set(ALLEGRO_LEGACY_SRC_A5_FILES
        src/a5/a5_file.c
        src/a5/a5_sound.c
        src/a5/a5_sound_driver.c
        src/a5/a5_timer.c
        src/a5/a5_display.c
        src/a5/a5_display_driver.c
        src/a5/a5_keyboard.c
        src/a5/a5_keyboard_driver.c
        src/a5/a5_mouse.c
        src/a5/a5_mouse_driver.c
        src/a5/a5_joystick.c
        src/a5/a5_joystick_driver.c
        src/a5/a5_midi.c
        src/a5/a5_midi_driver.c
        src/a5/a5_system.c
        src/a5/a5_system_driver.c
        )

set(ALLEGRO_LEGACY_INCLUDE_ALLEGRO_LEGACY_FILES
        include/allegro/3d.h
        include/allegro/3dmaths.h
        include/allegro/alcompat.h
        include/allegro/alinline.h
        include/allegro/base.h
        include/allegro/color.h
        include/allegro/compiled.h
        include/allegro/config.h
        include/allegro/datafile.h
        include/allegro/debug.h
        include/allegro/digi.h
        include/allegro/draw.h
        include/allegro/file.h
        include/allegro/fix.h
        include/allegro/fixed.h
        include/allegro/fli.h
        include/allegro/fmaths.h
        include/allegro/font.h
        include/allegro/gfx.h
        include/allegro/graphics.h
        include/allegro/gui.h
        include/allegro/joystick.h
        include/allegro/keyboard.h
        include/allegro/lzss.h
        include/allegro/matrix.h
        include/allegro/midi.h
        include/allegro/mouse.h
        include/allegro/palette.h
        include/allegro/quat.h
        include/allegro/rle.h
        include/allegro/sound.h
        include/allegro/stream.h
        include/allegro/system.h
        include/allegro/text.h
        include/allegro/timer.h
        include/allegro/unicode.h
        )

set(ALLEGRO_LEGACY_INCLUDE_ALLEGRO_LEGACY_INLINE_FILES
        include/allegro/inline/3dmaths.inl
        include/allegro/inline/asm.inl
        include/allegro/inline/color.inl
        include/allegro/inline/draw.inl
        include/allegro/inline/fix.inl
        include/allegro/inline/fmaths.inl
        include/allegro/inline/gfx.inl
        include/allegro/inline/matrix.inl
        include/allegro/inline/rle.inl
        include/allegro/inline/system.inl
        )

set(ALLEGRO_LEGACY_INCLUDE_ALLEGRO_LEGACY_INTERNAL_FILES
        include/allegro/internal/aintern.h
        include/allegro/internal/aintvga.h
        include/allegro/internal/alconfig.h
        )

set(ALLEGRO_LEGACY_INCLUDE_ALLEGRO_LEGACY_PLATFORM_FILES
        include/allegro/platform/aintbeos.h
        include/allegro/platform/aintdos.h
        include/allegro/platform/aintlnx.h
        include/allegro/platform/aintmac.h
        include/allegro/platform/aintosx.h
        include/allegro/platform/aintpsp.h
        include/allegro/platform/aintqnx.h
        include/allegro/platform/aintunix.h
        include/allegro/platform/aintwin.h
        include/allegro/platform/al386gcc.h
        include/allegro/platform/al386vc.h
        include/allegro/platform/al386wat.h
        include/allegro/platform/albcc32.h
        include/allegro/platform/albecfg.h
        include/allegro/platform/albeos.h
        include/allegro/platform/aldjgpp.h
        include/allegro/platform/aldmc.h
        include/allegro/platform/aldos.h
        include/allegro/platform/almac.h
        include/allegro/platform/almaccfg.h
        include/allegro/platform/almngw32.h
        include/allegro/platform/almsvc.h
        include/allegro/platform/alosx.h
        include/allegro/platform/alosxcfg.h
        # include/allegro/platform/alplatf.h.cmake
        include/allegro/platform/alpsp.h
        include/allegro/platform/alpspcfg.h
        include/allegro/platform/alqnx.h
        include/allegro/platform/alqnxcfg.h
        include/allegro/platform/alucfg.h
        include/allegro/platform/alunix.h
        # include/allegro/platform/alunixac.h.cmake
        # include/allegro/platform/alunixac.hin
        include/allegro/platform/alwatcom.h
        include/allegro/platform/alwin.h
        include/allegro/platform/astdint.h
        include/allegro/platform/macdef.h
        include/allegro/platform/ainta5.h
        include/allegro/platform/ala5cfg.h
        include/allegro/platform/ala5.h
        )

#-----------------------------------------------------------------------------#
# vim: set sts=4 sw=4 et:
