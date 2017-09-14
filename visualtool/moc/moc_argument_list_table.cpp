/****************************************************************************
** Meta object code from reading C++ file 'argument_list_table.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modelsview/argument_list_table.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'argument_list_table.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ArgumentListModel_t {
    QByteArrayData data[5];
    char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArgumentListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArgumentListModel_t qt_meta_stringdata_ArgumentListModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ArgumentListModel"
QT_MOC_LITERAL(1, 18, 7), // "showRow"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 3), // "row"
QT_MOC_LITERAL(4, 31, 7) // "hideRow"

    },
    "ArgumentListModel\0showRow\0\0row\0hideRow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArgumentListModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ArgumentListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArgumentListModel *_t = static_cast<ArgumentListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->hideRow((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ArgumentListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArgumentListModel::showRow)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ArgumentListModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ArgumentListModel::hideRow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ArgumentListModel::staticMetaObject = {
    { &QStandardItemModel::staticMetaObject, qt_meta_stringdata_ArgumentListModel.data,
      qt_meta_data_ArgumentListModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArgumentListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArgumentListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArgumentListModel.stringdata0))
        return static_cast<void*>(const_cast< ArgumentListModel*>(this));
    return QStandardItemModel::qt_metacast(_clname);
}

int ArgumentListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QStandardItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ArgumentListModel::showRow(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ArgumentListModel::hideRow(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ArgumentListTableView_t {
    QByteArrayData data[3];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ArgumentListTableView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ArgumentListTableView_t qt_meta_stringdata_ArgumentListTableView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ArgumentListTableView"
QT_MOC_LITERAL(1, 22, 17), // "updateColumnWidth"
QT_MOC_LITERAL(2, 40, 0) // ""

    },
    "ArgumentListTableView\0updateColumnWidth\0"
    ""
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ArgumentListTableView[] = {

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
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void ArgumentListTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ArgumentListTableView *_t = static_cast<ArgumentListTableView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateColumnWidth(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ArgumentListTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_ArgumentListTableView.data,
      qt_meta_data_ArgumentListTableView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ArgumentListTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ArgumentListTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ArgumentListTableView.stringdata0))
        return static_cast<void*>(const_cast< ArgumentListTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int ArgumentListTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
