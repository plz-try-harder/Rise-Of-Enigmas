/****************************************************************************
** Meta object code from reading C++ file 'eulergraphsinfoandoptionswidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/widgets/eulergraphsinfoandoptionswidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eulergraphsinfoandoptionswidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget_t {
    const uint offsetsAndSize[24];
    char stringdata0[220];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget_t qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget = {
    {
QT_MOC_LITERAL(0, 31), // "EulerGraphsInfoAndOptionsWidget"
QT_MOC_LITERAL(32, 15), // "homePageRequest"
QT_MOC_LITERAL(48, 0), // ""
QT_MOC_LITERAL(49, 27), // "resetEulerGraphScoreRequest"
QT_MOC_LITERAL(77, 24), // "chooseEGlineColorRequest"
QT_MOC_LITERAL(102, 22), // "magnetModeStateChanged"
QT_MOC_LITERAL(125, 28), // "translateInstructionsRequest"
QT_MOC_LITERAL(154, 16), // "ScoreInfromation"
QT_MOC_LITERAL(171, 20), // "setMagnetModeChecked"
QT_MOC_LITERAL(192, 3), // "val"
QT_MOC_LITERAL(196, 19), // "setInstructionsText"
QT_MOC_LITERAL(216, 3) // "str"

    },
    "EulerGraphsInfoAndOptionsWidget\0"
    "homePageRequest\0\0resetEulerGraphScoreRequest\0"
    "chooseEGlineColorRequest\0"
    "magnetModeStateChanged\0"
    "translateInstructionsRequest\0"
    "ScoreInfromation\0setMagnetModeChecked\0"
    "val\0setInstructionsText\0str"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EulerGraphsInfoAndOptionsWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,
       5,    1,   65,    2, 0x06,    4 /* Public */,
       6,    0,   68,    2, 0x06,    6 /* Public */,
       7,    0,   69,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   70,    2, 0x0a,    8 /* Public */,
      10,    1,   73,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void EulerGraphsInfoAndOptionsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EulerGraphsInfoAndOptionsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->homePageRequest(); break;
        case 1: _t->resetEulerGraphScoreRequest(); break;
        case 2: _t->chooseEGlineColorRequest(); break;
        case 3: _t->magnetModeStateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->translateInstructionsRequest(); break;
        case 5: _t->ScoreInfromation(); break;
        case 6: _t->setMagnetModeChecked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setInstructionsText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::homePageRequest)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::resetEulerGraphScoreRequest)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::chooseEGlineColorRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::magnetModeStateChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::translateInstructionsRequest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (EulerGraphsInfoAndOptionsWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsInfoAndOptionsWidget::ScoreInfromation)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject EulerGraphsInfoAndOptionsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget.offsetsAndSize,
    qt_meta_data_EulerGraphsInfoAndOptionsWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget_t
, QtPrivate::TypeAndForceComplete<EulerGraphsInfoAndOptionsWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>


>,
    nullptr
} };


const QMetaObject *EulerGraphsInfoAndOptionsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EulerGraphsInfoAndOptionsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EulerGraphsInfoAndOptionsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EulerGraphsInfoAndOptionsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void EulerGraphsInfoAndOptionsWidget::homePageRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EulerGraphsInfoAndOptionsWidget::resetEulerGraphScoreRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void EulerGraphsInfoAndOptionsWidget::chooseEGlineColorRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void EulerGraphsInfoAndOptionsWidget::magnetModeStateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void EulerGraphsInfoAndOptionsWidget::translateInstructionsRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void EulerGraphsInfoAndOptionsWidget::ScoreInfromation()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
