#!/bin/bash

echo "enter age"
read age 

if (( $age >= 18 ))
then
    echo "you can vote"
else
    echo "not vote"

fi
