#!/bin/bash

SCRIPT_DIR=$(dirname $0)
BIN_DIR=$SCRIPT_DIR/bin

# create the 'bin' directory, if needed
if [ ! -d "$BIN_DIR" ]; then
  mkdir bin
fi

for FILE in $SCRIPT_DIR/exercises/*.cpp; do
  # remove the .cpp extension
  FILE_NO_EXT=$(basename "$FILE" .cpp)

  printf "Compiling: $FILE ->\n"
  g++ "$FILE" -std=c++11 -o "$BIN_DIR/$FILE_NO_EXT"
done
