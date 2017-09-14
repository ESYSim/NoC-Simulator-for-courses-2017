/****************************************************************************
** Meta object code from reading C++ file 'nocwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../nocwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'nocwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Integrator_t {
    QByteArrayData data[9];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Integrator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Integrator_t qt_meta_stringdata_Integrator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Integrator"
QT_MOC_LITERAL(1, 11, 16), // "flowEventHandler"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 8), // "QAction*"
QT_MOC_LITERAL(4, 38, 6), // "action"
QT_MOC_LITERAL(5, 45, 9), // "EventCode"
QT_MOC_LITERAL(6, 55, 1), // "e"
QT_MOC_LITERAL(7, 57, 30), // "resultTabCurrentChangedHandler"
QT_MOC_LITERAL(8, 88, 5) // "index"

    },
    "Integrator\0flowEventHandler\0\0QAction*\0"
    "action\0EventCode\0e\0resultTabCurrentChangedHandler\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Integrator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       1,    1,   32,    2, 0x08 /* Private */,
       7,    1,   35,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void Integrator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Integrator *_t = static_cast<Integrator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flowEventHandler((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 1: _t->flowEventHandler((*reinterpret_cast< EventCode(*)>(_a[1]))); break;
        case 2: _t->resultTabCurrentChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Integrator::staticMetaObject = {
    { &RibbonMainWindow::staticMetaObject, qt_meta_stringdata_Integrator.data,
      qt_meta_data_Integrator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Integrator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Integrator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Integrator.stringdata0))
        return static_cast<void*>(const_cast< Integrator*>(this));
    return RibbonMainWindow::qt_metacast(_clname);
}

int Integrator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = RibbonMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
