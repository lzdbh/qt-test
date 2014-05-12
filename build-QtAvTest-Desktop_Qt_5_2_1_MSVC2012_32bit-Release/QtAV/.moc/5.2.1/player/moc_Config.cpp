/****************************************************************************
** Meta object code from reading C++ file 'Config.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/examples/player/config/Config.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Config.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Config_t {
    QByteArrayData data[15];
    char stringdata[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Config_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Config_t qt_meta_stringdata_Config = {
    {
QT_MOC_LITERAL(0, 0, 6),
QT_MOC_LITERAL(1, 7, 22),
QT_MOC_LITERAL(2, 30, 0),
QT_MOC_LITERAL(3, 31, 1),
QT_MOC_LITERAL(4, 33, 22),
QT_MOC_LITERAL(5, 56, 29),
QT_MOC_LITERAL(6, 86, 1),
QT_MOC_LITERAL(7, 88, 25),
QT_MOC_LITERAL(8, 114, 1),
QT_MOC_LITERAL(9, 116, 17),
QT_MOC_LITERAL(10, 134, 3),
QT_MOC_LITERAL(11, 138, 20),
QT_MOC_LITERAL(12, 159, 3),
QT_MOC_LITERAL(13, 163, 21),
QT_MOC_LITERAL(14, 185, 7)
    },
    "Config\0decodingThreadsChanged\0\0n\0"
    "decoderPriorityChanged\0"
    "QVector<QtAV::VideoDecoderId>\0p\0"
    "registeredDecodersChanged\0r\0"
    "captureDirChanged\0dir\0captureFormatChanged\0"
    "fmt\0captureQualityChanged\0quality\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Config[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    1,   47,    2, 0x06,
       7,    1,   50,    2, 0x06,
       9,    1,   53,    2, 0x06,
      11,    1,   56,    2, 0x06,
      13,    1,   59,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    8,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void Config::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Config *_t = static_cast<Config *>(_o);
        switch (_id) {
        case 0: _t->decodingThreadsChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->decoderPriorityChanged((*reinterpret_cast< const QVector<QtAV::VideoDecoderId>(*)>(_a[1]))); break;
        case 2: _t->registeredDecodersChanged((*reinterpret_cast< const QVector<QtAV::VideoDecoderId>(*)>(_a[1]))); break;
        case 3: _t->captureDirChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->captureFormatChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 5: _t->captureQualityChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Config::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::decodingThreadsChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Config::*_t)(const QVector<QtAV::VideoDecoderId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::decoderPriorityChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Config::*_t)(const QVector<QtAV::VideoDecoderId> & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::registeredDecodersChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Config::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::captureDirChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Config::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::captureFormatChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (Config::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Config::captureQualityChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Config::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Config.data,
      qt_meta_data_Config,  qt_static_metacall, 0, 0}
};


const QMetaObject *Config::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Config::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Config.stringdata))
        return static_cast<void*>(const_cast< Config*>(this));
    return QObject::qt_metacast(_clname);
}

int Config::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Config::decodingThreadsChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Config::decoderPriorityChanged(const QVector<QtAV::VideoDecoderId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Config::registeredDecodersChanged(const QVector<QtAV::VideoDecoderId> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Config::captureDirChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Config::captureFormatChanged(const QByteArray & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Config::captureQualityChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
