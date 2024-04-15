// python wrapper for vtkGeoEdgeStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGeoEdgeStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeoEdgeStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkGeoEdgeStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkEdgeLayoutStrategy_ClassNew
extern "C" { PyObject *PyvtkEdgeLayoutStrategy_ClassNew(); }
#define DECLARED_PyvtkEdgeLayoutStrategy_ClassNew
#endif

static PyObject *
PyvtkGeoEdgeStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeoEdgeStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeoEdgeStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeoEdgeStrategy *tempr = vtkGeoEdgeStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeoEdgeStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeoEdgeStrategy::NewInstance());

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
PyvtkGeoEdgeStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGeoEdgeStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGeoEdgeStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobeRadius(temp0);
    }
    else
    {
      op->vtkGeoEdgeStrategy::SetGlobeRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetGlobeRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobeRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlobeRadius() :
      op->vtkGeoEdgeStrategy::GetGlobeRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExplodeFactor(temp0);
    }
    else
    {
      op->vtkGeoEdgeStrategy::SetExplodeFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetExplodeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExplodeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExplodeFactor() :
      op->vtkGeoEdgeStrategy::GetExplodeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSubdivisions(temp0);
    }
    else
    {
      op->vtkGeoEdgeStrategy::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkGeoEdgeStrategy::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeoEdgeStrategy_Layout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Layout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeoEdgeStrategy *op = static_cast<vtkGeoEdgeStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Layout();
    }
    else
    {
      op->vtkGeoEdgeStrategy::Layout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeoEdgeStrategy_Methods[] = {
  {"IsTypeOf", PyvtkGeoEdgeStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeoEdgeStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeoEdgeStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGeoEdgeStrategy\nC++: static vtkGeoEdgeStrategy *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeoEdgeStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGeoEdgeStrategy\nC++: vtkGeoEdgeStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGeoEdgeStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGeoEdgeStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGlobeRadius", PyvtkGeoEdgeStrategy_SetGlobeRadius, METH_VARARGS,
   "SetGlobeRadius(self, _arg:float) -> None\nC++: virtual void SetGlobeRadius(double _arg)\n\nThe base radius used to determine the earth's surface. Default is\nthe earth's radius in meters. TODO: Change this to take in a\nvtkGeoTerrain to get altitude.\n"},
  {"GetGlobeRadius", PyvtkGeoEdgeStrategy_GetGlobeRadius, METH_VARARGS,
   "GetGlobeRadius(self) -> float\nC++: virtual double GetGlobeRadius()\n\n"},
  {"SetExplodeFactor", PyvtkGeoEdgeStrategy_SetExplodeFactor, METH_VARARGS,
   "SetExplodeFactor(self, _arg:float) -> None\nC++: virtual void SetExplodeFactor(double _arg)\n\nFactor on which to \"explode\" the arcs away from the surface. A\nvalue of 0.0 keeps the values on the surface. Values larger than\n0.0 push the arcs away from the surface by a distance\nproportional to the distance between the points. The default is\n0.2.\n"},
  {"GetExplodeFactor", PyvtkGeoEdgeStrategy_GetExplodeFactor, METH_VARARGS,
   "GetExplodeFactor(self) -> float\nC++: virtual double GetExplodeFactor()\n\n"},
  {"SetNumberOfSubdivisions", PyvtkGeoEdgeStrategy_SetNumberOfSubdivisions, METH_VARARGS,
   "SetNumberOfSubdivisions(self, _arg:int) -> None\nC++: virtual void SetNumberOfSubdivisions(int _arg)\n\nThe number of subdivisions in the arc. The default is 20.\n"},
  {"GetNumberOfSubdivisions", PyvtkGeoEdgeStrategy_GetNumberOfSubdivisions, METH_VARARGS,
   "GetNumberOfSubdivisions(self) -> int\nC++: virtual int GetNumberOfSubdivisions()\n\n"},
  {"Layout", PyvtkGeoEdgeStrategy_Layout, METH_VARARGS,
   "Layout(self) -> None\nC++: void Layout() override;\n\nPerform the layout.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGeoEdgeStrategy_Doc =
  "vtkGeoEdgeStrategy - Layout graph edges on a globe as arcs.\n\n"
  "Superclass: vtkEdgeLayoutStrategy\n\n"
  "vtkGeoEdgeStrategy produces arcs for each edge in the input graph.\n"
  "This is useful for viewing lines on a sphere (e.g. the earth). The\n"
  "arcs may \"jump\" above the sphere's surface using ExplodeFactor.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeoEdgeStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkGeoEdgeStrategy", // tp_name
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
  PyvtkGeoEdgeStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeoEdgeStrategy_StaticNew()
{
  return vtkGeoEdgeStrategy::New();
}

PyObject *PyvtkGeoEdgeStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGeoEdgeStrategy_Type, PyvtkGeoEdgeStrategy_Methods,
    "vtkGeoEdgeStrategy",
 &PyvtkGeoEdgeStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeLayoutStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeoEdgeStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeoEdgeStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeoEdgeStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

