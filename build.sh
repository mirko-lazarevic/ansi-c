#!/bin/bash

code="$PWD"
opts=-g
cd build > /dev/null
g++ $opts $code/main.cpp -o main.exe
cd $code > /dev/null
