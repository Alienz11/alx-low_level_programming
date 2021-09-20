#!/bin/bash
gcc -g *.c -fPIC
gcc *.o -shared -o liball.so
