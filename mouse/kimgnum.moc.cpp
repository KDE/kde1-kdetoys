/****************************************************************************
** KImageNumber meta object code from reading C++ file 'kimgnum.h'
**
** Created: Fri May 22 22:58:41 1998
**      by: The Qt Meta Object Compiler ($Revision$)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 2
#elif Q_MOC_OUTPUT_REVISION != 2
#error Moc format conflict - please regenerate all moc files
#endif

#include "kimgnum.h"
#include <qmetaobj.h>


const char *KImageNumber::className() const
{
    return "KImageNumber";
}

QMetaObject *KImageNumber::metaObj = 0;

void KImageNumber::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QFrame::className(), "QFrame") != 0 )
	badSuperclassWarning("KImageNumber","QFrame");
    if ( !QFrame::metaObject() )
	QFrame::initMetaObject();
    typedef void(KImageNumber::*m1_t0)(double);
    m1_t0 v1_0 = &KImageNumber::setValue;
    QMetaData *slot_tbl = new QMetaData[1];
    slot_tbl[0].name = "setValue(double)";
    slot_tbl[0].ptr = *((QMember*)&v1_0);
    metaObj = new QMetaObject( "KImageNumber", "QFrame",
	slot_tbl, 1,
	0, 0 );
}
