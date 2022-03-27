#!/bin/bash
echo "enter a age"
read age

if [[ $age -ge 18  &&  $age -le 40 ]]
then
echo you can vote
else
echo you cannot vote
fi