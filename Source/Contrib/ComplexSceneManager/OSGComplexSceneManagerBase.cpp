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
 **     class ComplexSceneManager!
 **                                                                         **
 *****************************************************************************
\*****************************************************************************/


#define OSG_COMPILECOMPLEXSCENEMANAGERINST

#include <cstdlib>
#include <cstdio>
#include <boost/assign/list_of.hpp>

#include <OSGConfig.h>



#include <OSGFieldContainer.h> // Globals Class
#include <OSGDrawManager.h> // DrawManager Class
#include <OSGSensorTask.h> // SensorTask Class

#include "OSGComplexSceneManagerBase.h"
#include "OSGComplexSceneManager.h"

#include "boost/bind.hpp"

OSG_BEGIN_NAMESPACE

/***************************************************************************\
 *                            Description                                  *
\***************************************************************************/

/*! \class OSG::ComplexSceneManager
    
 */

/***************************************************************************\
 *                         Field Description                               *
\***************************************************************************/

/*! \var FieldContainer * ComplexSceneManagerBase::_mfGlobals
    
*/

/*! \var DrawManager *   ComplexSceneManagerBase::_sfDrawManager
    
*/

/*! \var SensorTask *    ComplexSceneManagerBase::_sfSensorTask
    
*/

/*! \var UInt64          ComplexSceneManagerBase::_sfFrameCount
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfStartTime
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfLastTime
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfCurrTime
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfTimeStamp
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfTimeScale
    
*/

/*! \var Time            ComplexSceneManagerBase::_sfConstantTimeStep
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfConstantTime
    
*/

/*! \var bool            ComplexSceneManagerBase::_sfPaused
    
*/


void ComplexSceneManagerBase::classDescInserter(TypeObject &oType)
{
    FieldDescriptionBase *pDesc = NULL;


    pDesc = new MFUnrecFieldContainerPtr::Description(
        MFUnrecFieldContainerPtr::getClassType(),
        "globals",
        "",
        GlobalsFieldId, GlobalsFieldMask,
        false,
        (Field::MFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleGlobals),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleGlobals));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecDrawManagerPtr::Description(
        SFUnrecDrawManagerPtr::getClassType(),
        "drawManager",
        "",
        DrawManagerFieldId, DrawManagerFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleDrawManager),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleDrawManager));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUnrecSensorTaskPtr::Description(
        SFUnrecSensorTaskPtr::getClassType(),
        "sensorTask",
        "",
        SensorTaskFieldId, SensorTaskFieldMask,
        false,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleSensorTask),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleSensorTask));

    oType.addInitialDesc(pDesc);

    pDesc = new SFUInt64::Description(
        SFUInt64::getClassType(),
        "frameCount",
        "",
        FrameCountFieldId, FrameCountFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleFrameCount),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleFrameCount));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "startTime",
        "",
        StartTimeFieldId, StartTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleStartTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleStartTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "lastTime",
        "",
        LastTimeFieldId, LastTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleLastTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleLastTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "currTime",
        "",
        CurrTimeFieldId, CurrTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleCurrTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleCurrTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "timeStamp",
        "",
        TimeStampFieldId, TimeStampFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleTimeStamp),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleTimeStamp));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "timeScale",
        "",
        TimeScaleFieldId, TimeScaleFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleTimeScale),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleTimeScale));

    oType.addInitialDesc(pDesc);

    pDesc = new SFTime::Description(
        SFTime::getClassType(),
        "constantTimeStep",
        "",
        ConstantTimeStepFieldId, ConstantTimeStepFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleConstantTimeStep),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleConstantTimeStep));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "constantTime",
        "",
        ConstantTimeFieldId, ConstantTimeFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandleConstantTime),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandleConstantTime));

    oType.addInitialDesc(pDesc);

    pDesc = new SFBool::Description(
        SFBool::getClassType(),
        "paused",
        "",
        PausedFieldId, PausedFieldMask,
        true,
        (Field::SFDefaultFlags | Field::FStdAccess),
        static_cast<FieldEditMethodSig>(&ComplexSceneManager::editHandlePaused),
        static_cast<FieldGetMethodSig >(&ComplexSceneManager::getHandlePaused));

    oType.addInitialDesc(pDesc);
}


