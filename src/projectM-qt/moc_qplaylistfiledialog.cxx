/****************************************************************************
** Meta object code from reading C++ file 'qplaylistfiledialog.hpp'
**
** Created: Wed Jan 8 16:33:51 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qplaylistfiledialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaylistfiledialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlaylistFileDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x08,
      68,   54,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPlaylistFileDialog[] = {
    "QPlaylistFileDialog\0\0fileName\0"
    "updateFileMode(QString)\0selectedFiles\0"
    "updateFileMode(QStringList)\0"
};

void QPlaylistFileDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlaylistFileDialog *_t = static_cast<QPlaylistFileDialog *>(_o);
        switch (_id) {
        case 0: _t->updateFileMode((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->updateFileMode((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlaylistFileDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlaylistFileDialog::staticMetaObject = {
    { &QFileDialog::staticMetaObject, qt_meta_stringdata_QPlaylistFileDialog,
      qt_meta_data_QPlaylistFileDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlaylistFileDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlaylistFileDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlaylistFileDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaylistFileDialog))
        return static_cast<void*>(const_cast< QPlaylistFileDialog*>(this));
    return QFileDialog::qt_metacast(_clname);
}

int QPlaylistFileDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
