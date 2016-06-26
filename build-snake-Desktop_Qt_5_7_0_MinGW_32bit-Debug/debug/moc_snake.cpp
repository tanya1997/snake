/****************************************************************************
** Meta object code from reading C++ file 'snake.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Snake/snake.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'snake.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_snake_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_snake_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_snake_t qt_meta_stringdata_snake = {
    {
QT_MOC_LITERAL(0, 0, 5), // "snake"
QT_MOC_LITERAL(1, 6, 14), // "snakeMovementX"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "snakeMovementY"
QT_MOC_LITERAL(4, 37, 22), // "snakeAlongTheXPosition"
QT_MOC_LITERAL(5, 60, 1), // "x"
QT_MOC_LITERAL(6, 62, 22), // "snakeAlongTheYPosition"
QT_MOC_LITERAL(7, 85, 1), // "y"
QT_MOC_LITERAL(8, 87, 35) // "theChangeInDirectionOfMovemen..."

    },
    "snake\0snakeMovementX\0\0snakeMovementY\0"
    "snakeAlongTheXPosition\0x\0"
    "snakeAlongTheYPosition\0y\0"
    "theChangeInDirectionOfMovementSnake"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_snake[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    0,   50,    2, 0x0a /* Public */,
       4,    1,   51,    2, 0x0a /* Public */,
       4,    0,   54,    2, 0x2a /* Public | MethodCloned */,
       6,    1,   55,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x2a /* Public | MethodCloned */,
       8,    2,   59,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    7,

       0        // eod
};

void snake::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        snake *_t = static_cast<snake *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->snakeMovementX();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->snakeMovementY();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->snakeAlongTheXPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->snakeAlongTheXPosition(); break;
        case 4: _t->snakeAlongTheYPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->snakeAlongTheYPosition(); break;
        case 6: _t->theChangeInDirectionOfMovementSnake((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject snake::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_snake.data,
      qt_meta_data_snake,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *snake::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *snake::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_snake.stringdata0))
        return static_cast<void*>(const_cast< snake*>(this));
    return QObject::qt_metacast(_clname);
}

int snake::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
