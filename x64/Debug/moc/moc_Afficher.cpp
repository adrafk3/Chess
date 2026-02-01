/****************************************************************************
** Meta object code from reading C++ file 'Afficher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Afficher.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Afficher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
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
struct qt_meta_stringdata_CLASSinterfaceSCOPEAfficherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSinterfaceSCOPEAfficherENDCLASS = QtMocHelpers::stringData(
    "interface::Afficher",
    "getReponseJeux",
    "",
    "tourFait",
    "reponse",
    "std::pair<int,int>",
    "positionOriginale",
    "positionFinale",
    "getUpdate",
    "position",
    "paint"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSinterfaceSCOPEAfficherENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   32,    2, 0x08,    1 /* Private */,
       8,    1,   41,    2, 0x08,    6 /* Private */,
      10,    0,   44,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 5,    3,    4,    6,    7,
    QMetaType::Void, 0x80000000 | 5,    9,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject interface::Afficher::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSinterfaceSCOPEAfficherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSinterfaceSCOPEAfficherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSinterfaceSCOPEAfficherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Afficher, std::true_type>,
        // method 'getReponseJeux'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'getUpdate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'paint'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void interface::Afficher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Afficher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->getReponseJeux((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[4]))); break;
        case 1: _t->getUpdate((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 2: _t->paint(); break;
        default: ;
        }
    }
}

const QMetaObject *interface::Afficher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *interface::Afficher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSinterfaceSCOPEAfficherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int interface::Afficher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
