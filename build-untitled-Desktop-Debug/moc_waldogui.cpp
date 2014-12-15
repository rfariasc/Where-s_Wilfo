/****************************************************************************
** Meta object code from reading C++ file 'waldogui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../untitled/waldogui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'waldogui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WaldoGUI_t {
    QByteArrayData data[20];
    char stringdata[286];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WaldoGUI_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WaldoGUI_t qt_meta_stringdata_WaldoGUI = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 11),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 12),
QT_MOC_LITERAL(4, 35, 14),
QT_MOC_LITERAL(5, 50, 14),
QT_MOC_LITERAL(6, 65, 16),
QT_MOC_LITERAL(7, 82, 4),
QT_MOC_LITERAL(8, 87, 13),
QT_MOC_LITERAL(9, 101, 18),
QT_MOC_LITERAL(10, 120, 12),
QT_MOC_LITERAL(11, 133, 3),
QT_MOC_LITERAL(12, 137, 21),
QT_MOC_LITERAL(13, 159, 23),
QT_MOC_LITERAL(14, 183, 29),
QT_MOC_LITERAL(15, 213, 20),
QT_MOC_LITERAL(16, 234, 21),
QT_MOC_LITERAL(17, 256, 3),
QT_MOC_LITERAL(18, 260, 16),
QT_MOC_LITERAL(19, 277, 7)
    },
    "WaldoGUI\0texto_listo\0\0imagen_lista\0"
    "imagen_lista_2\0charge_Filters\0"
    "imagenFinalLista\0Mat&\0franjasListas\0"
    "templateMatchListo\0RunHistogram\0PPB\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_actionVerFiltros_triggered\0"
    "cargarImagenOriginal\0cargarImagenProcesada\0"
    "img\0CargarHistograma\0PPB_RUN\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WaldoGUI[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06,
       3,    0,   97,    2, 0x06,
       4,    0,   98,    2, 0x06,
       5,    0,   99,    2, 0x06,
       6,    1,  100,    2, 0x06,
       8,    1,  103,    2, 0x06,
       9,    1,  106,    2, 0x06,
      10,    1,  109,    2, 0x06,
      11,    1,  112,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      12,    0,  115,    2, 0x0a,
      13,    0,  116,    2, 0x0a,
      14,    0,  117,    2, 0x0a,
      15,    0,  118,    2, 0x0a,
      16,    1,  119,    2, 0x0a,
      18,    1,  122,    2, 0x0a,
      19,    1,  125,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,   17,
    QMetaType::Void, 0x80000000 | 7,   17,
    QMetaType::Void, 0x80000000 | 7,    2,

       0        // eod
};

void WaldoGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WaldoGUI *_t = static_cast<WaldoGUI *>(_o);
        switch (_id) {
        case 0: _t->texto_listo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->imagen_lista(); break;
        case 2: _t->imagen_lista_2(); break;
        case 3: _t->charge_Filters(); break;
        case 4: _t->imagenFinalLista((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 5: _t->franjasListas((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 6: _t->templateMatchListo((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 7: _t->RunHistogram((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 8: _t->PPB((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_clicked(); break;
        case 10: _t->on_pushButton_2_clicked(); break;
        case 11: _t->on_actionVerFiltros_triggered(); break;
        case 12: _t->cargarImagenOriginal(); break;
        case 13: _t->cargarImagenProcesada((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 14: _t->CargarHistograma((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 15: _t->PPB_RUN((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WaldoGUI::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::texto_listo)) {
                *result = 0;
            }
        }
        {
            typedef void (WaldoGUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::imagen_lista)) {
                *result = 1;
            }
        }
        {
            typedef void (WaldoGUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::imagen_lista_2)) {
                *result = 2;
            }
        }
        {
            typedef void (WaldoGUI::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::charge_Filters)) {
                *result = 3;
            }
        }
        {
            typedef void (WaldoGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::imagenFinalLista)) {
                *result = 4;
            }
        }
        {
            typedef void (WaldoGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::franjasListas)) {
                *result = 5;
            }
        }
        {
            typedef void (WaldoGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::templateMatchListo)) {
                *result = 6;
            }
        }
        {
            typedef void (WaldoGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::RunHistogram)) {
                *result = 7;
            }
        }
        {
            typedef void (WaldoGUI::*_t)(Mat & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WaldoGUI::PPB)) {
                *result = 8;
            }
        }
    }
}

const QMetaObject WaldoGUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WaldoGUI.data,
      qt_meta_data_WaldoGUI,  qt_static_metacall, 0, 0}
};


const QMetaObject *WaldoGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WaldoGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WaldoGUI.stringdata))
        return static_cast<void*>(const_cast< WaldoGUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WaldoGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void WaldoGUI::texto_listo(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WaldoGUI::imagen_lista()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void WaldoGUI::imagen_lista_2()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void WaldoGUI::charge_Filters()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void WaldoGUI::imagenFinalLista(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WaldoGUI::franjasListas(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WaldoGUI::templateMatchListo(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WaldoGUI::RunHistogram(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WaldoGUI::PPB(Mat & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
