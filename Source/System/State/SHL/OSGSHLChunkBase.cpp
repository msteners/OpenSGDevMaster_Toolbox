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
 **     class SHLChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILESHLCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>




#include "OSGSHLChunkBase.h"
#include "OSGSHLChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::SHLChunk
    This chunk provides support for GLSL.  It provides a wrapper for setting vertex
    and fragment programs.  Because it is derived from OSG::ShaderParameter it also
    allows setting uniform parameters for the shaders.

    The primary way to use this class is to:
    <ul>
    <li>set/getVertexProgram</li>
    <li>set/getFragmentProgram</li>
    <li>setUniform</li>
    </ul>

    To help with OpenSG application development this chunk provides support for
    derived uniform parameters.  The uniform parameters all start with the
    characters "OSG" and are derived from the internal state of OpenSG in some way.
    It is possible for users to make use of this system to add their own derived
    "OSG" parameters using a user callback.  (see addParameterCallback)

    To use these parameters, simply call setUniform() with the name of the parameter
    and set it to some default value of the correct type.  After that point OpenSG
    will ensure that the parameter is automatically updated each frame.

    The derived parameters supported by default are:
    <dl>
    <dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>
    <dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>
    <dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>
    <dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>
    <dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>
    <dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>
    <dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>
    <dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>
    </dl>
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var bool            SHLChunkBase::_sfCgFrontEnd
    
*/

/*! \var bool            SHLChunkBase::_sfPointSize
    Flag to indicate whether the shader can change the point size.
*/

/*! \var UInt32          SHLChunkBase::_sfGLId
    
*/


void SHLChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFBool *(SHLChunkBase::*GetSFCgFrontEndF)(void) const;

    GetSFCgFrontEndF GetSFCgFrontEnd = &SHLChunkBase::getSFCgFrontEnd;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "cgFrontEnd",
        "",
        CgFrontEndFieldId, CgFrontEndFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SHLChunkBase::editSFCgFrontEnd),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFCgFrontEnd));
#else
        reinterpret_cast<FieldGetMethodSig >(&SHLChunkBase::getSFCgFrontEnd));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(SHLChunkBase::*GetSFPointSizeF)(void) const;

    GetSFPointSizeF GetSFPointSize = &SHLChunkBase::getSFPointSize;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "pointSize",
        "Flag to indicate whether the shader can change the point size.\n",
        PointSizeFieldId, PointSizeFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&SHLChunkBase::editSFPointSize),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFPointSize));
#else
        reinterpret_cast<FieldGetMethodSig >(&SHLChunkBase::getSFPointSize));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFUInt32 *(SHLChunkBase::*GetSFGLIdF)(void) const;

    GetSFGLIdF GetSFGLId = &SHLChunkBase::getSFGLId;
#endif

    pDesc = new SFUInt32::Description(
        SFUInt32::getClassType(),
        "GLId",
        "",
        GLIdFieldId, GLIdFieldMask,
        true,
        (Field::FClusterLocal),
        reinterpret_cast<FieldEditMethodSig>(&SHLChunkBase::editSFGLId),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFGLId));
#else
        reinterpret_cast<FieldGetMethodSig >(&SHLChunkBase::getSFGLId));
#endif

    oType.addInitialDesc(pDesc);
}


