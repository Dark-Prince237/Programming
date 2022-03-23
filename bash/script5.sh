#!/bin/bash

echo enter your age
read age

if  [ $age -ge 18 ]
then
	echo you are eligible
else 
	echo you are not
fi


