// python wrapper for vtkBrownianPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBrownianPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBrownianPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkBrownianPoints_ClassNew(); }


static PyObject *
PyvtkBrownianPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBrownianPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBrownianPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBrownianPoints *tempr = vtkBrownianPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrownianPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBrownianPoints::NewInstance());

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
PyvtkBrownianPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBrownianPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBrownianPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumSpeed(temp0);
    }
    else
    {
      op->vtkBrownianPoints::SetMinimumSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMinValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMinimumSpeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMinimumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumSpeed() :
      op->vtkBrownianPoints::GetMinimumSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_SetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumSpeed(temp0);
    }
    else
    {
      op->vtkBrownianPoints::SetMaximumSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMinValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeedMaxValue() :
      op->vtkBrownianPoints::GetMaximumSpeedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBrownianPoints_GetMaximumSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBrownianPoints *op = static_cast<vtkBrownianPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumSpeed() :
      op->vtkBrownianPoints::GetMaximumSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBrownianPoints_Methods[] = {
  {"IsTypeOf", PyvtkBrownianPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBrownianPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBrownianPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBrownianPoints\nC++: static vtkBrownianPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBrownianPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBrownianPoints\nC++: vtkBrownianPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBrownianPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBrownianPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMinimumSpeed", PyvtkBrownianPoints_SetMinimumSpeed, METH_VARARGS,
   "SetMinimumSpeed(self, _arg:float) -> None\nC++: virtual void SetMinimumSpeed(double _arg)\n\nSet the minimum speed value.\n"},
  {"GetMinimumSpeedMinValue", PyvtkBrownianPoints_GetMinimumSpeedMinValue, METH_VARARGS,
   "GetMinimumSpeedMinValue(self) -> float\nC++: virtual double GetMinimumSpeedMinValue()\n\n"},
  {"GetMinimumSpeedMaxValue", PyvtkBrownianPoints_GetMinimumSpeedMaxValue, METH_VARARGS,
   "GetMinimumSpeedMaxValue(self) -> float\nC++: virtual double GetMinimumSpeedMaxValue()\n\n"},
  {"GetMinimumSpeed", PyvtkBrownianPoints_GetMinimumSpeed, METH_VARARGS,
   "GetMinimumSpeed(self) -> float\nC++: virtual double GetMinimumSpeed()\n\n"},
  {"SetMaximumSpeed", PyvtkBrownianPoints_SetMaximumSpeed, METH_VARARGS,
   "SetMaximumSpeed(self, _arg:float) -> None\nC++: virtual void SetMaximumSpeed(double _arg)\n\nSet the maximum speed value.\n"},
  {"GetMaximumSpeedMinValue", PyvtkBrownianPoints_GetMaximumSpeedMinValue, METH_VARARGS,
   "GetMaximumSpeedMinValue(self) -> float\nC++: virtual double GetMaximumSpeedMinValue()\n\n"},
  {"GetMaximumSpeedMaxValue", PyvtkBrownianPoints_GetMaximumSpeedMaxValue, METH_VARARGS,
   "GetMaximumSpeedMaxValue(self) -> float\nC++: virtual double GetMaximumSpeedMaxValue()\n\n"},
  {"GetMaximumSpeed", PyvtkBrownianPoints_GetMaximumSpeed, METH_VARARGS,
   "GetMaximumSpeed(self) -> float\nC++: virtual double GetMaximumSpeed()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBrownianPoints_Doc =
  "vtkBrownianPoints - assign random vector to points\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkBrownianPoints is a filter object that assigns a random vector\n"
  "(i.e., magnitude and direction) to each point. The minimum and\n"
  "maximum speed values can be controlled by the user.\n\n"
  "@sa\n"
  "vtkRandomAttributeGenerator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBrownianPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkBrownianPoints", // tp_name
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
  PyvtkBrownianPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBrownianPoints_StaticNew()
{
  return vtkBrownianPoints::New();
}

PyObject *PyvtkBrownianPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBrownianPoints_Type, PyvtkBrownianPoints_Methods,
    "vtkBrownianPoints",
 &PyvtkBrownianPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBrownianPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBrownianPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBrownianPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

