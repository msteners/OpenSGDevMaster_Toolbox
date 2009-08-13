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
 **     class ShaderShadowMapEngineData
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSHADERSHADOWMAPENGINEDATABASE_H_
#define _OSGSHADERSHADOWMAPENGINEDATABASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGGroupDef.h"

//#include "OSGBaseTypes.h"

#include "OSGStageData.h" // Parent

#include "OSGFrameBufferObjectFields.h" // RenderTargets type
#include "OSGTextureBufferFields.h" // ShadowTexBuffers type
#include "OSGTextureObjChunkFields.h" // ShadowTexChunk type
#include "OSGImageFields.h" // ShadowTexImage type
#include "OSGChunkMaterialFields.h" // LightPassMaterials type
#include "OSGBackgroundFields.h" // Background type

#include "OSGShaderShadowMapEngineDataFields.h"

OSG_BEGIN_NAMESPACE

class ShaderShadowMapEngineData;

//! \brief ShaderShadowMapEngineData Base Class.

class OSG_GROUP_DLLMAPPING ShaderShadowMapEngineDataBase : public StageData
{
  public:

    typedef StageData Inherited;
    typedef StageData ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(ShaderShadowMapEngineData);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        RenderTargetsFieldId = Inherited::NextFieldId,
        ShadowTexBuffersFieldId = RenderTargetsFieldId + 1,
        ShadowTexChunkFieldId = ShadowTexBuffersFieldId + 1,
        ShadowTexImageFieldId = ShadowTexChunkFieldId + 1,
        LightPassMaterialsFieldId = ShadowTexImageFieldId + 1,
        BackgroundFieldId = LightPassMaterialsFieldId + 1,
        NextFieldId = BackgroundFieldId + 1
    };

    static const OSG::BitVector RenderTargetsFieldMask =
        (TypeTraits<BitVector>::One << RenderTargetsFieldId);
    static const OSG::BitVector ShadowTexBuffersFieldMask =
        (TypeTraits<BitVector>::One << ShadowTexBuffersFieldId);
    static const OSG::BitVector ShadowTexChunkFieldMask =
        (TypeTraits<BitVector>::One << ShadowTexChunkFieldId);
    static const OSG::BitVector ShadowTexImageFieldMask =
        (TypeTraits<BitVector>::One << ShadowTexImageFieldId);
    static const OSG::BitVector LightPassMaterialsFieldMask =
        (TypeTraits<BitVector>::One << LightPassMaterialsFieldId);
    static const OSG::BitVector BackgroundFieldMask =
        (TypeTraits<BitVector>::One << BackgroundFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef MFUnrecFrameBufferObjectPtr MFRenderTargetsType;
    typedef MFUnrecTextureBufferPtr MFShadowTexBuffersType;
    typedef SFUnrecTextureObjChunkPtr SFShadowTexChunkType;
    typedef SFUnrecImagePtr   SFShadowTexImageType;
    typedef MFUnrecChunkMaterialPtr MFLightPassMaterialsType;
    typedef SFUnrecBackgroundPtr SFBackgroundType;

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

            const MFUnrecFrameBufferObjectPtr *getMFRenderTargets  (void) const;
                  MFUnrecFrameBufferObjectPtr *editMFRenderTargets  (void);
            const MFUnrecTextureBufferPtr *getMFShadowTexBuffers(void) const;
                  MFUnrecTextureBufferPtr *editMFShadowTexBuffers(void);
            const SFUnrecTextureObjChunkPtr *getSFShadowTexChunk (void) const;
                  SFUnrecTextureObjChunkPtr *editSFShadowTexChunk (void);
            const SFUnrecImagePtr     *getSFShadowTexImage (void) const;
                  SFUnrecImagePtr     *editSFShadowTexImage (void);
            const MFUnrecChunkMaterialPtr *getMFLightPassMaterials(void) const;
                  MFUnrecChunkMaterialPtr *editMFLightPassMaterials(void);
            const SFUnrecBackgroundPtr *getSFBackground     (void) const;
                  SFUnrecBackgroundPtr *editSFBackground     (void);


                  FrameBufferObject * getRenderTargets  (const UInt32 index) const;

                  TextureBuffer * getShadowTexBuffers(const UInt32 index) const;

                  TextureObjChunk * getShadowTexChunk (void) const;

                  Image * getShadowTexImage (void) const;

                  ChunkMaterial * getLightPassMaterials(const UInt32 index) const;

                  Background * getBackground     (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setShadowTexChunk (TextureObjChunk * const value);
            void setShadowTexImage (Image * const value);
            void setBackground     (Background * const value);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr Field Set                                 */
    /*! \{                                                                 */

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                Ptr MField Set                                */
    /*! \{                                                                 */

    void pushToRenderTargets           (FrameBufferObject * const value   );
    void assignRenderTargets          (const MFUnrecFrameBufferObjectPtr &value);
    void removeFromRenderTargets (UInt32               uiIndex );
    void removeObjFromRenderTargets(FrameBufferObject * const value   );
    void clearRenderTargets            (void                         );

    void pushToShadowTexBuffers           (TextureBuffer * const value   );
    void assignShadowTexBuffers          (const MFUnrecTextureBufferPtr &value);
    void removeFromShadowTexBuffers (UInt32               uiIndex );
    void removeObjFromShadowTexBuffers(TextureBuffer * const value   );
    void clearShadowTexBuffers            (void                         );

    void pushToLightPassMaterials           (ChunkMaterial * const value   );
    void assignLightPassMaterials          (const MFUnrecChunkMaterialPtr &value);
    void removeFromLightPassMaterials (UInt32               uiIndex );
    void removeObjFromLightPassMaterials(ChunkMaterial * const value   );
    void clearLightPassMaterials            (void                         );

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

    static  ShaderShadowMapEngineDataTransitPtr  create          (void);
    static  ShaderShadowMapEngineData           *createEmpty     (void);

    static  ShaderShadowMapEngineDataTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  ShaderShadowMapEngineData            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  ShaderShadowMapEngineDataTransitPtr  createDependent  (BitVector bFlags);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                       Copy                                   */
    /*! \{                                                                 */

    virtual FieldContainerTransitPtr shallowCopy     (void) const;
    virtual FieldContainerTransitPtr shallowCopyLocal(
                                       BitVector bFlags = FCLocal::All) const;
    virtual FieldContainerTransitPtr shallowCopyDependent(
                                                      BitVector bFlags) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    static TypeObject _type;

    static       void   classDescInserter(TypeObject &oType);
    static const Char8 *getClassname     (void             );

    /*---------------------------------------------------------------------*/
    /*! \name                      Fields                                  */
    /*! \{                                                                 */

    MFUnrecFrameBufferObjectPtr _mfRenderTargets;
    MFUnrecTextureBufferPtr _mfShadowTexBuffers;
    SFUnrecTextureObjChunkPtr _sfShadowTexChunk;
    SFUnrecImagePtr   _sfShadowTexImage;
    MFUnrecChunkMaterialPtr _mfLightPassMaterials;
    SFUnrecBackgroundPtr _sfBackground;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    ShaderShadowMapEngineDataBase(void);
    ShaderShadowMapEngineDataBase(const ShaderShadowMapEngineDataBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~ShaderShadowMapEngineDataBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const ShaderShadowMapEngineData *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleRenderTargets   (void) const;
    EditFieldHandlePtr editHandleRenderTargets  (void);
    GetFieldHandlePtr  getHandleShadowTexBuffers (void) const;
    EditFieldHandlePtr editHandleShadowTexBuffers(void);
    GetFieldHandlePtr  getHandleShadowTexChunk  (void) const;
    EditFieldHandlePtr editHandleShadowTexChunk (void);
    GetFieldHandlePtr  getHandleShadowTexImage  (void) const;
    EditFieldHandlePtr editHandleShadowTexImage (void);
    GetFieldHandlePtr  getHandleLightPassMaterials (void) const;
    EditFieldHandlePtr editHandleLightPassMaterials(void);
    GetFieldHandlePtr  getHandleBackground      (void) const;
    EditFieldHandlePtr editHandleBackground     (void);

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

            void execSync (      ShaderShadowMapEngineDataBase *pFrom,
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
    virtual FieldContainer *createAspectCopy(
                                    const FieldContainer *pRefAspect) const;
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
    void operator =(const ShaderShadowMapEngineDataBase &source);
};

typedef ShaderShadowMapEngineDataBase *ShaderShadowMapEngineDataBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSHADERSHADOWMAPENGINEDATABASE_H_ */
