/****************************************************************************
** AnPanel meta object code from reading C++ file 'kodo.h'
**
** Created: Sat Aug 22 15:02:24 1998
**      by: The Qt Meta Object Compiler ($Revision$)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 2
#elif Q_MOC_OUTPUT_REVISION != 2
#error "Moc format conflict - please regenerate all moc files"
#endif

#include "kodo.h"
#include <qmetaobject.h>


const char *AnPanel::className() const
{
    return "AnPanel";
}

QMetaObject *AnPanel::metaObj = 0;

void AnPanel::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QFrame::className(), "QFrame") != 0 )
	badSuperclassWarning("AnPanel","QFrame");
    if ( !QFrame::metaObject() )
	QFrame::initMetaObject();
    metaObj = new QMetaObject( "AnPanel", "QFrame",
	0, 0,
	0, 0 );
}


const char *Kodometer::className() const
{
    return "Kodometer";
}

QMetaObject *Kodometer::metaObj = 0;

void Kodometer::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(AnPanel::className(), "AnPanel") != 0 )
	badSuperclassWarning("Kodometer","AnPanel");
    if ( !AnPanel::metaObject() )
	AnPanel::initMetaObject();
    typedef void(Kodometer::*m1_t0)();
    typedef void(Kodometer::*m1_t1)();
    typedef void(Kodometer::*m1_t2)();
    typedef void(Kodometer::*m1_t3)();
    typedef void(Kodometer::*m1_t4)();
    typedef void(Kodometer::*m1_t5)();
    typedef void(Kodometer::*m1_t6)();
    typedef void(Kodometer::*m1_t7)();
    m1_t0 v1_0 = &Kodometer::toggleEnabled;
    m1_t1 v1_1 = &Kodometer::toggleUnits;
    m1_t2 v1_2 = &Kodometer::toggleAutoReset;
    m1_t3 v1_3 = &Kodometer::resetTrip;
    m1_t4 v1_4 = &Kodometer::resetTotal;
    m1_t5 v1_5 = &Kodometer::quit;
    m1_t6 v1_6 = &Kodometer::help;
    m1_t7 v1_7 = &Kodometer::about;
    QMetaData *slot_tbl = new QMetaData[8];
    slot_tbl[0].name = "toggleEnabled()";
    slot_tbl[1].name = "toggleUnits()";
    slot_tbl[2].name = "toggleAutoReset()";
    slot_tbl[3].name = "resetTrip()";
    slot_tbl[4].name = "resetTotal()";
    slot_tbl[5].name = "quit()";
    slot_tbl[6].name = "help()";
    slot_tbl[7].name = "about()";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    slot_tbl[1].ptr = *((QMember*)&v1_1);
    slot_tbl[2].ptr = *((QMember*)&v1_2);
    slot_tbl[3].ptr = *((QMember*)&v1_3);
    slot_tbl[4].ptr = *((QMember*)&v1_4);
    slot_tbl[5].ptr = *((QMember*)&v1_5);
    slot_tbl[6].ptr = *((QMember*)&v1_6);
    slot_tbl[7].ptr = *((QMember*)&v1_7);
    metaObj = new QMetaObject( "Kodometer", "AnPanel",
	slot_tbl, 8,
	0, 0 );
}
