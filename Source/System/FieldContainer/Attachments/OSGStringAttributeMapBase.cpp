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
 **     class StringAttributeMap!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESTRINGATTRIBUTEMAPINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGStringAttributeMapBase.h"
#include "OSGStringAttributeMap.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::StringAttributeMap
    An attachment that stores a string-to-string mapping of keys to values.
    User code can store any key and value pair and interpret the string value in
    whatever ways are appropriate.
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var std::string     StringAttributeMapBase::_mfKeys
    
*/

/*! \var std::string     StringAttributeMapBase::_mfValues
    
*/


void StringAttributeMapBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const MFString *(StringAttributeMapBase::*GetMFKeysF)(void) const;

    GetMFKeysF GetMFKeys = &StringAttributeMapBase::getMFKeys;
#endif

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "keys",
        "",
        KeysFieldId, KeysFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&StringAttributeMapBase::editMFKeys),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFKeys));
#else
        reinterpret_cast<FieldGetMethodSig >(&StringAttributeMapBase::getMFKeys));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const MFString *(StringAttributeMapBase::*GetMFValuesF)(void) const;

    GetMFValuesF GetMFValues = &StringAttributeMapBase::getMFValues;
#endif

    pDesc = new MFString::Description(
        MFString::getClassType(),
        "values",
        "",
        ValuesFieldId, ValuesFieldMask,
        false,
        Field::MFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&StringAttributeMapBase::editMFValues),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetMFValues));
#else
        reinterpret_cast<FieldGetMethodSig >(&StringAttributeMapBase::getMFValues));
#endif

    oType.addInitialDesc(pDesc);
}


StringAttributeMapBase::TypeObject StringAttributeMapBase::_type(
    StringAttributeMapBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &StringAttributeMapBase::createEmpty,
    StringAttributeMap::initMethod,
    (InitalInsertDescFunc) &StringAttributeMapBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"StringAttributeMap\"\n"
    "\tparent=\"FieldContainerAttachment\"\n"
    "\tlibrary=\"System\"\n"
    "\tpointerfieldtypes=\"single\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    ">\n"
    "An attachment that stores a string-to-string mapping of keys to values.\n"
    "User code can store any key and value pair and interpret the string value in\n"
    "whatever ways are appropriate.\n"
    "\t<Field\n"
    "\t\tname=\"keys\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"values\"\n"
    "\t\ttype=\"std::string\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"protected\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "An attachment that stores a string-to-string mapping of keys to values.\n"
    "User code can store any key and value pair and interpret the string value in\n"
    "whatever ways are appropriate.\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &StringAttributeMapBase::getType(void)
{
    return _type;
}

const FieldContainerType &StringAttributeMapBase::getType(void) const
{
    return _type;
}

UInt32 StringAttributeMapBase::getContainerSize(void) const
{
    return sizeof(StringAttributeMap);
}

/*------------------------- decorator get ------------------------------*/


MFString *StringAttributeMapBase::editMFKeys(void)
{
    editMField(KeysFieldMask, _mfKeys);

    return &_mfKeys;
}

const MFString *StringAttributeMapBase::getMFKeys(void) const
{
    return &_mfKeys;
}

#ifdef OSG_1_COMPAT
MFString            *StringAttributeMapBase::getMFKeys           (void)
{
    return this->editMFKeys           ();
}
#endif

MFString *StringAttributeMapBase::editMFValues(void)
{
    editMField(ValuesFieldMask, _mfValues);

    return &_mfValues;
}

const MFString *StringAttributeMapBase::getMFValues(void) const
{
    return &_mfValues;
}

#ifdef OSG_1_COMPAT
MFString            *StringAttributeMapBase::getMFValues         (void)
{
    return this->editMFValues         ();
}
#endif



/*********************************** Non-ptr code ********************************/
void StringAttributeMapBase::pushToKeys(const std::string& value)
{
    editMField(KeysFieldMask, _mfKeys);
    _mfKeys.push_back(value);
}

void StringAttributeMapBase::insertIntoKeys(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(KeysFieldMask, _mfKeys);

    MFString::iterator fieldIt = _mfKeys.begin();

    fieldIt += uiIndex;

    _mfKeys.insert(fieldIt, value);
}

void StringAttributeMapBase::replaceInKeys(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfKeys.size())
        return;

    editMField(KeysFieldMask, _mfKeys);

    _mfKeys[uiIndex] = value;
}

