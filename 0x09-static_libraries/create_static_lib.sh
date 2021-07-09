#!/bin/bash
gcc -c *.c -L. -o *.o | ar rc liball.a *.o
