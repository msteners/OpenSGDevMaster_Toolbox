/*---------------------------------------------------------------------------*\
 *                                OpenSG                                     *
 *                                                                           *
 *                                                                           *
 *             Copyright (C) 2000-2002 by the OpenSG Forum                   *
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

//---------------------------------------------------------------------------
//  Includes
//---------------------------------------------------------------------------

#include <cstdlib>
#include <cstdio>

#include <boost/bind.hpp>

#include "OSGConfig.h"

#include "OSGGL.h"
#include "OSGGLU.h"
#include "OSGGLEXT.h"
#include "OSGImage.h"

#include "OSGDrawEnv.h"

#include "OSGTextureObjChunk.h"

//#define OSG_DUMP_TEX

OSG_USING_NAMESPACE

// Documentation for this class is emited in the
// OSGTextureObjChunkBase.cpp file.
// To modify it, please change the .fcd file (OSGTextureObjChunk.fcd) and
// regenerate the base file.

/***************************************************************************\
 *                           Class variables                               *
\***************************************************************************/

StateChunkClass TextureObjChunk::_class("TextureObj", osgMaxTexImages);

UInt32 TextureObjChunk::_extTex3D                    = Window::invalidExtensionID;
UInt32 TextureObjChunk::_arbMultiTex                 = Window::invalidExtensionID;
UInt32 TextureObjChunk::_arbCubeTex                  = Window::invalidExtensionID;
UInt32 TextureObjChunk::_nvPointSprite               = Window::invalidExtensionID;
UInt32 TextureObjChunk::_nvTextureShader             = Window::invalidExtensionID;
UInt32 TextureObjChunk::_nvTextureShader2            = Window::invalidExtensionID;
UInt32 TextureObjChunk::_nvTextureShader3            = Window::invalidExtensionID;
UInt32 TextureObjChunk::_sgisGenerateMipmap          = Window::invalidExtensionID;
UInt32 TextureObjChunk::_extTextureLodBias           = Window::invalidExtensionID;
UInt32 TextureObjChunk::_arbTextureCompression       = Window::invalidExtensionID;
UInt32 TextureObjChunk::_arbTextureRectangle         = Window::invalidExtensionID;
UInt32 TextureObjChunk::_arbTextureNonPowerOfTwo     = Window::invalidExtensionID;
UInt32 TextureObjChunk::_extTextureFilterAnisotropic = Window::invalidExtensionID;
UInt32 TextureObjChunk::_extShadow                   = Window::invalidExtensionID;
UInt32 TextureObjChunk::_extDepthTexture             = Window::invalidExtensionID;

UInt32 TextureObjChunk::_funcTexImage3D              = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcTexSubImage3D           = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcActiveTexture           = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexImage1D    = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexSubImage1D = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexImage2D    = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexSubImage2D = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexImage3D    = Window::invalidFunctionID;
UInt32 TextureObjChunk::_funcCompressedTexSubImage3D = Window::invalidFunctionID;

volatile UInt16 TextureObjChunk::_uiChunkCounter = 1;

// define GL_TEXTURE_3D, if not defined yet
#ifndef GL_VERSION_1_2
#  define GL_FUNC_TEXIMAGE3D    OSG_DLSYM_UNDERSCORE"glTexImage3DEXT"
#  define GL_FUNC_TEXSUBIMAGE3D OSG_DLSYM_UNDERSCORE"glTexSubImage3DEXT"
#else
#  define GL_FUNC_TEXIMAGE3D    OSG_DLSYM_UNDERSCORE"glTexImage3D"
#  define GL_FUNC_TEXSUBIMAGE3D OSG_DLSYM_UNDERSCORE"glTexSubImage3D"
#endif


/***************************************************************************\
 *                           Class methods                                 *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                -
\*-------------------------------------------------------------------------*/

void TextureObjChunk::initMethod(InitPhase ePhase)
{
    Inherited::initMethod(ePhase);

    if(ePhase == TypeObject::SystemPost)
    {
        _extTex3D          =
            Window::registerExtension("GL_EXT_texture3D"       );
        _arbMultiTex       =
            Window::registerExtension("GL_ARB_multitexture"    );
        _arbCubeTex        =
            Window::registerExtension("GL_ARB_texture_cube_map");
        _nvPointSprite     =
            Window::registerExtension("GL_NV_point_sprite"     );
        _nvTextureShader   =
            Window::registerExtension("GL_NV_texture_shader"   );
        _nvTextureShader2  =
            Window::registerExtension("GL_NV_texture_shader2"  );
        _nvTextureShader3  =
            Window::registerExtension("GL_NV_texture_shader3"  );
        _sgisGenerateMipmap  =
            Window::registerExtension("GL_SGIS_generate_mipmap"  );
        _extTextureLodBias  = 
            Window::registerExtension("GL_EXT_texture_lod_bias"  );
        _arbTextureCompression  = 
            Window::registerExtension("GL_ARB_texture_compression"  );
        _arbTextureRectangle  = 
            Window::registerExtension("GL_ARB_texture_rectangle"    );
        _arbTextureNonPowerOfTwo  = 
            Window::registerExtension("GL_ARB_texture_non_power_of_two" );
        _extTextureFilterAnisotropic = 
            Window::registerExtension("GL_EXT_texture_filter_anisotropic" );

        _extShadow =
            Window::registerExtension("GL_ARB_shadow"  );
        _extDepthTexture =
            Window::registerExtension("GL_ARB_depth_texture"  );

        _funcTexImage3D    =
            Window::registerFunction (GL_FUNC_TEXIMAGE3D, 
                                      _extTex3D);
        _funcTexSubImage3D =
            Window::registerFunction (GL_FUNC_TEXSUBIMAGE3D, 
                                      _extTex3D);
        _funcActiveTexture =
            Window::registerFunction (OSG_DLSYM_UNDERSCORE"glActiveTextureARB",
                                      _arbMultiTex);
        
        _funcCompressedTexImage1D    = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexImage1DARB"             , 
            _arbTextureCompression);

        _funcCompressedTexSubImage1D = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexSubImage1DARB"          , 
            _arbTextureCompression);

        _funcCompressedTexImage2D    = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexImage2DARB"             , 
            _arbTextureCompression);

        _funcCompressedTexSubImage2D = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexSubImage2DARB"          , 
            _arbTextureCompression);

        _funcCompressedTexImage3D    = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexImage3DARB"             , 
            _arbTextureCompression);

        _funcCompressedTexSubImage3D = Window::registerFunction(
            OSG_DLSYM_UNDERSCORE"glCompressedTexSubImage3DARB"          , 
            _arbTextureCompression);
        
#ifndef OSG_EMBEDDED
        Window::registerConstant(GL_MAX_TEXTURE_UNITS_ARB      );
        Window::registerConstant(GL_MAX_TEXTURE_IMAGE_UNITS_ARB);
        Window::registerConstant(GL_MAX_TEXTURE_COORDS_ARB     );    
#endif
    }
}

/***************************************************************************\
 *                           Instance methods                              *
\***************************************************************************/

/*-------------------------------------------------------------------------*\
 -  private                                                                 -
\*-------------------------------------------------------------------------*/


/*------------- constructors & destructors --------------------------------*/

TextureObjChunk::TextureObjChunk(void) :
     Inherited( ),
    _uiChunkId(0)
{
}

TextureObjChunk::TextureObjChunk(const TextureObjChunk &source) :
     Inherited(source),
    _uiChunkId(     0)
{
}

TextureObjChunk::~TextureObjChunk(void)
{
    if(getGLId() > 0)
        Window::destroyGLObject(getGLId(), 1);
}

/*------------------------- Chunk Class Access ---------------------------*/

const StateChunkClass *TextureObjChunk::getClass(void) const
{
    return &_class;
}

UInt16 TextureObjChunk::getChunkId(void)
{
    return _uiChunkId;
}

/*------------------------------- Sync -----------------------------------*/

/*! React to field changes.
    Note: this function also handles CubeTexture changes, make sure to keep
    it consistent with the cubeTexture specifics
*/

