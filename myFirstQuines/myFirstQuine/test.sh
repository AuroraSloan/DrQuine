#!/bin/sh
gcc myFirstQuine.c
./a.out > output
echo "----------------output------------------"
cat output
echo "-----------------diff-----------------"
diff myFirstQuine.c output
