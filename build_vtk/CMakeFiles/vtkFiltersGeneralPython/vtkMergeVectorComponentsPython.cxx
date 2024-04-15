// python wrapper for vtkMergeVectorComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMergeVectorComponents.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeVectorComponents(PyObject *dict); }
extern "C" { PyObject *PyvtkMergeVectorComponents_ClassNew(); }


static PyObject *
PyvtkMergeVectorComponents_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeVectorComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeVectorComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeVectorComponents *tempr = vtkMergeVectorComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeVectorComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeVectorComponents::NewInstance());

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
PyvtkMergeVectorComponents_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMergeVectorComponents::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMergeVectorComponents::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetXArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXArrayName(temp0);
    }
    else
    {
      op->vtkMergeVectorComponents::SetXArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetXArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXArrayName() :
      op->vtkMergeVectorComponents::GetXArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetYArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYArrayName(temp0);
    }
    else
    {
      op->vtkMergeVectorComponents::SetYArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetYArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYArrayName() :
      op->vtkMergeVectorComponents::GetYArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetZArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZArrayName(temp0);
    }
    else
    {
      op->vtkMergeVectorComponents::SetZArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetZArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZArrayName() :
      op->vtkMergeVectorComponents::GetZArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetOutputVectorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputVectorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputVectorName(temp0);
    }
    else
    {
      op->vtkMergeVectorComponents::SetOutputVectorName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetOutputVectorName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVectorName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputVectorName() :
      op->vtkMergeVectorComponents::GetOutputVectorName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkMergeVectorComponents::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkMergeVectorComponents::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetAttributeTypeToPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToPointData();
    }
    else
    {
      op->vtkMergeVectorComponents::SetAttributeTypeToPointData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeVectorComponents_SetAttributeTypeToCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeTypeToCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeVectorComponents *op = static_cast<vtkMergeVectorComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeTypeToCellData();
    }
    else
    {
      op->vtkMergeVectorComponents::SetAttributeTypeToCellData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeVectorComponents_Methods[] = {
  {"IsTypeOf", PyvtkMergeVectorComponents_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeVectorComponents_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeVectorComponents_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMergeVectorComponents\nC++: static vtkMergeVectorComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeVectorComponents_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMergeVectorComponents\nC++: vtkMergeVectorComponents *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMergeVectorComponents_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMergeVectorComponents_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXArrayName", PyvtkMergeVectorComponents_SetXArrayName, METH_VARARGS,
   "SetXArrayName(self, _arg:str) -> None\nC++: virtual void SetXArrayName(const char *_arg)\n\nSet the name of the array to use as the X component of the\ncombination vector\n"},
  {"GetXArrayName", PyvtkMergeVectorComponents_GetXArrayName, METH_VARARGS,
   "GetXArrayName(self) -> str\nC++: virtual char *GetXArrayName()\n\n"},
  {"SetYArrayName", PyvtkMergeVectorComponents_SetYArrayName, METH_VARARGS,
   "SetYArrayName(self, _arg:str) -> None\nC++: virtual void SetYArrayName(const char *_arg)\n\nSet the name of the array to use as the Y component of the\ncombination vector\n"},
  {"GetYArrayName", PyvtkMergeVectorComponents_GetYArrayName, METH_VARARGS,
   "GetYArrayName(self) -> str\nC++: virtual char *GetYArrayName()\n\n"},
  {"SetZArrayName", PyvtkMergeVectorComponents_SetZArrayName, METH_VARARGS,
   "SetZArrayName(self, _arg:str) -> None\nC++: virtual void SetZArrayName(const char *_arg)\n\nSet the name of the array to use as the Z attribute of the\ncombination vector\n"},
  {"GetZArrayName", PyvtkMergeVectorComponents_GetZArrayName, METH_VARARGS,
   "GetZArrayName(self) -> str\nC++: virtual char *GetZArrayName()\n\n"},
  {"SetOutputVectorName", PyvtkMergeVectorComponents_SetOutputVectorName, METH_VARARGS,
   "SetOutputVectorName(self, _arg:str) -> None\nC++: virtual void SetOutputVectorName(const char *_arg)\n\nSet the name of the output combination vector. If name is\nundefined, the output vector will be named, \"combinationVector\".\n"},
  {"GetOutputVectorName", PyvtkMergeVectorComponents_GetOutputVectorName, METH_VARARGS,
   "GetOutputVectorName(self) -> str\nC++: virtual char *GetOutputVectorName()\n\n"},
  {"SetAttributeType", PyvtkMergeVectorComponents_SetAttributeType, METH_VARARGS,
   "SetAttributeType(self, _arg:int) -> None\nC++: virtual void SetAttributeType(int _arg)\n\nControl which AttributeType the filter operates on (point data or\ncell data for vtkDataSets). The default value is\nvtkDataObject::POINT. The input value for this function should be\neither vtkDataObject::POINT or vtkDataObject::CELL.\n"},
  {"GetAttributeType", PyvtkMergeVectorComponents_GetAttributeType, METH_VARARGS,
   "GetAttributeType(self) -> int\nC++: virtual int GetAttributeType()\n\n"},
  {"SetAttributeTypeToPointData", PyvtkMergeVectorComponents_SetAttributeTypeToPointData, METH_VARARGS,
   "SetAttributeTypeToPointData(self) -> None\nC++: void SetAttributeTypeToPointData()\n\n"},
  {"SetAttributeTypeToCellData", PyvtkMergeVectorComponents_SetAttributeTypeToCellData, METH_VARARGS,
   "SetAttributeTypeToCellData(self) -> None\nC++: void SetAttributeTypeToCellData()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMergeVectorComponents_Doc =
  "vtkMergeVectorComponents - merge components of many single-component\narrays into one vector\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkMergeVectorComponents is a filter that merges three\n"
  "single-component arrays into one vector. This is accomplished by\n"
  "creating one output vector with 3 components. The type of the output\n"
  "vector is vtkDoubleArray. The user needs to define the names of the\n"
  "single-component arrays and the attribute-type of the arrays, i.e.\n"
  "point-data or cell-data.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMergeVectorComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMergeVectorComponents", // tp_name
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
  PyvtkMergeVectorComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeVectorComponents_StaticNew()
{
  return vtkMergeVectorComponents::New();
}

PyObject *PyvtkMergeVectorComponents_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMergeVectorComponents_Type, PyvtkMergeVectorComponents_Methods,
    "vtkMergeVectorComponents",
 &PyvtkMergeVectorComponents_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeVectorComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeVectorComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeVectorComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

