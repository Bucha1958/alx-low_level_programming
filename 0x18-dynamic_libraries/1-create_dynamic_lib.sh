#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=:/home/vagrant/alx-low_level_programming/0x18-dynamic_libraries
