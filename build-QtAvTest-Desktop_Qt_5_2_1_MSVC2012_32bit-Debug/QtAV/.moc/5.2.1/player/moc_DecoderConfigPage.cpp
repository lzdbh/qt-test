/****************************************************************************
** Meta object code from reading C++ file 'DecoderConfigPage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/examples/player/config/DecoderConfigPage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DecoderConfigPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DecoderConfigPage_t {
    QByteArrayData data[13];
    char stringdata[158];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_DecoderConfigPage_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_DecoderConfigPage_t qt_meta_stringdata_DecoderConfigPage = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 5),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 6),
QT_MOC_LITERAL(4, 32, 5),
QT_MOC_LITERAL(5, 38, 25),
QT_MOC_LITERAL(6, 64, 10),
QT_MOC_LITERAL(7, 75, 12),
QT_MOC_LITERAL(8, 88, 13),
QT_MOC_LITERAL(9, 102, 18),
QT_MOC_LITERAL(10, 121, 2),
QT_MOC_LITERAL(11, 124, 16),
QT_MOC_LITERAL(12, 141, 15)
    },
    "DecoderConfigPage\0apply\0\0cancel\0reset\0"
    "videoDecoderEnableChanged\0priorityUp\0"
    "priorityDown\0onDecSelected\0"
    "DecoderItemWidget*\0iw\0updateDecodersUi\0"
    "onConfigChanged\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DecoderConfigPage[] = {

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
       5,    0,   62,    2, 0x08,
       6,    0,   63,    2, 0x08,
       7,    0,   64,    2, 0x08,
       8,    1,   65,    2, 0x08,
      11,    0,   68,    2, 0x08,
      12,    0,   69,    2, 0x08,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DecoderConfigPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DecoderConfigPage *_t = static_cast<DecoderConfigPage *>(_o);
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->cancel(); break;
        case 2: _t->reset(); break;
        case 3: _t->videoDecoderEnableChanged(); break;
        case 4: _t->priorityUp(); break;
        case 5: _t->priorityDown(); break;
        case 6: _t->onDecSelected((*reinterpret_cast< DecoderItemWidget*(*)>(_a[1]))); break;
        case 7: _t->updateDecodersUi(); break;
        case 8: _t->onConfigChanged(); break;
        default: ;
        }
    }
}

const QMetaObject DecoderConfigPage::staticMetaObject = {
    { &ConfigPageBase::staticMetaObject, qt_meta_stringdata_DecoderConfigPage.data,
      qt_meta_data_DecoderConfigPage,  qt_static_metacall, 0, 0}
};


const QMetaObject *DecoderConfigPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DecoderConfigPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DecoderConfigPage.stringdata))
        return static_cast<void*>(const_cast< DecoderConfigPage*>(this));
    return ConfigPageBase::qt_metacast(_clname);
}

int DecoderConfigPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
