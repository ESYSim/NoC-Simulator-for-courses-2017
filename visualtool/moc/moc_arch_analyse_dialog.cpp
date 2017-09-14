/****************************************************************************
** Meta object code from reading C++ file 'arch_analyse_dialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subdialogs/arch_analyse_dialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'arch_analyse_dialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalyseDialog_t {
    QByteArrayData data[20];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalyseDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalyseDialog_t qt_meta_stringdata_AnalyseDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "AnalyseDialog"
QT_MOC_LITERAL(1, 14, 18), // "taskChangedHandler"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "index"
QT_MOC_LITERAL(4, 40, 15), // "drawPlotHandler"
QT_MOC_LITERAL(5, 56, 9), // "prevCycle"
QT_MOC_LITERAL(6, 66, 9), // "nextCycle"
QT_MOC_LITERAL(7, 76, 7), // "stopRun"
QT_MOC_LITERAL(8, 84, 7), // "nextRun"
QT_MOC_LITERAL(9, 92, 7), // "prevRun"
QT_MOC_LITERAL(10, 100, 7), // "jumpRun"
QT_MOC_LITERAL(11, 108, 22), // "keyReleaseEventHandler"
QT_MOC_LITERAL(12, 131, 10), // "QKeyEvent*"
QT_MOC_LITERAL(13, 142, 5), // "event"
QT_MOC_LITERAL(14, 148, 22), // "analyseFinishedHandler"
QT_MOC_LITERAL(15, 171, 19), // "analyseStartHandler"
QT_MOC_LITERAL(16, 191, 14), // "savePicHandler"
QT_MOC_LITERAL(17, 206, 15), // "saveDataHandler"
QT_MOC_LITERAL(18, 222, 30), // "plotSizeEditingFinishedHandler"
QT_MOC_LITERAL(19, 253, 22) // "plotResizeEventHandler"

    },
    "AnalyseDialog\0taskChangedHandler\0\0"
    "index\0drawPlotHandler\0prevCycle\0"
    "nextCycle\0stopRun\0nextRun\0prevRun\0"
    "jumpRun\0keyReleaseEventHandler\0"
    "QKeyEvent*\0event\0analyseFinishedHandler\0"
    "analyseStartHandler\0savePicHandler\0"
    "saveDataHandler\0plotSizeEditingFinishedHandler\0"
    "plotResizeEventHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalyseDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a /* Public */,
       4,    0,   92,    2, 0x0a /* Public */,
       5,    0,   93,    2, 0x0a /* Public */,
       6,    0,   94,    2, 0x0a /* Public */,
       7,    0,   95,    2, 0x0a /* Public */,
       8,    0,   96,    2, 0x0a /* Public */,
       9,    0,   97,    2, 0x0a /* Public */,
      10,    0,   98,    2, 0x0a /* Public */,
      11,    1,   99,    2, 0x0a /* Public */,
      14,    0,  102,    2, 0x0a /* Public */,
      15,    0,  103,    2, 0x0a /* Public */,
      16,    0,  104,    2, 0x0a /* Public */,
      17,    0,  105,    2, 0x0a /* Public */,
      18,    0,  106,    2, 0x0a /* Public */,
      19,    0,  107,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AnalyseDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnalyseDialog *_t = static_cast<AnalyseDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->taskChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->drawPlotHandler(); break;
        case 2: _t->prevCycle(); break;
        case 3: _t->nextCycle(); break;
        case 4: _t->stopRun(); break;
        case 5: _t->nextRun(); break;
        case 6: _t->prevRun(); break;
        case 7: _t->jumpRun(); break;
        case 8: _t->keyReleaseEventHandler((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 9: _t->analyseFinishedHandler(); break;
        case 10: _t->analyseStartHandler(); break;
        case 11: _t->savePicHandler(); break;
        case 12: _t->saveDataHandler(); break;
        case 13: _t->plotSizeEditingFinishedHandler(); break;
        case 14: _t->plotResizeEventHandler(); break;
        default: ;
        }
    }
}

const QMetaObject AnalyseDialog::staticMetaObject = {
    { &ResultBaseDialog::staticMetaObject, qt_meta_stringdata_AnalyseDialog.data,
      qt_meta_data_AnalyseDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnalyseDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalyseDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnalyseDialog.stringdata0))
        return static_cast<void*>(const_cast< AnalyseDialog*>(this));
    return ResultBaseDialog::qt_metacast(_clname);
}

int AnalyseDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResultBaseDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
