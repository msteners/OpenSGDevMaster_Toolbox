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
 **     class Switch!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESWITCHINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSwitchBase.h"
#include "OSGSwitch.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::Switch
    This core allows selection of different subtrees with the \c choice field.
    Depending on its value either all, none or only the specified child is enabled.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Int32           SwitchBase::_sfChoice
    
*/


void SwitchBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFInt32 *(SwitchBase::*GetSFChoiceF)(void) const;

    GetSFChoiceF GetSFChoice = &SwitchBase::getSFChoice;
#endif

    pDesc = new SFInt32::Description(
        SFInt32::getClassType(),
        "choice",
        "",
        ChoiceFieldId, ChoiceFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SwitchBase::editSFChoice),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFChoice));
#else
        reinterpret_cast<FieldGetMethodSig >(&SwitchBase::getSFChoice));
#endif

    oType.addInitialDesc(pDesc);
}


SwitchBase::TypeObject SwitchBase::_type(
    SwitchBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SwitchBase::createEmpty,
    Switch::initMethod,
    (InitalInsertDescFunc) &SwitchBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"Switch\"\n"
    "\tparent=\"Group\"\n"
    "\tlibrary=\"Group\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "This core allows selection of different subtrees with the \\c choice field.\n"
    "Depending on its value either all, none or only the specified child is enabled.\n"
    "\t<Field\n"
    "\t\tname=\"choice\"\n"
    "\t\ttype=\"Int32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"-1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This core allows selection of different subtrees with the \\c choice field.\n"
    "Depending on its value either all, none or only the specified child is enabled.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SwitchBase::getType(void)
{
    return _type;
}

const FieldContainerType &SwitchBase::getType(void) const
{
    return _type;
}

UInt32 SwitchBase::getContainerSize(void) const
{
    return sizeof(Switch);
}

/*------------------------- decorator get ------------------------------*/


SFInt32 *SwitchBase::editSFChoice(void)
{
    editSField(ChoiceFieldMask);

    return &_sfChoice;
}

const SFInt32 *SwitchBase::getSFChoice(void) const
{
    return &_sfChoice;
}

#ifdef OSG_1_COMPAT
SFInt32             *SwitchBase::getSFChoice         (void)
{
    return this->editSFChoice         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SwitchBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        returnValue += _sfChoice.getBinSize();
    }

    return returnValue;
}

void SwitchBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyToBin(pMem);
    }
}

void SwitchBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ChoiceFieldMask & whichField))
    {
        _sfChoice.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SwitchPtr SwitchBase::createEmpty(void)
{
    SwitchPtr returnValue;

    newPtr<Switch>(returnValue);

    return returnValue;
}

FieldContainerPtr SwitchBase::shallowCopy(void) const
{
    SwitchPtr returnValue;

    newPtr(returnValue, dynamic_cast<const Switch *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SwitchBase::SwitchBase(void) :
    Inherited(),
    _sfChoice                 (Int32(-1))
{
}

SwitchBase::SwitchBase(const SwitchBase &source) :
    Inherited(source),
    _sfChoice                 (source._sfChoice                 )
{
}

/*-------------------------- destructors ----------------------------------*/

SwitchBase::~SwitchBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void SwitchBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SwitchBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SwitchBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SwitchBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SwitchBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SwitchBase::createAspectCopy(void) const
{
    SwitchPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const Switch *>(this));

    return returnValue;
}
#endif

void SwitchBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SwitchPtr>::_type("SwitchPtr", "GroupPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SwitchPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, SwitchPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, SwitchPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
