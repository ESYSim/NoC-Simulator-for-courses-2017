/****************************************************************************
** Meta object code from reading C++ file 'tools_para_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/tools_para_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tools_para_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ToolsParaDialog_t {
    QByteArrayData data[15];
    char stringdata0[195];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ToolsParaDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ToolsParaDialog_t qt_meta_stringdata_ToolsParaDialog = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ToolsParaDialog"
QT_MOC_LITERAL(1, 16, 19), // "indexProcessChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 3), // "pro"
QT_MOC_LITERAL(4, 41, 5), // "index"
QT_MOC_LITERAL(5, 47, 11), // "resizeEvent"
QT_MOC_LITERAL(6, 59, 13), // "QResizeEvent*"
QT_MOC_LITERAL(7, 73, 5), // "event"
QT_MOC_LITERAL(8, 79, 17), // "addProcessDialogs"
QT_MOC_LITERAL(9, 97, 15), // "addResultDialog"
QT_MOC_LITERAL(10, 113, 20), // "processProgessUpdate"
QT_MOC_LITERAL(11, 134, 15), // "processFinished"
QT_MOC_LITERAL(12, 150, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(13, 171, 10), // "exitStatus"
QT_MOC_LITERAL(14, 182, 12) // "ProcessError"

    },
    "ToolsParaDialog\0indexProcessChanged\0"
    "\0pro\0index\0resizeEvent\0QResizeEvent*\0"
    "event\0addProcessDialogs\0addResultDialog\0"
    "processProgessUpdate\0processFinished\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "ProcessError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ToolsParaDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   54,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    2,   59,    2, 0x08 /* Private */,
      11,    2,   64,    2, 0x08 /* Private */,
      14,    1,   69,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 12,    4,   13,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ToolsParaDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ToolsParaDialog *_t = static_cast<ToolsParaDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexProcessChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: _t->addProcessDialogs(); break;
        case 3: _t->addResultDialog(); break;
        case 4: _t->processProgessUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 6: _t->ProcessError((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ToolsParaDialog::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ToolsParaDialog::indexProcessChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ToolsParaDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_ToolsParaDialog.data,
      qt_meta_data_ToolsParaDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ToolsParaDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ToolsParaDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ToolsParaDialog.stringdata0))
        return static_cast<void*>(const_cast< ToolsParaDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int ToolsParaDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResultBaseDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ToolsParaDialog::indexProcessChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
