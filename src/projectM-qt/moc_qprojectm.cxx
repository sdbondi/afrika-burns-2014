/****************************************************************************
** Meta object code from reading C++ file 'qprojectm.hpp'
**
** Created: Mon Nov 11 22:36:48 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectm.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectm.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectM[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   11,   10,   10, 0x05,
      81,   57,   10,   10, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_QProjectM[] = {
    "QProjectM\0\0hardCut,index\0"
    "presetSwitchedSignal(bool,uint)\0"
    "index,rating,ratingType\0"
    "presetRatingChangedSignal(uint,int,PresetRatingType)\0"
};

void QProjectM::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProjectM *_t = static_cast<QProjectM *>(_o);
        switch (_id) {
        case 0: _t->presetSwitchedSignal((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 1: _t->presetRatingChangedSignal((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PresetRatingType(*)>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProjectM::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProjectM::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QProjectM,
      qt_meta_data_QProjectM, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectM::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectM::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectM::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectM))
        return static_cast<void*>(const_cast< QProjectM*>(this));
    if (!strcmp(_clname, "projectM"))
        return static_cast< projectM*>(const_cast< QProjectM*>(this));
    return QObject::qt_metacast(_clname);
}

int QProjectM::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QProjectM::presetSwitchedSignal(bool _t1, unsigned int _t2)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(const_cast< QProjectM *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProjectM::presetRatingChangedSignal(unsigned int _t1, int _t2, PresetRatingType _t3)const
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(const_cast< QProjectM *>(this), &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
