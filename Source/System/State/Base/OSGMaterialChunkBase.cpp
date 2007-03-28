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
 **     class MaterialChunk!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILEMATERIALCHUNKINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>


#include <OSGGL.h>                        // ColorMaterial default header
#include <OSGGL.h>                        // BackColorMaterial default header


#include "OSGMaterialChunkBase.h"
#include "OSGMaterialChunk.h"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::MaterialChunk
    \ingroup GrpSystemState

    See \ref PageSystemMaterialChunk for details.

    This chunk wraps glMaterial() (OSG::MaterialChunk::_sfDiffuse,
    OSG::MaterialChunk::_sfSpecular, OSG::MaterialChunk::_sfEmission,
    OSG::MaterialChunk::_sfShininess, OSG::MaterialChunk::_sfAmbient),
    glEnable(GL_LIGHTING)(OSG::MaterialChunk::_sfLit) and glColorMaterial()
    (OSG::MaterialChunk::_sfColorMaterial).
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var Color4r         MaterialChunkBase::_sfDiffuse
    
*/

/*! \var Color4r         MaterialChunkBase::_sfAmbient
    
*/

/*! \var Color4r         MaterialChunkBase::_sfSpecular
    
*/

/*! \var Color4r         MaterialChunkBase::_sfEmission
    
*/

/*! \var Real            MaterialChunkBase::_sfShininess
    
*/

/*! \var bool            MaterialChunkBase::_sfLit
    Switch for using this material in lighting calculation. 
    If not set the diffuse color is used as is.
*/

/*! \var GLenum          MaterialChunkBase::_sfColorMaterial
    The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.
*/

/*! \var bool            MaterialChunkBase::_sfBackMaterial
    Switch for using separate material properties for front- and back-facing
    polygons. If set to false the standard parameters will be used for front- and 
    backfaces.
*/

/*! \var Color4r         MaterialChunkBase::_sfBackDiffuse
    
*/

/*! \var Color4r         MaterialChunkBase::_sfBackAmbient
    
*/

/*! \var Color4r         MaterialChunkBase::_sfBackSpecular
    
*/

/*! \var Color4r         MaterialChunkBase::_sfBackEmission
    
*/

/*! \var Real            MaterialChunkBase::_sfBackShininess
    
*/

/*! \var GLenum          MaterialChunkBase::_sfBackColorMaterial
    The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.
*/


void MaterialChunkBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFDiffuseF)(void) const;

    GetSFDiffuseF GetSFDiffuse = &MaterialChunkBase::getSFDiffuse;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "diffuse",
        "",
        DiffuseFieldId, DiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFDiffuse),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFDiffuse));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFDiffuse));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFAmbientF)(void) const;

    GetSFAmbientF GetSFAmbient = &MaterialChunkBase::getSFAmbient;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "ambient",
        "",
        AmbientFieldId, AmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFAmbient),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFAmbient));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFAmbient));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFSpecularF)(void) const;

    GetSFSpecularF GetSFSpecular = &MaterialChunkBase::getSFSpecular;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "specular",
        "",
        SpecularFieldId, SpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFSpecular),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFSpecular));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFSpecular));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFEmissionF)(void) const;

    GetSFEmissionF GetSFEmission = &MaterialChunkBase::getSFEmission;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "emission",
        "",
        EmissionFieldId, EmissionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFEmission),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFEmission));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFEmission));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(MaterialChunkBase::*GetSFShininessF)(void) const;

    GetSFShininessF GetSFShininess = &MaterialChunkBase::getSFShininess;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "shininess",
        "",
        ShininessFieldId, ShininessFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFShininess),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFShininess));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFShininess));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(MaterialChunkBase::*GetSFLitF)(void) const;

    GetSFLitF GetSFLit = &MaterialChunkBase::getSFLit;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "lit",
        "Switch for using this material in lighting calculation. \n"
        "If not set the diffuse color is used as is.\n",
        LitFieldId, LitFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFLit),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFLit));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFLit));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(MaterialChunkBase::*GetSFColorMaterialF)(void) const;

    GetSFColorMaterialF GetSFColorMaterial = &MaterialChunkBase::getSFColorMaterial;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "colorMaterial",
        "The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.\n",
        ColorMaterialFieldId, ColorMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFColorMaterial),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFColorMaterial));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFColorMaterial));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFBool *(MaterialChunkBase::*GetSFBackMaterialF)(void) const;

    GetSFBackMaterialF GetSFBackMaterial = &MaterialChunkBase::getSFBackMaterial;