void StringAttributeMapBase::replaceInKeys(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfKeys.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(KeysFieldMask, _mfKeys);

        MFString::iterator fieldIt = _mfKeys.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void StringAttributeMapBase::removeFromKeys(UInt32 uiIndex)
{
    if(uiIndex < _mfKeys.size())
    {
        editMField(KeysFieldMask, _mfKeys);

        MFString::iterator fieldIt = _mfKeys.begin();

        fieldIt += uiIndex;
        _mfKeys.erase(fieldIt);
    }
}

void StringAttributeMapBase::removeFromKeys(const std::string& value)
{
    Int32 iElemIdx = _mfKeys.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(KeysFieldMask, _mfKeys);

        MFString::iterator fieldIt = _mfKeys.begin();

        fieldIt += iElemIdx;

        _mfKeys.erase(fieldIt);
    }
}

void StringAttributeMapBase::clearKeys(void)
{
    editMField(KeysFieldMask, _mfKeys);

    _mfKeys.clear();
}
/*********************************** Non-ptr code ********************************/
void StringAttributeMapBase::pushToValues(const std::string& value)
{
    editMField(ValuesFieldMask, _mfValues);
    _mfValues.push_back(value);
}

void StringAttributeMapBase::insertIntoValues(UInt32                uiIndex,
                                                   const std::string& value   )
{
    editMField(ValuesFieldMask, _mfValues);

    MFString::iterator fieldIt = _mfValues.begin();

    fieldIt += uiIndex;

    _mfValues.insert(fieldIt, value);
}

void StringAttributeMapBase::replaceInValues(UInt32                uiIndex,
                                                       const std::string& value   )
{
    if(uiIndex >= _mfValues.size())
        return;

    editMField(ValuesFieldMask, _mfValues);

    _mfValues[uiIndex] = value;
}

void StringAttributeMapBase::replaceInValues(const std::string& pOldElem,
                                                        const std::string& pNewElem)
{
    Int32  elemIdx = _mfValues.findIndex(pOldElem);

    if(elemIdx != -1)
    {
        editMField(ValuesFieldMask, _mfValues);

        MFString::iterator fieldIt = _mfValues.begin();

        fieldIt += elemIdx;

        (*fieldIt) = pNewElem;
    }
}

void StringAttributeMapBase::removeFromValues(UInt32 uiIndex)
{
    if(uiIndex < _mfValues.size())
    {
        editMField(ValuesFieldMask, _mfValues);

        MFString::iterator fieldIt = _mfValues.begin();

        fieldIt += uiIndex;
        _mfValues.erase(fieldIt);
    }
}

void StringAttributeMapBase::removeFromValues(const std::string& value)
{
    Int32 iElemIdx = _mfValues.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(ValuesFieldMask, _mfValues);

        MFString::iterator fieldIt = _mfValues.begin();

        fieldIt += iElemIdx;

        _mfValues.erase(fieldIt);
    }
}

void StringAttributeMapBase::clearValues(void)
{
    editMField(ValuesFieldMask, _mfValues);

    _mfValues.clear();
}


/*------------------------------ access -----------------------------------*/

UInt32 StringAttributeMapBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        returnValue += _mfKeys.getBinSize();
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        returnValue += _mfValues.getBinSize();
    }

    return returnValue;
}

void StringAttributeMapBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyToBin(pMem);
    }
}

void StringAttributeMapBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (KeysFieldMask & whichField))
    {
        _mfKeys.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ValuesFieldMask & whichField))
    {
        _mfValues.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
StringAttributeMapPtr StringAttributeMapBase::createEmpty(void)
{
    StringAttributeMapPtr returnValue;

    newPtr<StringAttributeMap>(returnValue);

    return returnValue;
}

FieldContainerPtr StringAttributeMapBase::shallowCopy(void) const
{
    StringAttributeMapPtr returnValue;

    newPtr(returnValue, dynamic_cast<const StringAttributeMap *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

StringAttributeMapBase::StringAttributeMapBase(void) :
    Inherited(),
    _mfKeys                   (),
    _mfValues                 ()
{
}

StringAttributeMapBase::StringAttributeMapBase(const StringAttributeMapBase &source) :
    Inherited(source),
    _mfKeys                   (source._mfKeys                   ),
    _mfValues                 (source._mfValues                 )
{
}

/*-------------------------- destructors ----------------------------------*/

StringAttributeMapBase::~StringAttributeMapBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void StringAttributeMapBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<StringAttributeMapBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void StringAttributeMapBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<StringAttributeMapBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void StringAttributeMapBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr StringAttributeMapBase::createAspectCopy(void) const
{
    StringAttributeMapPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const StringAttributeMap *>(this));

    return returnValue;
}
#endif

void StringAttributeMapBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<StringAttributeMapPtr>::_type("StringAttributeMapPtr", "FieldContainerAttachmentPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(StringAttributeMapPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, StringAttributeMapPtr, SFFieldContainerPtr);

OSG_END_NAMESPACE
