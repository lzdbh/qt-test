/****************************************************************************
** Meta object code from reading C++ file 'AVDemuxer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/src/QtAV/AVDemuxer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AVDemuxer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__AVDemuxer_t {
    QByteArrayData data[10];
    char stringdata[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtAV__AVDemuxer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtAV__AVDemuxer_t qt_meta_stringdata_QtAV__AVDemuxer = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 7),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 8),
QT_MOC_LITERAL(4, 34, 5),
QT_MOC_LITERAL(5, 40, 13),
QT_MOC_LITERAL(6, 54, 1),
QT_MOC_LITERAL(7, 56, 18),
QT_MOC_LITERAL(8, 75, 17),
QT_MOC_LITERAL(9, 93, 6)
    },
    "QtAV::AVDemuxer\0started\0\0finished\0"
    "error\0QtAV::AVError\0e\0mediaStatusChanged\0"
    "QtAV::MediaStatus\0status\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__AVDemuxer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06,
       3,    0,   35,    2, 0x06,
       4,    1,   36,    2, 0x06,
       7,    1,   39,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

void QtAV::AVDemuxer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AVDemuxer *_t = static_cast<AVDemuxer *>(_o);
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->finished(); break;
        case 2: _t->error((*reinterpret_cast< const QtAV::AVError(*)>(_a[1]))); break;
        case 3: _t->mediaStatusChanged((*reinterpret_cast< QtAV::MediaStatus(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QtAV::MediaStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AVDemuxer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVDemuxer::started)) {
                *result = 0;
            }
        }
        {
            typedef void (AVDemuxer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVDemuxer::finished)) {
                *result = 1;
            }
        }
        {
            typedef void (AVDemuxer::*_t)(const QtAV::AVError & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVDemuxer::error)) {
                *result = 2;
            }
        }
        {
            typedef void (AVDemuxer::*_t)(QtAV::MediaStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AVDemuxer::mediaStatusChanged)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject QtAV::AVDemuxer::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtAV__AVDemuxer.data,
      qt_meta_data_QtAV__AVDemuxer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtAV::AVDemuxer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::AVDemuxer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__AVDemuxer.stringdata))
        return static_cast<void*>(const_cast< AVDemuxer*>(this));
    return QObject::qt_metacast(_clname);
}

int QtAV::AVDemuxer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QtAV::AVDemuxer::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtAV::AVDemuxer::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QtAV::AVDemuxer::error(const QtAV::AVError & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtAV::AVDemuxer::mediaStatusChanged(QtAV::MediaStatus _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
