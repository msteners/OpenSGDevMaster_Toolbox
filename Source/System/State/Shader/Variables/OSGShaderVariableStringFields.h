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


#ifndef _OSGSHADERVARIABLESTRINGFIELDS_H_
#define _OSGSHADERVARIABLESTRINGFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ShaderVariableString;

OSG_GEN_CONTAINERPTR(ShaderVariableString);

/*! \ingroup GrpSystemShaderFieldTraits
    \ingroup GrpLibOSGSystem
 */
template <>
struct FieldTraits<ShaderVariableString *> :
    public FieldTraitsFCPtrBase<ShaderVariableString *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ShaderVariableString *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_SYSTEM_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFShaderVariableStringPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFShaderVariableStringPtr"; }
};

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakShaderVariableStringPtr"; 
}

template<> inline
const Char8 *FieldTraits<ShaderVariableString *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdShaderVariableStringPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableString *,
                      RecordedRefCountPolicy  > SFRecShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableString *,
                      UnrecordedRefCountPolicy> SFUnrecShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableString *,
                      WeakRefCountPolicy      > SFWeakShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldSFields */
typedef PointerSField<ShaderVariableString *,
                      NoRefCountPolicy        > SFUncountedShaderVariableStringPtr;


/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableString *,
                      RecordedRefCountPolicy  > MFRecShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableString *,
                      UnrecordedRefCountPolicy> MFUnrecShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableString *,
                      WeakRefCountPolicy      > MFWeakShaderVariableStringPtr;
/*! \ingroup GrpSystemShaderFieldMFields */
typedef PointerMField<ShaderVariableString *,
                      NoRefCountPolicy        > MFUncountedShaderVariableStringPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFRecShaderVariableStringPtr : 
    public PointerSField<ShaderVariableString *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUnrecShaderVariableStringPtr : 
    public PointerSField<ShaderVariableString *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFWeakShaderVariableStringPtr :
    public PointerSField<ShaderVariableString *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldSFields \ingroup GrpLibOSGSystem */
struct SFUncountedShaderVariableStringPtr :
    public PointerSField<ShaderVariableString *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFRecShaderVariableStringPtr :
    public PointerMField<ShaderVariableString *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUnrecShaderVariableStringPtr :
    public PointerMField<ShaderVariableString *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFWeakShaderVariableStringPtr :
    public PointerMField<ShaderVariableString *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpSystemShaderFieldMFields \ingroup GrpLibOSGSystem */
struct MFUncountedShaderVariableStringPtr :
    public PointerMField<ShaderVariableString *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGSHADERVARIABLESTRINGFIELDS_H_ */
