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


#ifndef _OSGPRIMEMATERIALFIELDS_H_
#define _OSGPRIMEMATERIALFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class PrimeMaterial;

OSG_GEN_CONTAINERPTR(PrimeMaterial);

/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<PrimeMaterial *> :
    public FieldTraitsFCPtrBase<PrimeMaterial *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<PrimeMaterial *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFPrimeMaterialPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFPrimeMaterialPtr"; }
};

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakPrimeMaterialPtr"; 
}

template<> inline
const Char8 *FieldTraits<PrimeMaterial *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdPrimeMaterialPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<PrimeMaterial *,
                      RecordedRefCountPolicy  > SFRecPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<PrimeMaterial *,
                      UnrecordedRefCountPolicy> SFUnrecPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<PrimeMaterial *,
                      WeakRefCountPolicy      > SFWeakPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<PrimeMaterial *,
                      NoRefCountPolicy        > SFUncountedPrimeMaterialPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<PrimeMaterial *,
                      RecordedRefCountPolicy  > MFRecPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<PrimeMaterial *,
                      UnrecordedRefCountPolicy> MFUnrecPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<PrimeMaterial *,
                      WeakRefCountPolicy      > MFWeakPrimeMaterialPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<PrimeMaterial *,
                      NoRefCountPolicy        > MFUncountedPrimeMaterialPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecPrimeMaterialPtr : 
    public PointerSField<PrimeMaterial *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecPrimeMaterialPtr : 
    public PointerSField<PrimeMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakPrimeMaterialPtr :
    public PointerSField<PrimeMaterial *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedPrimeMaterialPtr :
    public PointerSField<PrimeMaterial *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecPrimeMaterialPtr :
    public PointerMField<PrimeMaterial *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecPrimeMaterialPtr :
    public PointerMField<PrimeMaterial *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakPrimeMaterialPtr :
    public PointerMField<PrimeMaterial *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedPrimeMaterialPtr :
    public PointerMField<PrimeMaterial *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGPRIMEMATERIALFIELDS_H_ */
