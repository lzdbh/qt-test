/****************************************************************************
** Meta object code from reading C++ file 'QQuickItemRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/qml/QmlAV/QQuickItemRenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QQuickItemRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__QQuickItemRenderer_t {
    QByteArrayData data[13];
    char stringdata[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtAV__QQuickItemRenderer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtAV__QQuickItemRenderer_t qt_meta_stringdata_QtAV__QQuickItemRenderer = {
    {
QT_MOC_LITERAL(0, 0, 24),
QT_MOC_LITERAL(1, 25, 13),
QT_MOC_LITERAL(2, 39, 0),
QT_MOC_LITERAL(3, 40, 15),
QT_MOC_LITERAL(4, 56, 28),
QT_MOC_LITERAL(5, 85, 23),
QT_MOC_LITERAL(6, 109, 6),
QT_MOC_LITERAL(7, 116, 8),
QT_MOC_LITERAL(8, 125, 8),
QT_MOC_LITERAL(9, 134, 16),
QT_MOC_LITERAL(10, 151, 7),
QT_MOC_LITERAL(11, 159, 17),
QT_MOC_LITERAL(12, 177, 18)
    },
    "QtAV::QQuickItemRenderer\0sourceChanged\0"
    "\0fillModeChanged\0QQuickItemRenderer::FillMode\0"
    "regionOfInterestChanged\0source\0fillMode\0"
    "FillMode\0regionOfInterest\0Stretch\0"
    "PreserveAspectFit\0PreserveAspectCrop\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__QQuickItemRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   34, // properties
       1,   46, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,
       3,    1,   30,    2, 0x06,
       5,    0,   33,    2, 0x06,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QObjectStar, 0x00495103,
       7, 0x80000000 | 8, 0x0049510b,
       9, QMetaType::QRectF, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

 // enums: name, flags, count, data
       8, 0x0,    3,   50,

 // enum data: key, value
      10, uint(QtAV::QQuickItemRenderer::Stretch),
      11, uint(QtAV::QQuickItemRenderer::PreserveAspectFit),
      12, uint(QtAV::QQuickItemRenderer::PreserveAspectCrop),

       0        // eod
};

void QtAV::QQuickItemRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QQuickItemRenderer *_t = static_cast<QQuickItemRenderer *>(_o);
        switch (_id) {
        case 0: _t->sourceChanged(); break;
        case 1: _t->fillModeChanged((*reinterpret_cast< QQuickItemRenderer::FillMode(*)>(_a[1]))); break;
        case 2: _t->regionOfInterestChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QQuickItemRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickItemRenderer::sourceChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (QQuickItemRenderer::*_t)(QQuickItemRenderer::FillMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickItemRenderer::fillModeChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (QQuickItemRenderer::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QQuickItemRenderer::regionOfInterestChanged)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject QtAV::QQuickItemRenderer::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_QtAV__QQuickItemRenderer.data,
      qt_meta_data_QtAV__QQuickItemRenderer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtAV::QQuickItemRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::QQuickItemRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__QQuickItemRenderer.stringdata))
        return static_cast<void*>(const_cast< QQuickItemRenderer*>(this));
    if (!strcmp(_clname, "VideoRenderer"))
        return static_cast< VideoRenderer*>(const_cast< QQuickItemRenderer*>(this));
    return QQuickItem::qt_metacast(_clname);
}

int QtAV::QQuickItemRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QObject**>(_v) = source(); break;
        case 1: *reinterpret_cast< FillMode*>(_v) = fillMode(); break;
        case 2: *reinterpret_cast< QRectF*>(_v) = regionOfInterest(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setSource(*reinterpret_cast< QObject**>(_v)); break;
        case 1: setFillMode(*reinterpret_cast< FillMode*>(_v)); break;
        case 2: setRegionOfInterest(*reinterpret_cast< QRectF*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QtAV::QQuickItemRenderer::sourceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void QtAV::QQuickItemRenderer::fillModeChanged(QQuickItemRenderer::FillMode _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QtAV::QQuickItemRenderer::regionOfInterestChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
