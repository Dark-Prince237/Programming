#!/bin/bash
echo "enter a age"
read age

if [[ $age -eq 18  ||  $age -ge 18 ]]
then
echo you can vote
else
echo you cannot vote
fi