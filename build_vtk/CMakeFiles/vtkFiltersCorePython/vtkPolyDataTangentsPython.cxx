// python wrapper for vtkPolyDataTangents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataTangents.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataTangents(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataTangents_ClassNew(); }


static PyObject *
PyvtkPolyDataTangents_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataTangents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataTangents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataTangents *tempr = vtkPolyDataTangents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataTangents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataTangents::NewInstance());

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
PyvtkPolyDataTangents_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataTangents::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataTangents::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_SetComputePointTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputePointTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputePointTangents(temp0);
    }
    else
    {
      op->vtkPolyDataTangents::SetComputePointTangents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_GetComputePointTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputePointTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputePointTangents() :
      op->vtkPolyDataTangents::GetComputePointTangents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_ComputePointTangentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointTangentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePointTangentsOn();
    }
    else
    {
      op->vtkPolyDataTangents::ComputePointTangentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_ComputePointTangentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputePointTangentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputePointTangentsOff();
    }
    else
    {
      op->vtkPolyDataTangents::ComputePointTangentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_SetComputeCellTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeCellTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeCellTangents(temp0);
    }
    else
    {
      op->vtkPolyDataTangents::SetComputeCellTangents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_GetComputeCellTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeCellTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeCellTangents() :
      op->vtkPolyDataTangents::GetComputeCellTangents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_ComputeCellTangentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellTangentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellTangentsOn();
    }
    else
    {
      op->vtkPolyDataTangents::ComputeCellTangentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataTangents_ComputeCellTangentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCellTangentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataTangents *op = static_cast<vtkPolyDataTangents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeCellTangentsOff();
    }
    else
    {
      op->vtkPolyDataTangents::ComputeCellTangentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataTangents_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataTangents_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataTangents_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataTangents_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataTangents\nC++: static vtkPolyDataTangents *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataTangents_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataTangents\nC++: vtkPolyDataTangents *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataTangents_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataTangents_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComputePointTangents", PyvtkPolyDataTangents_SetComputePointTangents, METH_VARARGS,
   "SetComputePointTangents(self, _arg:bool) -> None\nC++: virtual void SetComputePointTangents(bool _arg)\n\nTurn on/off the computation of point tangents. Default is true.\n"},
  {"GetComputePointTangents", PyvtkPolyDataTangents_GetComputePointTangents, METH_VARARGS,
   "GetComputePointTangents(self) -> bool\nC++: virtual bool GetComputePointTangents()\n\n"},
  {"ComputePointTangentsOn", PyvtkPolyDataTangents_ComputePointTangentsOn, METH_VARARGS,
   "ComputePointTangentsOn(self) -> None\nC++: virtual void ComputePointTangentsOn()\n\n"},
  {"ComputePointTangentsOff", PyvtkPolyDataTangents_ComputePointTangentsOff, METH_VARARGS,
   "ComputePointTangentsOff(self) -> None\nC++: virtual void ComputePointTangentsOff()\n\n"},
  {"SetComputeCellTangents", PyvtkPolyDataTangents_SetComputeCellTangents, METH_VARARGS,
   "SetComputeCellTangents(self, _arg:bool) -> None\nC++: virtual void SetComputeCellTangents(bool _arg)\n\nTurn on/off the computation of cell tangents. Default is false.\n"},
  {"GetComputeCellTangents", PyvtkPolyDataTangents_GetComputeCellTangents, METH_VARARGS,
   "GetComputeCellTangents(self) -> bool\nC++: virtual bool GetComputeCellTangents()\n\n"},
  {"ComputeCellTangentsOn", PyvtkPolyDataTangents_ComputeCellTangentsOn, METH_VARARGS,
   "ComputeCellTangentsOn(self) -> None\nC++: virtual void ComputeCellTangentsOn()\n\n"},
  {"ComputeCellTangentsOff", PyvtkPolyDataTangents_ComputeCellTangentsOff, METH_VARARGS,
   "ComputeCellTangentsOff(self) -> None\nC++: virtual void ComputeCellTangentsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataTangents_Doc =
  "vtkPolyDataTangents - compute tangents for triangulated polydata\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPolyDataTangents is a filter that computes point and/or cell\n"
  "tangents for a triangulated polydata. This filter requires an input\n"
  "with both normals and tcoords on points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataTangents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPolyDataTangents", // tp_name
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
  PyvtkPolyDataTangents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataTangents_StaticNew()
{
  return vtkPolyDataTangents::New();
}

PyObject *PyvtkPolyDataTangents_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataTangents_Type, PyvtkPolyDataTangents_Methods,
    "vtkPolyDataTangents",
 &PyvtkPolyDataTangents_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataTangents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataTangents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataTangents", o) != 0)
  {
    Py_DECREF(o);
  }

}

