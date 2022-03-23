#!/bin/bash

echo press 1 to display date
echo press 2 to list files
echo press 3 to see pwd

read choice

case $choice in
	1)date;;
	2)ls -ltr;;
	3)pwd;;
	*)echo enter valid choice
esac	
