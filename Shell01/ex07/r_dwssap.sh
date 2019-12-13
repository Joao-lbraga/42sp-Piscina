#!/bin/sh
cat /etc/passwd | grep -v "#" | awk '{if(NR%2==0)print}' | cut -d ':' -f1 | rev | sort -r | awk "NR<=$FT_LINE2 && NR>=$FT_LINE1" | sed -e 's/$/,/g' | tr '\n' ' ' | sed -e 's/, $/./' | tr -d '\n' 
