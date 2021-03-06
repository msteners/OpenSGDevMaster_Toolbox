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


#ifndef _OSGMANIPULATORFIELDS_H_
#define _OSGMANIPULATORFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGContribGUIDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class Manipulator;

OSG_GEN_CONTAINERPTR(Manipulator);

/*! \ingroup GrpContribGUIFieldTraits
    \ingroup GrpLibOSGContribGUI
 */
template <>
struct FieldTraits<Manipulator *> :
    public FieldTraitsFCPtrBase<Manipulator *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<Manipulator *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CONTRIBGUI_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFManipulatorPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFManipulatorPtr"; }
};

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakManipulatorPtr"; 
}

template<> inline
const Char8 *FieldTraits<Manipulator *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdManipulatorPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpContribGUIFieldSFields */
typedef PointerSField<Manipulator *,
                      RecordedRefCountPolicy  > SFRecManipulatorPtr;
/*! \ingroup GrpContribGUIFieldSFields */
typedef PointerSField<Manipulator *,
                      UnrecordedRefCountPolicy> SFUnrecManipulatorPtr;
/*! \ingroup GrpContribGUIFieldSFields */
typedef PointerSField<Manipulator *,
                      WeakRefCountPolicy      > SFWeakManipulatorPtr;
/*! \ingroup GrpContribGUIFieldSFields */
typedef PointerSField<Manipulator *,
                      NoRefCountPolicy        > SFUncountedManipulatorPtr;


/*! \ingroup GrpContribGUIFieldMFields */
typedef PointerMField<Manipulator *,
                      RecordedRefCountPolicy  > MFRecManipulatorPtr;
/*! \ingroup GrpContribGUIFieldMFields */
typedef PointerMField<Manipulator *,
                      UnrecordedRefCountPolicy> MFUnrecManipulatorPtr;
/*! \ingroup GrpContribGUIFieldMFields */
typedef PointerMField<Manipulator *,
                      WeakRefCountPolicy      > MFWeakManipulatorPtr;
/*! \ingroup GrpContribGUIFieldMFields */
typedef PointerMField<Manipulator *,
                      NoRefCountPolicy        > MFUncountedManipulatorPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpContribGUIFieldSFields \ingroup GrpLibOSGContribGUI */
struct SFRecManipulatorPtr : 
    public PointerSField<Manipulator *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpContribGUIFieldSFields \ingroup GrpLibOSGContribGUI */
struct SFUnrecManipulatorPtr : 
    public PointerSField<Manipulator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribGUIFieldSFields \ingroup GrpLibOSGContribGUI */
struct SFWeakManipulatorPtr :
    public PointerSField<Manipulator *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpContribGUIFieldSFields \ingroup GrpLibOSGContribGUI */
struct SFUncountedManipulatorPtr :
    public PointerSField<Manipulator *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpContribGUIFieldMFields \ingroup GrpLibOSGContribGUI */
struct MFRecManipulatorPtr :
    public PointerMField<Manipulator *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpContribGUIFieldMFields \ingroup GrpLibOSGContribGUI */
struct MFUnrecManipulatorPtr :
    public PointerMField<Manipulator *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpContribGUIFieldMFields \ingroup GrpLibOSGContribGUI */
struct MFWeakManipulatorPtr :
    public PointerMField<Manipulator *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpContribGUIFieldMFields \ingroup GrpLibOSGContribGUI */
struct MFUncountedManipulatorPtr :
    public PointerMField<Manipulator *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGMANIPULATORFIELDS_H_ */
