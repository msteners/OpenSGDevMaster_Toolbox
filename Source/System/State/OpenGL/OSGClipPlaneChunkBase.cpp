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
 **     class ClipPlaneChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECLIPPLANECHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // Enable default header

#include <OSGNode.h> // Beacon Class

#include "OSGClipPlaneChunkBase.h"
#include "OSGClipPlaneChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ClipPlaneChunk
    \ingroup GrpSystemState

    See \ref PageSystemClipPlaneChunk for a description.

    This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and
    glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate
    system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Vec4f           ClipPlaneChunkBase::_sfEquation
    Defines the equation of the clip plane. Standard format, if (a,b,c,d) is
    the plane a point (x,y,z) is visible if a*x+b*y+c*z+d >= 0.
*/

/*! \var bool            ClipPlaneChunkBase::_sfEnable
    Defines activation state of the clip plane.
*/

/*! \var NodePtr         ClipPlaneChunkBase::_sfBeacon
    The object that defines the clip planes's coordinate system. The clip
    plane is positioned relative to this system.
*/


void ClipPlaneChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFVec4f *(ClipPlaneChunkBase::*GetSFEquationF)(void) const;

    GetSFEquationF GetSFEquation = &ClipPlaneChunkBase::getSFEquation;
#endif

    pDesc = new SFVec4f::Description(
        SFVec4f::getClassType(),
        "equation",
        "Defines the equation of the clip plane. Standard format, if (a,b,c,d) is\n"
        "the plane a point (x,y,z) is visible if a*x+b*y+c*z+d >= 0.\n",
        EquationFieldId, EquationFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClipPlaneChunkBase::editSFEquation),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFEquation));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClipPlaneChunkBase::getSFEquation));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ClipPlaneChunkBase::*GetSFEnableF)(void) const;

    GetSFEnableF GetSFEnable = &ClipPlaneChunkBase::getSFEnable;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "enable",
        "Defines activation state of the clip plane.\n",
        EnableFieldId, EnableFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ClipPlaneChunkBase::editSFEnable),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFEnable));
#else
        reinterpret_cast<FieldGetMethodSig >(&ClipPlaneChunkBase::getSFEnable));
#endif

    oType.addInitialDesc(pDesc);

    pDesc = new SFNodePtr::Description(
        SFNodePtr::getClassType(),
        "beacon",
        "The object that defines the clip planes's coordinate system. The clip\n"
        "plane is positioned relative to this system.\n",
        BeaconFieldId, BeaconFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&ClipPlaneChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&ClipPlaneChunkBase::getSFBeacon));

    oType.addInitialDesc(pDesc);
}


