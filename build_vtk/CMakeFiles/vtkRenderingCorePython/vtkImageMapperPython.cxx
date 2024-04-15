// python wrapper for vtkImageMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkImageMapper_ClassNew(); }

#ifndef DECLARED_PyvtkMapper2D_ClassNew
extern "C" { PyObject *PyvtkMapper2D_ClassNew(); }
#define DECLARED_PyvtkMapper2D_ClassNew
#endif

static PyObject *
PyvtkImageMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageMapper *tempr = vtkImageMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageMapper::NewInstance());

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
PyvtkImageMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorWindow(temp0);
    }
    else
    {
      op->vtkImageMapper::SetColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageMapper::GetColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorLevel(temp0);
    }
    else
    {
      op->vtkImageMapper::SetColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageMapper::GetColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZSlice(temp0);
    }
    else
    {
      op->vtkImageMapper::SetZSlice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetZSlice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZSlice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZSlice() :
      op->vtkImageMapper::GetZSlice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMin() :
      op->vtkImageMapper::GetWholeZMin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetWholeZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWholeZMax() :
      op->vtkImageMapper::GetWholeZMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkActor2D *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderStart(temp0, temp1);
    }
    else
    {
      op->vtkImageMapper::RenderStart(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkViewport *temp0 = nullptr;
  vtkImageData *temp1 = nullptr;
  vtkActor2D *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetVTKObject(temp2, "vtkActor2D"))
  {
    if (ap.IsBound())
    {
      op->RenderData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageMapper::RenderData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorShift() :
      op->vtkImageMapper::GetColorShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetColorScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorScale() :
      op->vtkImageMapper::GetColorScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkImageMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderToRectangle(temp0);
    }
    else
    {
      op->vtkImageMapper::SetRenderToRectangle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetRenderToRectangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderToRectangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRenderToRectangle() :
      op->vtkImageMapper::GetRenderToRectangle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToRectangleOn();
    }
    else
    {
      op->vtkImageMapper::RenderToRectangleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_RenderToRectangleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderToRectangleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderToRectangleOff();
    }
    else
    {
      op->vtkImageMapper::RenderToRectangleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCustomExtents(temp0);
    }
    else
    {
      op->vtkImageMapper::SetUseCustomExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetUseCustomExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCustomExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCustomExtents() :
      op->vtkImageMapper::GetUseCustomExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomExtentsOn();
    }
    else
    {
      op->vtkImageMapper::UseCustomExtentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_UseCustomExtentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCustomExtentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCustomExtentsOff();
    }
    else
    {
      op->vtkImageMapper::UseCustomExtentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_SetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomDisplayExtents(temp0);
    }
    else
    {
      op->vtkImageMapper::SetCustomDisplayExtents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageMapper_GetCustomDisplayExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDisplayExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageMapper *op = static_cast<vtkImageMapper *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetCustomDisplayExtents() :
      op->vtkImageMapper::GetCustomDisplayExtents());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageMapper_Methods[] = {
  {"IsTypeOf", PyvtkImageMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageMapper\nC++: static vtkImageMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageMapper\nC++: vtkImageMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkImageMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride Modifiedtime as we have added a lookuptable\n"},
  {"SetColorWindow", PyvtkImageMapper_SetColorWindow, METH_VARARGS,
   "SetColorWindow(self, _arg:float) -> None\nC++: virtual void SetColorWindow(double _arg)\n\nSet/Get the window value for window/level\n"},
  {"GetColorWindow", PyvtkImageMapper_GetColorWindow, METH_VARARGS,
   "GetColorWindow(self) -> float\nC++: virtual double GetColorWindow()\n\n"},
  {"SetColorLevel", PyvtkImageMapper_SetColorLevel, METH_VARARGS,
   "SetColorLevel(self, _arg:float) -> None\nC++: virtual void SetColorLevel(double _arg)\n\nSet/Get the level value for window/level\n"},
  {"GetColorLevel", PyvtkImageMapper_GetColorLevel, METH_VARARGS,
   "GetColorLevel(self) -> float\nC++: virtual double GetColorLevel()\n\n"},
  {"SetZSlice", PyvtkImageMapper_SetZSlice, METH_VARARGS,
   "SetZSlice(self, _arg:int) -> None\nC++: virtual void SetZSlice(int _arg)\n\nSet/Get the current slice number. The axis Z in ZSlice does not\nnecessarily have any relation to the z axis of the data on disk.\nIt is simply the axis orthogonal to the x,y, display plane.\nGetWholeZMax and Min are convenience methods for obtaining the\nnumber of slices that can be displayed. Again the number of\nslices is in reference to the display z axis, which is not\nnecessarily the z axis on disk. (due to reformatting etc)\n"},
  {"GetZSlice", PyvtkImageMapper_GetZSlice, METH_VARARGS,
   "GetZSlice(self) -> int\nC++: virtual int GetZSlice()\n\n"},
  {"GetWholeZMin", PyvtkImageMapper_GetWholeZMin, METH_VARARGS,
   "GetWholeZMin(self) -> int\nC++: int GetWholeZMin()\n\n"},
  {"GetWholeZMax", PyvtkImageMapper_GetWholeZMax, METH_VARARGS,
   "GetWholeZMax(self) -> int\nC++: int GetWholeZMax()\n\n"},
  {"RenderStart", PyvtkImageMapper_RenderStart, METH_VARARGS,
   "RenderStart(self, viewport:vtkViewport, actor:vtkActor2D) -> None\nC++: void RenderStart(vtkViewport *viewport, vtkActor2D *actor)\n\nDraw the image to the screen.\n"},
  {"RenderData", PyvtkImageMapper_RenderData, METH_VARARGS,
   "RenderData(self, __a:vtkViewport, __b:vtkImageData,\n    __c:vtkActor2D) -> None\nC++: virtual void RenderData(vtkViewport *, vtkImageData *,\n    vtkActor2D *)\n\nFunction called by Render to actually draw the image to to the\nscreen\n"},
  {"GetColorShift", PyvtkImageMapper_GetColorShift, METH_VARARGS,
   "GetColorShift(self) -> float\nC++: double GetColorShift()\n\nMethods used internally for performing the Window/Level mapping.\n"},
  {"GetColorScale", PyvtkImageMapper_GetColorScale, METH_VARARGS,
   "GetColorScale(self) -> float\nC++: double GetColorScale()\n\n"},
  {"SetInputData", PyvtkImageMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, input:vtkImageData) -> None\nC++: virtual void SetInputData(vtkImageData *input)\n\nSet the Input of a filter.\n"},
  {"GetInput", PyvtkImageMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: vtkImageData *GetInput()\n\n"},
  {"SetRenderToRectangle", PyvtkImageMapper_SetRenderToRectangle, METH_VARARGS,
   "SetRenderToRectangle(self, _arg:int) -> None\nC++: virtual void SetRenderToRectangle(vtkTypeBool _arg)\n\nIf RenderToRectangle is set (by default not), then the\nimagemapper will render the image into the rectangle supplied by\nthe Actor2D's PositionCoordinate and Position2Coordinate\n"},
  {"GetRenderToRectangle", PyvtkImageMapper_GetRenderToRectangle, METH_VARARGS,
   "GetRenderToRectangle(self) -> int\nC++: virtual vtkTypeBool GetRenderToRectangle()\n\n"},
  {"RenderToRectangleOn", PyvtkImageMapper_RenderToRectangleOn, METH_VARARGS,
   "RenderToRectangleOn(self) -> None\nC++: virtual void RenderToRectangleOn()\n\n"},
  {"RenderToRectangleOff", PyvtkImageMapper_RenderToRectangleOff, METH_VARARGS,
   "RenderToRectangleOff(self) -> None\nC++: virtual void RenderToRectangleOff()\n\n"},
  {"SetUseCustomExtents", PyvtkImageMapper_SetUseCustomExtents, METH_VARARGS,
   "SetUseCustomExtents(self, _arg:int) -> None\nC++: virtual void SetUseCustomExtents(vtkTypeBool _arg)\n\nUsually, the entire image is displayed, if UseCustomExtents is\nset (by default not), then the region supplied in the\nCustomDisplayExtents is used in preference. Note that the Custom\nextents are x,y only and the zslice is still applied\n"},
  {"GetUseCustomExtents", PyvtkImageMapper_GetUseCustomExtents, METH_VARARGS,
   "GetUseCustomExtents(self) -> int\nC++: virtual vtkTypeBool GetUseCustomExtents()\n\n"},
  {"UseCustomExtentsOn", PyvtkImageMapper_UseCustomExtentsOn, METH_VARARGS,
   "UseCustomExtentsOn(self) -> None\nC++: virtual void UseCustomExtentsOn()\n\n"},
  {"UseCustomExtentsOff", PyvtkImageMapper_UseCustomExtentsOff, METH_VARARGS,
   "UseCustomExtentsOff(self) -> None\nC++: virtual void UseCustomExtentsOff()\n\n"},
  {"SetCustomDisplayExtents", PyvtkImageMapper_SetCustomDisplayExtents, METH_VARARGS,
   "SetCustomDisplayExtents(self, data:(int, ...)) -> None\nC++: virtual void SetCustomDisplayExtents(const int data[])\n\nThe image extents which should be displayed with UseCustomExtents\nNote that the Custom extents are x,y only and the zslice is still\napplied\n"},
  {"GetCustomDisplayExtents", PyvtkImageMapper_GetCustomDisplayExtents, METH_VARARGS,
   "GetCustomDisplayExtents(self) -> (int, int, int, int)\nC++: virtual int *GetCustomDisplayExtents()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageMapper_Doc =
  "vtkImageMapper - 2D image display\n\n"
  "Superclass: vtkMapper2D\n\n"
  "vtkImageMapper provides 2D image display support for vtk. It is a\n"
  "Mapper2D subclass that can be associated with an Actor2D and placed\n"
  "within a RenderWindow or ImageWindow. The vtkImageMapper is a 2D\n"
  "mapper, which means that it displays images in display coordinates.\n"
  "In display coordinates, one image pixel is always one screen pixel.\n\n"
  "@sa\n"
  "vtkMapper2D vtkActor2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkImageMapper", // tp_name
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
  PyvtkImageMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageMapper_StaticNew()
{
  return vtkImageMapper::New();
}

PyObject *PyvtkImageMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageMapper_Type, PyvtkImageMapper_Methods,
    "vtkImageMapper",
 &PyvtkImageMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMapper2D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

