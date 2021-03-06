MACRO(OSG_CONFIGURE_CG)

  OSG_FIND_PACKAGE(Cg)

  IF(CG_FOUND)

    OSG_ADD_IMPORT_LIB(OSG_CG_TARGETS CG_LIBRARY)
    OSG_ADD_IMPORT_LIB(OSG_CG_GL_TARGETS CG_GL_LIBRARY)

    SET(CG_LIBRARIES ${OSG_CG_TARGETS} ${OSG_CG_GL_TARGETS} 
					 CACHE STRING "" FORCE)

    OSG_ADD_OPT(OSG_CG_TARGETS)

	OSG_SET(OSG_WITH_CG 1)

  ENDIF(CG_FOUND)

ENDMACRO(OSG_CONFIGURE_CG)