void TextureObjChunk::changed(ConstFieldMaskArg whichField, 
                              UInt32            origin,
                              BitVector         details)
{
    // Only filter changed? Mipmaps need reinit.
    if((whichField & ~(MinFilterFieldMask | MagFilterFieldMask)) == 0)
    {
        if((getMinFilter() != GL_NEAREST) &&
           (getMinFilter() != GL_LINEAR))
        {
            Window::reinitializeGLObject(getGLId());
        }
        else
        {
            imageContentChanged();
        }
    } // Only priority changed? Refresh is fine.
    else if((whichField & ~PriorityFieldMask || FrameFieldMask) == 0)
    {
        imageContentChanged();
    } // Only dirty rectangle changed? Refresh is fine.
    else if ((whichField & ~(DirtyMinXFieldMask | DirtyMaxXFieldMask |
                             DirtyMinYFieldMask | DirtyMaxYFieldMask |
                             DirtyMinZFieldMask | DirtyMaxZFieldMask)) == 0)
    {
        Window::refreshGLObject(getGLId());
    }  
    else
    {
        Window::reinitializeGLObject(getGLId());
    }

    Inherited::changed(whichField, origin, details);
}

bool TextureObjChunk::isTransparent(void) const
{
    // Even if the texture has alpha, the Blending is makes the sorting
    // important, thus textures per se are not transparent
    return false;
}


/*----------------------------- onCreate --------------------------------*/

void TextureObjChunk::onCreate(const TextureObjChunk *source)
{
    Inherited::onCreate(source);

    if(GlobalSystemState == Startup)
        return;

    setGLId(Window::registerGLObject(
                boost::bind(&TextureObjChunk::handleGL, 
                            TextureObjChunk(this), 
                            _1, 
                            _2, 
                            _3),
                &TextureObjChunk::handleDestroyGL));
    
    _uiChunkId = _uiChunkCounter++;
}

void TextureObjChunk::onCreateAspect(const TextureObjChunk *createAspect,
                                  const TextureObjChunk *source      )
{
    Inherited::onCreateAspect(createAspect, source);

    _uiChunkId = createAspect->_uiChunkId;
}

/*------------------------------ Output ----------------------------------*/

void TextureObjChunk::dump(      UInt32    OSG_CHECK_ARG(uiIndent),
                        const BitVector OSG_CHECK_ARG(bvFlags )) const
{
    SLOG << "Dump TextureObjChunk NI" << std::endl;
}


/*------------------------------ State ------------------------------------*/

/*! Texture handler. Create/update a single texture.
    Also used by derived CubeMap chunk.
*/

void TextureObjChunk::handleTextureShader(Window *win, GLenum bindtarget)
{
#ifndef OSG_EMBEDDED
    if(!win->hasExtension(_nvTextureShader))
    {
        if(getShaderOperation() != GL_NONE)
            FINFO(("NV Texture Shaders not supported on Window %p!\n", win));
        return;
    }

    glErr("textureShader precheck");

    glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV,
                getShaderOperation());

    glErr("textureShader setup: operation");

    if(getShaderOperation() == GL_NONE)
        return;

    if(bindtarget == GL_TEXTURE_3D && !win->hasExtension(_nvTextureShader2))
    {
        FINFO(("NV Texture Shaders 2 not supported on Window %p!\n", win));
        return;
    }

    if(getShaderInput() != GL_NONE)
        glTexEnvi(GL_TEXTURE_SHADER_NV, GL_PREVIOUS_TEXTURE_INPUT_NV,
                    getShaderInput());

    glErr("textureShader setup: input");

    if(getShaderRGBADotProduct() != GL_NONE)
        glTexEnvi(GL_TEXTURE_SHADER_NV, 
                  GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV,
                  getShaderRGBADotProduct());

    glErr("textureShader setup: rgba dotprod");

    if(getShaderOffsetMatrix().size() == 4)
    {
        glTexEnvfv(GL_TEXTURE_SHADER_NV, GL_OFFSET_TEXTURE_MATRIX_NV,
                    (GLfloat*)&(getShaderOffsetMatrix()[0]));

        glErr("textureShader setup: offset matrix");
    }
    else if(getShaderOffsetMatrix().size() != 0)
    {
        FWARNING(("TextureObjChunk::handleTextureShader: shaderOffsetMatrix has"
                    " to have 4 entries, not %d!\n",
                    getShaderOffsetMatrix().size() ));
    }

    glTexEnvf(GL_TEXTURE_SHADER_NV, GL_OFFSET_TEXTURE_SCALE_NV,
                getShaderOffsetScale());

    glErr("textureShader setup: offset scale");

    glTexEnvf(GL_TEXTURE_SHADER_NV, GL_OFFSET_TEXTURE_BIAS_NV,
                getShaderOffsetBias());

    glErr("textureShader setup: offset bias");

    GLint cullmodes[4];
    if(getShaderCullModes() & 0x1)
    {
        cullmodes[0] = GL_GEQUAL;
    }
    else
    {
        cullmodes[0] = GL_LESS;
    }

    if(getShaderCullModes() & 0x2)
    {
        cullmodes[1] = GL_GEQUAL;
    }
    else
    {
        cullmodes[1] = GL_LESS;
    }

    if(getShaderCullModes() & 0x4)
    {
        cullmodes[2] = GL_GEQUAL;
    }
    else
    {
        cullmodes[2] = GL_LESS;
    }

    if(getShaderCullModes() & 0x8)
    {
        cullmodes[3] = GL_GEQUAL;
    }
    else
    {
        cullmodes[3] = GL_LESS;
    }

    glTexEnviv(GL_TEXTURE_SHADER_NV, GL_CULL_MODES_NV,
                    cullmodes);

    glErr("textureShader setup: cull modes");

    glTexEnvfv(GL_TEXTURE_SHADER_NV, GL_CONST_EYE_NV,
                    getShaderConstEye().getValues());

    glErr("textureShader setup: const eye");



#ifdef OSG_DEBUG
    GLint consistent;
    glGetTexEnviv(GL_TEXTURE_SHADER_NV, GL_SHADER_CONSISTENT_NV,
          &consistent);
    if(!consistent)
    {
        FWARNING(("Texture shaders not consistent!\n"));
    }
#endif

#endif
}

