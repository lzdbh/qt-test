#ifndef XXLIB_GLOBAL_H
#define XXLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef XXLIB_LIB
# define XXLIB_EXPORT Q_DECL_EXPORT
#else
# define XXLIB_EXPORT Q_DECL_IMPORT
#endif

#endif // XXLIB_GLOBAL_H
