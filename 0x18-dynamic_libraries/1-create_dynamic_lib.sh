#!/bin/bash
gcc -c -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
