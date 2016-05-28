/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[19];
    char stringdata0[382];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_ConnectButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_DisconnectButton_clicked"
QT_MOC_LITERAL(4, 65, 23), // "on_rSlider_valueChanged"
QT_MOC_LITERAL(5, 89, 5), // "value"
QT_MOC_LITERAL(6, 95, 23), // "on_gSlider_valueChanged"
QT_MOC_LITERAL(7, 119, 23), // "on_bSlider_valueChanged"
QT_MOC_LITERAL(8, 143, 9), // "serialRGB"
QT_MOC_LITERAL(9, 153, 20), // "on_redButton_clicked"
QT_MOC_LITERAL(10, 174, 22), // "on_greenButton_clicked"
QT_MOC_LITERAL(11, 197, 21), // "on_blueButton_clicked"
QT_MOC_LITERAL(12, 219, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(13, 244, 12), // "load_presets"
QT_MOC_LITERAL(14, 257, 38), // "on_presetsDropdown_currentInd..."
QT_MOC_LITERAL(15, 296, 5), // "index"
QT_MOC_LITERAL(16, 302, 27), // "on_presetsSetButton_clicked"
QT_MOC_LITERAL(17, 330, 20), // "on_offButton_clicked"
QT_MOC_LITERAL(18, 351, 30) // "on_reloadpresetsButton_clicked"

    },
    "MainWindow\0on_ConnectButton_clicked\0"
    "\0on_DisconnectButton_clicked\0"
    "on_rSlider_valueChanged\0value\0"
    "on_gSlider_valueChanged\0on_bSlider_valueChanged\0"
    "serialRGB\0on_redButton_clicked\0"
    "on_greenButton_clicked\0on_blueButton_clicked\0"
    "on_refreshButton_clicked\0load_presets\0"
    "on_presetsDropdown_currentIndexChanged\0"
    "index\0on_presetsSetButton_clicked\0"
    "on_offButton_clicked\0"
    "on_reloadpresetsButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    1,   91,    2, 0x08 /* Private */,
       6,    1,   94,    2, 0x08 /* Private */,
       7,    1,   97,    2, 0x08 /* Private */,
       8,    0,  100,    2, 0x08 /* Private */,
       9,    0,  101,    2, 0x08 /* Private */,
      10,    0,  102,    2, 0x08 /* Private */,
      11,    0,  103,    2, 0x08 /* Private */,
      12,    0,  104,    2, 0x08 /* Private */,
      13,    0,  105,    2, 0x08 /* Private */,
      14,    1,  106,    2, 0x08 /* Private */,
      16,    0,  109,    2, 0x08 /* Private */,
      17,    0,  110,    2, 0x08 /* Private */,
      18,    0,  111,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ConnectButton_clicked(); break;
        case 1: _t->on_DisconnectButton_clicked(); break;
        case 2: _t->on_rSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_gSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_bSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->serialRGB(); break;
        case 6: _t->on_redButton_clicked(); break;
        case 7: _t->on_greenButton_clicked(); break;
        case 8: _t->on_blueButton_clicked(); break;
        case 9: _t->on_refreshButton_clicked(); break;
        case 10: _t->load_presets(); break;
        case 11: _t->on_presetsDropdown_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_presetsSetButton_clicked(); break;
        case 13: _t->on_offButton_clicked(); break;
        case 14: _t->on_reloadpresetsButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
