#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -c -fPIC *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
