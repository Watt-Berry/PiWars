// python wrapper for vtkExtractSelectedIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedIds.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedIds(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedIds_ClassNew(); }


static PyObject *
PyvtkExtractSelectedIds_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedIds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedIds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedIds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedIds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedIds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedIds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedIds *tempr = vtkExtractSelectedIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedIds::NewInstance());

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
PyvtkExtractSelectedIds_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedIds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedIds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedIds::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedIds_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedIds *op = static_cast<vtkExtractSelectedIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedIds::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectedIds_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedIds_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedIds_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedIds_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedIds\nC++: static vtkExtractSelectedIds *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedIds_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedIds\nC++: vtkExtractSelectedIds *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedIds_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedIds_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedIds_Doc =
  "vtkExtractSelectedIds - extract a list of cells from a dataset\n\n"
  "Superclass: vtkExtractSelectionBase\n\n"
  "vtkExtractSelectedIds extracts a set of cells and points from within\n"
  "a vtkDataSet. The set of ids to extract are listed within a\n"
  "vtkSelection. This filter adds a scalar array called\n"
  "vtkOriginalCellIds that says what input cell produced each output\n"
  "cell. This is an example of a Pedigree ID which helps to trace back\n"
  "results. Depending on whether the selection has GLOBALIDS, VALUES or\n"
  "INDICES, the selection will use the contents of the array named in\n"
  "the GLOBALIDS DataSetAttribute, and arbitrary array, or the position\n"
  "(tuple id or number) within the cell or point array.\n\n"
  "@sa\n"
  "vtkSelection vtkExtractSelection\n\n"
  "@deprecated vtkExtractSelectedIds is deprecated in VTK 9.2 and will\n"
  "be removed. Use `vtkExtractSelection` instead of\n"
  "`vtkExtractSelectedIds`.\n\n"
  "Example using vtkExtractSelectedIds:\n\n"
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

static PyTypeObject PyvtkExtractSelectedIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractSelectedIds", // tp_name
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
  PyvtkExtractSelectedIds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedIds_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkExtractSelectedIds."
    " (" "Use vtkExtractSelection instead of vtkExtractSelectedIds." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  return vtkExtractSelectedIds::New();
}

PyObject *PyvtkExtractSelectedIds_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedIds_Type, PyvtkExtractSelectedIds_Methods,
    "vtkExtractSelectedIds",
 &PyvtkExtractSelectedIds_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkExtractSelectionBase");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedIds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedIds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedIds", o) != 0)
  {
    Py_DECREF(o);
  }

}

