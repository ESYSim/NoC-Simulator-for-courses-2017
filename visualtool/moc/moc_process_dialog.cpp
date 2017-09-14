/****************************************************************************
** Meta object code from reading C++ file 'process_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/process_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'process_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProcessDialog_t {
    QByteArrayData data[14];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProcessDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProcessDialog_t qt_meta_stringdata_ProcessDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProcessDialog"
QT_MOC_LITERAL(1, 14, 22), // "processProgressChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 3), // "pro"
QT_MOC_LITERAL(5, 48, 15), // "processFinished"
QT_MOC_LITERAL(6, 64, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(7, 85, 10), // "exitStatus"
QT_MOC_LITERAL(8, 96, 11), // "processCerr"
QT_MOC_LITERAL(9, 108, 5), // "start"
QT_MOC_LITERAL(10, 114, 15), // "readProcessCout"
QT_MOC_LITERAL(11, 130, 15), // "readProcessCerr"
QT_MOC_LITERAL(12, 146, 13), // "processFinish"
QT_MOC_LITERAL(13, 160, 8) // "exitCode"

    },
    "ProcessDialog\0processProgressChanged\0"
    "\0index\0pro\0processFinished\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "processCerr\0start\0readProcessCout\0"
    "readProcessCerr\0processFinish\0exitCode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProcessDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   49,    2, 0x06 /* Public */,
       5,    2,   54,    2, 0x06 /* Public */,
       8,    1,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    2,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    3,    7,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,   13,    7,

       0        // eod
};

void ProcessDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ProcessDialog *_t = static_cast<ProcessDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processProgressChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 2: _t->processCerr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->start(); break;
        case 4: _t->readProcessCout(); break;
        case 5: _t->readProcessCerr(); break;
        case 6: _t->processFinish((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ProcessDialog::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessDialog::processProgressChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ProcessDialog::*_t)(int , QProcess::ExitStatus );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessDialog::processFinished)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ProcessDialog::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ProcessDialog::processCerr)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject ProcessDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_ProcessDialog.data,
      qt_meta_data_ProcessDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ProcessDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProcessDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ProcessDialog.stringdata0))
        return static_cast<void*>(const_cast< ProcessDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int ProcessDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void ProcessDialog::processProgressChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProcessDialog::processFinished(int _t1, QProcess::ExitStatus _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProcessDialog::processCerr(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
