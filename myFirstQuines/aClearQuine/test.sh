#!/bin/bash
gcc quine.c
./a.out > output
echo "---------------------- output ---------------------"
cat output
echo "---------------------- diff ---------------------"
diff output quine.c
