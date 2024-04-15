// python wrapper for vtkGraphGeodesicPath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphGeodesicPath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphGeodesicPath(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphGeodesicPath_ClassNew(); }

#ifndef DECLARED_PyvtkGeodesicPath_ClassNew
extern "C" { PyObject *PyvtkGeodesicPath_ClassNew(); }
#define DECLARED_PyvtkGeodesicPath_ClassNew
#endif

static PyObject *
PyvtkGraphGeodesicPath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphGeodesicPath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphGeodesicPath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphGeodesicPath *tempr = vtkGraphGeodesicPath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphGeodesicPath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphGeodesicPath::NewInstance());

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
PyvtkGraphGeodesicPath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphGeodesicPath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphGeodesicPath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetStartVertex() :
      op->vtkGraphGeodesicPath::GetStartVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetStartVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartVertex(temp0);
    }
    else
    {
      op->vtkGraphGeodesicPath::SetStartVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_GetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetEndVertex() :
      op->vtkGraphGeodesicPath::GetEndVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphGeodesicPath_SetEndVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphGeodesicPath *op = static_cast<vtkGraphGeodesicPath *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndVertex(temp0);
    }
    else
    {
      op->vtkGraphGeodesicPath::SetEndVertex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphGeodesicPath_Methods[] = {
  {"IsTypeOf", PyvtkGraphGeodesicPath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphGeodesicPath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphGeodesicPath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphGeodesicPath\nC++: static vtkGraphGeodesicPath *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphGeodesicPath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphGeodesicPath\nC++: vtkGraphGeodesicPath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphGeodesicPath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphGeodesicPath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetStartVertex", PyvtkGraphGeodesicPath_GetStartVertex, METH_VARARGS,
   "GetStartVertex(self) -> int\nC++: virtual vtkIdType GetStartVertex()\n\nThe vertex at the start of the shortest path\n"},
  {"SetStartVertex", PyvtkGraphGeodesicPath_SetStartVertex, METH_VARARGS,
   "SetStartVertex(self, _arg:int) -> None\nC++: virtual void SetStartVertex(vtkIdType _arg)\n\n"},
  {"GetEndVertex", PyvtkGraphGeodesicPath_GetEndVertex, METH_VARARGS,
   "GetEndVertex(self) -> int\nC++: virtual vtkIdType GetEndVertex()\n\nThe vertex at the end of the shortest path\n"},
  {"SetEndVertex", PyvtkGraphGeodesicPath_SetEndVertex, METH_VARARGS,
   "SetEndVertex(self, _arg:int) -> None\nC++: virtual void SetEndVertex(vtkIdType _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphGeodesicPath_Doc =
  "vtkGraphGeodesicPath - Abstract base for classes that generate a\ngeodesic path on a graph (mesh).\n\n"
  "Superclass: vtkGeodesicPath\n\n"
  "Serves as a base class for algorithms that trace a geodesic on a\n"
  "polygonal dataset treating it as a graph. ie points connecting the\n"
  "vertices of the graph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphGeodesicPath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkGraphGeodesicPath", // tp_name
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
  PyvtkGraphGeodesicPath_Doc, // tp_doc
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

PyObject *PyvtkGraphGeodesicPath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphGeodesicPath_Type, PyvtkGraphGeodesicPath_Methods,
    "vtkGraphGeodesicPath",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGeodesicPath_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGraphGeodesicPath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphGeodesicPath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphGeodesicPath", o) != 0)
  {
    Py_DECREF(o);
  }

}

