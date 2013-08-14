#!/usr/bin/env bash

# Looks at the difference between files with extension .c.prepro
# and files of extension .parsed.c
#
# Written to analyse file size differences produced by the globaliser

find . -type f -iname '*.c' | grep -v ".parsed.c$" | 
while read f
do
    f=`echo $f | sed 's/.c$//'`
    
    if [ '!' '(' -e $f.parsed.c -a -e $f.c.prepro ')' ]; then 
        echo "$f no pc/pp"
        [ -e $f.parsed.c ] && echo "pc"
        [ -e $f.c.prepro ] && echo "pp"
        continue
    fi
    
    b1=`wc -c $f.parsed.c | awk '{ print $1 }'`
    b2=`wc -c $f.c.prepro | awk '{ print $1 }'`

    b3=`wc -L $f.parsed.c | awk '{ print $1 }'`
    b4=`wc -L $f.c.prepro | awk '{ print $1 }'`

    echo "$f $b1 - $b2 = "`echo $b1 - $b2 | bc`" $b3 - $b4 = "`echo $b3 - $b4 | bc`
done
