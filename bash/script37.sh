#!/bin/bash

echo "enter first number"
read a

echo "enter second number"
read b

function add()
{
    echo sum of $(($1)) and $(($2)) is $(($1+$2))
}

function sub()
{
    echo sub of $(($1)) and $(($2)) is $(($1-$2))
}

function multiply()
{
    
    echo multiply of $(($1)) and $(($2)) is $(($1*$2))
}

function divide()
{
   echo divide of $(($1)) and $(($2)) is $(($1/$2))
}

add a b
sub a b
multiply a b
divide a b