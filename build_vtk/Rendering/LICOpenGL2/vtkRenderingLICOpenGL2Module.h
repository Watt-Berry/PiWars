
#ifndef VTKRENDERINGLICOPENGL2_EXPORT_H
#define VTKRENDERINGLICOPENGL2_EXPORT_H

#ifdef VTKRENDERINGLICOPENGL2_STATIC_DEFINE
#  define VTKRENDERINGLICOPENGL2_EXPORT
#  define VTKRENDERINGLICOPENGL2_NO_EXPORT
#else
#  ifndef VTKRENDERINGLICOPENGL2_EXPORT
#    ifdef RenderingLICOpenGL2_EXPORTS
        /* We are building this library */
#      define VTKRENDERINGLICOPENGL2_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKRENDERINGLICOPENGL2_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKRENDERINGLICOPENGL2_NO_EXPORT
#    define VTKRENDERINGLICOPENGL2_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKRENDERINGLICOPENGL2_DEPRECATED
#  define VTKRENDERINGLICOPENGL2_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKRENDERINGLICOPENGL2_DEPRECATED_EXPORT
#  define VTKRENDERINGLICOPENGL2_DEPRECATED_EXPORT VTKRENDERINGLICOPENGL2_EXPORT VTKRENDERINGLICOPENGL2_DEPRECATED
#endif

#ifndef VTKRENDERINGLICOPENGL2_DEPRECATED_NO_EXPORT
#  define VTKRENDERINGLICOPENGL2_DEPRECATED_NO_EXPORT VTKRENDERINGLICOPENGL2_NO_EXPORT VTKRENDERINGLICOPENGL2_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKRENDERINGLICOPENGL2_NO_DEPRECATED
#    define VTKRENDERINGLICOPENGL2_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkRenderingLICOpenGL2Module.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"
/* AutoInit dependencies. */
#include "vtkRenderingOpenGL2Module.h"


/* AutoInit implementations. */
#ifdef vtkRenderingLICOpenGL2_AUTOINIT_INCLUDE
#include vtkRenderingLICOpenGL2_AUTOINIT_INCLUDE
#endif
#ifdef vtkRenderingLICOpenGL2_AUTOINIT
#include "vtkAutoInit.h"
VTK_MODULE_AUTOINIT(vtkRenderingLICOpenGL2)
#endif

#endif /* VTKRENDERINGLICOPENGL2_EXPORT_H */
