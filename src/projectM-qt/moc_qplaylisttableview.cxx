/****************************************************************************
** Meta object code from reading C++ file 'qplaylisttableview.hpp'
**
** Created: Mon Dec 23 22:48:28 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qplaylisttableview.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qplaylisttableview.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QPlaylistTableView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      27,   20,   19,   19, 0x05,
      76,   70,   19,   19, 0x05,
     105,   99,   19,   19, 0x05,
     152,  139,   19,   19, 0x05,
     210,   99,   19,   19, 0x25,

 // slots: signature, parameters, type, tag, flags
     256,   70,   19,   19, 0x0a,
     279,   70,   19,   19, 0x0a,
     312,   70,   19,   19, 0x0a,
     345,   70,   19,   19, 0x0a,
     376,   70,   19,   19, 0x0a,
     403,   70,   19,   19, 0x0a,
     433,   70,   19,   19, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QPlaylistTableView[] = {
    "QPlaylistTableView\0\0,items\0"
    "mousePressed(QMouseEvent*,QModelIndexList)\0"
    "event\0resized(QResizeEvent*)\0items\0"
    "deletesRequested(QModelIndexList)\0"
    "items,target\0"
    "internalDragAndDropRequested(QModelIndexList,QModelIndex)\0"
    "internalDragAndDropRequested(QModelIndexList)\0"
    "dropEvent(QDropEvent*)\0"
    "dragLeaveEvent(QDragLeaveEvent*)\0"
    "dragEnterEvent(QDragEnterEvent*)\0"
    "dragMoveEvent(QDragMoveEvent*)\0"
    "resizeEvent(QResizeEvent*)\0"
    "mousePressEvent(QMouseEvent*)\0"
    "keyReleaseEvent(QKeyEvent*)\0"
};

void QPlaylistTableView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QPlaylistTableView *_t = static_cast<QPlaylistTableView *>(_o);
        switch (_id) {
        case 0: _t->mousePressed((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QModelIndexList(*)>(_a[2]))); break;
        case 1: _t->resized((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 2: _t->deletesRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 3: _t->internalDragAndDropRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        case 4: _t->internalDragAndDropRequested((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 5: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 6: _t->dragLeaveEvent((*reinterpret_cast< QDragLeaveEvent*(*)>(_a[1]))); break;
        case 7: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 8: _t->dragMoveEvent((*reinterpret_cast< QDragMoveEvent*(*)>(_a[1]))); break;
        case 9: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 10: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 11: _t->keyReleaseEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QPlaylistTableView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QPlaylistTableView::staticMetaObject = {
    { &QTableView::staticMetaObject, qt_meta_stringdata_QPlaylistTableView,
      qt_meta_data_QPlaylistTableView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QPlaylistTableView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QPlaylistTableView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QPlaylistTableView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QPlaylistTableView))
        return static_cast<void*>(const_cast< QPlaylistTableView*>(this));
    return QTableView::qt_metacast(_clname);
}

int QPlaylistTableView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableView::qt_metacall(_c, _id, _a);
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
void QPlaylistTableView::mousePressed(QMouseEvent * _t1, const QModelIndexList & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPlaylistTableView::resized(QResizeEvent * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QPlaylistTableView::deletesRequested(const QModelIndexList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QPlaylistTableView::internalDragAndDropRequested(const QModelIndexList & _t1, const QModelIndex & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
