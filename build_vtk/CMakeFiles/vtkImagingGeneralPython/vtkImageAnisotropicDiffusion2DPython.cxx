// python wrapper for vtkImageAnisotropicDiffusion2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageAnisotropicDiffusion2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageAnisotropicDiffusion2D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageAnisotropicDiffusion2D_ClassNew(); }

#ifndef DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageSpatialAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageSpatialAlgorithm_ClassNew
#endif

static PyObject *
PyvtkImageAnisotropicDiffusion2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageAnisotropicDiffusion2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageAnisotropicDiffusion2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageAnisotropicDiffusion2D *tempr = vtkImageAnisotropicDiffusion2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageAnisotropicDiffusion2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageAnisotropicDiffusion2D::NewInstance());

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
PyvtkImageAnisotropicDiffusion2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageAnisotropicDiffusion2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageAnisotropicDiffusion2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkImageAnisotropicDiffusion2D::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetDiffusionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetDiffusionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionThreshold() :
      op->vtkImageAnisotropicDiffusion2D::GetDiffusionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetDiffusionFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetDiffusionFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffusionFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffusionFactor() :
      op->vtkImageAnisotropicDiffusion2D::GetDiffusionFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkImageAnisotropicDiffusion2D::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_FacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FacesOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::FacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_FacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FacesOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::FacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetEdges(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEdges() :
      op->vtkImageAnisotropicDiffusion2D::GetEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_EdgesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgesOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::EdgesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_EdgesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EdgesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EdgesOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::EdgesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetCorners(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCorners() :
      op->vtkImageAnisotropicDiffusion2D::GetCorners());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_CornersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CornersOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::CornersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_CornersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CornersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CornersOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::CornersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_SetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

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
      op->vtkImageAnisotropicDiffusion2D::SetGradientMagnitudeThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GetGradientMagnitudeThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGradientMagnitudeThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGradientMagnitudeThreshold() :
      op->vtkImageAnisotropicDiffusion2D::GetGradientMagnitudeThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientMagnitudeThresholdOn();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GradientMagnitudeThresholdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageAnisotropicDiffusion2D *op = static_cast<vtkImageAnisotropicDiffusion2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GradientMagnitudeThresholdOff();
    }
    else
    {
      op->vtkImageAnisotropicDiffusion2D::GradientMagnitudeThresholdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageAnisotropicDiffusion2D_Methods[] = {
  {"IsTypeOf", PyvtkImageAnisotropicDiffusion2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageAnisotropicDiffusion2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageAnisotropicDiffusion2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageAnisotropicDiffusion2D\nC++: static vtkImageAnisotropicDiffusion2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageAnisotropicDiffusion2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageAnisotropicDiffusion2D\nC++: vtkImageAnisotropicDiffusion2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageAnisotropicDiffusion2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageAnisotropicDiffusion2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfIterations", PyvtkImageAnisotropicDiffusion2D_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, num:int) -> None\nC++: void SetNumberOfIterations(int num)\n\nThis method sets the number of iterations which also affects the\ninput neighborhood needed to compute one output pixel.  Each\niteration requires an extra pixel layer on the neighborhood. \nThis is only relevant when you are trying to stream or are\nrequesting a sub extent of the \"wholeExtent\".\n"},
  {"GetNumberOfIterations", PyvtkImageAnisotropicDiffusion2D_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: virtual int GetNumberOfIterations()\n\nGet the number of iterations.\n"},
  {"SetDiffusionThreshold", PyvtkImageAnisotropicDiffusion2D_SetDiffusionThreshold, METH_VARARGS,
   "SetDiffusionThreshold(self, _arg:float) -> None\nC++: virtual void SetDiffusionThreshold(double _arg)\n\nSet/Get the difference threshold that stops diffusion. when the\ndifference between two pixel is greater than this threshold, the\npixels are not diffused.  This causes diffusion to avoid sharp\nedges. If the GradientMagnitudeThreshold is set, then gradient\nmagnitude is used for comparison instead of pixel differences.\n"},
  {"GetDiffusionThreshold", PyvtkImageAnisotropicDiffusion2D_GetDiffusionThreshold, METH_VARARGS,
   "GetDiffusionThreshold(self) -> float\nC++: virtual double GetDiffusionThreshold()\n\n"},
  {"SetDiffusionFactor", PyvtkImageAnisotropicDiffusion2D_SetDiffusionFactor, METH_VARARGS,
   "SetDiffusionFactor(self, _arg:float) -> None\nC++: virtual void SetDiffusionFactor(double _arg)\n\nThe diffusion factor specifies how much neighboring pixels effect\neach other. No diffusion occurs with a factor of 0, and a\ndiffusion factor of 1 causes the pixel to become the average of\nall its neighbors.\n"},
  {"GetDiffusionFactor", PyvtkImageAnisotropicDiffusion2D_GetDiffusionFactor, METH_VARARGS,
   "GetDiffusionFactor(self) -> float\nC++: virtual double GetDiffusionFactor()\n\n"},
  {"SetFaces", PyvtkImageAnisotropicDiffusion2D_SetFaces, METH_VARARGS,
   "SetFaces(self, _arg:int) -> None\nC++: virtual void SetFaces(vtkTypeBool _arg)\n\nChoose neighbors to diffuse (6 faces, 12 edges, 8 corners).\n"},
  {"GetFaces", PyvtkImageAnisotropicDiffusion2D_GetFaces, METH_VARARGS,
   "GetFaces(self) -> int\nC++: virtual vtkTypeBool GetFaces()\n\n"},
  {"FacesOn", PyvtkImageAnisotropicDiffusion2D_FacesOn, METH_VARARGS,
   "FacesOn(self) -> None\nC++: virtual void FacesOn()\n\n"},
  {"FacesOff", PyvtkImageAnisotropicDiffusion2D_FacesOff, METH_VARARGS,
   "FacesOff(self) -> None\nC++: virtual void FacesOff()\n\n"},
  {"SetEdges", PyvtkImageAnisotropicDiffusion2D_SetEdges, METH_VARARGS,
   "SetEdges(self, _arg:int) -> None\nC++: virtual void SetEdges(vtkTypeBool _arg)\n\n"},
  {"GetEdges", PyvtkImageAnisotropicDiffusion2D_GetEdges, METH_VARARGS,
   "GetEdges(self) -> int\nC++: virtual vtkTypeBool GetEdges()\n\n"},
  {"EdgesOn", PyvtkImageAnisotropicDiffusion2D_EdgesOn, METH_VARARGS,
   "EdgesOn(self) -> None\nC++: virtual void EdgesOn()\n\n"},
  {"EdgesOff", PyvtkImageAnisotropicDiffusion2D_EdgesOff, METH_VARARGS,
   "EdgesOff(self) -> None\nC++: virtual void EdgesOff()\n\n"},
  {"SetCorners", PyvtkImageAnisotropicDiffusion2D_SetCorners, METH_VARARGS,
   "SetCorners(self, _arg:int) -> None\nC++: virtual void SetCorners(vtkTypeBool _arg)\n\n"},
  {"GetCorners", PyvtkImageAnisotropicDiffusion2D_GetCorners, METH_VARARGS,
   "GetCorners(self) -> int\nC++: virtual vtkTypeBool GetCorners()\n\n"},
  {"CornersOn", PyvtkImageAnisotropicDiffusion2D_CornersOn, METH_VARARGS,
   "CornersOn(self) -> None\nC++: virtual void CornersOn()\n\n"},
  {"CornersOff", PyvtkImageAnisotropicDiffusion2D_CornersOff, METH_VARARGS,
   "CornersOff(self) -> None\nC++: virtual void CornersOff()\n\n"},
  {"SetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion2D_SetGradientMagnitudeThreshold, METH_VARARGS,
   "SetGradientMagnitudeThreshold(self, _arg:int) -> None\nC++: virtual void SetGradientMagnitudeThreshold(vtkTypeBool _arg)\n\nSwitch between gradient magnitude threshold and pixel gradient\nthreshold.\n"},
  {"GetGradientMagnitudeThreshold", PyvtkImageAnisotropicDiffusion2D_GetGradientMagnitudeThreshold, METH_VARARGS,
   "GetGradientMagnitudeThreshold(self) -> int\nC++: virtual vtkTypeBool GetGradientMagnitudeThreshold()\n\n"},
  {"GradientMagnitudeThresholdOn", PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOn, METH_VARARGS,
   "GradientMagnitudeThresholdOn(self) -> None\nC++: virtual void GradientMagnitudeThresholdOn()\n\n"},
  {"GradientMagnitudeThresholdOff", PyvtkImageAnisotropicDiffusion2D_GradientMagnitudeThresholdOff, METH_VARARGS,
   "GradientMagnitudeThresholdOff(self) -> None\nC++: virtual void GradientMagnitudeThresholdOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageAnisotropicDiffusion2D_Doc =
  "vtkImageAnisotropicDiffusion2D - edge preserving smoothing.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "vtkImageAnisotropicDiffusion2D diffuses a 2d image iteratively. The\n"
  "neighborhood of the diffusion is determined by the instance flags. If\n"
  "\"Edges\" is on the 4 edge connected voxels are included, and if\n"
  "\"Corners\" is on, the 4 corner connected voxels are included. \n"
  "\"DiffusionFactor\" determines how far a pixel value moves toward its\n"
  "neighbors, and is insensitive to the number of neighbors chosen.  The\n"
  "diffusion is anisotropic because it only occurs when a gradient\n"
  "measure is below \"GradientThreshold\".  Two gradient measures exist\n"
  "and are toggled by the \"GradientMagnitudeThreshold\" flag. When\n"
  "\"GradientMagnitudeThreshold\" is on, the magnitude of the gradient,\n"
  "computed by central differences, above \"DiffusionThreshold\" a voxel\n"
  "is not modified.  The alternative measure examines each neighbor\n"
  "independently.  The gradient between the voxel and the neighbor must\n"
  "be below the \"DiffusionThreshold\" for diffusion to occur with THAT\n"
  "neighbor.\n\n"
  "@sa\n"
  "vtkImageAnisotropicDiffusion3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageAnisotropicDiffusion2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageAnisotropicDiffusion2D", // tp_name
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
  PyvtkImageAnisotropicDiffusion2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageAnisotropicDiffusion2D_StaticNew()
{
  return vtkImageAnisotropicDiffusion2D::New();
}

PyObject *PyvtkImageAnisotropicDiffusion2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageAnisotropicDiffusion2D_Type, PyvtkImageAnisotropicDiffusion2D_Methods,
    "vtkImageAnisotropicDiffusion2D",
 &PyvtkImageAnisotropicDiffusion2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageSpatialAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageAnisotropicDiffusion2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageAnisotropicDiffusion2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageAnisotropicDiffusion2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

