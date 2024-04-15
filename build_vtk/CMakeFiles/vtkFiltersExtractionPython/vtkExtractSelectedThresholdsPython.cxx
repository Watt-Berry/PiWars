// python wrapper for vtkExtractSelectedThresholds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedThresholds.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedThresholds(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedThresholds_ClassNew(); }


static PyObject *
PyvtkExtractSelectedThresholds_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedThresholds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedThresholds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedThresholds *tempr = vtkExtractSelectedThresholds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedThresholds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedThresholds::NewInstance());

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
PyvtkExtractSelectedThresholds_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedThresholds::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedThresholds *op = static_cast<vtkExtractSelectedThresholds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedThresholds::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s1(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  long long temp1;
  vtkDataArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray"))
  {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s2(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  long long temp2;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s3(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  long long temp1;
  vtkDataArray *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(2*size3);
  int *temp3 = store3.Data();
  int *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkDataArray") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue_s4(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "EvaluateValue");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  long long temp2;
  vtkDataArray *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<int> store4(2*size4);
  int *temp4 = store4.Data();
  int *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<int> store5(2*size5);
  int *temp5 = store5.Data();
  int *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<int> store6(2*size6);
  int *temp6 = store6.Data();
  int *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkDataArray") &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    int tempr = vtkExtractSelectedThresholds::EvaluateValue(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractSelectedThresholds_EvaluateValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s1(self, args);
    case 4:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s2(self, args);
    case 6:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s3(self, args);
    case 7:
      return PyvtkExtractSelectedThresholds_EvaluateValue_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EvaluateValue");
  return nullptr;
}

static PyMethodDef PyvtkExtractSelectedThresholds_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedThresholds_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedThresholds_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedThresholds_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedThresholds\nC++: static vtkExtractSelectedThresholds *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedThresholds_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedThresholds\nC++: vtkExtractSelectedThresholds *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedThresholds_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedThresholds_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateValue", PyvtkExtractSelectedThresholds_EvaluateValue, METH_VARARGS,
   "EvaluateValue(scalars:vtkDataArray, id:int, lims:vtkDataArray)\n    -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims)\nEvaluateValue(array:vtkDataArray, array_component_no:int, id:int,\n    lims:vtkDataArray) -> int\nC++: static int EvaluateValue(vtkDataArray *array,\n    int array_component_no, vtkIdType id, vtkDataArray *lims)\nEvaluateValue(scalars:vtkDataArray, id:int, lims:vtkDataArray,\n    AboveCount:[int, ...], BelowCount:[int, ...],\n    InsideCount:[int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars, vtkIdType id,\n     vtkDataArray *lims, int *AboveCount, int *BelowCount,\n    int *InsideCount)\nEvaluateValue(scalars:vtkDataArray, array_component_no:int,\n    id:int, lims:vtkDataArray, AboveCount:[int, ...],\n    BelowCount:[int, ...], InsideCount:[int, ...]) -> int\nC++: static int EvaluateValue(vtkDataArray *scalars,\n    int array_component_no, vtkIdType id, vtkDataArray *lims,\n    int *AboveCount, int *BelowCount, int *InsideCount)\n\nFunction for determining whether a value in a data array passes\nthe threshold test(s) provided in lims.  Returns 1 if the value\npasses at least one of the threshold tests. If scalars is\nnullptr, then the id itself is used as the scalar value.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedThresholds_Doc =
  "vtkExtractSelectedThresholds - extract a cells or points from a\ndataset that have values within a set of thresholds.\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "vtkExtractSelectedThresholds extracts all cells and points with\n"
  "attribute values that lie within a vtkSelection's THRESHOLD contents.\n"
  "The selecion can specify to threshold a particular array within\n"
  "either the point or cell attribute data of the input. This is similar\n"
  "to vtkThreshold but allows multiple thresholds ranges. This filter\n"
  "adds a scalar array called vtkOriginalCellIds that says what input\n"
  "cell produced each output cell. This is an example of a Pedigree ID\n"
  "which helps to trace back results.\n\n"
  "@sa\n"
  "vtkSelection vtkExtractSelection vtkThreshold\n\n"
  "@deprecated vtkExtractSelectedThresholds is deprecated in VTK 9.2 and\n"
  "will be removed. Use `vtkExtractSelection` instead of\n"
  "`vtkExtractSelectedThresholds`.\n\n"
  "Example using vtkExtractSelectedThresholds:\n\n"
  "vtkNewselFilter; selFilter->SetInputConnection(0,\n"
  "sphereSource->GetOutputPort()); selFilter->SetInputConnection(1,\n"
  "selectionSource->GetOutputPort());\n\n"
  "Example using vtkExtractSelection:\n\n"
  "vtkNewselFilter; selFilter->SetInputConnection(0,\n"
  "sphereSource->GetOutputPort()); selFilter->SetInputConnection(1,\n"
  "selectionSource->GetOutputPort());\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectedThresholds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractSelectedThresholds", // tp_name
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
  PyvtkExtractSelectedThresholds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedThresholds_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedThresholds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedThresholds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  return vtkExtractSelectedThresholds::New();
}

PyObject *PyvtkExtractSelectedThresholds_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedThresholds_Type, PyvtkExtractSelectedThresholds_Methods,
    "vtkExtractSelectedThresholds",
 &PyvtkExtractSelectedThresholds_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkExtractSelectionBase");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedThresholds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedThresholds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedThresholds", o) != 0)
  {
    Py_DECREF(o);
  }

}

