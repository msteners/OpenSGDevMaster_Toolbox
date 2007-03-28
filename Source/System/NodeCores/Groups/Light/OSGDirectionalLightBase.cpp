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
 **     class DirectionalLight!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEDIRECTIONALLIGHTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGDirectionalLightBase.h"
#include "OSGDirectionalLight.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::DirectionalLight
    DirectionalLight is an infinitely distant lightsource. Its only
    attribute is the light's direction.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3r           DirectionalLightBase::_sfDirection
    
*/


void DirectionalLightBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(DirectionalLightBase::*GetSFDirectionF)(void) const;

    GetSFDirectionF GetSFDirection = &DirectionalLightBase::getSFDirection;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "direction",
        "",
        DirectionFieldId, DirectionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&DirectionalLightBase::editSFDirection),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDirection));
#else
        reinterpret_cast<FieldGetMethodSig >(&DirectionalLightBase::getSFDirection));
#endif

    oType.addInitialDesc(pDesc);
}


DirectionalLightBase::TypeObject DirectionalLightBase::_type(
    DirectionalLightBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &DirectionalLightBase::createEmpty,
    DirectionalLight::initMethod,
    (InitalInsertDescFunc) &DirectionalLightBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"DirectionalLight\"\n"
    "\tparent=\"Light\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"none\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "DirectionalLight is an infinitely distant lightsource. Its only\n"
    "attribute is the light's direction.\n"
    "\t<Field\n"
    "\t\tname=\"direction\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"0.f,0.f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "DirectionalLight is an infinitely distant lightsource. Its only\n"
    "attribute is the light's direction.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &DirectionalLightBase::getType(void)
{
    return _type;
}

const FieldContainerType &DirectionalLightBase::getType(void) const
{
    return _type;
}

UInt32 DirectionalLightBase::getContainerSize(void) const
{
    return sizeof(DirectionalLight);
}

/*------------------------- decorator get ------------------------------*/


SFVec3r *DirectionalLightBase::editSFDirection(void)
{
    editSField(DirectionFieldMask);

    return &_sfDirection;
}

const SFVec3r *DirectionalLightBase::getSFDirection(void) const
{
    return &_sfDirection;
}

#ifdef OSG_1_COMPAT
SFVec3r             *DirectionalLightBase::getSFDirection      (void)
{
    return this->editSFDirection      ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 DirectionalLightBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        returnValue += _sfDirection.getBinSize();
    }

    return returnValue;
}

void DirectionalLightBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyToBin(pMem);
    }
}

void DirectionalLightBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DirectionFieldMask & whichField))
    {
        _sfDirection.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
DirectionalLightPtr DirectionalLightBase::createEmpty(void)
{
    DirectionalLightPtr returnValue;

    newPtr<DirectionalLight>(returnValue);

    return returnValue;
}

FieldContainerPtr DirectionalLightBase::shallowCopy(void) const
{
    DirectionalLightPtr returnValue;

    newPtr(returnValue, dynamic_cast<const DirectionalLight *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

DirectionalLightBase::DirectionalLightBase(void) :
    Inherited(),
    _sfDirection              (Vec3r(0.f,0.f,1.f))
{
}

DirectionalLightBase::DirectionalLightBase(const DirectionalLightBase &source) :
    Inherited(source),
    _sfDirection              (source._sfDirection              )
{
}

/*-------------------------- destructors ----------------------------------*/

DirectionalLightBase::~DirectionalLightBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void DirectionalLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<DirectionalLightBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void DirectionalLightBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<DirectionalLightBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void DirectionalLightBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr DirectionalLightBase::createAspectCopy(void) const
{
    DirectionalLightPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const DirectionalLight *>(this));

    return returnValue;
}
#endif

void DirectionalLightBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<DirectionalLightPtr>::_type("DirectionalLightPtr", "LightPtr");
#endif


OSG_END_NAMESPACE
