#!/bin/sh

if [ $# -ne 3 ];then
	echo Usage: $0 kerndir base stackname 1>&2
	exit 1
fi

kerndir=$1
base=$2
stackname=$3

set -x
echo "Copying initial base files..."
cp -aur $base/* .

echo "Setting stack name to '$stackname'..."
sed -i 's/^stackname = .*/stackname = "'${stackname}'"/' SConscript || exit 1
sed -i 's/get_name() { return ".*"/get_name() { return "'${stackname}'"/' \
  nsc/sim_support.cpp || exit 1

if grep -q 'SConscript("'$(basename `pwd`)'/SConscript")' ../SConstruct
then
  echo " - SConstruct file already updated."
else
  echo 'SConscript("'$(basename `pwd`)'/SConscript")' >> ../SConstruct || exit 1
fi

echo "Cleaning..."
scons -uqc || exit 1

echo "Copying kernel source..."

# Should perhaps copy all of include/ and just grep out arch's we don't want
cp -r ${kerndir}/include/asm-x86/ include/ || exit 1
cp -r ${kerndir}/include/asm-generic/ include/ || exit 1
cp -r ${kerndir}/include/net/ include/ || exit 1
cp -r ${kerndir}/include/linux/ include/ || exit 1

find . -type f -name '*.[ch]' | grep -v "nsc/" |
  while read file
  do
    if [ -f ${kerndir}/$file ]; then
      chmod u+w ${file}
      echo ${kerndir}/${file} -> ${file}
      cp ${kerndir}/${file} ${file}
    else
      if echo ${file} | grep -E -q "linux/(autoconf|config).h"
      then
        echo " - ignoring ${file}..."
      else
        echo " - deleting ${file}..."
        rm ${file}
      fi
    fi
  done



echo "Patching..."

for i in $base/patches/*.patch
do
  echo " - $i"
  patch -p0 -i $i -t
done

echo "Ready."
