/****************************************************************************
** Meta object code from reading C++ file 'soc_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/soc_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'soc_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SoCDialog_t {
    QByteArrayData data[19];
    char stringdata0[268];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SoCDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SoCDialog_t qt_meta_stringdata_SoCDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SoCDialog"
QT_MOC_LITERAL(1, 10, 24), // "applyGlobalConfigHandler"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 22), // "applyTileConfigHandler"
QT_MOC_LITERAL(4, 59, 24), // "applyRouterConfigHandler"
QT_MOC_LITERAL(5, 84, 18), // "savePictureHandler"
QT_MOC_LITERAL(6, 103, 9), // "prevCycle"
QT_MOC_LITERAL(7, 113, 9), // "nextCycle"
QT_MOC_LITERAL(8, 123, 7), // "stopRun"
QT_MOC_LITERAL(9, 131, 7), // "nextRun"
QT_MOC_LITERAL(10, 139, 7), // "prevRun"
QT_MOC_LITERAL(11, 147, 7), // "jumpRun"
QT_MOC_LITERAL(12, 155, 22), // "keyReleaseEventHandler"
QT_MOC_LITERAL(13, 178, 10), // "QKeyEvent*"
QT_MOC_LITERAL(14, 189, 5), // "event"
QT_MOC_LITERAL(15, 195, 17), // "selectRouterEvent"
QT_MOC_LITERAL(16, 213, 12), // "QMouseEvent*"
QT_MOC_LITERAL(17, 226, 15), // "loadRecordStart"
QT_MOC_LITERAL(18, 242, 25) // "loadRecordFinishedHandler"

    },
    "SoCDialog\0applyGlobalConfigHandler\0\0"
    "applyTileConfigHandler\0applyRouterConfigHandler\0"
    "savePictureHandler\0prevCycle\0nextCycle\0"
    "stopRun\0nextRun\0prevRun\0jumpRun\0"
    "keyReleaseEventHandler\0QKeyEvent*\0"
    "event\0selectRouterEvent\0QMouseEvent*\0"
    "loadRecordStart\0loadRecordFinishedHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SoCDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    0,   85,    2, 0x0a /* Public */,
       4,    0,   86,    2, 0x0a /* Public */,
       5,    0,   87,    2, 0x0a /* Public */,
       6,    0,   88,    2, 0x0a /* Public */,
       7,    0,   89,    2, 0x0a /* Public */,
       8,    0,   90,    2, 0x0a /* Public */,
       9,    0,   91,    2, 0x0a /* Public */,
      10,    0,   92,    2, 0x0a /* Public */,
      11,    0,   93,    2, 0x0a /* Public */,
      12,    1,   94,    2, 0x0a /* Public */,
      15,    1,   97,    2, 0x0a /* Public */,
      17,    0,  100,    2, 0x0a /* Public */,
      18,    0,  101,    2, 0x0a /* Public */,

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
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SoCDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SoCDialog *_t = static_cast<SoCDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyGlobalConfigHandler(); break;
        case 1: _t->applyTileConfigHandler(); break;
        case 2: _t->applyRouterConfigHandler(); break;
        case 3: _t->savePictureHandler(); break;
        case 4: _t->prevCycle(); break;
        case 5: _t->nextCycle(); break;
        case 6: _t->stopRun(); break;
        case 7: _t->nextRun(); break;
        case 8: _t->prevRun(); break;
        case 9: _t->jumpRun(); break;
        case 10: _t->keyReleaseEventHandler((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 11: _t->selectRouterEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 12: _t->loadRecordStart(); break;
        case 13: _t->loadRecordFinishedHandler(); break;
        default: ;
        }
    }
}

const QMetaObject SoCDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_SoCDialog.data,
      qt_meta_data_SoCDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SoCDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SoCDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SoCDialog.stringdata0))
        return static_cast<void*>(const_cast< SoCDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int SoCDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResultBaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
