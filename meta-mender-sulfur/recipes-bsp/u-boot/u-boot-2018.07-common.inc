FILESEXTRAPATHS_prepend := "${THISDIR}/files:"

# Make sure this is an append, otherwise this might get applied before the BSP patches
SRC_URI_append_ni-sulfur-mender = " \
           file://0001-ni-zynq-Mender.io-support-for-NI-Ettus-Research-Sulf.patch \
           "
