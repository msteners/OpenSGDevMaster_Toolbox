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
 **     class PerfMonitorForeground!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGPerfMonitorForegroundBase.h"
#include "OSGPerfMonitorForeground.h"

#include "boost/bind.hpp"

#ifdef WIN32 // turn off 'this' : used in base member initializer list warning
#pragma warning(disable:4355)
#endif

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::PerfMonitorForeground
    PerfMonitorForeground displays statistics collected from the performance monitor code.

    It is meant to be used as a debugging tool for tracking down performance issues in the system.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          PerfMonitorForegroundBase::_sfMode
    The display mode to use.  See OSG::PerfMonitorForeground for more details.
*/

/*! \var Real32          PerfMonitorForegroundBase::_sfMaxSize
    The maximum height of any line in pixels.
*/

/*! \var Color4f         PerfMonitorForegroundBase::_sfColor
    Color of the text.
*/

/*! \var Color4f         PerfMonitorForegroundBase::_sfBgColor
    Color of the background.
*/

/*! \var std::string     PerfMonitorForegroundBase::_sfFamily
    The font family to be used, e.g. "SANS", default if unset.
*/

/*! \var Color4f         PerfMonitorForegroundBase::_sfBorderColor
    Color of the border.
*/

/*! \var Vec2f           PerfMonitorForegroundBase::_sfBorderOffset
    Offset of the border in pixels.
*/

/*! \var Vec2f           PerfMonitorForegroundBase::_sfTextMargin
    Text margin in pixels.
*/


void PerfMonitorForegroundBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "mode",
        "The display mode to use.  See OSG::PerfMonitorForeground for more details.\n",
        ModeFieldId, ModeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleMode),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleMode));

    oType.addInitialDesc(pDesc);

    pDesc = new SFReal32::Description(
        SFReal32::getClassType(),
        "maxSize",
        "The maximum height of any line in pixels.\n",
        MaxSizeFieldId, MaxSizeFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleMaxSize),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleMaxSize));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "color",
        "Color of the text.\n",
        ColorFieldId, ColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleColor),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "bgColor",
        "Color of the background.\n",
        BgColorFieldId, BgColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleBgColor),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleBgColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFString::Description(
        SFString::getClassType(),
        "family",
        "The font family to be used, e.g. \"SANS\", default if unset.\n",
        FamilyFieldId, FamilyFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleFamily),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleFamily));

    oType.addInitialDesc(pDesc);

    pDesc = new SFColor4f::Description(
        SFColor4f::getClassType(),
        "borderColor",
        "Color of the border.\n",
        BorderColorFieldId, BorderColorFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleBorderColor),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleBorderColor));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "borderOffset",
        "Offset of the border in pixels.\n",
        BorderOffsetFieldId, BorderOffsetFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleBorderOffset),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleBorderOffset));

    oType.addInitialDesc(pDesc);

    pDesc = new SFVec2f::Description(
        SFVec2f::getClassType(),
        "textMargin",
        "Text margin in pixels.\n",
        TextMarginFieldId, TextMarginFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&PerfMonitorForeground::editHandleTextMargin),
        static_cast<FieldGetMethodSig >(&PerfMonitorForeground::getHandleTextMargin));

    oType.addInitialDesc(pDesc);
}


