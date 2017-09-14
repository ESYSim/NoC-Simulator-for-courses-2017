/****************************************************************************
** Meta object code from reading C++ file 'noc_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/noc_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'noc_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NoCDialog_t {
    QByteArrayData data[21];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NoCDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NoCDialog_t qt_meta_stringdata_NoCDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "NoCDialog"
QT_MOC_LITERAL(1, 10, 25), // "applyNetworkConfigHandler"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 24), // "applyRouterConfigHandler"
QT_MOC_LITERAL(4, 62, 18), // "savePictureHandler"
QT_MOC_LITERAL(5, 81, 9), // "prevCycle"
QT_MOC_LITERAL(6, 91, 9), // "nextCycle"
QT_MOC_LITERAL(7, 101, 7), // "stopRun"
QT_MOC_LITERAL(8, 109, 7), // "nextRun"
QT_MOC_LITERAL(9, 117, 7), // "prevRun"
QT_MOC_LITERAL(10, 125, 7), // "jumpRun"
QT_MOC_LITERAL(11, 133, 22), // "keyReleaseEventHandler"
QT_MOC_LITERAL(12, 156, 10), // "QKeyEvent*"
QT_MOC_LITERAL(13, 167, 5), // "event"
QT_MOC_LITERAL(14, 173, 17), // "selectRouterEvent"
QT_MOC_LITERAL(15, 191, 12), // "QMouseEvent*"
QT_MOC_LITERAL(16, 204, 19), // "loadEventtraceStart"
QT_MOC_LITERAL(17, 224, 29), // "loadEventtraceFinishedHandler"
QT_MOC_LITERAL(18, 254, 18), // "loadPathtraceStart"
QT_MOC_LITERAL(19, 273, 28), // "loadPathtraceFinishedHandler"
QT_MOC_LITERAL(20, 302, 25) // "disableMappingOnlyChecker"

    },
    "NoCDialog\0applyNetworkConfigHandler\0"
    "\0applyRouterConfigHandler\0savePictureHandler\0"
    "prevCycle\0nextCycle\0stopRun\0nextRun\0"
    "prevRun\0jumpRun\0keyReleaseEventHandler\0"
    "QKeyEvent*\0event\0selectRouterEvent\0"
    "QMouseEvent*\0loadEventtraceStart\0"
    "loadEventtraceFinishedHandler\0"
    "loadPathtraceStart\0loadPathtraceFinishedHandler\0"
    "disableMappingOnlyChecker"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NoCDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    0,  101,    2, 0x0a /* Public */,
      10,    0,  102,    2, 0x0a /* Public */,
      11,    1,  103,    2, 0x0a /* Public */,
      14,    1,  106,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,
      19,    0,  112,    2, 0x0a /* Public */,
      20,    0,  113,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void NoCDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        NoCDialog *_t = static_cast<NoCDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyNetworkConfigHandler(); break;
        case 1: _t->applyRouterConfigHandler(); break;
        case 2: _t->savePictureHandler(); break;
        case 3: _t->prevCycle(); break;
        case 4: _t->nextCycle(); break;
        case 5: _t->stopRun(); break;
        case 6: _t->nextRun(); break;
        case 7: _t->prevRun(); break;
        case 8: _t->jumpRun(); break;
        case 9: _t->keyReleaseEventHandler((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 10: _t->selectRouterEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->loadEventtraceStart(); break;
        case 12: _t->loadEventtraceFinishedHandler(); break;
        case 13: _t->loadPathtraceStart(); break;
        case 14: _t->loadPathtraceFinishedHandler(); break;
        case 15: _t->disableMappingOnlyChecker(); break;
        default: ;
        }
    }
}

const QMetaObject NoCDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_NoCDialog.data,
      qt_meta_data_NoCDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *NoCDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NoCDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_NoCDialog.stringdata0))
        return static_cast<void*>(const_cast< NoCDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int NoCDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResultBaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
