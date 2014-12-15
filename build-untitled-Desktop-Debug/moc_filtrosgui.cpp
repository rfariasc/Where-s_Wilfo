/****************************************************************************
** Meta object code from reading C++ file 'filtrosgui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../untitled/filtrosgui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filtrosgui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FiltrosGUI_t {
    QByteArrayData data[9];
    char stringdata[116];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FiltrosGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FiltrosGUI_t qt_meta_stringdata_FiltrosGUI = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 4),
QT_MOC_LITERAL(4, 32, 14),
QT_MOC_LITERAL(5, 47, 15),
QT_MOC_LITERAL(6, 63, 16),
QT_MOC_LITERAL(7, 80, 16),
QT_MOC_LITERAL(8, 97, 17)
    },
    "FiltrosGUI\0filtroUnoListo\0\0Mat&\0"
    "filtroDosListo\0filtroTresListo\0"
    "mostrarFiltroUno\0mostrarFiltroDos\0"
    "mostrarFiltroTres\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FiltrosGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06,
       4,    1,   47,    2, 0x06,
       5,    1,   50,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       6,    1,   53,    2, 0x0a,
       7,    1,   56,    2, 0x0a,
       8,    1,   59,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

void FiltrosGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FiltrosGUI *_t = static_cast<FiltrosGUI *>(_o);
        switch (_id) {
        case 0: _t->filtroUnoListo((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 1: _t->filtroDosListo((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 2: _t->filtroTresListo((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 3: _t->mostrarFiltroUno((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 4: _t->mostrarFiltroDos((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 5: _t->mostrarFiltroTres((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FiltrosGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FiltrosGUI::filtroUnoListo)) {
                *result = 0;
            }
        }
        {
            typedef void (FiltrosGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FiltrosGUI::filtroDosListo)) {
                *result = 1;
            }
        }
        {
            typedef void (FiltrosGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FiltrosGUI::filtroTresListo)) {
                *result = 2;
            }
        }
    }
}

const QMetaObject FiltrosGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_FiltrosGUI.data,
      qt_meta_data_FiltrosGUI,  qt_static_metacall, 0, 0}
};


const QMetaObject *FiltrosGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FiltrosGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FiltrosGUI.stringdata))
        return static_cast<void*>(const_cast< FiltrosGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int FiltrosGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void FiltrosGUI::filtroUnoListo(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FiltrosGUI::filtroDosListo(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FiltrosGUI::filtroTresListo(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
