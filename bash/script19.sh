#!/bin/bash

echo -e "Enter file name:\c"
read file_name

if [ -e $file_name ]
then
echo "$file_name is found"
else
echo "file not found"

fi
