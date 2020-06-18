/****************************************************************************
** Meta object code from reading C++ file 'recv_area.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../stduart/recv_area.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'recv_area.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_recv_area_t {
    QByteArrayData data[13];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_recv_area_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_recv_area_t qt_meta_stringdata_recv_area = {
    {
QT_MOC_LITERAL(0, 0, 9), // "recv_area"
QT_MOC_LITERAL(1, 10, 4), // "recv"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 3), // "arr"
QT_MOC_LITERAL(4, 20, 15), // "recv_buttom_cmd"
QT_MOC_LITERAL(5, 36, 3), // "cmd"
QT_MOC_LITERAL(6, 40, 15), // "setting_charged"
QT_MOC_LITERAL(7, 56, 1), // "v"
QT_MOC_LITERAL(8, 58, 3), // "aaa"
QT_MOC_LITERAL(9, 62, 12), // "recv_timeout"
QT_MOC_LITERAL(10, 75, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(11, 102, 33), // "on_verticalScrollBar_valueCha..."
QT_MOC_LITERAL(12, 136, 5) // "value"

    },
    "recv_area\0recv\0\0arr\0recv_buttom_cmd\0"
    "cmd\0setting_charged\0v\0aaa\0recv_timeout\0"
    "on_textBrowser_textChanged\0"
    "on_verticalScrollBar_valueChanged\0"
    "value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_recv_area[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
       9,    0,   61,    2, 0x08 /* Private */,
      10,    0,   62,    2, 0x08 /* Private */,
      11,    1,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Short,    5,
    QMetaType::Void, QMetaType::QVariant,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,

       0        // eod
};

void recv_area::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<recv_area *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->recv_buttom_cmd((*reinterpret_cast< qint16(*)>(_a[1]))); break;
        case 2: _t->setting_charged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->aaa((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->recv_timeout(); break;
        case 5: _t->on_textBrowser_textChanged(); break;
        case 6: _t->on_verticalScrollBar_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject recv_area::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_recv_area.data,
    qt_meta_data_recv_area,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *recv_area::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *recv_area::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_recv_area.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int recv_area::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
