#!/bin/bash
gcc -g *.c -fPIC
gcc *.o -Wall -Werror -Wextra -pedantic -shared -o liball.so
