// python wrapper for vtkQuaternionInterpolator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkQuaternionInterpolator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuaternionInterpolator(PyObject *dict); }
extern "C" { PyObject *PyvtkQuaternionInterpolator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkQuaternionInterpolator.vtkQuaternionInterpolationSearchMethod", // tp_name
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
PyObject *PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_Type, static_cast<int>(val));
}


static PyObject *
PyvtkQuaternionInterpolator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuaternionInterpolator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuaternionInterpolator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuaternionInterpolator *tempr = vtkQuaternionInterpolator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuaternionInterpolator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuaternionInterpolator::NewInstance());

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
PyvtkQuaternionInterpolator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkQuaternionInterpolator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkQuaternionInterpolator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetNumberOfQuaternions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfQuaternions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfQuaternions() :
      op->vtkQuaternionInterpolator::GetNumberOfQuaternions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMinimumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumT() :
      op->vtkQuaternionInterpolator::GetMinimumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetMaximumT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumT() :
      op->vtkQuaternionInterpolator::GetMaximumT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkQuaternionInterpolator::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, pobj1, "vtkQuaterniond"))
  {
    if (ap.IsBound())
    {
      op->AddQuaternion(temp0, *temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->AddQuaternion(temp0, temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::AddQuaternion(temp0, temp1);
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

static PyMethodDef PyvtkQuaternionInterpolator_AddQuaternion_Methods[] = {
  {"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion_s1, METH_VARARGS,
   "@dW vtkQuaterniond"},
  {"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion_s2, METH_VARARGS,
   "@dP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternionInterpolator_AddQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_AddQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddQuaternion");
  return nullptr;
}


static PyObject *
PyvtkQuaternionInterpolator_RemoveQuaternion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveQuaternion(temp0);
    }
    else
    {
      op->vtkQuaternionInterpolator::RemoveQuaternion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  vtkQuaterniond *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetSpecialObject(temp1, "vtkQuaterniond"))
  {
    if (ap.IsBound())
    {
      op->InterpolateQuaternion(temp0, *temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateQuaternion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  double temp0;
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateQuaternion(temp0, temp1);
    }
    else
    {
      op->vtkQuaternionInterpolator::InterpolateQuaternion(temp0, temp1);
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

static PyMethodDef PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods[] = {
  {"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion_s1, METH_VARARGS,
   "@dW &vtkQuaterniond"},
  {"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion_s2, METH_VARARGS,
   "@dP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkQuaternionInterpolator_InterpolateQuaternion(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkQuaternionInterpolator_InterpolateQuaternion_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateQuaternion");
  return nullptr;
}


static PyObject *
PyvtkQuaternionInterpolator_GetSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSearchMethod() :
      op->vtkQuaternionInterpolator::GetSearchMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetSearchMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSearchMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSearchMethod(temp0);
    }
    else
    {
      op->vtkQuaternionInterpolator::SetSearchMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkQuaternionInterpolator::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkQuaternionInterpolator::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuaternionInterpolator *op = static_cast<vtkQuaternionInterpolator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToSpline();
    }
    else
    {
      op->vtkQuaternionInterpolator::SetInterpolationTypeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuaternionInterpolator_Methods[] = {
  {"IsTypeOf", PyvtkQuaternionInterpolator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuaternionInterpolator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuaternionInterpolator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkQuaternionInterpolator\nC++: static vtkQuaternionInterpolator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuaternionInterpolator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkQuaternionInterpolator\nC++: vtkQuaternionInterpolator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkQuaternionInterpolator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkQuaternionInterpolator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfQuaternions", PyvtkQuaternionInterpolator_GetNumberOfQuaternions, METH_VARARGS,
   "GetNumberOfQuaternions(self) -> int\nC++: int GetNumberOfQuaternions()\n\nReturn the number of quaternions in the list of quaternions to be\ninterpolated.\n"},
  {"GetMinimumT", PyvtkQuaternionInterpolator_GetMinimumT, METH_VARARGS,
   "GetMinimumT(self) -> float\nC++: double GetMinimumT()\n\nObtain some information about the interpolation range. The\nnumbers returned (corresponding to parameter t, usually thought\nof as time) are undefined if the list of transforms is empty.\nThis is a convenience method for interpolation.\n"},
  {"GetMaximumT", PyvtkQuaternionInterpolator_GetMaximumT, METH_VARARGS,
   "GetMaximumT(self) -> float\nC++: double GetMaximumT()\n\n"},
  {"Initialize", PyvtkQuaternionInterpolator_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nReset the class so that it contains no data; i.e., the array of\n(t,q[4]) information is discarded.\n"},
  {"AddQuaternion", PyvtkQuaternionInterpolator_AddQuaternion, METH_VARARGS,
   "AddQuaternion(self, t:float, q:vtkQuaterniond) -> None\nC++: void AddQuaternion(double t, const vtkQuaterniond &q)\nAddQuaternion(self, t:float, q:[float, float, float, float])\n    -> None\nC++: void AddQuaternion(double t, double q[4])\n\nAdd another quaternion to the list of quaternions to be\ninterpolated. Note that using the same time t value more than\nonce replaces the previous quaternion at t. At least one\nquaternions must be added to define an interpolation functions.\n"},
  {"RemoveQuaternion", PyvtkQuaternionInterpolator_RemoveQuaternion, METH_VARARGS,
   "RemoveQuaternion(self, t:float) -> None\nC++: void RemoveQuaternion(double t)\n\nDelete the quaternion at a particular parameter t. If there is no\nquaternion tuple defined at t, then the method does nothing.\n"},
  {"InterpolateQuaternion", PyvtkQuaternionInterpolator_InterpolateQuaternion, METH_VARARGS,
   "InterpolateQuaternion(self, t:float, q:vtkQuaterniond) -> None\nC++: void InterpolateQuaternion(double t, vtkQuaterniond &q)\nInterpolateQuaternion(self, t:float, q:[float, float, float,\n    float]) -> None\nC++: void InterpolateQuaternion(double t, double q[4])\n\nInterpolate the list of quaternions and determine a new\nquaternion (i.e., fill in the quaternion provided). If t is\noutside the range of (min,max) values, then t is clamped to lie\nwithin the range.\n"},
  {"GetSearchMethod", PyvtkQuaternionInterpolator_GetSearchMethod, METH_VARARGS,
   "GetSearchMethod(self) -> int\nC++: int GetSearchMethod()\n\nSet / Get the search type method. 0 is a binary search method\nO(log(N)) 1 is a linear search method O(N). Linear search method\nis kept because it can be faster than the dichotomous search\nmethod in specific cases\n"},
  {"SetSearchMethod", PyvtkQuaternionInterpolator_SetSearchMethod, METH_VARARGS,
   "SetSearchMethod(self, type:int) -> None\nC++: void SetSearchMethod(int type)\n\n"},
  {"SetInterpolationType", PyvtkQuaternionInterpolator_SetInterpolationType, METH_VARARGS,
   "SetInterpolationType(self, _arg:int) -> None\nC++: virtual void SetInterpolationType(int _arg)\n\nSpecify which type of function to use for interpolation. By\ndefault (SetInterpolationFunctionToSpline()), cubic spline\ninterpolation using a modified Kochanek basis is employed.\nOtherwise, if SetInterpolationFunctionToLinear() is invoked,\nlinear spherical interpolation is used between each pair of\nquaternions.\n"},
  {"GetInterpolationTypeMinValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMinValue, METH_VARARGS,
   "GetInterpolationTypeMinValue(self) -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\n"},
  {"GetInterpolationTypeMaxValue", PyvtkQuaternionInterpolator_GetInterpolationTypeMaxValue, METH_VARARGS,
   "GetInterpolationTypeMaxValue(self) -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\n"},
  {"GetInterpolationType", PyvtkQuaternionInterpolator_GetInterpolationType, METH_VARARGS,
   "GetInterpolationType(self) -> int\nC++: virtual int GetInterpolationType()\n\n"},
  {"SetInterpolationTypeToLinear", PyvtkQuaternionInterpolator_SetInterpolationTypeToLinear, METH_VARARGS,
   "SetInterpolationTypeToLinear(self) -> None\nC++: void SetInterpolationTypeToLinear()\n\n"},
  {"SetInterpolationTypeToSpline", PyvtkQuaternionInterpolator_SetInterpolationTypeToSpline, METH_VARARGS,
   "SetInterpolationTypeToSpline(self) -> None\nC++: void SetInterpolationTypeToSpline()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkQuaternionInterpolator_Doc =
  "vtkQuaternionInterpolator - interpolate a quaternion\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to interpolate a series of quaternions\n"
  "representing the rotations of a 3D object.  The interpolation may be\n"
  "linear in form (using spherical linear interpolation SLERP), or via\n"
  "spline interpolation (using SQUAD). In either case the interpolation\n"
  "is specialized to quaternions since the interpolation occurs on the\n"
  "surface of the unit quaternion sphere.\n\n"
  "To use this class, specify at least two pairs of (t,q[4]) with the\n"
  "AddQuaternion() method.  Next interpolate the tuples with the\n"
  "InterpolateQuaternion(t,q[4]) method, where \"t\" must be in the range\n"
  "of (t_min,t_max) parameter values specified by the AddQuaternion()\n"
  "method (t is clamped otherwise), and q[4] is filled in by the method.\n\n"
  "There are several important background references. Ken Shoemake\n"
  "described the practical application of quaternions for the\n"
  "interpolation of rotation (K. Shoemake, \"Animating rotation with quaternion\n"
  "curves\", Computer Graphics (Siggraph '85) 19(3):245--254, 1985).\n"
  "Another fine reference (available on-line) is E. B. Dam, M. Koch, and\n"
  "M. Lillholm, Technical Report DIKU-TR-98/5, Dept. of Computer\n"
  "Science, University of Copenhagen, Denmark.\n\n"
  "@warning\n"
  "Note that for two or less quaternions, Slerp (linear) interpolation\n"
  "is performed even if spline interpolation is requested. Also, the\n"
  "tangents to the first and last segments of spline interpolation are\n"
  "(arbitrarily) defined by repeating the first and last quaternions.\n\n"
  "@warning\n"
  "There are several methods particular to quaternions (norms, products,\n"
  "etc.) implemented interior to this class. These may be moved to a\n"
  "separate quaternion class at some point.\n\n"
  "@sa\n"
  "vtkQuaternion\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuaternionInterpolator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkQuaternionInterpolator", // tp_name
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
  PyvtkQuaternionInterpolator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuaternionInterpolator_StaticNew()
{
  return vtkQuaternionInterpolator::New();
}

PyObject *PyvtkQuaternionInterpolator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkQuaternionInterpolator_Type, PyvtkQuaternionInterpolator_Methods,
    "vtkQuaternionInterpolator",
 &PyvtkQuaternionInterpolator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_Type);
  PyVTKEnum_Add(&PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_Type, "vtkQuaternionInterpolator.vtkQuaternionInterpolationSearchMethod");

  o = (PyObject *)&PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_Type;
  if (PyDict_SetItemString(d, "vtkQuaternionInterpolationSearchMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkQuaternionInterpolator::vtkQuaternionInterpolationSearchMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "BinarySearch", vtkQuaternionInterpolator::BinarySearch },
        { "LinearSearch", vtkQuaternionInterpolator::LinearSearch },
        { "MaxEnum", vtkQuaternionInterpolator::MaxEnum },
      };

    o = PyvtkQuaternionInterpolator_vtkQuaternionInterpolationSearchMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "INTERPOLATION_TYPE_LINEAR", vtkQuaternionInterpolator::INTERPOLATION_TYPE_LINEAR },
        { "INTERPOLATION_TYPE_SPLINE", vtkQuaternionInterpolator::INTERPOLATION_TYPE_SPLINE },
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

void PyVTKAddFile_vtkQuaternionInterpolator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuaternionInterpolator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuaternionInterpolator", o) != 0)
  {
    Py_DECREF(o);
  }

}

