// python wrapper for vtkGenerateIndexArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenerateIndexArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenerateIndexArray(PyObject *dict); }
extern "C" { PyObject *PyvtkGenerateIndexArray_ClassNew(); }


static PyObject *
PyvtkGenerateIndexArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateIndexArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateIndexArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateIndexArray *tempr = vtkGenerateIndexArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateIndexArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateIndexArray::NewInstance());

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
PyvtkGenerateIndexArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenerateIndexArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenerateIndexArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkGenerateIndexArray::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkGenerateIndexArray::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceArrayName(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetReferenceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetReferenceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetReferenceArrayName() :
      op->vtkGenerateIndexArray::GetReferenceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_SetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPedigreeID(temp0);
    }
    else
    {
      op->vtkGenerateIndexArray::SetPedigreeID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateIndexArray_GetPedigreeID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateIndexArray *op = static_cast<vtkGenerateIndexArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPedigreeID() :
      op->vtkGenerateIndexArray::GetPedigreeID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateIndexArray_Methods[] = {
  {"IsTypeOf", PyvtkGenerateIndexArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateIndexArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateIndexArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenerateIndexArray\nC++: static vtkGenerateIndexArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateIndexArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenerateIndexArray\nC++: vtkGenerateIndexArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenerateIndexArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenerateIndexArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetArrayName", PyvtkGenerateIndexArray_SetArrayName, METH_VARARGS,
   "SetArrayName(self, _arg:str) -> None\nC++: virtual void SetArrayName(const char *_arg)\n\nControl the output index array name.  Default: \"index\".\n"},
  {"GetArrayName", PyvtkGenerateIndexArray_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\n"},
  {"SetFieldType", PyvtkGenerateIndexArray_SetFieldType, METH_VARARGS,
   "SetFieldType(self, _arg:int) -> None\nC++: virtual void SetFieldType(int _arg)\n\nControl the location where the index array will be stored.\n"},
  {"GetFieldType", PyvtkGenerateIndexArray_GetFieldType, METH_VARARGS,
   "GetFieldType(self) -> int\nC++: virtual int GetFieldType()\n\n"},
  {"SetReferenceArrayName", PyvtkGenerateIndexArray_SetReferenceArrayName, METH_VARARGS,
   "SetReferenceArrayName(self, _arg:str) -> None\nC++: virtual void SetReferenceArrayName(const char *_arg)\n\nSpecifies an optional reference array for index-generation.\n"},
  {"GetReferenceArrayName", PyvtkGenerateIndexArray_GetReferenceArrayName, METH_VARARGS,
   "GetReferenceArrayName(self) -> str\nC++: virtual char *GetReferenceArrayName()\n\n"},
  {"SetPedigreeID", PyvtkGenerateIndexArray_SetPedigreeID, METH_VARARGS,
   "SetPedigreeID(self, _arg:int) -> None\nC++: virtual void SetPedigreeID(int _arg)\n\nSpecifies whether the index array should be marked as pedigree\nids.  Default: false.\n"},
  {"GetPedigreeID", PyvtkGenerateIndexArray_GetPedigreeID, METH_VARARGS,
   "GetPedigreeID(self) -> int\nC++: virtual int GetPedigreeID()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenerateIndexArray_Doc =
  "vtkGenerateIndexArray - Generates a new vtkIdTypeArray containing\nzero-base indices.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkGenerateIndexArray operates in one of two distinct \"modes\". By\n"
  "default, it simply generates an index array containing\n"
  "monotonically-increasing integers in the range [0, N), where N is\n"
  "appropriately sized for the field type that will store the results. \n"
  "This mode is useful for generating a unique ID field for datasets\n"
  "that have none.\n\n"
  "The second \"mode\" uses an existing array from the input data object\n"
  "as a \"reference\".  Distinct values from the reference array are\n"
  "sorted in ascending order, and an integer index in the range [0, N)\n"
  "is assigned to each.  The resulting map is used to populate the\n"
  "output index array, mapping each value in the reference array to its\n"
  "corresponding index and storing the result in the output array.  This\n"
  "mode is especially useful when generating tensors, since it allows us\n"
  "to \"map\" from an array with arbitrary contents to an index that can\n"
  "be used as tensor coordinates.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenerateIndexArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkGenerateIndexArray", // tp_name
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
  PyvtkGenerateIndexArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateIndexArray_StaticNew()
{
  return vtkGenerateIndexArray::New();
}

PyObject *PyvtkGenerateIndexArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenerateIndexArray_Type, PyvtkGenerateIndexArray_Methods,
    "vtkGenerateIndexArray",
 &PyvtkGenerateIndexArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "ROW_DATA", vtkGenerateIndexArray::ROW_DATA },
        { "POINT_DATA", vtkGenerateIndexArray::POINT_DATA },
        { "CELL_DATA", vtkGenerateIndexArray::CELL_DATA },
        { "VERTEX_DATA", vtkGenerateIndexArray::VERTEX_DATA },
        { "EDGE_DATA", vtkGenerateIndexArray::EDGE_DATA },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateIndexArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateIndexArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateIndexArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

