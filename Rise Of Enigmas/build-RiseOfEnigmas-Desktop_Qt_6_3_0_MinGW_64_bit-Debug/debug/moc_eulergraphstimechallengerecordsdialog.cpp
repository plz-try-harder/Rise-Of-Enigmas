/****************************************************************************
** Meta object code from reading C++ file 'eulergraphstimechallengerecordsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/widgets/eulergraphstimechallengerecordsdialog.h"
#include <QtNetwork/QSslError>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'eulergraphstimechallengerecordsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog_t {
    const uint offsetsAndSize[12];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog_t qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog = {
    {
QT_MOC_LITERAL(0, 37), // "EulerGraphsTimeChallengeRecor..."
QT_MOC_LITERAL(38, 11), // "showAndLoad"
QT_MOC_LITERAL(50, 0), // ""
QT_MOC_LITERAL(51, 24), // "sendScoreRequestFinished"
QT_MOC_LITERAL(76, 14), // "QNetworkReply*"
QT_MOC_LITERAL(91, 5) // "reply"

    },
    "EulerGraphsTimeChallengeRecordsDialog\0"
    "showAndLoad\0\0sendScoreRequestFinished\0"
    "QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EulerGraphsTimeChallengeRecordsDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    1,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void EulerGraphsTimeChallengeRecordsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EulerGraphsTimeChallengeRecordsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showAndLoad(); break;
        case 1: _t->sendScoreRequestFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject EulerGraphsTimeChallengeRecordsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog.offsetsAndSize,
    qt_meta_data_EulerGraphsTimeChallengeRecordsDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog_t
, QtPrivate::TypeAndForceComplete<EulerGraphsTimeChallengeRecordsDialog, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
    nullptr
} };


const QMetaObject *EulerGraphsTimeChallengeRecordsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EulerGraphsTimeChallengeRecordsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EulerGraphsTimeChallengeRecordsDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EulerGraphsTimeChallengeRecordsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
