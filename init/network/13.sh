#for OUT in $(ifconfig en0 | grep "inet " | awk '{print $2}'); do nslookup $OUT | grep name | awk '{print $4}'; done
#or jast hostname
a-a3.21-school.ru
