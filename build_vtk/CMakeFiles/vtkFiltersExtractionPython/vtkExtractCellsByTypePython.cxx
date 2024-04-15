// python wrapper for vtkExtractCellsByType
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractCellsByType.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractCellsByType(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractCellsByType_ClassNew(); }


static PyObject *
PyvtkExtractCellsByType_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractCellsByType::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractCellsByType::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractCellsByType *tempr = vtkExtractCellsByType::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractCellsByType *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractCellsByType::NewInstance());

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
PyvtkExtractCellsByType_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractCellsByType::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractCellsByType::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_AddCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellType(temp0);
    }
    else
    {
      op->vtkExtractCellsByType::AddCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_AddAllCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddAllCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddAllCellTypes();
    }
    else
    {
      op->vtkExtractCellsByType::AddAllCellTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_RemoveCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCellType(temp0);
    }
    else
    {
      op->vtkExtractCellsByType::RemoveCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_RemoveAllCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllCellTypes();
    }
    else
    {
      op->vtkExtractCellsByType::RemoveAllCellTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractCellsByType_ExtractCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractCellsByType *op = static_cast<vtkExtractCellsByType *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->ExtractCellType(temp0) :
      op->vtkExtractCellsByType::ExtractCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractCellsByType_Methods[] = {
  {"IsTypeOf", PyvtkExtractCellsByType_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractCellsByType_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractCellsByType_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractCellsByType\nC++: static vtkExtractCellsByType *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractCellsByType_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractCellsByType\nC++: vtkExtractCellsByType *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractCellsByType_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractCellsByType_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddCellType", PyvtkExtractCellsByType_AddCellType, METH_VARARGS,
   "AddCellType(self, type:int) -> None\nC++: void AddCellType(unsigned int type)\n\nSpecify the cell types to extract. Any cells of the type\nspecified are extracted. Methods for clearing the set of cells,\nadding all cells, and determining if a cell is in the set are\nalso provided.\n"},
  {"AddAllCellTypes", PyvtkExtractCellsByType_AddAllCellTypes, METH_VARARGS,
   "AddAllCellTypes(self) -> None\nC++: void AddAllCellTypes()\n\n"},
  {"RemoveCellType", PyvtkExtractCellsByType_RemoveCellType, METH_VARARGS,
   "RemoveCellType(self, type:int) -> None\nC++: void RemoveCellType(unsigned int type)\n\n"},
  {"RemoveAllCellTypes", PyvtkExtractCellsByType_RemoveAllCellTypes, METH_VARARGS,
   "RemoveAllCellTypes(self) -> None\nC++: void RemoveAllCellTypes()\n\n"},
  {"ExtractCellType", PyvtkExtractCellsByType_ExtractCellType, METH_VARARGS,
   "ExtractCellType(self, type:int) -> bool\nC++: bool ExtractCellType(unsigned int type)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractCellsByType_Doc =
  "vtkExtractCellsByType - extract cells of a specified type\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "Given an input vtkDataSet and a list of cell types, produce an output\n"
  "dataset containing only cells of the specified type(s). Note that if\n"
  "the input dataset is homogeneous (e.g., all cells are of the same\n"
  "type) and the cell type is one of the cells specified, then the input\n"
  "dataset is shallow copied to the output.\n\n"
  "The type of output dataset is always the same as the input type.\n"
  "Since structured types of data (i.e., vtkImageData,\n"
  "vtkStructuredGrid, vtkRectilnearGrid, vtkUniformGrid) are all\n"
  "composed of a cell of the same type, the output is either empty, or a\n"
  "shallow copy of the input. Unstructured data (vtkUnstructuredGrid,\n"
  "vtkPolyData) input may produce a subset of the input data (depending\n"
  "on the selected cell types).\n\n"
  "Note this filter can be used in a pipeline with composite datasets to\n"
  "extract blocks of (a) particular cell type(s).\n\n"
  "@warning\n"
  "Unlike the filter vtkExtractCells which always produces\n"
  "vtkUnstructuredGrid output, this filter produces the same output type\n"
  "as input type (i.e., it is a vtkDataSetAlgorithm). Also,\n"
  "vtkExtractCells extracts cells based on their ids.\n\n"
  "* @sa\n"
  "* vtkExtractBlock vtkExtractCells\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractCellsByType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractCellsByType", // tp_name
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
  PyvtkExtractCellsByType_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractCellsByType_StaticNew()
{
  return vtkExtractCellsByType::New();
}

PyObject *PyvtkExtractCellsByType_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractCellsByType_Type, PyvtkExtractCellsByType_Methods,
    "vtkExtractCellsByType",
 &PyvtkExtractCellsByType_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractCellsByType(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractCellsByType_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractCellsByType", o) != 0)
  {
    Py_DECREF(o);
  }

}

