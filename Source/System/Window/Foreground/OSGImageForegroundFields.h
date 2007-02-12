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


#ifndef _OSGIMAGEFOREGROUNDFIELDS_H_
#define _OSGIMAGEFOREGROUNDFIELDS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGConfig.h"
#include "OSGWindowDef.h"

#include "OSGForegroundFields.h"

#include "OSGSFieldAdaptor.h"
#include "OSGMFieldAdaptor.h"


OSG_BEGIN_NAMESPACE

class ImageForeground;

#if !defined(OSG_DO_DOC) // created as a dummy class, remove to prevent doubles
//! ImageForegroundPtr

typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjPtr         ImageForegroundPtr;
typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjPtrConst    ImageForegroundPtrConst;
typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjConstPtr    ImageForegroundConstPtr;
typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjPtrArg      ImageForegroundPtrArg;
typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjConstPtrArg ImageForegroundConstPtrArg;
typedef PointerFwdBuilder<ForegroundPtr,
                          ForegroundConstPtr,
                          ImageForeground>::ObjPtrConstArg ImageForegroundPtrConstArg;

#endif

#if !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)
/*! \ingroup GrpWindowFieldTraits
 */
#if !defined(OSG_DOC_DEV_TRAITS)
/*! \hideinhierarchy */
#endif

template <>
struct FieldTraits<ImageForegroundPtr> :
    public FieldTraitsTemplateBase<ImageForegroundPtr>
{
  private:

    static DataType             _type;

  public:

    typedef FieldTraits<ImageForegroundPtr>  Self;

    enum                        { Convertible = NotConvertible };

    static OSG_WINDOW_DLLMAPPING DataType &getType(void);

    static const char *getSName(void) { return "SFImageForegroundPtr"; }
    static const char *getMName(void) { return "MFImageForegroundPtr"; }
};

#if !defined(OSG_DOC_DEV_TRAITS)
/*! \class  FieldTraitsTemplateBase<ImageForegroundPtr, 0>
    \hideinhierarchy
 */
#endif

#endif // !defined(OSG_DO_DOC) || (OSG_DOC_LEVEL >= 3)


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldSingle */

typedef SFieldAdaptor<ImageForegroundPtr, SFFieldContainerPtr> SFImageForegroundPtr;
#endif

#ifndef OSG_COMPILEIMAGEFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(SField, ImageForegroundPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

#if !defined(OSG_DO_DOC) || defined(OSG_DOC_FIELD_TYPEDEFS)
/*! \ingroup GrpWindowFieldMulti */

typedef MFieldAdaptor<ImageForegroundPtr, MFFieldContainerPtr> MFImageForegroundPtr;
#endif

#ifndef OSG_COMPILEIMAGEFOREGROUNDINST
OSG_FIELD_DLLEXPORT_DECL1(MField, ImageForegroundPtr, OSG_WINDOW_DLLTMPLMAPPING)
#endif

OSG_END_NAMESPACE

#define OSGIMAGEFOREGROUNDFIELDS_HEADER_CVSID "@(#)$Id$"

#endif /* _OSGIMAGEFOREGROUNDFIELDS_H_ */
