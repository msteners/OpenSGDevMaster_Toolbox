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
 **     class FCDTestFC!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGFCDTestFCBase.h"
#include "OSGFCDTestFC.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::FCDTestFC
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var UInt32          FCDTestFCBase::_sfFieldSFPub
    
*/

/*! \var UInt32          FCDTestFCBase::_sfFieldSFPro
    
*/

/*! \var UInt32          FCDTestFCBase::_sfFieldSFNo
    
*/

/*! \var UInt32          FCDTestFCBase::_mfFieldMFPub
    
*/

/*! \var UInt32          FCDTestFCBase::_mfFieldMFPro
    
*/

/*! \var UInt32          FCDTestFCBase::_mfFieldMFNo
    
*/


void FCDTestFCBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fieldSFPub",
        "",
        FieldSFPubFieldId, FieldSFPubFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FCDTestFC::editHandleFieldSFPub),
        static_cast<FieldGetMethodSig >(&FCDTestFC::getHandleFieldSFPub));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fieldSFPro",
        "",
        FieldSFProFieldId, FieldSFProFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FCDTestFC::editHandleFieldSFPro),
        static_cast<FieldGetMethodSig >(&FCDTestFC::getHandleFieldSFPro));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "fieldSFNo",
        "",
        FieldSFNoFieldId, FieldSFNoFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&FCDTestFC::invalidEditField),
        static_cast     <FieldGetMethodSig >(&FCDTestFC::invalidGetField));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "fieldMFPub",
        "",
        FieldMFPubFieldId, FieldMFPubFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FCDTestFC::editHandleFieldMFPub),
        static_cast<FieldGetMethodSig >(&FCDTestFC::getHandleFieldMFPub));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "fieldMFPro",
        "",
        FieldMFProFieldId, FieldMFProFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&FCDTestFC::editHandleFieldMFPro),
        static_cast<FieldGetMethodSig >(&FCDTestFC::getHandleFieldMFPro));

    oType.addInitialDesc(pDesc);

    pDesc = new MFUInt32::Description(
        MFUInt32::getClassType(),
        "fieldMFNo",
        "",
        FieldMFNoFieldId, FieldMFNoFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast     <FieldEditMethodSig>(&FCDTestFC::invalidEditField),
        static_cast     <FieldGetMethodSig >(&FCDTestFC::invalidGetField));

    oType.addInitialDesc(pDesc);
}


FCDTestFCBase::TypeObject FCDTestFCBase::_type(
    FCDTestFCBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&FCDTestFCBase::createEmptyLocal),
    FCDTestFC::initMethod,
    FCDTestFC::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&FCDTestFCBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"FCDTestFC\"\n"
    "\tparent=\"NodeCore\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "    isNodeCore=\"true\"\n"
    "    childFields=\"both\"\n"
    "    childfieldparent=\"FieldContainer\"\n"
    "    parentfieldcard=\"multi\"\n"
    ">\n"
    "    <Field\n"
    "        name = \"fieldSFPub\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"single\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name = \"fieldSFPro\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"single\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"protected\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name = \"fieldSFNo\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"single\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"none\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "\n"
    "\n"
    "    <Field\n"
    "        name = \"fieldMFPub\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"multi\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"public\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name = \"fieldMFPro\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"multi\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"protected\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "    <Field\n"
    "        name = \"fieldMFNo\"\n"
    "        type = \"UInt32\"\n"
    "        cardinality = \"multi\"\n"
    "        visibility = \"external\"\n"
    "        defaultValue = \"0\"\n"
    "        access = \"none\"\n"
    "    >\n"
    "    </Field>\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &FCDTestFCBase::getType(void)
{
    return _type;
}

const FieldContainerType &FCDTestFCBase::getType(void) const
{
    return _type;
}

UInt32 FCDTestFCBase::getContainerSize(void) const
{
    return sizeof(FCDTestFC);
}

/*------------------------- decorator get ------------------------------*/


SFUInt32 *FCDTestFCBase::editSFFieldSFPub(void)
{
    editSField(FieldSFPubFieldMask);

    return &_sfFieldSFPub;
}

const SFUInt32 *FCDTestFCBase::getSFFieldSFPub(void) const
{
    return &_sfFieldSFPub;
}


SFUInt32 *FCDTestFCBase::editSFFieldSFPro(void)
{
    editSField(FieldSFProFieldMask);

    return &_sfFieldSFPro;
}

const SFUInt32 *FCDTestFCBase::getSFFieldSFPro(void) const
{
    return &_sfFieldSFPro;
}



MFUInt32 *FCDTestFCBase::editMFFieldMFPub(void)
{
    editMField(FieldMFPubFieldMask, _mfFieldMFPub);

    return &_mfFieldMFPub;
}

