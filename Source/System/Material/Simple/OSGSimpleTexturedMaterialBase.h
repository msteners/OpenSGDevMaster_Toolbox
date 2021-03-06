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
 **     class SimpleTexturedMaterial
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#ifndef _OSGSIMPLETEXTUREDMATERIALBASE_H_
#define _OSGSIMPLETEXTUREDMATERIALBASE_H_
#ifdef __sgi
#pragma once
#endif


#include "OSGConfig.h"
#include "OSGDrawableDef.h"

//#include "OSGBaseTypes.h"

#include "OSGSimpleMaterial.h" // Parent

#include "OSGImageFields.h"             // Image type
#include "OSGBaseFields.h"              // MinFilter type
#include "OSGSysFields.h"               // EnvMap type

#include "OSGSimpleTexturedMaterialFields.h"

OSG_BEGIN_NAMESPACE

class SimpleTexturedMaterial;

//! \brief SimpleTexturedMaterial Base Class.

class OSG_DRAWABLE_DLLMAPPING SimpleTexturedMaterialBase : public SimpleMaterial
{
  public:

    typedef SimpleMaterial Inherited;
    typedef SimpleMaterial ParentContainer;

    typedef Inherited::TypeObject TypeObject;
    typedef TypeObject::InitPhase InitPhase;

    OSG_GEN_INTERNALPTR(SimpleTexturedMaterial);

    /*==========================  PUBLIC  =================================*/

  public:

    enum
    {
        ImageFieldId = Inherited::NextFieldId,
        MinFilterFieldId = ImageFieldId + 1,
        MagFilterFieldId = MinFilterFieldId + 1,
        EnvModeFieldId = MagFilterFieldId + 1,
        EnvMapFieldId = EnvModeFieldId + 1,
        NextFieldId = EnvMapFieldId + 1
    };

    static const OSG::BitVector ImageFieldMask =
        (TypeTraits<BitVector>::One << ImageFieldId);
    static const OSG::BitVector MinFilterFieldMask =
        (TypeTraits<BitVector>::One << MinFilterFieldId);
    static const OSG::BitVector MagFilterFieldMask =
        (TypeTraits<BitVector>::One << MagFilterFieldId);
    static const OSG::BitVector EnvModeFieldMask =
        (TypeTraits<BitVector>::One << EnvModeFieldId);
    static const OSG::BitVector EnvMapFieldMask =
        (TypeTraits<BitVector>::One << EnvMapFieldId);
    static const OSG::BitVector NextFieldMask =
        (TypeTraits<BitVector>::One << NextFieldId);
        
    typedef SFUnrecImagePtr   SFImageType;
    typedef SFGLenum          SFMinFilterType;
    typedef SFGLenum          SFMagFilterType;
    typedef SFGLenum          SFEnvModeType;
    typedef SFBool            SFEnvMapType;

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

            const SFUnrecImagePtr     *getSFImage          (void) const;
                  SFUnrecImagePtr     *editSFImage          (void);

                  SFGLenum            *editSFMinFilter      (void);
            const SFGLenum            *getSFMinFilter       (void) const;

                  SFGLenum            *editSFMagFilter      (void);
            const SFGLenum            *getSFMagFilter       (void) const;

                  SFGLenum            *editSFEnvMode        (void);
            const SFGLenum            *getSFEnvMode         (void) const;

                  SFBool              *editSFEnvMap         (void);
            const SFBool              *getSFEnvMap          (void) const;


                  Image * getImage          (void) const;

                  GLenum              &editMinFilter      (void);
            const GLenum              &getMinFilter       (void) const;

                  GLenum              &editMagFilter      (void);
            const GLenum              &getMagFilter       (void) const;

                  GLenum              &editEnvMode        (void);
            const GLenum              &getEnvMode         (void) const;

                  bool                &editEnvMap         (void);
                  bool                 getEnvMap          (void) const;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Field Set                                 */
    /*! \{                                                                 */

            void setImage          (Image * const value);
            void setMinFilter      (const GLenum &value);
            void setMagFilter      (const GLenum &value);
            void setEnvMode        (const GLenum &value);
            void setEnvMap         (const bool value);

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

    static  SimpleTexturedMaterialTransitPtr  create          (void);
    static  SimpleTexturedMaterial           *createEmpty     (void);

    static  SimpleTexturedMaterialTransitPtr  createLocal     (
                                               BitVector bFlags = FCLocal::All);

    static  SimpleTexturedMaterial            *createEmptyLocal(
                                              BitVector bFlags = FCLocal::All);

    static  SimpleTexturedMaterialTransitPtr  createDependent  (BitVector bFlags);

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

    SFUnrecImagePtr   _sfImage;
    SFGLenum          _sfMinFilter;
    SFGLenum          _sfMagFilter;
    SFGLenum          _sfEnvMode;
    SFBool            _sfEnvMap;

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Constructors                               */
    /*! \{                                                                 */

    SimpleTexturedMaterialBase(void);
    SimpleTexturedMaterialBase(const SimpleTexturedMaterialBase &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~SimpleTexturedMaterialBase(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     onCreate                                */
    /*! \{                                                                 */

    void onCreate(const SimpleTexturedMaterial *source = NULL);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                    Generic Field Access                      */
    /*! \{                                                                 */

    GetFieldHandlePtr  getHandleImage           (void) const;
    EditFieldHandlePtr editHandleImage          (void);
    GetFieldHandlePtr  getHandleMinFilter       (void) const;
    EditFieldHandlePtr editHandleMinFilter      (void);
    GetFieldHandlePtr  getHandleMagFilter       (void) const;
    EditFieldHandlePtr editHandleMagFilter      (void);
    GetFieldHandlePtr  getHandleEnvMode         (void) const;
    EditFieldHandlePtr editHandleEnvMode        (void);
    GetFieldHandlePtr  getHandleEnvMap          (void) const;
    EditFieldHandlePtr editHandleEnvMap         (void);

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

            void execSync (      SimpleTexturedMaterialBase *pFrom,
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
    void operator =(const SimpleTexturedMaterialBase &source);
};

typedef SimpleTexturedMaterialBase *SimpleTexturedMaterialBaseP;

OSG_END_NAMESPACE

#endif /* _OSGSIMPLETEXTUREDMATERIALBASE_H_ */
