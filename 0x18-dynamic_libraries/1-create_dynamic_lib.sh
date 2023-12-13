#!/bin/bash
gcc -Wall -Wextra -pedantic -Werror -fPIC -c *.c
gcc -shared *.o -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
