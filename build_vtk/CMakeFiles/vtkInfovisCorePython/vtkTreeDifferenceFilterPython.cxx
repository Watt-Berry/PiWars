// python wrapper for vtkTreeDifferenceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeDifferenceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeDifferenceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeDifferenceFilter_ClassNew(); }


static PyObject *
PyvtkTreeDifferenceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeDifferenceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeDifferenceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeDifferenceFilter *tempr = vtkTreeDifferenceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeDifferenceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeDifferenceFilter::NewInstance());

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
PyvtkTreeDifferenceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeDifferenceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeDifferenceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIdArrayName(temp0);
    }
    else
    {
      op->vtkTreeDifferenceFilter::SetIdArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetIdArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIdArrayName() :
      op->vtkTreeDifferenceFilter::GetIdArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetComparisonArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComparisonArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComparisonArrayName(temp0);
    }
    else
    {
      op->vtkTreeDifferenceFilter::SetComparisonArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetComparisonArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComparisonArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComparisonArrayName() :
      op->vtkTreeDifferenceFilter::GetComparisonArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayName(temp0);
    }
    else
    {
      op->vtkTreeDifferenceFilter::SetOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkTreeDifferenceFilter::GetOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_SetComparisonArrayIsVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComparisonArrayIsVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComparisonArrayIsVertexData(temp0);
    }
    else
    {
      op->vtkTreeDifferenceFilter::SetComparisonArrayIsVertexData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeDifferenceFilter_GetComparisonArrayIsVertexData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComparisonArrayIsVertexData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeDifferenceFilter *op = static_cast<vtkTreeDifferenceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComparisonArrayIsVertexData() :
      op->vtkTreeDifferenceFilter::GetComparisonArrayIsVertexData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeDifferenceFilter_Methods[] = {
  {"IsTypeOf", PyvtkTreeDifferenceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeDifferenceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeDifferenceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeDifferenceFilter\nC++: static vtkTreeDifferenceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeDifferenceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeDifferenceFilter\nC++: vtkTreeDifferenceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeDifferenceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeDifferenceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIdArrayName", PyvtkTreeDifferenceFilter_SetIdArrayName, METH_VARARGS,
   "SetIdArrayName(self, _arg:str) -> None\nC++: virtual void SetIdArrayName(const char *_arg)\n\nSet/Get the name of the identifier array in the trees'\nVertexData. This array is used to find corresponding vertices in\nthe two trees. If this array name is not set, then we assume that\nthe vertices in the two trees to compare have corresponding\nvtkIdTypes. Otherwise, the named array must be a vtkStringArray.\nThe identifier array does not necessarily have to specify a name\nfor each vertex in the tree.  If some vertices are unnamed, then\nthis filter will assign correspondence between ancestors of named\nvertices.\n"},
  {"GetIdArrayName", PyvtkTreeDifferenceFilter_GetIdArrayName, METH_VARARGS,
   "GetIdArrayName(self) -> str\nC++: virtual char *GetIdArrayName()\n\n"},
  {"SetComparisonArrayName", PyvtkTreeDifferenceFilter_SetComparisonArrayName, METH_VARARGS,
   "SetComparisonArrayName(self, _arg:str) -> None\nC++: virtual void SetComparisonArrayName(const char *_arg)\n\nSet/Get the name of the array that we're comparing between the\ntwo trees. The named array must be a vtkDoubleArray.\n"},
  {"GetComparisonArrayName", PyvtkTreeDifferenceFilter_GetComparisonArrayName, METH_VARARGS,
   "GetComparisonArrayName(self) -> str\nC++: virtual char *GetComparisonArrayName()\n\n"},
  {"SetOutputArrayName", PyvtkTreeDifferenceFilter_SetOutputArrayName, METH_VARARGS,
   "SetOutputArrayName(self, _arg:str) -> None\nC++: virtual void SetOutputArrayName(const char *_arg)\n\nSet/Get the name of a new vtkDoubleArray that will contain the\nresults of the comparison between the two trees.  This new array\nwill be added to the input tree's VertexData or EdgeData, based\non the value of ComparisonArrayIsVertexData.  If this method is\nnot called, the new vtkDoubleArray will be named \"difference\" by\ndefault.\n"},
  {"GetOutputArrayName", PyvtkTreeDifferenceFilter_GetOutputArrayName, METH_VARARGS,
   "GetOutputArrayName(self) -> str\nC++: virtual char *GetOutputArrayName()\n\n"},
  {"SetComparisonArrayIsVertexData", PyvtkTreeDifferenceFilter_SetComparisonArrayIsVertexData, METH_VARARGS,
   "SetComparisonArrayIsVertexData(self, _arg:bool) -> None\nC++: virtual void SetComparisonArrayIsVertexData(bool _arg)\n\nSpecify whether the comparison array is within the trees' vertex\ndata or not.  By default, we assume that the array to compare is\nwithin the trees' EdgeData().\n"},
  {"GetComparisonArrayIsVertexData", PyvtkTreeDifferenceFilter_GetComparisonArrayIsVertexData, METH_VARARGS,
   "GetComparisonArrayIsVertexData(self) -> bool\nC++: virtual bool GetComparisonArrayIsVertexData()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeDifferenceFilter_Doc =
  "vtkTreeDifferenceFilter - compare two trees\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkTreeDifferenceFilter compares two trees by analyzing a\n"
  "vtkDoubleArray. Each tree must have a copy of this array.  A user of\n"
  "this filter should call SetComparisonArrayName to specify the array\n"
  "that should be used as the basis of coparison.  This array can either\n"
  "be part of the trees' EdgeData or VertexData.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeDifferenceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkTreeDifferenceFilter", // tp_name
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
  PyvtkTreeDifferenceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeDifferenceFilter_StaticNew()
{
  return vtkTreeDifferenceFilter::New();
}

PyObject *PyvtkTreeDifferenceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeDifferenceFilter_Type, PyvtkTreeDifferenceFilter_Methods,
    "vtkTreeDifferenceFilter",
 &PyvtkTreeDifferenceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeDifferenceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeDifferenceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeDifferenceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

