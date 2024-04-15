// python wrapper for vtkToImplicitRamerDouglasPeuckerStrategy
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkToImplicitStrategy.h"
#include "vtkSmartPointer.h"
#include "vtkToImplicitRamerDouglasPeuckerStrategy.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkToImplicitRamerDouglasPeuckerStrategy(PyObject *dict); }
extern "C" { PyObject *PyvtkToImplicitRamerDouglasPeuckerStrategy_ClassNew(); }

#ifndef DECLARED_PyvtkToImplicitStrategy_ClassNew
extern "C" { PyObject *PyvtkToImplicitStrategy_ClassNew(); }
#define DECLARED_PyvtkToImplicitStrategy_ClassNew
#endif

static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkToImplicitRamerDouglasPeuckerStrategy::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitRamerDouglasPeuckerStrategy *op = static_cast<vtkToImplicitRamerDouglasPeuckerStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkToImplicitRamerDouglasPeuckerStrategy::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkToImplicitRamerDouglasPeuckerStrategy *tempr = vtkToImplicitRamerDouglasPeuckerStrategy::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitRamerDouglasPeuckerStrategy *op = static_cast<vtkToImplicitRamerDouglasPeuckerStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkToImplicitRamerDouglasPeuckerStrategy *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkToImplicitRamerDouglasPeuckerStrategy::NewInstance());

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
PyvtkToImplicitRamerDouglasPeuckerStrategy_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkToImplicitRamerDouglasPeuckerStrategy::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitRamerDouglasPeuckerStrategy *op = static_cast<vtkToImplicitRamerDouglasPeuckerStrategy *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkToImplicitRamerDouglasPeuckerStrategy::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_Reduce(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitRamerDouglasPeuckerStrategy *op = static_cast<vtkToImplicitRamerDouglasPeuckerStrategy *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    vtkSmartPointer<vtkDataArray> tempr = (ap.IsBound() ?
      op->Reduce(temp0) :
      op->vtkToImplicitRamerDouglasPeuckerStrategy::Reduce(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkToImplicitRamerDouglasPeuckerStrategy_ClearCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkToImplicitRamerDouglasPeuckerStrategy *op = static_cast<vtkToImplicitRamerDouglasPeuckerStrategy *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCache();
    }
    else
    {
      op->vtkToImplicitRamerDouglasPeuckerStrategy::ClearCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkToImplicitRamerDouglasPeuckerStrategy_Methods[] = {
  {"IsTypeOf", PyvtkToImplicitRamerDouglasPeuckerStrategy_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkToImplicitRamerDouglasPeuckerStrategy_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkToImplicitRamerDouglasPeuckerStrategy_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkToImplicitRamerDouglasPeuckerStrategy\nC++: static vtkToImplicitRamerDouglasPeuckerStrategy *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkToImplicitRamerDouglasPeuckerStrategy_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkToImplicitRamerDouglasPeuckerStrategy\nC++: vtkToImplicitRamerDouglasPeuckerStrategy *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkToImplicitRamerDouglasPeuckerStrategy_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkToImplicitRamerDouglasPeuckerStrategy_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reduce", PyvtkToImplicitRamerDouglasPeuckerStrategy_Reduce, METH_VARARGS,
   "Reduce(self, __a:vtkDataArray) -> vtkDataArray\nC++: vtkSmartPointer<vtkDataArray> Reduce(vtkDataArray *)\n    override;\n\nReturn a reduced version of the input array\n"},
  {"ClearCache", PyvtkToImplicitRamerDouglasPeuckerStrategy_ClearCache, METH_VARARGS,
   "ClearCache(self) -> None\nC++: void ClearCache() override;\n\nDestroys intermediate result of Ramer-Douglas-Peucker algorithm\non last array passed to `EstimateReduction`\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkToImplicitRamerDouglasPeuckerStrategy_Doc =
  "vtkToImplicitRamerDouglasPeuckerStrategy - A strategy for creating\nconstant or affine by parts implicit arrays from explicit memory\narrays based on the Ramer-Douglas-Peucker algorithm(*).\n\n"
  "Superclass: vtkToImplicitStrategy\n\n"
  "(*)References:\n"
  "- https://en.wikipedia.org/wiki/Ramer%E2%80%93Douglas%E2%80%93Peucker_\n"
  "  algorithm\n"
  "- https://cartography-playground.gitlab.io/playgrounds/douglas-peucker\n"
  "  -algorithm/\n"
  "- Urs Ramer, An iterative procedure for the polygonal approximation\n"
  "  of plane curves, Computer Graphics and Image Processing, Volume 1,\n"
  "  Issue 3, 1972, Pages 244-256, ISSN 0146-664X,\n"
  "  https://doi.org/10.1016/S0146-664X(72)80017-0.\n"
  "  (https://www.sciencedirect.com/science/article/pii/S0146664X72800170\n"
  "  )\n"
  "- DOUGLAS, DAVID & PEUCKER, THOMAS. (1973). Algorithms for the\n"
  "  Reduction of the Number of Points Required to Represent a Digitized\n"
  "Line or Its Caricature. Cartographica: The International Journal for\n"
  "  Geographic Information and Geovisualization. 10. 112-122.\n"
  "  10.3138/FM57-6770-U75U-7727.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkToImplicitRamerDouglasPeuckerStrategy_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersReduction.vtkToImplicitRamerDouglasPeuckerStrategy", // tp_name
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
  PyvtkToImplicitRamerDouglasPeuckerStrategy_Doc, // tp_doc
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

static vtkObjectBase *PyvtkToImplicitRamerDouglasPeuckerStrategy_StaticNew()
{
  return vtkToImplicitRamerDouglasPeuckerStrategy::New();
}

PyObject *PyvtkToImplicitRamerDouglasPeuckerStrategy_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkToImplicitRamerDouglasPeuckerStrategy_Type, PyvtkToImplicitRamerDouglasPeuckerStrategy_Methods,
    "vtkToImplicitRamerDouglasPeuckerStrategy",
 &PyvtkToImplicitRamerDouglasPeuckerStrategy_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkToImplicitStrategy_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkToImplicitRamerDouglasPeuckerStrategy(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkToImplicitRamerDouglasPeuckerStrategy_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkToImplicitRamerDouglasPeuckerStrategy", o) != 0)
  {
    Py_DECREF(o);
  }

}

