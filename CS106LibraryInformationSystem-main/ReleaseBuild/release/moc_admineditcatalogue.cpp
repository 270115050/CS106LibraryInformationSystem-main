/****************************************************************************
** Meta object code from reading C++ file 'admineditcatalogue.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Downloads/Library System Group Project/CS106LibraryInformationSystem-janelle/LibraryInformationSystem/admineditcatalogue.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'admineditcatalogue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminEditCatalogue_t {
    const uint offsetsAndSize[18];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_adminEditCatalogue_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_adminEditCatalogue_t qt_meta_stringdata_adminEditCatalogue = {
    {
QT_MOC_LITERAL(0, 18), // "adminEditCatalogue"
QT_MOC_LITERAL(19, 22), // "openadminEditCatalogue"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 19), // "showadminMemberEdit"
QT_MOC_LITERAL(63, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(85, 29), // "on_confirmBookDetails_clicked"
QT_MOC_LITERAL(115, 18), // "on_backBtn_clicked"
QT_MOC_LITERAL(134, 28), // "on_selectedImage_3_activated"
QT_MOC_LITERAL(163, 5) // "index"

    },
    "adminEditCatalogue\0openadminEditCatalogue\0"
    "\0showadminMemberEdit\0on_pushButton_clicked\0"
    "on_confirmBookDetails_clicked\0"
    "on_backBtn_clicked\0on_selectedImage_3_activated\0"
    "index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminEditCatalogue[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    0,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    1,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void adminEditCatalogue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<adminEditCatalogue *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openadminEditCatalogue(); break;
        case 1: _t->showadminMemberEdit(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_confirmBookDetails_clicked(); break;
        case 4: _t->on_backBtn_clicked(); break;
        case 5: _t->on_selectedImage_3_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (adminEditCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminEditCatalogue::openadminEditCatalogue)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (adminEditCatalogue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&adminEditCatalogue::showadminMemberEdit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject adminEditCatalogue::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_adminEditCatalogue.offsetsAndSize,
    qt_meta_data_adminEditCatalogue,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_adminEditCatalogue_t
, QtPrivate::TypeAndForceComplete<adminEditCatalogue, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *adminEditCatalogue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminEditCatalogue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_adminEditCatalogue.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int adminEditCatalogue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void adminEditCatalogue::openadminEditCatalogue()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void adminEditCatalogue::showadminMemberEdit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