void TextureObjChunk::handleTexture(Window *win, 
                                 UInt32 id,
                                 GLenum bindtarget,
                                 GLenum paramtarget,
                                 GLenum imgtarget,
                                 Window::GLObjectStatusE mode, 
                                 ImagePtr img,
                                 Int32    side)
{
#ifndef OSG_EMBEDDED
    if( img==NullFC || ! img->getDimension()) // no image ?
        return;

    if(mode == Window::initialize || mode == Window::reinitialize)
    {
        if(bindtarget == GL_TEXTURE_3D && !win->hasExtension(_extTex3D))
        {
            FNOTICE(("3D textures not supported on Window %p!\n", win));
            return;
        }

        if(imgtarget == GL_TEXTURE_RECTANGLE_ARB && 
           !win->hasExtension(_arbTextureRectangle))
        {
            FNOTICE(("Rectangular textures not supported on Window %p!\n", 
                     win));
            return;
        }

        if(paramtarget == GL_TEXTURE_CUBE_MAP_ARB && 
           !win->hasExtension(_arbCubeTex))
        {
            FNOTICE(("Cube textures not supported on Window %p!\n", win));
            return;
        }

        if(img->hasCompressedData() && 
           !win->hasExtension(_arbTextureCompression))
        {
            FNOTICE(("Compressed textures not supported on Window %p!\n", 
                     win));
            return;
        }

        if(mode == Window::reinitialize)
        {
            GLuint tex = id;
            glDeleteTextures(1, &tex);
        }

        // 3D texture functions
        void (OSG_APIENTRY *TexImage3D)(GLenum target, 
                                        GLint level, 
                                        GLenum internalformat,
                                        GLsizei width, 
                                        GLsizei height, 
                                        GLsizei depth,
                                        GLint border, 
                                        GLenum format, 
                                        GLenum type,
                                        const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLenum internalformat,
                                  GLsizei width, 
                                  GLsizei height, 
                                  GLsizei depth,
                                  GLint border, 
                                  GLenum format, 
                                  GLenum type,
                                  const GLvoid *pixels))
            win->getFunction(_funcTexImage3D);

        void (OSG_APIENTRY*TexSubImage3D)
                          (GLenum target, GLint level, GLint xoffset,
                           GLint yoffset, GLint zoffset, GLsizei width,
                           GLsizei height, GLsizei depth, GLenum format,
                           GLenum type, const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, GLint level, GLint xoffset,
                      GLint yoffset, GLint zoffset, GLsizei width,
                      GLsizei height, GLsizei depth, GLenum format,
                      GLenum type, const GLvoid *pixels))
            win->getFunction(_funcTexSubImage3D);


        // Compressed texture functions
        void (OSG_APIENTRY*CompressedTexImage1D)(GLenum target, 
                                                 GLint level, 
                                                 GLenum internalformat, 
                                                 GLsizei width, GLint border, 
                                                 GLsizei imageSize, 
                                                 const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLenum internalformat, 
                                  GLsizei width, 
                                  GLint border,  
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexImage1D);
        
        void (OSG_APIENTRY*CompressedTexSubImage1D)(GLenum target, 
                                                    GLint level, 
                                                    GLint xoffset, 
                                                    GLsizei width,
                                                    GLenum format, 
                                                    GLsizei imageSize, 
                                                    const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLint xoffset, 
                                  GLsizei width,
                                  GLenum format, 
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage1D);
        
        void (OSG_APIENTRY*CompressedTexImage2D)(GLenum target, 
                                                 GLint level, 
                                                 GLenum internalformat, 
                                                 GLsizei width, 
                                                 GLsizei height, 
                                                 GLint border, 
                                                 GLsizei imageSize, 
                                                 const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLenum internalformat, 
                                  GLsizei width, 
                                  GLsizei height, 
                                  GLint border, 
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexImage2D);
        
        void (OSG_APIENTRY*CompressedTexSubImage2D)(GLenum target, 
                                                    GLint level, 
                                                    GLint xoffset, 
                                                    GLint yoffset, 
                                                    GLsizei width, 
                                                    GLsizei height, 
                                                    GLenum format,
                                                    GLsizei imageSize, 
                                                    const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLint xoffset, 
                                  GLint yoffset, 
                                  GLsizei width, 
                                  GLsizei height, 
                                  GLenum format,
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage2D);

        void (OSG_APIENTRY*CompressedTexImage3D)(GLenum target, 
                                                 GLint level, 
                                                 GLenum internalformat,
                                                 GLsizei width, 
                                                 GLsizei height, 
                                                 GLsizei depth,
                                                 GLint border,
                                                 GLsizei imageSize, 
                                                 const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLenum internalformat,
                                  GLsizei width, 
                                  GLsizei height, 
                                  GLsizei depth,
                                  GLint border,
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexImage3D);
        
        void (OSG_APIENTRY*CompressedTexSubImage3D)(GLenum target, 
                                                    GLint level, 
                                                    GLint xoffset, 
                                                    GLint yoffset, 
                                                    GLint zoffset, 
                                                    GLsizei width, 
                                                    GLsizei height, 
                                                    GLsizei depth, 
                                                    GLenum format, 
                                                    GLsizei imageSize, 
                                                    const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, 
                                  GLint level, 
                                  GLint xoffset, 
                                  GLint yoffset, 
                                  GLint zoffset, 
                                  GLsizei width, 
                                  GLsizei height, 
                                  GLsizei depth, 
                                  GLenum format, 
                                  GLsizei imageSize, 
                                  const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage3D);
        
        // as we're not allocating anything here, the same code can be used
        // for reinitialization
        if(! img || ! img->getDimension()) // no image ?
            return;

        glErr("TextureObjChunk::initialize precheck");

        FDEBUG(("texture (re-)initialize\n"));
        
        glBindTexture(bindtarget, id);

        if(paramtarget != GL_NONE)
        {
            // set the parameters
            glTexParameterf(paramtarget, GL_TEXTURE_PRIORITY,   getPriority());
            glTexParameteri(paramtarget, GL_TEXTURE_MIN_FILTER, getMinFilter());
            glTexParameteri(paramtarget, GL_TEXTURE_MAG_FILTER, getMagFilter());
            glTexParameteri(paramtarget, GL_TEXTURE_WRAP_S, getWrapS());

            if(paramtarget == GL_TEXTURE_2D ||
               paramtarget == GL_TEXTURE_3D ||
               paramtarget == GL_TEXTURE_CUBE_MAP_ARB)
            {
                glTexParameteri(paramtarget, GL_TEXTURE_WRAP_T, getWrapT());
            }

            if(paramtarget == GL_TEXTURE_3D ||
               paramtarget == GL_TEXTURE_CUBE_MAP_ARB)
            {
                glTexParameteri(paramtarget, GL_TEXTURE_WRAP_R, getWrapR());
            }

             if(getAnisotropy() > 1.0f &&
                win->hasExtension(_extTextureFilterAnisotropic))
             {
                glTexParameterf(paramtarget, 
                                GL_TEXTURE_MAX_ANISOTROPY_EXT, 
                                getAnisotropy());
             }

             glTexParameterfv(paramtarget, 
                              GL_TEXTURE_BORDER_COLOR,
                              (GLfloat *) getBorderColor().getValuesRGBA());

             if(getCompareMode() != GL_NONE &&
                win->hasExtension(_extShadow))
             {
                 glTexParameteri(paramtarget,
                                 GL_TEXTURE_COMPARE_MODE,
                                 getCompareMode());
                 glTexParameteri(paramtarget,
                                 GL_TEXTURE_COMPARE_FUNC,
                                 getCompareFunc());
             }

             if(getDepthMode() != GL_LUMINANCE &&
                win->hasExtension(_extDepthTexture))
             {
                 glTexParameteri(paramtarget,
                                 GL_DEPTH_TEXTURE_MODE,
                                 getDepthMode());
             }
             
            glErr("TextureObjChunk::initialize params");
        }

        // set the image
        GLenum internalFormat = getInternalFormat();
        GLenum externalFormat = img->getPixelFormat();
        GLenum type           = img->getDataType();
        UInt32 width          = img->getWidth();
        UInt32 height         = img->getHeight();
        UInt32 depth          = img->getDepth();
        bool   compressedData = img->hasCompressedData();

        bool doScale = getScale(); // scale the texture to 2^?
        UInt32 frame = getFrame();

        bool defined = false;   // Texture defined ?
        bool needMipmaps =  getMinFilter() == GL_NEAREST_MIPMAP_NEAREST ||
                            getMinFilter() == GL_LINEAR_MIPMAP_NEAREST  ||
                            getMinFilter() == GL_NEAREST_MIPMAP_LINEAR  ||
                            getMinFilter() == GL_LINEAR_MIPMAP_LINEAR   ;

        if(internalFormat == GL_NONE)
        {
            switch(externalFormat)
            {
#if defined(GL_BGR) && defined(GL_BGR_EXT)
                case GL_BGR:
#else
#  if defined(GL_BGR)
                case GL_BGR:
#  endif
#  if defined(GL_BGR_EXT)
                case GL_BGR_EXT:
#  endif
#endif
#if defined(GL_BGR) || defined(GL_BGR_EXT)
                    internalFormat = GL_RGB;
                    break;
#endif
#if defined(GL_BGRA) && defined(GL_BGRA_EXT)
                case GL_BGRA:
#else
#  if defined(GL_BGRA)
                case GL_BGRA:
#  endif
#  if defined(GL_BGRA_EXT)
                case GL_BGRA_EXT:
#  endif
#endif
#if defined(GL_BGRA) || defined(GL_BGRA_EXT)
                    internalFormat = GL_RGBA;
                    break;
#endif
                case GL_INTENSITY:
                    internalFormat = GL_INTENSITY;
                    externalFormat = GL_LUMINANCE;
                    break;
                    
                default:    
                    internalFormat = externalFormat;
                    break;
            }
        }

        if(getExternalFormat() != GL_NONE)
            externalFormat = getExternalFormat();
        
        if(imgtarget == GL_TEXTURE_RECTANGLE_ARB && needMipmaps)
        {
            SWARNING << "TextureObjChunk::initialize1: Can't do mipmaps"
                     << "with GL_TEXTURE_RECTANGLE_ARB target! Ignored"
                     << std::endl;
            needMipmaps= false;
        }
        
        // do we need mipmaps?
        if(needMipmaps)
        {
            // do we have usable mipmaps ?
            if(img->getMipMapCount() == img->calcMipmapLevelCount() &&
                 osgIsPower2(width) && osgIsPower2(height) &&
                 osgIsPower2(depth)
              )
            {
                for(UInt16 i = 0; i < img->getMipMapCount(); i++)
                {
                    UInt32 w, h, d;
                    img->calcMipmapGeometry(i, w, h, d);

                    if(compressedData)
                    {
                        switch (imgtarget)
                        {
                        case GL_TEXTURE_1D:
                            CompressedTexImage1D(GL_TEXTURE_1D, i, internalFormat,
                                            w, 0,
                                            img->calcMipmapLevelSize(i),
                                            img->getData(i, frame, side));
                            break;
                        case GL_TEXTURE_2D:
                            CompressedTexImage2D(imgtarget, i, internalFormat,
                                            w, h, 0,
                                            img->calcMipmapLevelSize(i),
                                            img->getData(i, frame, side));
                            break;
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                            CompressedTexImage2D(imgtarget, i, internalFormat,
                                            w, h, 0,
                                            img->calcMipmapLevelSize(i), 
                                            img->getData(i, frame, side));
                            break;
                        case GL_TEXTURE_3D:
                            CompressedTexImage3D(GL_TEXTURE_3D, i, internalFormat,
                                            w, h, d, 0,
                                            img->calcMipmapLevelSize(i),
                                            img->getData(i, frame, side));
                            break;
                       default:
                                SFATAL << "TextureObjChunk::initialize1: unknown target "
                                       << imgtarget << "!!!" << std::endl;
                                break;
                        }
                    }
                    else
                    {
                        switch (imgtarget)
                        {
                        case GL_TEXTURE_1D:
                            glTexImage1D(GL_TEXTURE_1D, i, internalFormat,
                                            w, 0,
                                            externalFormat, type,
                                            img->getData(i, frame, side));
                            break;
                        case GL_TEXTURE_2D:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                            glTexImage2D(imgtarget, i, internalFormat,
                                            w, h, 0,
                                            externalFormat, type,
                                            img->getData(i, frame, side));
                            break;
                        case GL_TEXTURE_3D:
                              TexImage3D(GL_TEXTURE_3D, i, internalFormat,
                                            w, h, d, 0,
                                            externalFormat, type,
                                            img->getData(i, frame, side));
                            break;
                       default:
                                SFATAL << "TextureObjChunk::initialize1: unknown target "
                                       << imgtarget << "!!!" << std::endl;
                                break;
                        }
                    }
                }
                defined = true;
            }

            if(! defined)
            {
                // Nope, do we have SGIS_generate_mipmaps?
                if(win->hasExtension(_sgisGenerateMipmap))
                {
                    if(paramtarget != GL_NONE)
                        glTexParameteri(paramtarget, GL_GENERATE_MIPMAP_SGIS, GL_TRUE);
                    glErr("TextureObjChunk::activate generate_mipmaps");
                    needMipmaps = false; // automagic does it
                }
                else
                {
                    // Nope, try to use gluBuild?DMipmaps
                    void *data = NULL;

                    // can we use it directly?
                    if(! osgIsPower2(width) ||
                         ! osgIsPower2(height) ||
                         ! osgIsPower2(depth)
                      )
                    {
                        // scale is only implemented for 2D
                        if(imgtarget != GL_TEXTURE_2D)
                        {
                            SWARNING << "TextureObjChunk::initialize: can't mipmap "
                                     << "non-2D textures that are not 2^x !!!"
                                     << std::endl;
                        }
                        else
                        {
                            UInt32 outw = osgNextPower2(width);
                            UInt32 outh = osgNextPower2(height);

                            data = malloc(outw * outh * img->getBpp());

                            // should we scale to next power of 2?
                            if(doScale)
                            {
                                GLint res = gluScaleImage(externalFormat,
                                                width, height, type, img->getData(0, frame, side),
                                                outw, outh, type, data);

                                if(res)
                                {
                                    SWARNING << "TextureObjChunk::initialize: "
                                             << "gluScaleImage failed: "
                                             << gluErrorString(res) << "("
                                             << res << ")!"
                                             << std::endl;
                                    free(data);
                                    data = NULL;
                                }
                                else
                                {
                                    width = outw;
                                    height = outh;
                                }
                            }
                            else // nope, just copy the image to the lower left part
                            {
                                memset(data, 0, outw * outh * img->getBpp());

                                UInt16 bpl = width * img->getBpp();
                                UInt8 * src = (UInt8 *) img->getData(0, frame, side);
                                UInt8 * dest= (UInt8 *) data;

                                for(UInt32 y = 0; y < height; y++)
                                {
                                    memcpy(dest, src, bpl);

                                    src  += bpl;
                                    dest += outw * img->getBpp();
                                }
                                width = outw;
                                height = outh;
                            }
                        }
                    }
                    else
                    {
                        data = const_cast<void *>(
                            static_cast<const void *>(img->getData(0, 
                                                                   frame,
                                                                   side)));
                    }

                    if(data)
                    {
                        switch (imgtarget)
                        {
                        case GL_TEXTURE_1D:
                                gluBuild1DMipmaps(imgtarget, internalFormat, width,
                                                    externalFormat, type, data);
                                break;
                        case GL_TEXTURE_2D:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                                gluBuild2DMipmaps(imgtarget, internalFormat,
                                                    width, height,
                                                    externalFormat, type, data);
                                break;
                        case GL_TEXTURE_3D:
#  ifdef GLU_VERSION_1_3
                                gluBuild3DMipmaps(imgtarget, internalFormat,
                                                    width, height, depth,
                                                    externalFormat, type, data);
#  else
                                FWARNING(("TextureObjChunk::initialize: 3d textures "
                                          "supported, but GLU version < 1.3, thus "
                                          "gluBuild3DMipmaps not supported!\n"));
#  endif
                                break;
                        default:
                                SFATAL << "TextureObjChunk::initialize2: unknown target "
                                       << imgtarget << "!!!" << std::endl;
                        }

                        if(data != img->getData(0, frame, side))
                            free(data);
                        defined = true;
                    } // data
                } // need to use gluBuildMipmaps?
            } // got them from the image already?
        } // need mipmaps?

        // no mipmaps, or mipmapping failed?
        if(! defined)
        {
            // got here needing mipmaps?
            if(needMipmaps && paramtarget != GL_NONE)  // turn them off
                glTexParameteri(paramtarget, GL_TEXTURE_MIN_FILTER, GL_LINEAR);

            void * data = NULL;
            UInt32 datasize = 0;

            // Do we need to massage the texture or can we just use it?
            if(imgtarget != GL_TEXTURE_RECTANGLE_ARB &&
               !win->hasExtension(_arbTextureNonPowerOfTwo) &&
               (!osgIsPower2(width) || !osgIsPower2(height) || !osgIsPower2(depth))
              )
            {
                // No, need to scale or cut
                
                // should we scale to next power of 2?
                if(doScale)
                {
                    // scale is only implemented for 2D
                    if(imgtarget != GL_TEXTURE_2D &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB &&
                       imgtarget != GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB
                      )
                    {
                        SWARNING << "TextureObjChunk::initialize: can't scale "
                                 << "non-2D textures that are not 2^x !!!"
                                 << std::endl;
                    }
                    else
                    {
                        UInt32 outw = osgNextPower2(width);
                        UInt32 outh = osgNextPower2(height);

                        data = malloc(outw * outh * img->getBpp());
                        datasize = outw * outh * img->getBpp();
                        
                        GLint res = gluScaleImage(externalFormat,
                                        width, height, type, 
                                        img->getData(0, frame, side),
                                        outw, outh, type, data);

                        if(res)
                        {
                            SWARNING << "TextureObjChunk::initialize: "
                                     << "gluScaleImage failed: "
                                     << gluErrorString(res) << "("
                                     << res << ")!" << std::endl;
                            free(data);
                            data = NULL;
                        }
                        else
                        {
                            width = outw;
                            height = outh;
                        }
                    }
                }
                else // don't scale, just use ll corner
                {
                   if(compressedData)
                   {
                       switch (imgtarget)
                       {
                       case GL_TEXTURE_1D:
                           CompressedTexImage1D(GL_TEXTURE_1D, 0, internalFormat,
                                           osgNextPower2(width), 0, 0, NULL);
                           CompressedTexSubImage1D(GL_TEXTURE_1D, 0, 0, width,
                                           externalFormat, 
                                           img->getFrameSize(), 
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_2D:
                           CompressedTexImage2D(imgtarget, 0, internalFormat,
                                           osgNextPower2(width),
                                           osgNextPower2(height), 0,
                                           0, NULL);
                           CompressedTexSubImage2D(imgtarget, 0, 0, 0, width, height,
                                           externalFormat,
                                           img->getFrameSize(), 
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                           CompressedTexImage2D(imgtarget, 0, internalFormat,
                                           osgNextPower2(width),
                                           osgNextPower2(height), 0,
                                           0, NULL);
                           CompressedTexSubImage2D(imgtarget, 0, 0, 0, width, height,
                                           externalFormat,
                                           (img->getSideCount() > 1) ? img->getSideSize() :
                                                img->getFrameSize(), 
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_RECTANGLE_ARB:
                           CompressedTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, internalFormat,
                                           width, height, 0,
                                           img->getFrameSize(), 
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_3D:
                           CompressedTexImage3D(GL_TEXTURE_3D, 0, internalFormat,
                                           osgNextPower2(width),
                                           osgNextPower2(height),
                                           osgNextPower2(depth),
                                           0, 0, NULL);
                           CompressedTexSubImage3D(GL_TEXTURE_3D, 0,  0, 0, 0,
                                           width, height, depth,
                                           externalFormat,
                                           img->getFrameSize(), 
                                           img->getData(0, frame, side));
                           break;
                       default:
                               SFATAL << "TextureObjChunk::initialize4: unknown target "
                                      << imgtarget << "!!!" << std::endl;
                       }
                   }
                   else
                   {
                       switch (imgtarget)
                       {
                       case GL_TEXTURE_1D:
                           glTexImage1D(GL_TEXTURE_1D, 0, internalFormat,
                                           osgNextPower2(width), 0,
                                           externalFormat, type,
                                           NULL);
                           glTexSubImage1D(GL_TEXTURE_1D, 0, 0, width,
                                           externalFormat, type,
                                            img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_2D:
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                       case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                       case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                           glTexImage2D(imgtarget, 0, internalFormat,
                                           osgNextPower2(width),
                                           osgNextPower2(height), 0,
                                           externalFormat, type,
                                           NULL);
                           glTexSubImage2D(imgtarget, 0, 0, 0, width, height,
                                           externalFormat, type,
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_RECTANGLE_ARB:
                           glTexImage2D( GL_TEXTURE_RECTANGLE_ARB, 0, internalFormat,
                                           width, height, 0,
                                           externalFormat, type,
                                           img->getData(0, frame, side));
                           break;
                       case GL_TEXTURE_3D:
                             TexImage3D(GL_TEXTURE_3D, 0, internalFormat,
                                           osgNextPower2(width),
                                           osgNextPower2(height),
                                           osgNextPower2(depth),
                                           0, externalFormat, type, NULL);
                             TexSubImage3D(GL_TEXTURE_3D, 0,  0, 0, 0,
                                           width, height, depth,
                                           externalFormat, type,
                                           img->getData(0, frame, side));
                           break;
                       default:
                               SFATAL << "TextureObjChunk::initialize4: unknown target "
                                      << imgtarget << "!!!" << std::endl;
                       } // switch imgtarget
                   } // compressed data?
                   
                   defined = true;
               } // do scale               
            } 
	        else // can we use it directly?
            {
                data = const_cast<void *>(
                    static_cast<const void *>(img->getData(0, 
                                                           frame,
                                                           side)));

               datasize = (img->getSideCount() > 1) ? img->getSideSize() :
                                                      img->getFrameSize();
            } // can we use it directly?
            
            if(!defined) // either we can use the texture directly, or it was scaled
            {
                // A image without data is quite handy if you need the
                // texture only on the graphics card. So don't check for data here
               
                 if(compressedData)
                 {
                     switch (imgtarget)
                     {
                     case GL_TEXTURE_1D:
                         CompressedTexImage1D(GL_TEXTURE_1D, 0, internalFormat,
                                         width, 0,
                                         datasize, data);
                         break;
                     case GL_TEXTURE_2D:
                     case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                     case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                     case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                     case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                     case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                     case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                         CompressedTexImage2D(imgtarget, 0, internalFormat,
                                         width, height, 0,
                                          datasize, data);
                         break;
                     case GL_TEXTURE_RECTANGLE_ARB:
                         CompressedTexImage2D(GL_TEXTURE_RECTANGLE_ARB, 0, internalFormat,
                                         width, height, 0,
                                         datasize, data);
                         break;
                     case GL_TEXTURE_3D:
                         CompressedTexImage3D(GL_TEXTURE_3D, 0, internalFormat,
                                         width, height, depth, 0,
                                         datasize, data);
                         break;
                     default:
                         SFATAL << "TextureObjChunk::initialize3: unknown target "
                                << imgtarget << "!!!" << std::endl;
                     }
                 }
                 else
                 {
                        switch (imgtarget)
                        {
                        case GL_TEXTURE_1D:
                            glTexImage1D(GL_TEXTURE_1D, 0, internalFormat,
                                            width, 0,
                                            externalFormat, type,
                                            data);
                            break;
                        case GL_TEXTURE_2D:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                        case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                        case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                            glTexImage2D(imgtarget, 0, internalFormat,
                                            width, height, 0,
                                            externalFormat, type,
                                            data);
                            break;
                        case GL_TEXTURE_RECTANGLE_ARB:
                            glTexImage2D(GL_TEXTURE_RECTANGLE_ARB, 0, internalFormat,
                                            width, height, 0,
                                            externalFormat, type,
                                            data);
                            break;
                        case GL_TEXTURE_3D:
                              TexImage3D(GL_TEXTURE_3D, 0, internalFormat,
                                            width, height, depth, 0,
                                            externalFormat, type,
                                            data);
                            break;
                        default:
                            SFATAL << "TextureObjChunk::initialize3: unknown target "
                                   << imgtarget << "!!!" << std::endl;
                        }
                    }
                
            }

            if(data != img->getData(0, frame, side))
                free(data);
        }

        glErr("TextureObjChunk::initialize image");
    }
    else if(mode == Window::needrefresh)
    {
        void (OSG_APIENTRY*TexSubImage3D)
                          (GLenum target, GLint level, GLint xoffset,
                           GLint yoffset, GLint zoffset, GLsizei width,
                           GLsizei height, GLsizei depth, GLenum format,
                           GLenum type, const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, GLint level, GLint xoffset,
                      GLint yoffset, GLint zoffset, GLsizei width,
                      GLsizei height, GLsizei depth, GLenum format,
                      GLenum type, const GLvoid *pixels))
            win->getFunction(_funcTexSubImage3D);

        void (OSG_APIENTRY*CompressedTexSubImage1D)
                          (GLenum target, GLint level, GLint xoffset, GLsizei width,
                           GLenum format, GLsizei imageSize, const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, GLint level, GLint xoffset, GLsizei width,
                           GLenum format, GLsizei imageSize, const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage1D);

        void (OSG_APIENTRY*CompressedTexSubImage2D)
                          (GLenum target, GLint level, 
                           GLint xoffset, GLint yoffset, 
                           GLsizei width, GLsizei height, GLenum format,
                           GLsizei imageSize, const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, GLint level, 
                           GLint xoffset, GLint yoffset, 
                           GLsizei width, GLsizei height, GLenum format,
                           GLsizei imageSize, const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage2D);

        void (OSG_APIENTRY*CompressedTexSubImage3D)
                          (GLenum target, GLint level, 
                           GLint xoffset, GLint yoffset, GLint zoffset, 
                           GLsizei width, GLsizei height, GLsizei depth, 
                           GLenum format, GLsizei imageSize, const GLvoid *pixels) =
            (void (OSG_APIENTRY*)(GLenum target, GLint level, 
                           GLint xoffset, GLint yoffset, GLint zoffset, 
                           GLsizei width, GLsizei height, GLsizei depth, 
                           GLenum format, GLsizei imageSize, const GLvoid *pixels))
            win->getFunction(_funcCompressedTexSubImage3D);

        GLenum externalFormat = img->getPixelFormat();
        GLenum type           = img->getDataType();
        bool   compressedData = img->hasCompressedData();
        bool   has3DTex       = win->hasExtension(_extTex3D);
        
        if(bindtarget == GL_TEXTURE_3D && !has3DTex)
        {
            FINFO(("3D textures not supported on Window %p!\n", win));
            return;
        }

        if(! img) // no image ?
            return;

        if(getExternalFormat() != GL_NONE)
            externalFormat = getExternalFormat();

        if(!getScale() || imgtarget == GL_TEXTURE_RECTANGLE_ARB
                       || win->hasExtension(_arbTextureNonPowerOfTwo) 
                       ||  (osgIsPower2(img->getWidth() ) &&
                            osgIsPower2(img->getHeight()) &&
                            osgIsPower2(img->getDepth() )
          )                )
        {
            // activate the texture
            glBindTexture(bindtarget, id);

            // Find out what to update
            UInt32 ix, ax, iy, ay, iz, az;
            ix = (getDirtyMinX()!=-1) ? getDirtyMinX() : 0;
            ax = (getDirtyMaxX()!=-1) ? getDirtyMaxX() : img->getWidth() - 1;
            iy = (getDirtyMinY()!=-1) ? getDirtyMinY() : 0;
            ay = (getDirtyMaxY()!=-1) ? getDirtyMaxY() : img->getHeight() - 1;
            iz = (getDirtyMinZ()!=-1) ? getDirtyMinZ() : 0;
            az = (getDirtyMaxZ()!=-1) ? getDirtyMaxZ() : img->getDepth() - 1;
            
            UInt32 w, h, d;
            w = ax - ix + 1;
            h = ay - iy + 1;
            d = az - iz + 1;

            if(w != img->getWidth())
                glPixelStorei(GL_UNPACK_ROW_LENGTH,  img->getWidth());
            if(ix != 0)
                glPixelStorei(GL_UNPACK_SKIP_PIXELS, ix);
            if(iy != 0)
                glPixelStorei(GL_UNPACK_SKIP_ROWS,   iy);
            if(has3DTex && iz != 0)
                glPixelStorei(GL_UNPACK_SKIP_IMAGES, iz);
            
            if(compressedData)
            {
                switch (imgtarget)
                {
                case GL_TEXTURE_1D:
                    CompressedTexSubImage1D(GL_TEXTURE_1D, 0, ix, w,
                                    externalFormat, img->getFrameSize(),
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_2D:
                    CompressedTexSubImage2D(imgtarget, 0, ix, iy, w, h,
                                    externalFormat, img->getFrameSize(),
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                    CompressedTexSubImage2D(imgtarget, 0, ix, iy, w, h,
                                    externalFormat,     
                                    (img->getSideCount() > 1) ? img->getSideSize() :
                                                                img->getFrameSize(), 
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_RECTANGLE_ARB:
                    CompressedTexSubImage2D(GL_TEXTURE_RECTANGLE_ARB, 0, 
                                    ix, iy, w, h,
                                    externalFormat, img->getFrameSize(),
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_3D:
                      CompressedTexSubImage3D(GL_TEXTURE_3D, 0,  ix, iy, iz,
                                    w, h, d,
                                    externalFormat, img->getFrameSize(),
                                    img->getData( 0, getFrame(), side ) );
                    break;
                default:
                        SFATAL << "TextureObjChunk::refresh: unknown target "
                               << imgtarget << "!!!" << std::endl;
                }
            }
            else
            {
                switch (imgtarget)
                {
                case GL_TEXTURE_1D:
                    glTexSubImage1D(GL_TEXTURE_1D, 0, ix, w,
                                    externalFormat, type,
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_2D:
                case GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB:
                case GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB:
                case GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB:
                case GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB:
                    glTexSubImage2D(imgtarget, 0, ix, iy, w, h,
                                    externalFormat, type,
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_RECTANGLE_ARB:
                    glTexSubImage2D(GL_TEXTURE_RECTANGLE_ARB, 0,
                                    ix, iy, w, h,
                                    externalFormat, type,
                                    img->getData( 0, getFrame(), side ) );
                    break;
                case GL_TEXTURE_3D:
                      TexSubImage3D(GL_TEXTURE_3D, 0,  ix, iy, iz,
                                    w, h, d,
                                    externalFormat, type,
                                    img->getData( 0, getFrame(), side ) );
                    break;
                default:
                        SFATAL << "TextureObjChunk::refresh: unknown target "
                               << imgtarget << "!!!" << std::endl;
                }
            }


            if(w != img->getWidth())
                glPixelStorei(GL_UNPACK_ROW_LENGTH,  0);
            if(ix != 0)
                glPixelStorei(GL_UNPACK_SKIP_PIXELS, 0);
            if(iy != 0)
                glPixelStorei(GL_UNPACK_SKIP_ROWS,   0);
            if(has3DTex && iz != 0)
                glPixelStorei(GL_UNPACK_SKIP_IMAGES, 0);
           
            if(paramtarget != GL_NONE)
                glTexParameterf(paramtarget, GL_TEXTURE_PRIORITY,
                                  getPriority());
        }
        else
        {
            SWARNING << "TextureObjChunk::refresh: not implemented yet for "
                     << "scaling!!!" << std::endl;
        }

        glErr("TextureObjChunk::refresh image");
    }

#endif
}


/*! GL object handler
    create the texture and destroy it
*/
void TextureObjChunk::handleGL(DrawEnv                 *pEnv, 
                               UInt32                   osgid,
                               Window::GLObjectStatusE  mode)
{
#ifndef OSG_EMBEDDED
    Window::GLObjectStatusE mode;
    UInt32 osgid;
    GLuint id;

    Window *win = pEnv->getWindow();

    Window::unpackIdStatus(idstatus, osgid, mode);

    id = win->getGLObjectId(osgid);

    if(mode == Window::destroy)
    {
        glDeleteTextures(1, &id);
        win->setGLObjectId(osgid, 0);
    }
    else if(mode == Window::finaldestroy)
    {
        //SWARNING << "Last texture user destroyed" << std::endl;
    }
    else if(mode == Window::initialize || mode == Window::reinitialize ||
            mode == Window::needrefresh )
    {
        if(mode == Window::initialize)
        {
            glGenTextures(1, &id);
            win->setGLObjectId(osgid, id);
        }

        GLenum target;

        ImagePtr img = getImage();

        if (img != NullFC)
        {
            if(img->getSideCount() == 1)
            {
                target = getTarget();
                if ( target == GL_NONE )
                {
                    if(img->getDepth() > 1)
                    {
                        if(win->hasExtension(_extTex3D))
                        {
                            target = GL_TEXTURE_3D;
                        }
                        else
                        {
                            FWARNING(
                                ("TextureObjChunk::initialize: 3D textures not "
                                 "supported for this window!\n"));
                            return;
                        }
                    }
                    else if(img->getHeight() > 1)        
                    {
                        target = GL_TEXTURE_2D;
                    }
                    else
                    {
                        target = GL_TEXTURE_1D;
                    }
                }
                
                handleTexture(win, id, target, target, target, mode, img);
            }
            else
            {
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB, 
                              mode, getImage(), 5); 
                // Have to use initialize mode here, otherwise the
                // texture is destroyed for every side      
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_NONE, 
                              GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB, 
                              Window::initialize, getImage(), 4);        
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_NONE, 
                              GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB, 
                              Window::initialize, getImage(), 3);        
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_NONE, 
                              GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB, 
                              Window::initialize, getImage(), 2);        
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_NONE, 
                              GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB, 
                              Window::initialize, getImage(), 1);        
                handleTexture(win, id, 
                              GL_TEXTURE_CUBE_MAP_ARB, 
                              GL_NONE, 
                              GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB, 
                              Window::initialize, getImage(), 0);        

            }
        }
    }
    else
    {
        SWARNING << "TextureObjChunk(" << this << "::handleGL: Illegal mode: "
             << mode << " for id " << id << std::endl;
    }
#endif
}

void TextureObjChunk::handleDestroyGL(DrawEnv                 *pEnv, 
                                      UInt32                   osgid, 
                                      Window::GLObjectStatusE  mode)
{
}

void TextureObjChunk::activate(DrawEnv *pEnv, UInt32 idx)
{    
#ifndef OSG_EMBEDDED
#ifdef OSG_DUMP_TEX
    fprintf(stderr, "Activate %d\n", _uiChunkId);
#endif

    Window *win = pEnv->getWindow();
    
    Real32 nteximages, ntexcoords;

    if((nteximages = win->getConstantValue(GL_MAX_TEXTURE_IMAGE_UNITS_ARB)) ==
       Window::unknownConstant
      )
    {
        nteximages = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(nteximages == Window::unknownConstant)
            nteximages = 1.0f;
    }
    if((ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant
      )
    {
        ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(ntexcoords == Window::unknownConstant)
            ntexcoords = 1.0f;
    }

    if(idx >= static_cast<UInt32>(nteximages))
    {
#ifdef OSG_DEBUG
        FWARNING(("TextureObjChunk::activate: Trying to bind image unit %d,"
                  " but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }

    if(activateTexture(win, idx))
        return; // trying to access too many textures

    win->validateGLObject(getGLId(), pEnv);

    ImagePtr img = getImage();
    GLenum target = getTarget();

    if( img == NullFC || ! img->getDimension()) // no image ?
        return;

    glErr("TextureObjChunk::activate precheck");

    if(img->getSideCount() == 1)
    {
        if ( target == GL_NONE )
        {
            if ( img->getDepth() > 1 )
            {
                if(win->hasExtension(_extTex3D))
                    target = GL_TEXTURE_3D;
                else
                {
                    FWARNING(("TextureObjChunk::activate: 3D textures not "
                              "supported for this window!\n"));
                    return;
                }
            }
            else if(img->getHeight() > 1)   
                target = GL_TEXTURE_2D;
            else                            
                target = GL_TEXTURE_1D;
        }
    }
    else
    {
        target = GL_TEXTURE_CUBE_MAP_ARB;
    }


    FDEBUG(("TextureObjChunk::activate - %d\n", getGLId()));

    glBindTexture(target, win->getGLObjectId(getGLId()));

#ifdef GL_NV_point_sprite
    if(idx < static_cast<UInt32>(ntexcoords))
    {
        if(getPointSprite() &&
           win->hasExtension(_nvPointSprite))
        {
            glTexEnvi(GL_POINT_SPRITE_NV, GL_COORD_REPLACE_NV, GL_TRUE);
        }
    }
#endif

    if(idx < static_cast<UInt32>(nteximages))
    {
        if(getLodBias() != 0.0f &&
           win->hasExtension(_extTextureLodBias))
        {
            glTexEnvf(GL_TEXTURE_FILTER_CONTROL_EXT, GL_TEXTURE_LOD_BIAS_EXT,
	              getLodBias());
        }
    }

    Real32 ntexunits = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

    // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
    if(ntexunits == Window::unknownConstant)
        ntexunits = 1.0f;

    if(idx < static_cast<UInt32>(ntexunits))
    {
        // texture env
        glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, getEnvMode());
        glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_COLOR,
                    (GLfloat*)getEnvColor().getValuesRGBA());

        if(getEnvMode() == GL_COMBINE_EXT)
        {
            glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB_EXT,  getEnvCombineRGB ());
            glTexEnvf(GL_TEXTURE_ENV, GL_RGB_SCALE_EXT,    getEnvScaleRGB   ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB_EXT,  getEnvSource0RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_RGB_EXT,  getEnvSource1RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE2_RGB_EXT,  getEnvSource2RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB_EXT, getEnvOperand0RGB());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_RGB_EXT, getEnvOperand1RGB());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND2_RGB_EXT, getEnvOperand2RGB());

            glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA_EXT, getEnvCombineAlpha ());
            glTexEnvf(GL_TEXTURE_ENV, GL_ALPHA_SCALE,       getEnvScaleAlpha   ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA_EXT, getEnvSource0Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_ALPHA_EXT, getEnvSource1Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE2_ALPHA_EXT, getEnvSource2Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_ALPHA_EXT,getEnvOperand0Alpha());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_ALPHA_EXT,getEnvOperand1Alpha());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND2_ALPHA_EXT,getEnvOperand2Alpha());
        }

        handleTextureShader(win, target);

        if(getShaderOperation() != GL_NONE &&
           win->hasExtension(_nvTextureShader) &&
           idx == 0)
        {
            glEnable(GL_TEXTURE_SHADER_NV);
        }
        glEnable(target);
    }
    
    glErr("TextureObjChunk::activate");
