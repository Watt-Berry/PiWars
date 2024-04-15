// python wrapper for vtkProjectPointsToPlane
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProjectPointsToPlane.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectPointsToPlane(PyObject *dict); }
extern "C" { PyObject *PyvtkProjectPointsToPlane_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectPointsToPlane_PlaneProjectionType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkProjectPointsToPlane.PlaneProjectionType", // tp_name
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
PyObject *PyvtkProjectPointsToPlane_PlaneProjectionType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkProjectPointsToPlane_PlaneProjectionType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkProjectPointsToPlane_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectPointsToPlane::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectPointsToPlane::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectPointsToPlane *tempr = vtkProjectPointsToPlane::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectPointsToPlane *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectPointsToPlane::NewInstance());

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
PyvtkProjectPointsToPlane_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProjectPointsToPlane::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProjectPointsToPlane::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionType(temp0);
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetProjectionTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionTypeMinValue() :
      op->vtkProjectPointsToPlane::GetProjectionTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetProjectionTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionTypeMaxValue() :
      op->vtkProjectPointsToPlane::GetProjectionTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetProjectionType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjectionType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjectionType() :
      op->vtkProjectPointsToPlane::GetProjectionType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToXPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToXPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToXPlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToXPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToYPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToYPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToYPlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToYPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToZPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToZPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToZPlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToZPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToSpecifiedPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToSpecifiedPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToSpecifiedPlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToSpecifiedPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToBestCoordinatePlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToBestCoordinatePlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToBestCoordinatePlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToBestCoordinatePlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetProjectionTypeToBestFitPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionTypeToBestFitPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionTypeToBestFitPlane();
    }
    else
    {
      op->vtkProjectPointsToPlane::SetProjectionTypeToBestFitPlane();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectPointsToPlane::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectPointsToPlane_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkProjectPointsToPlane::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectPointsToPlane_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectPointsToPlane_SetOrigin_s1(self, args);
    case 1:
      return PyvtkProjectPointsToPlane_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkProjectPointsToPlane_SetNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

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
      op->SetNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectPointsToPlane::SetNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectPointsToPlane_SetNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkProjectPointsToPlane::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectPointsToPlane_SetNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectPointsToPlane_SetNormal_s1(self, args);
    case 1:
      return PyvtkProjectPointsToPlane_SetNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNormal");
  return nullptr;
}


