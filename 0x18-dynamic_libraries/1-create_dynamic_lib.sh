#!/bin/bash
gcc -c *.c
gcc -g -fPIC -Wall -Werror -Wextra -pedantic -shared -o liball.so
