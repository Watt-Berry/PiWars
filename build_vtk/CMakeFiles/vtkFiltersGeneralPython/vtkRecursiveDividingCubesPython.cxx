// python wrapper for vtkRecursiveDividingCubes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRecursiveDividingCubes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRecursiveDividingCubes(PyObject *dict); }
extern "C" { PyObject *PyvtkRecursiveDividingCubes_ClassNew(); }


static PyObject *
PyvtkRecursiveDividingCubes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRecursiveDividingCubes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecursiveDividingCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRecursiveDividingCubes *tempr = vtkRecursiveDividingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecursiveDividingCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecursiveDividingCubes::NewInstance());

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
PyvtkRecursiveDividingCubes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRecursiveDividingCubes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRecursiveDividingCubes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkRecursiveDividingCubes::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkRecursiveDividingCubes::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkRecursiveDividingCubes::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistanceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMinValue() :
      op->vtkRecursiveDividingCubes::GetDistanceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistanceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistanceMaxValue() :
      op->vtkRecursiveDividingCubes::GetDistanceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkRecursiveDividingCubes::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_SetIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncrement(temp0);
    }
    else
    {
      op->vtkRecursiveDividingCubes::SetIncrement(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrementMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncrementMinValue() :
      op->vtkRecursiveDividingCubes::GetIncrementMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrementMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrementMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncrementMaxValue() :
      op->vtkRecursiveDividingCubes::GetIncrementMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecursiveDividingCubes_GetIncrement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncrement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecursiveDividingCubes *op = static_cast<vtkRecursiveDividingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncrement() :
      op->vtkRecursiveDividingCubes::GetIncrement());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRecursiveDividingCubes_Methods[] = {
  {"IsTypeOf", PyvtkRecursiveDividingCubes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRecursiveDividingCubes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRecursiveDividingCubes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRecursiveDividingCubes\nC++: static vtkRecursiveDividingCubes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRecursiveDividingCubes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRecursiveDividingCubes\nC++: vtkRecursiveDividingCubes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRecursiveDividingCubes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRecursiveDividingCubes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkRecursiveDividingCubes_SetValue, METH_VARARGS,
   "SetValue(self, _arg:float) -> None\nC++: virtual void SetValue(double _arg)\n\nSet isosurface value.\n"},
  {"GetValue", PyvtkRecursiveDividingCubes_GetValue, METH_VARARGS,
   "GetValue(self) -> float\nC++: virtual double GetValue()\n\n"},
  {"SetDistance", PyvtkRecursiveDividingCubes_SetDistance, METH_VARARGS,
   "SetDistance(self, _arg:float) -> None\nC++: virtual void SetDistance(double _arg)\n\nSpecify sub-voxel size at which to generate point.\n"},
  {"GetDistanceMinValue", PyvtkRecursiveDividingCubes_GetDistanceMinValue, METH_VARARGS,
   "GetDistanceMinValue(self) -> float\nC++: virtual double GetDistanceMinValue()\n\n"},
  {"GetDistanceMaxValue", PyvtkRecursiveDividingCubes_GetDistanceMaxValue, METH_VARARGS,
   "GetDistanceMaxValue(self) -> float\nC++: virtual double GetDistanceMaxValue()\n\n"},
  {"GetDistance", PyvtkRecursiveDividingCubes_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: virtual double GetDistance()\n\n"},
  {"SetIncrement", PyvtkRecursiveDividingCubes_SetIncrement, METH_VARARGS,
   "SetIncrement(self, _arg:int) -> None\nC++: virtual void SetIncrement(int _arg)\n\nEvery \"Increment\" point is added to the list of points. This\nparameter, if set to a large value, can be used to limit the\nnumber of points while retaining good accuracy.\n"},
  {"GetIncrementMinValue", PyvtkRecursiveDividingCubes_GetIncrementMinValue, METH_VARARGS,
   "GetIncrementMinValue(self) -> int\nC++: virtual int GetIncrementMinValue()\n\n"},
  {"GetIncrementMaxValue", PyvtkRecursiveDividingCubes_GetIncrementMaxValue, METH_VARARGS,
   "GetIncrementMaxValue(self) -> int\nC++: virtual int GetIncrementMaxValue()\n\n"},
  {"GetIncrement", PyvtkRecursiveDividingCubes_GetIncrement, METH_VARARGS,
   "GetIncrement(self) -> int\nC++: virtual int GetIncrement()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRecursiveDividingCubes_Doc =
  "vtkRecursiveDividingCubes - create points laying on isosurface (using\nrecursive approach)\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRecursiveDividingCubes is a filter that generates points laying on\n"
  "a surface of constant scalar value (i.e., an isosurface). Dense point\n"
  "clouds (i.e., at screen resolution) will appear as a surface. Less\n"
  "dense clouds can be used as a source to generate streamlines or to\n"
  "generate \"transparent\" surfaces.\n\n"
  "This implementation differs from vtkDividingCubes in that it uses a\n"
  "recursive procedure. In many cases this can result in generating more\n"
  "points than the procedural implementation of vtkDividingCubes. This\n"
  "is because the recursive procedure divides voxels by multiples of\n"
  "powers of two. This can over-constrain subdivision. One of the\n"
  "advantages of the recursive technique is that the recursion is\n"
  "terminated earlier, which in some cases can be more efficient.\n\n"
  "@sa\n"
  "vtkDividingCubes vtkContourFilter vtkMarchingCubes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRecursiveDividingCubes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkRecursiveDividingCubes", // tp_name
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
  PyvtkRecursiveDividingCubes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRecursiveDividingCubes_StaticNew()
{
  return vtkRecursiveDividingCubes::New();
}

PyObject *PyvtkRecursiveDividingCubes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRecursiveDividingCubes_Type, PyvtkRecursiveDividingCubes_Methods,
    "vtkRecursiveDividingCubes",
 &PyvtkRecursiveDividingCubes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRecursiveDividingCubes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRecursiveDividingCubes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRecursiveDividingCubes", o) != 0)
  {
    Py_DECREF(o);
  }

}

