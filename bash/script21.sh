#!/bin/bash
echo "enter file name"
read file_name

if [ -f $file_name ]
then
    if [ -w $file_name ]
    then
        echo "enter some text "
        cat >> $file_name
    
    else
    echo "no write permission of file $file_name"
    fi

else

    echo "file not exist"
fi