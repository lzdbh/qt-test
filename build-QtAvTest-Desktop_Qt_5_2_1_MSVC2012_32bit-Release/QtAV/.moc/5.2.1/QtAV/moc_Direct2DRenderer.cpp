/****************************************************************************
** Meta object code from reading C++ file 'Direct2DRenderer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../QtAvTest/QtAV/src/QtAV/Direct2DRenderer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Direct2DRenderer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QtAV__Direct2DRenderer_t {
    QByteArrayData data[1];
    char stringdata[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QtAV__Direct2DRenderer_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QtAV__Direct2DRenderer_t qt_meta_stringdata_QtAV__Direct2DRenderer = {
    {
QT_MOC_LITERAL(0, 0, 22)
    },
    "QtAV::Direct2DRenderer\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QtAV__Direct2DRenderer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QtAV::Direct2DRenderer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QtAV::Direct2DRenderer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QtAV__Direct2DRenderer.data,
      qt_meta_data_QtAV__Direct2DRenderer,  qt_static_metacall, 0, 0}
};


const QMetaObject *QtAV::Direct2DRenderer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QtAV::Direct2DRenderer::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QtAV__Direct2DRenderer.stringdata))
        return static_cast<void*>(const_cast< Direct2DRenderer*>(this));
    if (!strcmp(_clname, "VideoRenderer"))
        return static_cast< VideoRenderer*>(const_cast< Direct2DRenderer*>(this));
    return QWidget::qt_metacast(_clname);
}

int QtAV::Direct2DRenderer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
