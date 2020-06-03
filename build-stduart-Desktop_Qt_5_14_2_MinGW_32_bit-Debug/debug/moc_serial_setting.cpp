/****************************************************************************
** Meta object code from reading C++ file 'serial_setting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../stduart/serial_setting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serial_setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_serial_setting_t {
    QByteArrayData data[19];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_serial_setting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_serial_setting_t qt_meta_stringdata_serial_setting = {
    {
QT_MOC_LITERAL(0, 0, 14), // "serial_setting"
QT_MOC_LITERAL(1, 15, 12), // "show_message"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 3), // "str"
QT_MOC_LITERAL(4, 33, 10), // "recv_ready"
QT_MOC_LITERAL(5, 44, 3), // "arr"
QT_MOC_LITERAL(6, 48, 20), // "setting_charge_notif"
QT_MOC_LITERAL(7, 69, 1), // "v"
QT_MOC_LITERAL(8, 71, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 93, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(10, 125, 5), // "index"
QT_MOC_LITERAL(11, 131, 33), // "on_comboBox_2_currentIndexCha..."
QT_MOC_LITERAL(12, 165, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(13, 189, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(14, 214, 4), // "arg1"
QT_MOC_LITERAL(15, 219, 26), // "on_checkBox_2_stateChanged"
QT_MOC_LITERAL(16, 246, 19), // "on_checkBox_clicked"
QT_MOC_LITERAL(17, 266, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(18, 288, 23) // "on_pushButton_5_clicked"

    },
    "serial_setting\0show_message\0\0str\0"
    "recv_ready\0arr\0setting_charge_notif\0"
    "v\0on_pushButton_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_comboBox_2_currentIndexChanged\0"
    "on_pushButton_4_clicked\0"
    "on_checkBox_stateChanged\0arg1\0"
    "on_checkBox_2_stateChanged\0"
    "on_checkBox_clicked\0on_checkBox_2_clicked\0"
    "on_pushButton_5_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_serial_setting[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    1,   77,    2, 0x06 /* Public */,
       6,    1,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   83,    2, 0x08 /* Private */,
       9,    1,   84,    2, 0x08 /* Private */,
      11,    1,   87,    2, 0x08 /* Private */,
      12,    0,   90,    2, 0x08 /* Private */,
      13,    1,   91,    2, 0x08 /* Private */,
      15,    1,   94,    2, 0x08 /* Private */,
      16,    0,   97,    2, 0x08 /* Private */,
      17,    0,   98,    2, 0x08 /* Private */,
      18,    0,   99,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QByteArray,    5,
    QMetaType::Void, QMetaType::QVariant,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void serial_setting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<serial_setting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->show_message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->recv_ready((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->setting_charge_notif((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_clicked(); break;
        case 4: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_2_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_4_clicked(); break;
        case 7: _t->on_checkBox_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_2_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkBox_clicked(); break;
        case 10: _t->on_checkBox_2_clicked(); break;
        case 11: _t->on_pushButton_5_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (serial_setting::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serial_setting::show_message)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (serial_setting::*)(QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serial_setting::recv_ready)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (serial_setting::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&serial_setting::setting_charge_notif)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject serial_setting::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_serial_setting.data,
    qt_meta_data_serial_setting,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *serial_setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *serial_setting::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_serial_setting.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int serial_setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void serial_setting::show_message(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void serial_setting::recv_ready(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void serial_setting::setting_charge_notif(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
