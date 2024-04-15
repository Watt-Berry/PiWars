// python wrapper for vtkLoopBooleanPolyDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLoopBooleanPolyDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLoopBooleanPolyDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkLoopBooleanPolyDataFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkLoopBooleanPolyDataFilter.OperationType", // tp_name
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
PyObject *PyvtkLoopBooleanPolyDataFilter_OperationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkLoopBooleanPolyDataFilter.NoIntersectionOutputType", // tp_name
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
PyObject *PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLoopBooleanPolyDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLoopBooleanPolyDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLoopBooleanPolyDataFilter *tempr = vtkLoopBooleanPolyDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLoopBooleanPolyDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLoopBooleanPolyDataFilter::NewInstance());

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
PyvtkLoopBooleanPolyDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLoopBooleanPolyDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLoopBooleanPolyDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionPoints() :
      op->vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIntersectionLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIntersectionLines() :
      op->vtkLoopBooleanPolyDataFilter::GetNumberOfIntersectionLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetNoIntersectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNoIntersectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNoIntersectionOutput() :
      op->vtkLoopBooleanPolyDataFilter::GetNoIntersectionOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetNoIntersectionOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNoIntersectionOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNoIntersectionOutput(temp0);
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetNoIntersectionOutput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NoIntersectionOutputOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NoIntersectionOutputOn();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NoIntersectionOutputOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NoIntersectionOutputOff();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::NoIntersectionOutputOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMinValue() :
      op->vtkLoopBooleanPolyDataFilter::GetOperationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperationMaxValue() :
      op->vtkLoopBooleanPolyDataFilter::GetOperationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkLoopBooleanPolyDataFilter::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToUnion();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToUnion();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToIntersection();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToIntersection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetOperationToDifference(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDifference");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDifference();
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetOperationToDifference();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetStatus(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStatus");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStatus() :
      op->vtkLoopBooleanPolyDataFilter::GetStatus());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLoopBooleanPolyDataFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLoopBooleanPolyDataFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLoopBooleanPolyDataFilter *op = static_cast<vtkLoopBooleanPolyDataFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkLoopBooleanPolyDataFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLoopBooleanPolyDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkLoopBooleanPolyDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLoopBooleanPolyDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLoopBooleanPolyDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLoopBooleanPolyDataFilter\nC++: static vtkLoopBooleanPolyDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLoopBooleanPolyDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLoopBooleanPolyDataFilter\nC++: vtkLoopBooleanPolyDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLoopBooleanPolyDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLoopBooleanPolyDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfIntersectionPoints", PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionPoints, METH_VARARGS,
   "GetNumberOfIntersectionPoints(self) -> int\nC++: virtual int GetNumberOfIntersectionPoints()\n\nInteger describing the number of intersection points and lines\n"},
  {"GetNumberOfIntersectionLines", PyvtkLoopBooleanPolyDataFilter_GetNumberOfIntersectionLines, METH_VARARGS,
   "GetNumberOfIntersectionLines(self) -> int\nC++: virtual int GetNumberOfIntersectionLines()\n\n"},
  {"GetNoIntersectionOutput", PyvtkLoopBooleanPolyDataFilter_GetNoIntersectionOutput, METH_VARARGS,
   "GetNoIntersectionOutput(self) -> int\nC++: virtual int GetNoIntersectionOutput()\n\nONLY USED IF NO INTERSECTION BETWEEN SURFACES Variable to\ndetermine what is output if no intersection occurs. 0 = neither\n(default), 1 = first, 2 = second, 3 = both\n"},
  {"SetNoIntersectionOutput", PyvtkLoopBooleanPolyDataFilter_SetNoIntersectionOutput, METH_VARARGS,
   "SetNoIntersectionOutput(self, _arg:int) -> None\nC++: virtual void SetNoIntersectionOutput(int _arg)\n\n"},
  {"NoIntersectionOutputOn", PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOn, METH_VARARGS,
   "NoIntersectionOutputOn(self) -> None\nC++: virtual void NoIntersectionOutputOn()\n\n"},
  {"NoIntersectionOutputOff", PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputOff, METH_VARARGS,
   "NoIntersectionOutputOff(self) -> None\nC++: virtual void NoIntersectionOutputOff()\n\n"},
  {"SetOperation", PyvtkLoopBooleanPolyDataFilter_SetOperation, METH_VARARGS,
   "SetOperation(self, _arg:int) -> None\nC++: virtual void SetOperation(int _arg)\n\nSet the boolean operation to perform. Defaults to union.\n"},
  {"GetOperationMinValue", PyvtkLoopBooleanPolyDataFilter_GetOperationMinValue, METH_VARARGS,
   "GetOperationMinValue(self) -> int\nC++: virtual int GetOperationMinValue()\n\n"},
  {"GetOperationMaxValue", PyvtkLoopBooleanPolyDataFilter_GetOperationMaxValue, METH_VARARGS,
   "GetOperationMaxValue(self) -> int\nC++: virtual int GetOperationMaxValue()\n\n"},
  {"GetOperation", PyvtkLoopBooleanPolyDataFilter_GetOperation, METH_VARARGS,
   "GetOperation(self) -> int\nC++: virtual int GetOperation()\n\n"},
  {"SetOperationToUnion", PyvtkLoopBooleanPolyDataFilter_SetOperationToUnion, METH_VARARGS,
   "SetOperationToUnion(self) -> None\nC++: void SetOperationToUnion()\n\n"},
  {"SetOperationToIntersection", PyvtkLoopBooleanPolyDataFilter_SetOperationToIntersection, METH_VARARGS,
   "SetOperationToIntersection(self) -> None\nC++: void SetOperationToIntersection()\n\n"},
  {"SetOperationToDifference", PyvtkLoopBooleanPolyDataFilter_SetOperationToDifference, METH_VARARGS,
   "SetOperationToDifference(self) -> None\nC++: void SetOperationToDifference()\n\n"},
  {"GetStatus", PyvtkLoopBooleanPolyDataFilter_GetStatus, METH_VARARGS,
   "GetStatus(self) -> int\nC++: virtual int GetStatus()\n\nCheck the status of the filter after update. If the status is\nzero, there was an error in the operation. If status is one,\neverything went smoothly\n"},
  {"GetTolerance", PyvtkLoopBooleanPolyDataFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\nSet the tolerance for geometric tests\n"},
  {"SetTolerance", PyvtkLoopBooleanPolyDataFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLoopBooleanPolyDataFilter_Doc =
  "vtkLoopBooleanPolyDataFilter - Computes the boundary of the union,\nintersection, or difference volume computed from the volumes defined\nby two input surfaces.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "The two surfaces do not need to be manifold, but if they are not,\n"
  "unexpected results may be obtained. The resulting surface is\n"
  "available in the first output of the filter. The second output\n"
  "contains a set of polylines that represent the intersection between\n"
  "the two input surfaces. The filter uses\n"
  "vtkIntersectionPolyDataFilter. Must have information about the cells\n"
  "on mesh that the intersection lines touch. Filter assumes this\n"
  "information is given. The output result will have data about the\n"
  "Original Surface, BoundaryPoints, Boundary Cells, Free Edges, and Bad\n"
  "Triangles\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLoopBooleanPolyDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkLoopBooleanPolyDataFilter", // tp_name
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
  PyvtkLoopBooleanPolyDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLoopBooleanPolyDataFilter_StaticNew()
{
  return vtkLoopBooleanPolyDataFilter::New();
}

PyObject *PyvtkLoopBooleanPolyDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLoopBooleanPolyDataFilter_Type, PyvtkLoopBooleanPolyDataFilter_Methods,
    "vtkLoopBooleanPolyDataFilter",
 &PyvtkLoopBooleanPolyDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type);
  PyVTKEnum_Add(&PyvtkLoopBooleanPolyDataFilter_OperationType_Type, "vtkLoopBooleanPolyDataFilter.OperationType");

  o = (PyObject *)&PyvtkLoopBooleanPolyDataFilter_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type);
  PyVTKEnum_Add(&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type, "vtkLoopBooleanPolyDataFilter.NoIntersectionOutputType");

  o = (PyObject *)&PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_Type;
  if (PyDict_SetItemString(d, "NoIntersectionOutputType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkLoopBooleanPolyDataFilter::OperationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_UNION", vtkLoopBooleanPolyDataFilter::VTK_UNION },
        { "VTK_INTERSECTION", vtkLoopBooleanPolyDataFilter::VTK_INTERSECTION },
        { "VTK_DIFFERENCE", vtkLoopBooleanPolyDataFilter::VTK_DIFFERENCE },
      };

    o = PyvtkLoopBooleanPolyDataFilter_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkLoopBooleanPolyDataFilter::NoIntersectionOutputType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "VTK_NEITHER", vtkLoopBooleanPolyDataFilter::VTK_NEITHER },
        { "VTK_FIRST", vtkLoopBooleanPolyDataFilter::VTK_FIRST },
        { "VTK_SECOND", vtkLoopBooleanPolyDataFilter::VTK_SECOND },
        { "VTK_BOTH", vtkLoopBooleanPolyDataFilter::VTK_BOTH },
      };

    o = PyvtkLoopBooleanPolyDataFilter_NoIntersectionOutputType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLoopBooleanPolyDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLoopBooleanPolyDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLoopBooleanPolyDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

