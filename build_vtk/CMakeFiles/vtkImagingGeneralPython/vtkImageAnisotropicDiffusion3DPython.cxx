// python wrapper for vtkImageAnisotropicDiffusion3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageAnisotropicDiffusion3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageAnisotropicDiffusion3D_ClassNew(); }

#ifndef DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageSpatialAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
#endif

static PyObject *
PyvtkImageAnisotropicDiffusion3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageAnisotropicDiffusion3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageAnisotropicDiffusion3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageAnisotropicDiffusion3D *tempr = vtkImageAnisotropicDiffusion3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAnisotropicDiffusion3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageAnisotropicDiffusion3D::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageAnisotropicDiffusion3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageAnisotropicDiffusion3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkImageAnisotropicDiffusion3D::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffusionThreshold(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionThreshold() :
      op->vtkImageAnisotropicDiffusion3D::GetDiffusionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffusionFactor(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetDiffusionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionFactor() :
      op->vtkImageAnisotropicDiffusion3D::GetDiffusionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFaces(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkImageAnisotropicDiffusion3D::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FacesOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::FacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_FacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FacesOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::FacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEdges(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdges() :
      op->vtkImageAnisotropicDiffusion3D::GetEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgesOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::EdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_EdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgesOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::EdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCorners(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetCorners(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCorners() :
      op->vtkImageAnisotropicDiffusion3D::GetCorners());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CornersOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::CornersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_CornersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CornersOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::CornersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGradientMagnitudeThreshold(temp0);
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::SetGradientMagnitudeThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeThreshold() :
      op->vtkImageAnisotropicDiffusion3D::GetGradientMagnitudeThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientMagnitudeThresholdOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion3D *op = static_cast<vtkImageAnisotropicDiffusion3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientMagnitudeThresholdOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion3D::GradientMagnitudeThresholdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageAnisotropicDiffusion3D_Methods[] = {
  {"IsTypeOf", PyvtkImageAnisotropicDiffusion3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageAnisotropicDiffusion3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageAnisotropicDiffusion3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageAnisotropicDiffusion3D\nC++: static vtkImageAnisotropicDiffusion3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageAnisotropicDiffusion3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageAnisotropicDiffusion3D\nC++: vtkImageAnisotropicDiffusion3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageAnisotropicDiffusion3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageAnisotropicDiffusion3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, num:int) -> None\nC++: void SetNumberOfIterations(int num)\n\nThis method sets the number of iterations which also affects the\ninput neighborhood needed to compute one output pixel.  Each\niterations requires an extra pixel layer on the neighborhood. \nThis is only relevant when you are trying to stream or are\nrequesting a sub extent of the \"wholeExtent\".\n"},
  {"GetNumberOfIterations", PyvtkImageAnisotropicDiffusion3D_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\nGet the number of iterations.\n"},
  {"SetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_SetDiffusionThreshold, METH_VARARGS,
   "SetDiffusionThreshold(self, _arg:float) -> None\nC++: virtual void SetDiffusionThreshold(double _arg)\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {"GetDiffusionThreshold", PyvtkImageAnisotropicDiffusion3D_GetDiffusionThreshold, METH_VARARGS,
   "GetDiffusionThreshold(self) -> float\nC++: virtual double GetDiffusionThreshold()\n\n"},
  {"SetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_SetDiffusionFactor, METH_VARARGS,
   "SetDiffusionFactor(self, _arg:float) -> None\nC++: virtual void SetDiffusionFactor(double _arg)\n\nSet/Get the difference factor\n"},
  {"GetDiffusionFactor", PyvtkImageAnisotropicDiffusion3D_GetDiffusionFactor, METH_VARARGS,
   "GetDiffusionFactor(self) -> float\nC++: virtual double GetDiffusionFactor()\n\n"},
  {"SetFaces", PyvtkImageAnisotropicDiffusion3D_SetFaces, METH_VARARGS,
   "SetFaces(self, _arg:int) -> None\nC++: virtual void SetFaces(vtkTypeBool _arg)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {"GetFaces", PyvtkImageAnisotropicDiffusion3D_GetFaces, METH_VARARGS,
   "GetFaces(self) -> int\nC++: virtual vtkTypeBool GetFaces()\n\n"},
  {"FacesOn", PyvtkImageAnisotropicDiffusion3D_FacesOn, METH_VARARGS,
   "FacesOn(self) -> None\nC++: virtual void FacesOn()\n\n"},
  {"FacesOff", PyvtkImageAnisotropicDiffusion3D_FacesOff, METH_VARARGS,
   "FacesOff(self) -> None\nC++: virtual void FacesOff()\n\n"},
  {"SetEdges", PyvtkImageAnisotropicDiffusion3D_SetEdges, METH_VARARGS,
   "SetEdges(self, _arg:int) -> None\nC++: virtual void SetEdges(vtkTypeBool _arg)\n\n"},
  {"GetEdges", PyvtkImageAnisotropicDiffusion3D_GetEdges, METH_VARARGS,
   "GetEdges(self) -> int\nC++: virtual vtkTypeBool GetEdges()\n\n"},
  {"EdgesOn", PyvtkImageAnisotropicDiffusion3D_EdgesOn, METH_VARARGS,
   "EdgesOn(self) -> None\nC++: virtual void EdgesOn()\n\n"},
  {"EdgesOff", PyvtkImageAnisotropicDiffusion3D_EdgesOff, METH_VARARGS,
   "EdgesOff(self) -> None\nC++: virtual void EdgesOff()\n\n"},
  {"SetCorners", PyvtkImageAnisotropicDiffusion3D_SetCorners, METH_VARARGS,
   "SetCorners(self, _arg:int) -> None\nC++: virtual void SetCorners(vtkTypeBool _arg)\n\n"},
  {"GetCorners", PyvtkImageAnisotropicDiffusion3D_GetCorners, METH_VARARGS,
   "GetCorners(self) -> int\nC++: virtual vtkTypeBool GetCorners()\n\n"},
  {"CornersOn", PyvtkImageAnisotropicDiffusion3D_CornersOn, METH_VARARGS,
   "CornersOn(self) -> None\nC++: virtual void CornersOn()\n\n"},
  {"CornersOff", PyvtkImageAnisotropicDiffusion3D_CornersOff, METH_VARARGS,
   "CornersOff(self) -> None\nC++: virtual void CornersOff()\n\n"},
  {"SetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_SetGradientMagnitudeThreshold, METH_VARARGS,
   "SetGradientMagnitudeThreshold(self, _arg:int) -> None\nC++: virtual void SetGradientMagnitudeThreshold(vtkTypeBool _arg)\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {"GetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion3D_GetGradientMagnitudeThreshold, METH_VARARGS,
   "GetGradientMagnitudeThreshold(self) -> int\nC++: virtual vtkTypeBool GetGradientMagnitudeThreshold()\n\n"},
  {"GradientMagnitudeThresholdOn", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOn, METH_VARARGS,
   "GradientMagnitudeThresholdOn(self) -> None\nC++: virtual void GradientMagnitudeThresholdOn()\n\n"},
  {"GradientMagnitudeThresholdOff", PyvtkImageAnisotropicDiffusion3D_GradientMagnitudeThresholdOff, METH_VARARGS,
   "GradientMagnitudeThresholdOff(self) -> None\nC++: virtual void GradientMagnitudeThresholdOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageAnisotropicDiffusion3D_Doc =
  "vtkImageAnisotropicDiffusion3D - edge preserving smoothing.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "vtkImageAnisotropicDiffusion3D diffuses an volume iteratively. The\n"
  "neighborhood of the diffusion is determined by the instance flags. if\n"
  "\"Faces\" is on, the 6 voxels adjoined by faces are included in the\n"
  "neighborhood.  If \"Edges\" is on the 12 edge connected voxels are\n"
  "included, and if \"Corners\" is on, the 8 corner connected voxels are\n"
  "included.  \"DiffusionFactor\" determines how far a pixel value moves\n"
  "toward its neighbors, and is insensitive to the number of neighbors\n"
  "chosen.  The diffusion is anisotropic because it only occurs when a\n"
  "gradient measure is below \"GradientThreshold\".  Two gradient measures\n"
  "exist and are toggled by the \"GradientMagnitudeThreshold\" flag. When\n"
  "\"GradientMagnitudeThreshold\" is on, the magnitude of the gradient,\n"
  "computed by central differences, above \"DiffusionThreshold\" a voxel\n"
  "is not modified.  The alternative measure examines each neighbor\n"
  "independently.  The gradient between the voxel and the neighbor must\n"
  "be below the \"DiffusionThreshold\" for diffusion to occur with THAT\n"
  "neighbor.\n\n"
  "@sa\n"
  "vtkImageAnisotropicDiffusion2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageAnisotropicDiffusion3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageAnisotropicDiffusion3D", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkImageAnisotropicDiffusion3D_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkImageAnisotropicDiffusion3D_StaticNew()
{
  return vtkImageAnisotropicDiffusion3D::New();
}

PyObject *PyvtkImageAnisotropicDiffusion3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageAnisotropicDiffusion3D_Type, PyvtkImageAnisotropicDiffusion3D_Methods,
    "vtkImageAnisotropicDiffusion3D",
 &PyvtkImageAnisotropicDiffusion3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageSpatialAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageAnisotropicDiffusion3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageAnisotropicDiffusion3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageAnisotropicDiffusion3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

