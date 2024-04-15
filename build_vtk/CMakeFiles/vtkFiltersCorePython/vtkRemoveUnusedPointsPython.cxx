// python wrapper for vtkRemoveUnusedPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRemoveUnusedPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRemoveUnusedPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkRemoveUnusedPoints_ClassNew(); }


static PyObject *
PyvtkRemoveUnusedPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRemoveUnusedPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRemoveUnusedPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRemoveUnusedPoints *tempr = vtkRemoveUnusedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRemoveUnusedPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRemoveUnusedPoints::NewInstance());

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
PyvtkRemoveUnusedPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRemoveUnusedPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRemoveUnusedPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_SetGenerateOriginalPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOriginalPointIds(temp0);
    }
    else
    {
      op->vtkRemoveUnusedPoints::SetGenerateOriginalPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_GetGenerateOriginalPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalPointIds() :
      op->vtkRemoveUnusedPoints::GetGenerateOriginalPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_GenerateOriginalPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOriginalPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOriginalPointIdsOn();
    }
    else
    {
      op->vtkRemoveUnusedPoints::GenerateOriginalPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_GenerateOriginalPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOriginalPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOriginalPointIdsOff();
    }
    else
    {
      op->vtkRemoveUnusedPoints::GenerateOriginalPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_SetOriginalPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalPointIdsArrayName(temp0);
    }
    else
    {
      op->vtkRemoveUnusedPoints::SetOriginalPointIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRemoveUnusedPoints_GetOriginalPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRemoveUnusedPoints *op = static_cast<vtkRemoveUnusedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsArrayName() :
      op->vtkRemoveUnusedPoints::GetOriginalPointIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRemoveUnusedPoints_Methods[] = {
  {"IsTypeOf", PyvtkRemoveUnusedPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRemoveUnusedPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRemoveUnusedPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRemoveUnusedPoints\nC++: static vtkRemoveUnusedPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRemoveUnusedPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRemoveUnusedPoints\nC++: vtkRemoveUnusedPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRemoveUnusedPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRemoveUnusedPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGenerateOriginalPointIds", PyvtkRemoveUnusedPoints_SetGenerateOriginalPointIds, METH_VARARGS,
   "SetGenerateOriginalPointIds(self, _arg:bool) -> None\nC++: virtual void SetGenerateOriginalPointIds(bool _arg)\n\nEnable adding a `vtkOriginalPointIds` array to the point data\nwhich identifies the original point index. Default is true.\n"},
  {"GetGenerateOriginalPointIds", PyvtkRemoveUnusedPoints_GetGenerateOriginalPointIds, METH_VARARGS,
   "GetGenerateOriginalPointIds(self) -> bool\nC++: virtual bool GetGenerateOriginalPointIds()\n\n"},
  {"GenerateOriginalPointIdsOn", PyvtkRemoveUnusedPoints_GenerateOriginalPointIdsOn, METH_VARARGS,
   "GenerateOriginalPointIdsOn(self) -> None\nC++: virtual void GenerateOriginalPointIdsOn()\n\n"},
  {"GenerateOriginalPointIdsOff", PyvtkRemoveUnusedPoints_GenerateOriginalPointIdsOff, METH_VARARGS,
   "GenerateOriginalPointIdsOff(self) -> None\nC++: virtual void GenerateOriginalPointIdsOff()\n\n"},
  {"SetOriginalPointIdsArrayName", PyvtkRemoveUnusedPoints_SetOriginalPointIdsArrayName, METH_VARARGS,
   "SetOriginalPointIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetOriginalPointIdsArrayName(const char *_arg)\n\nChoose the name to use for the original point ids array. Default\nis `vtkOriginalPointIds`. This is used only when\n`GenerateOriginalPointIds` is true.\n"},
  {"GetOriginalPointIdsArrayName", PyvtkRemoveUnusedPoints_GetOriginalPointIdsArrayName, METH_VARARGS,
   "GetOriginalPointIdsArrayName(self) -> str\nC++: virtual char *GetOriginalPointIdsArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRemoveUnusedPoints_Doc =
  "vtkRemoveUnusedPoints - remove points not used by any cell.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkRemoveUnusedPoints is a filter that removes any points that are\n"
  "not used by the cells. Currently, this filter only supports\n"
  "vtkUnstructuredGrid.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRemoveUnusedPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkRemoveUnusedPoints", // tp_name
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
  PyvtkRemoveUnusedPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRemoveUnusedPoints_StaticNew()
{
  return vtkRemoveUnusedPoints::New();
}

PyObject *PyvtkRemoveUnusedPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRemoveUnusedPoints_Type, PyvtkRemoveUnusedPoints_Methods,
    "vtkRemoveUnusedPoints",
 &PyvtkRemoveUnusedPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRemoveUnusedPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRemoveUnusedPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRemoveUnusedPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

