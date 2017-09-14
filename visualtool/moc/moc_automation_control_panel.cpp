/****************************************************************************
** Meta object code from reading C++ file 'automation_control_panel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../subwidgets/automation_control_panel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'automation_control_panel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomationControlPanel_t {
    QByteArrayData data[21];
    char stringdata0[428];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomationControlPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomationControlPanel_t qt_meta_stringdata_AutomationControlPanel = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AutomationControlPanel"
QT_MOC_LITERAL(1, 23, 20), // "prevRunButtonClicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 21), // "previousButtonClicked"
QT_MOC_LITERAL(4, 67, 17), // "stopButtonClicked"
QT_MOC_LITERAL(5, 85, 17), // "nextButtonClicked"
QT_MOC_LITERAL(6, 103, 20), // "nextrunButtonClicked"
QT_MOC_LITERAL(7, 124, 17), // "jumpButtonClicked"
QT_MOC_LITERAL(8, 142, 20), // "analyseButtonClicked"
QT_MOC_LITERAL(9, 163, 16), // "anyButtonClicked"
QT_MOC_LITERAL(10, 180, 14), // "prevRunTimeOut"
QT_MOC_LITERAL(11, 195, 14), // "nextRunTimeOut"
QT_MOC_LITERAL(12, 210, 27), // "prevRunButtonClickedHandler"
QT_MOC_LITERAL(13, 238, 28), // "previousButtonClickedHandler"
QT_MOC_LITERAL(14, 267, 24), // "stopButtonClickedHandler"
QT_MOC_LITERAL(15, 292, 24), // "nextButtonClickedHandler"
QT_MOC_LITERAL(16, 317, 27), // "nextrunButtonClickedHandler"
QT_MOC_LITERAL(17, 345, 24), // "jumpButtonClickedHandler"
QT_MOC_LITERAL(18, 370, 27), // "analyseButtonClickedHandler"
QT_MOC_LITERAL(19, 398, 23), // "setLoadProgressBarValue"
QT_MOC_LITERAL(20, 422, 5) // "value"

    },
    "AutomationControlPanel\0prevRunButtonClicked\0"
    "\0previousButtonClicked\0stopButtonClicked\0"
    "nextButtonClicked\0nextrunButtonClicked\0"
    "jumpButtonClicked\0analyseButtonClicked\0"
    "anyButtonClicked\0prevRunTimeOut\0"
    "nextRunTimeOut\0prevRunButtonClickedHandler\0"
    "previousButtonClickedHandler\0"
    "stopButtonClickedHandler\0"
    "nextButtonClickedHandler\0"
    "nextrunButtonClickedHandler\0"
    "jumpButtonClickedHandler\0"
    "analyseButtonClickedHandler\0"
    "setLoadProgressBarValue\0value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomationControlPanel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    0,  105,    2, 0x06 /* Public */,
       4,    0,  106,    2, 0x06 /* Public */,
       5,    0,  107,    2, 0x06 /* Public */,
       6,    0,  108,    2, 0x06 /* Public */,
       7,    0,  109,    2, 0x06 /* Public */,
       8,    0,  110,    2, 0x06 /* Public */,
       9,    0,  111,    2, 0x06 /* Public */,
      10,    0,  112,    2, 0x06 /* Public */,
      11,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,  114,    2, 0x0a /* Public */,
      13,    0,  115,    2, 0x0a /* Public */,
      14,    0,  116,    2, 0x0a /* Public */,
      15,    0,  117,    2, 0x0a /* Public */,
      16,    0,  118,    2, 0x0a /* Public */,
      17,    0,  119,    2, 0x0a /* Public */,
      18,    0,  120,    2, 0x0a /* Public */,
      19,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   20,

       0        // eod
};

void AutomationControlPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutomationControlPanel *_t = static_cast<AutomationControlPanel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->prevRunButtonClicked(); break;
        case 1: _t->previousButtonClicked(); break;
        case 2: _t->stopButtonClicked(); break;
        case 3: _t->nextButtonClicked(); break;
        case 4: _t->nextrunButtonClicked(); break;
        case 5: _t->jumpButtonClicked(); break;
        case 6: _t->analyseButtonClicked(); break;
        case 7: _t->anyButtonClicked(); break;
        case 8: _t->prevRunTimeOut(); break;
        case 9: _t->nextRunTimeOut(); break;
        case 10: _t->prevRunButtonClickedHandler(); break;
        case 11: _t->previousButtonClickedHandler(); break;
        case 12: _t->stopButtonClickedHandler(); break;
        case 13: _t->nextButtonClickedHandler(); break;
        case 14: _t->nextrunButtonClickedHandler(); break;
        case 15: _t->jumpButtonClickedHandler(); break;
        case 16: _t->analyseButtonClickedHandler(); break;
        case 17: _t->setLoadProgressBarValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::prevRunButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::previousButtonClicked)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::stopButtonClicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::nextButtonClicked)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::nextrunButtonClicked)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::jumpButtonClicked)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::analyseButtonClicked)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::anyButtonClicked)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::prevRunTimeOut)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (AutomationControlPanel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AutomationControlPanel::nextRunTimeOut)) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject AutomationControlPanel::staticMetaObject = {
    { &ToolBarBox::staticMetaObject, qt_meta_stringdata_AutomationControlPanel.data,
      qt_meta_data_AutomationControlPanel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AutomationControlPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomationControlPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AutomationControlPanel.stringdata0))
        return static_cast<void*>(const_cast< AutomationControlPanel*>(this));
    return ToolBarBox::qt_metacast(_clname);
}

int AutomationControlPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ToolBarBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void AutomationControlPanel::prevRunButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void AutomationControlPanel::previousButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void AutomationControlPanel::stopButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void AutomationControlPanel::nextButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void AutomationControlPanel::nextrunButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void AutomationControlPanel::jumpButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void AutomationControlPanel::analyseButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void AutomationControlPanel::anyButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void AutomationControlPanel::prevRunTimeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void AutomationControlPanel::nextRunTimeOut()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
