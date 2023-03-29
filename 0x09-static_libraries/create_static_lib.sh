#!/bin/bash

# compile all .c files into .o files
gcc -c *.c

# create static library from all .o files
ar rcs liball.a *.o
