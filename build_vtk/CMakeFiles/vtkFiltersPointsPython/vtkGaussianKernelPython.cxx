// python wrapper for vtkGaussianKernel
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGaussianKernel.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGaussianKernel(PyObject *dict); }
extern "C" { PyObject *PyvtkGaussianKernel_ClassNew(); }

#ifndef DECLARED_PyvtkGeneralizedKernel_ClassNew
extern "C" { PyObject *PyvtkGeneralizedKernel_ClassNew(); }
#define DECLARED_PyvtkGeneralizedKernel_ClassNew
#endif

static PyObject *
PyvtkGaussianKernel_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGaussianKernel::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGaussianKernel::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGaussianKernel *tempr = vtkGaussianKernel::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGaussianKernel *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGaussianKernel::NewInstance());

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
PyvtkGaussianKernel_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGaussianKernel::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGaussianKernel::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

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
      op->vtkGaussianKernel::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_ComputeWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  vtkDoubleArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetVTKObject(temp3, "vtkDoubleArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2, temp3) :
      op->vtkGaussianKernel::ComputeWeights(temp0, temp1, temp2, temp3));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianKernel_ComputeWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkIdList *temp1 = nullptr;
  vtkDoubleArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkDoubleArray"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->ComputeWeights(temp0, temp1, temp2) :
      op->vtkGaussianKernel::ComputeWeights(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGaussianKernel_ComputeWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkGaussianKernel_ComputeWeights_s1(self, args);
    case 3:
      return PyvtkGaussianKernel_ComputeWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWeights");
  return nullptr;
}


static PyObject *
PyvtkGaussianKernel_SetSharpness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharpness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSharpness(temp0);
    }
    else
    {
      op->vtkGaussianKernel::SetSharpness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_GetSharpnessMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpnessMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpnessMinValue() :
      op->vtkGaussianKernel::GetSharpnessMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_GetSharpnessMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpnessMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpnessMaxValue() :
      op->vtkGaussianKernel::GetSharpnessMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGaussianKernel_GetSharpness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharpness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGaussianKernel *op = static_cast<vtkGaussianKernel *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSharpness() :
      op->vtkGaussianKernel::GetSharpness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGaussianKernel_Methods[] = {
  {"IsTypeOf", PyvtkGaussianKernel_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGaussianKernel_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGaussianKernel_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGaussianKernel\nC++: static vtkGaussianKernel *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGaussianKernel_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGaussianKernel\nC++: vtkGaussianKernel *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGaussianKernel_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGaussianKernel_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkGaussianKernel_Initialize, METH_VARARGS,
   "Initialize(self, loc:vtkAbstractPointLocator, ds:vtkDataSet,\n    pd:vtkPointData) -> None\nC++: void Initialize(vtkAbstractPointLocator *loc, vtkDataSet *ds,\n     vtkPointData *pd) override;\n\nInitialize the kernel. Overload the superclass to set up internal\ncomputational values.\n"},
  {"ComputeWeights", PyvtkGaussianKernel_ComputeWeights, METH_VARARGS,
   "ComputeWeights(self, x:[float, float, float], pIds:vtkIdList,\n    prob:vtkDoubleArray, weights:vtkDoubleArray) -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *prob, vtkDoubleArray *weights) override;\nComputeWeights(self, x:[float, float, float], pIds:vtkIdList,\n    weights:vtkDoubleArray) -> int\nC++: vtkIdType ComputeWeights(double x[3], vtkIdList *pIds,\n    vtkDoubleArray *weights) override;\n\nGiven a point x, a list of basis points pIds, and a probability\nweighting function prob, compute interpolation weights associated\nwith these basis points.  Note that basis points list pIds, the\nprobability weighting prob, and the weights array are provided by\nthe caller of the method, and may be dynamically resized as\nnecessary. The method returns the number of weights (pIds may be\nresized in some cases). Typically this method is called after\nComputeBasis(), although advanced users can invoke\nComputeWeights() and provide the interpolation basis points pIds\ndirectly. The probably weighting prob are numbers 0<=prob<=1\nwhich are multiplied against the interpolation weights before\nnormalization. They are estimates of local confidence of weights.\nThe prob may be nullptr in which all probabilities are considered\n=1.\n"},
  {"SetSharpness", PyvtkGaussianKernel_SetSharpness, METH_VARARGS,
   "SetSharpness(self, _arg:float) -> None\nC++: virtual void SetSharpness(double _arg)\n\nSet / Get the sharpness (i.e., falloff) of the Gaussian. By\ndefault Sharpness=2. As the sharpness increases the effects of\ndistant points are reduced.\n"},
  {"GetSharpnessMinValue", PyvtkGaussianKernel_GetSharpnessMinValue, METH_VARARGS,
   "GetSharpnessMinValue(self) -> float\nC++: virtual double GetSharpnessMinValue()\n\n"},
  {"GetSharpnessMaxValue", PyvtkGaussianKernel_GetSharpnessMaxValue, METH_VARARGS,
   "GetSharpnessMaxValue(self) -> float\nC++: virtual double GetSharpnessMaxValue()\n\n"},
  {"GetSharpness", PyvtkGaussianKernel_GetSharpness, METH_VARARGS,
   "GetSharpness(self) -> float\nC++: virtual double GetSharpness()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGaussianKernel_Doc =
  "vtkGaussianKernel - a spherical Gaussian interpolation kernel\n\n"
  "Superclass: vtkGeneralizedKernel\n\n"
  "vtkGaussianKernel is an interpolation kernel that simply returns the\n"
  "weights for all points found in the sphere defined by radius R. The\n"
  "weights are computed as: exp(-(s*r/R)^2) where r is the distance from\n"
  "the point to be interpolated to a neighboring point within R. The\n"
  "sharpness s simply affects the rate of fall off of the Gaussian. (A\n"
  "more general Gaussian kernel is available from\n"
  "vtkEllipsoidalGaussianKernel.)\n\n"
  "@warning\n"
  "The weights are normalized sp that SUM(Wi) = 1. If a neighbor point p\n"
  "precisely lies on the point to be interpolated, then the interpolated\n"
  "point takes on the values associated with p.\n\n"
  "@sa\n"
  "vtkPointInterpolator vtkInterpolationKernel\n"
  "vtkEllipsoidalGaussianKernel vtkVoronoiKernel vtkSPHKernel\n"
  "vtkShepardKernel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGaussianKernel_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkGaussianKernel", // tp_name
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
  PyvtkGaussianKernel_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGaussianKernel_StaticNew()
{
  return vtkGaussianKernel::New();
}

PyObject *PyvtkGaussianKernel_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGaussianKernel_Type, PyvtkGaussianKernel_Methods,
    "vtkGaussianKernel",
 &PyvtkGaussianKernel_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGeneralizedKernel_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGaussianKernel(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGaussianKernel_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGaussianKernel", o) != 0)
  {
    Py_DECREF(o);
  }

}