SHLChunkBase::TypeObject SHLChunkBase::_type(
    SHLChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &SHLChunkBase::createEmpty,
    SHLChunk::initMethod,
    (InitalInsertDescFunc) &SHLChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"SHLChunk\"\n"
    "\tparent=\"ShaderChunk\"\n"
    "\tlibrary=\"State\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tstructure=\"concrete\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    "\tdecoratable=\"false\"\n"
    "\tuseLocalIncludes=\"false\"\n"
    "><![CDATA[\n"
    "This chunk provides support for GLSL.  It provides a wrapper for setting vertex\n"
    "and fragment programs.  Because it is derived from OSG::ShaderParameter it also\n"
    "allows setting uniform parameters for the shaders.\n"
    "\n"
    "The primary way to use this class is to:\n"
    "<ul>\n"
    "    <li>set/getVertexProgram</li>\n"
    "    <li>set/getFragmentProgram</li>\n"
    "    <li>setUniform</li>\n"
    "</ul>\n"
    "\n"
    "To help with OpenSG application development this chunk provides support for\n"
    "derived uniform parameters.  The uniform parameters all start with the\n"
    "characters \"OSG\" and are derived from the internal state of OpenSG in some way.\n"
    "It is possible for users to make use of this system to add their own derived\n"
    "\"OSG\" parameters using a user callback.  (see addParameterCallback)\n"
    "\n"
    "To use these parameters, simply call setUniform() with the name of the parameter\n"
    "and set it to some default value of the correct type.  After that point OpenSG\n"
    "will ensure that the parameter is automatically updated each frame.\n"
    "\n"
    "The derived parameters supported by default are:\n"
    "<dl>\n"
    "    <dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>\n"
    "    <dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>\n"
    "    <dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>\n"
    "    <dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>\n"
    "    <dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>\n"
    "    <dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>\n"
    "    <dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>\n"
    "    <dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>\n"
    "</dl>]]>\n"
    "\t<Field\n"
    "\t\tname=\"cgFrontEnd\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"pointSize\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t\taccess=\"public\"\n"
    "\t>\n"
    "        Flag to indicate whether the shader can change the point size.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"GLId\"\n"
    "\t\ttype=\"UInt32\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        fieldFlags=\"FClusterLocal\"\n"
    "\t>\n"
    "\t</Field>\n"
    "</FieldContainer>\n",
    "This chunk provides support for GLSL.  It provides a wrapper for setting vertex\n"
    "and fragment programs.  Because it is derived from OSG::ShaderParameter it also\n"
    "allows setting uniform parameters for the shaders.\n"
    "\n"
    "The primary way to use this class is to:\n"
    "<ul>\n"
    "<li>set/getVertexProgram</li>\n"
    "<li>set/getFragmentProgram</li>\n"
    "<li>setUniform</li>\n"
    "</ul>\n"
    "\n"
    "To help with OpenSG application development this chunk provides support for\n"
    "derived uniform parameters.  The uniform parameters all start with the\n"
    "characters \"OSG\" and are derived from the internal state of OpenSG in some way.\n"
    "It is possible for users to make use of this system to add their own derived\n"
    "\"OSG\" parameters using a user callback.  (see addParameterCallback)\n"
    "\n"
    "To use these parameters, simply call setUniform() with the name of the parameter\n"
    "and set it to some default value of the correct type.  After that point OpenSG\n"
    "will ensure that the parameter is automatically updated each frame.\n"
    "\n"
    "The derived parameters supported by default are:\n"
    "<dl>\n"
    "<dt>OSGCameraOrientation</dt><dd>Camera orientation matrix in world coords.</dd>\n"
    "<dt>OSGCameraPosition</dt><dd>Camera position vec3 in world coordinates.</dd>\n"
    "<dt>OSGViewMatrix</dt><dd>Camera viewing matrix in world coordinates.</dd>\n"
    "<dt>OSGInvViewMatrix</dt><dd>Inverse camera viewing matrix in world coordinates.</dd>\n"
    "<dt>OSGStereoLeftEye</dt><dd>Integer: -1 mono, 1 left eye, 0 right eye.</dd>\n"
    "<dt>OSGClusterId</dt><dd>The int id set with setClusterId().</dd>\n"
    "<dt>OSGActiveLightsMast</dt><dd>The active lights mast from the render action.</dd>\n"
    "<dt>OSGLight0Active ... OSGLight7Active</dt><dd>int/bool flag of wether the light is active.</dd>\n"
    "</dl>\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &SHLChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &SHLChunkBase::getType(void) const
{
    return _type;
}

UInt32 SHLChunkBase::getContainerSize(void) const
{
    return sizeof(SHLChunk);
}

/*------------------------- decorator get ------------------------------*/


SFBool *SHLChunkBase::editSFCgFrontEnd(void)
{
    editSField(CgFrontEndFieldMask);

    return &_sfCgFrontEnd;
}

const SFBool *SHLChunkBase::getSFCgFrontEnd(void) const
{
    return &_sfCgFrontEnd;
}

#ifdef OSG_1_COMPAT
SFBool              *SHLChunkBase::getSFCgFrontEnd     (void)
{
    return this->editSFCgFrontEnd     ();
}
#endif

SFBool *SHLChunkBase::editSFPointSize(void)
{
    editSField(PointSizeFieldMask);

    return &_sfPointSize;
}

const SFBool *SHLChunkBase::getSFPointSize(void) const
{
    return &_sfPointSize;
}

#ifdef OSG_1_COMPAT
SFBool              *SHLChunkBase::getSFPointSize      (void)
{
    return this->editSFPointSize      ();
}
#endif

SFUInt32 *SHLChunkBase::editSFGLId(void)
{
    editSField(GLIdFieldMask);

    return &_sfGLId;
}

const SFUInt32 *SHLChunkBase::getSFGLId(void) const
{
    return &_sfGLId;
}

#ifdef OSG_1_COMPAT
SFUInt32            *SHLChunkBase::getSFGLId           (void)
{
    return this->editSFGLId           ();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 SHLChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        returnValue += _sfCgFrontEnd.getBinSize();
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        returnValue += _sfPointSize.getBinSize();
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        returnValue += _sfGLId.getBinSize();
    }

    return returnValue;
}

void SHLChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyToBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyToBin(pMem);
    }
}

void SHLChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (CgFrontEndFieldMask & whichField))
    {
        _sfCgFrontEnd.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PointSizeFieldMask & whichField))
    {
        _sfPointSize.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (GLIdFieldMask & whichField))
    {
        _sfGLId.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
SHLChunkPtr SHLChunkBase::createEmpty(void)
{
    SHLChunkPtr returnValue;

    newPtr<SHLChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr SHLChunkBase::shallowCopy(void) const
{
    SHLChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const SHLChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

SHLChunkBase::SHLChunkBase(void) :
    Inherited(),
    _sfCgFrontEnd             (bool(false)),
    _sfPointSize              (bool(false)),
    _sfGLId                   ()
{
}

SHLChunkBase::SHLChunkBase(const SHLChunkBase &source) :
    Inherited(source),
    _sfCgFrontEnd             (source._sfCgFrontEnd             ),
    _sfPointSize              (source._sfPointSize              ),
    _sfGLId                   (source._sfGLId                   )
{
}

/*-------------------------- destructors ----------------------------------*/

SHLChunkBase::~SHLChunkBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void SHLChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<SHLChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void SHLChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<SHLChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void SHLChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr SHLChunkBase::createAspectCopy(void) const
{
    SHLChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const SHLChunk *>(this));

    return returnValue;
}
#endif

void SHLChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<SHLChunkPtr>::_type("SHLChunkPtr", "ShaderChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(SHLChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, SHLChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, SHLChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
