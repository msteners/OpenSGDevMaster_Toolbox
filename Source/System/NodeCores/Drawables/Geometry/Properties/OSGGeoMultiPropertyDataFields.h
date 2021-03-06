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


#ifndef _OSGGEOMULTIPROPERTYDATAFIELDS_H_
#define _OSGGEOMULTIPROPERTYDATAFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGDrawableDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class GeoMultiPropertyData;

OSG_GEN_CONTAINERPTR(GeoMultiPropertyData);

/*! \ingroup GrpDrawableFieldTraits
    \ingroup GrpLibOSGDrawable
 */
template <>
struct FieldTraits<GeoMultiPropertyData *> :
    public FieldTraitsFCPtrBase<GeoMultiPropertyData *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<GeoMultiPropertyData *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_DRAWABLE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFGeoMultiPropertyDataPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFGeoMultiPropertyDataPtr"; }
};

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakGeoMultiPropertyDataPtr"; 
}

template<> inline
const Char8 *FieldTraits<GeoMultiPropertyData *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdGeoMultiPropertyDataPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoMultiPropertyData *,
                      RecordedRefCountPolicy  > SFRecGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoMultiPropertyData *,
                      UnrecordedRefCountPolicy> SFUnrecGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoMultiPropertyData *,
                      WeakRefCountPolicy      > SFWeakGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldSFields */
typedef PointerSField<GeoMultiPropertyData *,
                      NoRefCountPolicy        > SFUncountedGeoMultiPropertyDataPtr;


/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoMultiPropertyData *,
                      RecordedRefCountPolicy  > MFRecGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoMultiPropertyData *,
                      UnrecordedRefCountPolicy> MFUnrecGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoMultiPropertyData *,
                      WeakRefCountPolicy      > MFWeakGeoMultiPropertyDataPtr;
/*! \ingroup GrpDrawableFieldMFields */
typedef PointerMField<GeoMultiPropertyData *,
                      NoRefCountPolicy        > MFUncountedGeoMultiPropertyDataPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFRecGeoMultiPropertyDataPtr : 
    public PointerSField<GeoMultiPropertyData *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUnrecGeoMultiPropertyDataPtr : 
    public PointerSField<GeoMultiPropertyData *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFWeakGeoMultiPropertyDataPtr :
    public PointerSField<GeoMultiPropertyData *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldSFields \ingroup GrpLibOSGDrawable */
struct SFUncountedGeoMultiPropertyDataPtr :
    public PointerSField<GeoMultiPropertyData *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFRecGeoMultiPropertyDataPtr :
    public PointerMField<GeoMultiPropertyData *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUnrecGeoMultiPropertyDataPtr :
    public PointerMField<GeoMultiPropertyData *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFWeakGeoMultiPropertyDataPtr :
    public PointerMField<GeoMultiPropertyData *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpDrawableFieldMFields \ingroup GrpLibOSGDrawable */
struct MFUncountedGeoMultiPropertyDataPtr :
    public PointerMField<GeoMultiPropertyData *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGGEOMULTIPROPERTYDATAFIELDS_H_ */
