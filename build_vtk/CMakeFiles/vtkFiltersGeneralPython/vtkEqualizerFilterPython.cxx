// python wrapper for vtkEqualizerFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEqualizerFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEqualizerFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkEqualizerFilter_ClassNew(); }


static PyObject *
PyvtkEqualizerFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEqualizerFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEqualizerFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEqualizerFilter *tempr = vtkEqualizerFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEqualizerFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEqualizerFilter::NewInstance());

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
PyvtkEqualizerFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEqualizerFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEqualizerFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SetSamplingFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingFrequency(temp0);
    }
    else
    {
      op->vtkEqualizerFilter::SetSamplingFrequency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetSamplingFrequency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingFrequency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSamplingFrequency() :
      op->vtkEqualizerFilter::GetSamplingFrequency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SetAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllColumns(temp0);
    }
    else
    {
      op->vtkEqualizerFilter::SetAllColumns(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetAllColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllColumns() :
      op->vtkEqualizerFilter::GetAllColumns());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArray(temp0);
    }
    else
    {
      op->vtkEqualizerFilter::SetArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArray() :
      op->vtkEqualizerFilter::GetArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkEqualizerFilter::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkEqualizerFilter::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_SetSpectrumGain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpectrumGain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSpectrumGain(temp0);
    }
    else
    {
      op->vtkEqualizerFilter::SetSpectrumGain(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEqualizerFilter_GetSpectrumGain(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpectrumGain");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEqualizerFilter *op = static_cast<vtkEqualizerFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSpectrumGain() :
      op->vtkEqualizerFilter::GetSpectrumGain());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEqualizerFilter_Methods[] = {
  {"IsTypeOf", PyvtkEqualizerFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEqualizerFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEqualizerFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEqualizerFilter\nC++: static vtkEqualizerFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEqualizerFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEqualizerFilter\nC++: vtkEqualizerFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEqualizerFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEqualizerFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSamplingFrequency", PyvtkEqualizerFilter_SetSamplingFrequency, METH_VARARGS,
   "SetSamplingFrequency(self, _arg:int) -> None\nC++: virtual void SetSamplingFrequency(int _arg)\n\nSet / Get the sampling frequency of the original signal in Hz\nDefault value is: 1000\n"},
  {"GetSamplingFrequency", PyvtkEqualizerFilter_GetSamplingFrequency, METH_VARARGS,
   "GetSamplingFrequency(self) -> int\nC++: virtual int GetSamplingFrequency()\n\n"},
  {"SetAllColumns", PyvtkEqualizerFilter_SetAllColumns, METH_VARARGS,
   "SetAllColumns(self, _arg:bool) -> None\nC++: virtual void SetAllColumns(bool _arg)\n\nSet / Get a flag to process all columns of the table. If set to\ntrue, all columns of the table will be used. The \"SetArray()\"\nmethod will have no effect. Default value is: false\n"},
  {"GetAllColumns", PyvtkEqualizerFilter_GetAllColumns, METH_VARARGS,
   "GetAllColumns(self) -> bool\nC++: virtual bool GetAllColumns()\n\n"},
  {"SetArray", PyvtkEqualizerFilter_SetArray, METH_VARARGS,
   "SetArray(self, arg:str) -> None\nC++: virtual void SetArray(const char *arg)\n\nSet / Get the name of the column from which the data array is\ntaken\n"},
  {"GetArray", PyvtkEqualizerFilter_GetArray, METH_VARARGS,
   "GetArray(self) -> str\nC++: virtual const char *GetArray()\n\n"},
  {"SetPoints", PyvtkEqualizerFilter_SetPoints, METH_VARARGS,
   "SetPoints(self, points:str) -> None\nC++: void SetPoints(const std::string &points)\n\nSet / Get anchor points in the following format \"P1x,P1y;P2x,P2y; ...\nPNx,PNy;\" Default value is an empty string\n"},
  {"GetPoints", PyvtkEqualizerFilter_GetPoints, METH_VARARGS,
   "GetPoints(self) -> str\nC++: std::string GetPoints()\n\n"},
  {"SetSpectrumGain", PyvtkEqualizerFilter_SetSpectrumGain, METH_VARARGS,
   "SetSpectrumGain(self, _arg:int) -> None\nC++: virtual void SetSpectrumGain(int _arg)\n\nSet / Get the spectrum gain in dB Default value is: 0\n"},
  {"GetSpectrumGain", PyvtkEqualizerFilter_GetSpectrumGain, METH_VARARGS,
   "GetSpectrumGain(self) -> int\nC++: virtual int GetSpectrumGain()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEqualizerFilter_Doc =
  "vtkEqualizerFilter - implements an algorithm for digital signal\nprocessing\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "The vtkEqualizerFilter implements an algorithm that selectively\n"
  "corrects the signal amplitude depending on the frequency\n"
  "characteristics.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEqualizerFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkEqualizerFilter", // tp_name
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
  PyvtkEqualizerFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEqualizerFilter_StaticNew()
{
  return vtkEqualizerFilter::New();
}

PyObject *PyvtkEqualizerFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEqualizerFilter_Type, PyvtkEqualizerFilter_Methods,
    "vtkEqualizerFilter",
 &PyvtkEqualizerFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEqualizerFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEqualizerFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEqualizerFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