#endif

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "backMaterial",
        "Switch for using separate material properties for front- and back-facing\n"
        "polygons. If set to false the standard parameters will be used for front- and \n"
        "backfaces.\n",
        BackMaterialFieldId, BackMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackMaterial),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackMaterial));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackMaterial));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFBackDiffuseF)(void) const;

    GetSFBackDiffuseF GetSFBackDiffuse = &MaterialChunkBase::getSFBackDiffuse;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "backDiffuse",
        "",
        BackDiffuseFieldId, BackDiffuseFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackDiffuse),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackDiffuse));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackDiffuse));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFBackAmbientF)(void) const;

    GetSFBackAmbientF GetSFBackAmbient = &MaterialChunkBase::getSFBackAmbient;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "backAmbient",
        "",
        BackAmbientFieldId, BackAmbientFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackAmbient),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackAmbient));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackAmbient));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFBackSpecularF)(void) const;

    GetSFBackSpecularF GetSFBackSpecular = &MaterialChunkBase::getSFBackSpecular;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "backSpecular",
        "",
        BackSpecularFieldId, BackSpecularFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackSpecular),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackSpecular));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackSpecular));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFColor4r *(MaterialChunkBase::*GetSFBackEmissionF)(void) const;

    GetSFBackEmissionF GetSFBackEmission = &MaterialChunkBase::getSFBackEmission;
#endif

    pDesc = new SFColor4r::Description(
        SFColor4r::getClassType(),
        "backEmission",
        "",
        BackEmissionFieldId, BackEmissionFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackEmission),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackEmission));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackEmission));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFReal *(MaterialChunkBase::*GetSFBackShininessF)(void) const;

    GetSFBackShininessF GetSFBackShininess = &MaterialChunkBase::getSFBackShininess;
#endif

    pDesc = new SFReal::Description(
        SFReal::getClassType(),
        "backShininess",
        "",
        BackShininessFieldId, BackShininessFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackShininess),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackShininess));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackShininess));
#endif

    oType.addInitialDesc(pDesc);

#ifdef OSG_1_COMPAT
    typedef const SFGLenum *(MaterialChunkBase::*GetSFBackColorMaterialF)(void) const;

    GetSFBackColorMaterialF GetSFBackColorMaterial = &MaterialChunkBase::getSFBackColorMaterial;
#endif

    pDesc = new SFGLenum::Description(
        SFGLenum::getClassType(),
        "backColorMaterial",
        "The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.\n",
        BackColorMaterialFieldId, BackColorMaterialFieldMask,
        false,
        Field::SFDefaultFlags,
        reinterpret_cast<FieldEditMethodSig>(&MaterialChunkBase::editSFBackColorMaterial),
#ifdef OSG_1_COMPAT
        reinterpret_cast<FieldGetMethodSig >(GetSFBackColorMaterial));
#else
        reinterpret_cast<FieldGetMethodSig >(&MaterialChunkBase::getSFBackColorMaterial));
#endif

    oType.addInitialDesc(pDesc);
}


