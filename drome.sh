#!/bin/sh


Hello () {
   echo "Shreyash Bhatkar ETA-48"
}


Hello


echo \?Drome
read n
function Drome
{
number=$n
rev=0
while [ $n -gt 0 ]
do
a=`expr $n % 10 `
n=`expr $n / 10 `
reverse=`expr $rev \* 10 + $a`
done
echo $reverse
if [ $number -eq $rev ]
then
    echo "Number is palindrome"
else
    echo "Number is not palindrome"
fi
}
r= `Drome $n`
echo "$r"
