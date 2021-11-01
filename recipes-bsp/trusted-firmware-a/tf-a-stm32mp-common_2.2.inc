FILESEXTRAPATHS_prepend_stm32mpcommon := "${THISDIR}/tf-a-stm32mp:"

SECTION = "bootloaders"

LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://license.rst;md5=1dd070c98a281d18d9eefd938729b031"

SRC_URI = "git://github.com/km-tek/arm-trusted-firmware-stm32mp-v1.git;protocol=https;name=tfa;branch=v${TF_VERSION}-stm32mp"
SRCREV = "22a75566b53e64b5672a9d25845b77ec5379ad6a"

SRCREV_FORMAT = "tfa"
TF_VERSION = "2.2"
PV = "${TF_VERSION}+github+${SRCPV}"

S = "${WORKDIR}/git"