MaterialChunkBase::TypeObject MaterialChunkBase::_type(
    MaterialChunkBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    (PrototypeCreateF) &MaterialChunkBase::createEmpty,
    MaterialChunk::initMethod,
    (InitalInsertDescFunc) &MaterialChunkBase::classDescInserter,
    false,
    0,
    "<?xml version=\"1.0\" ?>\n"
    "\n"
    "<FieldContainer\n"
    "\tname=\"MaterialChunk\"\n"
    "\tparent=\"StateChunk\"\n"
    "\tlibrary=\"System\"\n"
    "\tstructure=\"concrete\"\n"
    "\tpointerfieldtypes=\"both\"\n"
    "\tsystemcomponent=\"true\"\n"
    "\tparentsystemcomponent=\"true\"\n"
    ">\n"
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemMaterialChunk for details.\n"
    "\n"
    "This chunk wraps glMaterial() (OSG::MaterialChunk::_sfDiffuse,\n"
    "OSG::MaterialChunk::_sfSpecular, OSG::MaterialChunk::_sfEmission,\n"
    "OSG::MaterialChunk::_sfShininess, OSG::MaterialChunk::_sfAmbient),\n"
    "glEnable(GL_LIGHTING)(OSG::MaterialChunk::_sfLit) and glColorMaterial()\n"
    "(OSG::MaterialChunk::_sfColorMaterial).\n"
    "\t<Field\n"
    "\t\tname=\"diffuse\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"ambient\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".2f,.2f,.2f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"specular\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".5f,.5f,.5f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"emission\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f,1.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"shininess\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lit\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"true\"\n"
    "\t>\n"
    "        Switch for using this material in lighting calculation. \n"
    "        If not set the diffuse color is used as is.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"colorMaterial\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_DIFFUSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "        The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backMaterial\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"false\"\n"
    "\t>\n"
    "        Switch for using separate material properties for front- and back-facing\n"
    "        polygons. If set to false the standard parameters will be used for front- and \n"
    "        backfaces.\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backDiffuse\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"1.f,1.f,1.f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backAmbient\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".2f,.2f,.2f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backSpecular\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\".5f,.5f,.5f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backEmission\"\n"
    "\t\ttype=\"Color4r\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"0.f,0.f,0.f,0.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backShininess\"\n"
    "\t\ttype=\"Real\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"10.f\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"backColorMaterial\"\n"
    "\t\ttype=\"GLenum\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"GL_DIFFUSE\"\n"
    "\t\tdefaultHeader=\"&lt;OSGGL.h&gt;\"\n"
    "\t>\n"
    "        The mode for using Geometry colors in lighting. Defaults to GL_DIFFUSE.\n"
    "\t</Field>       \n"
    "</FieldContainer>\n",
    "\\ingroup GrpSystemState\n"
    "\n"
    "See \\ref PageSystemMaterialChunk for details.\n"
    "\n"
    "This chunk wraps glMaterial() (OSG::MaterialChunk::_sfDiffuse,\n"
    "OSG::MaterialChunk::_sfSpecular, OSG::MaterialChunk::_sfEmission,\n"
    "OSG::MaterialChunk::_sfShininess, OSG::MaterialChunk::_sfAmbient),\n"
    "glEnable(GL_LIGHTING)(OSG::MaterialChunk::_sfLit) and glColorMaterial()\n"
    "(OSG::MaterialChunk::_sfColorMaterial).\n"
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &MaterialChunkBase::getType(void)
{
    return _type;
}

const FieldContainerType &MaterialChunkBase::getType(void) const
{
    return _type;
}

UInt32 MaterialChunkBase::getContainerSize(void) const
{
    return sizeof(MaterialChunk);
}

/*------------------------- decorator get ------------------------------*/


SFColor4r *MaterialChunkBase::editSFDiffuse(void)
{
    editSField(DiffuseFieldMask);

    return &_sfDiffuse;
}

const SFColor4r *MaterialChunkBase::getSFDiffuse(void) const
{
    return &_sfDiffuse;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFDiffuse        (void)
{
    return this->editSFDiffuse        ();
}
#endif

SFColor4r *MaterialChunkBase::editSFAmbient(void)
{
    editSField(AmbientFieldMask);

    return &_sfAmbient;
}

const SFColor4r *MaterialChunkBase::getSFAmbient(void) const
{
    return &_sfAmbient;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFAmbient        (void)
{
    return this->editSFAmbient        ();
}
#endif

SFColor4r *MaterialChunkBase::editSFSpecular(void)
{
    editSField(SpecularFieldMask);

    return &_sfSpecular;
}

const SFColor4r *MaterialChunkBase::getSFSpecular(void) const
{
    return &_sfSpecular;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFSpecular       (void)
{
    return this->editSFSpecular       ();
}
#endif

SFColor4r *MaterialChunkBase::editSFEmission(void)
{
    editSField(EmissionFieldMask);

    return &_sfEmission;
}

const SFColor4r *MaterialChunkBase::getSFEmission(void) const
{
    return &_sfEmission;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFEmission       (void)
{
    return this->editSFEmission       ();
}
#endif

SFReal *MaterialChunkBase::editSFShininess(void)
{
    editSField(ShininessFieldMask);

    return &_sfShininess;
}

const SFReal *MaterialChunkBase::getSFShininess(void) const
{
    return &_sfShininess;
}

#ifdef OSG_1_COMPAT
SFReal              *MaterialChunkBase::getSFShininess      (void)
{
    return this->editSFShininess      ();
}
#endif

SFBool *MaterialChunkBase::editSFLit(void)
{
    editSField(LitFieldMask);

    return &_sfLit;
}

const SFBool *MaterialChunkBase::getSFLit(void) const
{
    return &_sfLit;
}

#ifdef OSG_1_COMPAT
SFBool              *MaterialChunkBase::getSFLit            (void)
{
    return this->editSFLit            ();
}
#endif

SFGLenum *MaterialChunkBase::editSFColorMaterial(void)
{
    editSField(ColorMaterialFieldMask);

    return &_sfColorMaterial;
}

const SFGLenum *MaterialChunkBase::getSFColorMaterial(void) const
{
    return &_sfColorMaterial;
}

#ifdef OSG_1_COMPAT
SFGLenum            *MaterialChunkBase::getSFColorMaterial  (void)
{
    return this->editSFColorMaterial  ();
}
#endif

SFBool *MaterialChunkBase::editSFBackMaterial(void)
{
    editSField(BackMaterialFieldMask);

    return &_sfBackMaterial;
}

const SFBool *MaterialChunkBase::getSFBackMaterial(void) const
{
    return &_sfBackMaterial;
}

#ifdef OSG_1_COMPAT
SFBool              *MaterialChunkBase::getSFBackMaterial   (void)
{
    return this->editSFBackMaterial   ();
}
#endif

SFColor4r *MaterialChunkBase::editSFBackDiffuse(void)
{
    editSField(BackDiffuseFieldMask);

    return &_sfBackDiffuse;
}

const SFColor4r *MaterialChunkBase::getSFBackDiffuse(void) const
{
    return &_sfBackDiffuse;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFBackDiffuse    (void)
{
    return this->editSFBackDiffuse    ();
}
#endif

SFColor4r *MaterialChunkBase::editSFBackAmbient(void)
{
    editSField(BackAmbientFieldMask);

    return &_sfBackAmbient;
}

const SFColor4r *MaterialChunkBase::getSFBackAmbient(void) const
{
    return &_sfBackAmbient;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFBackAmbient    (void)
{
    return this->editSFBackAmbient    ();
}
#endif

SFColor4r *MaterialChunkBase::editSFBackSpecular(void)
{
    editSField(BackSpecularFieldMask);

    return &_sfBackSpecular;
}

const SFColor4r *MaterialChunkBase::getSFBackSpecular(void) const
{
    return &_sfBackSpecular;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFBackSpecular   (void)
{
    return this->editSFBackSpecular   ();
}
#endif

SFColor4r *MaterialChunkBase::editSFBackEmission(void)
{
    editSField(BackEmissionFieldMask);

    return &_sfBackEmission;
}

const SFColor4r *MaterialChunkBase::getSFBackEmission(void) const
{
    return &_sfBackEmission;
}

#ifdef OSG_1_COMPAT
SFColor4r           *MaterialChunkBase::getSFBackEmission   (void)
{
    return this->editSFBackEmission   ();
}
#endif

SFReal *MaterialChunkBase::editSFBackShininess(void)
{
    editSField(BackShininessFieldMask);

    return &_sfBackShininess;
}

const SFReal *MaterialChunkBase::getSFBackShininess(void) const
{
    return &_sfBackShininess;
}

#ifdef OSG_1_COMPAT
SFReal              *MaterialChunkBase::getSFBackShininess  (void)
{
    return this->editSFBackShininess  ();
}
#endif

SFGLenum *MaterialChunkBase::editSFBackColorMaterial(void)
{
    editSField(BackColorMaterialFieldMask);

    return &_sfBackColorMaterial;
}

const SFGLenum *MaterialChunkBase::getSFBackColorMaterial(void) const
{
    return &_sfBackColorMaterial;
}

#ifdef OSG_1_COMPAT
SFGLenum            *MaterialChunkBase::getSFBackColorMaterial(void)
{
    return this->editSFBackColorMaterial();
}
#endif





/*------------------------------ access -----------------------------------*/

UInt32 MaterialChunkBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        returnValue += _sfDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        returnValue += _sfAmbient.getBinSize();
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        returnValue += _sfSpecular.getBinSize();
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        returnValue += _sfEmission.getBinSize();
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        returnValue += _sfShininess.getBinSize();
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        returnValue += _sfLit.getBinSize();
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        returnValue += _sfColorMaterial.getBinSize();
    }
    if(FieldBits::NoField != (BackMaterialFieldMask & whichField))
    {
        returnValue += _sfBackMaterial.getBinSize();
    }
    if(FieldBits::NoField != (BackDiffuseFieldMask & whichField))
    {
        returnValue += _sfBackDiffuse.getBinSize();
    }
    if(FieldBits::NoField != (BackAmbientFieldMask & whichField))
    {
        returnValue += _sfBackAmbient.getBinSize();
    }
    if(FieldBits::NoField != (BackSpecularFieldMask & whichField))
    {
        returnValue += _sfBackSpecular.getBinSize();
    }
    if(FieldBits::NoField != (BackEmissionFieldMask & whichField))
    {
        returnValue += _sfBackEmission.getBinSize();
    }
    if(FieldBits::NoField != (BackShininessFieldMask & whichField))
    {
        returnValue += _sfBackShininess.getBinSize();
    }
    if(FieldBits::NoField != (BackColorMaterialFieldMask & whichField))
    {
        returnValue += _sfBackColorMaterial.getBinSize();
    }

    return returnValue;
}

void MaterialChunkBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackMaterialFieldMask & whichField))
    {
        _sfBackMaterial.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackDiffuseFieldMask & whichField))
    {
        _sfBackDiffuse.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackAmbientFieldMask & whichField))
    {
        _sfBackAmbient.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackSpecularFieldMask & whichField))
    {
        _sfBackSpecular.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackEmissionFieldMask & whichField))
    {
        _sfBackEmission.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackShininessFieldMask & whichField))
    {
        _sfBackShininess.copyToBin(pMem);
    }
    if(FieldBits::NoField != (BackColorMaterialFieldMask & whichField))
    {
        _sfBackColorMaterial.copyToBin(pMem);
    }
}

void MaterialChunkBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (DiffuseFieldMask & whichField))
    {
        _sfDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (AmbientFieldMask & whichField))
    {
        _sfAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SpecularFieldMask & whichField))
    {
        _sfSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (EmissionFieldMask & whichField))
    {
        _sfEmission.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ShininessFieldMask & whichField))
    {
        _sfShininess.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LitFieldMask & whichField))
    {
        _sfLit.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ColorMaterialFieldMask & whichField))
    {
        _sfColorMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackMaterialFieldMask & whichField))
    {
        _sfBackMaterial.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackDiffuseFieldMask & whichField))
    {
        _sfBackDiffuse.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackAmbientFieldMask & whichField))
    {
        _sfBackAmbient.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackSpecularFieldMask & whichField))
    {
        _sfBackSpecular.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackEmissionFieldMask & whichField))
    {
        _sfBackEmission.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackShininessFieldMask & whichField))
    {
        _sfBackShininess.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (BackColorMaterialFieldMask & whichField))
    {
        _sfBackColorMaterial.copyFromBin(pMem);
    }
}

//! create an empty new instance of the class, do not copy the prototype
MaterialChunkPtr MaterialChunkBase::createEmpty(void)
{
    MaterialChunkPtr returnValue;

    newPtr<MaterialChunk>(returnValue);

    return returnValue;
}

