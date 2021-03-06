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


#ifndef _OSGSHADERPARAMETERVEC2FFIELDS_H_
#define _OSGSHADERPARAMETERVEC2FFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGStateDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderParameterVec2f;

OSG_GEN_CONTAINERPTR(ShaderParameterVec2f);

/*! \ingroup GrpStateFieldTraits
    \ingroup GrpLibOSGState
 */
template <>
struct FieldTraits<ShaderParameterVec2f *> :
    public FieldTraitsFCPtrBase<ShaderParameterVec2f *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderParameterVec2f *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_STATE_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderParameterVec2fPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderParameterVec2fPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderParameterVec2fPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderParameterVec2f *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderParameterVec2fPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterVec2f *,
                      RecordedRefCountPolicy  > SFRecShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterVec2f *,
                      UnrecordedRefCountPolicy> SFUnrecShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterVec2f *,
                      WeakRefCountPolicy      > SFWeakShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldSFields */
typedef PointerSField<ShaderParameterVec2f *,
                      NoRefCountPolicy        > SFUncountedShaderParameterVec2fPtr;


/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterVec2f *,
                      RecordedRefCountPolicy  > MFRecShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterVec2f *,
                      UnrecordedRefCountPolicy> MFUnrecShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterVec2f *,
                      WeakRefCountPolicy      > MFWeakShaderParameterVec2fPtr;
/*! \ingroup GrpStateFieldMFields */
typedef PointerMField<ShaderParameterVec2f *,
                      NoRefCountPolicy        > MFUncountedShaderParameterVec2fPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFRecShaderParameterVec2fPtr : 
    public PointerSField<ShaderParameterVec2f *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUnrecShaderParameterVec2fPtr : 
    public PointerSField<ShaderParameterVec2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFWeakShaderParameterVec2fPtr :
    public PointerSField<ShaderParameterVec2f *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpStateFieldSFields \ingroup GrpLibOSGState */
struct SFUncountedShaderParameterVec2fPtr :
    public PointerSField<ShaderParameterVec2f *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFRecShaderParameterVec2fPtr :
    public PointerMField<ShaderParameterVec2f *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUnrecShaderParameterVec2fPtr :
    public PointerMField<ShaderParameterVec2f *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFWeakShaderParameterVec2fPtr :
    public PointerMField<ShaderParameterVec2f *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpStateFieldMFields \ingroup GrpLibOSGState */
struct MFUncountedShaderParameterVec2fPtr :
    public PointerMField<ShaderParameterVec2f *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERPARAMETERVEC2FFIELDS_H_ */
