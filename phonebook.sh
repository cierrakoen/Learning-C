#!/bin/bash
#Cierra Koen
#ckoen1@student.gsu.edu

echo "Welcome to the phonebook"
echo "1: adds a person and name"
echo "2: search for someone"
echo "3: edit a name and number"
echo "4: read the phone book"

read answer 
if [ $answer == 1 ]
then
echo -n "Person's name: "
read name

echo -n "Person's number: "
read number

echo "The number has been added"
echo -e "$name - $number" >> phonebook.txt

elif [ $answer == 2 ]
then
echo -n "Search for the name:"
read namesearch
fgrep $namesearch phonebook.txt
exit 0

elif [ $answer == 3 ]
then
echo -n "Whose name do you want to edit?"
read editname
echo -n "What would you like to change it to?"
read newname
sed -i "s/$editname/$newname/g" phonebook.txt
exit 0

elif [ $answer == 4 ]
then
sort phonebook.txt | cat phonebook.txt
exit 0

fi