PerfMonitorForegroundBase::TypeObject PerfMonitorForegroundBase::_type(
    PerfMonitorForegroundBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&PerfMonitorForegroundBase::createEmptyLocal),
    PerfMonitorForeground::initMethod,
    PerfMonitorForeground::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&PerfMonitorForegroundBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"PerfMonitorForeground\"\n"
    "\tparent=\"Foreground\"\n"
    "\tlibrary=\"Util\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    ">\n"
    "PerfMonitorForeground displays statistics collected from the performance monitor code.\n"
    "\n"
    "It is meant to be used as a debugging tool for tracking down performance issues in the system.\n"
    "        <Field\n"
    "\t\tname=\"mode\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe display mode to use.  See OSG::PerfMonitorForeground for more details.\n"
    "\t</Field>\t\n"
    "\t<Field\n"
    "\t\tname=\"maxSize\"\n"
    "\t\ttype=\"Real32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"16\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe maximum height of any line in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"color\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1,1,1,1\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the text.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"bgColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.2,0.2,0.2,0.65\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the background.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"family\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tThe font family to be used, e.g. \"SANS\", default if unset.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"borderColor\"\n"
    "\t\ttype=\"Color4f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.8,0.8,0.0,0.7\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tColor of the border.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"borderOffset\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"4,4\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tOffset of the border in pixels.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"textMargin\"\n"
    "\t\ttype=\"Vec2f\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"5,5\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\tText margin in pixels.\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "PerfMonitorForeground displays statistics collected from the performance monitor code.\n"
    "\n"
    "It is meant to be used as a debugging tool for tracking down performance issues in the system.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &PerfMonitorForegroundBase::getType(void)
{
    return _type;
}

const FieldContainerType &PerfMonitorForegroundBase::getType(void) const
{
    return _type;
}

UInt32 PerfMonitorForegroundBase::getContainerSize(void) const
{
    return sizeof(PerfMonitorForeground);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *PerfMonitorForegroundBase::editSFMode(void)
{
    editSField(ModeFieldMask);

    return &_sfMode;
}

const SFUInt32 *PerfMonitorForegroundBase::getSFMode(void) const
{
    return &_sfMode;
}


SFReal32 *PerfMonitorForegroundBase::editSFMaxSize(void)
{
    editSField(MaxSizeFieldMask);

    return &_sfMaxSize;
}

const SFReal32 *PerfMonitorForegroundBase::getSFMaxSize(void) const
{
    return &_sfMaxSize;
}


SFColor4f *PerfMonitorForegroundBase::editSFColor(void)
{
    editSField(ColorFieldMask);

    return &_sfColor;
}

const SFColor4f *PerfMonitorForegroundBase::getSFColor(void) const
{
    return &_sfColor;
}


SFColor4f *PerfMonitorForegroundBase::editSFBgColor(void)
{
    editSField(BgColorFieldMask);

    return &_sfBgColor;
}

const SFColor4f *PerfMonitorForegroundBase::getSFBgColor(void) const
{
    return &_sfBgColor;
}


SFString *PerfMonitorForegroundBase::editSFFamily(void)
{
    editSField(FamilyFieldMask);

    return &_sfFamily;
}

const SFString *PerfMonitorForegroundBase::getSFFamily(void) const
{
    return &_sfFamily;
}


SFColor4f *PerfMonitorForegroundBase::editSFBorderColor(void)
{
    editSField(BorderColorFieldMask);

    return &_sfBorderColor;
}

const SFColor4f *PerfMonitorForegroundBase::getSFBorderColor(void) const
{
    return &_sfBorderColor;
}


SFVec2f *PerfMonitorForegroundBase::editSFBorderOffset(void)
{
    editSField(BorderOffsetFieldMask);

    return &_sfBorderOffset;
}

const SFVec2f *PerfMonitorForegroundBase::getSFBorderOffset(void) const
{
    return &_sfBorderOffset;
}


SFVec2f *PerfMonitorForegroundBase::editSFTextMargin(void)
{
    editSField(TextMarginFieldMask);

    return &_sfTextMargin;
}

const SFVec2f *PerfMonitorForegroundBase::getSFTextMargin(void) const
{
    return &_sfTextMargin;
}






/*------------------------------ access -----------------------------------*/

UInt32 PerfMonitorForegroundBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        returnValue += _sfMode.getBinSize();
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        returnValue += _sfMaxSize.getBinSize();
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        returnValue += _sfColor.getBinSize();
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        returnValue += _sfBgColor.getBinSize();
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        returnValue += _sfFamily.getBinSize();
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        returnValue += _sfBorderColor.getBinSize();
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        returnValue += _sfBorderOffset.getBinSize();
    }
    if(FieldBits::NoField != (TextMarginFieldMask & whichField))
    {
        returnValue += _sfTextMargin.getBinSize();
    }

    return returnValue;
}

void PerfMonitorForegroundBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyToBin(pMem);
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        _sfBgColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        _sfBorderColor.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        _sfBorderOffset.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TextMarginFieldMask & whichField))
    {
        _sfTextMargin.copyToBin(pMem);
    }
}

void PerfMonitorForegroundBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (ModeFieldMask & whichField))
    {
        _sfMode.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (MaxSizeFieldMask & whichField))
    {
        _sfMaxSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorFieldMask & whichField))
    {
        _sfColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BgColorFieldMask & whichField))
    {
        _sfBgColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FamilyFieldMask & whichField))
    {
        _sfFamily.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BorderColorFieldMask & whichField))
    {
        _sfBorderColor.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BorderOffsetFieldMask & whichField))
    {
        _sfBorderOffset.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TextMarginFieldMask & whichField))
    {
        _sfTextMargin.copyFromBin(pMem);
    }
}

//! create a new instance of the class
PerfMonitorForegroundTransitPtr PerfMonitorForegroundBase::createLocal(BitVector bFlags)
{
    PerfMonitorForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<PerfMonitorForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class, copy the container flags
PerfMonitorForegroundTransitPtr PerfMonitorForegroundBase::createDependent(BitVector bFlags)
{
    PerfMonitorForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyDependent(bFlags);

        fc = dynamic_pointer_cast<PerfMonitorForeground>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
PerfMonitorForegroundTransitPtr PerfMonitorForegroundBase::create(void)
{
    PerfMonitorForegroundTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<PerfMonitorForeground>(tmpPtr);
    }

    return fc;
}

PerfMonitorForeground *PerfMonitorForegroundBase::createEmptyLocal(BitVector bFlags)
{
    PerfMonitorForeground *returnValue;

    newPtr<PerfMonitorForeground>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
PerfMonitorForeground *PerfMonitorForegroundBase::createEmpty(void)
{
    PerfMonitorForeground *returnValue;

    newPtr<PerfMonitorForeground>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr PerfMonitorForegroundBase::shallowCopyLocal(
    BitVector bFlags) const
{
    PerfMonitorForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PerfMonitorForeground *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr PerfMonitorForegroundBase::shallowCopyDependent(
    BitVector bFlags) const
{
    PerfMonitorForeground *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const PerfMonitorForeground *>(this), ~bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask = bFlags;

    return returnValue;
}

FieldContainerTransitPtr PerfMonitorForegroundBase::shallowCopy(void) const
{
    PerfMonitorForeground *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const PerfMonitorForeground *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

PerfMonitorForegroundBase::PerfMonitorForegroundBase(void) :
    Inherited(),
    _sfMode                   (UInt32(0)),
    _sfMaxSize                (Real32(16)),
    _sfColor                  (Color4f(1,1,1,1)),
    _sfBgColor                (Color4f(0.2,0.2,0.2,0.65)),
    _sfFamily                 (),
    _sfBorderColor            (Color4f(0.8,0.8,0.0,0.7)),
    _sfBorderOffset           (Vec2f(4,4)),
    _sfTextMargin             (Vec2f(5,5))
{
}

PerfMonitorForegroundBase::PerfMonitorForegroundBase(const PerfMonitorForegroundBase &source) :
    Inherited(source),
    _sfMode                   (source._sfMode                   ),
    _sfMaxSize                (source._sfMaxSize                ),
    _sfColor                  (source._sfColor                  ),
    _sfBgColor                (source._sfBgColor                ),
    _sfFamily                 (source._sfFamily                 ),
    _sfBorderColor            (source._sfBorderColor            ),
    _sfBorderOffset           (source._sfBorderOffset           ),
    _sfTextMargin             (source._sfTextMargin             )
{
}


/*-------------------------- destructors ----------------------------------*/

PerfMonitorForegroundBase::~PerfMonitorForegroundBase(void)
{
}


GetFieldHandlePtr PerfMonitorForegroundBase::getHandleMode            (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleMode           (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfMode,
             this->getType().getFieldDesc(ModeFieldId)));


    editSField(ModeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleMaxSize         (void) const
{
    SFReal32::GetHandlePtr returnValue(
        new  SFReal32::GetHandle(
             &_sfMaxSize,
             this->getType().getFieldDesc(MaxSizeFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleMaxSize        (void)
{
    SFReal32::EditHandlePtr returnValue(
        new  SFReal32::EditHandle(
             &_sfMaxSize,
             this->getType().getFieldDesc(MaxSizeFieldId)));


    editSField(MaxSizeFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleColor           (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleColor          (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfColor,
             this->getType().getFieldDesc(ColorFieldId)));


    editSField(ColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleBgColor         (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfBgColor,
             this->getType().getFieldDesc(BgColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleBgColor        (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfBgColor,
             this->getType().getFieldDesc(BgColorFieldId)));


    editSField(BgColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleFamily          (void) const
{
    SFString::GetHandlePtr returnValue(
        new  SFString::GetHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleFamily         (void)
{
    SFString::EditHandlePtr returnValue(
        new  SFString::EditHandle(
             &_sfFamily,
             this->getType().getFieldDesc(FamilyFieldId)));


    editSField(FamilyFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleBorderColor     (void) const
{
    SFColor4f::GetHandlePtr returnValue(
        new  SFColor4f::GetHandle(
             &_sfBorderColor,
             this->getType().getFieldDesc(BorderColorFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleBorderColor    (void)
{
    SFColor4f::EditHandlePtr returnValue(
        new  SFColor4f::EditHandle(
             &_sfBorderColor,
             this->getType().getFieldDesc(BorderColorFieldId)));


    editSField(BorderColorFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleBorderOffset    (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfBorderOffset,
             this->getType().getFieldDesc(BorderOffsetFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleBorderOffset   (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfBorderOffset,
             this->getType().getFieldDesc(BorderOffsetFieldId)));


    editSField(BorderOffsetFieldMask);

    return returnValue;
}

GetFieldHandlePtr PerfMonitorForegroundBase::getHandleTextMargin      (void) const
{
    SFVec2f::GetHandlePtr returnValue(
        new  SFVec2f::GetHandle(
             &_sfTextMargin,
             this->getType().getFieldDesc(TextMarginFieldId)));

    return returnValue;
}

EditFieldHandlePtr PerfMonitorForegroundBase::editHandleTextMargin     (void)
{
    SFVec2f::EditHandlePtr returnValue(
        new  SFVec2f::EditHandle(
             &_sfTextMargin,
             this->getType().getFieldDesc(TextMarginFieldId)));


    editSField(TextMarginFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void PerfMonitorForegroundBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    PerfMonitorForeground *pThis = static_cast<PerfMonitorForeground *>(this);

    pThis->execSync(static_cast<PerfMonitorForeground *>(&oFrom),
                    whichField,
                    oOffsets,
                    syncMode,
                    uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *PerfMonitorForegroundBase::createAspectCopy(
    const FieldContainer *pRefAspect) const
{
    PerfMonitorForeground *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const PerfMonitorForeground *>(pRefAspect),
                  dynamic_cast<const PerfMonitorForeground *>(this));

    return returnValue;
}
#endif

void PerfMonitorForegroundBase::resolveLinks(void)
{
    Inherited::resolveLinks();


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<PerfMonitorForeground *>::_type("PerfMonitorForegroundPtr", "ForegroundPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(PerfMonitorForeground *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           PerfMonitorForeground *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           PerfMonitorForeground *,
                           0);

OSG_END_NAMESPACE