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


#ifndef _OSGRENDERBUFFERFIELDS_H_
#define _OSGRENDERBUFFERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class RenderBuffer;

OSG_GEN_CONTAINERPTR(RenderBuffer);

/*! \ingroup GrpSystemFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<RenderBuffer *> :
    public FieldTraitsFCPtrBase<RenderBuffer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<RenderBuffer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFRenderBufferPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFRenderBufferPtr"; }
};

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakRenderBufferPtr"; 
}

template<> inline
const Char8 *FieldTraits<RenderBuffer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdRenderBufferPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<RenderBuffer *,
                      RecordedRefCountPolicy  > SFRecRenderBufferPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<RenderBuffer *,
                      UnrecordedRefCountPolicy> SFUnrecRenderBufferPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<RenderBuffer *,
                      WeakRefCountPolicy      > SFWeakRenderBufferPtr;
/*! \ingroup GrpSystemFieldSFields */
typedef PointerSField<RenderBuffer *,
                      NoRefCountPolicy        > SFUncountedRenderBufferPtr;


/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<RenderBuffer *,
                      RecordedRefCountPolicy  > MFRecRenderBufferPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<RenderBuffer *,
                      UnrecordedRefCountPolicy> MFUnrecRenderBufferPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<RenderBuffer *,
                      WeakRefCountPolicy      > MFWeakRenderBufferPtr;
/*! \ingroup GrpSystemFieldMFields */
typedef PointerMField<RenderBuffer *,
                      NoRefCountPolicy        > MFUncountedRenderBufferPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecRenderBufferPtr : 
    public PointerSField<RenderBuffer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecRenderBufferPtr : 
    public PointerSField<RenderBuffer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakRenderBufferPtr :
    public PointerSField<RenderBuffer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedRenderBufferPtr :
    public PointerSField<RenderBuffer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecRenderBufferPtr :
    public PointerMField<RenderBuffer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecRenderBufferPtr :
    public PointerMField<RenderBuffer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakRenderBufferPtr :
    public PointerMField<RenderBuffer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedRenderBufferPtr :
    public PointerMField<RenderBuffer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGRENDERBUFFERFIELDS_H_ */
