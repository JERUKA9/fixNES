gcc -DWINDOWS_BUILD -DZIPSUPPORT main.c apu.c audio.c audio_fds.c audio_mmc5.c audio_vrc6.c audio_vrc7.c audio_n163.c alhelpers.c cpu.c ppu.c mem.c input.c mapper.c mapperList.c fm2play.c vrc_irq.c mapper/*.c unzip/*.c -DFREEGLUT_STATIC -lfreeglut_static -lopenal32 -lopengl32 -lglu32 -lgdi32 -lwinmm -lz -Wall -Wextra -O3 -flto -s -o fixNES -Wl,--subsystem,windows
pause 
