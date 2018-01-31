/****************************************************************************
** Meta object code from reading C++ file 'parallelclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../parallelclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'parallelclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ParallelClass_t {
    QByteArrayData data[11];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ParallelClass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ParallelClass_t qt_meta_stringdata_ParallelClass = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ParallelClass"
QT_MOC_LITERAL(1, 14, 19), // "indexProcessChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "pro"
QT_MOC_LITERAL(4, 39, 5), // "index"
QT_MOC_LITERAL(5, 45, 17), // "addProcessDialogs"
QT_MOC_LITERAL(6, 63, 20), // "processProgessUpdate"
QT_MOC_LITERAL(7, 84, 15), // "processFinished"
QT_MOC_LITERAL(8, 100, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(9, 121, 10), // "exitStatus"
QT_MOC_LITERAL(10, 132, 12) // "ProcessError"

    },
    "ParallelClass\0indexProcessChanged\0\0"
    "pro\0index\0addProcessDialogs\0"
    "processProgessUpdate\0processFinished\0"
    "QProcess::ExitStatus\0exitStatus\0"
    "ProcessError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ParallelClass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   44,    2, 0x08 /* Private */,
       6,    2,   45,    2, 0x08 /* Private */,
       7,    2,   50,    2, 0x08 /* Private */,
      10,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    4,    9,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void ParallelClass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ParallelClass *_t = static_cast<ParallelClass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->indexProcessChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->addProcessDialogs(); break;
        case 2: _t->processProgessUpdate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->processFinished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 4: _t->ProcessError((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ParallelClass::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ParallelClass::indexProcessChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ParallelClass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_ParallelClass.data,
      qt_meta_data_ParallelClass,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ParallelClass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ParallelClass::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ParallelClass.stringdata0))
        return static_cast<void*>(const_cast< ParallelClass*>(this));
    return QObject::qt_metacast(_clname);
}

int ParallelClass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ParallelClass::indexProcessChanged(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