#endif
}


void TextureObjChunk::changeFrom(DrawEnv    *pEnv,
                              StateChunk *old   ,
                              UInt32      idx )
{
#ifndef OSG_EMBEDDED
    // change from me to me?
    // this assumes I haven't changed in the meantime.
    // is that a valid assumption?
    if(old == this)
        return;

    // If the old one is not a texture chunk, deactivate it and activate
    // ourselves
    // Need to check for exact type, as derived chunks might change
    // different state (e.g. CubeTexture)
    if(getTypeId() != old->getTypeId())
    {
        old->deactivate(pEnv, idx);
        activate(pEnv, idx);
        return;
    }

    TextureObjChunk *oldp      = dynamic_cast<TextureObjChunk *>(old);

#ifdef OSG_DUMP_TEX
    fprintf(stderr, "Change %d %d\n", oldp->_uiChunkId, _uiChunkId);
#endif

    ImagePtr      img       = getImage();
    GLenum        target    = getTarget();
    GLenum        oldtarget = oldp->getTarget();
    bool          oldused   = (oldp->getImage() != NullFC &&
                               oldp->getImage()->getDimension());
    
    if(img == NullFC || img->getDimension() == 0)
    {
        oldp->deactivate(pEnv, idx);
        return;
    }

    glErr("TextureObjChunk::changeFrom precheck");

    Window *win = pEnv->getWindow();   

    if(activateTexture(win, idx))
        return; // trying to use too many textures

    UInt32 nteximages, ntexcoords, ntexunits;

    Real32 dummy = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

    if(dummy == Window::unknownConstant)
    {
        ntexunits = 1;
    }
    else
    {
        ntexunits = static_cast<UInt32>(dummy);
    }

    if((dummy = win->getConstantValue(GL_MAX_TEXTURE_IMAGE_UNITS_ARB)) ==
       Window::unknownConstant
      )
    {
        nteximages = ntexunits;
    }
    else
    {
        nteximages = static_cast<UInt32>(dummy);
    }
    
    if((dummy = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant
      )
    {
        ntexcoords = ntexunits;
    }
    else
    {
        ntexcoords = static_cast<UInt32>(dummy);
    }

    if(idx >= nteximages)
    {
#ifdef OSG_DEBUG
        FWARNING(("TextureObjChunk::activate: Trying to bind image unit %d,"
                  " but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }

    if(img->getSideCount() == 1)
    {
        if(target == GL_NONE)
        {
            if(img->getDepth() > 1)
            {
                if(win->hasExtension(_extTex3D))
                    target = GL_TEXTURE_3D;
                else
                {
                    FWARNING(("TextureObjChunk::changeFrom: 3D textures not "
                              "supported for this window!\n"));
                    oldp->deactivate(pEnv, idx);
                    return;
                }
            }
            else if(img->getHeight() > 1)   target = GL_TEXTURE_2D;
            else                            target = GL_TEXTURE_1D;
        }
    }
    else
    {
        target = GL_TEXTURE_CUBE_MAP_ARB;
    }

    if(oldused)
    {
        if(oldtarget == GL_NONE)
        {
            if(oldp->getImage()->getDepth() > 1)
            {
                if(win->hasExtension(_extTex3D))
                    oldtarget = GL_TEXTURE_3D;
                else
                {
                    FWARNING(("TextureObjChunk::changeFrom: 3D textures not "
                                "supported for this window!\n"));
                    oldp->deactivate(pEnv, idx);
                    return;
                }
            }
            else if(oldp->getImage()->getHeight() > 1)
            {
                oldtarget = GL_TEXTURE_2D;
            }
            else
            {
                oldtarget = GL_TEXTURE_1D;
            }
        }

        if(target != oldtarget && idx < ntexunits)
        {
            glDisable(oldtarget);
        }
    }

    win->validateGLObject(getGLId(), pEnv);

    glBindTexture(target, win->getGLObjectId(getGLId()));
 
#ifdef GL_NV_point_sprite
    if(idx < ntexcoords)
    {
        if((!oldused || oldp->getPointSprite() != getPointSprite()) &&
           win->hasExtension(_nvPointSprite)
          )
        {
            glTexEnvi(GL_POINT_SPRITE_NV, GL_COORD_REPLACE_NV, getPointSprite());
        }
    }
#endif

    if(idx < nteximages)
    {
        if((!oldused || oldp->getLodBias() != getLodBias()) &&
           win->hasExtension(_extTextureLodBias)
          )
        {
            glTexEnvf(GL_TEXTURE_FILTER_CONTROL_EXT, GL_TEXTURE_LOD_BIAS_EXT,
	              getLodBias());
        }
    }

    if(idx < ntexunits)
    {
        if(!oldused || oldp->getEnvMode() != getEnvMode())
            glTexEnvi(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, getEnvMode());

        glTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_COLOR,
                        (GLfloat*)getEnvColor().getValuesRGBA());

        if(getEnvMode() == GL_COMBINE_EXT)
        {
            glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_RGB_EXT,  getEnvCombineRGB ());
            glTexEnvf(GL_TEXTURE_ENV, GL_RGB_SCALE_EXT,    getEnvScaleRGB   ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_RGB_EXT,  getEnvSource0RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_RGB_EXT,  getEnvSource1RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE2_RGB_EXT,  getEnvSource2RGB ());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_RGB_EXT, getEnvOperand0RGB());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_RGB_EXT, getEnvOperand1RGB());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND2_RGB_EXT, getEnvOperand2RGB());

            glTexEnvi(GL_TEXTURE_ENV, GL_COMBINE_ALPHA_EXT, getEnvCombineAlpha ());
            glTexEnvf(GL_TEXTURE_ENV, GL_ALPHA_SCALE,       getEnvScaleAlpha   ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE0_ALPHA_EXT, getEnvSource0Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE1_ALPHA_EXT, getEnvSource1Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_SOURCE2_ALPHA_EXT, getEnvSource2Alpha ());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND0_ALPHA_EXT,getEnvOperand0Alpha());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND1_ALPHA_EXT,getEnvOperand1Alpha());
            glTexEnvi(GL_TEXTURE_ENV, GL_OPERAND2_ALPHA_EXT,getEnvOperand2Alpha());
        }

        if(target != oldtarget)
        {
            glEnable(target);
        }

        if(win->hasExtension(_nvTextureShader))
        {
            if(      getShaderOperation() != GL_NONE &&
               (!oldused || oldp->getShaderOperation() == GL_NONE)
              )
            {
                handleTextureShader(win, target);
                if(idx == 0)
                    glEnable(GL_TEXTURE_SHADER_NV);
            }
            else if(      getShaderOperation() == GL_NONE &&
                    (!oldused || oldp->getShaderOperation() != GL_NONE)
                   )
            {
                glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, GL_NONE);
                if(idx == 0)
                    glDisable(GL_TEXTURE_SHADER_NV);
            }
        }
    }
    
    glErr("TextureObjChunk::changeFrom");
