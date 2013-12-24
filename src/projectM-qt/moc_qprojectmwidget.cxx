/****************************************************************************
** Meta object code from reading C++ file 'qprojectmwidget.hpp'
**
** Created: Tue Dec 24 16:12:44 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectmwidget.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectmwidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectMWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,
      50,   16,   16,   16, 0x05,
      84,   75,   16,   16, 0x05,
     125,  108,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
     159,  153,   16,   16, 0x09,
     188,  153,   16,   16, 0x09,
     208,   16,   16,   16, 0x0a,
     230,  224,   16,   16, 0x0a,
     259,  253,   16,   16, 0x0a,
     278,  253,   16,   16, 0x0a,
     301,  153,   16,   16, 0x0a,
     331,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectMWidget[] = {
    "QProjectMWidget\0\0projectM_Initialized(QProjectM*)\0"
    "projectM_BeforeDestroy()\0isLocked\0"
    "presetLockChanged(bool)\0isShuffleEnabled\0"
    "shuffleEnabledChanged(bool)\0event\0"
    "mouseMoveEvent(QMouseEvent*)\0"
    "leaveEvent(QEvent*)\0resetProjectM()\0"
    "mutex\0setAudioMutex(QMutex*)\0state\0"
    "setPresetLock(int)\0setShuffleEnabled(int)\0"
    "mousePressEvent(QMouseEvent*)\0hideMouse()\0"
};

void QProjectMWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProjectMWidget *_t = static_cast<QProjectMWidget *>(_o);
        switch (_id) {
        case 0: _t->projectM_Initialized((*reinterpret_cast< QProjectM*(*)>(_a[1]))); break;
        case 1: _t->projectM_BeforeDestroy(); break;
        case 2: _t->presetLockChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->shuffleEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 5: _t->leaveEvent((*reinterpret_cast< QEvent*(*)>(_a[1]))); break;
        case 6: _t->resetProjectM(); break;
        case 7: _t->setAudioMutex((*reinterpret_cast< QMutex*(*)>(_a[1]))); break;
        case 8: _t->setPresetLock((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setShuffleEnabled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->hideMouse(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProjectMWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProjectMWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_QProjectMWidget,
      qt_meta_data_QProjectMWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectMWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectMWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectMWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectMWidget))
        return static_cast<void*>(const_cast< QProjectMWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int QProjectMWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QProjectMWidget::projectM_Initialized(QProjectM * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QProjectMWidget::projectM_BeforeDestroy()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void QProjectMWidget::presetLockChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QProjectMWidget::shuffleEnabledChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