ComplexSceneManagerBase::TypeObject ComplexSceneManagerBase::_type(
    ComplexSceneManagerBase::getClassname(),
    Inherited::getClassname(),
    "NULL",
    0,
    reinterpret_cast<PrototypeCreateF>(&ComplexSceneManagerBase::createEmptyLocal),
    ComplexSceneManager::initMethod,
    ComplexSceneManager::exitMethod,
    reinterpret_cast<InitalInsertDescFunc>(&ComplexSceneManagerBase::classDescInserter),
    false,
    0,
    "<?xml version=\"1.0\"?>\n"
    "\n"
    "<FieldContainer\n"
    "    name=\"ComplexSceneManager\"\n"
    "    parent=\"FieldContainer\"\n"
    "    library=\"ContribCSM\"\n"
    "    pointerfieldtypes=\"none\"\n"
    "    structure=\"concrete\"\n"
    "    systemcomponent=\"true\"\n"
    "    parentsystemcomponent=\"true\"\n"
    "    decoratable=\"false\"\n"
    "    useLocalIncludes=\"false\"\n"
    "    isNodeCore=\"false\"\n"
    "    isBundle=\"true\"\n"
    ">\n"
    "  \n"
    "\t<Field\n"
    "\t\tname=\"globals\"\n"
    "\t\ttype=\"FieldContainer\"\n"
    "\t\tcardinality=\"multi\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"drawManager\"\n"
    "\t\ttype=\"DrawManager\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"sensorTask\"\n"
    "\t\ttype=\"SensorTask\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"external\"\n"
    "\t\tdefaultValue=\"NULL\"\n"
    "\t\taccess=\"public\"\n"
    "        category=\"pointer\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\t<Field\n"
    "\t\tname=\"frameCount\"\n"
    "\t\ttype=\"UInt64\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"startTime\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"lastTime\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"currTime\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"timeStamp\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"timeScale\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"1.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantTimeStep\"\n"
    "\t\ttype=\"Time\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"0.0\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"constantTime\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\t<Field\n"
    "\t\tname=\"paused\"\n"
    "\t\ttype=\"bool\"\n"
    "\t\tcardinality=\"single\"\n"
    "\t\tvisibility=\"internal\"\n"
    "\t\taccess=\"public\"\n"
    "        defaultValue=\"false\"\n"
    "\t>\n"
    "\t</Field>\n"
    "\n"
    "\n"
    "</FieldContainer>\n",
    ""
    );

/*------------------------------ get -----------------------------------*/

FieldContainerType &ComplexSceneManagerBase::getType(void)
{
    return _type;
}

const FieldContainerType &ComplexSceneManagerBase::getType(void) const
{
    return _type;
}

UInt32 ComplexSceneManagerBase::getContainerSize(void) const
{
    return sizeof(ComplexSceneManager);
}

/*------------------------- decorator get ------------------------------*/


//! Get the ComplexSceneManager::_mfGlobals field.
const MFUnrecFieldContainerPtr *ComplexSceneManagerBase::getMFGlobals(void) const
{
    return &_mfGlobals;
}

MFUnrecFieldContainerPtr *ComplexSceneManagerBase::editMFGlobals        (void)
{
    editMField(GlobalsFieldMask, _mfGlobals);

    return &_mfGlobals;
}

//! Get the ComplexSceneManager::_sfDrawManager field.
const SFUnrecDrawManagerPtr *ComplexSceneManagerBase::getSFDrawManager(void) const
{
    return &_sfDrawManager;
}

SFUnrecDrawManagerPtr *ComplexSceneManagerBase::editSFDrawManager    (void)
{
    editSField(DrawManagerFieldMask);

    return &_sfDrawManager;
}

//! Get the ComplexSceneManager::_sfSensorTask field.
const SFUnrecSensorTaskPtr *ComplexSceneManagerBase::getSFSensorTask(void) const
{
    return &_sfSensorTask;
}

SFUnrecSensorTaskPtr *ComplexSceneManagerBase::editSFSensorTask     (void)
{
    editSField(SensorTaskFieldMask);

    return &_sfSensorTask;
}

SFUInt64 *ComplexSceneManagerBase::editSFFrameCount(void)
{
    editSField(FrameCountFieldMask);

    return &_sfFrameCount;
}

const SFUInt64 *ComplexSceneManagerBase::getSFFrameCount(void) const
{
    return &_sfFrameCount;
}


