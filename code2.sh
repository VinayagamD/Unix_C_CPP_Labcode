echo "Enter a String"
read s
z=`echo $s|wc -m`
while test$z -gt 0
do
z=`expr$z-1`
echo -n `echo $s| cut -c$z`
done
echo
