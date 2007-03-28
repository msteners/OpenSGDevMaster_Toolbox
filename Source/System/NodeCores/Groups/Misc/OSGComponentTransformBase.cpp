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
 **     class ComponentTransform!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOMPONENTTRANSFORMINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGComponentTransformBase.h"
#include "OSGComponentTransform.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComponentTransform
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec3r           ComponentTransformBase::_sfCenter
    
*/

/*! \var Quaternionr     ComponentTransformBase::_sfRotation
    
*/

/*! \var Vec3r           ComponentTransformBase::_sfScale
    
*/

/*! \var Quaternionr     ComponentTransformBase::_sfScaleOrientation
    
*/

/*! \var Vec3r           ComponentTransformBase::_sfTranslation
    
*/


void ComponentTransformBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(ComponentTransformBase::*GetSFCenterF)(void) const;

    GetSFCenterF GetSFCenter = &ComponentTransformBase::getSFCenter;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "center",
        "",
        CenterFieldId, CenterFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ComponentTransformBase::editSFCenter),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCenter));
#else
        reinterpret_cast<FieldGetMethodSig >(&ComponentTransformBase::getSFCenter));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFQuaternionr *(ComponentTransformBase::*GetSFRotationF)(void) const;

    GetSFRotationF GetSFRotation = &ComponentTransformBase::getSFRotation;
#endif

    pDesc = new SFQuaternionr::Description(
        SFQuaternionr::getClassType(),
        "rotation",
        "",
        RotationFieldId, RotationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ComponentTransformBase::editSFRotation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRotation));
#else
        reinterpret_cast<FieldGetMethodSig >(&ComponentTransformBase::getSFRotation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(ComponentTransformBase::*GetSFScaleF)(void) const;

    GetSFScaleF GetSFScale = &ComponentTransformBase::getSFScale;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "scale",
        "",
        ScaleFieldId, ScaleFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ComponentTransformBase::editSFScale),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFScale));
#else
        reinterpret_cast<FieldGetMethodSig >(&ComponentTransformBase::getSFScale));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFQuaternionr *(ComponentTransformBase::*GetSFScaleOrientationF)(void) const;

    GetSFScaleOrientationF GetSFScaleOrientation = &ComponentTransformBase::getSFScaleOrientation;
#endif

    pDesc = new SFQuaternionr::Description(
        SFQuaternionr::getClassType(),
        "scaleOrientation",
        "",
        ScaleOrientationFieldId, ScaleOrientationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ComponentTransformBase::editSFScaleOrientation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFScaleOrientation));
#else
        reinterpret_cast<FieldGetMethodSig >(&ComponentTransformBase::getSFScaleOrientation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFVec3r *(ComponentTransformBase::*GetSFTranslationF)(void) const;

    GetSFTranslationF GetSFTranslation = &ComponentTransformBase::getSFTranslation;
#endif

    pDesc = new SFVec3r::Description(
        SFVec3r::getClassType(),
        "translation",
        "",
        TranslationFieldId, TranslationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ComponentTransformBase::editSFTranslation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFTranslation));
#else
        reinterpret_cast<FieldGetMethodSig >(&ComponentTransformBase::getSFTranslation));
#endif

    oType.addInitialDesc(pDesc);
}


