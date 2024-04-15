// python wrapper for vtkResliceCursorPolyDataAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResliceCursorPolyDataAlgorithm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(PyObject *dict); }
extern "C" { PyObject *PyvtkResliceCursorPolyDataAlgorithm_ClassNew(); }


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorPolyDataAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = vtkResliceCursorPolyDataAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorPolyDataAlgorithm::NewInstance());

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
PyvtkResliceCursorPolyDataAlgorithm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResliceCursorPolyDataAlgorithm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormal(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslicePlaneNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReslicePlaneNormal() :
      op->vtkResliceCursorPolyDataAlgorithm::GetReslicePlaneNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToXAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToXAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToYAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToYAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReslicePlaneNormalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetReslicePlaneNormalToZAxis();
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetReslicePlaneNormalToZAxis();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  vtkResliceCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursor"))
  {
    if (ap.IsBound())
    {
      op->SetResliceCursor(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetResliceCursor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursor *tempr = (ap.IsBound() ?
      op->GetResliceCursor() :
      op->vtkResliceCursorPolyDataAlgorithm::GetResliceCursor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSliceBounds(temp0);
    }
    else
    {
      op->vtkResliceCursorPolyDataAlgorithm::SetSliceBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s1(self, args);
    case 1:
      return PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSliceBounds");
  return nullptr;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSliceBounds() :
      op->vtkResliceCursorPolyDataAlgorithm::GetSliceBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterlineAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetCenterlineAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetCenterlineAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThickSlabAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetThickSlabAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetThickSlabAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis1() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneAxis2() :
      op->vtkResliceCursorPolyDataAlgorithm::GetPlaneAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOtherPlaneForAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOtherPlaneForAxis(temp0) :
      op->vtkResliceCursorPolyDataAlgorithm::GetOtherPlaneForAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPolyDataAlgorithm_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPolyDataAlgorithm *op = static_cast<vtkResliceCursorPolyDataAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkResliceCursorPolyDataAlgorithm::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorPolyDataAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorPolyDataAlgorithm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceCursorPolyDataAlgorithm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceCursorPolyDataAlgorithm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResliceCursorPolyDataAlgorithm\nC++: static vtkResliceCursorPolyDataAlgorithm *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceCursorPolyDataAlgorithm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResliceCursorPolyDataAlgorithm\nC++: vtkResliceCursorPolyDataAlgorithm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResliceCursorPolyDataAlgorithm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResliceCursorPolyDataAlgorithm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormal, METH_VARARGS,
   "SetReslicePlaneNormal(self, _arg:int) -> None\nC++: virtual void SetReslicePlaneNormal(int _arg)\n\nWhich of the 3 axes defines the reslice plane normal ?\n"},
  {"GetReslicePlaneNormal", PyvtkResliceCursorPolyDataAlgorithm_GetReslicePlaneNormal, METH_VARARGS,
   "GetReslicePlaneNormal(self) -> int\nC++: virtual int GetReslicePlaneNormal()\n\n"},
  {"SetReslicePlaneNormalToXAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToXAxis, METH_VARARGS,
   "SetReslicePlaneNormalToXAxis(self) -> None\nC++: void SetReslicePlaneNormalToXAxis()\n\nSet the planes that correspond to the reslice axes.\n"},
  {"SetReslicePlaneNormalToYAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToYAxis, METH_VARARGS,
   "SetReslicePlaneNormalToYAxis(self) -> None\nC++: void SetReslicePlaneNormalToYAxis()\n\n"},
  {"SetReslicePlaneNormalToZAxis", PyvtkResliceCursorPolyDataAlgorithm_SetReslicePlaneNormalToZAxis, METH_VARARGS,
   "SetReslicePlaneNormalToZAxis(self) -> None\nC++: void SetReslicePlaneNormalToZAxis()\n\n"},
  {"SetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_SetResliceCursor, METH_VARARGS,
   "SetResliceCursor(self, __a:vtkResliceCursor) -> None\nC++: virtual void SetResliceCursor(vtkResliceCursor *)\n\nSet the Reslice cursor from which to generate the polydata\nrepresentation\n"},
  {"GetResliceCursor", PyvtkResliceCursorPolyDataAlgorithm_GetResliceCursor, METH_VARARGS,
   "GetResliceCursor(self) -> vtkResliceCursor\nC++: virtual vtkResliceCursor *GetResliceCursor()\n\n"},
  {"SetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_SetSliceBounds, METH_VARARGS,
   "SetSliceBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetSliceBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetSliceBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetSliceBounds(const double _arg[6])\n\nSet/Get the slice bounds, ie the slice of this view on which to\ndisplay the reslice cursor.\n"},
  {"GetSliceBounds", PyvtkResliceCursorPolyDataAlgorithm_GetSliceBounds, METH_VARARGS,
   "GetSliceBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetSliceBounds()\n\n"},
  {"GetCenterlineAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis1, METH_VARARGS,
   "GetCenterlineAxis1(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis1()\n\nGet either one of the axes that this object produces. Depending\non the mode, one renders either the centerline axes or both the\ncenterline axes and the slab\n"},
  {"GetCenterlineAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetCenterlineAxis2, METH_VARARGS,
   "GetCenterlineAxis2(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetCenterlineAxis2()\n\n"},
  {"GetThickSlabAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis1, METH_VARARGS,
   "GetThickSlabAxis1(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis1()\n\n"},
  {"GetThickSlabAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetThickSlabAxis2, METH_VARARGS,
   "GetThickSlabAxis2(self) -> vtkPolyData\nC++: virtual vtkPolyData *GetThickSlabAxis2()\n\n"},
  {"GetAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetAxis1, METH_VARARGS,
   "GetAxis1(self) -> int\nC++: virtual int GetAxis1()\n\nGet the index of the axes and the planes that they represent\n"},
  {"GetAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetAxis2, METH_VARARGS,
   "GetAxis2(self) -> int\nC++: virtual int GetAxis2()\n\n"},
  {"GetPlaneAxis1", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis1, METH_VARARGS,
   "GetPlaneAxis1(self) -> int\nC++: virtual int GetPlaneAxis1()\n\n"},
  {"GetPlaneAxis2", PyvtkResliceCursorPolyDataAlgorithm_GetPlaneAxis2, METH_VARARGS,
   "GetPlaneAxis2(self) -> int\nC++: virtual int GetPlaneAxis2()\n\n"},
  {"GetOtherPlaneForAxis", PyvtkResliceCursorPolyDataAlgorithm_GetOtherPlaneForAxis, METH_VARARGS,
   "GetOtherPlaneForAxis(self, p:int) -> int\nC++: int GetOtherPlaneForAxis(int p)\n\nConvenience method that, given one plane, returns the other plane\nthat this class represents.\n"},
  {"GetMTime", PyvtkResliceCursorPolyDataAlgorithm_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime. Check the MTime of the internal ResliceCursor as\nwell, if one has been set\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResliceCursorPolyDataAlgorithm_Doc =
  "vtkResliceCursorPolyDataAlgorithm - generates a 2D reslice cursor\npolydata\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkResliceCursorPolyDataAlgorithm is a class that generates a 2D\n"
  "reslice cursor vtkPolyData, suitable for rendering within a\n"
  "vtkResliceCursorActor. The class takes as input the reslice plane\n"
  "normal index (an index into the normal plane maintained by the\n"
  "reslice cursor object) and generates the polydata representing the\n"
  "other two reslice axes suitable for rendering on a slice through this\n"
  "plane. The cursor consists of two intersection axes lines that meet\n"
  "at the cursor focus. These lines may have a user defined thickness.\n"
  "They need not be orthogonal to each other.\n"
  "@sa\n"
  "vtkResliceCursorActor vtkResliceCursor vtkResliceCursorWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResliceCursorPolyDataAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkResliceCursorPolyDataAlgorithm", // tp_name
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
  PyvtkResliceCursorPolyDataAlgorithm_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorPolyDataAlgorithm_StaticNew()
{
  return vtkResliceCursorPolyDataAlgorithm::New();
}

PyObject *PyvtkResliceCursorPolyDataAlgorithm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResliceCursorPolyDataAlgorithm_Type, PyvtkResliceCursorPolyDataAlgorithm_Methods,
    "vtkResliceCursorPolyDataAlgorithm",
 &PyvtkResliceCursorPolyDataAlgorithm_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "XAxis", vtkResliceCursorPolyDataAlgorithm::XAxis },
        { "YAxis", vtkResliceCursorPolyDataAlgorithm::YAxis },
        { "ZAxis", vtkResliceCursorPolyDataAlgorithm::ZAxis },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursorPolyDataAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorPolyDataAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorPolyDataAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

