grep "undefined reference" | 
perl -pe 'split;$_="$_[-1]";s/^.(.*).$/\1\n/;' |
sort |
uniq -c |
sort -n
