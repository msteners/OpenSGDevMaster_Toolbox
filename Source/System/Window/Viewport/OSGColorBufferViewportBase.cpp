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
 **     class ColorBufferViewport!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOLORBUFFERVIEWPORTINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGColorBufferViewportBase.h"
#include "OSGColorBufferViewport.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ColorBufferViewport
    \ingroup GrpSystemWindowViewports

    Viewport to only render to specific color channels, see \ref
    PageSystemWindowViewports for a description.

    The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and
    _sfAlpha Fields.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            ColorBufferViewportBase::_sfRed
    Define whether the red color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfBlue
    Define whether the green color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfGreen
    Define whether the blue color channel is written to.
*/

/*! \var bool            ColorBufferViewportBase::_sfAlpha
    Define whether the alpha color channel is written to.
*/


void ColorBufferViewportBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFBool *(ColorBufferViewportBase::*GetSFRedF)(void) const;

    GetSFRedF GetSFRed = &ColorBufferViewportBase::getSFRed;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "red",
        "Define whether the red color channel is written to.\n",
        RedFieldId, RedFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorBufferViewportBase::editSFRed),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFRed));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorBufferViewportBase::getSFRed));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ColorBufferViewportBase::*GetSFBlueF)(void) const;

    GetSFBlueF GetSFBlue = &ColorBufferViewportBase::getSFBlue;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "blue",
        "Define whether the green color channel is written to.\n",
        BlueFieldId, BlueFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorBufferViewportBase::editSFBlue),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBlue));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorBufferViewportBase::getSFBlue));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ColorBufferViewportBase::*GetSFGreenF)(void) const;

    GetSFGreenF GetSFGreen = &ColorBufferViewportBase::getSFGreen;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "green",
        "Define whether the blue color channel is written to.\n",
        GreenFieldId, GreenFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorBufferViewportBase::editSFGreen),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGreen));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorBufferViewportBase::getSFGreen));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(ColorBufferViewportBase::*GetSFAlphaF)(void) const;

    GetSFAlphaF GetSFAlpha = &ColorBufferViewportBase::getSFAlpha;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "alpha",
        "Define whether the alpha color channel is written to.\n",
        AlphaFieldId, AlphaFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&ColorBufferViewportBase::editSFAlpha),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAlpha));
#else
        reinterpret_cast<FieldGetMethodSig >(&ColorBufferViewportBase::getSFAlpha));
#endif

    oType.addInitialDesc(pDesc);
}


ColorBufferViewportBase::TypeObject ColorBufferViewportBase::_type(true,
    ColorBufferViewportBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &ColorBufferViewportBase::createEmpty,
    ColorBufferViewport::initMethod,
    (InitalInsertDescFunc) &ColorBufferViewportBase::classDescInserter,
    false,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"ColorBufferViewport\"\n"
    "\tparent=\"Viewport\"\n"
    "\tlibrary=\"Window\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "Viewport to only render to specific color channels, see \\ref\n"
    "PageSystemWindowViewports for a description.\n"
    "\n"
    "The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and\n"
    "_sfAlpha Fields.\n"
    "\t<Field\n"
    "\t\tname=\"red\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_TRUE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Define whether the red color channel is written to.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"blue\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_TRUE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Define whether the green color channel is written to.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"green\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_TRUE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Define whether the blue color channel is written to.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"alpha\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_TRUE\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Define whether the alpha color channel is written to.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemWindowViewports\n"
    "\n"
    "Viewport to only render to specific color channels, see \\ref\n"
    "PageSystemWindowViewports for a description.\n"
    "\n"
    "The color channels used are defined by the _sfRed, _sfGreen, _sfBlue and\n"
    "_sfAlpha Fields.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ColorBufferViewportBase::getType(void)
{
    return _type;
}

const FieldContainerType &ColorBufferViewportBase::getType(void) const
{
    return _type;
}

UInt32 ColorBufferViewportBase::getContainerSize(void) const
{
    return sizeof(ColorBufferViewport);
}

/*------------------------- decorator get ------------------------------*/


SFBool *ColorBufferViewportBase::editSFRed(void)
{
    editSField(RedFieldMask);

    return &_sfRed;
}

const SFBool *ColorBufferViewportBase::getSFRed(void) const
{
    return &_sfRed;
}

#ifdef OSG_1_COMPAT
SFBool              *ColorBufferViewportBase::getSFRed            (void)
{
    return this->editSFRed            ();
}
#endif

SFBool *ColorBufferViewportBase::editSFBlue(void)
{
    editSField(BlueFieldMask);

    return &_sfBlue;
}

const SFBool *ColorBufferViewportBase::getSFBlue(void) const
{
    return &_sfBlue;
}

#ifdef OSG_1_COMPAT
SFBool              *ColorBufferViewportBase::getSFBlue           (void)
{
    return this->editSFBlue           ();
}
#endif

SFBool *ColorBufferViewportBase::editSFGreen(void)
{
    editSField(GreenFieldMask);

    return &_sfGreen;
}

const SFBool *ColorBufferViewportBase::getSFGreen(void) const
{
    return &_sfGreen;
}

#ifdef OSG_1_COMPAT
SFBool              *ColorBufferViewportBase::getSFGreen          (void)
{
    return this->editSFGreen          ();
}
#endif

SFBool *ColorBufferViewportBase::editSFAlpha(void)
{
    editSField(AlphaFieldMask);

    return &_sfAlpha;
}

const SFBool *ColorBufferViewportBase::getSFAlpha(void) const
{
    return &_sfAlpha;
}

#ifdef OSG_1_COMPAT
SFBool              *ColorBufferViewportBase::getSFAlpha          (void)
{
    return this->editSFAlpha          ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 ColorBufferViewportBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        returnValue += _sfRed.getBinSize();
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        returnValue += _sfBlue.getBinSize();
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        returnValue += _sfGreen.getBinSize();
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        returnValue += _sfAlpha.getBinSize();
    }

    return returnValue;
}

void ColorBufferViewportBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        _sfRed.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        _sfBlue.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        _sfGreen.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyToBin(pMem);
    }
}

void ColorBufferViewportBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (RedFieldMask & whichField))
    {
        _sfRed.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BlueFieldMask & whichField))
    {
        _sfBlue.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GreenFieldMask & whichField))
    {
        _sfGreen.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AlphaFieldMask & whichField))
    {
        _sfAlpha.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
ColorBufferViewportPtr ColorBufferViewportBase::createEmpty(void)
{
    ColorBufferViewportPtr returnValue;

    newPtr<ColorBufferViewport>(returnValue);

    return returnValue;
}

FieldContainerPtr ColorBufferViewportBase::shallowCopy(void) const
{
    ColorBufferViewportPtr returnValue;

    newPtr(returnValue, dynamic_cast<const ColorBufferViewport *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

ColorBufferViewportBase::ColorBufferViewportBase(void) :
    Inherited(),
    _sfRed                    (bool(GL_TRUE)),
    _sfBlue                   (bool(GL_TRUE)),
    _sfGreen                  (bool(GL_TRUE)),
    _sfAlpha                  (bool(GL_TRUE))
{
}

ColorBufferViewportBase::ColorBufferViewportBase(const ColorBufferViewportBase &source) :
    Inherited(source),
    _sfRed                    (source._sfRed                    ),
    _sfBlue                   (source._sfBlue                   ),
    _sfGreen                  (source._sfGreen                  ),
    _sfAlpha                  (source._sfAlpha                  )
{
}

/*-------------------------- destructors ----------------------------------*/

ColorBufferViewportBase::~ColorBufferViewportBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void ColorBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<ColorBufferViewportBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void ColorBufferViewportBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ColorBufferViewportBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void ColorBufferViewportBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr ColorBufferViewportBase::createAspectCopy(void) const
{
    ColorBufferViewportPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ColorBufferViewport *>(this));

    return returnValue;
}
#endif

void ColorBufferViewportBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ColorBufferViewportPtr>::_type("ColorBufferViewportPtr", "ViewportPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(ColorBufferViewportPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, ColorBufferViewportPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, ColorBufferViewportPtr, MFFieldContainerPtr);


/*------------------------------------------------------------------------*/
/*                              cvs id's                                  */

#ifdef OSG_SGI_CC
#pragma set woff 1174
#endif

#ifdef OSG_LINUX_ICC
#pragma warning( disable : 177 )
#endif

namespace
{
    static Char8 cvsid_cpp       [] = "@(#)$Id$";
    static Char8 cvsid_hpp       [] = OSGCOLORBUFFERVIEWPORTBASE_HEADER_CVSID;
    static Char8 cvsid_inl       [] = OSGCOLORBUFFERVIEWPORTBASE_INLINE_CVSID;

    static Char8 cvsid_fields_hpp[] = OSGCOLORBUFFERVIEWPORTFIELDS_HEADER_CVSID;
}

OSG_END_NAMESPACE