SFTime *ComplexSceneManagerBase::editSFStartTime(void)
{
    editSField(StartTimeFieldMask);

    return &_sfStartTime;
}

const SFTime *ComplexSceneManagerBase::getSFStartTime(void) const
{
    return &_sfStartTime;
}


SFTime *ComplexSceneManagerBase::editSFLastTime(void)
{
    editSField(LastTimeFieldMask);

    return &_sfLastTime;
}

const SFTime *ComplexSceneManagerBase::getSFLastTime(void) const
{
    return &_sfLastTime;
}


SFTime *ComplexSceneManagerBase::editSFCurrTime(void)
{
    editSField(CurrTimeFieldMask);

    return &_sfCurrTime;
}

const SFTime *ComplexSceneManagerBase::getSFCurrTime(void) const
{
    return &_sfCurrTime;
}


SFTime *ComplexSceneManagerBase::editSFTimeStamp(void)
{
    editSField(TimeStampFieldMask);

    return &_sfTimeStamp;
}

const SFTime *ComplexSceneManagerBase::getSFTimeStamp(void) const
{
    return &_sfTimeStamp;
}


SFTime *ComplexSceneManagerBase::editSFTimeScale(void)
{
    editSField(TimeScaleFieldMask);

    return &_sfTimeScale;
}

const SFTime *ComplexSceneManagerBase::getSFTimeScale(void) const
{
    return &_sfTimeScale;
}


SFTime *ComplexSceneManagerBase::editSFConstantTimeStep(void)
{
    editSField(ConstantTimeStepFieldMask);

    return &_sfConstantTimeStep;
}

const SFTime *ComplexSceneManagerBase::getSFConstantTimeStep(void) const
{
    return &_sfConstantTimeStep;
}


SFBool *ComplexSceneManagerBase::editSFConstantTime(void)
{
    editSField(ConstantTimeFieldMask);

    return &_sfConstantTime;
}

const SFBool *ComplexSceneManagerBase::getSFConstantTime(void) const
{
    return &_sfConstantTime;
}


SFBool *ComplexSceneManagerBase::editSFPaused(void)
{
    editSField(PausedFieldMask);

    return &_sfPaused;
}

const SFBool *ComplexSceneManagerBase::getSFPaused(void) const
{
    return &_sfPaused;
}




void ComplexSceneManagerBase::pushToGlobals(FieldContainer * const value)
{
    editMField(GlobalsFieldMask, _mfGlobals);

    _mfGlobals.push_back(value);
}

void ComplexSceneManagerBase::assignGlobals  (const MFUnrecFieldContainerPtr &value)
{
    MFUnrecFieldContainerPtr::const_iterator elemIt  =
        value.begin();
    MFUnrecFieldContainerPtr::const_iterator elemEnd =
        value.end  ();

    static_cast<ComplexSceneManager *>(this)->clearGlobals();

    while(elemIt != elemEnd)
    {
        this->pushToGlobals(*elemIt);

        ++elemIt;
    }
}

void ComplexSceneManagerBase::removeFromGlobals(UInt32 uiIndex)
{
    if(uiIndex < _mfGlobals.size())
    {
        editMField(GlobalsFieldMask, _mfGlobals);

        _mfGlobals.erase(uiIndex);
    }
}

void ComplexSceneManagerBase::removeObjFromGlobals(FieldContainer * const value)
{
    Int32 iElemIdx = _mfGlobals.findIndex(value);

    if(iElemIdx != -1)
    {
        editMField(GlobalsFieldMask, _mfGlobals);

        _mfGlobals.erase(iElemIdx);
    }
}
void ComplexSceneManagerBase::clearGlobals(void)
{
    editMField(GlobalsFieldMask, _mfGlobals);


    _mfGlobals.clear();
}



/*------------------------------ access -----------------------------------*/

UInt32 ComplexSceneManagerBase::getBinSize(ConstFieldMaskArg whichField)
{
    UInt32 returnValue = Inherited::getBinSize(whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        returnValue += _mfGlobals.getBinSize();
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        returnValue += _sfDrawManager.getBinSize();
    }
    if(FieldBits::NoField != (SensorTaskFieldMask & whichField))
    {
        returnValue += _sfSensorTask.getBinSize();
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        returnValue += _sfFrameCount.getBinSize();
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        returnValue += _sfStartTime.getBinSize();
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        returnValue += _sfLastTime.getBinSize();
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        returnValue += _sfCurrTime.getBinSize();
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        returnValue += _sfTimeStamp.getBinSize();
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        returnValue += _sfTimeScale.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        returnValue += _sfConstantTimeStep.getBinSize();
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        returnValue += _sfConstantTime.getBinSize();
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        returnValue += _sfPaused.getBinSize();
    }

    return returnValue;
}

