/****************************************************************************
** Meta object code from reading C++ file 'analyse_plot.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subwidgets/analyse_plot.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'analyse_plot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AnalysePlot_t {
    QByteArrayData data[17];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AnalysePlot_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AnalysePlot_t qt_meta_stringdata_AnalysePlot = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AnalysePlot"
QT_MOC_LITERAL(1, 12, 16), // "axisScaleChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "axisId"
QT_MOC_LITERAL(4, 37, 6), // "enable"
QT_MOC_LITERAL(5, 44, 11), // "QwtInterval"
QT_MOC_LITERAL(6, 56, 8), // "interval"
QT_MOC_LITERAL(7, 65, 11), // "sizeChanged"
QT_MOC_LITERAL(8, 77, 13), // "plotShowCurve"
QT_MOC_LITERAL(9, 91, 8), // "itemInfo"
QT_MOC_LITERAL(10, 100, 2), // "on"
QT_MOC_LITERAL(11, 103, 17), // "updateAxesHandler"
QT_MOC_LITERAL(12, 121, 4), // "axis"
QT_MOC_LITERAL(13, 126, 3), // "min"
QT_MOC_LITERAL(14, 130, 3), // "max"
QT_MOC_LITERAL(15, 134, 16), // "axisScaleHandler"
QT_MOC_LITERAL(16, 151, 9) // "fitWindow"

    },
    "AnalysePlot\0axisScaleChanged\0\0axisId\0"
    "enable\0QwtInterval\0interval\0sizeChanged\0"
    "plotShowCurve\0itemInfo\0on\0updateAxesHandler\0"
    "axis\0min\0max\0axisScaleHandler\0fitWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AnalysePlot[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   44,    2, 0x06 /* Public */,
       7,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    2,   52,    2, 0x0a /* Public */,
      11,    3,   57,    2, 0x0a /* Public */,
      15,    1,   64,    2, 0x0a /* Public */,
      16,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant, QMetaType::Bool,    9,   10,
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,   12,   13,   14,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,

       0        // eod
};

void AnalysePlot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AnalysePlot *_t = static_cast<AnalysePlot *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->axisScaleChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QwtInterval(*)>(_a[3]))); break;
        case 1: _t->sizeChanged(); break;
        case 2: _t->plotShowCurve((*reinterpret_cast< const QVariant(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->updateAxesHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 4: _t->axisScaleHandler((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->fitWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtInterval >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AnalysePlot::*_t)(int , bool , const QwtInterval & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysePlot::axisScaleChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AnalysePlot::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AnalysePlot::sizeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject AnalysePlot::staticMetaObject = {
    { &QwtPlot::staticMetaObject, qt_meta_stringdata_AnalysePlot.data,
      qt_meta_data_AnalysePlot,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AnalysePlot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AnalysePlot::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AnalysePlot.stringdata0))
        return static_cast<void*>(const_cast< AnalysePlot*>(this));
    return QwtPlot::qt_metacast(_clname);
}

int AnalysePlot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QwtPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void AnalysePlot::axisScaleChanged(int _t1, bool _t2, const QwtInterval & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AnalysePlot::sizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_PlotAxisConfigPanel_t {
    QByteArrayData data[11];
    char stringdata0[113];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotAxisConfigPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotAxisConfigPanel_t qt_meta_stringdata_PlotAxisConfigPanel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PlotAxisConfigPanel"
QT_MOC_LITERAL(1, 20, 10), // "updateAxis"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 4), // "axis"
QT_MOC_LITERAL(4, 37, 3), // "min"
QT_MOC_LITERAL(5, 41, 3), // "max"
QT_MOC_LITERAL(6, 45, 22), // "editingFinishedHandler"
QT_MOC_LITERAL(7, 68, 16), // "axisScaleHandler"
QT_MOC_LITERAL(8, 85, 6), // "enable"
QT_MOC_LITERAL(9, 92, 11), // "QwtInterval"
QT_MOC_LITERAL(10, 104, 8) // "interval"

    },
    "PlotAxisConfigPanel\0updateAxis\0\0axis\0"
    "min\0max\0editingFinishedHandler\0"
    "axisScaleHandler\0enable\0QwtInterval\0"
    "interval"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotAxisConfigPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   36,    2, 0x0a /* Public */,
       7,    3,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Double, QMetaType::Double,    3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, 0x80000000 | 9,    3,    8,   10,

       0        // eod
};

void PlotAxisConfigPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotAxisConfigPanel *_t = static_cast<PlotAxisConfigPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateAxis((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 1: _t->editingFinishedHandler(); break;
        case 2: _t->axisScaleHandler((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< const QwtInterval(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QwtInterval >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlotAxisConfigPanel::*_t)(int , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlotAxisConfigPanel::updateAxis)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlotAxisConfigPanel::staticMetaObject = {
    { &ToolBarBox::staticMetaObject, qt_meta_stringdata_PlotAxisConfigPanel.data,
      qt_meta_data_PlotAxisConfigPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlotAxisConfigPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotAxisConfigPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlotAxisConfigPanel.stringdata0))
        return static_cast<void*>(const_cast< PlotAxisConfigPanel*>(this));
    return ToolBarBox::qt_metacast(_clname);
}

int PlotAxisConfigPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void PlotAxisConfigPanel::updateAxis(int _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_PlotSizeConfigPanel_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlotSizeConfigPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlotSizeConfigPanel_t qt_meta_stringdata_PlotSizeConfigPanel = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PlotSizeConfigPanel"
QT_MOC_LITERAL(1, 20, 15), // "editingFinished"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "setPlotSize"
QT_MOC_LITERAL(4, 49, 4) // "size"

    },
    "PlotSizeConfigPanel\0editingFinished\0"
    "\0setPlotSize\0size"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlotSizeConfigPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QSize,    4,

       0        // eod
};

void PlotSizeConfigPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlotSizeConfigPanel *_t = static_cast<PlotSizeConfigPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->editingFinished(); break;
        case 1: _t->setPlotSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlotSizeConfigPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlotSizeConfigPanel::editingFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlotSizeConfigPanel::staticMetaObject = {
    { &ToolBarBox::staticMetaObject, qt_meta_stringdata_PlotSizeConfigPanel.data,
      qt_meta_data_PlotSizeConfigPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlotSizeConfigPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlotSizeConfigPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlotSizeConfigPanel.stringdata0))
        return static_cast<void*>(const_cast< PlotSizeConfigPanel*>(this));
    return ToolBarBox::qt_metacast(_clname);
}

int PlotSizeConfigPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolBarBox::qt_metacall(_c, _id, _a);
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
void PlotSizeConfigPanel::editingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
