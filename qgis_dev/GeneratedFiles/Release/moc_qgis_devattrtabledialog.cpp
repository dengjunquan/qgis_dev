/****************************************************************************
** Meta object code from reading C++ file 'qgis_devattrtabledialog.h'
**
** Created: Thu Dec 31 15:15:54 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qgis_devattrtabledialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgis_devattrtabledialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_qgis_devattrtableDialog[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_qgis_devattrtableDialog[] = {
    "qgis_devattrtableDialog\0"
};

void qgis_devattrtableDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData qgis_devattrtableDialog::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject qgis_devattrtableDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_qgis_devattrtableDialog,
      qt_meta_data_qgis_devattrtableDialog, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &qgis_devattrtableDialog::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *qgis_devattrtableDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *qgis_devattrtableDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_qgis_devattrtableDialog))
        return static_cast<void*>(const_cast< qgis_devattrtableDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int qgis_devattrtableDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE