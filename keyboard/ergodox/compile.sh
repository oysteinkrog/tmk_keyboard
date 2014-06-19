#/bin/sh

export PATH="$PATH:/cygdrive/c/WinAVR-20100110/utils/bin:/cygdrive/c/WinAVR-20100110/bin:`pwd`"

make -f Makefile.lufa krog teensy
