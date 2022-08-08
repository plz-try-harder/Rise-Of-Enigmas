/****************************************************************************
** Meta object code from reading C++ file 'eulergraphstimechallengewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/widgets/eulergraphstimechallengewidget.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eulergraphstimechallengewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EulerGraphsTimeChallengeWidget_t {
    const uint offsetsAndSize[14];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EulerGraphsTimeChallengeWidget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EulerGraphsTimeChallengeWidget_t qt_meta_stringdata_EulerGraphsTimeChallengeWidget = {
    {
QT_MOC_LITERAL(0, 30), // "EulerGraphsTimeChallengeWidget"
QT_MOC_LITERAL(31, 21), // "startChallengeRequest"
QT_MOC_LITERAL(53, 0), // ""
QT_MOC_LITERAL(54, 10), // "updateTime"
QT_MOC_LITERAL(65, 17), // "startOrStopChrono"
QT_MOC_LITERAL(83, 19), // "showSendScoreDialog"
QT_MOC_LITERAL(103, 17) // "goToChallengePage"

    },
    "EulerGraphsTimeChallengeWidget\0"
    "startChallengeRequest\0\0updateTime\0"
    "startOrStopChrono\0showSendScoreDialog\0"
    "goToChallengePage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EulerGraphsTimeChallengeWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x0a,    2 /* Public */,
       4,    0,   46,    2, 0x0a,    3 /* Public */,
       5,    0,   47,    2, 0x0a,    4 /* Public */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EulerGraphsTimeChallengeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EulerGraphsTimeChallengeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startChallengeRequest(); break;
        case 1: _t->updateTime(); break;
        case 2: _t->startOrStopChrono(); break;
        case 3: _t->showSendScoreDialog(); break;
        case 4: _t->goToChallengePage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EulerGraphsTimeChallengeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EulerGraphsTimeChallengeWidget::startChallengeRequest)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject EulerGraphsTimeChallengeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_EulerGraphsTimeChallengeWidget.offsetsAndSize,
    qt_meta_data_EulerGraphsTimeChallengeWidget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EulerGraphsTimeChallengeWidget_t
, QtPrivate::TypeAndForceComplete<EulerGraphsTimeChallengeWidget, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *EulerGraphsTimeChallengeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EulerGraphsTimeChallengeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EulerGraphsTimeChallengeWidget.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int EulerGraphsTimeChallengeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void EulerGraphsTimeChallengeWidget::startChallengeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
