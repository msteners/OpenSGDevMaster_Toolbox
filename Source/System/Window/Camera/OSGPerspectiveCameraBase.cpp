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
 **     class PerspectiveCamera!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEPERSPECTIVECAMERAINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPerspectiveCameraBase.h"
#include "OSGPerspectiveCamera.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PerspectiveCamera
    \ingroup GrpSystemWindowCameras

    The Perspective Camera class, see \ref PageSystemWindowCameraPerspective for 
    a description.

    The only new parameter is the _sfFov.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Real32          PerspectiveCameraBase::_sfFov
    The vertical field of view, in radians.
*/

/*! \var Real32          PerspectiveCameraBase::_sfAspect
    The aspect ratio (i.e. width / height) of a pixel.
*/


void PerspectiveCameraBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(PerspectiveCameraBase::*GetSFFovF)(void) const;

    GetSFFovF GetSFFov = &PerspectiveCameraBase::getSFFov;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "fov",
        "The vertical field of view, in radians.\n",
        FovFieldId, FovFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PerspectiveCameraBase::editSFFov),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFFov));
#else
        reinterpret_cast<FieldGetMethodSig >(&PerspectiveCameraBase::getSFFov));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal32 *(PerspectiveCameraBase::*GetSFAspectF)(void) const;

    GetSFAspectF GetSFAspect = &PerspectiveCameraBase::getSFAspect;
#endif

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "aspect",
        "The aspect ratio (i.e. width / height) of a pixel.\n",
        AspectFieldId, AspectFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&PerspectiveCameraBase::editSFAspect),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAspect));
#else
        reinterpret_cast<FieldGetMethodSig >(&PerspectiveCameraBase::getSFAspect));
#endif

    oType.addInitialDesc(pDesc);
}


PerspectiveCameraBase::TypeObject PerspectiveCameraBase::_type(
    PerspectiveCameraBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &PerspectiveCameraBase::createEmpty,
    PerspectiveCamera::initMethod,
    (InitalInsertDescFunc) &PerspectiveCameraBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PerspectiveCamera\"\n"
    "\tparent=\"Camera\"\n"
    "\tlibrary=\"Window\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Perspective Camera class, see \\ref PageSystemWindowCameraPerspective for \n"
    "a description.\n"
    "\n"
    "The only new parameter is the _sfFov.\n"
    "\t<Field\n"
    "\t\tname=\"fov\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\tThe vertical field of view, in radians.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"aspect\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "                defaultValue=\"1\"\n"
    "\t>\n"
    "\tThe aspect ratio (i.e. width / height) of a pixel.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowCameras\n"
    "\n"
    "The Perspective Camera class, see \\ref PageSystemWindowCameraPerspective for \n"
    "a description.\n"
    "\n"
    "The only new parameter is the _sfFov.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PerspectiveCameraBase::getType(void)
{
    return _type;
}

const FieldContainerType &PerspectiveCameraBase::getType(void) const
{
    return _type;
}

UInt32 PerspectiveCameraBase::getContainerSize(void) const
{
    return sizeof(PerspectiveCamera);
}

/*------------------------- decorator get ------------------------------*/


SFReal32 *PerspectiveCameraBase::editSFFov(void)
{
    editSField(FovFieldMask);

    return &_sfFov;
}

const SFReal32 *PerspectiveCameraBase::getSFFov(void) const
{
    return &_sfFov;
}

#ifdef OSG_1_COMPAT
SFReal32            *PerspectiveCameraBase::getSFFov            (void)
{
    return this->editSFFov            ();
}
#endif

SFReal32 *PerspectiveCameraBase::editSFAspect(void)
{
    editSField(AspectFieldMask);

    return &_sfAspect;
}

const SFReal32 *PerspectiveCameraBase::getSFAspect(void) const
{
    return &_sfAspect;
}

#ifdef OSG_1_COMPAT
SFReal32            *PerspectiveCameraBase::getSFAspect         (void)
{
    return this->editSFAspect         ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 PerspectiveCameraBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        returnValue += _sfFov.getBinSize();
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        returnValue += _sfAspect.getBinSize();
    }

    return returnValue;
}

void PerspectiveCameraBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        _sfFov.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyToBin(pMem);
    }
}

void PerspectiveCameraBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FovFieldMask & whichField))
    {
        _sfFov.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AspectFieldMask & whichField))
    {
        _sfAspect.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
PerspectiveCameraPtr PerspectiveCameraBase::createEmpty(void)
{
    PerspectiveCameraPtr returnValue;

    newPtr<PerspectiveCamera>(returnValue);

    return returnValue;
}

FieldContainerPtr PerspectiveCameraBase::shallowCopy(void) const
{
    PerspectiveCameraPtr returnValue;

    newPtr(returnValue, dynamic_cast<const PerspectiveCamera *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

PerspectiveCameraBase::PerspectiveCameraBase(void) :
    Inherited(),
    _sfFov                    (),
    _sfAspect                 (Real32(1))
{
}

PerspectiveCameraBase::PerspectiveCameraBase(const PerspectiveCameraBase &source) :
    Inherited(source),
    _sfFov                    (source._sfFov                    ),
    _sfAspect                 (source._sfAspect                 )
{
}

/*-------------------------- destructors ----------------------------------*/

PerspectiveCameraBase::~PerspectiveCameraBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void PerspectiveCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<PerspectiveCameraBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void PerspectiveCameraBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<PerspectiveCameraBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void PerspectiveCameraBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr PerspectiveCameraBase::createAspectCopy(void) const
{
    PerspectiveCameraPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PerspectiveCamera *>(this));

    return returnValue;
}
#endif

void PerspectiveCameraBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PerspectiveCameraPtr>::_type("PerspectiveCameraPtr", "CameraPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PerspectiveCameraPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, PerspectiveCameraPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, PerspectiveCameraPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
