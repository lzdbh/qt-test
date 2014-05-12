TEMPLATE = subdirs

SUBDIRS +=zsPlayer libQtAV
#zsPlayer.depends += libQtAV
libQtAV.file = QtAV/QtAV.pro
#include(QtAV/root.pri)
