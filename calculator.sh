#!/bin/bash
#Calculator Program
#Cierra Koen
#ckoen1@student.gsu.edu
echo "Welocme to the Calculator!"

count="yes"
while [ $count == "yes" ]
do
echo "Enter a number"
read x1
echo "Enter anothother"
read x2
echo "Choose an operation below"
echo "1: Addition"
echo "2: Subtraction"
echo "3: Multipication"
echo "4: Divison"
echo "5: Modulo"
echo "6: Cancel"
echo "7: Clear"
read num

if [ $num == 1 ]
then 
sum=`expr $x1 + x2`
echo "the sum of $x1 and $x2 is $sum"

elif [ $num == 2 ]
then
sum= `expr $x1 - $x2`
echo "$x2 subtracted from $x1 is $sum"

elif [ $num == 3 ]
then
sum=`expr $x1 \* $x2`
echo "The product of $x1 and $x2 is $sum"

elif [ $num == 4 ]
then
sum=`expr $x1 / $x2 `
echo "When you divide $x1 by $x2 then you get $sum"

elif [ $num == 5 ]
then
sum=`expr $x1 % $x2`
echo " The modulus of $x1 by $x2 is $sum"
 
elif [ $num == 6 ]
then
break

elif [ $num == 7 ]
then 
sum=0
echo "Cleared"

fi

num1=$sum
echo "Do you want to continue (yes/no)"
read count
done
