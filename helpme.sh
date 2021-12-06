#!/bin/bash
#Cierra Koen
#ckoen1@student.gsu.edu

echo "enter a command:"
read command

if [ $command == ls ]
then
sed -n "/LS(1)/,/ls(1)/p" mandatabase.txt

elif [ $command == mkdir ]
then 
sed -n "/MKDIR(1)/,/MKDIR(1)/p" mandatabase.txt

elif [ $command == chmod ]
then 
sed -n "/CHMOD(1)/,/CHMOD(1)/p" mandatabase.txt

elif [ $command == grep ]
then 
sed -n "/GREP(1)/,/GREP(1)/p" mandatabaase.txt

elif [ $command == cat ]
then 
sed -n "/CAT(1)/,/CAT(1)/p" mandatabase.txt

elif [ $command == head ]
then 
sed -n "/HEAD(1)/,/HEAD(1)/p" mandatabase.txt

elif [ $command == tail ]
then
sed -n "/TAIL(1)/,/TAIL(1)/p" mandatabase.txt

elif [ $command == rm ]
then 
sed -n "/RM(1)/,/RM(1)/p" mandatabase.txt
 
elif [ $command == vi ]
then
sed -n "/VIM(1)/,/VIM(1)/p" mandatabase.txt

elif [ $command == mv ]
then
sed -n "MV(1)/,/MV(1)/p" mandatabase.txt

else
echo "Sorry I can not help you!"
fi
