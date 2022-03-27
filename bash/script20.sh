#!/bin/bash

echo -e "Enter file name:\c"
read file_name

if [ -s $file_name ]
then 
echo "file not empty"
else
echo "file empty"

fi 
