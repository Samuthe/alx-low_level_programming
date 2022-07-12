#!/bin/bash
gcc -c -fpic *.c
gc -shared -o liball.so *.o