const MFUInt32 *FCDTestFCBase::getMFFieldMFPub(void) const
{
    return &_mfFieldMFPub;
}


MFUInt32 *FCDTestFCBase::editMFFieldMFPro(void)
{
    editMField(FieldMFProFieldMask, _mfFieldMFPro);

    return &_mfFieldMFPro;
}

const MFUInt32 *FCDTestFCBase::getMFFieldMFPro(void) const
{
    return &_mfFieldMFPro;
}







/*------------------------------ access -----------------------------------*/

UInt32 FCDTestFCBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (FieldSFPubFieldMask & whichField))
    {
        returnValue += _sfFieldSFPub.getBinSize();
    }
    if(FieldBits::NoField != (FieldSFProFieldMask & whichField))
    {
        returnValue += _sfFieldSFPro.getBinSize();
    }
    if(FieldBits::NoField != (FieldSFNoFieldMask & whichField))
    {
        returnValue += _sfFieldSFNo.getBinSize();
    }
    if(FieldBits::NoField != (FieldMFPubFieldMask & whichField))
    {
        returnValue += _mfFieldMFPub.getBinSize();
    }
    if(FieldBits::NoField != (FieldMFProFieldMask & whichField))
    {
        returnValue += _mfFieldMFPro.getBinSize();
    }
    if(FieldBits::NoField != (FieldMFNoFieldMask & whichField))
    {
        returnValue += _mfFieldMFNo.getBinSize();
    }

    return returnValue;
}

void FCDTestFCBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (FieldSFPubFieldMask & whichField))
    {
        _sfFieldSFPub.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldSFProFieldMask & whichField))
    {
        _sfFieldSFPro.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldSFNoFieldMask & whichField))
    {
        _sfFieldSFNo.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFPubFieldMask & whichField))
    {
        _mfFieldMFPub.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFProFieldMask & whichField))
    {
        _mfFieldMFPro.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFNoFieldMask & whichField))
    {
        _mfFieldMFNo.copyToBin(pMem);
    }
}

void FCDTestFCBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (FieldSFPubFieldMask & whichField))
    {
        _sfFieldSFPub.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldSFProFieldMask & whichField))
    {
        _sfFieldSFPro.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldSFNoFieldMask & whichField))
    {
        _sfFieldSFNo.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFPubFieldMask & whichField))
    {
        _mfFieldMFPub.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFProFieldMask & whichField))
    {
        _mfFieldMFPro.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FieldMFNoFieldMask & whichField))
    {
        _mfFieldMFNo.copyFromBin(pMem);
    }
}

//! create a new instance of the class
FCDTestFCTransitPtr FCDTestFCBase::createLocal(BitVector bFlags)
{
    FCDTestFCTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<FCDTestFC>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
FCDTestFCTransitPtr FCDTestFCBase::create(void)
{
    FCDTestFCTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopy();

        fc = dynamic_pointer_cast<FCDTestFC>(tmpPtr);
    }

    return fc;
}

FCDTestFC *FCDTestFCBase::createEmptyLocal(BitVector bFlags)
{
    FCDTestFC *returnValue;

    newPtr<FCDTestFC>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
FCDTestFC *FCDTestFCBase::createEmpty(void)
{
    FCDTestFC *returnValue;

    newPtr<FCDTestFC>(returnValue, Thread::getCurrentLocalFlags());

    returnValue->_pFieldFlags->_bNamespaceMask &=
        ~Thread::getCurrentLocalFlags();

    return returnValue;
}


FieldContainerTransitPtr FCDTestFCBase::shallowCopyLocal(
    BitVector bFlags) const
{
    FCDTestFC *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const FCDTestFC *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr FCDTestFCBase::shallowCopy(void) const
{
    FCDTestFC *tmpPtr;

    newPtr(tmpPtr,
           dynamic_cast<const FCDTestFC *>(this),
           Thread::getCurrentLocalFlags());

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~Thread::getCurrentLocalFlags();

    FieldContainerTransitPtr returnValue(tmpPtr);

    return returnValue;
}




/*------------------------- constructors ----------------------------------*/

FCDTestFCBase::FCDTestFCBase(void) :
    Inherited(),
    _sfFieldSFPub             (UInt32(0)),
    _sfFieldSFPro             (UInt32(0)),
    _sfFieldSFNo              (UInt32(0)),
    _mfFieldMFPub             (UInt32(0)),
    _mfFieldMFPro             (UInt32(0)),
    _mfFieldMFNo              (UInt32(0))
{
}

FCDTestFCBase::FCDTestFCBase(const FCDTestFCBase &source) :
    Inherited(source),
    _sfFieldSFPub             (source._sfFieldSFPub             ),
    _sfFieldSFPro             (source._sfFieldSFPro             ),
    _sfFieldSFNo              (source._sfFieldSFNo              ),
    _mfFieldMFPub             (source._mfFieldMFPub             ),
    _mfFieldMFPro             (source._mfFieldMFPro             ),
    _mfFieldMFNo              (source._mfFieldMFNo              )
{
}


/*-------------------------- destructors ----------------------------------*/

FCDTestFCBase::~FCDTestFCBase(void)
{
}


GetFieldHandlePtr FCDTestFCBase::getHandleFieldSFPub      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFieldSFPub,
             this->getType().getFieldDesc(FieldSFPubFieldId)));

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldSFPub     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFieldSFPub,
             this->getType().getFieldDesc(FieldSFPubFieldId)));


    editSField(FieldSFPubFieldMask);

    return returnValue;
}

