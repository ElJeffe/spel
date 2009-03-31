/****************************************************************************
** Meta object code from reading C++ file 'udplistener.h'
**
** Created: Tue Mar 31 21:53:09 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "udplistener.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'udplistener.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UdpListener[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UdpListener[] = {
    "UdpListener\0\0ReadPendingDatagrams()\0"
};

const QMetaObject UdpListener::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UdpListener,
      qt_meta_data_UdpListener, 0 }
};

const QMetaObject *UdpListener::metaObject() const
{
    return &staticMetaObject;
}

void *UdpListener::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UdpListener))
        return static_cast<void*>(const_cast< UdpListener*>(this));
    return QObject::qt_metacast(_clname);
}

int UdpListener::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: ReadPendingDatagrams(); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
