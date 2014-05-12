/****************************************************************************
** Meta object code from reading C++ file 'CaptureConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/examples/player/config/CaptureConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CaptureConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CaptureConfigPage_t {
    QByteArrayData data[14];
    char stringdata[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_CaptureConfigPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_CaptureConfigPage_t qt_meta_stringdata_CaptureConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 5),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 6),
QT_MOC_LITERAL(4, 32, 5),
QT_MOC_LITERAL(5, 38, 13),
QT_MOC_LITERAL(6, 52, 3),
QT_MOC_LITERAL(7, 56, 16),
QT_MOC_LITERAL(8, 73, 3),
QT_MOC_LITERAL(9, 77, 17),
QT_MOC_LITERAL(10, 95, 1),
QT_MOC_LITERAL(11, 97, 13),
QT_MOC_LITERAL(12, 111, 13),
QT_MOC_LITERAL(13, 125, 16)
    },
    "CaptureConfigPage\0apply\0\0cancel\0reset\0"
    "changeDirByUi\0dir\0changeFormatByUi\0"
    "fmt\0changeQualityByUi\0q\0formatChanged\0"
    "selectSaveDir\0browseCaptureDir\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CaptureConfigPage[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a,
       3,    0,   60,    2, 0x0a,
       4,    0,   61,    2, 0x0a,
       5,    1,   62,    2, 0x08,
       7,    1,   65,    2, 0x08,
       9,    1,   68,    2, 0x08,
      11,    1,   71,    2, 0x08,
      12,    0,   74,    2, 0x08,
      13,    0,   75,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CaptureConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CaptureConfigPage *_t = static_cast<CaptureConfigPage *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->cancel(); break;
        case 2: _t->reset(); break;
        case 3: _t->changeDirByUi((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->changeFormatByUi((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->changeQualityByUi((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->formatChanged((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 7: _t->selectSaveDir(); break;
        case 8: _t->browseCaptureDir(); break;
        default: ;
        }
    }
}

const QMetaObject CaptureConfigPage::staticMetaObject = {
    { &ConfigPageBase::staticMetaObject, qt_meta_stringdata_CaptureConfigPage.data,
      qt_meta_data_CaptureConfigPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *CaptureConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CaptureConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CaptureConfigPage.stringdata))
        return static_cast<void*>(const_cast< CaptureConfigPage*>(this));
    return ConfigPageBase::qt_metacast(_clname);
}

int CaptureConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ConfigPageBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
