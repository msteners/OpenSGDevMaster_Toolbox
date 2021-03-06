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
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGMATERIALCHUNKFIELDS_H_
#define _OSGMATERIALCHUNKFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class MaterialChunk;

OSG_GEN_CONTAINERPTR(MaterialChunk);

/*! \ingroup GrpSystemStateFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<MaterialChunk *> :
    public FieldTraitsFCPtrBase<MaterialChunk *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<MaterialChunk *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFMaterialChunkPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFMaterialChunkPtr"; }
};

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakMaterialChunkPtr"; 
}

template<> inline
const Char8 *FieldTraits<MaterialChunk *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdMaterialChunkPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MaterialChunk *,
                      RecordedRefCountPolicy  > SFRecMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MaterialChunk *,
                      UnrecordedRefCountPolicy> SFUnrecMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MaterialChunk *,
                      WeakRefCountPolicy      > SFWeakMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldSFields */
typedef PointerSField<MaterialChunk *,
                      NoRefCountPolicy        > SFUncountedMaterialChunkPtr;


/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MaterialChunk *,
                      RecordedRefCountPolicy  > MFRecMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MaterialChunk *,
                      UnrecordedRefCountPolicy> MFUnrecMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MaterialChunk *,
                      WeakRefCountPolicy      > MFWeakMaterialChunkPtr;
/*! \ingroup GrpSystemStateFieldMFields */
typedef PointerMField<MaterialChunk *,
                      NoRefCountPolicy        > MFUncountedMaterialChunkPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecMaterialChunkPtr : 
    public PointerSField<MaterialChunk *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecMaterialChunkPtr : 
    public PointerSField<MaterialChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakMaterialChunkPtr :
    public PointerSField<MaterialChunk *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedMaterialChunkPtr :
    public PointerSField<MaterialChunk *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecMaterialChunkPtr :
    public PointerMField<MaterialChunk *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecMaterialChunkPtr :
    public PointerMField<MaterialChunk *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakMaterialChunkPtr :
    public PointerMField<MaterialChunk *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemStateFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedMaterialChunkPtr :
    public PointerMField<MaterialChunk *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMATERIALCHUNKFIELDS_H_ */
