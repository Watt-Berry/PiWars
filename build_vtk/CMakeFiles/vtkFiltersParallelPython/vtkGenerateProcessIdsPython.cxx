// python wrapper for vtkGenerateProcessIds
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenerateProcessIds.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenerateProcessIds(PyObject *dict); }
extern "C" { PyObject *PyvtkGenerateProcessIds_ClassNew(); }


static PyObject *
PyvtkGenerateProcessIds_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenerateProcessIds::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenerateProcessIds::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenerateProcessIds *tempr = vtkGenerateProcessIds::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenerateProcessIds *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenerateProcessIds::NewInstance());

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
PyvtkGenerateProcessIds_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenerateProcessIds::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenerateProcessIds::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_SetGeneratePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeneratePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeneratePointData(temp0);
    }
    else
    {
      op->vtkGenerateProcessIds::SetGeneratePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GetGeneratePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeneratePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGeneratePointData() :
      op->vtkGenerateProcessIds::GetGeneratePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GeneratePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointDataOn();
    }
    else
    {
      op->vtkGenerateProcessIds::GeneratePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GeneratePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeneratePointDataOff();
    }
    else
    {
      op->vtkGenerateProcessIds::GeneratePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_SetGenerateCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellData(temp0);
    }
    else
    {
      op->vtkGenerateProcessIds::SetGenerateCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GetGenerateCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellData() :
      op->vtkGenerateProcessIds::GetGenerateCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GenerateCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellDataOn();
    }
    else
    {
      op->vtkGenerateProcessIds::GenerateCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GenerateCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellDataOff();
    }
    else
    {
      op->vtkGenerateProcessIds::GenerateCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkGenerateProcessIds::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenerateProcessIds_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenerateProcessIds *op = static_cast<vtkGenerateProcessIds *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkGenerateProcessIds::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenerateProcessIds_Methods[] = {
  {"IsTypeOf", PyvtkGenerateProcessIds_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenerateProcessIds_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenerateProcessIds_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenerateProcessIds\nC++: static vtkGenerateProcessIds *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenerateProcessIds_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenerateProcessIds\nC++: vtkGenerateProcessIds *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenerateProcessIds_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenerateProcessIds_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGeneratePointData", PyvtkGenerateProcessIds_SetGeneratePointData, METH_VARARGS,
   "SetGeneratePointData(self, _arg:bool) -> None\nC++: virtual void SetGeneratePointData(bool _arg)\n\nSet/Get whether to generate process ids for PointData. Default is\ntrue.\n"},
  {"GetGeneratePointData", PyvtkGenerateProcessIds_GetGeneratePointData, METH_VARARGS,
   "GetGeneratePointData(self) -> bool\nC++: virtual bool GetGeneratePointData()\n\n"},
  {"GeneratePointDataOn", PyvtkGenerateProcessIds_GeneratePointDataOn, METH_VARARGS,
   "GeneratePointDataOn(self) -> None\nC++: virtual void GeneratePointDataOn()\n\n"},
  {"GeneratePointDataOff", PyvtkGenerateProcessIds_GeneratePointDataOff, METH_VARARGS,
   "GeneratePointDataOff(self) -> None\nC++: virtual void GeneratePointDataOff()\n\n"},
  {"SetGenerateCellData", PyvtkGenerateProcessIds_SetGenerateCellData, METH_VARARGS,
   "SetGenerateCellData(self, _arg:bool) -> None\nC++: virtual void SetGenerateCellData(bool _arg)\n\nSet/Get whether to generate process ids for CellData. Default is\nfalse.\n"},
  {"GetGenerateCellData", PyvtkGenerateProcessIds_GetGenerateCellData, METH_VARARGS,
   "GetGenerateCellData(self) -> bool\nC++: virtual bool GetGenerateCellData()\n\n"},
  {"GenerateCellDataOn", PyvtkGenerateProcessIds_GenerateCellDataOn, METH_VARARGS,
   "GenerateCellDataOn(self) -> None\nC++: virtual void GenerateCellDataOn()\n\n"},
  {"GenerateCellDataOff", PyvtkGenerateProcessIds_GenerateCellDataOff, METH_VARARGS,
   "GenerateCellDataOff(self) -> None\nC++: virtual void GenerateCellDataOff()\n\n"},
  {"SetController", PyvtkGenerateProcessIds_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkGenerateProcessIds_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: vtkMultiProcessController *GetController()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenerateProcessIds_Doc =
  "vtkGenerateProcessIds - Sets ProcessIds attribute for PointData\nand/or CellData.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkGenerateProcessIds is meant to fill in the ProcessIds attribute\n"
  "array, to know which processor owns which cells and points. It can\n"
  "generate it for both PointData and CellData. The ProcessIds array's\n"
  "name will be \"PointProcessIds\" for PointData, and \"CellProcessIds\"\n"
  "for CellData.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenerateProcessIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkGenerateProcessIds", // tp_name
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
  PyvtkGenerateProcessIds_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenerateProcessIds_StaticNew()
{
  return vtkGenerateProcessIds::New();
}

PyObject *PyvtkGenerateProcessIds_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenerateProcessIds_Type, PyvtkGenerateProcessIds_Methods,
    "vtkGenerateProcessIds",
 &PyvtkGenerateProcessIds_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenerateProcessIds(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenerateProcessIds_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenerateProcessIds", o) != 0)
  {
    Py_DECREF(o);
  }

}

