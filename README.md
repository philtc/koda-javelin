# koda-javelin
Files for making the amazing work of [jtlim](https://github.com/jthlim) for Javelin embedded stenography work on the Koda keyboard.

The [Koda keyboard](https://github.com/larrbo/odd-rocket/tree/master/koda) is designed by larrbo and released under Creative Commons BY-NC-SA 4.0 License.  
To make this work with Javelin, I replaced the promicro with a compatible RP2040 with 16M of storage.

This repository contains the keyboard header file if you want to compile the firmware yourself, and the compiled firmware.

You will also need to flash your board with your dictionary files, using the polyglot firmware, before flashing the koda firmware.

Follow the instructions on the [Javelin steno rp2040 page](https://github.com/jthlim/javelin-steno-pico).  
After setting up your development environment, place the koda.h file into the javelin-steno-rp2040 folder.

change the cmake instruction wto
> cmake .. -D JAVELIN_BOARD=koda
