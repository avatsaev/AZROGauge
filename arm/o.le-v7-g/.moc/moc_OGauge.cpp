/****************************************************************************
** Meta object code from reading C++ file 'OGauge.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/AZRUI/OGauge/OGauge.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OGauge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AZRUI__OGauge[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       5,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      30,   14,   14,   14, 0x05,
      45,   14,   14,   14, 0x05,
      60,   14,   14,   14, 0x05,
      83,   14,   14,   14, 0x05,

 // properties: name, type, flags
     111,  105, 0x87495103,
     137,  117, 0x00495009,
     151,  143, 0x0a495103,
     162,  157, 0x11495003,
     178,  173, 0x01495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,

       0        // eod
};

static const char qt_meta_stringdata_AZRUI__OGauge[] = {
    "AZRUI::OGauge\0\0valueChanged()\0"
    "imageChanged()\0colorChanged()\0"
    "foregroundUrlChanged()\0labelVisibleChanged()\0"
    "float\0value\0bb::cascades::Image\0image\0"
    "QString\0color\0QUrl\0foreground\0bool\0"
    "labelVisible\0"
};

void AZRUI::OGauge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        OGauge *_t = static_cast<OGauge *>(_o);
        switch (_id) {
        case 0: _t->valueChanged(); break;
        case 1: _t->imageChanged(); break;
        case 2: _t->colorChanged(); break;
        case 3: _t->foregroundUrlChanged(); break;
        case 4: _t->labelVisibleChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData AZRUI::OGauge::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject AZRUI::OGauge::staticMetaObject = {
    { &bb::cascades::CustomControl::staticMetaObject, qt_meta_stringdata_AZRUI__OGauge,
      qt_meta_data_AZRUI__OGauge, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AZRUI::OGauge::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AZRUI::OGauge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AZRUI::OGauge::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AZRUI__OGauge))
        return static_cast<void*>(const_cast< OGauge*>(this));
    typedef bb::cascades::CustomControl QMocSuperClass;
    return QMocSuperClass::qt_metacast(_clname);
}

int AZRUI::OGauge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    typedef bb::cascades::CustomControl QMocSuperClass;
    _id = QMocSuperClass::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = value(); break;
        case 1: *reinterpret_cast< bb::cascades::Image*>(_v) = image(); break;
        case 2: *reinterpret_cast< QString*>(_v) = color(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = foregroundUrl(); break;
        case 4: *reinterpret_cast< bool*>(_v) = labelVisible(); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setValue(*reinterpret_cast< float*>(_v)); break;
        case 2: setColor(*reinterpret_cast< QString*>(_v)); break;
        case 3: setForegroundUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 4: setLabelVisible(*reinterpret_cast< bool*>(_v)); break;
        }
        _id -= 5;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AZRUI::OGauge::valueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AZRUI::OGauge::imageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void AZRUI::OGauge::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void AZRUI::OGauge::foregroundUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void AZRUI::OGauge::labelVisibleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}
QT_END_MOC_NAMESPACE