FieldContainerPtr MaterialChunkBase::shallowCopy(void) const
{
    MaterialChunkPtr returnValue;

    newPtr(returnValue, dynamic_cast<const MaterialChunk *>(this));

    return returnValue;
}



/*------------------------- constructors ----------------------------------*/

MaterialChunkBase::MaterialChunkBase(void) :
    Inherited(),
    _sfDiffuse                (Color4r(1.f,1.f,1.f,1.f)),
    _sfAmbient                (Color4r(.2f,.2f,.2f,1.f)),
    _sfSpecular               (Color4r(.5f,.5f,.5f,1.f)),
    _sfEmission               (Color4r(0.f,0.f,0.f,1.f)),
    _sfShininess              (Real(10.f)),
    _sfLit                    (bool(true)),
    _sfColorMaterial          (GLenum(GL_DIFFUSE)),
    _sfBackMaterial           (bool(false)),
    _sfBackDiffuse            (Color4r(1.f,1.f,1.f,0.f)),
    _sfBackAmbient            (Color4r(.2f,.2f,.2f,0.f)),
    _sfBackSpecular           (Color4r(.5f,.5f,.5f,0.f)),
    _sfBackEmission           (Color4r(0.f,0.f,0.f,0.f)),
    _sfBackShininess          (Real(10.f)),
    _sfBackColorMaterial      (GLenum(GL_DIFFUSE))
{
}

