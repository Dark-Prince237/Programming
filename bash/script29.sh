#!/bin/bash

count=1
n=10

until [ $count -gt $n ]
do
    echo $count

    let count++
done