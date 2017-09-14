/****************************************************************************
** Meta object code from reading C++ file 'faults_config_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/faults_config_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faults_config_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FaultsConfigDialog_t {
    QByteArrayData data[16];
    char stringdata0[339];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultsConfigDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultsConfigDialog_t qt_meta_stringdata_FaultsConfigDialog = {
    {
QT_MOC_LITERAL(0, 0, 18), // "FaultsConfigDialog"
QT_MOC_LITERAL(1, 19, 26), // "typeComboBoxChangedHandler"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 5), // "index"
QT_MOC_LITERAL(4, 53, 28), // "routerComboBoxChangedHandler"
QT_MOC_LITERAL(5, 82, 26), // "portComboBoxChangedHandler"
QT_MOC_LITERAL(6, 109, 24), // "vcComboBoxChangedHandler"
QT_MOC_LITERAL(7, 134, 26), // "stateSpinboxChangedHandler"
QT_MOC_LITERAL(8, 161, 5), // "value"
QT_MOC_LITERAL(9, 167, 29), // "typicalComboBoxChangedHandler"
QT_MOC_LITERAL(10, 197, 24), // "insertButtonClickHandler"
QT_MOC_LITERAL(11, 222, 24), // "deleteButtonClickHandler"
QT_MOC_LITERAL(12, 247, 22), // "editButtonClickHandler"
QT_MOC_LITERAL(13, 270, 22), // "saveButtonClickHandler"
QT_MOC_LITERAL(14, 293, 20), // "okButtonClickHandler"
QT_MOC_LITERAL(15, 314, 24) // "cancelButtonClickHandler"

    },
    "FaultsConfigDialog\0typeComboBoxChangedHandler\0"
    "\0index\0routerComboBoxChangedHandler\0"
    "portComboBoxChangedHandler\0"
    "vcComboBoxChangedHandler\0"
    "stateSpinboxChangedHandler\0value\0"
    "typicalComboBoxChangedHandler\0"
    "insertButtonClickHandler\0"
    "deleteButtonClickHandler\0"
    "editButtonClickHandler\0saveButtonClickHandler\0"
    "okButtonClickHandler\0cancelButtonClickHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultsConfigDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x08 /* Private */,
       4,    1,   77,    2, 0x08 /* Private */,
       5,    1,   80,    2, 0x08 /* Private */,
       6,    1,   83,    2, 0x08 /* Private */,
       7,    1,   86,    2, 0x08 /* Private */,
       9,    1,   89,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FaultsConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FaultsConfigDialog *_t = static_cast<FaultsConfigDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->typeComboBoxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->routerComboBoxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->portComboBoxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->vcComboBoxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->stateSpinboxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->typicalComboBoxChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->insertButtonClickHandler(); break;
        case 7: _t->deleteButtonClickHandler(); break;
        case 8: _t->editButtonClickHandler(); break;
        case 9: _t->saveButtonClickHandler(); break;
        case 10: _t->okButtonClickHandler(); break;
        case 11: _t->cancelButtonClickHandler(); break;
        default: ;
        }
    }
}

const QMetaObject FaultsConfigDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_FaultsConfigDialog.data,
      qt_meta_data_FaultsConfigDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaultsConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultsConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaultsConfigDialog.stringdata0))
        return static_cast<void*>(const_cast< FaultsConfigDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int FaultsConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResultBaseDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
