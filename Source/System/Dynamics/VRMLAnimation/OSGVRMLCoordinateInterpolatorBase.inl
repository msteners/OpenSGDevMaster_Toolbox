/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *               Copyright (C) 2000-2006 by the OpenSG Forum                 *
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
 **     class VRMLCoordinateInterpolator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &VRMLCoordinateInterpolatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 VRMLCoordinateInterpolatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 VRMLCoordinateInterpolatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/

//! Get the value of the VRMLCoordinateInterpolator::_sfInValue field.

inline
Real32 &VRMLCoordinateInterpolatorBase::editInValue(void)
{
    editSField(InValueFieldMask);

    return _sfInValue.getValue();
}

//! Get the value of the VRMLCoordinateInterpolator::_sfInValue field.
inline
      Real32  VRMLCoordinateInterpolatorBase::getInValue(void) const
{
    return _sfInValue.getValue();
}

//! Set the value of the VRMLCoordinateInterpolator::_sfInValue field.
inline
void VRMLCoordinateInterpolatorBase::setInValue(const Real32 value)
{
    editSField(InValueFieldMask);

    _sfInValue.setValue(value);
}

//! Get the value of the \a index element the VRMLCoordinateInterpolator::_mfKey field.
inline
      Real32  VRMLCoordinateInterpolatorBase::getKey(const UInt32 index) const
{
    return _mfKey[index];
}

inline
Real32 &VRMLCoordinateInterpolatorBase::editKey(const UInt32 index)
{
    editMField(KeyFieldMask, _mfKey);

    return _mfKey[index];
}


//! Get the value of the \a index element the VRMLCoordinateInterpolator::_mfKeyValue field.
inline
const Pnt3f &VRMLCoordinateInterpolatorBase::getKeyValue(const UInt32 index) const
{
    return _mfKeyValue[index];
}

inline
Pnt3f &VRMLCoordinateInterpolatorBase::editKeyValue(const UInt32 index)
{
    editMField(KeyValueFieldMask, _mfKeyValue);

    return _mfKeyValue[index];
}


//! Get the value of the \a index element the VRMLCoordinateInterpolator::_mfOutValue field.
inline
const Pnt3f &VRMLCoordinateInterpolatorBase::getOutValue(const UInt32 index) const
{
    return _mfOutValue[index];
}

inline
Pnt3f &VRMLCoordinateInterpolatorBase::editOutValue(const UInt32 index)
{
    editMField(OutValueFieldMask, _mfOutValue);

    return _mfOutValue[index];
}



#ifdef OSG_MT_CPTR_ASPECT
inline
void VRMLCoordinateInterpolatorBase::execSync (      VRMLCoordinateInterpolatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (InValueFieldMask & whichField))
        _sfInValue.syncWith(pFrom->_sfInValue);

    if(FieldBits::NoField != (KeyFieldMask & whichField))
        _mfKey.syncWith(pFrom->_mfKey,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (KeyValueFieldMask & whichField))
        _mfKeyValue.syncWith(pFrom->_mfKeyValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);

    if(FieldBits::NoField != (OutValueFieldMask & whichField))
        _mfOutValue.syncWith(pFrom->_mfOutValue,
                                syncMode,
                                uiSyncInfo,
                                oOffsets);
}
#endif


inline
const Char8 *VRMLCoordinateInterpolatorBase::getClassname(void)
{
    return "VRMLCoordinateInterpolator";
}
OSG_GEN_CONTAINERPTR(VRMLCoordinateInterpolator);

OSG_END_NAMESPACE
