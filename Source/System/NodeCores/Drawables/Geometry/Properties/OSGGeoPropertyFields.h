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


#ifndef _OSGGEOPROPERTYFIELDS_H_
#define _OSGGEOPROPERTYFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GeoProperty;

OSG_GEN_CONTAINERPTR(GeoProperty);

/*! \ingroup GrpDrawableFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<GeoProperty *> :
    public FieldTraitsFCPtrBase<GeoProperty *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoProperty *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoPropertyPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoPropertyPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoPropertyPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoProperty *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoPropertyPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoProperty *,
                      RecordedRefCountPolicy  > SFRecGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoProperty *,
                      UnrecordedRefCountPolicy> SFUnrecGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoProperty *,
                      WeakRefCountPolicy      > SFWeakGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoProperty *,
                      NoRefCountPolicy        > SFUncountedGeoPropertyPtr;


/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoProperty *,
                      RecordedRefCountPolicy  > MFRecGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoProperty *,
                      UnrecordedRefCountPolicy> MFUnrecGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoProperty *,
                      WeakRefCountPolicy      > MFWeakGeoPropertyPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoProperty *,
                      NoRefCountPolicy        > MFUncountedGeoPropertyPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeoPropertyPtr : 
    public PointerSField<GeoProperty *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeoPropertyPtr : 
    public PointerSField<GeoProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeoPropertyPtr :
    public PointerSField<GeoProperty *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeoPropertyPtr :
    public PointerSField<GeoProperty *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeoPropertyPtr :
    public PointerMField<GeoProperty *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOPROPERTYFIELDS_H_ */
