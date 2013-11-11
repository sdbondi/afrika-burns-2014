/****************************************************************************
** Meta object code from reading C++ file 'qprojectm_mainwindow.hpp'
**
** Created: Mon Nov 11 22:36:47 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "qprojectm_mainwindow.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qprojectm_mainwindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QProjectM_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   21,   21,   21, 0x05,

 // slots: signature, parameters, type, tag, flags
      42,   37,   21,   21, 0x08,
      85,   82,   21,   21, 0x08,
     132,   21,   21,   21, 0x08,
     148,   21,   21,   21, 0x08,
     164,   21,   21,   21, 0x08,
     186,   21,   21,   21, 0x08,
     216,   21,   21,   21, 0x08,
     265,  258,   21,   21, 0x08,
     320,   21,   21,   21, 0x08,
     347,  338,   21,   21, 0x08,
     371,   21,   21,   21, 0x08,
     392,  338,   21,   21, 0x08,
     420,   21,   21,   21, 0x08,
     430,   21,   21,   21, 0x08,
     446,   21,   21,   21, 0x08,
     471,  465,   21,   21, 0x08,
     501,   21,   21,   21, 0x08,
     522,   21,   21,   21, 0x08,
     548,   21,   21,   21, 0x08,
     571,   21,   21,   21, 0x08,
     579,   21,   21,   21, 0x08,
     619,  605,   21,   21, 0x08,
     654,  465,   21,   21, 0x08,
     686,  465,   21,   21, 0x08,
     721,   21,   21,   21, 0x08,
     747,  742,   21,   21, 0x08,
     785,  779,   21,   21, 0x08,
     815,   21,   21,   21, 0x28,
     838,  832,   21,   21, 0x08,
     877,  875,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QProjectM_MainWindow[] = {
    "QProjectM_MainWindow\0\0shuttingDown()\0"
    "area\0dockLocationChanged(Qt::DockWidgetArea)\0"
    ",,\0presetRatingChanged(uint,int,PresetRatingType)\0"
    "presetHardCut()\0presetSoftCut()\0"
    "insertPresetsDialog()\0"
    "removeSelectedPlaylistItems()\0"
    "openPresetEditorDialogForSelectedPreset()\0"
    ",items\0popupPlaylistContextMenu(QMouseEvent*,QModelIndexList)\0"
    "hotkeyReference()\0rowIndex\0"
    "selectPlaylistItem(int)\0clearPlaylistModel()\0"
    "openPresetEditorDialog(int)\0aboutQt()\0"
    "clearPlaylist()\0addPresetsDialog()\0"
    "index\0addPresetsDialog(QModelIndex)\0"
    "openPlaylistDialog()\0savePlaylistButtonClick()\0"
    "savePlaylistAsDialog()\0about()\0"
    "postProjectM_Initialize()\0hardCut,index\0"
    "updatePlaylistSelection(bool,uint)\0"
    "selectPlaylistItem(QModelIndex)\0"
    "changePresetAttribute(QModelIndex)\0"
    "openSettingsDialog()\0text\0"
    "updateFilteredPlaylist(QString)\0event\0"
    "refreshHeaders(QResizeEvent*)\0"
    "refreshHeaders()\0items\0"
    "removePlaylistItems(QModelIndexList)\0"
    ",\0dragAndDropPlaylistItems(QModelIndexList,QModelIndex)\0"
};

void QProjectM_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QProjectM_MainWindow *_t = static_cast<QProjectM_MainWindow *>(_o);
        switch (_id) {
        case 0: _t->shuttingDown(); break;
        case 1: _t->dockLocationChanged((*reinterpret_cast< Qt::DockWidgetArea(*)>(_a[1]))); break;
        case 2: _t->presetRatingChanged((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< PresetRatingType(*)>(_a[3]))); break;
        case 3: _t->presetHardCut(); break;
        case 4: _t->presetSoftCut(); break;
        case 5: _t->insertPresetsDialog(); break;
        case 6: _t->removeSelectedPlaylistItems(); break;
        case 7: _t->openPresetEditorDialogForSelectedPreset(); break;
        case 8: _t->popupPlaylistContextMenu((*reinterpret_cast< QMouseEvent*(*)>(_a[1])),(*reinterpret_cast< const QModelIndexList(*)>(_a[2]))); break;
        case 9: _t->hotkeyReference(); break;
        case 10: _t->selectPlaylistItem((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->clearPlaylistModel(); break;
        case 12: _t->openPresetEditorDialog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->aboutQt(); break;
        case 14: _t->clearPlaylist(); break;
        case 15: _t->addPresetsDialog(); break;
        case 16: _t->addPresetsDialog((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 17: _t->openPlaylistDialog(); break;
        case 18: _t->savePlaylistButtonClick(); break;
        case 19: _t->savePlaylistAsDialog(); break;
        case 20: _t->about(); break;
        case 21: _t->postProjectM_Initialize(); break;
        case 22: _t->updatePlaylistSelection((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2]))); break;
        case 23: _t->selectPlaylistItem((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 24: _t->changePresetAttribute((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 25: _t->openSettingsDialog(); break;
        case 26: _t->updateFilteredPlaylist((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->refreshHeaders((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 28: _t->refreshHeaders(); break;
        case 29: _t->removePlaylistItems((*reinterpret_cast< const QModelIndexList(*)>(_a[1]))); break;
        case 30: _t->dragAndDropPlaylistItems((*reinterpret_cast< const QModelIndexList(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QProjectM_MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QProjectM_MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QProjectM_MainWindow,
      qt_meta_data_QProjectM_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QProjectM_MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QProjectM_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QProjectM_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QProjectM_MainWindow))
        return static_cast<void*>(const_cast< QProjectM_MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QProjectM_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void QProjectM_MainWindow::shuttingDown()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
