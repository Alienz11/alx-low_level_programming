#!/bin/bash
gcc -g *.c -fPIC
gcc -Wall -Werror -Wextra -pedantic -shared -o liball.so *.o
