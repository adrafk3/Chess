/****************************************************************************
** Meta object code from reading C++ file 'Jeux.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Jeux.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Jeux.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmodeleSCOPEJeuxENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSmodeleSCOPEJeuxENDCLASS = QtMocHelpers::stringData(
    "modele::Jeux",
    "sendReponse",
    "",
    "tourFait",
    "reponse",
    "std::pair<int,int>",
    "positonOriginale",
    "positionFinale",
    "casesValides",
    "std::vector<std::pair<int,int>>",
    "carreValide",
    "repeindre",
    "updateImage",
    "mat",
    "pat",
    "recevoirCarreClique",
    "carreClique",
    "recevoirCarreDeclique"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmodeleSCOPEJeuxENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   74,    2, 0x06,    1 /* Public */,
       1,    3,   83,    2, 0x26,    6 /* Public | MethodCloned */,
       1,    2,   90,    2, 0x26,   10 /* Public | MethodCloned */,
       8,    1,   95,    2, 0x06,   13 /* Public */,
      11,    0,   98,    2, 0x06,   15 /* Public */,
      12,    1,   99,    2, 0x06,   16 /* Public */,
      13,    1,  102,    2, 0x06,   18 /* Public */,
      14,    1,  105,    2, 0x06,   20 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    1,  108,    2, 0x0a,   22 /* Public */,
      17,    0,  111,    2, 0x0a,   24 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, 0x80000000 | 5, 0x80000000 | 5,    3,    4,    6,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, 0x80000000 | 5,    3,    4,    6,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   16,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject modele::Jeux::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSmodeleSCOPEJeuxENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmodeleSCOPEJeuxENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmodeleSCOPEJeuxENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Jeux, std::true_type>,
        // method 'sendReponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'sendReponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'sendReponse'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'casesValides'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::vector<std::pair<int,int>>, std::false_type>,
        // method 'repeindre'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'mat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'recevoirCarreClique'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::pair<int,int>, std::false_type>,
        // method 'recevoirCarreDeclique'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void modele::Jeux::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Jeux *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendReponse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[4]))); break;
        case 1: _t->sendReponse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[3]))); break;
        case 2: _t->sendReponse((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->casesValides((*reinterpret_cast< std::add_pointer_t<std::vector<std::pair<int,int>>>>(_a[1]))); break;
        case 4: _t->repeindre(); break;
        case 5: _t->updateImage((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 6: _t->mat((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->pat((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->recevoirCarreClique((*reinterpret_cast< std::add_pointer_t<std::pair<int,int>>>(_a[1]))); break;
        case 9: _t->recevoirCarreDeclique(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Jeux::*)(bool , QString , std::pair<int,int> , std::pair<int,int> );
            if (_t _q_method = &Jeux::sendReponse; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Jeux::*)(std::vector<std::pair<int,int>> );
            if (_t _q_method = &Jeux::casesValides; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Jeux::*)();
            if (_t _q_method = &Jeux::repeindre; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Jeux::*)(std::pair<int,int> );
            if (_t _q_method = &Jeux::updateImage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Jeux::*)(bool );
            if (_t _q_method = &Jeux::mat; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Jeux::*)(bool );
            if (_t _q_method = &Jeux::pat; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *modele::Jeux::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *modele::Jeux::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmodeleSCOPEJeuxENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int modele::Jeux::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void modele::Jeux::sendReponse(bool _t1, QString _t2, std::pair<int,int> _t3, std::pair<int,int> _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 3
void modele::Jeux::casesValides(std::vector<std::pair<int,int>> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void modele::Jeux::repeindre()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void modele::Jeux::updateImage(std::pair<int,int> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void modele::Jeux::mat(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void modele::Jeux::pat(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
