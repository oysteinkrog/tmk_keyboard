#/bin/sh

export PATH="$PATH:/d/ERGODOX/WinAVR-20100110/utils/bin:/d/ERGODOX/WinAVR-20100110/bin:`pwd`"

make -f Makefile.lufa krog teensy
