#!/bin/bash
gcc -shared -Wl,-soname,libtools.so -o libtools.so *.c
