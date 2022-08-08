/****************************************************************************
** Meta object code from reading C++ file 'menudialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../RiseOfEnigmas_src/widgets/menudialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menudialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MenuDialog_t {
    const uint offsetsAndSize[18];
    char stringdata0[132];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MenuDialog_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MenuDialog_t qt_meta_stringdata_MenuDialog = {
    {
QT_MOC_LITERAL(0, 10), // "MenuDialog"
QT_MOC_LITERAL(11, 23), // "changeToEnglishLanguage"
QT_MOC_LITERAL(35, 0), // ""
QT_MOC_LITERAL(36, 22), // "changeToFrenchLanguage"
QT_MOC_LITERAL(59, 24), // "EGopenLineColorSelection"
QT_MOC_LITERAL(84, 13), // "EGresetLevels"
QT_MOC_LITERAL(98, 9), // "openAbout"
QT_MOC_LITERAL(108, 15), // "openSourcesLink"
QT_MOC_LITERAL(124, 7) // "quitApp"

    },
    "MenuDialog\0changeToEnglishLanguage\0\0"
    "changeToFrenchLanguage\0EGopenLineColorSelection\0"
    "EGresetLevels\0openAbout\0openSourcesLink\0"
    "quitApp"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MenuDialog[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,
       4,    0,   58,    2, 0x06,    3 /* Public */,
       5,    0,   59,    2, 0x06,    4 /* Public */,
       6,    0,   60,    2, 0x06,    5 /* Public */,
       7,    0,   61,    2, 0x06,    6 /* Public */,
       8,    0,   62,    2, 0x06,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MenuDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MenuDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeToEnglishLanguage(); break;
        case 1: _t->changeToFrenchLanguage(); break;
        case 2: _t->EGopenLineColorSelection(); break;
        case 3: _t->EGresetLevels(); break;
        case 4: _t->openAbout(); break;
        case 5: _t->openSourcesLink(); break;
        case 6: _t->quitApp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::changeToEnglishLanguage)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::changeToFrenchLanguage)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::EGopenLineColorSelection)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::EGresetLevels)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::openAbout)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::openSourcesLink)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (MenuDialog::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MenuDialog::quitApp)) {
                *result = 6;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject MenuDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_MenuDialog.offsetsAndSize,
    qt_meta_data_MenuDialog,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MenuDialog_t
, QtPrivate::TypeAndForceComplete<MenuDialog, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>



>,
    nullptr
} };


const QMetaObject *MenuDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MenuDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MenuDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MenuDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void MenuDialog::changeToEnglishLanguage()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MenuDialog::changeToFrenchLanguage()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MenuDialog::EGopenLineColorSelection()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MenuDialog::EGresetLevels()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MenuDialog::openAbout()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MenuDialog::openSourcesLink()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MenuDialog::quitApp()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
