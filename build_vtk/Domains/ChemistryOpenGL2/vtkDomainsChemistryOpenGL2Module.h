
#ifndef VTKDOMAINSCHEMISTRYOPENGL2_EXPORT_H
#define VTKDOMAINSCHEMISTRYOPENGL2_EXPORT_H

#ifdef VTKDOMAINSCHEMISTRYOPENGL2_STATIC_DEFINE
#  define VTKDOMAINSCHEMISTRYOPENGL2_EXPORT
#  define VTKDOMAINSCHEMISTRYOPENGL2_NO_EXPORT
#else
#  ifndef VTKDOMAINSCHEMISTRYOPENGL2_EXPORT
#    ifdef DomainsChemistryOpenGL2_EXPORTS
        /* We are building this library */
#      define VTKDOMAINSCHEMISTRYOPENGL2_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKDOMAINSCHEMISTRYOPENGL2_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKDOMAINSCHEMISTRYOPENGL2_NO_EXPORT
#    define VTKDOMAINSCHEMISTRYOPENGL2_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED
#  define VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED_EXPORT
#  define VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED_EXPORT VTKDOMAINSCHEMISTRYOPENGL2_EXPORT VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED
#endif

#ifndef VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED_NO_EXPORT
#  define VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED_NO_EXPORT VTKDOMAINSCHEMISTRYOPENGL2_NO_EXPORT VTKDOMAINSCHEMISTRYOPENGL2_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKDOMAINSCHEMISTRYOPENGL2_NO_DEPRECATED
#    define VTKDOMAINSCHEMISTRYOPENGL2_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkDomainsChemistryOpenGL2Module.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"
/* AutoInit dependencies. */
#include "vtkDomainsChemistryModule.h"
#include "vtkRenderingOpenGL2Module.h"


/* AutoInit implementations. */
#ifdef vtkDomainsChemistryOpenGL2_AUTOINIT_INCLUDE
#include vtkDomainsChemistryOpenGL2_AUTOINIT_INCLUDE
#endif
#ifdef vtkDomainsChemistryOpenGL2_AUTOINIT
#include "vtkAutoInit.h"
VTK_MODULE_AUTOINIT(vtkDomainsChemistryOpenGL2)
#endif

#endif /* VTKDOMAINSCHEMISTRYOPENGL2_EXPORT_H */