void ComplexSceneManagerBase::copyToBin(BinaryDataHandler &pMem,
                                  ConstFieldMaskArg  whichField)
{
    Inherited::copyToBin(pMem, whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        _mfGlobals.copyToBin(pMem);
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        _sfDrawManager.copyToBin(pMem);
    }
    if(FieldBits::NoField != (SensorTaskFieldMask & whichField))
    {
        _sfSensorTask.copyToBin(pMem);
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyToBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        _sfStartTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        _sfLastTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        _sfCurrTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        _sfTimeStamp.copyToBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        _sfTimeScale.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        _sfConstantTimeStep.copyToBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        _sfConstantTime.copyToBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        _sfPaused.copyToBin(pMem);
    }
}

void ComplexSceneManagerBase::copyFromBin(BinaryDataHandler &pMem,
                                    ConstFieldMaskArg  whichField)
{
    Inherited::copyFromBin(pMem, whichField);

    if(FieldBits::NoField != (GlobalsFieldMask & whichField))
    {
        _mfGlobals.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (DrawManagerFieldMask & whichField))
    {
        _sfDrawManager.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (SensorTaskFieldMask & whichField))
    {
        _sfSensorTask.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (FrameCountFieldMask & whichField))
    {
        _sfFrameCount.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (StartTimeFieldMask & whichField))
    {
        _sfStartTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (LastTimeFieldMask & whichField))
    {
        _sfLastTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (CurrTimeFieldMask & whichField))
    {
        _sfCurrTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeStampFieldMask & whichField))
    {
        _sfTimeStamp.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (TimeScaleFieldMask & whichField))
    {
        _sfTimeScale.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeStepFieldMask & whichField))
    {
        _sfConstantTimeStep.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (ConstantTimeFieldMask & whichField))
    {
        _sfConstantTime.copyFromBin(pMem);
    }
    if(FieldBits::NoField != (PausedFieldMask & whichField))
    {
        _sfPaused.copyFromBin(pMem);
    }
}

//! create a new instance of the class
ComplexSceneManagerTransitPtr ComplexSceneManagerBase::createLocal(BitVector bFlags)
{
    ComplexSceneManagerTransitPtr fc;

    if(getClassType().getPrototype() != NULL)
    {
        FieldContainerTransitPtr tmpPtr =
            getClassType().getPrototype()-> shallowCopyLocal(bFlags);

        fc = dynamic_pointer_cast<ComplexSceneManager>(tmpPtr);
    }

    return fc;
}

//! create a new instance of the class
ComplexSceneManagerTransitPtr ComplexSceneManagerBase::create(void)
{
    return createLocal();
}

