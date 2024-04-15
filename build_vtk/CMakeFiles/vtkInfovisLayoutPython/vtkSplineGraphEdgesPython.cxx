// python wrapper for vtkSplineGraphEdges
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSplineGraphEdges.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplineGraphEdges(PyObject *dict); }
extern "C" { PyObject *PyvtkSplineGraphEdges_ClassNew(); }


static PyObject *
PyvtkSplineGraphEdges_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplineGraphEdges::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplineGraphEdges::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplineGraphEdges *tempr = vtkSplineGraphEdges::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplineGraphEdges *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplineGraphEdges::NewInstance());

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
PyvtkSplineGraphEdges_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSplineGraphEdges::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSplineGraphEdges::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->SetSpline(temp0);
    }
    else
    {
      op->vtkSplineGraphEdges::SetSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpline *tempr = (ap.IsBound() ?
      op->GetSpline() :
      op->vtkSplineGraphEdges::GetSpline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSplineType(temp0);
    }
    else
    {
      op->vtkSplineGraphEdges::SetSplineType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetSplineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSplineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSplineType() :
      op->vtkSplineGraphEdges::GetSplineType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_SetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  long long temp0;
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
      op->vtkSplineGraphEdges::SetNumberOfSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplineGraphEdges_GetNumberOfSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplineGraphEdges *op = static_cast<vtkSplineGraphEdges *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfSubdivisions() :
      op->vtkSplineGraphEdges::GetNumberOfSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSplineGraphEdges_Methods[] = {
  {"IsTypeOf", PyvtkSplineGraphEdges_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplineGraphEdges_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplineGraphEdges_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSplineGraphEdges\nC++: static vtkSplineGraphEdges *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplineGraphEdges_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSplineGraphEdges\nC++: vtkSplineGraphEdges *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSplineGraphEdges_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSplineGraphEdges_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSpline", PyvtkSplineGraphEdges_SetSpline, METH_VARARGS,
   "SetSpline(self, s:vtkSpline) -> None\nC++: virtual void SetSpline(vtkSpline *s)\n\nIf SplineType is CUSTOM, uses this spline.\n"},
  {"GetSpline", PyvtkSplineGraphEdges_GetSpline, METH_VARARGS,
   "GetSpline(self) -> vtkSpline\nC++: virtual vtkSpline *GetSpline()\n\n"},
  {"SetSplineType", PyvtkSplineGraphEdges_SetSplineType, METH_VARARGS,
   "SetSplineType(self, _arg:int) -> None\nC++: virtual void SetSplineType(int _arg)\n\nSpline type used by the filter. BSPLINE (0) - Use optimized\nb-spline (default). CUSTOM (1) - Use spline set with SetSpline.\n"},
  {"GetSplineType", PyvtkSplineGraphEdges_GetSplineType, METH_VARARGS,
   "GetSplineType(self) -> int\nC++: virtual int GetSplineType()\n\n"},
  {"SetNumberOfSubdivisions", PyvtkSplineGraphEdges_SetNumberOfSubdivisions, METH_VARARGS,
   "SetNumberOfSubdivisions(self, _arg:int) -> None\nC++: virtual void SetNumberOfSubdivisions(vtkIdType _arg)\n\nThe number of subdivisions in the spline.\n"},
  {"GetNumberOfSubdivisions", PyvtkSplineGraphEdges_GetNumberOfSubdivisions, METH_VARARGS,
   "GetNumberOfSubdivisions(self) -> int\nC++: virtual vtkIdType GetNumberOfSubdivisions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSplineGraphEdges_Doc =
  "vtkSplineGraphEdges - subsample graph edges to make smooth curves\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkSplineGraphEdges uses a vtkSpline to make edges into nicely\n"
  "sampled splines. By default, the filter will use an optimized\n"
  "b-spline. Otherwise, it will use a custom vtkSpline instance set by\n"
  "the user.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSplineGraphEdges_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkSplineGraphEdges", // tp_name
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
  PyvtkSplineGraphEdges_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplineGraphEdges_StaticNew()
{
  return vtkSplineGraphEdges::New();
}

PyObject *PyvtkSplineGraphEdges_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSplineGraphEdges_Type, PyvtkSplineGraphEdges_Methods,
    "vtkSplineGraphEdges",
 &PyvtkSplineGraphEdges_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BSPLINE", vtkSplineGraphEdges::BSPLINE },
        { "CUSTOM", vtkSplineGraphEdges::CUSTOM },
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

void PyVTKAddFile_vtkSplineGraphEdges(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplineGraphEdges_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplineGraphEdges", o) != 0)
  {
    Py_DECREF(o);
  }

}

