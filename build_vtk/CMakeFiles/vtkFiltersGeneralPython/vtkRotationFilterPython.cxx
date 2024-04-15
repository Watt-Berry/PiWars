// python wrapper for vtkRotationFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRotationFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRotationFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkRotationFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRotationFilter_RotationAxis_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkRotationFilter.RotationAxis", // tp_name
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
PyObject *PyvtkRotationFilter_RotationAxis_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkRotationFilter_RotationAxis_Type, static_cast<int>(val));
}


static PyObject *
PyvtkRotationFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRotationFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRotationFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRotationFilter *tempr = vtkRotationFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRotationFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRotationFilter::NewInstance());

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
PyvtkRotationFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRotationFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRotationFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMinValue() :
      op->vtkRotationFilter::GetAxisMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxisMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisMaxValue() :
      op->vtkRotationFilter::GetAxisMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxis() :
      op->vtkRotationFilter::GetAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToX();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToY();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAxisToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAxisToZ();
    }
    else
    {
      op->vtkRotationFilter::SetAxisToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRotationFilter::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRotationFilter::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRotationFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkRotationFilter_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkRotationFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkRotationFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCopies(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetNumberOfCopies(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetNumberOfCopies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCopies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCopies() :
      op->vtkRotationFilter::GetNumberOfCopies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_SetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyInput(temp0);
    }
    else
    {
      op->vtkRotationFilter::SetCopyInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_GetCopyInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyInput() :
      op->vtkRotationFilter::GetCopyInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOn();
    }
    else
    {
      op->vtkRotationFilter::CopyInputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationFilter_CopyInputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationFilter *op = static_cast<vtkRotationFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyInputOff();
    }
    else
    {
      op->vtkRotationFilter::CopyInputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRotationFilter_Methods[] = {
  {"IsTypeOf", PyvtkRotationFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRotationFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRotationFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRotationFilter\nC++: static vtkRotationFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRotationFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRotationFilter\nC++: vtkRotationFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRotationFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRotationFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAxis", PyvtkRotationFilter_SetAxis, METH_VARARGS,
   "SetAxis(self, _arg:int) -> None\nC++: virtual void SetAxis(int _arg)\n\nSet the axis of rotation to use. It is set by default to Z.\n"},
  {"GetAxisMinValue", PyvtkRotationFilter_GetAxisMinValue, METH_VARARGS,
   "GetAxisMinValue(self) -> int\nC++: virtual int GetAxisMinValue()\n\n"},
  {"GetAxisMaxValue", PyvtkRotationFilter_GetAxisMaxValue, METH_VARARGS,
   "GetAxisMaxValue(self) -> int\nC++: virtual int GetAxisMaxValue()\n\n"},
  {"GetAxis", PyvtkRotationFilter_GetAxis, METH_VARARGS,
   "GetAxis(self) -> int\nC++: virtual int GetAxis()\n\n"},
  {"SetAxisToX", PyvtkRotationFilter_SetAxisToX, METH_VARARGS,
   "SetAxisToX(self) -> None\nC++: void SetAxisToX()\n\n"},
  {"SetAxisToY", PyvtkRotationFilter_SetAxisToY, METH_VARARGS,
   "SetAxisToY(self) -> None\nC++: void SetAxisToY()\n\n"},
  {"SetAxisToZ", PyvtkRotationFilter_SetAxisToZ, METH_VARARGS,
   "SetAxisToZ(self) -> None\nC++: void SetAxisToZ()\n\n"},
  {"SetAngle", PyvtkRotationFilter_SetAngle, METH_VARARGS,
   "SetAngle(self, _arg:float) -> None\nC++: virtual void SetAngle(double _arg)\n\nSet the rotation angle to use.\n"},
  {"GetAngle", PyvtkRotationFilter_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\n"},
  {"SetCenter", PyvtkRotationFilter_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the rotation center coordinates.\n"},
  {"GetCenter", PyvtkRotationFilter_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetNumberOfCopies", PyvtkRotationFilter_SetNumberOfCopies, METH_VARARGS,
   "SetNumberOfCopies(self, _arg:int) -> None\nC++: virtual void SetNumberOfCopies(int _arg)\n\nSet the number of copies to create. The source will be rotated N\ntimes and a new polydata copy of the original created at each\nangular position All copies will be appended to form a single\noutput\n"},
  {"GetNumberOfCopies", PyvtkRotationFilter_GetNumberOfCopies, METH_VARARGS,
   "GetNumberOfCopies(self) -> int\nC++: virtual int GetNumberOfCopies()\n\n"},
  {"SetCopyInput", PyvtkRotationFilter_SetCopyInput, METH_VARARGS,
   "SetCopyInput(self, _arg:int) -> None\nC++: virtual void SetCopyInput(vtkTypeBool _arg)\n\nIf on (the default), copy the input geometry to the output. If\noff, the output will only contain the rotation.\n"},
  {"GetCopyInput", PyvtkRotationFilter_GetCopyInput, METH_VARARGS,
   "GetCopyInput(self) -> int\nC++: virtual vtkTypeBool GetCopyInput()\n\n"},
  {"CopyInputOn", PyvtkRotationFilter_CopyInputOn, METH_VARARGS,
   "CopyInputOn(self) -> None\nC++: virtual void CopyInputOn()\n\n"},
  {"CopyInputOff", PyvtkRotationFilter_CopyInputOff, METH_VARARGS,
   "CopyInputOff(self) -> None\nC++: virtual void CopyInputOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRotationFilter_Doc =
  "vtkRotationFilter - Duplicates a data set by rotation about an axis\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "The vtkRotationFilter duplicates a data set by rotation about one of\n"
  "the 3 axis of the dataset's reference. Since it converts data sets\n"
  "into unstructured grids, it is not efficient for structured data\n"
  "sets.\n\n"
  "@par Thanks: Theophane Foggia of The Swiss National Supercomputing\n"
  "Centre (CSCS) for creating and contributing this filter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRotationFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkRotationFilter", // tp_name
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
  PyvtkRotationFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRotationFilter_StaticNew()
{
  return vtkRotationFilter::New();
}

PyObject *PyvtkRotationFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRotationFilter_Type, PyvtkRotationFilter_Methods,
    "vtkRotationFilter",
 &PyvtkRotationFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkRotationFilter_RotationAxis_Type);
  PyVTKEnum_Add(&PyvtkRotationFilter_RotationAxis_Type, "vtkRotationFilter.RotationAxis");

  o = (PyObject *)&PyvtkRotationFilter_RotationAxis_Type;
  if (PyDict_SetItemString(d, "RotationAxis", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkRotationFilter::RotationAxis cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "USE_X", vtkRotationFilter::USE_X },
        { "USE_Y", vtkRotationFilter::USE_Y },
        { "USE_Z", vtkRotationFilter::USE_Z },
      };

    o = PyvtkRotationFilter_RotationAxis_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRotationFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRotationFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRotationFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

