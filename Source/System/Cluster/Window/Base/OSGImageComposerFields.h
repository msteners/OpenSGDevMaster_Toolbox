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


#ifndef _OSGIMAGECOMPOSERFIELDS_H_
#define _OSGIMAGECOMPOSERFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGClusterDef.h"

#include "OSGFieldContainerFields.h"
#include "OSGPointerSField.h"
#include "OSGPointerMField.h"


OSG_BEGIN_NAMESPACE

class ImageComposer;

OSG_GEN_CONTAINERPTR(ImageComposer);

/*! \ingroup GrpClusterFieldTraits
    \ingroup GrpLibOSGCluster
 */
template <>
struct FieldTraits<ImageComposer *> :
    public FieldTraitsFCPtrBase<ImageComposer *>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ImageComposer *>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_CLUSTER_DLLMAPPING DataType &getType(void);

    template<typename RefCountPolicy> inline
    static const Char8    *getSName     (void);

//    static const char *getSName(void) { return "SFImageComposerPtr"; }
    template<typename RefCountPolicy> inline
    static const Char8    *getMName     (void);

//    static const char *getMName(void) { return "MFImageComposerPtr"; }
};

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getSName<RecordedRefCountPolicy>(void)
{
    return "SFRecImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getSName<UnrecordedRefCountPolicy>(void)
{
    return "SFUnrecImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getSName<WeakRefCountPolicy>(void)
{
    return "SFWeakImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getSName<NoRefCountPolicy>(void)
{
    return "SFUnrefdImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getMName<RecordedRefCountPolicy>(void)
{
    return "MFRecImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getMName<UnrecordedRefCountPolicy>(void)
{
    return "MFUnrecImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getMName<WeakRefCountPolicy>(void)
{
    return "MFWeakImageComposerPtr"; 
}

template<> inline
const Char8 *FieldTraits<ImageComposer *, 0>::getMName<NoRefCountPolicy>(void)
{
    return "MFUnrefdImageComposerPtr"; 
}


#ifndef DOXYGEN_SHOULD_SKIP_THIS
/*! \ingroup GrpClusterFieldSFields */
typedef PointerSField<ImageComposer *,
                      RecordedRefCountPolicy  > SFRecImageComposerPtr;
/*! \ingroup GrpClusterFieldSFields */
typedef PointerSField<ImageComposer *,
                      UnrecordedRefCountPolicy> SFUnrecImageComposerPtr;
/*! \ingroup GrpClusterFieldSFields */
typedef PointerSField<ImageComposer *,
                      WeakRefCountPolicy      > SFWeakImageComposerPtr;
/*! \ingroup GrpClusterFieldSFields */
typedef PointerSField<ImageComposer *,
                      NoRefCountPolicy        > SFUncountedImageComposerPtr;


/*! \ingroup GrpClusterFieldMFields */
typedef PointerMField<ImageComposer *,
                      RecordedRefCountPolicy  > MFRecImageComposerPtr;
/*! \ingroup GrpClusterFieldMFields */
typedef PointerMField<ImageComposer *,
                      UnrecordedRefCountPolicy> MFUnrecImageComposerPtr;
/*! \ingroup GrpClusterFieldMFields */
typedef PointerMField<ImageComposer *,
                      WeakRefCountPolicy      > MFWeakImageComposerPtr;
/*! \ingroup GrpClusterFieldMFields */
typedef PointerMField<ImageComposer *,
                      NoRefCountPolicy        > MFUncountedImageComposerPtr;




#else // these are the doxygen hacks

/*! \ingroup GrpClusterFieldSFields \ingroup GrpLibOSGCluster */
struct SFRecImageComposerPtr : 
    public PointerSField<ImageComposer *,
                         RecordedRefCountPolicy> {};
/*! \ingroup GrpClusterFieldSFields \ingroup GrpLibOSGCluster */
struct SFUnrecImageComposerPtr : 
    public PointerSField<ImageComposer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpClusterFieldSFields \ingroup GrpLibOSGCluster */
struct SFWeakImageComposerPtr :
    public PointerSField<ImageComposer *,
                         WeakRefCountPolicy> {};
/*! \ingroup GrpClusterFieldSFields \ingroup GrpLibOSGCluster */
struct SFUncountedImageComposerPtr :
    public PointerSField<ImageComposer *,
                         NoRefCountPolicy> {};


/*! \ingroup GrpClusterFieldMFields \ingroup GrpLibOSGCluster */
struct MFRecImageComposerPtr :
    public PointerMField<ImageComposer *,
                         RecordedRefCountPolicy  > {};
/*! \ingroup GrpClusterFieldMFields \ingroup GrpLibOSGCluster */
struct MFUnrecImageComposerPtr :
    public PointerMField<ImageComposer *,
                         UnrecordedRefCountPolicy> {};
/*! \ingroup GrpClusterFieldMFields \ingroup GrpLibOSGCluster */
struct MFWeakImageComposerPtr :
    public PointerMField<ImageComposer *,
                         WeakRefCountPolicy      > {};
/*! \ingroup GrpClusterFieldMFields \ingroup GrpLibOSGCluster */
struct MFUncountedImageComposerPtr :
    public PointerMField<ImageComposer *,
                         NoRefCountPolicy        > {};



#endif // these are the doxygen hacks

OSG_END_NAMESPACE

#endif /* _OSGIMAGECOMPOSERFIELDS_H_ */
