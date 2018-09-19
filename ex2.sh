#!/bin/bash
while ! ln file.txt file.lock
do
 sleep 1
done
echo 0 > file.txt
while read p
do
 echo $(($p + 1)) >> file.txt
done < file.txt
rm -f file.lock
