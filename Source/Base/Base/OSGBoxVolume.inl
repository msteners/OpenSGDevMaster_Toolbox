/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *                         Copyright 2000 by OpenSG Forum                    *
 *                                                                           *
 *          contact: {reiners|vossg}@igd.fhg.de, jbehr@zgdv.de               *
 *                                                                           *
\*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*\
 *                                License                                    *
 *                                                                           *
 *                                                                           *
 *                                                                           *
 *                                                                           *
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

#ifndef _OSGBOXVOLUME_INL_
#define _OSGBOXVOLUME_INL_

OSG_BEGIN_NAMESPACE

/*! Default constructor - leaves box totally empty
*/

inline
BoxVolume::BoxVolume(void) : 
     Inherited(             ),
    _min      (0.f, 0.f, 0.f), 
    _max      (0.f, 0.f, 0.f)
{
}


inline
BoxVolume::BoxVolume(Real xmin, Real ymin, Real zmin,
                     Real xmax, Real ymax, Real zmax) :
     Inherited(                ), 
    _min      (xmin, ymin, zmin), 
    _max      (xmax, ymax, zmax)
{ 
    setEmpty(false);
}


inline
BoxVolume::BoxVolume(const Pnt3r &min, const Pnt3r &max) :
     Inherited(   ), 
    _min      (min), 
    _max      (max)
{ 
    setEmpty(false); 
}


inline
BoxVolume::BoxVolume(const BoxVolume &obj) :
     Inherited(obj     ), 
    _min      (obj._min), 
    _max      (obj._max) 
{
}


inline
BoxVolume::~BoxVolume(void) 
{
}


inline
const Pnt3r &BoxVolume::getMin(void) const
{
    return _min;
}


inline
const Pnt3r &BoxVolume::getMax(void) const
{
    return _max;
}


inline
void BoxVolume::getBounds(Real &xmin, 
                          Real &ymin, 
                          Real &zmin,
                          Real &xmax, 
                          Real &ymax, 
                          Real &zmax) const
{
    _min.getSeparateValues(xmin, ymin, zmin);
    _max.getSeparateValues(xmax, ymax, zmax);
}


inline
void BoxVolume::getOrigin(Real &originX, 
                          Real &originY, 
                          Real &originZ) const
{
    originX = _min[0];
    originY = _min[1];
    originZ = _min[2];
}


inline
void BoxVolume::getSize(Real &sizeX, 
                        Real &sizeY, 
                        Real &sizeZ) const
{
    sizeX = _max[0] - _min[0];
    sizeY = _max[1] - _min[1];
    sizeZ = _max[2] - _min[2];
}


inline
void BoxVolume::getSize(Vec3r &vec) const
{
    vec.setValues(_max[0] - _min[0], _max[1] - _min[1], _max[2] - _min[2]);
}


inline
void BoxVolume::setBounds(Real w, Real h, Real d)
{
    _min.setValues(-w / 2.0f, -h / 2.0f, -d / 2.0f);
    _max.setValues( w / 2.0f,  h / 2.0f,  d / 2.0f);

    Volume::setValid   (true );
    Volume::setEmpty   (false);
    Volume::setInfinite(false);
}


inline
void BoxVolume::setBounds(Real xmin, 
                          Real ymin, 
                          Real zmin,
                          Real xmax, 
                          Real ymax, 
                          Real zmax)
{
    _min.setValues(xmin, ymin, zmin);
    _max.setValues(xmax, ymax, zmax);

    Volume::setValid   (true );
    Volume::setEmpty   (false);
    Volume::setInfinite(false);
}


inline
void BoxVolume::setBounds(const Pnt3r &min, const Pnt3r &max)
{
    _min = min; 
    _max = max;

    Volume::setValid   (true );
    Volume::setEmpty   (false);
    Volume::setInfinite(false);
}

inline
Pnt3r &BoxVolume::editMin(void)
{
    return _min;
}


inline
Pnt3r &BoxVolume::editMax(void)
{
    return _max;
}

inline
void BoxVolume::extendBy(const BoxVolume &volume)
{
    OSG::extend(*this, volume);
}


inline
bool BoxVolume::operator !=(const BoxVolume &rhs) const
{
    return !(*this == rhs);
}

OSG_END_NAMESPACE

#endif // _OSG_BOXVOLUME_INL_