#endif
}

void TextureObjChunk::deactivate(DrawEnv *pEnv, UInt32 idx)
{
#ifndef OSG_EMBEDDED
#ifdef OSG_DUMP_TEX
    fprintf(stderr, "Deactivate %d\n", _uiChunkId);
#endif

    Window *win = pEnv->getWindow();   

    Real32 nteximages, ntexcoords;
    if((nteximages = win->getConstantValue(GL_MAX_TEXTURE_IMAGE_UNITS_ARB)) ==
       Window::unknownConstant
      )
    {
        nteximages = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(nteximages == Window::unknownConstant)
            nteximages = 1.0f;
    }
    if((ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_COORDS_ARB)) ==
       Window::unknownConstant
      )
    {
        ntexcoords = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

        // sgi doesn't support GL_MAX_TEXTURE_UNITS_ARB!
        if(ntexcoords == Window::unknownConstant)
            ntexcoords = 1.0f;
    }

    if(idx >= static_cast<UInt32>(nteximages))
    {
#ifdef OSG_DEBUG
        FWARNING(("TextureObjChunk::deactivate: Trying to bind image unit %d,"
                  " but Window %p only supports %d!\n",
                  idx, win, nteximages));
#endif
        return;        
    }

    ImagePtr img = getImage();
    GLenum target = getTarget();

    if(img == NullFC || ! img->getDimension())
      return;

    glErr("TextureObjChunk::deactivate precheck");

    bool isActive = false;

