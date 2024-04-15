
#ifndef VTKIMAGINGSOURCES_EXPORT_H
#define VTKIMAGINGSOURCES_EXPORT_H

#ifdef VTKIMAGINGSOURCES_STATIC_DEFINE
#  define VTKIMAGINGSOURCES_EXPORT
#  define VTKIMAGINGSOURCES_NO_EXPORT
#else
#  ifndef VTKIMAGINGSOURCES_EXPORT
#    ifdef ImagingSources_EXPORTS
        /* We are building this library */
#      define VTKIMAGINGSOURCES_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKIMAGINGSOURCES_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKIMAGINGSOURCES_NO_EXPORT
#    define VTKIMAGINGSOURCES_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKIMAGINGSOURCES_DEPRECATED
#  define VTKIMAGINGSOURCES_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKIMAGINGSOURCES_DEPRECATED_EXPORT
#  define VTKIMAGINGSOURCES_DEPRECATED_EXPORT VTKIMAGINGSOURCES_EXPORT VTKIMAGINGSOURCES_DEPRECATED
#endif

#ifndef VTKIMAGINGSOURCES_DEPRECATED_NO_EXPORT
#  define VTKIMAGINGSOURCES_DEPRECATED_NO_EXPORT VTKIMAGINGSOURCES_NO_EXPORT VTKIMAGINGSOURCES_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKIMAGINGSOURCES_NO_DEPRECATED
#    define VTKIMAGINGSOURCES_NO_DEPRECATED
#  endif
#endif

/* VTK-HeaderTest-Exclude: vtkImagingSourcesModule.h */

/* Include ABI Namespace */
#include "vtkABINamespace.h"

#endif /* VTKIMAGINGSOURCES_EXPORT_H */