ComponentTransformBase::TypeObject ComponentTransformBase::_type(
    ComponentTransformBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ComponentTransformBase::createEmpty,
    ComponentTransform::initMethod,
    (InitalInsertDescFunc) &ComponentTransformBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ComponentTransform\"\n"
    "\tparent=\"Transform\"\n"
    "\tlibrary=\"Group\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"center\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"rotation\"\n"
    "\t\ttype=\"Quaternionr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"scale\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"scaleOrientation\"\n"
    "\t\ttype=\"Quaternionr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"translation\"\n"
    "\t\ttype=\"Vec3r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComponentTransformBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComponentTransformBase::getType(void) const
{
    return _type;
}

UInt32 ComponentTransformBase::getContainerSize(void) const
{
    return sizeof(ComponentTransform);
}

/*------------------------- decorator get ------------------------------*/


SFVec3r *ComponentTransformBase::editSFCenter(void)
{
    editSField(CenterFieldMask);

    return &_sfCenter;
}

const SFVec3r *ComponentTransformBase::getSFCenter(void) const
{
    return &_sfCenter;
}

#ifdef OSG_1_COMPAT
SFVec3r             *ComponentTransformBase::getSFCenter         (void)
{
    return this->editSFCenter         ();
}
#endif

SFQuaternionr *ComponentTransformBase::editSFRotation(void)
{
    editSField(RotationFieldMask);

    return &_sfRotation;
}

const SFQuaternionr *ComponentTransformBase::getSFRotation(void) const
{
    return &_sfRotation;
}

#ifdef OSG_1_COMPAT
SFQuaternionr       *ComponentTransformBase::getSFRotation       (void)
{
    return this->editSFRotation       ();
}
#endif

SFVec3r *ComponentTransformBase::editSFScale(void)
{
    editSField(ScaleFieldMask);

    return &_sfScale;
}

const SFVec3r *ComponentTransformBase::getSFScale(void) const
{
    return &_sfScale;
}

#ifdef OSG_1_COMPAT
SFVec3r             *ComponentTransformBase::getSFScale          (void)
{
    return this->editSFScale          ();
}
#endif

SFQuaternionr *ComponentTransformBase::editSFScaleOrientation(void)
{
    editSField(ScaleOrientationFieldMask);

    return &_sfScaleOrientation;
}

const SFQuaternionr *ComponentTransformBase::getSFScaleOrientation(void) const
{
    return &_sfScaleOrientation;
}

#ifdef OSG_1_COMPAT
SFQuaternionr       *ComponentTransformBase::getSFScaleOrientation(void)
{
    return this->editSFScaleOrientation();
}
#endif

SFVec3r *ComponentTransformBase::editSFTranslation(void)
{
    editSField(TranslationFieldMask);

    return &_sfTranslation;
}

const SFVec3r *ComponentTransformBase::getSFTranslation(void) const
{
    return &_sfTranslation;
}

#ifdef OSG_1_COMPAT
SFVec3r             *ComponentTransformBase::getSFTranslation    (void)
{
    return this->editSFTranslation    ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ComponentTransformBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        returnValue += _sfCenter.getBinSize();
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        returnValue += _sfRotation.getBinSize();
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        returnValue += _sfScale.getBinSize();
    }
    if(FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
    {
        returnValue += _sfScaleOrientation.getBinSize();
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        returnValue += _sfTranslation.getBinSize();
    }

    return returnValue;
}

void ComponentTransformBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyToBin(pMem);
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
    {
        _sfScaleOrientation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyToBin(pMem);
    }
}

void ComponentTransformBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CenterFieldMask & whichField))
    {
        _sfCenter.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (RotationFieldMask & whichField))
    {
        _sfRotation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleFieldMask & whichField))
    {
        _sfScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ScaleOrientationFieldMask & whichField))
    {
        _sfScaleOrientation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TranslationFieldMask & whichField))
    {
        _sfTranslation.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ComponentTransformPtr ComponentTransformBase::createEmpty(void)
{
    ComponentTransformPtr returnValue;

    newPtr<ComponentTransform>(returnValue);

    return returnValue;
}

FieldContainerPtr ComponentTransformBase::shallowCopy(void) const
{
    ComponentTransformPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ComponentTransform *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ComponentTransformBase::ComponentTransformBase(void) :
    Inherited(),
    _sfCenter                 (),
    _sfRotation               (),
    _sfScale                  (),
    _sfScaleOrientation       (),
    _sfTranslation            ()
{
}

ComponentTransformBase::ComponentTransformBase(const ComponentTransformBase &source) :
    Inherited(source),
    _sfCenter                 (source._sfCenter                 ),
    _sfRotation               (source._sfRotation               ),
    _sfScale                  (source._sfScale                  ),
    _sfScaleOrientation       (source._sfScaleOrientation       ),
    _sfTranslation            (source._sfTranslation            )
{
}

/*-------------------------- destructors ----------------------------------*/

ComponentTransformBase::~ComponentTransformBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ComponentTransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ComponentTransformBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ComponentTransformBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ComponentTransformBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ComponentTransformBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ComponentTransformBase::createAspectCopy(void) const
{
    ComponentTransformPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComponentTransform *>(this));

    return returnValue;
}
#endif

void ComponentTransformBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ComponentTransformPtr>::_type("ComponentTransformPtr", "TransformPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ComponentTransformPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ComponentTransformPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ComponentTransformPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
