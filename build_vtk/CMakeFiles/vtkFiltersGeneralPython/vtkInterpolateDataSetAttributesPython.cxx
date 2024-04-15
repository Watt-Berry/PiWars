// python wrapper for vtkInterpolateDataSetAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInterpolateDataSetAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInterpolateDataSetAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkInterpolateDataSetAttributes_ClassNew(); }


static PyObject *
PyvtkInterpolateDataSetAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInterpolateDataSetAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInterpolateDataSetAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInterpolateDataSetAttributes *tempr = vtkInterpolateDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolateDataSetAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInterpolateDataSetAttributes::NewInstance());

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
PyvtkInterpolateDataSetAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInterpolateDataSetAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInterpolateDataSetAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetInputList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetInputList() :
      op->vtkInterpolateDataSetAttributes::GetInputList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_SetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetT(temp0);
    }
    else
    {
      op->vtkInterpolateDataSetAttributes::SetT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTMinValue() :
      op->vtkInterpolateDataSetAttributes::GetTMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetTMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTMaxValue() :
      op->vtkInterpolateDataSetAttributes::GetTMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInterpolateDataSetAttributes_GetT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInterpolateDataSetAttributes *op = static_cast<vtkInterpolateDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetT() :
      op->vtkInterpolateDataSetAttributes::GetT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInterpolateDataSetAttributes_Methods[] = {
  {"IsTypeOf", PyvtkInterpolateDataSetAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInterpolateDataSetAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInterpolateDataSetAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInterpolateDataSetAttributes\nC++: static vtkInterpolateDataSetAttributes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInterpolateDataSetAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInterpolateDataSetAttributes\nC++: vtkInterpolateDataSetAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInterpolateDataSetAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInterpolateDataSetAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInputList", PyvtkInterpolateDataSetAttributes_GetInputList, METH_VARARGS,
   "GetInputList(self) -> vtkDataSetCollection\nC++: vtkDataSetCollection *GetInputList()\n\nReturn the list of inputs to this filter.\n"},
  {"SetT", PyvtkInterpolateDataSetAttributes_SetT, METH_VARARGS,
   "SetT(self, _arg:float) -> None\nC++: virtual void SetT(double _arg)\n\nSpecify interpolation parameter t.\n"},
  {"GetTMinValue", PyvtkInterpolateDataSetAttributes_GetTMinValue, METH_VARARGS,
   "GetTMinValue(self) -> float\nC++: virtual double GetTMinValue()\n\n"},
  {"GetTMaxValue", PyvtkInterpolateDataSetAttributes_GetTMaxValue, METH_VARARGS,
   "GetTMaxValue(self) -> float\nC++: virtual double GetTMaxValue()\n\n"},
  {"GetT", PyvtkInterpolateDataSetAttributes_GetT, METH_VARARGS,
   "GetT(self) -> float\nC++: virtual double GetT()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInterpolateDataSetAttributes_Doc =
  "vtkInterpolateDataSetAttributes - interpolate scalars, vectors, etc.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "and other dataset attributes\n\n"
  "vtkInterpolateDataSetAttributes is a filter that interpolates data\n"
  "set attribute values between input data sets. The input to the filter\n"
  "must be datasets of the same type, same number of cells, and same\n"
  "number of points. The output of the filter is a data set of the same\n"
  "type as the input dataset and whose attribute values have been\n"
  "interpolated at the parametric value specified.\n\n"
  "The filter is used by specifying two or more input data sets (total\n"
  "of N), and a parametric value t (0 <= t <= N-1). The output will\n"
  "contain interpolated data set attributes common to all input data\n"
  "sets. (For example, if one input has scalars and vectors, and another\n"
  "has just scalars, then only scalars will be interpolated and output.)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInterpolateDataSetAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkInterpolateDataSetAttributes", // tp_name
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
  PyvtkInterpolateDataSetAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInterpolateDataSetAttributes_StaticNew()
{
  return vtkInterpolateDataSetAttributes::New();
}

PyObject *PyvtkInterpolateDataSetAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInterpolateDataSetAttributes_Type, PyvtkInterpolateDataSetAttributes_Methods,
    "vtkInterpolateDataSetAttributes",
 &PyvtkInterpolateDataSetAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInterpolateDataSetAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInterpolateDataSetAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInterpolateDataSetAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

