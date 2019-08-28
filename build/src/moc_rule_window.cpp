/****************************************************************************
** Meta object code from reading C++ file 'rule_window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../src/rule_window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rule_window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RuleWindow_t {
    QByteArrayData data[13];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RuleWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RuleWindow_t qt_meta_stringdata_RuleWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RuleWindow"
QT_MOC_LITERAL(1, 11, 19), // "handleButtonClicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 16), // "QAbstractButton*"
QT_MOC_LITERAL(4, 49, 6), // "button"
QT_MOC_LITERAL(5, 56, 14), // "handleItemEdit"
QT_MOC_LITERAL(6, 71, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 89, 4), // "item"
QT_MOC_LITERAL(8, 94, 22), // "handleSelectionChanged"
QT_MOC_LITERAL(9, 117, 20), // "handleCompileClicked"
QT_MOC_LITERAL(10, 138, 19), // "handleMoveUpClicked"
QT_MOC_LITERAL(11, 158, 21), // "handleMoveDownClicked"
QT_MOC_LITERAL(12, 180, 19) // "handleRemoveClicked"

    },
    "RuleWindow\0handleButtonClicked\0\0"
    "QAbstractButton*\0button\0handleItemEdit\0"
    "QTableWidgetItem*\0item\0handleSelectionChanged\0"
    "handleCompileClicked\0handleMoveUpClicked\0"
    "handleMoveDownClicked\0handleRemoveClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RuleWindow[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       5,    1,   52,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    0,   57,    2, 0x08 /* Private */,
      11,    0,   58,    2, 0x08 /* Private */,
      12,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RuleWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RuleWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handleButtonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 1: _t->handleItemEdit((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 2: _t->handleSelectionChanged(); break;
        case 3: _t->handleCompileClicked(); break;
        case 4: _t->handleMoveUpClicked(); break;
        case 5: _t->handleMoveDownClicked(); break;
        case 6: _t->handleRemoveClicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RuleWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_RuleWindow.data,
    qt_meta_data_RuleWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RuleWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RuleWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RuleWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int RuleWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
