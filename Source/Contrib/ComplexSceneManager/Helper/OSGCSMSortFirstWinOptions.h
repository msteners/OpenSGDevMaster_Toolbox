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

#ifndef _OSGCSMSORTFIRSTWINOPTIONS_H_
#define _OSGCSMSORTFIRSTWINOPTIONS_H_
#ifdef __sgi
#pragma once
#endif

#include "OSGCSMSortFirstWinOptionsBase.h"

OSG_BEGIN_NAMESPACE

/*! \brief CSMSortFirstWinOptions class. See \ref
           PageContribCSMCSMSortFirstWinOptions for a description.
*/

class OSG_CONTRIBCSM_DLLMAPPING CSMSortFirstWinOptions : public CSMSortFirstWinOptionsBase
{
  protected:

    /*==========================  PUBLIC  =================================*/

  public:

    typedef CSMSortFirstWinOptionsBase Inherited;
    typedef CSMSortFirstWinOptions     Self;

    /*---------------------------------------------------------------------*/
    /*! \name                      Sync                                    */
    /*! \{                                                                 */

    virtual void changed(ConstFieldMaskArg whichField,
                         UInt32            origin,
                         BitVector         details    );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                     Output                                   */
    /*! \{                                                                 */

    virtual void dump(      UInt32     uiIndent = 0,
                      const BitVector  bvFlags  = 0) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/

  protected:

    // Variables should all be in CSMSortFirstWinOptionsBase.

    /*---------------------------------------------------------------------*/
    /*! \name                  Constructors                                */
    /*! \{                                                                 */

    CSMSortFirstWinOptions(void);
    CSMSortFirstWinOptions(const CSMSortFirstWinOptions &source);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                   Destructors                                */
    /*! \{                                                                 */

    virtual ~CSMSortFirstWinOptions(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name                      Init                                    */
    /*! \{                                                                 */

    static void initMethod(InitPhase ePhase);

    /*! \}                                                                 */
    /*==========================  PRIVATE  ================================*/

  private:

    friend class FieldContainer;
    friend class CSMSortFirstWinOptionsBase;

    // prohibit default functions (move to 'public' if you need one)
    void operator =(const CSMSortFirstWinOptions &source);
};

typedef CSMSortFirstWinOptions *CSMSortFirstWinOptionsP;

OSG_END_NAMESPACE

#include "OSGCSMSortFirstWinOptionsBase.inl"
#include "OSGCSMSortFirstWinOptions.inl"

#endif /* _OSGCSMSORTFIRSTWINOPTIONS_H_ */