static PyObject *
PyvtkProjectPointsToPlane_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkProjectPointsToPlane::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkProjectPointsToPlane::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

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
      op->vtkProjectPointsToPlane::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectPointsToPlane_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectPointsToPlane *op = static_cast<vtkProjectPointsToPlane *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkProjectPointsToPlane::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectPointsToPlane_Methods[] = {
  {"IsTypeOf", PyvtkProjectPointsToPlane_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectPointsToPlane_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectPointsToPlane_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProjectPointsToPlane\nC++: static vtkProjectPointsToPlane *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectPointsToPlane_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProjectPointsToPlane\nC++: vtkProjectPointsToPlane *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProjectPointsToPlane_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProjectPointsToPlane_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProjectionType", PyvtkProjectPointsToPlane_SetProjectionType, METH_VARARGS,
   "SetProjectionType(self, _arg:int) -> None\nC++: virtual void SetProjectionType(int _arg)\n\nSpecify the type of projection to perform. Points may be\nprojected to the 1) x-plane; 2) y-plane; 3) z-plane; 4)\nuser-specified plane; 5) the plane most orthogonal to one of the\ncoordinate axes x, y, or z; or 6) best fitting plane. For option\n#4, the user must also specify a plane Origin and Normal. For all\noptions, after filter execution, the plane onto which the points\nare projected is returned in the Origin and Normal data members.\nNote that the BEST_COORDINATE_PLANE first performs a plane\nfitting, and then selects the x, y, or z coordinate plane most\northogonal to the fitted plane normal.\n"},
  {"GetProjectionTypeMinValue", PyvtkProjectPointsToPlane_GetProjectionTypeMinValue, METH_VARARGS,
   "GetProjectionTypeMinValue(self) -> int\nC++: virtual int GetProjectionTypeMinValue()\n\n"},
  {"GetProjectionTypeMaxValue", PyvtkProjectPointsToPlane_GetProjectionTypeMaxValue, METH_VARARGS,
   "GetProjectionTypeMaxValue(self) -> int\nC++: virtual int GetProjectionTypeMaxValue()\n\n"},
  {"GetProjectionType", PyvtkProjectPointsToPlane_GetProjectionType, METH_VARARGS,
   "GetProjectionType(self) -> int\nC++: virtual int GetProjectionType()\n\n"},
  {"SetProjectionTypeToXPlane", PyvtkProjectPointsToPlane_SetProjectionTypeToXPlane, METH_VARARGS,
   "SetProjectionTypeToXPlane(self) -> None\nC++: void SetProjectionTypeToXPlane()\n\n"},
  {"SetProjectionTypeToYPlane", PyvtkProjectPointsToPlane_SetProjectionTypeToYPlane, METH_VARARGS,
   "SetProjectionTypeToYPlane(self) -> None\nC++: void SetProjectionTypeToYPlane()\n\n"},
  {"SetProjectionTypeToZPlane", PyvtkProjectPointsToPlane_SetProjectionTypeToZPlane, METH_VARARGS,
   "SetProjectionTypeToZPlane(self) -> None\nC++: void SetProjectionTypeToZPlane()\n\n"},
  {"SetProjectionTypeToSpecifiedPlane", PyvtkProjectPointsToPlane_SetProjectionTypeToSpecifiedPlane, METH_VARARGS,
   "SetProjectionTypeToSpecifiedPlane(self) -> None\nC++: void SetProjectionTypeToSpecifiedPlane()\n\n"},
  {"SetProjectionTypeToBestCoordinatePlane", PyvtkProjectPointsToPlane_SetProjectionTypeToBestCoordinatePlane, METH_VARARGS,
   "SetProjectionTypeToBestCoordinatePlane(self) -> None\nC++: void SetProjectionTypeToBestCoordinatePlane()\n\n"},
  {"SetProjectionTypeToBestFitPlane", PyvtkProjectPointsToPlane_SetProjectionTypeToBestFitPlane, METH_VARARGS,
   "SetProjectionTypeToBestFitPlane(self) -> None\nC++: void SetProjectionTypeToBestFitPlane()\n\n"},
  {"SetOrigin", PyvtkProjectPointsToPlane_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get the plane normal and origin. On input, these methods are\nused to specify the plane to use for projection (if the\nProjectionType==SpecifiedPlane); and on output the methods return\nthe plane on which the points were projected.\n"},
  {"SetNormal", PyvtkProjectPointsToPlane_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetNormal(double _arg1, double _arg2,\n    double _arg3)\nSetNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetNormal(const double _arg[3])\n\n"},
  {"GetOrigin", PyvtkProjectPointsToPlane_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"GetNormal", PyvtkProjectPointsToPlane_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {"SetOutputPointsPrecision", PyvtkProjectPointsToPlane_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings. By default, the\noutput precision is DEFAULT_PRECISION (i.e., the input and output\ntypes are the same) - this can cause issues if projecting\nintegral point types.\n"},
  {"GetOutputPointsPrecision", PyvtkProjectPointsToPlane_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProjectPointsToPlane_Doc =
  "vtkProjectPointsToPlane - project all input points to a plane\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkProjectPointsToPlane is a filter that operates on a vtkPointSet\n"
  "(and its subclasses), projecting all input points to a plane. There\n"
  "are multiple options as to what plane to project to: The user may\n"
  "specify one of the x-y-z planes, the best coordinate plane, a\n"
  "user-defined plane, or the closest fitting plane (using a\n"
  "least-squares method). On output, the points will lie on the\n"
  "specified plane, and any cells connected to the points (if any) will\n"
  "be deformed accordingly. On output, the filter will not modify\n"
  "dataset topology, nor modify point or cell attributes. Only the point\n"
  "coordinates (geometry) will be modified. (Note that the filter will\n"
  "operate on input point sets with or without cells.)\n\n"
  "@warning\n"
  "It is possible that cells connected to the projected points will\n"
  "become invalid after the projection operation.\n\n"
  "@sa\n"
  "vtkPlane\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectPointsToPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkProjectPointsToPlane", // tp_name
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
  PyvtkProjectPointsToPlane_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectPointsToPlane_StaticNew()
{
  return vtkProjectPointsToPlane::New();
}

PyObject *PyvtkProjectPointsToPlane_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProjectPointsToPlane_Type, PyvtkProjectPointsToPlane_Methods,
    "vtkProjectPointsToPlane",
 &PyvtkProjectPointsToPlane_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkProjectPointsToPlane_PlaneProjectionType_Type);
  PyVTKEnum_Add(&PyvtkProjectPointsToPlane_PlaneProjectionType_Type, "vtkProjectPointsToPlane.PlaneProjectionType");

  o = (PyObject *)&PyvtkProjectPointsToPlane_PlaneProjectionType_Type;
  if (PyDict_SetItemString(d, "PlaneProjectionType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkProjectPointsToPlane::PlaneProjectionType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "X_PLANE", vtkProjectPointsToPlane::X_PLANE },
        { "Y_PLANE", vtkProjectPointsToPlane::Y_PLANE },
        { "Z_PLANE", vtkProjectPointsToPlane::Z_PLANE },
        { "SPECIFIED_PLANE", vtkProjectPointsToPlane::SPECIFIED_PLANE },
        { "BEST_COORDINATE_PLANE", vtkProjectPointsToPlane::BEST_COORDINATE_PLANE },
        { "BEST_FIT_PLANE", vtkProjectPointsToPlane::BEST_FIT_PLANE },
      };

    o = PyvtkProjectPointsToPlane_PlaneProjectionType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectPointsToPlane(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectPointsToPlane_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectPointsToPlane", o) != 0)
  {
    Py_DECREF(o);
  }

}

