// python wrapper for vtkImplicitSum
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitSum.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitSum(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitSum_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitFunction_ClassNew
extern "C" { PyObject *PyvtkImplicitFunction_ClassNew(); }
#define DECLARED_PyvtkImplicitFunction_ClassNew
#endif

static PyObject *
PyvtkImplicitSum_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitSum::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitSum::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitSum *tempr = vtkImplicitSum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitSum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitSum::NewInstance());

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
PyvtkImplicitSum_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitSum::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitSum::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_EvaluateFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0));

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
PyvtkImplicitSum_EvaluateFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_EvaluateFunction_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateFunction(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_EvaluateFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImplicitSum_EvaluateFunction_s1(self, args);
    case 2:
      return PyvtkImplicitSum_EvaluateFunction_s2(self, args);
    case 3:
      return PyvtkImplicitSum_EvaluateFunction_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateFunction");
  return nullptr;
}


static PyObject *
PyvtkImplicitSum_EvaluateGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

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
      op->vtkImplicitSum::EvaluateGradient(temp0, temp1);
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
PyvtkImplicitSum_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitSum::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_AddFunction_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddFunction(temp0, temp1);
    }
    else
    {
      op->vtkImplicitSum::AddFunction(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->AddFunction(temp0);
    }
    else
    {
      op->vtkImplicitSum::AddFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitSum_AddFunction(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImplicitSum_AddFunction_s1(self, args);
    case 1:
      return PyvtkImplicitSum_AddFunction_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddFunction");
  return nullptr;
}


static PyObject *
PyvtkImplicitSum_RemoveAllFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFunctions();
    }
    else
    {
      op->vtkImplicitSum::RemoveAllFunctions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFunctionWeight(temp0, temp1);
    }
    else
    {
      op->vtkImplicitSum::SetFunctionWeight(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_SetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeByWeight(temp0);
    }
    else
    {
      op->vtkImplicitSum::SetNormalizeByWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_GetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeByWeight() :
      op->vtkImplicitSum::GetNormalizeByWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOn();
    }
    else
    {
      op->vtkImplicitSum::NormalizeByWeightOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitSum_NormalizeByWeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitSum *op = static_cast<vtkImplicitSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOff();
    }
    else
    {
      op->vtkImplicitSum::NormalizeByWeightOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitSum_Methods[] = {
  {"IsTypeOf", PyvtkImplicitSum_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitSum_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitSum_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitSum\nC++: static vtkImplicitSum *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitSum_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitSum\nC++: vtkImplicitSum *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitSum_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitSum_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateFunction", PyvtkImplicitSum_EvaluateFunction, METH_VARARGS,
   "EvaluateFunction(self, x:[float, float, float]) -> float\nC++: double EvaluateFunction(double x[3]) override;\nEvaluateFunction(self, input:vtkDataArray, output:vtkDataArray)\n    -> None\nC++: virtual void EvaluateFunction(vtkDataArray *input,\n    vtkDataArray *output)\nEvaluateFunction(self, x:float, y:float, z:float) -> float\nC++: virtual double EvaluateFunction(double x, double y, double z)\n\nEvaluate function at position x-y-z and return value.  You should\ngenerally not call this method directly, you should use\nFunctionValue() instead.  This method must be implemented by any\nderived class.\n"},
  {"EvaluateGradient", PyvtkImplicitSum_EvaluateGradient, METH_VARARGS,
   "EvaluateGradient(self, x:[float, float, float], g:[float, float,\n    float]) -> None\nC++: void EvaluateGradient(double x[3], double g[3]) override;\n\nEvaluate gradient of the weighted sum of functions.  Input\nfunctions should be linear.\n"},
  {"GetMTime", PyvtkImplicitSum_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride modified time retrieval because of object dependencies.\n"},
  {"AddFunction", PyvtkImplicitSum_AddFunction, METH_VARARGS,
   "AddFunction(self, in_:vtkImplicitFunction, weight:float) -> None\nC++: void AddFunction(vtkImplicitFunction *in, double weight)\nAddFunction(self, in_:vtkImplicitFunction) -> None\nC++: void AddFunction(vtkImplicitFunction *in)\n\nAdd another implicit function to the list of functions, along\nwith a weighting factor.\n"},
  {"RemoveAllFunctions", PyvtkImplicitSum_RemoveAllFunctions, METH_VARARGS,
   "RemoveAllFunctions(self) -> None\nC++: void RemoveAllFunctions()\n\nRemove all functions from the list.\n"},
  {"SetFunctionWeight", PyvtkImplicitSum_SetFunctionWeight, METH_VARARGS,
   "SetFunctionWeight(self, f:vtkImplicitFunction, weight:float)\n    -> None\nC++: void SetFunctionWeight(vtkImplicitFunction *f, double weight)\n\nSet the weight (coefficient) of the given function to be weight.\n"},
  {"SetNormalizeByWeight", PyvtkImplicitSum_SetNormalizeByWeight, METH_VARARGS,
   "SetNormalizeByWeight(self, _arg:int) -> None\nC++: virtual void SetNormalizeByWeight(vtkTypeBool _arg)\n\nWhen calculating the function and gradient values of the\ncomposite function, setting NormalizeByWeight on will divide the\nfinal result by the total weight of the component functions. This\nprocess does not otherwise normalize the gradient vector. By\ndefault, NormalizeByWeight is off.\n"},
  {"GetNormalizeByWeight", PyvtkImplicitSum_GetNormalizeByWeight, METH_VARARGS,
   "GetNormalizeByWeight(self) -> int\nC++: virtual vtkTypeBool GetNormalizeByWeight()\n\n"},
  {"NormalizeByWeightOn", PyvtkImplicitSum_NormalizeByWeightOn, METH_VARARGS,
   "NormalizeByWeightOn(self) -> None\nC++: virtual void NormalizeByWeightOn()\n\n"},
  {"NormalizeByWeightOff", PyvtkImplicitSum_NormalizeByWeightOff, METH_VARARGS,
   "NormalizeByWeightOff(self) -> None\nC++: virtual void NormalizeByWeightOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitSum_Doc =
  "vtkImplicitSum - implicit sum of other implicit functions\n\n"
  "Superclass: vtkImplicitFunction\n\n"
  "vtkImplicitSum produces a linear combination of other implicit\n"
  "functions. The contribution of each function is weighted by a scalar\n"
  "coefficient. The NormalizeByWeight option normalizes the output so\n"
  "that the scalar weights add up to 1. Note that this function gives\n"
  "accurate sums and gradients only if the input functions are linear.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitSum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkImplicitSum", // tp_name
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
  PyvtkImplicitSum_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitSum_StaticNew()
{
  return vtkImplicitSum::New();
}

PyObject *PyvtkImplicitSum_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitSum_Type, PyvtkImplicitSum_Methods,
    "vtkImplicitSum",
 &PyvtkImplicitSum_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitSum(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitSum_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitSum", o) != 0)
  {
    Py_DECREF(o);
  }

}

