// python wrapper for vtkPeriodicFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPeriodicFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPeriodicFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPeriodicFilter_ClassNew(); }


static PyObject *
PyvtkPeriodicFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPeriodicFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPeriodicFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPeriodicFilter *tempr = vtkPeriodicFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPeriodicFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPeriodicFilter::NewInstance());

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
PyvtkPeriodicFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPeriodicFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPeriodicFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetIterationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIterationMode(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationModeMinValue() :
      op->vtkPeriodicFilter::GetIterationModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationModeMaxValue() :
      op->vtkPeriodicFilter::GetIterationModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetIterationMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIterationMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIterationMode() :
      op->vtkPeriodicFilter::GetIterationMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetIterationModeToDirectNb(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationModeToDirectNb");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIterationModeToDirectNb();
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationModeToDirectNb();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetIterationModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIterationModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIterationModeToMax();
    }
    else
    {
      op->vtkPeriodicFilter::SetIterationModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_SetNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPeriods(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::SetNumberOfPeriods(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_GetNumberOfPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPeriods() :
      op->vtkPeriodicFilter::GetNumberOfPeriods());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddIndex(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::AddIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveIndex(temp0);
    }
    else
    {
      op->vtkPeriodicFilter::RemoveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPeriodicFilter_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPeriodicFilter *op = static_cast<vtkPeriodicFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIndices();
    }
    else
    {
      op->vtkPeriodicFilter::RemoveAllIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPeriodicFilter_Methods[] = {
  {"IsTypeOf", PyvtkPeriodicFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPeriodicFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPeriodicFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPeriodicFilter\nC++: static vtkPeriodicFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPeriodicFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPeriodicFilter\nC++: vtkPeriodicFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPeriodicFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPeriodicFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIterationMode", PyvtkPeriodicFilter_SetIterationMode, METH_VARARGS,
   "SetIterationMode(self, _arg:int) -> None\nC++: virtual void SetIterationMode(int _arg)\n\nSet/Get Iteration mode. VTK_ITERATION_MODE_DIRECT_NB to specify\nthe number of periods, VTK_ITERATION_MODE_MAX to generate a full\nperiod (default).\n"},
  {"GetIterationModeMinValue", PyvtkPeriodicFilter_GetIterationModeMinValue, METH_VARARGS,
   "GetIterationModeMinValue(self) -> int\nC++: virtual int GetIterationModeMinValue()\n\n"},
  {"GetIterationModeMaxValue", PyvtkPeriodicFilter_GetIterationModeMaxValue, METH_VARARGS,
   "GetIterationModeMaxValue(self) -> int\nC++: virtual int GetIterationModeMaxValue()\n\n"},
  {"GetIterationMode", PyvtkPeriodicFilter_GetIterationMode, METH_VARARGS,
   "GetIterationMode(self) -> int\nC++: virtual int GetIterationMode()\n\n"},
  {"SetIterationModeToDirectNb", PyvtkPeriodicFilter_SetIterationModeToDirectNb, METH_VARARGS,
   "SetIterationModeToDirectNb(self) -> None\nC++: void SetIterationModeToDirectNb()\n\n"},
  {"SetIterationModeToMax", PyvtkPeriodicFilter_SetIterationModeToMax, METH_VARARGS,
   "SetIterationModeToMax(self) -> None\nC++: void SetIterationModeToMax()\n\n"},
  {"SetNumberOfPeriods", PyvtkPeriodicFilter_SetNumberOfPeriods, METH_VARARGS,
   "SetNumberOfPeriods(self, _arg:int) -> None\nC++: virtual void SetNumberOfPeriods(int _arg)\n\nSet/Get Number of periods. Used only with\nITERATION_MODE_DIRECT_NB.\n"},
  {"GetNumberOfPeriods", PyvtkPeriodicFilter_GetNumberOfPeriods, METH_VARARGS,
   "GetNumberOfPeriods(self) -> int\nC++: virtual int GetNumberOfPeriods()\n\n"},
  {"AddIndex", PyvtkPeriodicFilter_AddIndex, METH_VARARGS,
   "AddIndex(self, index:int) -> None\nC++: virtual void AddIndex(unsigned int index)\n\nSelect the periodic pieces indices. Each node in the multi -\nblock tree is identified by an index. The index can be obtained\nby performing a preorder traversal of the tree (including empty\nnodes). eg. A(B (D, E), C(F, G)). Inorder traversal yields: A, B,\nD, E, C, F, G Index of A is 0, while index of C is 4.\n"},
  {"RemoveIndex", PyvtkPeriodicFilter_RemoveIndex, METH_VARARGS,
   "RemoveIndex(self, index:int) -> None\nC++: virtual void RemoveIndex(unsigned int index)\n\nRemove an index from selected indices tress\n"},
  {"RemoveAllIndices", PyvtkPeriodicFilter_RemoveAllIndices, METH_VARARGS,
   "RemoveAllIndices(self) -> None\nC++: virtual void RemoveAllIndices()\n\nClear selected indices tree\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPeriodicFilter_Doc =
  "vtkPeriodicFilter - A filter to produce mapped  periodic multiblock\ndataset from a single block\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "Generate periodic dataset by transforming points, vectors, tensors\n"
  "data arrays from an original data array. The generated dataset is of\n"
  "the same type than the input (float or double). This is an abstract\n"
  "class which do not implement the actual transformation. Point\n"
  "coordinates are transformed, as well as all vectors (3-components)\n"
  "and tensors (9 components) in points and cell data arrays. The\n"
  "generated multiblock will have the same tree architecture than the\n"
  "input, except transformed leaves are replaced by a\n"
  "vtkMultipieceDataSet. Supported input leaf dataset type are:\n"
  "vtkPolyData, vtkStructuredGrid and vtkUnstructuredGrid. Other data\n"
  "objects are transformed using the transform filter (at a high cost!).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPeriodicFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPeriodicFilter", // tp_name
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
  PyvtkPeriodicFilter_Doc, // tp_doc
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

PyObject *PyvtkPeriodicFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPeriodicFilter_Type, PyvtkPeriodicFilter_Methods,
    "vtkPeriodicFilter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPeriodicFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPeriodicFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPeriodicFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_ITERATION_MODE_DIRECT_NB", 0 },
        { "VTK_ITERATION_MODE_MAX", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

