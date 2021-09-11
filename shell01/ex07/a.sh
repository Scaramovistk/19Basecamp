#!/bin/bash
cat /etc/passwd | grep -v "#"  | awk 'NR%2==0'| cut -f1 -d":" | rev | sort -r | awk 'NR<'$FT_LINE1'==0'| awk 'NR>'$FT_LINE2-$FT_LINE1+1'==0'| awk '{printf "%s, ",$0}' | sed 's/, *$/./g'