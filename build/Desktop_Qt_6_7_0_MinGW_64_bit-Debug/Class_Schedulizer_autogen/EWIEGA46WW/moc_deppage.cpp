/****************************************************************************
** Meta object code from reading C++ file 'deppage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../deppage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deppage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDepPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSDepPageENDCLASS = QtMocHelpers::stringData(
    "DepPage",
    "on_btnAdd",
    "",
    "on_btnConstraint",
    "on_btnRemove",
    "on_btnEdit",
    "on_btnTeachers",
    "on_btnBatches",
    "on_btnAdminPolicy",
    "on_btnGenSchedule",
    "on_btnBack"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDepPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x0a,    1 /* Public */,
       3,    0,   69,    2, 0x0a,    2 /* Public */,
       4,    0,   70,    2, 0x0a,    3 /* Public */,
       5,    0,   71,    2, 0x0a,    4 /* Public */,
       6,    0,   72,    2, 0x0a,    5 /* Public */,
       7,    0,   73,    2, 0x0a,    6 /* Public */,
       8,    0,   74,    2, 0x0a,    7 /* Public */,
       9,    0,   75,    2, 0x0a,    8 /* Public */,
      10,    0,   76,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DepPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDepPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDepPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDepPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DepPage, std::true_type>,
        // method 'on_btnAdd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnConstraint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnRemove'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnEdit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnTeachers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnBatches'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAdminPolicy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnGenSchedule'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnBack'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DepPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DepPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnAdd(); break;
        case 1: _t->on_btnConstraint(); break;
        case 2: _t->on_btnRemove(); break;
        case 3: _t->on_btnEdit(); break;
        case 4: _t->on_btnTeachers(); break;
        case 5: _t->on_btnBatches(); break;
        case 6: _t->on_btnAdminPolicy(); break;
        case 7: _t->on_btnGenSchedule(); break;
        case 8: _t->on_btnBack(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *DepPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DepPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDepPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DepPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