ClipPlaneChunkBase::TypeObject ClipPlaneChunkBase::_type(
    ClipPlaneChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ClipPlaneChunkBase::createEmpty,
    ClipPlaneChunk::initMethod,
    (InitalInsertDescFunc) &ClipPlaneChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ClipPlaneChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemClipPlaneChunk for a description.\n"
    "\n"
    "This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and\n"
    "glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate\n"
    "system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.\n"
    "\t<Field\n"
    "\t\tname=\"equation\"\n"
    "\t\ttype=\"Vec4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0, 0, 1, 0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines the equation of the clip plane. Standard format, if (a,b,c,d) is\n"
    "        the plane a point (x,y,z) is visible if a*x+b*y+c*z+d &gt;= 0.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"enable\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_TRUE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tDefines activation state of the clip plane.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"beacon\"\n"
    "\t\ttype=\"NodePtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        The object that defines the clip planes's coordinate system. The clip\n"
    "        plane is positioned relative to this system.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemClipPlaneChunk for a description.\n"
    "\n"
    "This chunk wraps glCLipPlane() (OSG::ClipPlaneChunk::_sfEquation) and\n"
    "glEnable(GL_CLIP_PLANEi) (OSG::ClipPlaneChunk::_sfEnable). The coordinate\n"
    "system the plane is in is defined by OSG::ClipPlaneChunk::_sfBeacon.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ClipPlaneChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &ClipPlaneChunkBase::getType(void) const
{
    return _type;
}

UInt32 ClipPlaneChunkBase::getContainerSize(void) const
{
    return sizeof(ClipPlaneChunk);
}

/*------------------------- decorator get ------------------------------*/


SFVec4f *ClipPlaneChunkBase::editSFEquation(void)
{
    editSField(EquationFieldMask);

    return &_sfEquation;
}

const SFVec4f *ClipPlaneChunkBase::getSFEquation(void) const
{
    return &_sfEquation;
}

#ifdef OSG_1_COMPAT
SFVec4f             *ClipPlaneChunkBase::getSFEquation       (void)
{
    return this->editSFEquation       ();
}
#endif

SFBool *ClipPlaneChunkBase::editSFEnable(void)
{
    editSField(EnableFieldMask);

    return &_sfEnable;
}

const SFBool *ClipPlaneChunkBase::getSFEnable(void) const
{
    return &_sfEnable;
}

#ifdef OSG_1_COMPAT
SFBool              *ClipPlaneChunkBase::getSFEnable         (void)
{
    return this->editSFEnable         ();
}
#endif

//! Get the ClipPlaneChunk::_sfBeacon field.
const SFNodePtr *ClipPlaneChunkBase::getSFBeacon(void) const
{
    return &_sfBeacon;
}


void ClipPlaneChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == BeaconFieldId)
    {
        static_cast<ClipPlaneChunk *>(this)->setBeacon(
            cast_dynamic<NodePtr>(pNewElement));
    }
}

void ClipPlaneChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void ClipPlaneChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void ClipPlaneChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void ClipPlaneChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void ClipPlaneChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void ClipPlaneChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == BeaconFieldId)
    {
        static_cast<ClipPlaneChunk *>(this)->setBeacon(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 ClipPlaneChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        returnValue += _sfEquation.getBinSize();
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        returnValue += _sfEnable.getBinSize();
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        returnValue += _sfBeacon.getBinSize();
    }

    return returnValue;
}

void ClipPlaneChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        _sfEquation.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        _sfEnable.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyToBin(pMem);
    }
}

void ClipPlaneChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (EquationFieldMask & whichField))
    {
        _sfEquation.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EnableFieldMask & whichField))
    {
        _sfEnable.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BeaconFieldMask & whichField))
    {
        _sfBeacon.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ClipPlaneChunkPtr ClipPlaneChunkBase::createEmpty(void)
{
    ClipPlaneChunkPtr returnValue;

    newPtr<ClipPlaneChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr ClipPlaneChunkBase::shallowCopy(void) const
{
    ClipPlaneChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ClipPlaneChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ClipPlaneChunkBase::ClipPlaneChunkBase(void) :
    Inherited(),
    _sfEquation               (Vec4f(0, 0, 1, 0)),
    _sfEnable                 (bool(GL_TRUE)),
    _sfBeacon                 (NodePtr(NullFC))
{
}

ClipPlaneChunkBase::ClipPlaneChunkBase(const ClipPlaneChunkBase &source) :
    Inherited(source),
    _sfEquation               (source._sfEquation               ),
    _sfEnable                 (source._sfEnable                 ),
    _sfBeacon                 ()
{
}

/*-------------------------- destructors ----------------------------------*/

ClipPlaneChunkBase::~ClipPlaneChunkBase(void)
{
}

void ClipPlaneChunkBase::onCreate(const ClipPlaneChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setBeacon(source->getBeacon());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void ClipPlaneChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ClipPlaneChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ClipPlaneChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ClipPlaneChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ClipPlaneChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ClipPlaneChunkBase::createAspectCopy(void) const
{
    ClipPlaneChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ClipPlaneChunk *>(this));

    return returnValue;
}
#endif

void ClipPlaneChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ClipPlaneChunk *>(this)->setBeacon(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ClipPlaneChunkPtr>::_type("ClipPlaneChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ClipPlaneChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ClipPlaneChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ClipPlaneChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
