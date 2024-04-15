// python wrapper for vtkSynchronizeTimeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSynchronizeTimeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSynchronizeTimeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSynchronizeTimeFilter_ClassNew(); }


static PyObject *
PyvtkSynchronizeTimeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSynchronizeTimeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizeTimeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSynchronizeTimeFilter *tempr = vtkSynchronizeTimeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizeTimeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizeTimeFilter::NewInstance());

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
PyvtkSynchronizeTimeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSynchronizeTimeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSynchronizeTimeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkSynchronizeTimeFilter::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_SetRelativeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelativeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelativeTolerance(temp0);
    }
    else
    {
      op->vtkSynchronizeTimeFilter::SetRelativeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_GetRelativeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeToleranceMinValue() :
      op->vtkSynchronizeTimeFilter::GetRelativeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_GetRelativeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeToleranceMaxValue() :
      op->vtkSynchronizeTimeFilter::GetRelativeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizeTimeFilter_GetRelativeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizeTimeFilter *op = static_cast<vtkSynchronizeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelativeTolerance() :
      op->vtkSynchronizeTimeFilter::GetRelativeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSynchronizeTimeFilter_Methods[] = {
  {"IsTypeOf", PyvtkSynchronizeTimeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSynchronizeTimeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSynchronizeTimeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSynchronizeTimeFilter\nC++: static vtkSynchronizeTimeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSynchronizeTimeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSynchronizeTimeFilter\nC++: vtkSynchronizeTimeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSynchronizeTimeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSynchronizeTimeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceConnection", PyvtkSynchronizeTimeFilter_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the input that we may potentially replace time steps\nwith. SetInputConnection() should be used for providing the data\nset that will actually be output from this filter.\n"},
  {"SetRelativeTolerance", PyvtkSynchronizeTimeFilter_SetRelativeTolerance, METH_VARARGS,
   "SetRelativeTolerance(self, _arg:float) -> None\nC++: virtual void SetRelativeTolerance(double _arg)\n\nSet/get the relative tolerance for comparing time step values to\nsee if they are close enough to be considered identical.\n"},
  {"GetRelativeToleranceMinValue", PyvtkSynchronizeTimeFilter_GetRelativeToleranceMinValue, METH_VARARGS,
   "GetRelativeToleranceMinValue(self) -> float\nC++: virtual double GetRelativeToleranceMinValue()\n\n"},
  {"GetRelativeToleranceMaxValue", PyvtkSynchronizeTimeFilter_GetRelativeToleranceMaxValue, METH_VARARGS,
   "GetRelativeToleranceMaxValue(self) -> float\nC++: virtual double GetRelativeToleranceMaxValue()\n\n"},
  {"GetRelativeTolerance", PyvtkSynchronizeTimeFilter_GetRelativeTolerance, METH_VARARGS,
   "GetRelativeTolerance(self) -> float\nC++: virtual double GetRelativeTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSynchronizeTimeFilter_Doc =
  "vtkSynchronizeTimeFilter - Set \"close\" time step values from the\nsecond input to the first\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Synchronize time step values in the first input to time step values\n"
  "in the second input that are considered close enough. The outputted\n"
  "data set is from the first input and the number of output time steps\n"
  "is also equal to the number of time steps in the first input. Time\n"
  "step values in the first input that are \"close\" to time step values\n"
  "in the second input are replaced with the value from the second\n"
  "input. Close is determined to be if the difference is less than\n"
  "RelativeTolerance multiplied by the time range of the first input.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSynchronizeTimeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSynchronizeTimeFilter", // tp_name
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
  PyvtkSynchronizeTimeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSynchronizeTimeFilter_StaticNew()
{
  return vtkSynchronizeTimeFilter::New();
}

PyObject *PyvtkSynchronizeTimeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSynchronizeTimeFilter_Type, PyvtkSynchronizeTimeFilter_Methods,
    "vtkSynchronizeTimeFilter",
 &PyvtkSynchronizeTimeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSynchronizeTimeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSynchronizeTimeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSynchronizeTimeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

