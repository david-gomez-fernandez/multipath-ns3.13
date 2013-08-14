kerndir=$1
base=$2
stackname=$3

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
cp -r ${kerndir}/include/asm-i386/* include/asm-i386/
cp -r ${kerndir}/include/asm-generic/* include/asm-generic/
cp -r ${kerndir}/include/net/* include/net/
cp -r ${kerndir}/include/linux/* include/linux/

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
  patch -p0 -i $i -t || exit 1
done

echo "Ready."