GetFieldHandlePtr FCDTestFCBase::getHandleFieldSFPro      (void) const
{
    SFUInt32::GetHandlePtr returnValue(
        new  SFUInt32::GetHandle(
             &_sfFieldSFPro,
             this->getType().getFieldDesc(FieldSFProFieldId)));

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldSFPro     (void)
{
    SFUInt32::EditHandlePtr returnValue(
        new  SFUInt32::EditHandle(
             &_sfFieldSFPro,
             this->getType().getFieldDesc(FieldSFProFieldId)));


    editSField(FieldSFProFieldMask);

    return returnValue;
}

GetFieldHandlePtr FCDTestFCBase::getHandleFieldSFNo       (void) const
{
    SFUInt32::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldSFNo      (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}

GetFieldHandlePtr FCDTestFCBase::getHandleFieldMFPub      (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfFieldMFPub,
             this->getType().getFieldDesc(FieldMFPubFieldId)));

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldMFPub     (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfFieldMFPub,
             this->getType().getFieldDesc(FieldMFPubFieldId)));


    editMField(FieldMFPubFieldMask, _mfFieldMFPub);

    return returnValue;
}

GetFieldHandlePtr FCDTestFCBase::getHandleFieldMFPro      (void) const
{
    MFUInt32::GetHandlePtr returnValue(
        new  MFUInt32::GetHandle(
             &_mfFieldMFPro,
             this->getType().getFieldDesc(FieldMFProFieldId)));

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldMFPro     (void)
{
    MFUInt32::EditHandlePtr returnValue(
        new  MFUInt32::EditHandle(
             &_mfFieldMFPro,
             this->getType().getFieldDesc(FieldMFProFieldId)));


    editMField(FieldMFProFieldMask, _mfFieldMFPro);

    return returnValue;
}

GetFieldHandlePtr FCDTestFCBase::getHandleFieldMFNo       (void) const
{
    MFUInt32::GetHandlePtr returnValue;

    return returnValue;
}

EditFieldHandlePtr FCDTestFCBase::editHandleFieldMFNo      (void)
{
    EditFieldHandlePtr returnValue;

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void FCDTestFCBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<FCDTestFCBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *FCDTestFCBase::createAspectCopy(void) const
{
    FCDTestFC *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const FCDTestFC *>(this));

    return returnValue;
}
#endif

void FCDTestFCBase::resolveLinks(void)
{
    Inherited::resolveLinks();

#ifdef OSG_MT_CPTR_ASPECT
    AspectOffsetStore oOffsets;

    _pAspectStore->fillOffsetArray(oOffsets, this);
#endif

#ifdef OSG_MT_CPTR_ASPECT
    _mfFieldMFPub.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfFieldMFPro.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
#ifdef OSG_MT_CPTR_ASPECT
    _mfFieldMFNo.terminateShare(Thread::getCurrentAspect(),
                                      oOffsets);
#endif
}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<FCDTestFC *>::_type("FCDTestFCPtr", "NodeCorePtr");
#endif

OSG_FIELDTRAITS_GETTYPE(FCDTestFC *)

OSG_EXPORT_PTR_SFIELD_FULL(PointerSField,
                           FCDTestFC *,
                           0);

OSG_EXPORT_PTR_MFIELD_FULL(PointerMField,
                           FCDTestFC *,
                           0);

DataType &FieldTraits< FCDTestFC *, 1 >::getType(void)
{
    return FieldTraits<FCDTestFC *, 0>::getType();
}


OSG_EXPORT_PTR_SFIELD(ChildPointerSField,
                      FCDTestFC *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_EXPORT_PTR_MFIELD(ChildPointerMField,
                      FCDTestFC *,
                      UnrecordedRefCountPolicy,
                      1);


OSG_END_NAMESPACE
