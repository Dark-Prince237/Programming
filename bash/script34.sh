#!/bin/bash

for((i=1;i<=10;i++))
do
    if [ $i -eq 5 ]
    then
        echo "loop will not work"
        continue
    fi

    echo $i
    
done