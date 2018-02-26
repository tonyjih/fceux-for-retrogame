#!/bin/sh

OPK_NAME=gcw0_fceux_2017.opk
echo ${OPK_NAME}

rm -f ${OPK_NAME}
mksquashfs bin ${OPK_NAME} -all-root -noappend -no-exports

rm -f bin/fceux
