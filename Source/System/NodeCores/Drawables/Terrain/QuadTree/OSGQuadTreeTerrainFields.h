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


#ifndef _OSGQUADTREETERRAINFIELDS_H_
#define _OSGQUADTREETERRAINFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class QuadTreeTerrain;

OSG_GEN_CONTAINERPTR(QuadTreeTerrain);

/*! \ingroup GrpDrawableFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<QuadTreeTerrain *> :
    public FieldTraitsFCPtrBase<QuadTreeTerrain *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<QuadTreeTerrain *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFQuadTreeTerrainPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFQuadTreeTerrainPtr"; }
};

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakQuadTreeTerrainPtr"; 
}

template<> inline
const Char8 *FieldTraits<QuadTreeTerrain *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdQuadTreeTerrainPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<QuadTreeTerrain *,
                      RecordedRefCountPolicy  > SFRecQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<QuadTreeTerrain *,
                      UnrecordedRefCountPolicy> SFUnrecQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<QuadTreeTerrain *,
                      WeakRefCountPolicy      > SFWeakQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<QuadTreeTerrain *,
                      NoRefCountPolicy        > SFUncountedQuadTreeTerrainPtr;


/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<QuadTreeTerrain *,
                      RecordedRefCountPolicy  > MFRecQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<QuadTreeTerrain *,
                      UnrecordedRefCountPolicy> MFUnrecQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<QuadTreeTerrain *,
                      WeakRefCountPolicy      > MFWeakQuadTreeTerrainPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<QuadTreeTerrain *,
                      NoRefCountPolicy        > MFUncountedQuadTreeTerrainPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecQuadTreeTerrainPtr : 
    public PointerSField<QuadTreeTerrain *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecQuadTreeTerrainPtr : 
    public PointerSField<QuadTreeTerrain *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakQuadTreeTerrainPtr :
    public PointerSField<QuadTreeTerrain *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedQuadTreeTerrainPtr :
    public PointerSField<QuadTreeTerrain *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecQuadTreeTerrainPtr :
    public PointerMField<QuadTreeTerrain *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecQuadTreeTerrainPtr :
    public PointerMField<QuadTreeTerrain *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakQuadTreeTerrainPtr :
    public PointerMField<QuadTreeTerrain *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedQuadTreeTerrainPtr :
    public PointerMField<QuadTreeTerrain *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGQUADTREETERRAINFIELDS_H_ */
