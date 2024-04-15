// python wrapper for vtkHyperTreeGridAxisReflection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridAxisReflection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridAxisReflection(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridAxisReflection_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridAxisReflection.AxisReflectionPlane", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridAxisReflection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridAxisReflection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridAxisReflection *tempr = vtkHyperTreeGridAxisReflection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridAxisReflection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridAxisReflection::NewInstance());

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
PyvtkHyperTreeGridAxisReflection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridAxisReflection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridAxisReflection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlaneMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMinValue() :
      op->vtkHyperTreeGridAxisReflection::GetPlaneMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlaneMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlaneMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlaneMaxValue() :
      op->vtkHyperTreeGridAxisReflection::GetPlaneMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkHyperTreeGridAxisReflection::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToX();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToX();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToY();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToY();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZ();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZ();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToXMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToXMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToYMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToYMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMin();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToXMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToXMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToXMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToXMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToYMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToYMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToYMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToYMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetPlaneToZMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlaneToZMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetPlaneToZMax();
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetPlaneToZMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_SetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkHyperTreeGridAxisReflection::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridAxisReflection_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridAxisReflection *op = static_cast<vtkHyperTreeGridAxisReflection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkHyperTreeGridAxisReflection::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridAxisReflection_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridAxisReflection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridAxisReflection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridAxisReflection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridAxisReflection\nC++: static vtkHyperTreeGridAxisReflection *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridAxisReflection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridAxisReflection\nC++: vtkHyperTreeGridAxisReflection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridAxisReflection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridAxisReflection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", PyvtkHyperTreeGridAxisReflection_SetPlane, METH_VARARGS,
   "SetPlane(self, _arg:int) -> None\nC++: virtual void SetPlane(int _arg)\n\nSet the normal of the plane to use as mirror.\n"},
  {"GetPlaneMinValue", PyvtkHyperTreeGridAxisReflection_GetPlaneMinValue, METH_VARARGS,
   "GetPlaneMinValue(self) -> int\nC++: virtual int GetPlaneMinValue()\n\n"},
  {"GetPlaneMaxValue", PyvtkHyperTreeGridAxisReflection_GetPlaneMaxValue, METH_VARARGS,
   "GetPlaneMaxValue(self) -> int\nC++: virtual int GetPlaneMaxValue()\n\n"},
  {"GetPlane", PyvtkHyperTreeGridAxisReflection_GetPlane, METH_VARARGS,
   "GetPlane(self) -> int\nC++: virtual int GetPlane()\n\n"},
  {"SetPlaneToX", PyvtkHyperTreeGridAxisReflection_SetPlaneToX, METH_VARARGS,
   "SetPlaneToX(self) -> None\nC++: void SetPlaneToX()\n\n"},
  {"SetPlaneToY", PyvtkHyperTreeGridAxisReflection_SetPlaneToY, METH_VARARGS,
   "SetPlaneToY(self) -> None\nC++: void SetPlaneToY()\n\n"},
  {"SetPlaneToZ", PyvtkHyperTreeGridAxisReflection_SetPlaneToZ, METH_VARARGS,
   "SetPlaneToZ(self) -> None\nC++: void SetPlaneToZ()\n\n"},
  {"SetPlaneToXMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToXMin, METH_VARARGS,
   "SetPlaneToXMin(self) -> None\nC++: void SetPlaneToXMin()\n\n"},
  {"SetPlaneToYMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToYMin, METH_VARARGS,
   "SetPlaneToYMin(self) -> None\nC++: void SetPlaneToYMin()\n\n"},
  {"SetPlaneToZMin", PyvtkHyperTreeGridAxisReflection_SetPlaneToZMin, METH_VARARGS,
   "SetPlaneToZMin(self) -> None\nC++: void SetPlaneToZMin()\n\n"},
  {"SetPlaneToXMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToXMax, METH_VARARGS,
   "SetPlaneToXMax(self) -> None\nC++: void SetPlaneToXMax()\n\n"},
  {"SetPlaneToYMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToYMax, METH_VARARGS,
   "SetPlaneToYMax(self) -> None\nC++: void SetPlaneToYMax()\n\n"},
  {"SetPlaneToZMax", PyvtkHyperTreeGridAxisReflection_SetPlaneToZMax, METH_VARARGS,
   "SetPlaneToZMax(self) -> None\nC++: void SetPlaneToZMax()\n\n"},
  {"SetCenter", PyvtkHyperTreeGridAxisReflection_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg:float) -> None\nC++: virtual void SetCenter(double _arg)\n\nIf the reflection plane is set to X, Y or Z, this variable is use\nto set the position of the plane.\n"},
  {"GetCenter", PyvtkHyperTreeGridAxisReflection_GetCenter, METH_VARARGS,
   "GetCenter(self) -> float\nC++: virtual double GetCenter()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridAxisReflection_Doc =
  "vtkHyperTreeGridAxisReflection - Reflect a hyper tree grid\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This filter reflect the cells of a hyper tree grid with respect to\n"
  "one of the planes parallel to the bounding box of the data set.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm vtkReflectionFilter\n\n"
  "@par Thanks: This class was written by Philippe Pebay based on a idea\n"
  "of Guenole Harel and Jacques-Bernard Lekien, 2016 This work was\n"
  "supported by Commissariat a l'Energie Atomique (CEA/DIF)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridAxisReflection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridAxisReflection", // tp_name
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
  PyvtkHyperTreeGridAxisReflection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridAxisReflection_StaticNew()
{
  return vtkHyperTreeGridAxisReflection::New();
}

PyObject *PyvtkHyperTreeGridAxisReflection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridAxisReflection_Type, PyvtkHyperTreeGridAxisReflection_Methods,
    "vtkHyperTreeGridAxisReflection",
 &PyvtkHyperTreeGridAxisReflection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type, "vtkHyperTreeGridAxisReflection.AxisReflectionPlane");

  o = (PyObject *)&PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_Type;
  if (PyDict_SetItemString(d, "AxisReflectionPlane", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    typedef vtkHyperTreeGridAxisReflection::AxisReflectionPlane cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[9] = {
        { "USE_X_MIN", vtkHyperTreeGridAxisReflection::USE_X_MIN },
        { "USE_Y_MIN", vtkHyperTreeGridAxisReflection::USE_Y_MIN },
        { "USE_Z_MIN", vtkHyperTreeGridAxisReflection::USE_Z_MIN },
        { "USE_X_MAX", vtkHyperTreeGridAxisReflection::USE_X_MAX },
        { "USE_Y_MAX", vtkHyperTreeGridAxisReflection::USE_Y_MAX },
        { "USE_Z_MAX", vtkHyperTreeGridAxisReflection::USE_Z_MAX },
        { "USE_X", vtkHyperTreeGridAxisReflection::USE_X },
        { "USE_Y", vtkHyperTreeGridAxisReflection::USE_Y },
        { "USE_Z", vtkHyperTreeGridAxisReflection::USE_Z },
      };

    o = PyvtkHyperTreeGridAxisReflection_AxisReflectionPlane_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridAxisReflection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridAxisReflection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridAxisReflection", o) != 0)
  {
    Py_DECREF(o);
  }

}

