/****************************************************************************
** Meta object code from reading C++ file 'VideoOutput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/src/QtAV/VideoOutput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoOutput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__VideoOutput_t {
    QByteArrayData data[18];
    char stringdata[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtAV__VideoOutput_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtAV__VideoOutput_t qt_meta_stringdata_QtAV__VideoOutput = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 23),
QT_MOC_LITERAL(2, 42, 0),
QT_MOC_LITERAL(3, 43, 21),
QT_MOC_LITERAL(4, 65, 25),
QT_MOC_LITERAL(5, 91, 18),
QT_MOC_LITERAL(6, 110, 17),
QT_MOC_LITERAL(7, 128, 5),
QT_MOC_LITERAL(8, 134, 15),
QT_MOC_LITERAL(9, 150, 10),
QT_MOC_LITERAL(10, 161, 17),
QT_MOC_LITERAL(11, 179, 10),
QT_MOC_LITERAL(12, 190, 8),
QT_MOC_LITERAL(13, 199, 3),
QT_MOC_LITERAL(14, 203, 10),
QT_MOC_LITERAL(15, 214, 16),
QT_MOC_LITERAL(16, 231, 14),
QT_MOC_LITERAL(17, 246, 18)
    },
    "QtAV::VideoOutput\0regionOfInterestChanged\0"
    "\0outAspectRatioChanged\0outAspectRatioModeChanged\0"
    "OutAspectRatioMode\0brightnessChanged\0"
    "value\0contrastChanged\0hueChanged\0"
    "saturationChanged\0brightness\0contrast\0"
    "hue\0saturation\0regionOfInterest\0"
    "outAspectRatio\0outAspectRatioMode\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__VideoOutput[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06,
       3,    1,   52,    2, 0x06,
       4,    1,   55,    2, 0x06,
       6,    1,   58,    2, 0x06,
       8,    1,   61,    2, 0x06,
       9,    1,   64,    2, 0x06,
      10,    1,   67,    2, 0x06,

 // signals: parameters
    QMetaType::Void, QMetaType::QRectF,    2,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    7,
    QMetaType::Void, QMetaType::QReal,    7,

 // properties: name, type, flags
      11, QMetaType::QReal, 0x00495103,
      12, QMetaType::QReal, 0x00495103,
      13, QMetaType::QReal, 0x00495103,
      14, QMetaType::QReal, 0x00495103,
      15, QMetaType::QRectF, 0x00495103,
      16, QMetaType::QReal, 0x00495103,
      17, 0x80000000 | 5, 0x0049510b,

 // properties: notify_signal_id
       3,
       4,
       5,
       6,
       0,
       1,
       2,

 // enums: name, flags, count, data

 // enum data: key, value

       0        // eod
};

void QtAV::VideoOutput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoOutput *_t = static_cast<VideoOutput *>(_o);
        switch (_id) {
        case 0: _t->regionOfInterestChanged((*reinterpret_cast< const QRectF(*)>(_a[1]))); break;
        case 1: _t->outAspectRatioChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 2: _t->outAspectRatioModeChanged((*reinterpret_cast< OutAspectRatioMode(*)>(_a[1]))); break;
        case 3: _t->brightnessChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 4: _t->contrastChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 5: _t->hueChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 6: _t->saturationChanged((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoOutput::*_t)(const QRectF & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::regionOfInterestChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoOutput::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::outAspectRatioChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (VideoOutput::*_t)(OutAspectRatioMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::outAspectRatioModeChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VideoOutput::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::brightnessChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (VideoOutput::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::contrastChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (VideoOutput::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::hueChanged)) {
                *result = 5;
            }
        }
        {
            typedef void (VideoOutput::*_t)(qreal );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoOutput::saturationChanged)) {
                *result = 6;
            }
        }
    }
}

const QMetaObject QtAV::VideoOutput::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QtAV__VideoOutput.data,
      qt_meta_data_QtAV__VideoOutput,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtAV::VideoOutput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::VideoOutput::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__VideoOutput.stringdata))
        return static_cast<void*>(const_cast< VideoOutput*>(this));
    if (!strcmp(_clname, "VideoRenderer"))
        return static_cast< VideoRenderer*>(const_cast< VideoOutput*>(this));
    return QObject::qt_metacast(_clname);
}

int QtAV::VideoOutput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = brightness(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = contrast(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = hue(); break;
        case 3: *reinterpret_cast< qreal*>(_v) = saturation(); break;
        case 4: *reinterpret_cast< QRectF*>(_v) = regionOfInterest(); break;
        case 5: *reinterpret_cast< qreal*>(_v) = outAspectRatio(); break;
        case 6: *reinterpret_cast< OutAspectRatioMode*>(_v) = outAspectRatioMode(); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setBrightness(*reinterpret_cast< qreal*>(_v)); break;
        case 1: setContrast(*reinterpret_cast< qreal*>(_v)); break;
        case 2: setHue(*reinterpret_cast< qreal*>(_v)); break;
        case 3: setSaturation(*reinterpret_cast< qreal*>(_v)); break;
        case 4: setRegionOfInterest(*reinterpret_cast< QRectF*>(_v)); break;
        case 5: setOutAspectRatio(*reinterpret_cast< qreal*>(_v)); break;
        case 6: setOutAspectRatioMode(*reinterpret_cast< OutAspectRatioMode*>(_v)); break;
        }
        _id -= 7;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtAV::VideoOutput::regionOfInterestChanged(const QRectF & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QtAV::VideoOutput::outAspectRatioChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtAV::VideoOutput::outAspectRatioModeChanged(OutAspectRatioMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QtAV::VideoOutput::brightnessChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QtAV::VideoOutput::contrastChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QtAV::VideoOutput::hueChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QtAV::VideoOutput::saturationChanged(qreal _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_END_MOC_NAMESPACE
