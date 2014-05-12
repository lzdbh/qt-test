/****************************************************************************
** Meta object code from reading C++ file 'VideoEQConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/examples/player/config/VideoEQConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VideoEQConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_VideoEQConfigPage_t {
    QByteArrayData data[10];
    char stringdata[137];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_VideoEQConfigPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_VideoEQConfigPage_t qt_meta_stringdata_VideoEQConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 17),
QT_MOC_LITERAL(4, 51, 15),
QT_MOC_LITERAL(5, 67, 10),
QT_MOC_LITERAL(6, 78, 17),
QT_MOC_LITERAL(7, 96, 11),
QT_MOC_LITERAL(8, 108, 7),
QT_MOC_LITERAL(9, 116, 19)
    },
    "VideoEQConfigPage\0engineChanged\0\0"
    "brightnessChanged\0contrastChanged\0"
    "hueChanegd\0saturationChanged\0onGlobalSet\0"
    "onReset\0onEngineChangedByUI\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VideoEQConfigPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06,
       3,    1,   55,    2, 0x06,
       4,    1,   58,    2, 0x06,
       5,    1,   61,    2, 0x06,
       6,    1,   64,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       7,    1,   67,    2, 0x08,
       8,    0,   70,    2, 0x08,
       9,    0,   71,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void VideoEQConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        VideoEQConfigPage *_t = static_cast<VideoEQConfigPage *>(_o);
        switch (_id) {
        case 0: _t->engineChanged(); break;
        case 1: _t->brightnessChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->contrastChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->hueChanegd((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->saturationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onGlobalSet((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onReset(); break;
        case 7: _t->onEngineChangedByUI(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (VideoEQConfigPage::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoEQConfigPage::engineChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (VideoEQConfigPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoEQConfigPage::brightnessChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (VideoEQConfigPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoEQConfigPage::contrastChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (VideoEQConfigPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoEQConfigPage::hueChanegd)) {
                *result = 3;
            }
        }
        {
            typedef void (VideoEQConfigPage::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&VideoEQConfigPage::saturationChanged)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject VideoEQConfigPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_VideoEQConfigPage.data,
      qt_meta_data_VideoEQConfigPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *VideoEQConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoEQConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VideoEQConfigPage.stringdata))
        return static_cast<void*>(const_cast< VideoEQConfigPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int VideoEQConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void VideoEQConfigPage::engineChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void VideoEQConfigPage::brightnessChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void VideoEQConfigPage::contrastChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void VideoEQConfigPage::hueChanegd(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void VideoEQConfigPage::saturationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
