/****************************************************************************
** Meta object code from reading C++ file 'musicplayerwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/widgets/musicplayerwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplayerwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MusicPlayerWidget_t {
    const uint offsetsAndSize[20];
    char stringdata0[145];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MusicPlayerWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MusicPlayerWidget_t qt_meta_stringdata_MusicPlayerWidget = {
    {
QT_MOC_LITERAL(0, 17), // "MusicPlayerWidget"
QT_MOC_LITERAL(18, 17), // "onPositionChanged"
QT_MOC_LITERAL(36, 0), // ""
QT_MOC_LITERAL(37, 12), // "milliseconds"
QT_MOC_LITERAL(50, 22), // "onCurrentDeviceChanged"
QT_MOC_LITERAL(73, 5), // "index"
QT_MOC_LITERAL(79, 23), // "onSliderPositionChanged"
QT_MOC_LITERAL(103, 3), // "val"
QT_MOC_LITERAL(107, 21), // "onSliderVolumeChanged"
QT_MOC_LITERAL(129, 15) // "onResumeOrPause"

    },
    "MusicPlayerWidget\0onPositionChanged\0"
    "\0milliseconds\0onCurrentDeviceChanged\0"
    "index\0onSliderPositionChanged\0val\0"
    "onSliderVolumeChanged\0onResumeOrPause"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MusicPlayerWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       4,    1,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   50,    2, 0x0a,    5 /* Public */,
       8,    1,   53,    2, 0x0a,    7 /* Public */,
       9,    0,   56,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void MusicPlayerWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicPlayerWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onPositionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 1: _t->onCurrentDeviceChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->onSliderPositionChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->onSliderVolumeChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->onResumeOrPause(); break;
        default: ;
        }
    }
}

const QMetaObject MusicPlayerWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_MusicPlayerWidget.offsetsAndSize,
    qt_meta_data_MusicPlayerWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MusicPlayerWidget_t
, QtPrivate::TypeAndForceComplete<MusicPlayerWidget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<qint64, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MusicPlayerWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicPlayerWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MusicPlayerWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MusicPlayerWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
