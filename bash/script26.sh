#!/bin/bash
echo "enter a"
read a


echo "scale=5;sqrt($a)"|bc
echo "scale=5;$a^3"|bc