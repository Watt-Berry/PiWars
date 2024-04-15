// python wrapper for vtkRectangularButtonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRectangularButtonSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectangularButtonSource(PyObject *dict); }
extern "C" { PyObject *PyvtkRectangularButtonSource_ClassNew(); }

#ifndef DECLARED_PyvtkButtonSource_ClassNew
extern "C" { PyObject *PyvtkButtonSource_ClassNew(); }
#define DECLARED_PyvtkButtonSource_ClassNew
#endif

static PyObject *
PyvtkRectangularButtonSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectangularButtonSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectangularButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectangularButtonSource *tempr = vtkRectangularButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectangularButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectangularButtonSource::NewInstance());

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
PyvtkRectangularButtonSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRectangularButtonSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRectangularButtonSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWidth(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMinValue() :
      op->vtkRectangularButtonSource::GetWidthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidthMaxValue() :
      op->vtkRectangularButtonSource::GetWidthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRectangularButtonSource::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeight(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetHeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMinValue() :
      op->vtkRectangularButtonSource::GetHeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeightMaxValue() :
      op->vtkRectangularButtonSource::GetHeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkRectangularButtonSource::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepth(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepthMinValue() :
      op->vtkRectangularButtonSource::GetDepthMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepthMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepthMaxValue() :
      op->vtkRectangularButtonSource::GetDepthMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDepth() :
      op->vtkRectangularButtonSource::GetDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoxRatio(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetBoxRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatioMinValue() :
      op->vtkRectangularButtonSource::GetBoxRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatioMaxValue() :
      op->vtkRectangularButtonSource::GetBoxRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetBoxRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBoxRatio() :
      op->vtkRectangularButtonSource::GetBoxRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureRatio(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetTextureRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatioMinValue() :
      op->vtkRectangularButtonSource::GetTextureRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatioMaxValue() :
      op->vtkRectangularButtonSource::GetTextureRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureRatio() :
      op->vtkRectangularButtonSource::GetTextureRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureHeightRatio(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetTextureHeightRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatioMinValue() :
      op->vtkRectangularButtonSource::GetTextureHeightRatioMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatioMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatioMaxValue() :
      op->vtkRectangularButtonSource::GetTextureHeightRatioMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetTextureHeightRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureHeightRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextureHeightRatio() :
      op->vtkRectangularButtonSource::GetTextureHeightRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkRectangularButtonSource::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRectangularButtonSource_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectangularButtonSource *op = static_cast<vtkRectangularButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkRectangularButtonSource::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRectangularButtonSource_Methods[] = {
  {"IsTypeOf", PyvtkRectangularButtonSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectangularButtonSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectangularButtonSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRectangularButtonSource\nC++: static vtkRectangularButtonSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectangularButtonSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRectangularButtonSource\nC++: vtkRectangularButtonSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRectangularButtonSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRectangularButtonSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWidth", PyvtkRectangularButtonSource_SetWidth, METH_VARARGS,
   "SetWidth(self, _arg:float) -> None\nC++: virtual void SetWidth(double _arg)\n\nSet/Get the width of the button.\n"},
  {"GetWidthMinValue", PyvtkRectangularButtonSource_GetWidthMinValue, METH_VARARGS,
   "GetWidthMinValue(self) -> float\nC++: virtual double GetWidthMinValue()\n\n"},
  {"GetWidthMaxValue", PyvtkRectangularButtonSource_GetWidthMaxValue, METH_VARARGS,
   "GetWidthMaxValue(self) -> float\nC++: virtual double GetWidthMaxValue()\n\n"},
  {"GetWidth", PyvtkRectangularButtonSource_GetWidth, METH_VARARGS,
   "GetWidth(self) -> float\nC++: virtual double GetWidth()\n\n"},
  {"SetHeight", PyvtkRectangularButtonSource_SetHeight, METH_VARARGS,
   "SetHeight(self, _arg:float) -> None\nC++: virtual void SetHeight(double _arg)\n\nSet/Get the height of the button.\n"},
  {"GetHeightMinValue", PyvtkRectangularButtonSource_GetHeightMinValue, METH_VARARGS,
   "GetHeightMinValue(self) -> float\nC++: virtual double GetHeightMinValue()\n\n"},
  {"GetHeightMaxValue", PyvtkRectangularButtonSource_GetHeightMaxValue, METH_VARARGS,
   "GetHeightMaxValue(self) -> float\nC++: virtual double GetHeightMaxValue()\n\n"},
  {"GetHeight", PyvtkRectangularButtonSource_GetHeight, METH_VARARGS,
   "GetHeight(self) -> float\nC++: virtual double GetHeight()\n\n"},
  {"SetDepth", PyvtkRectangularButtonSource_SetDepth, METH_VARARGS,
   "SetDepth(self, _arg:float) -> None\nC++: virtual void SetDepth(double _arg)\n\nSet/Get the depth of the button (the z-eliipsoid axis length).\n"},
  {"GetDepthMinValue", PyvtkRectangularButtonSource_GetDepthMinValue, METH_VARARGS,
   "GetDepthMinValue(self) -> float\nC++: virtual double GetDepthMinValue()\n\n"},
  {"GetDepthMaxValue", PyvtkRectangularButtonSource_GetDepthMaxValue, METH_VARARGS,
   "GetDepthMaxValue(self) -> float\nC++: virtual double GetDepthMaxValue()\n\n"},
  {"GetDepth", PyvtkRectangularButtonSource_GetDepth, METH_VARARGS,
   "GetDepth(self) -> float\nC++: virtual double GetDepth()\n\n"},
  {"SetBoxRatio", PyvtkRectangularButtonSource_SetBoxRatio, METH_VARARGS,
   "SetBoxRatio(self, _arg:float) -> None\nC++: virtual void SetBoxRatio(double _arg)\n\nSet/Get the ratio of the bottom of the button with the shoulder\nregion. Numbers greater than one produce buttons with a wider\nbottom than shoulder; ratios less than one produce buttons that\nhave a wider shoulder than bottom.\n"},
  {"GetBoxRatioMinValue", PyvtkRectangularButtonSource_GetBoxRatioMinValue, METH_VARARGS,
   "GetBoxRatioMinValue(self) -> float\nC++: virtual double GetBoxRatioMinValue()\n\n"},
  {"GetBoxRatioMaxValue", PyvtkRectangularButtonSource_GetBoxRatioMaxValue, METH_VARARGS,
   "GetBoxRatioMaxValue(self) -> float\nC++: virtual double GetBoxRatioMaxValue()\n\n"},
  {"GetBoxRatio", PyvtkRectangularButtonSource_GetBoxRatio, METH_VARARGS,
   "GetBoxRatio(self) -> float\nC++: virtual double GetBoxRatio()\n\n"},
  {"SetTextureRatio", PyvtkRectangularButtonSource_SetTextureRatio, METH_VARARGS,
   "SetTextureRatio(self, _arg:float) -> None\nC++: virtual void SetTextureRatio(double _arg)\n\nSet/Get the ratio of the texture region to the shoulder region.\nThis number must be 0<=tr<=1. If the texture style is to fit the\nimage, then satisfying the texture ratio may only be possible in\none of the two directions (length or width) depending on the\ndimensions of the texture.\n"},
  {"GetTextureRatioMinValue", PyvtkRectangularButtonSource_GetTextureRatioMinValue, METH_VARARGS,
   "GetTextureRatioMinValue(self) -> float\nC++: virtual double GetTextureRatioMinValue()\n\n"},
  {"GetTextureRatioMaxValue", PyvtkRectangularButtonSource_GetTextureRatioMaxValue, METH_VARARGS,
   "GetTextureRatioMaxValue(self) -> float\nC++: virtual double GetTextureRatioMaxValue()\n\n"},
  {"GetTextureRatio", PyvtkRectangularButtonSource_GetTextureRatio, METH_VARARGS,
   "GetTextureRatio(self) -> float\nC++: virtual double GetTextureRatio()\n\n"},
  {"SetTextureHeightRatio", PyvtkRectangularButtonSource_SetTextureHeightRatio, METH_VARARGS,
   "SetTextureHeightRatio(self, _arg:float) -> None\nC++: virtual void SetTextureHeightRatio(double _arg)\n\nSet/Get the ratio of the height of the texture region to the\nshoulder height. Values greater than 1.0 yield convex buttons\nwith the texture region raised above the shoulder. Values less\nthan 1.0 yield concave buttons with the texture region below the\nshoulder.\n"},
  {"GetTextureHeightRatioMinValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMinValue, METH_VARARGS,
   "GetTextureHeightRatioMinValue(self) -> float\nC++: virtual double GetTextureHeightRatioMinValue()\n\n"},
  {"GetTextureHeightRatioMaxValue", PyvtkRectangularButtonSource_GetTextureHeightRatioMaxValue, METH_VARARGS,
   "GetTextureHeightRatioMaxValue(self) -> float\nC++: virtual double GetTextureHeightRatioMaxValue()\n\n"},
  {"GetTextureHeightRatio", PyvtkRectangularButtonSource_GetTextureHeightRatio, METH_VARARGS,
   "GetTextureHeightRatio(self) -> float\nC++: virtual double GetTextureHeightRatio()\n\n"},
  {"SetOutputPointsPrecision", PyvtkRectangularButtonSource_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkRectangularButtonSource_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRectangularButtonSource_Doc =
  "vtkRectangularButtonSource - create a rectangular button\n\n"
  "Superclass: vtkButtonSource\n\n"
  "vtkRectangularButtonSource creates a rectangular shaped button with\n"
  "texture coordinates suitable for application of a texture map. This\n"
  "provides a way to make nice looking 3D buttons. The buttons are\n"
  "represented as vtkPolyData that includes texture coordinates and\n"
  "normals. The button lies in the x-y plane.\n\n"
  "To use this class you must define its width, height and length. These\n"
  "measurements are all taken with respect to the shoulder of the\n"
  "button. The shoulder is defined as follows. Imagine a box sitting on\n"
  "the floor. The distance from the floor to the top of the box is the\n"
  "depth; the other directions are the length (x-direction) and height\n"
  "(y-direction). In this particular widget the box can have a smaller\n"
  "bottom than top. The ratio in size between bottom and top is called\n"
  "the box ratio (by default=1.0). The ratio of the texture region to\n"
  "the shoulder region is the texture ratio. And finally the texture\n"
  "region may be out of plane compared to the shoulder. The texture\n"
  "height ratio controls this.\n\n"
  "@sa\n"
  "vtkButtonSource vtkEllipticalButtonSource\n\n"
  "@warning\n"
  "The button is defined in the x-y plane. Use\n"
  "vtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\n"
  "different direction.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRectangularButtonSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkRectangularButtonSource", // tp_name
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
  PyvtkRectangularButtonSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectangularButtonSource_StaticNew()
{
  return vtkRectangularButtonSource::New();
}

PyObject *PyvtkRectangularButtonSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRectangularButtonSource_Type, PyvtkRectangularButtonSource_Methods,
    "vtkRectangularButtonSource",
 &PyvtkRectangularButtonSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkButtonSource_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectangularButtonSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectangularButtonSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectangularButtonSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

