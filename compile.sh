#!/bin/bash
for FILE in exercises/*.cpp; do
  printf "Compiling: $FILE ->\n"
  g++ $FILE -std=c++11 -c -Wall -Werror -Wextra
done
