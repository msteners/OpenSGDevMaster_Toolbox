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
 **     class Manipulator!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/

OSG_BEGIN_NAMESPACE


//! access the type of the class
inline
OSG::FieldContainerType &ManipulatorBase::getClassType(void)
{
    return _type;
}

//! access the numerical type of the class
inline
OSG::UInt32 ManipulatorBase::getClassTypeId(void)
{
    return _type.getId();
}

inline
OSG::UInt16 ManipulatorBase::getClassGroupId(void)
{
    return _type.getGroupId();
}

/*------------------------------ get -----------------------------------*/


//! Get the value of the Manipulator::_sfTarget field.
inline
Node * ManipulatorBase::getTarget(void) const
{
    return _sfTarget.getValue();
}

//! Set the value of the Manipulator::_sfTarget field.
inline
void ManipulatorBase::setTarget(Node * const value)
{
    editSField(TargetFieldMask);

    _sfTarget.setValue(value);
}

//! Get the value of the Manipulator::_sfActiveSubHandle field.
inline
Node * ManipulatorBase::getActiveSubHandle(void) const
{
    return _sfActiveSubHandle.getValue();
}

//! Set the value of the Manipulator::_sfActiveSubHandle field.
inline
void ManipulatorBase::setActiveSubHandle(Node * const value)
{
    editSField(ActiveSubHandleFieldMask);

    _sfActiveSubHandle.setValue(value);
}
//! Get the value of the Manipulator::_sfLastMousePos field.

inline
Pnt2f &ManipulatorBase::editLastMousePos(void)
{
    editSField(LastMousePosFieldMask);

    return _sfLastMousePos.getValue();
}

//! Get the value of the Manipulator::_sfLastMousePos field.
inline
const Pnt2f &ManipulatorBase::getLastMousePos(void) const
{
    return _sfLastMousePos.getValue();
}

//! Set the value of the Manipulator::_sfLastMousePos field.
inline
void ManipulatorBase::setLastMousePos(const Pnt2f &value)
{
    editSField(LastMousePosFieldMask);

    _sfLastMousePos.setValue(value);
}

//! Get the value of the Manipulator::_sfViewport field.
inline
Viewport * ManipulatorBase::getViewport(void) const
{
    return _sfViewport.getValue();
}

//! Set the value of the Manipulator::_sfViewport field.
inline
void ManipulatorBase::setViewport(Viewport * const value)
{
    editSField(ViewportFieldMask);

    _sfViewport.setValue(value);
}
//! Get the value of the Manipulator::_sfActive field.

inline
bool &ManipulatorBase::editActive(void)
{
    editSField(ActiveFieldMask);

    return _sfActive.getValue();
}

//! Get the value of the Manipulator::_sfActive field.
inline
      bool  ManipulatorBase::getActive(void) const
{
    return _sfActive.getValue();
}

//! Set the value of the Manipulator::_sfActive field.
inline
void ManipulatorBase::setActive(const bool value)
{
    editSField(ActiveFieldMask);

    _sfActive.setValue(value);
}
//! Get the value of the Manipulator::_sfLength field.

inline
Vec3f &ManipulatorBase::editLength(void)
{
    editSField(LengthFieldMask);

    return _sfLength.getValue();
}

//! Get the value of the Manipulator::_sfLength field.
inline
const Vec3f &ManipulatorBase::getLength(void) const
{
    return _sfLength.getValue();
}

