// python wrapper for vtkCellDerivatives
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellDerivatives.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellDerivatives(PyObject *dict); }
extern "C" { PyObject *PyvtkCellDerivatives_ClassNew(); }


static PyObject *
PyvtkCellDerivatives_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellDerivatives::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellDerivatives::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellDerivatives *tempr = vtkCellDerivatives::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellDerivatives *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellDerivatives::NewInstance());

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
PyvtkCellDerivatives_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellDerivatives::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellDerivatives::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorMode(temp0);
    }
    else
    {
      op->vtkCellDerivatives::SetVectorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetVectorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorMode() :
      op->vtkCellDerivatives::GetVectorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToPassVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToPassVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToPassVectors();
    }
    else
    {
      op->vtkCellDerivatives::SetVectorModeToPassVectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToComputeGradient();
    }
    else
    {
      op->vtkCellDerivatives::SetVectorModeToComputeGradient();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetVectorModeToComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorModeToComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetVectorModeToComputeVorticity();
    }
    else
    {
      op->vtkCellDerivatives::SetVectorModeToComputeVorticity();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetVectorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorModeAsString() :
      op->vtkCellDerivatives::GetVectorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTensorMode(temp0);
    }
    else
    {
      op->vtkCellDerivatives::SetTensorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetTensorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTensorMode() :
      op->vtkCellDerivatives::GetTensorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToPassTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToPassTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTensorModeToPassTensors();
    }
    else
    {
      op->vtkCellDerivatives::SetTensorModeToPassTensors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToComputeGradient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToComputeGradient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTensorModeToComputeGradient();
    }
    else
    {
      op->vtkCellDerivatives::SetTensorModeToComputeGradient();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToComputeStrain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToComputeStrain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTensorModeToComputeStrain();
    }
    else
    {
      op->vtkCellDerivatives::SetTensorModeToComputeStrain();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_SetTensorModeToComputeGreenLagrangeStrain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensorModeToComputeGreenLagrangeStrain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTensorModeToComputeGreenLagrangeStrain();
    }
    else
    {
      op->vtkCellDerivatives::SetTensorModeToComputeGreenLagrangeStrain();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDerivatives_GetTensorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDerivatives *op = static_cast<vtkCellDerivatives *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTensorModeAsString() :
      op->vtkCellDerivatives::GetTensorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellDerivatives_Methods[] = {
  {"IsTypeOf", PyvtkCellDerivatives_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellDerivatives_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellDerivatives_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellDerivatives\nC++: static vtkCellDerivatives *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellDerivatives_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellDerivatives\nC++: vtkCellDerivatives *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellDerivatives_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellDerivatives_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVectorMode", PyvtkCellDerivatives_SetVectorMode, METH_VARARGS,
   "SetVectorMode(self, _arg:int) -> None\nC++: virtual void SetVectorMode(int _arg)\n\nControl how the filter works to generate vector cell data. You\ncan choose to pass the input cell vectors, compute the gradient\nof the input scalars, or extract the vorticity of the computed\nvector gradient tensor. By default (VectorModeToComputeGradient),\nthe filter will take the gradient of the input scalar data.\n"},
  {"GetVectorMode", PyvtkCellDerivatives_GetVectorMode, METH_VARARGS,
   "GetVectorMode(self) -> int\nC++: virtual int GetVectorMode()\n\n"},
  {"SetVectorModeToPassVectors", PyvtkCellDerivatives_SetVectorModeToPassVectors, METH_VARARGS,
   "SetVectorModeToPassVectors(self) -> None\nC++: void SetVectorModeToPassVectors()\n\n"},
  {"SetVectorModeToComputeGradient", PyvtkCellDerivatives_SetVectorModeToComputeGradient, METH_VARARGS,
   "SetVectorModeToComputeGradient(self) -> None\nC++: void SetVectorModeToComputeGradient()\n\n"},
  {"SetVectorModeToComputeVorticity", PyvtkCellDerivatives_SetVectorModeToComputeVorticity, METH_VARARGS,
   "SetVectorModeToComputeVorticity(self) -> None\nC++: void SetVectorModeToComputeVorticity()\n\n"},
  {"GetVectorModeAsString", PyvtkCellDerivatives_GetVectorModeAsString, METH_VARARGS,
   "GetVectorModeAsString(self) -> str\nC++: const char *GetVectorModeAsString()\n\n"},
  {"SetTensorMode", PyvtkCellDerivatives_SetTensorMode, METH_VARARGS,
   "SetTensorMode(self, _arg:int) -> None\nC++: virtual void SetTensorMode(int _arg)\n\nControl how the filter works to generate tensor cell data. You\ncan choose to pass the input cell tensors, compute the gradient\nof the input vectors, or compute the strain tensor (linearized or\nGreen-Lagrange strain)of the vector gradient tensor. By default\n(TensorModeToComputeGradient), the filter will take the gradient\nof the vector data to construct a tensor.\n"},
  {"GetTensorMode", PyvtkCellDerivatives_GetTensorMode, METH_VARARGS,
   "GetTensorMode(self) -> int\nC++: virtual int GetTensorMode()\n\n"},
  {"SetTensorModeToPassTensors", PyvtkCellDerivatives_SetTensorModeToPassTensors, METH_VARARGS,
   "SetTensorModeToPassTensors(self) -> None\nC++: void SetTensorModeToPassTensors()\n\n"},
  {"SetTensorModeToComputeGradient", PyvtkCellDerivatives_SetTensorModeToComputeGradient, METH_VARARGS,
   "SetTensorModeToComputeGradient(self) -> None\nC++: void SetTensorModeToComputeGradient()\n\n"},
  {"SetTensorModeToComputeStrain", PyvtkCellDerivatives_SetTensorModeToComputeStrain, METH_VARARGS,
   "SetTensorModeToComputeStrain(self) -> None\nC++: void SetTensorModeToComputeStrain()\n\n"},
  {"SetTensorModeToComputeGreenLagrangeStrain", PyvtkCellDerivatives_SetTensorModeToComputeGreenLagrangeStrain, METH_VARARGS,
   "SetTensorModeToComputeGreenLagrangeStrain(self) -> None\nC++: void SetTensorModeToComputeGreenLagrangeStrain()\n\n"},
  {"GetTensorModeAsString", PyvtkCellDerivatives_GetTensorModeAsString, METH_VARARGS,
   "GetTensorModeAsString(self) -> str\nC++: const char *GetTensorModeAsString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellDerivatives_Doc =
  "vtkCellDerivatives - compute derivatives of scalars and vectors\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellDerivatives is a filter that computes derivatives of scalars\n"
  "and vectors at the center of cells. You can choose to generate\n"
  "different output including the scalar gradient (a vector), computed\n"
  "tensor vorticity (a vector), gradient of input vectors (a tensor),\n"
  "and strain matrix (linearized or Green-Lagrange) of the input vectors\n"
  "(a tensor); or you may choose to pass data through to the output.\n\n"
  "Note that it is assumed that on input scalars and vector point data\n"
  "is available, which are then used to generate cell vectors and\n"
  "tensors. (The interpolation functions of the cells are used to\n"
  "compute the derivatives which is why point data is required.)\n\n"
  "Note that the tensor components used to be sent out in column, but\n"
  "they are now sent out not in row.\n\n"
  "@warning\n"
  "The computed derivatives are cell attribute data; you can convert\n"
  "them to point attribute data by using the vtkCellDataToPointData\n"
  "filter. Note that, due to the interpolation function used (obtained\n"
  "using 1/r**2 normalized sum), the derivatives calculated for polygons\n"
  "with more than 4 vertices are inaccurate in most cases.\n\n"
  "@warning\n"
  "The point data is passed through the filter to the output.\n\n"
  "@sa\n"
  "vtkVectorNorm\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellDerivatives_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCellDerivatives", // tp_name
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
  PyvtkCellDerivatives_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellDerivatives_StaticNew()
{
  return vtkCellDerivatives::New();
}

PyObject *PyvtkCellDerivatives_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellDerivatives_Type, PyvtkCellDerivatives_Methods,
    "vtkCellDerivatives",
 &PyvtkCellDerivatives_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellDerivatives(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellDerivatives_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellDerivatives", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_VECTOR_MODE_PASS_VECTORS", 0 },
        { "VTK_VECTOR_MODE_COMPUTE_GRADIENT", 1 },
        { "VTK_VECTOR_MODE_COMPUTE_VORTICITY", 2 },
        { "VTK_TENSOR_MODE_PASS_TENSORS", 0 },
        { "VTK_TENSOR_MODE_COMPUTE_GRADIENT", 1 },
        { "VTK_TENSOR_MODE_COMPUTE_STRAIN", 2 },
        { "VTK_TENSOR_MODE_COMPUTE_GREEN_LAGRANGE_STRAIN", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

