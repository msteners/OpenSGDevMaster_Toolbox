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
 **     class SHLParameterChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHLPARAMETERCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGSHLChunk.h> // SHLChunk Class

#include "OSGSHLParameterChunkBase.h"
#include "OSGSHLParameterChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SHLParameterChunk
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var SHLChunkPtr     SHLParameterChunkBase::_sfSHLChunk
    
*/


void SHLParameterChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFSHLChunkPtr::Description(
        SFSHLChunkPtr::getClassType(),
        "SHLChunk",
        "",
        SHLChunkFieldId, SHLChunkFieldMask,
        false,
        Field::SFDefaultFlags,
        static_cast     <FieldEditMethodSig>(&SHLParameterChunkBase::invalidEditField),
        reinterpret_cast<FieldGetMethodSig >(&SHLParameterChunkBase::getSFSHLChunk));

    oType.addInitialDesc(pDesc);
}


SHLParameterChunkBase::TypeObject SHLParameterChunkBase::_type(
    SHLParameterChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SHLParameterChunkBase::createEmpty,
    SHLParameterChunk::initMethod,
    (InitalInsertDescFunc) &SHLParameterChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SHLParameterChunk\"\n"
    "\tparent=\"ShaderParameterChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "\t<Field\n"
    "\t\tname=\"SHLChunk\"\n"
    "\t\ttype=\"SHLChunkPtr\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NullFC\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SHLParameterChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &SHLParameterChunkBase::getType(void) const
{
    return _type;
}

UInt32 SHLParameterChunkBase::getContainerSize(void) const
{
    return sizeof(SHLParameterChunk);
}

/*------------------------- decorator get ------------------------------*/


//! Get the SHLParameterChunk::_sfSHLChunk field.
const SFSHLChunkPtr *SHLParameterChunkBase::getSFSHLChunk(void) const
{
    return &_sfSHLChunk;
}


void SHLParameterChunkBase::pushToField(      FieldContainerPtrConstArg pNewElement,
                                    const UInt32                    uiFieldId  )
{
    Inherited::pushToField(pNewElement, uiFieldId);

    if(uiFieldId == SHLChunkFieldId)
    {
        static_cast<SHLParameterChunk *>(this)->setSHLChunk(
            cast_dynamic<SHLChunkPtr>(pNewElement));
    }
}

void SHLParameterChunkBase::insertIntoMField(const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::insertIntoMField(uiIndex, pNewElement, uiFieldId);

}

void SHLParameterChunkBase::replaceInMField (const UInt32                    uiIndex,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::replaceInMField(uiIndex, pNewElement, uiFieldId);

}

void SHLParameterChunkBase::replaceInMField (      FieldContainerPtrConstArg pOldElement,
                                               FieldContainerPtrConstArg pNewElement,
                                         const UInt32                    uiFieldId  )
{
    Inherited::replaceInMField(pOldElement, pNewElement, uiFieldId);

}

void SHLParameterChunkBase::removeFromMField(const UInt32 uiIndex,
                                         const UInt32 uiFieldId)
{
    Inherited::removeFromMField(uiIndex, uiFieldId);

}

void SHLParameterChunkBase::removeFromMField(      FieldContainerPtrConstArg pElement,
                                         const UInt32                    uiFieldId)
{
    Inherited::removeFromMField(pElement, uiFieldId);

}

void SHLParameterChunkBase::clearField(const UInt32 uiFieldId)
{
    Inherited::clearField(uiFieldId);

    if(uiFieldId == SHLChunkFieldId)
    {
        static_cast<SHLParameterChunk *>(this)->setSHLChunk(NullFC);
    }
}



/*------------------------------ access -----------------------------------*/

UInt32 SHLParameterChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        returnValue += _sfSHLChunk.getBinSize();
    }

    return returnValue;
}

void SHLParameterChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        _sfSHLChunk.copyToBin(pMem);
    }
}

void SHLParameterChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (SHLChunkFieldMask & whichField))
    {
        _sfSHLChunk.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SHLParameterChunkPtr SHLParameterChunkBase::createEmpty(void)
{
    SHLParameterChunkPtr returnValue;

    newPtr<SHLParameterChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr SHLParameterChunkBase::shallowCopy(void) const
{
    SHLParameterChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SHLParameterChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SHLParameterChunkBase::SHLParameterChunkBase(void) :
    Inherited(),
    _sfSHLChunk               (SHLChunkPtr(NullFC))
{
}

SHLParameterChunkBase::SHLParameterChunkBase(const SHLParameterChunkBase &source) :
    Inherited(source),
    _sfSHLChunk               ()
{
}

/*-------------------------- destructors ----------------------------------*/

SHLParameterChunkBase::~SHLParameterChunkBase(void)
{
}

void SHLParameterChunkBase::onCreate(const SHLParameterChunk *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {

        this->setSHLChunk(source->getSHLChunk());
    }
}

#ifdef OSG_MT_FIELDCONTAINERPTR
void SHLParameterChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SHLParameterChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SHLParameterChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SHLParameterChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SHLParameterChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SHLParameterChunkBase::createAspectCopy(void) const
{
    SHLParameterChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SHLParameterChunk *>(this));

    return returnValue;
}
#endif

void SHLParameterChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<SHLParameterChunk *>(this)->setSHLChunk(NullFC);
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SHLParameterChunkPtr>::_type("SHLParameterChunkPtr", "ShaderParameterChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SHLParameterChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, SHLParameterChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, SHLParameterChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
