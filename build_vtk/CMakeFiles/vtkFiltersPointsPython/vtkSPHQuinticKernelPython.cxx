// python wrapper for vtkSPHQuinticKernel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSPHQuinticKernel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSPHQuinticKernel(PyObject *dict); }
extern "C" { PyObject *PyvtkSPHQuinticKernel_ClassNew(); }

#ifndef DECLARED_PyvtkSPHKernel_ClassNew
extern "C" { PyObject *PyvtkSPHKernel_ClassNew(); }
#define DECLARED_PyvtkSPHKernel_ClassNew
#endif

static PyObject *
PyvtkSPHQuinticKernel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSPHQuinticKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSPHQuinticKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSPHQuinticKernel *tempr = vtkSPHQuinticKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSPHQuinticKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSPHQuinticKernel::NewInstance());

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
PyvtkSPHQuinticKernel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSPHQuinticKernel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSPHQuinticKernel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkPointData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkPointData"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSPHQuinticKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_ComputeFunctionWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeFunctionWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeFunctionWeight(temp0) :
      op->vtkSPHQuinticKernel::ComputeFunctionWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSPHQuinticKernel_ComputeDerivWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeDerivWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSPHQuinticKernel *op = static_cast<vtkSPHQuinticKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeDerivWeight(temp0) :
      op->vtkSPHQuinticKernel::ComputeDerivWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSPHQuinticKernel_Methods[] = {
  {"IsTypeOf", PyvtkSPHQuinticKernel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSPHQuinticKernel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSPHQuinticKernel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSPHQuinticKernel\nC++: static vtkSPHQuinticKernel *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSPHQuinticKernel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSPHQuinticKernel\nC++: vtkSPHQuinticKernel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSPHQuinticKernel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSPHQuinticKernel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkSPHQuinticKernel_Initialize, METH_VARARGS,
   "Initialize(self, loc:vtkAbstractPointLocator, ds:vtkDataSet,\n    pd:vtkPointData) -> None\nC++: void Initialize(vtkAbstractPointLocator *loc, vtkDataSet *ds,\n     vtkPointData *pd) override;\n\nProduce the computational parameters for the kernel. Invoke this\nmethod after setting initial values like SpatialStep.\n"},
  {"ComputeFunctionWeight", PyvtkSPHQuinticKernel_ComputeFunctionWeight, METH_VARARGS,
   "ComputeFunctionWeight(self, d:float) -> float\nC++: double ComputeFunctionWeight(const double d) override;\n\nCompute weighting factor given a normalized distance from a\nsample point.\n"},
  {"ComputeDerivWeight", PyvtkSPHQuinticKernel_ComputeDerivWeight, METH_VARARGS,
   "ComputeDerivWeight(self, d:float) -> float\nC++: double ComputeDerivWeight(const double d) override;\n\nCompute weighting factor for derivative quantities given a\nnormalized distance from a sample point.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSPHQuinticKernel_Doc =
  "vtkSPHQuinticKernel - a quintic SPH interpolation kernel\n\n"
  "Superclass: vtkSPHKernel\n\n"
  "vtkSPHQuinticKernel is an smooth particle hydrodynamics interpolation\n"
  "kernel as described by D.J. Price. This is a quintic formulation.\n\n"
  "@warning\n"
  "FOr more information see D.J. Price, Smoothed particle hydrodynamics\n"
  "and magnetohydrodynamics, J. Comput. Phys. 231:759-794, 2012.\n"
  "Especially equation 49.\n\n"
  "@par Acknowledgments: The following work has been generously\n"
  "supported by Altair Engineering and FluiDyna GmbH. Please contact\n"
  "Steve Cosgrove or Milos Stanic for more information.\n\n"
  "@sa\n"
  "vtkSPHKernel vtkSPHInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSPHQuinticKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkSPHQuinticKernel", // tp_name
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
  PyvtkSPHQuinticKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSPHQuinticKernel_StaticNew()
{
  return vtkSPHQuinticKernel::New();
}

PyObject *PyvtkSPHQuinticKernel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSPHQuinticKernel_Type, PyvtkSPHQuinticKernel_Methods,
    "vtkSPHQuinticKernel",
 &PyvtkSPHQuinticKernel_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkSPHKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSPHQuinticKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSPHQuinticKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSPHQuinticKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

