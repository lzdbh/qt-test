/****************************************************************************
** Meta object code from reading C++ file 'AVThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/src/QtAV/AVThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AVThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__AVThread_t {
    QByteArrayData data[6];
    char stringdata[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtAV__AVThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtAV__AVThread_t qt_meta_stringdata_QtAV__AVThread = {
    {
QT_MOC_LITERAL(0, 0, 14),
QT_MOC_LITERAL(1, 15, 4),
QT_MOC_LITERAL(2, 20, 0),
QT_MOC_LITERAL(3, 21, 5),
QT_MOC_LITERAL(4, 27, 1),
QT_MOC_LITERAL(5, 29, 12)
    },
    "QtAV::AVThread\0stop\0\0pause\0p\0nextAndPause\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__AVThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a,
       3,    1,   30,    2, 0x0a,
       5,    0,   33,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void QtAV::AVThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AVThread *_t = static_cast<AVThread *>(_o);
        switch (_id) {
        case 0: _t->stop(); break;
        case 1: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->nextAndPause(); break;
        default: ;
        }
    }
}

const QMetaObject QtAV::AVThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_QtAV__AVThread.data,
      qt_meta_data_QtAV__AVThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtAV::AVThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::AVThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__AVThread.stringdata))
        return static_cast<void*>(const_cast< AVThread*>(this));
    return QThread::qt_metacast(_clname);
}

int QtAV::AVThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
