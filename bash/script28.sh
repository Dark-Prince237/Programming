#!/bin/bash

# while read p
# do 
#     echo $p
# done < a.txt

cat /etc/host.conf | while read p
do 
    echo $p
done
