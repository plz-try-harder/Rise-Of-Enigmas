/****************************************************************************
** Meta object code from reading C++ file 'egscene.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/EulerGraphInteract/egscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'egscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EGScene_t {
    const uint offsetsAndSize[18];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EGScene_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EGScene_t qt_meta_stringdata_EGScene = {
    {
QT_MOC_LITERAL(0, 7), // "EGScene"
QT_MOC_LITERAL(8, 7), // "reseted"
QT_MOC_LITERAL(16, 0), // ""
QT_MOC_LITERAL(17, 8), // "stepedUp"
QT_MOC_LITERAL(26, 4), // "step"
QT_MOC_LITERAL(31, 5), // "total"
QT_MOC_LITERAL(37, 12), // "justFinished"
QT_MOC_LITERAL(50, 15), // "changeLineColor"
QT_MOC_LITERAL(66, 5) // "color"

    },
    "EGScene\0reseted\0\0stepedUp\0step\0total\0"
    "justFinished\0changeLineColor\0color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EGScene[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    2,   39,    2, 0x06,    2 /* Public */,
       6,    0,   44,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   45,    2, 0x0a,    6 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt, QMetaType::UInt,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    8,

       0        // eod
};

void EGScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EGScene *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->reseted(); break;
        case 1: _t->stepedUp((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[2]))); break;
        case 2: _t->justFinished(); break;
        case 3: _t->changeLineColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EGScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EGScene::reseted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EGScene::*)(uint , uint );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EGScene::stepedUp)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EGScene::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EGScene::justFinished)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject EGScene::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsScene::staticMetaObject>(),
    qt_meta_stringdata_EGScene.offsetsAndSize,
    qt_meta_data_EGScene,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EGScene_t
, QtPrivate::TypeAndForceComplete<EGScene, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<uint, std::false_type>, QtPrivate::TypeAndForceComplete<uint, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QColor, std::false_type>


>,
    nullptr
} };


const QMetaObject *EGScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EGScene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EGScene.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsScene::qt_metacast(_clname);
}

int EGScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsScene::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void EGScene::reseted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void EGScene::stepedUp(uint _t1, uint _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EGScene::justFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
