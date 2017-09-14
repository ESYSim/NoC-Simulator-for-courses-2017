/****************************************************************************
** Meta object code from reading C++ file 'faults_state_table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modelsview/faults_state_table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'faults_state_table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FaultStateModel_t {
    QByteArrayData data[4];
    char stringdata0[40];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultStateModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultStateModel_t qt_meta_stringdata_FaultStateModel = {
    {
QT_MOC_LITERAL(0, 0, 15), // "FaultStateModel"
QT_MOC_LITERAL(1, 16, 16), // "changeItemStates"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5) // "index"

    },
    "FaultStateModel\0changeItemStates\0\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultStateModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QModelIndex,    3,

       0        // eod
};

void FaultStateModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FaultStateModel *_t = static_cast<FaultStateModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeItemStates((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject FaultStateModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_FaultStateModel.data,
      qt_meta_data_FaultStateModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaultStateModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultStateModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaultStateModel.stringdata0))
        return static_cast<void*>(const_cast< FaultStateModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int FaultStateModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_FaultMatrixModel_t {
    QByteArrayData data[1];
    char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultMatrixModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultMatrixModel_t qt_meta_stringdata_FaultMatrixModel = {
    {
QT_MOC_LITERAL(0, 0, 16) // "FaultMatrixModel"

    },
    "FaultMatrixModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultMatrixModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FaultMatrixModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FaultMatrixModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_FaultMatrixModel.data,
      qt_meta_data_FaultMatrixModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaultMatrixModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultMatrixModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaultMatrixModel.stringdata0))
        return static_cast<void*>(const_cast< FaultMatrixModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int FaultMatrixModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FaultStateTableView_t {
    QByteArrayData data[1];
    char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultStateTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultStateTableView_t qt_meta_stringdata_FaultStateTableView = {
    {
QT_MOC_LITERAL(0, 0, 19) // "FaultStateTableView"

    },
    "FaultStateTableView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultStateTableView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FaultStateTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FaultStateTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_FaultStateTableView.data,
      qt_meta_data_FaultStateTableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaultStateTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultStateTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaultStateTableView.stringdata0))
        return static_cast<void*>(const_cast< FaultStateTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int FaultStateTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_FaultMatrixTableView_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FaultMatrixTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FaultMatrixTableView_t qt_meta_stringdata_FaultMatrixTableView = {
    {
QT_MOC_LITERAL(0, 0, 20) // "FaultMatrixTableView"

    },
    "FaultMatrixTableView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FaultMatrixTableView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void FaultMatrixTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject FaultMatrixTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_FaultMatrixTableView.data,
      qt_meta_data_FaultMatrixTableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *FaultMatrixTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FaultMatrixTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_FaultMatrixTableView.stringdata0))
        return static_cast<void*>(const_cast< FaultMatrixTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int FaultMatrixTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