#ifdef GL_NV_point_sprite
    if(getPointSprite() &&
       win->hasExtension(_nvPointSprite) &&
       idx < static_cast<UInt32>(ntexcoords)
      )
    {
        if(!isActive)
        {
            activateTexture(win, idx);
            isActive = true;
        }
        glTexEnvi(GL_POINT_SPRITE_NV, GL_COORD_REPLACE_NV, GL_FALSE);
    }
#endif

    if(getLodBias() != 0.0f &&
       win->hasExtension(_extTextureLodBias))
    {
        if(!isActive)
            activateTexture(win, idx);
        glTexEnvf(GL_TEXTURE_FILTER_CONTROL_EXT, GL_TEXTURE_LOD_BIAS_EXT,
                  0.0f);
    }
    
    
    Real32 ntexunits = win->getConstantValue(GL_MAX_TEXTURE_UNITS_ARB);

    if(ntexunits == Window::unknownConstant)
        ntexunits = 1.0f;

    if(idx >= static_cast<UInt32>(ntexunits))
        return; // tetxures >= MTU are not enabled and don't have an env
        
    if(!isActive)
        activateTexture(win, idx);

    if(img->getSideCount() == 1)
    {
        if ( target == GL_NONE )
        {
            if ( img->getDepth() > 1 )
            {
                if(win->hasExtension(_extTex3D))
                    target = GL_TEXTURE_3D;
                else
                {
                    FWARNING(("TextureObjChunk::deactivate: 3D textures not "
                              "supported for this window!\n"));
                    return;
                }
            }
            else if(img->getHeight() > 1)   target = GL_TEXTURE_2D;
            else                            target = GL_TEXTURE_1D;
        }
    }
    else
    {
        target = GL_TEXTURE_CUBE_MAP_ARB;
    }


    if(getShaderOperation() != GL_NONE &&
       win->hasExtension(_nvTextureShader))
    {
        glTexEnvi(GL_TEXTURE_SHADER_NV, GL_SHADER_OPERATION_NV, GL_NONE);

        if(idx == 0)
            glDisable(GL_TEXTURE_SHADER_NV);
    }

    glDisable(target);

    glErr("TextureObjChunk::deactivate");
