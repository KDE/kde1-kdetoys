/****************************************************************************
** GridBagLayout meta object code from reading C++ file 'gridbag.h'
**
** Created: Sun Jun 28 17:33:16 1998
**      by: The Qt Meta Object Compiler ($Revision$)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#if !defined(Q_MOC_OUTPUT_REVISION)
#define Q_MOC_OUTPUT_REVISION 2
#elif Q_MOC_OUTPUT_REVISION != 2
#error Moc format conflict - please regenerate all moc files
#endif

#include "gridbag.h"
#include <qmetaobj.h>


const char *GridBagLayout::className() const
{
    return "GridBagLayout";
}

QMetaObject *GridBagLayout::metaObj = 0;

void GridBagLayout::initMetaObject()
{
    if ( metaObj )
	return;
    if ( strcmp(QObject::className(), "QObject") != 0 )
	badSuperclassWarning("GridBagLayout","QObject");
    if ( !QObject::metaObject() )
	QObject::initMetaObject();
    metaObj = new QMetaObject( "GridBagLayout", "QObject",
	0, 0,
	0, 0 );
}
