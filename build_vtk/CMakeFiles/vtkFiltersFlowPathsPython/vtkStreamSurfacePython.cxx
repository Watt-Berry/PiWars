// python wrapper for vtkStreamSurface
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamSurface.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamSurface(PyObject *dict); }
extern "C" { PyObject *PyvtkStreamSurface_ClassNew(); }

#ifndef DECLARED_PyvtkStreamTracer_ClassNew
extern "C" { PyObject *PyvtkStreamTracer_ClassNew(); }
#define DECLARED_PyvtkStreamTracer_ClassNew
#endif

static PyObject *
PyvtkStreamSurface_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamSurface::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamSurface::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamSurface *tempr = vtkStreamSurface::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamSurface *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamSurface::NewInstance());

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
PyvtkStreamSurface_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamSurface::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamSurface::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_SetUseIterativeSeeding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIterativeSeeding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIterativeSeeding(temp0);
    }
    else
    {
      op->vtkStreamSurface::SetUseIterativeSeeding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_GetUseIterativeSeeding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIterativeSeeding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIterativeSeeding() :
      op->vtkStreamSurface::GetUseIterativeSeeding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_UseIterativeSeedingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIterativeSeedingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIterativeSeedingOn();
    }
    else
    {
      op->vtkStreamSurface::UseIterativeSeedingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamSurface_UseIterativeSeedingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIterativeSeedingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamSurface *op = static_cast<vtkStreamSurface *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIterativeSeedingOff();
    }
    else
    {
      op->vtkStreamSurface::UseIterativeSeedingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamSurface_Methods[] = {
  {"IsTypeOf", PyvtkStreamSurface_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamSurface_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamSurface_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamSurface\nC++: static vtkStreamSurface *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamSurface_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamSurface\nC++: vtkStreamSurface *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamSurface_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamSurface_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUseIterativeSeeding", PyvtkStreamSurface_SetUseIterativeSeeding, METH_VARARGS,
   "SetUseIterativeSeeding(self, _arg:bool) -> None\nC++: virtual void SetUseIterativeSeeding(bool _arg)\n\nSpecify/determine if the simple (fast) or iterative (correct)\nversion is called.\n"},
  {"GetUseIterativeSeeding", PyvtkStreamSurface_GetUseIterativeSeeding, METH_VARARGS,
   "GetUseIterativeSeeding(self) -> bool\nC++: virtual bool GetUseIterativeSeeding()\n\n"},
  {"UseIterativeSeedingOn", PyvtkStreamSurface_UseIterativeSeedingOn, METH_VARARGS,
   "UseIterativeSeedingOn(self) -> None\nC++: virtual void UseIterativeSeedingOn()\n\n"},
  {"UseIterativeSeedingOff", PyvtkStreamSurface_UseIterativeSeedingOff, METH_VARARGS,
   "UseIterativeSeedingOff(self) -> None\nC++: virtual void UseIterativeSeedingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamSurface_Doc =
  "vtkStreamSurface - Advect a stream surface in a vector field\n\n"
  "Superclass: vtkStreamTracer\n\n"
  "vtkStreamSurface is a surface streamer that generates a surface using\n"
  "the vectors in the input. Depending on the UseIterativeSeeding\n"
  "parameter, the simple or iterative version is called. The iterative\n"
  "version produces better surfaces, but takes longer.\n\n"
  "@par Thanks: Developed by Roxana Bujack and Karen Tsai at Los Alamos\n"
  "National Laboratory under LDRD 20190143ER\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamSurface_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkStreamSurface", // tp_name
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
  PyvtkStreamSurface_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamSurface_StaticNew()
{
  return vtkStreamSurface::New();
}

PyObject *PyvtkStreamSurface_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamSurface_Type, PyvtkStreamSurface_Methods,
    "vtkStreamSurface",
 &PyvtkStreamSurface_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkStreamTracer_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStreamSurface(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStreamSurface_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamSurface", o) != 0)
  {
    Py_DECREF(o);
  }

}

