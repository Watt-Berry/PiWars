// python wrapper for vtkImageWeightedSum
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageWeightedSum.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageWeightedSum(PyObject *dict); }
extern "C" { PyObject *PyvtkImageWeightedSum_ClassNew(); }


static PyObject *
PyvtkImageWeightedSum_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageWeightedSum::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageWeightedSum::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageWeightedSum *tempr = vtkImageWeightedSum::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageWeightedSum *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageWeightedSum::NewInstance());

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
PyvtkImageWeightedSum_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageWeightedSum::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageWeightedSum::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  vtkDoubleArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDoubleArray"))
  {
    if (ap.IsBound())
    {
      op->SetWeights(temp0);
    }
    else
    {
      op->vtkImageWeightedSum::SetWeights(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDoubleArray *tempr = (ap.IsBound() ?
      op->GetWeights() :
      op->vtkImageWeightedSum::GetWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  long long temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetWeight(temp0, temp1);
    }
    else
    {
      op->vtkImageWeightedSum::SetWeight(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeByWeight() :
      op->vtkImageWeightedSum::GetNormalizeByWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_SetNormalizeByWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormalizeByWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormalizeByWeight(temp0);
    }
    else
    {
      op->vtkImageWeightedSum::SetNormalizeByWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeightMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeightMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeByWeightMinValue() :
      op->vtkImageWeightedSum::GetNormalizeByWeightMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_GetNormalizeByWeightMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormalizeByWeightMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormalizeByWeightMaxValue() :
      op->vtkImageWeightedSum::GetNormalizeByWeightMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NormalizeByWeightOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOn();
    }
    else
    {
      op->vtkImageWeightedSum::NormalizeByWeightOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_NormalizeByWeightOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NormalizeByWeightOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NormalizeByWeightOff();
    }
    else
    {
      op->vtkImageWeightedSum::NormalizeByWeightOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageWeightedSum_CalculateTotalWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateTotalWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageWeightedSum *op = static_cast<vtkImageWeightedSum *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->CalculateTotalWeight() :
      op->vtkImageWeightedSum::CalculateTotalWeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageWeightedSum_Methods[] = {
  {"IsTypeOf", PyvtkImageWeightedSum_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageWeightedSum_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageWeightedSum_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageWeightedSum\nC++: static vtkImageWeightedSum *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageWeightedSum_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageWeightedSum\nC++: vtkImageWeightedSum *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageWeightedSum_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageWeightedSum_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWeights", PyvtkImageWeightedSum_SetWeights, METH_VARARGS,
   "SetWeights(self, __a:vtkDoubleArray) -> None\nC++: virtual void SetWeights(vtkDoubleArray *)\n\nThe weights control the contribution of each input to the sum.\nThey will be normalized to sum to 1 before filter execution.\n"},
  {"GetWeights", PyvtkImageWeightedSum_GetWeights, METH_VARARGS,
   "GetWeights(self) -> vtkDoubleArray\nC++: virtual vtkDoubleArray *GetWeights()\n\n"},
  {"SetWeight", PyvtkImageWeightedSum_SetWeight, METH_VARARGS,
   "SetWeight(self, id:int, weight:float) -> None\nC++: virtual void SetWeight(vtkIdType id, double weight)\n\nChange a specific weight. Reallocation is done\n"},
  {"GetNormalizeByWeight", PyvtkImageWeightedSum_GetNormalizeByWeight, METH_VARARGS,
   "GetNormalizeByWeight(self) -> int\nC++: virtual vtkTypeBool GetNormalizeByWeight()\n\nSetting NormalizeByWeight on will divide the final result by the\ntotal weight of the component functions. This process does not\notherwise normalize the weighted sum By default,\nNormalizeByWeight is on.\n"},
  {"SetNormalizeByWeight", PyvtkImageWeightedSum_SetNormalizeByWeight, METH_VARARGS,
   "SetNormalizeByWeight(self, _arg:int) -> None\nC++: virtual void SetNormalizeByWeight(vtkTypeBool _arg)\n\n"},
  {"GetNormalizeByWeightMinValue", PyvtkImageWeightedSum_GetNormalizeByWeightMinValue, METH_VARARGS,
   "GetNormalizeByWeightMinValue(self) -> int\nC++: virtual vtkTypeBool GetNormalizeByWeightMinValue()\n\n"},
  {"GetNormalizeByWeightMaxValue", PyvtkImageWeightedSum_GetNormalizeByWeightMaxValue, METH_VARARGS,
   "GetNormalizeByWeightMaxValue(self) -> int\nC++: virtual vtkTypeBool GetNormalizeByWeightMaxValue()\n\n"},
  {"NormalizeByWeightOn", PyvtkImageWeightedSum_NormalizeByWeightOn, METH_VARARGS,
   "NormalizeByWeightOn(self) -> None\nC++: virtual void NormalizeByWeightOn()\n\n"},
  {"NormalizeByWeightOff", PyvtkImageWeightedSum_NormalizeByWeightOff, METH_VARARGS,
   "NormalizeByWeightOff(self) -> None\nC++: virtual void NormalizeByWeightOff()\n\n"},
  {"CalculateTotalWeight", PyvtkImageWeightedSum_CalculateTotalWeight, METH_VARARGS,
   "CalculateTotalWeight(self) -> float\nC++: double CalculateTotalWeight()\n\nCompute the total value of all the weight\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageWeightedSum_Doc =
  "vtkImageWeightedSum - adds any number of images, weighting each\naccording to the weight set using this->SetWeights(i,w).\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "All weights are normalized so they will sum to 1. Images must have\n"
  "the same extents. Output is\n\n"
  "@par Thanks: The original author of this class is Lauren O'Donnell\n"
  "(MIT) for Slicer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageWeightedSum_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMath.vtkImageWeightedSum", // tp_name
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
  PyvtkImageWeightedSum_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageWeightedSum_StaticNew()
{
  return vtkImageWeightedSum::New();
}

PyObject *PyvtkImageWeightedSum_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageWeightedSum_Type, PyvtkImageWeightedSum_Methods,
    "vtkImageWeightedSum",
 &PyvtkImageWeightedSum_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageWeightedSum(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageWeightedSum_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageWeightedSum", o) != 0)
  {
    Py_DECREF(o);
  }

}

