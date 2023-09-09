#!/bin/bash

#leetcode compile
file=$(find "$1"_*.cpp)
outfile="${file%.*}"
g++ -g -o "$outfile" "$file" LeetcodeHelpers.cpp
compSuccess="$?"

if [ "$#" == 2 ]
then
    if [ "$2" == '-r' ] && [ "$compSuccess" == 0 ]
    then
        echo "** RUNNING FILE **" 
        ./"$outfile"
        echo "** ENDING RUN **" 
        rm "$outfile"
    fi
fi