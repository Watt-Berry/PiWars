// python wrapper for vtkPointPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointPicker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointPicker(PyObject *dict); }
extern "C" { PyObject *PyvtkPointPicker_ClassNew(); }

#ifndef DECLARED_PyvtkPicker_ClassNew
extern "C" { PyObject *PyvtkPicker_ClassNew(); }
#define DECLARED_PyvtkPicker_ClassNew
#endif

static PyObject *
PyvtkPointPicker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointPicker *tempr = vtkPointPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointPicker::NewInstance());

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
PyvtkPointPicker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointPicker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointPicker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_GetPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointId() :
      op->vtkPointPicker::GetPointId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_SetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCells(temp0);
    }
    else
    {
      op->vtkPointPicker::SetUseCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_GetUseCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCells() :
      op->vtkPointPicker::GetUseCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellsOn();
    }
    else
    {
      op->vtkPointPicker::UseCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointPicker_UseCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointPicker *op = static_cast<vtkPointPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCellsOff();
    }
    else
    {
      op->vtkPointPicker::UseCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointPicker_Methods[] = {
  {"IsTypeOf", PyvtkPointPicker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointPicker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointPicker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointPicker\nC++: static vtkPointPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointPicker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointPicker\nC++: vtkPointPicker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointPicker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointPicker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPointId", PyvtkPointPicker_GetPointId, METH_VARARGS,
   "GetPointId(self) -> int\nC++: virtual vtkIdType GetPointId()\n\nGet the id of the picked point. If PointId = -1, nothing was\npicked.\n"},
  {"SetUseCells", PyvtkPointPicker_SetUseCells, METH_VARARGS,
   "SetUseCells(self, _arg:int) -> None\nC++: virtual void SetUseCells(vtkTypeBool _arg)\n\nSpecify whether the point search should be based on cell points\nor directly on the point list.\n"},
  {"GetUseCells", PyvtkPointPicker_GetUseCells, METH_VARARGS,
   "GetUseCells(self) -> int\nC++: virtual vtkTypeBool GetUseCells()\n\n"},
  {"UseCellsOn", PyvtkPointPicker_UseCellsOn, METH_VARARGS,
   "UseCellsOn(self) -> None\nC++: virtual void UseCellsOn()\n\n"},
  {"UseCellsOff", PyvtkPointPicker_UseCellsOff, METH_VARARGS,
   "UseCellsOff(self) -> None\nC++: virtual void UseCellsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointPicker_Doc =
  "vtkPointPicker - select a point by shooting a ray into a graphics\nwindow\n\n"
  "Superclass: vtkPicker\n\n"
  "vtkPointPicker is used to select a point by shooting a ray into a\n"
  "graphics window and intersecting with actor's defining geometry -\n"
  "specifically its points. Beside returning coordinates, actor, and\n"
  "mapper, vtkPointPicker returns the id of the point projecting closest\n"
  "onto the ray (within the specified tolerance).  Ties are broken\n"
  "(i.e., multiple points all projecting within the tolerance along the\n"
  "pick ray) by choosing the point closest to the ray origin (i.e.,\n"
  "closest to the eye).\n\n"
  "@sa\n"
  "vtkPicker vtkCellPicker\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkPointPicker", // tp_name
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
  PyvtkPointPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointPicker_StaticNew()
{
  return vtkPointPicker::New();
}

PyObject *PyvtkPointPicker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointPicker_Type, PyvtkPointPicker_Methods,
    "vtkPointPicker",
 &PyvtkPointPicker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPicker_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

