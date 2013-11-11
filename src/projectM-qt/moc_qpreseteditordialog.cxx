/****************************************************************************
** Meta object code from reading C++ file 'qpreseteditordialog.hpp'
**
** Created: Mon Nov 11 21:58:23 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qpreseteditordialog.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qpreseteditordialog.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPresetEditorDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      30,   21,   20,   20, 0x05,

 // slots: signature, parameters, type, tag, flags
      57,   50,   20,   20, 0x08,
      92,   20,   20,   20, 0x08,
     103,   20,   20,   20, 0x08,
     119,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QPresetEditorDialog[] = {
    "QPresetEditorDialog\0\0rowIndex\0"
    "presetModified(int)\0button\0"
    "buttonBoxHandler(QAbstractButton*)\0"
    "saveFile()\0saveAndNotify()\0"
    "updateWindowTitle()\0"
};

void QPresetEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPresetEditorDialog *_t = static_cast<QPresetEditorDialog *>(_o);
        switch (_id) {
        case 0: _t->presetModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->buttonBoxHandler((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 2: _t->saveFile(); break;
        case 3: _t->saveAndNotify(); break;
        case 4: _t->updateWindowTitle(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPresetEditorDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPresetEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QPresetEditorDialog,
      qt_meta_data_QPresetEditorDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPresetEditorDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPresetEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPresetEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPresetEditorDialog))
        return static_cast<void*>(const_cast< QPresetEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QPresetEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QPresetEditorDialog::presetModified(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
