// python wrapper for vtkImplicitProjectOnPlaneDistance
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitProjectOnPlaneDistance.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitProjectOnPlaneDistance(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitProjectOnPlaneDistance_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitProjectOnPlaneDistance_NormType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkImplicitProjectOnPlaneDistance.NormType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkImplicitProjectOnPlaneDistance_NormType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkImplicitProjectOnPlaneDistance_NormType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitProjectOnPlaneDistance::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitProjectOnPlaneDistance::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitProjectOnPlaneDistance *tempr = vtkImplicitProjectOnPlaneDistance::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitProjectOnPlaneDistance *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitProjectOnPlaneDistance::NewInstance());

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
PyvtkImplicitProjectOnPlaneDistance_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitProjectOnPlaneDistance::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitProjectOnPlaneDistance::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitProjectOnPlaneDistance::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0) :
      op->vtkImplicitProjectOnPlaneDistance::EvaluateFunction(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->EvaluateFunction(temp0, temp1);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->EvaluateFunction(temp0, temp1, temp2) :
      op->vtkImplicitProjectOnPlaneDistance::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateGradient(temp0, temp1);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::EvaluateGradient(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkImplicitProjectOnPlaneDistance::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_GetNorm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkImplicitProjectOnPlaneDistance::NormType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetNorm() :
      op->vtkImplicitProjectOnPlaneDistance::GetNorm());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkImplicitProjectOnPlaneDistance_NormType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetNorm_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  typedef vtkImplicitProjectOnPlaneDistance::NormType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkImplicitProjectOnPlaneDistance.NormType"))
  {
    if (ap.IsBound())
    {
      op->SetNorm(temp0);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::SetNorm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetNorm_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNorm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNorm(temp0);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::SetNorm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitProjectOnPlaneDistance_SetNorm_Methods[] = {
  {"SetNorm", PyvtkImplicitProjectOnPlaneDistance_SetNorm_s1, METH_VARARGS,
   "@E vtkImplicitProjectOnPlaneDistance.NormType"},
  {"SetNorm", PyvtkImplicitProjectOnPlaneDistance_SetNorm_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetNorm(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitProjectOnPlaneDistance_SetNorm_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNorm");
  return nullptr;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractCellLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkImplicitProjectOnPlaneDistance::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitProjectOnPlaneDistance_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitProjectOnPlaneDistance *op = static_cast<vtkImplicitProjectOnPlaneDistance *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkImplicitProjectOnPlaneDistance::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitProjectOnPlaneDistance_Methods[] = {
  {"IsTypeOf", PyvtkImplicitProjectOnPlaneDistance_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitProjectOnPlaneDistance_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitProjectOnPlaneDistance_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitProjectOnPlaneDistance\nC++: static vtkImplicitProjectOnPlaneDistance *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitProjectOnPlaneDistance_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitProjectOnPlaneDistance\nC++: vtkImplicitProjectOnPlaneDistance *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitProjectOnPlaneDistance_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitProjectOnPlaneDistance_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkImplicitProjectOnPlaneDistance_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the Input dependency.\n"},
  {"EvaluateFunction", PyvtkImplicitProjectOnPlaneDistance_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkImplicitProjectOnPlaneDistance_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], g:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate function gradient of nearest triangle to point x[3].\nWARNING: not implemented as it is of no use in this context.\n"},
  {"SetInput", PyvtkImplicitProjectOnPlaneDistance_SetInput, METH_VARARGS,
   "SetInput(self, input:vtkPolyData) -> None\nC++: void SetInput(vtkPolyData *input)\n\nSet the input vtkPolyData used for the implicit function\nevaluation. This polydata needs to be planar.\n"},
  {"GetTolerance", PyvtkImplicitProjectOnPlaneDistance_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\nSet/get the tolerance used for the locator. Default is 0.01.\n"},
  {"SetTolerance", PyvtkImplicitProjectOnPlaneDistance_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\n"},
  {"GetNorm", PyvtkImplicitProjectOnPlaneDistance_GetNorm, METH_VARARGS,
   "GetNorm(self) -> NormType\nC++: NormType GetNorm()\n\nSet the norm to use: L0: 0 when the projection is inside the\ninput polygon, 1 otherwise L2: Euclidean distance between the\nprojection and the polygon (default)\n"},
  {"SetNorm", PyvtkImplicitProjectOnPlaneDistance_SetNorm, METH_VARARGS,
   "SetNorm(self, n:NormType) -> None\nC++: void SetNorm(NormType n)\nSetNorm(self, n:int) -> None\nC++: void SetNorm(int n)\n\n"},
  {"GetLocator", PyvtkImplicitProjectOnPlaneDistance_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractCellLocator\nC++: virtual vtkAbstractCellLocator *GetLocator()\n\nSet/get the Locator used by to compute the distance. A\nvtkStaticCellLocator is provided by default if none is given by\nthe user.\n"},
  {"SetLocator", PyvtkImplicitProjectOnPlaneDistance_SetLocator, METH_VARARGS,
   "SetLocator(self, _arg:vtkAbstractCellLocator) -> None\nC++: virtual void SetLocator(vtkAbstractCellLocator *_arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitProjectOnPlaneDistance_Doc =
  "vtkImplicitProjectOnPlaneDistance - This class receive a plannar\npolygon as input.\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "Given a point, it can evaluate the L0 or L2 norm between the\n"
  "projection of this point on the plan of the polygon and the polygon\n"
  "itself.\n\n"
  "An interesting use of this class is to enable the L0 norm and\n"
  "evaluate the \"projected distance\" between every vertex of a mesh and\n"
  "the given plannar polygon. As a result, all the vertices that project\n"
  "onto the polygon will correspond to the value 0 and other ones will\n"
  "receive the value 1. From there, we can use a clip to keep only the\n"
  "part of the mesh \"below\" the polygon.\n\n"
  "TLDR: This filter allows to clip using the extrusion of any plannar\n"
  "polygon.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitProjectOnPlaneDistance_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkImplicitProjectOnPlaneDistance", // tp_name
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
  PyvtkImplicitProjectOnPlaneDistance_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitProjectOnPlaneDistance_StaticNew()
{
  return vtkImplicitProjectOnPlaneDistance::New();
}

PyObject *PyvtkImplicitProjectOnPlaneDistance_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitProjectOnPlaneDistance_Type, PyvtkImplicitProjectOnPlaneDistance_Methods,
    "vtkImplicitProjectOnPlaneDistance",
 &PyvtkImplicitProjectOnPlaneDistance_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImplicitFunction");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkImplicitProjectOnPlaneDistance_NormType_Type);
  // members of vtkImplicitProjectOnPlaneDistance::NormType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkImplicitProjectOnPlaneDistance_NormType_Type.tp_dict = enumdict;

    typedef vtkImplicitProjectOnPlaneDistance::NormType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "L0", cxx_enum_type::L0 },
      { "L2", cxx_enum_type::L2 },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkImplicitProjectOnPlaneDistance_NormType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkImplicitProjectOnPlaneDistance_NormType_Type, "vtkImplicitProjectOnPlaneDistance.NormType");

  o = (PyObject *)&PyvtkImplicitProjectOnPlaneDistance_NormType_Type;
  if (PyDict_SetItemString(d, "NormType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitProjectOnPlaneDistance(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitProjectOnPlaneDistance_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitProjectOnPlaneDistance", o) != 0)
  {
    Py_DECREF(o);
  }

}

