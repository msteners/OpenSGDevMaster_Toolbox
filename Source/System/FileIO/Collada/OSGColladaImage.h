/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                Copyright (C) 2009 by the OpenSG Forum                     *
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

#ifndef _OSGCOLLADAIMAGE_H_
#define _OSGCOLLADAIMAGE_H_

#include "OSGConfig.h"

#ifdef OSG_WITH_COLLADA

#include "OSGColladaElement.h"
#include "OSGColladaElementFactoryHelper.h"
#include "OSGImage.h"

OSG_BEGIN_NAMESPACE

class OSG_FILEIO_DLLMAPPING ColladaImage : public ColladaElement
{
    /*==========================  PUBLIC  =================================*/
  public:
    /*---------------------------------------------------------------------*/
    /*! \name Types                                                        */
    /*! \{                                                                 */

    typedef ColladaElement Inherited;
    typedef ColladaImage   Self;

    OSG_GEN_INTERNAL_MEMOBJPTR(ColladaImage);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Create                                                       */
    /*! \{                                                                 */

    static ColladaElementTransitPtr
        create(daeElement *elem, ColladaGlobal *global);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Reading                                                      */
    /*! \{                                                                 */

    virtual void read(void);

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/
    /*! \name Access                                                       */
    /*! \{                                                                 */

    Image *getImage(void) const;

    /*! \}                                                                 */
    /*=========================  PROTECTED  ===============================*/
  protected:
    /*---------------------------------------------------------------------*/
    /*! \name Constructors/Destructor                                      */
    /*! \{                                                                 */

             ColladaImage(daeElement *elem, ColladaGlobal *global);
    virtual ~ColladaImage(void                                   );

    /*! \}                                                                 */
    /*---------------------------------------------------------------------*/

    static ColladaElementRegistrationHelper _regHelper;

    ImageUnrecPtr _image;
};

OSG_GEN_MEMOBJPTR(ColladaImage);

OSG_END_NAMESPACE

// #include "OSGColladaImage.inl"

#endif // OSG_WITH_COLLADA

#endif // _OSGCOLLADAIMAGE_H_
