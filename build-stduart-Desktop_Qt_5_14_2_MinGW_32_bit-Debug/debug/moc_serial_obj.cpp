/****************************************************************************
** Meta object code from reading C++ file 'serial_obj.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../work/stduart/stduart/serial_obj.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial_obj.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serial_obj_t {
    QByteArrayData data[16];
    char stringdata0[193];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serial_obj_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serial_obj_t qt_meta_stringdata_serial_obj = {
    {
QT_MOC_LITERAL(0, 0, 10), // "serial_obj"
QT_MOC_LITERAL(1, 11, 10), // "objmessage"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 3), // "str"
QT_MOC_LITERAL(4, 27, 13), // "statusbar_fix"
QT_MOC_LITERAL(5, 41, 1), // "v"
QT_MOC_LITERAL(6, 43, 11), // "sendmessage"
QT_MOC_LITERAL(7, 55, 4), // "recv"
QT_MOC_LITERAL(8, 60, 3), // "arr"
QT_MOC_LITERAL(9, 64, 15), // "setting_charged"
QT_MOC_LITERAL(10, 80, 12), // "recv_timeout"
QT_MOC_LITERAL(11, 93, 15), // "on_action_pulse"
QT_MOC_LITERAL(12, 109, 15), // "on_action_clear"
QT_MOC_LITERAL(13, 125, 13), // "on_action_top"
QT_MOC_LITERAL(14, 139, 16), // "on_action_bottom"
QT_MOC_LITERAL(15, 156, 36) // "on_recvbrowser_cursorPosition..."

    },
    "serial_obj\0objmessage\0\0str\0statusbar_fix\0"
    "v\0sendmessage\0recv\0arr\0setting_charged\0"
    "recv_timeout\0on_action_pulse\0"
    "on_action_clear\0on_action_top\0"
    "on_action_bottom\0on_recvbrowser_cursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serial_obj[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   75,    2, 0x0a /* Public */,
       7,    1,   78,    2, 0x0a /* Public */,
       9,    1,   81,    2, 0x0a /* Public */,
      10,    0,   84,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,
      14,    0,   88,    2, 0x08 /* Private */,
      15,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QVariant,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    8,
    QMetaType::Void, QMetaType::QVariant,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serial_obj::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<serial_obj *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->objmessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->statusbar_fix((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 2: _t->sendmessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->recv((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 4: _t->setting_charged((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 5: _t->recv_timeout(); break;
        case 6: _t->on_action_pulse(); break;
        case 7: _t->on_action_clear(); break;
        case 8: _t->on_action_top(); break;
        case 9: _t->on_action_bottom(); break;
        case 10: _t->on_recvbrowser_cursorPositionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (serial_obj::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serial_obj::objmessage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (serial_obj::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serial_obj::statusbar_fix)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject serial_obj::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_serial_obj.data,
    qt_meta_data_serial_obj,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *serial_obj::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serial_obj::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serial_obj.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int serial_obj::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void serial_obj::objmessage(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void serial_obj::statusbar_fix(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
