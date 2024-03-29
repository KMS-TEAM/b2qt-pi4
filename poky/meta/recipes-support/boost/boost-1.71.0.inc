# The Boost web site provides free peer-reviewed portable
# C++ source libraries. The emphasis is on libraries which
# work well with the C++ Standard Library. The libraries are
# intended to be widely useful, and are in regular use by
# thousands of programmers across a broad spectrum of applications.
HOMEPAGE = "http://www.boost.org/"
LICENSE = "BSL-1.0 & MIT & Python-2.0"
LIC_FILES_CHKSUM = "file://LICENSE_1_0.txt;md5=e4224ccaecb14d942c71d31bef20d78c"

BOOST_VER = "${@"_".join(d.getVar("PV").split("."))}"
BOOST_MAJ = "${@"_".join(d.getVar("PV").split(".")[0:2])}"
BOOST_P = "boost_${BOOST_VER}"

SRC_URI = "https://dl.bintray.com/boostorg/release/${PV}/source/${BOOST_P}.tar.bz2 \
           https://ftp.osuosl.org/pub/blfs/conglomeration/boost/${BOOST_P}.tar.bz2 \
           "
SRC_URI[md5sum] = "4cdf9b5c2dc01fb2b7b733d5af30e558"
SRC_URI[sha256sum] = "d73a8da01e8bf8c7eda40b4c84915071a8c8a0df4a6734537ddde4a8580524ee"

UPSTREAM_CHECK_URI = "http://www.boost.org/users/download/"
UPSTREAM_CHECK_REGEX = "boostorg/release/(?P<pver>.*)/source/"

S = "${WORKDIR}/${BOOST_P}"
