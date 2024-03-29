#!/bin/sh
gcc test.c
./a.out > output
echo "----------------output------------------"
cat output
echo "-----------------diff-----------------"
diff test.c output
