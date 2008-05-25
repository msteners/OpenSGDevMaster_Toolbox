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
 **     Do not change this file, changes should be done in the derived      **
 **     class CubeTextureChunk
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGCUBETEXTURECHUNKBASE_H_
#define _OSGCUBETEXTURECHUNKBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGSystemDef.h"

#include "OSGBaseTypes.h"

#include "OSGTextureChunk.h" // Parent

#include "OSGImageFields.h" // PosZImage type
#include "OSGImageFields.h" // PosXImage type
#include "OSGImageFields.h" // NegXImage type
#include "OSGImageFields.h" // PosYImage type
#include "OSGImageFields.h" // NegYImage type
#include "OSGBoolFields.h" // IsReflectionMap type

#include "OSGCubeTextureChunkFields.h"

OSG_BEGIN_NAMESPACE

class CubeTextureChunk;

//! \brief CubeTextureChunk Base Class.

class OSG_SYSTEM_DLLMAPPING CubeTextureChunkBase : public TextureChunk
{
  public:

    typedef TextureChunk Inherited;
    typedef TextureChunk ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(CubeTextureChunk);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        PosZImageFieldId = Inherited::NextFieldId,
        PosXImageFieldId = PosZImageFieldId + 1,
        NegXImageFieldId = PosXImageFieldId + 1,
        PosYImageFieldId = NegXImageFieldId + 1,
        NegYImageFieldId = PosYImageFieldId + 1,
        IsReflectionMapFieldId = NegYImageFieldId + 1,
        NextFieldId = IsReflectionMapFieldId + 1
    };

    static const OSG::BitVector PosZImageFieldMask =
        (TypeTraits<BitVector>::One << PosZImageFieldId);
    static const OSG::BitVector PosXImageFieldMask =
        (TypeTraits<BitVector>::One << PosXImageFieldId);
    static const OSG::BitVector NegXImageFieldMask =
        (TypeTraits<BitVector>::One << NegXImageFieldId);
    static const OSG::BitVector PosYImageFieldMask =
        (TypeTraits<BitVector>::One << PosYImageFieldId);
    static const OSG::BitVector NegYImageFieldMask =
        (TypeTraits<BitVector>::One << NegYImageFieldId);
    static const OSG::BitVector IsReflectionMapFieldMask =
        (TypeTraits<BitVector>::One << IsReflectionMapFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);

    /*---------------------------------------------------------------------*/
    /*! \name                    Class Get                                 */
    /*! \{                                                                 */

    static FieldContainerType &getClassType   (void);
    static UInt32              getClassTypeId (void);
    static UInt16              getClassGroupId(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                FieldContainer Get                            */
    /*! \{                                                                 */

    virtual       FieldContainerType &getType         (void);
    virtual const FieldContainerType &getType         (void) const;

    virtual       UInt32              getContainerSize(void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Get                                 */
    /*! \{                                                                 */

            const SFUnrecImagePtr     *getSFPosZImage      (void) const;
                  SFUnrecImagePtr     *editSFPosZImage      (void);
            const SFUnrecImagePtr     *getSFPosXImage      (void) const;
                  SFUnrecImagePtr     *editSFPosXImage      (void);
            const SFUnrecImagePtr     *getSFNegXImage      (void) const;
                  SFUnrecImagePtr     *editSFNegXImage      (void);
            const SFUnrecImagePtr     *getSFPosYImage      (void) const;
                  SFUnrecImagePtr     *editSFPosYImage      (void);
            const SFUnrecImagePtr     *getSFNegYImage      (void) const;
                  SFUnrecImagePtr     *editSFNegYImage      (void);

#ifdef OSG_1_GET_COMPAT
                  SFBool              *getSFIsReflectionMap (void);
#endif
                  SFBool              *editSFIsReflectionMap(void);
            const SFBool              *getSFIsReflectionMap (void) const;


                  Image * getPosZImage      (void) const;

                  Image * getPosXImage      (void) const;

                  Image * getNegXImage      (void) const;

                  Image * getPosYImage      (void) const;

                  Image * getNegYImage      (void) const;

#ifdef OSG_1_GET_COMPAT
                  bool                &getIsReflectionMap (void);
#endif
                  bool                &editIsReflectionMap(void);
            const bool                 getIsReflectionMap (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setPosZImage      (Image * const value);
            void setPosXImage      (Image * const value);
            void setNegXImage      (Image * const value);
            void setPosYImage      (Image * const value);
            void setNegYImage      (Image * const value);
            void setIsReflectionMap(const bool &value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Binary Access                              */
    /*! \{                                                                 */

    virtual UInt32 getBinSize (ConstFieldMaskArg  whichField);
    virtual void   copyToBin  (BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);
    virtual void   copyFromBin(BinaryDataHandler &pMem,
                               ConstFieldMaskArg  whichField);


    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Construction                               */
    /*! \{                                                                 */

    static  CubeTextureChunkTransitPtr  create          (void);
    static  CubeTextureChunk           *createEmpty     (void);

    static  CubeTextureChunkTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  CubeTextureChunk            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static void   classDescInserter(TypeObject &oType);
    static Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    SFUnrecImagePtr   _sfPosZImage;
    SFUnrecImagePtr   _sfPosXImage;
    SFUnrecImagePtr   _sfNegXImage;
    SFUnrecImagePtr   _sfPosYImage;
    SFUnrecImagePtr   _sfNegYImage;
    SFBool            _sfIsReflectionMap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    CubeTextureChunkBase(void);
    CubeTextureChunkBase(const CubeTextureChunkBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CubeTextureChunkBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const CubeTextureChunk *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandlePosZImage       (void) const;
    EditFieldHandlePtr editHandlePosZImage      (void);
    GetFieldHandlePtr  getHandlePosXImage       (void) const;
    EditFieldHandlePtr editHandlePosXImage      (void);
    GetFieldHandlePtr  getHandleNegXImage       (void) const;
    EditFieldHandlePtr editHandleNegXImage      (void);
    GetFieldHandlePtr  getHandlePosYImage       (void) const;
    EditFieldHandlePtr editHandlePosYImage      (void);
    GetFieldHandlePtr  getHandleNegYImage       (void) const;
    EditFieldHandlePtr editHandleNegYImage      (void);
    GetFieldHandlePtr  getHandleIsReflectionMap (void) const;
    EditFieldHandlePtr editHandleIsReflectionMap(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual void execSyncV(      FieldContainer    &oFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);

            void execSync (      CubeTextureChunkBase *pFrom,
                                 ConstFieldMaskArg  whichField,
                                 AspectOffsetStore &oOffsets,
                                 ConstFieldMaskArg  syncMode  ,
                           const UInt32             uiSyncInfo);
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Aspect Create                            */
    /*! \{                                                                 */

#ifdef OSG_MT_CPTR_ASPECT
    virtual FieldContainer *createAspectCopy(void) const;
#endif

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Edit                                   */
    /*! \{                                                                 */
    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Sync                                   */
    /*! \{                                                                 */

    virtual void resolveLinks(void);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:
    /*---------------------------------------------------------------------*/

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CubeTextureChunkBase &source);
};

typedef CubeTextureChunkBase *CubeTextureChunkBaseP;

OSG_END_NAMESPACE

#endif /* _OSGCUBETEXTURECHUNKBASE_H_ */