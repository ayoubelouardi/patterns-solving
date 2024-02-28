#!/bin/bash

# for building the c++ files and runing them 
# $1 : the name of the file without extension (e.g. : pattern01)

g++ -std=c++14 $1.cpp -o $1
./$1