//! Set the value of the Manipulator::_sfLength field.
inline
void ManipulatorBase::setLength(const Vec3f &value)
{
    editSField(LengthFieldMask);

    _sfLength.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleXNode field.
inline
Node * ManipulatorBase::getHandleXNode(void) const
{
    return _sfHandleXNode.getValue();
}

//! Set the value of the Manipulator::_sfHandleXNode field.
inline
void ManipulatorBase::setHandleXNode(Node * const value)
{
    editSField(HandleXNodeFieldMask);

    _sfHandleXNode.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleYNode field.
inline
Node * ManipulatorBase::getHandleYNode(void) const
{
    return _sfHandleYNode.getValue();
}

//! Set the value of the Manipulator::_sfHandleYNode field.
inline
void ManipulatorBase::setHandleYNode(Node * const value)
{
    editSField(HandleYNodeFieldMask);

    _sfHandleYNode.setValue(value);
}

//! Get the value of the Manipulator::_sfHandleZNode field.
inline
Node * ManipulatorBase::getHandleZNode(void) const
{
    return _sfHandleZNode.getValue();
}

//! Set the value of the Manipulator::_sfHandleZNode field.
inline
void ManipulatorBase::setHandleZNode(Node * const value)
{
    editSField(HandleZNodeFieldMask);

    _sfHandleZNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransXNode field.
inline
Node * ManipulatorBase::getTransXNode(void) const
{
    return _sfTransXNode.getValue();
}

//! Set the value of the Manipulator::_sfTransXNode field.
inline
void ManipulatorBase::setTransXNode(Node * const value)
{
    editSField(TransXNodeFieldMask);

    _sfTransXNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransYNode field.
inline
Node * ManipulatorBase::getTransYNode(void) const
{
    return _sfTransYNode.getValue();
}

//! Set the value of the Manipulator::_sfTransYNode field.
inline
void ManipulatorBase::setTransYNode(Node * const value)
{
    editSField(TransYNodeFieldMask);

    _sfTransYNode.setValue(value);
}

//! Get the value of the Manipulator::_sfTransZNode field.
inline
Node * ManipulatorBase::getTransZNode(void) const
{
    return _sfTransZNode.getValue();
}

//! Set the value of the Manipulator::_sfTransZNode field.
inline
void ManipulatorBase::setTransZNode(Node * const value)
{
    editSField(TransZNodeFieldMask);

    _sfTransZNode.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialX field.
inline
Material * ManipulatorBase::getMaterialX(void) const
{
    return _sfMaterialX.getValue();
}

//! Set the value of the Manipulator::_sfMaterialX field.
inline
void ManipulatorBase::setMaterialX(Material * const value)
{
    editSField(MaterialXFieldMask);

    _sfMaterialX.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialY field.
inline
Material * ManipulatorBase::getMaterialY(void) const
{
    return _sfMaterialY.getValue();
}

//! Set the value of the Manipulator::_sfMaterialY field.
inline
void ManipulatorBase::setMaterialY(Material * const value)
{
    editSField(MaterialYFieldMask);

    _sfMaterialY.setValue(value);
}

//! Get the value of the Manipulator::_sfMaterialZ field.
inline
Material * ManipulatorBase::getMaterialZ(void) const
{
    return _sfMaterialZ.getValue();
}

//! Set the value of the Manipulator::_sfMaterialZ field.
inline
void ManipulatorBase::setMaterialZ(Material * const value)
{
    editSField(MaterialZFieldMask);

    _sfMaterialZ.setValue(value);
}

//! Get the value of the Manipulator::_sfAxisLinesN field.
inline
Node * ManipulatorBase::getAxisLinesN(void) const
{
    return _sfAxisLinesN.getValue();
}

//! Set the value of the Manipulator::_sfAxisLinesN field.
inline
void ManipulatorBase::setAxisLinesN(Node * const value)
{
    editSField(AxisLinesNFieldMask);

    _sfAxisLinesN.setValue(value);
}


#ifdef OSG_MT_CPTR_ASPECT
inline
void ManipulatorBase::execSync (      ManipulatorBase *pFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    Inherited::execSync(pFrom, whichField, oOffsets, syncMode, uiSyncInfo);

    if(FieldBits::NoField != (TargetFieldMask & whichField))
        _sfTarget.syncWith(pFrom->_sfTarget);

    if(FieldBits::NoField != (ActiveSubHandleFieldMask & whichField))
        _sfActiveSubHandle.syncWith(pFrom->_sfActiveSubHandle);

    if(FieldBits::NoField != (LastMousePosFieldMask & whichField))
        _sfLastMousePos.syncWith(pFrom->_sfLastMousePos);

    if(FieldBits::NoField != (ViewportFieldMask & whichField))
        _sfViewport.syncWith(pFrom->_sfViewport);

    if(FieldBits::NoField != (ActiveFieldMask & whichField))
        _sfActive.syncWith(pFrom->_sfActive);

    if(FieldBits::NoField != (LengthFieldMask & whichField))
        _sfLength.syncWith(pFrom->_sfLength);

    if(FieldBits::NoField != (HandleXNodeFieldMask & whichField))
        _sfHandleXNode.syncWith(pFrom->_sfHandleXNode);

    if(FieldBits::NoField != (HandleYNodeFieldMask & whichField))
        _sfHandleYNode.syncWith(pFrom->_sfHandleYNode);

    if(FieldBits::NoField != (HandleZNodeFieldMask & whichField))
        _sfHandleZNode.syncWith(pFrom->_sfHandleZNode);

    if(FieldBits::NoField != (TransXNodeFieldMask & whichField))
        _sfTransXNode.syncWith(pFrom->_sfTransXNode);

    if(FieldBits::NoField != (TransYNodeFieldMask & whichField))
        _sfTransYNode.syncWith(pFrom->_sfTransYNode);

    if(FieldBits::NoField != (TransZNodeFieldMask & whichField))
        _sfTransZNode.syncWith(pFrom->_sfTransZNode);

    if(FieldBits::NoField != (MaterialXFieldMask & whichField))
        _sfMaterialX.syncWith(pFrom->_sfMaterialX);

    if(FieldBits::NoField != (MaterialYFieldMask & whichField))
        _sfMaterialY.syncWith(pFrom->_sfMaterialY);

    if(FieldBits::NoField != (MaterialZFieldMask & whichField))
        _sfMaterialZ.syncWith(pFrom->_sfMaterialZ);

    if(FieldBits::NoField != (AxisLinesNFieldMask & whichField))
        _sfAxisLinesN.syncWith(pFrom->_sfAxisLinesN);
}
#endif


inline
const Char8 *ManipulatorBase::getClassname(void)
{
    return "Manipulator";
}
OSG_GEN_CONTAINERPTR(Manipulator);

OSG_END_NAMESPACE

