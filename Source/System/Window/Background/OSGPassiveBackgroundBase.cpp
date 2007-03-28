/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
 *                                                                           *
 *                            www.opensg.org                                 *
 *                                                                           *
 *   contact: dirk@opensg.org, gerrit.voss@vossg.org, jbehr@zgdv.de          *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 * This library is free software; you can redistribute it and/or modify it   *
 * under the terms of the GNU Library General Public License as published    *
 * by the Free Software Foundation, version 2.                               *
 *                                                                           *
 * This library is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of                *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU         *
 * Library General Public License for more details.                          *
 *                                                                           *
 * You should have received a copy of the GNU Library General Public         *
 * License along with this library; if not, write to the Free Software       *
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.                 *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                Changes                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
\*---------------------------------------------------------------------------*/

/*****************************************************************************\
 *****************************************************************************
 **                                                                         **
 **                  This file is automatically generated.                  **
 **                                                                         **
 **          Any changes made to this file WILL be lost when it is          **
 **           regenerated, which can become necessary at any time.          **
 **                                                                         **
 **     Do not change this file, changes should be done in the derived      **
 **     class PassiveBackground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPASSIVEBACKGROUNDINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPassiveBackgroundBase.h"
#include "OSGPassiveBackground.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PassiveBackground
    \ingroup GrpSystemWindowBackgrounds
 */


PassiveBackgroundBase::TypeObject PassiveBackgroundBase::_type(
    PassiveBackgroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PassiveBackgroundBase::createEmpty,
    PassiveBackground::initMethod,
    NULL,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PassiveBackground\"\n"
    "\tparent=\"Background\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that does nothing within the clear call, thus it also has no Fields at all. It is mainly used to stack viewports on top of each other, i.e. it makes it possible to have two viewports on top of each other to generate a single combined image. See \\ref PageSystemWindowBackgroundPassive\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowBackgrounds\n"
    "\n"
    "A background that does nothing within the clear call, thus it also has no Fields at all. It is mainly used to stack viewports on top of each other, i.e. it makes it possible to have two viewports on top of each other to generate a single combined image. See \\ref PageSystemWindowBackgroundPassive\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PassiveBackgroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PassiveBackgroundBase::getType(void) const
{
    return _type;
}

UInt32 PassiveBackgroundBase::getContainerSize(void) const
{
    return sizeof(PassiveBackground);
}

/*------------------------- decorator get ------------------------------*/






/*------------------------------ access -----------------------------------*/

UInt32 PassiveBackgroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);


    return returnValue;
}

void PassiveBackgroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

}

void PassiveBackgroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

}

//! create an empty new instance of the class, do not copy the prototype
PassiveBackgroundPtr PassiveBackgroundBase::createEmpty(void)
{
    PassiveBackgroundPtr returnValue;

    newPtr<PassiveBackground>(returnValue);

    return returnValue;
}

FieldContainerPtr PassiveBackgroundBase::shallowCopy(void) const
{
    PassiveBackgroundPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PassiveBackground *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PassiveBackgroundBase::PassiveBackgroundBase(void) :
    Inherited()
{
}

PassiveBackgroundBase::PassiveBackgroundBase(const PassiveBackgroundBase &source) :
    Inherited(source)
{
}

/*-------------------------- destructors ----------------------------------*/

PassiveBackgroundBase::~PassiveBackgroundBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void PassiveBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<PassiveBackgroundBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void PassiveBackgroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PassiveBackgroundBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void PassiveBackgroundBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PassiveBackgroundBase::createAspectCopy(void) const
{
    PassiveBackgroundPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PassiveBackground *>(this));

    return returnValue;
}
#endif

void PassiveBackgroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PassiveBackgroundPtr>::_type("PassiveBackgroundPtr", "BackgroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PassiveBackgroundPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, PassiveBackgroundPtr, SFFieldContainerPtr);

OSG_END_NAMESPACE