#endif
}

GLenum TextureObjChunk::determineTextureTarget(Window *pWindow) const
{
    GLenum target = GL_NONE;
#ifndef OSG_EMBEDDED
    ImagePtr img = getImage();
    
    if(img != NullFC)
    {
        target = getTarget();
        
        if(target == GL_NONE)
        {
            if(img->getDepth() > 1)
            {
                if(pWindow->hasExtension(_extTex3D))
                {
                    target = GL_TEXTURE_3D;
                }
                else
                {
                    FWARNING(("TextureObjChunk::initialize: 3D textures not "
                              "supported for this window!\n"));
                    return target;
                }
            }
            else if(img->getHeight() > 1) 
            {
                target = GL_TEXTURE_2D;
            }
            else
            {
                target = GL_TEXTURE_1D;
            }
        }
    }
#endif

    return target;
}

/*-------------------------- Comparison -----------------------------------*/

Real32 TextureObjChunk::switchCost(StateChunk *OSG_CHECK_ARG(chunk))
{
    return 0;
}

bool TextureObjChunk::operator < (const StateChunk &other) const
{
    return this < &other;
}

bool TextureObjChunk::operator == (const StateChunk &other) const
{
    TextureObjChunk const *tother = dynamic_cast<TextureObjChunk const*>(&other);

    if(!tother)
        return false;

    if(tother == this)
        return true;



    bool returnValue =
        getImage    () == tother->getImage    () &&
        getMinFilter() == tother->getMinFilter() &&
        getMagFilter() == tother->getMagFilter() &&
        getWrapS    () == tother->getWrapS    () &&
        getWrapT    () == tother->getWrapT    () &&
        getWrapR    () == tother->getWrapR    () &&
        getPriority () == tother->getPriority () &&
        getEnvMode  () == tother->getEnvMode  ();

#ifndef OSG_EMBEDDED
    if(returnValue == true && getEnvMode() == GL_COMBINE_EXT)
    {
        returnValue =
            getEnvCombineRGB ()   == tother->getEnvCombineRGB   () &&

            getEnvSource0RGB ()   == tother->getEnvSource0RGB   () &&
            getEnvSource1RGB ()   == tother->getEnvSource1RGB   () &&
            getEnvSource2RGB ()   == tother->getEnvSource2RGB   () &&

            getEnvOperand0RGB()   == tother->getEnvOperand0RGB  () &&
            getEnvOperand1RGB()   == tother->getEnvOperand1RGB  () &&
            getEnvOperand2RGB()   == tother->getEnvOperand2RGB  () &&

            getEnvCombineAlpha () == tother->getEnvCombineAlpha () &&

            getEnvSource0Alpha () == tother->getEnvSource0Alpha () &&
            getEnvSource1Alpha () == tother->getEnvSource1Alpha () &&
            getEnvSource2Alpha () == tother->getEnvSource2Alpha () &&

            getEnvOperand0Alpha() == tother->getEnvOperand0Alpha() &&
            getEnvOperand1Alpha() == tother->getEnvOperand1Alpha() &&
            getEnvOperand2Alpha() == tother->getEnvOperand2Alpha();


        returnValue &=
            ((        getEnvScaleRGB  () - tother->getEnvScaleRGB  ()) <
             TypeTraits<Real>::getDefaultEps()                          ) &&
            ((tother->getEnvScaleRGB  () -         getEnvScaleRGB  ()) <
             TypeTraits<Real>::getDefaultEps()                          ) &&
            ((        getEnvScaleAlpha() - tother->getEnvScaleAlpha()) <
             TypeTraits<Real>::getDefaultEps()                          ) &&
            ((tother->getEnvScaleAlpha() -         getEnvScaleAlpha()) <
             TypeTraits<Real>::getDefaultEps()                          );


    }
#endif

    return returnValue;
}

bool TextureObjChunk::operator != (const StateChunk &other) const
{
    return ! (*this == other);
}