ComplexSceneManager *ComplexSceneManagerBase::createEmptyLocal(BitVector bFlags)
{
    ComplexSceneManager *returnValue;

    newPtr<ComplexSceneManager>(returnValue, bFlags);

    returnValue->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

//! create an empty new instance of the class, do not copy the prototype
ComplexSceneManager *ComplexSceneManagerBase::createEmpty(void)
{
    return createEmptyLocal();
}


FieldContainerTransitPtr ComplexSceneManagerBase::shallowCopyLocal(
    BitVector bFlags) const
{
    ComplexSceneManager *tmpPtr;

    newPtr(tmpPtr, dynamic_cast<const ComplexSceneManager *>(this), bFlags);

    FieldContainerTransitPtr returnValue(tmpPtr);

    tmpPtr->_pFieldFlags->_bNamespaceMask &= ~bFlags;

    return returnValue;
}

FieldContainerTransitPtr ComplexSceneManagerBase::shallowCopy(void) const
{
    return shallowCopyLocal();
}




/*------------------------- constructors ----------------------------------*/

ComplexSceneManagerBase::ComplexSceneManagerBase(void) :
    Inherited(),
    _mfGlobals                (),
    _sfDrawManager            (NULL),
    _sfSensorTask             (NULL),
    _sfFrameCount             (UInt64(0)),
    _sfStartTime              (Time(0.0)),
    _sfLastTime               (Time(0.0)),
    _sfCurrTime               (Time(0.0)),
    _sfTimeStamp              (Time(0.0)),
    _sfTimeScale              (Time(1.0)),
    _sfConstantTimeStep       (Time(0.0)),
    _sfConstantTime           (bool(false)),
    _sfPaused                 (bool(false))
{
}

ComplexSceneManagerBase::ComplexSceneManagerBase(const ComplexSceneManagerBase &source) :
    Inherited(source),
    _mfGlobals                (),
    _sfDrawManager            (NULL),
    _sfSensorTask             (NULL),
    _sfFrameCount             (source._sfFrameCount             ),
    _sfStartTime              (source._sfStartTime              ),
    _sfLastTime               (source._sfLastTime               ),
    _sfCurrTime               (source._sfCurrTime               ),
    _sfTimeStamp              (source._sfTimeStamp              ),
    _sfTimeScale              (source._sfTimeScale              ),
    _sfConstantTimeStep       (source._sfConstantTimeStep       ),
    _sfConstantTime           (source._sfConstantTime           ),
    _sfPaused                 (source._sfPaused                 )
{
}


/*-------------------------- destructors ----------------------------------*/

ComplexSceneManagerBase::~ComplexSceneManagerBase(void)
{
}

void ComplexSceneManagerBase::onCreate(const ComplexSceneManager *source)
{
    Inherited::onCreate(source);

    if(source != NULL)
    {
        ComplexSceneManager *pThis = static_cast<ComplexSceneManager *>(this);

        MFUnrecFieldContainerPtr::const_iterator GlobalsIt  =
            source->_mfGlobals.begin();
        MFUnrecFieldContainerPtr::const_iterator GlobalsEnd =
            source->_mfGlobals.end  ();

        while(GlobalsIt != GlobalsEnd)
        {
            pThis->pushToGlobals(*GlobalsIt);

            ++GlobalsIt;
        }

        pThis->setDrawManager(source->getDrawManager());

        pThis->setSensorTask(source->getSensorTask());
    }
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleGlobals         (void) const
{
    MFUnrecFieldContainerPtr::GetHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::GetHandle(
             &_mfGlobals,
             this->getType().getFieldDesc(GlobalsFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleGlobals        (void)
{
    MFUnrecFieldContainerPtr::EditHandlePtr returnValue(
        new  MFUnrecFieldContainerPtr::EditHandle(
             &_mfGlobals,
             this->getType().getFieldDesc(GlobalsFieldId)));

    returnValue->setAddMethod(
        boost::bind(&ComplexSceneManager::pushToGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setRemoveMethod(
        boost::bind(&ComplexSceneManager::removeFromGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setRemoveObjMethod(
        boost::bind(&ComplexSceneManager::removeObjFromGlobals,
                    static_cast<ComplexSceneManager *>(this), _1));
    returnValue->setClearMethod(
        boost::bind(&ComplexSceneManager::clearGlobals,
                    static_cast<ComplexSceneManager *>(this)));

    editMField(GlobalsFieldMask, _mfGlobals);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleDrawManager     (void) const
{
    SFUnrecDrawManagerPtr::GetHandlePtr returnValue(
        new  SFUnrecDrawManagerPtr::GetHandle(
             &_sfDrawManager,
             this->getType().getFieldDesc(DrawManagerFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleDrawManager    (void)
{
    SFUnrecDrawManagerPtr::EditHandlePtr returnValue(
        new  SFUnrecDrawManagerPtr::EditHandle(
             &_sfDrawManager,
             this->getType().getFieldDesc(DrawManagerFieldId)));

    returnValue->setSetMethod(
        boost::bind(&ComplexSceneManager::setDrawManager,
                    static_cast<ComplexSceneManager *>(this), _1));

    editSField(DrawManagerFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleSensorTask      (void) const
{
    SFUnrecSensorTaskPtr::GetHandlePtr returnValue(
        new  SFUnrecSensorTaskPtr::GetHandle(
             &_sfSensorTask,
             this->getType().getFieldDesc(SensorTaskFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleSensorTask     (void)
{
    SFUnrecSensorTaskPtr::EditHandlePtr returnValue(
        new  SFUnrecSensorTaskPtr::EditHandle(
             &_sfSensorTask,
             this->getType().getFieldDesc(SensorTaskFieldId)));

    returnValue->setSetMethod(
        boost::bind(&ComplexSceneManager::setSensorTask,
                    static_cast<ComplexSceneManager *>(this), _1));

    editSField(SensorTaskFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleFrameCount      (void) const
{
    SFUInt64::GetHandlePtr returnValue(
        new  SFUInt64::GetHandle(
             &_sfFrameCount,
             this->getType().getFieldDesc(FrameCountFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleFrameCount     (void)
{
    SFUInt64::EditHandlePtr returnValue(
        new  SFUInt64::EditHandle(
             &_sfFrameCount,
             this->getType().getFieldDesc(FrameCountFieldId)));


    editSField(FrameCountFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleStartTime       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleStartTime      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfStartTime,
             this->getType().getFieldDesc(StartTimeFieldId)));


    editSField(StartTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleLastTime        (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfLastTime,
             this->getType().getFieldDesc(LastTimeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleLastTime       (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfLastTime,
             this->getType().getFieldDesc(LastTimeFieldId)));


    editSField(LastTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleCurrTime        (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfCurrTime,
             this->getType().getFieldDesc(CurrTimeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleCurrTime       (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfCurrTime,
             this->getType().getFieldDesc(CurrTimeFieldId)));


    editSField(CurrTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleTimeStamp       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTimeStamp,
             this->getType().getFieldDesc(TimeStampFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleTimeStamp      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTimeStamp,
             this->getType().getFieldDesc(TimeStampFieldId)));


    editSField(TimeStampFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleTimeScale       (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleTimeScale      (void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfTimeScale,
             this->getType().getFieldDesc(TimeScaleFieldId)));


    editSField(TimeScaleFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleConstantTimeStep (void) const
{
    SFTime::GetHandlePtr returnValue(
        new  SFTime::GetHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleConstantTimeStep(void)
{
    SFTime::EditHandlePtr returnValue(
        new  SFTime::EditHandle(
             &_sfConstantTimeStep,
             this->getType().getFieldDesc(ConstantTimeStepFieldId)));


    editSField(ConstantTimeStepFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandleConstantTime    (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandleConstantTime   (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfConstantTime,
             this->getType().getFieldDesc(ConstantTimeFieldId)));


    editSField(ConstantTimeFieldMask);

    return returnValue;
}

GetFieldHandlePtr ComplexSceneManagerBase::getHandlePaused          (void) const
{
    SFBool::GetHandlePtr returnValue(
        new  SFBool::GetHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId)));

    return returnValue;
}

EditFieldHandlePtr ComplexSceneManagerBase::editHandlePaused         (void)
{
    SFBool::EditHandlePtr returnValue(
        new  SFBool::EditHandle(
             &_sfPaused,
             this->getType().getFieldDesc(PausedFieldId)));


    editSField(PausedFieldMask);

    return returnValue;
}


#ifdef OSG_MT_CPTR_ASPECT
void ComplexSceneManagerBase::execSyncV(      FieldContainer    &oFrom,
                                        ConstFieldMaskArg  whichField,
                                        AspectOffsetStore &oOffsets,
                                        ConstFieldMaskArg  syncMode,
                                  const UInt32             uiSyncInfo)
{
    this->execSync(static_cast<ComplexSceneManagerBase *>(&oFrom),
                   whichField,
                   oOffsets,
                   syncMode,
                   uiSyncInfo);
}
#endif


#ifdef OSG_MT_CPTR_ASPECT
FieldContainer *ComplexSceneManagerBase::createAspectCopy(void) const
{
    ComplexSceneManager *returnValue;

    newAspectCopy(returnValue,
                  dynamic_cast<const ComplexSceneManager *>(this));

    return returnValue;
}
#endif

void ComplexSceneManagerBase::resolveLinks(void)
{
    Inherited::resolveLinks();

    static_cast<ComplexSceneManager *>(this)->clearGlobals();

    static_cast<ComplexSceneManager *>(this)->setDrawManager(NULL);

    static_cast<ComplexSceneManager *>(this)->setSensorTask(NULL);


}


#if !defined(OSG_DO_DOC) || defined(OSG_DOC_DEV)
DataType FieldTraits<ComplexSceneManager *>::_type("ComplexSceneManagerPtr", "FieldContainerPtr");
#endif


OSG_END_NAMESPACE