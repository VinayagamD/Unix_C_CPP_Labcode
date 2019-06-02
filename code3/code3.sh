echo -n "Enter the number of names"
read n
echo "Enter the names"
if test -f "names.txt"
then rm names.txt
fi
while test $((n)) -gt 0
do
read s
echo $s|cat>>names.txt
n=`expr $n-1`
done
echo "The Alphabetical order for the enter names is:"
sort names.txt
