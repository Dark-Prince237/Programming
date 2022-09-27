#!/bin/bash
count=1
n=3

while [ $count -le $n ]
do 
    echo $count

    ((count++))
    gnome-terminal &

done
