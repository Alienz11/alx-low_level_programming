#!/bin/bash
gcc -g *.c
gcc -fPIC -Wall -Werror -Wextra -pedantic -shared -o liball.so
