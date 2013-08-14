# Script to check any changes made in files in a Linux NSC verion versus a
# clean kernel tree.

NSC=$1
KERNDIR=$2

if [ ! "$1" -o ! "$2" ]
then
  echo "Usage: audit.sh nsc-dir kernel-dir"
  exit 1
fi

SHOW_DIFS=$3

# 
pushd "$NSC" >/dev/null
find . -type f -name '*.[ch]' ! -name '*.parsed.c' |
  while read file
  do
    file=$(echo $file | sed 's/^\.\///')
    OUR_FILE=$file
    ORIG_FILE=${KERNDIR}/$file

    if [ -f "${OUR_FILE}" -a -f "${ORIG_FILE}" ]
    then
      if [ ! ${SHOW_DIFS} ]
      then
        diff -q "${OUR_FILE}" "${ORIG_FILE}" >/dev/null ||
          echo ${OUR_FILE} -- diff -u "${NSC}/${OUR_FILE}" "${ORIG_FILE}"
      else
        diff -pu "${OUR_FILE}" "${ORIG_FILE}"
      fi
    fi

  done
popd >/dev/null
