#!/bin/bash

path=/home/dark/bash/a.txt

for i in $(cat $path)
do 
	echo our names are $i
done