MaterialChunkBase::MaterialChunkBase(const MaterialChunkBase &source) :
    Inherited(source),
    _sfDiffuse                (source._sfDiffuse                ),
    _sfAmbient                (source._sfAmbient                ),
    _sfSpecular               (source._sfSpecular               ),
    _sfEmission               (source._sfEmission               ),
    _sfShininess              (source._sfShininess              ),
    _sfLit                    (source._sfLit                    ),
    _sfColorMaterial          (source._sfColorMaterial          ),
    _sfBackMaterial           (source._sfBackMaterial           ),
    _sfBackDiffuse            (source._sfBackDiffuse            ),
    _sfBackAmbient            (source._sfBackAmbient            ),
    _sfBackSpecular           (source._sfBackSpecular           ),
    _sfBackEmission           (source._sfBackEmission           ),
    _sfBackShininess          (source._sfBackShininess          ),
    _sfBackColorMaterial      (source._sfBackColorMaterial      )
{
}

/*-------------------------- destructors ----------------------------------*/

MaterialChunkBase::~MaterialChunkBase(void)
{
}


#ifdef OSG_MT_FIELDCONTAINERPTR
void MaterialChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo,
                                        UInt32             uiCopyOffset)
{
    this->execSync(static_cast<MaterialChunkBase *>(&oFrom),
                   whichField,
                   syncMode,
                   uiSyncInfo,
                   uiCopyOffset);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
void MaterialChunkBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<MaterialChunkBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif

#if 0
void MaterialChunkBase::execBeginEditV(ConstFieldMaskArg whichField,
                                       UInt32            uiAspect,
                                       UInt32            uiContainerSize)
{
    this->execBeginEdit(whichField, uiAspect, uiContainerSize);
}
#endif

#ifdef OSG_MT_CPTR_ASPECT
FieldContainerPtr MaterialChunkBase::createAspectCopy(void) const
{
    MaterialChunkPtr returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const MaterialChunk *>(this));

    return returnValue;
}
#endif

void MaterialChunkBase::resolveLinks(void)
{
    Inherited::resolveLinks();
}


OSG_END_NAMESPACE

#include "OSGSFieldAdaptor.ins"
#include "OSGMFieldAdaptor.ins"

OSG_BEGIN_NAMESPACE

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<MaterialChunkPtr>::_type("MaterialChunkPtr", "StateChunkPtr");
#endif

OSG_FIELDTRAITS_GETTYPE(MaterialChunkPtr)

OSG_FIELD_DLLEXPORT_DEF2(SFieldAdaptor, MaterialChunkPtr, SFFieldContainerPtr);
OSG_FIELD_DLLEXPORT_DEF2(MFieldAdaptor, MaterialChunkPtr, MFFieldContainerPtr);

OSG_END_NAMESPACE
