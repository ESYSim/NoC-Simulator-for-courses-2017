/****************************************************************************
** Meta object code from reading C++ file 'analyse_fliter_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subwidgets/analyse_fliter_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analyse_fliter_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalyseFilterPanel_t {
    QByteArrayData data[6];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalyseFilterPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalyseFilterPanel_t qt_meta_stringdata_AnalyseFilterPanel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AnalyseFilterPanel"
QT_MOC_LITERAL(1, 19, 22), // "routerIdChangedHandler"
QT_MOC_LITERAL(2, 42, 0), // ""
QT_MOC_LITERAL(3, 43, 5), // "index"
QT_MOC_LITERAL(4, 49, 22), // "inputPhyChangedHandler"
QT_MOC_LITERAL(5, 72, 23) // "outputPhyChangedHandler"

    },
    "AnalyseFilterPanel\0routerIdChangedHandler\0"
    "\0index\0inputPhyChangedHandler\0"
    "outputPhyChangedHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalyseFilterPanel[] = {

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
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       5,    1,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void AnalyseFilterPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnalyseFilterPanel *_t = static_cast<AnalyseFilterPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->routerIdChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->inputPhyChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->outputPhyChangedHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AnalyseFilterPanel::staticMetaObject = {
    { &ToolBarBox::staticMetaObject, qt_meta_stringdata_AnalyseFilterPanel.data,
      qt_meta_data_AnalyseFilterPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnalyseFilterPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalyseFilterPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnalyseFilterPanel.stringdata0))
        return static_cast<void*>(const_cast< AnalyseFilterPanel*>(this));
    return ToolBarBox::qt_metacast(_clname);
}

int AnalyseFilterPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolBarBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
