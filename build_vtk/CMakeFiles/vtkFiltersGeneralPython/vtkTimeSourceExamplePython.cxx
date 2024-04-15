// python wrapper for vtkTimeSourceExample
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTimeSourceExample.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTimeSourceExample(PyObject *dict); }
extern "C" { PyObject *PyvtkTimeSourceExample_ClassNew(); }


static PyObject *
PyvtkTimeSourceExample_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTimeSourceExample::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTimeSourceExample::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTimeSourceExample *tempr = vtkTimeSourceExample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeSourceExample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTimeSourceExample::NewInstance());

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
PyvtkTimeSourceExample_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTimeSourceExample::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTimeSourceExample::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetAnalytic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnalytic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnalytic(temp0);
    }
    else
    {
      op->vtkTimeSourceExample::SetAnalytic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalyticMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalyticMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnalyticMinValue() :
      op->vtkTimeSourceExample::GetAnalyticMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalyticMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalyticMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnalyticMaxValue() :
      op->vtkTimeSourceExample::GetAnalyticMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetAnalytic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnalytic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAnalytic() :
      op->vtkTimeSourceExample::GetAnalytic());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_AnalyticOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyticOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnalyticOn();
    }
    else
    {
      op->vtkTimeSourceExample::AnalyticOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_AnalyticOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnalyticOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnalyticOff();
    }
    else
    {
      op->vtkTimeSourceExample::AnalyticOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetXAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXAmplitude(temp0);
    }
    else
    {
      op->vtkTimeSourceExample::SetXAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetXAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXAmplitude() :
      op->vtkTimeSourceExample::GetXAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetYAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYAmplitude(temp0);
    }
    else
    {
      op->vtkTimeSourceExample::SetYAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetYAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYAmplitude() :
      op->vtkTimeSourceExample::GetYAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_SetGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGrowing(temp0);
    }
    else
    {
      op->vtkTimeSourceExample::SetGrowing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGrowingMinValue() :
      op->vtkTimeSourceExample::GetGrowingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGrowingMaxValue() :
      op->vtkTimeSourceExample::GetGrowingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GetGrowing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrowing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGrowing() :
      op->vtkTimeSourceExample::GetGrowing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GrowingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowingOn();
    }
    else
    {
      op->vtkTimeSourceExample::GrowingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTimeSourceExample_GrowingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GrowingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTimeSourceExample *op = static_cast<vtkTimeSourceExample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GrowingOff();
    }
    else
    {
      op->vtkTimeSourceExample::GrowingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTimeSourceExample_Methods[] = {
  {"IsTypeOf", PyvtkTimeSourceExample_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTimeSourceExample_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTimeSourceExample_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTimeSourceExample\nC++: static vtkTimeSourceExample *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTimeSourceExample_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTimeSourceExample\nC++: vtkTimeSourceExample *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTimeSourceExample_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTimeSourceExample_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAnalytic", PyvtkTimeSourceExample_SetAnalytic, METH_VARARGS,
   "SetAnalytic(self, _arg:int) -> None\nC++: virtual void SetAnalytic(vtkTypeBool _arg)\n\nWhen off (the default) this source produces a discrete set of\nvalues. When on, this source produces a value analytically for\nany queried time.\n"},
  {"GetAnalyticMinValue", PyvtkTimeSourceExample_GetAnalyticMinValue, METH_VARARGS,
   "GetAnalyticMinValue(self) -> int\nC++: virtual vtkTypeBool GetAnalyticMinValue()\n\n"},
  {"GetAnalyticMaxValue", PyvtkTimeSourceExample_GetAnalyticMaxValue, METH_VARARGS,
   "GetAnalyticMaxValue(self) -> int\nC++: virtual vtkTypeBool GetAnalyticMaxValue()\n\n"},
  {"GetAnalytic", PyvtkTimeSourceExample_GetAnalytic, METH_VARARGS,
   "GetAnalytic(self) -> int\nC++: virtual vtkTypeBool GetAnalytic()\n\n"},
  {"AnalyticOn", PyvtkTimeSourceExample_AnalyticOn, METH_VARARGS,
   "AnalyticOn(self) -> None\nC++: virtual void AnalyticOn()\n\n"},
  {"AnalyticOff", PyvtkTimeSourceExample_AnalyticOff, METH_VARARGS,
   "AnalyticOff(self) -> None\nC++: virtual void AnalyticOff()\n\n"},
  {"SetXAmplitude", PyvtkTimeSourceExample_SetXAmplitude, METH_VARARGS,
   "SetXAmplitude(self, _arg:float) -> None\nC++: virtual void SetXAmplitude(double _arg)\n\nWhen 0.0 (the default) this produces a data set that is\nstationary. When on the data set moves in the X/Y plane over a\nsin wave over time, amplified by the value.\n"},
  {"GetXAmplitude", PyvtkTimeSourceExample_GetXAmplitude, METH_VARARGS,
   "GetXAmplitude(self) -> float\nC++: virtual double GetXAmplitude()\n\n"},
  {"SetYAmplitude", PyvtkTimeSourceExample_SetYAmplitude, METH_VARARGS,
   "SetYAmplitude(self, _arg:float) -> None\nC++: virtual void SetYAmplitude(double _arg)\n\n"},
  {"GetYAmplitude", PyvtkTimeSourceExample_GetYAmplitude, METH_VARARGS,
   "GetYAmplitude(self) -> float\nC++: virtual double GetYAmplitude()\n\n"},
  {"SetGrowing", PyvtkTimeSourceExample_SetGrowing, METH_VARARGS,
   "SetGrowing(self, _arg:int) -> None\nC++: virtual void SetGrowing(vtkTypeBool _arg)\n\nWhen off (the default) this produces a single cell data set. When\non the number of cells (in the Y direction) grows and shrinks\nover time along a hat function.\n"},
  {"GetGrowingMinValue", PyvtkTimeSourceExample_GetGrowingMinValue, METH_VARARGS,
   "GetGrowingMinValue(self) -> int\nC++: virtual vtkTypeBool GetGrowingMinValue()\n\n"},
  {"GetGrowingMaxValue", PyvtkTimeSourceExample_GetGrowingMaxValue, METH_VARARGS,
   "GetGrowingMaxValue(self) -> int\nC++: virtual vtkTypeBool GetGrowingMaxValue()\n\n"},
  {"GetGrowing", PyvtkTimeSourceExample_GetGrowing, METH_VARARGS,
   "GetGrowing(self) -> int\nC++: virtual vtkTypeBool GetGrowing()\n\n"},
  {"GrowingOn", PyvtkTimeSourceExample_GrowingOn, METH_VARARGS,
   "GrowingOn(self) -> None\nC++: virtual void GrowingOn()\n\n"},
  {"GrowingOff", PyvtkTimeSourceExample_GrowingOff, METH_VARARGS,
   "GrowingOff(self) -> None\nC++: virtual void GrowingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTimeSourceExample_Doc =
  "vtkTimeSourceExample - no description provided.\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTimeSourceExample_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTimeSourceExample", // tp_name
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
  PyvtkTimeSourceExample_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTimeSourceExample_StaticNew()
{
  return vtkTimeSourceExample::New();
}

PyObject *PyvtkTimeSourceExample_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTimeSourceExample_Type, PyvtkTimeSourceExample_Methods,
    "vtkTimeSourceExample",
 &PyvtkTimeSourceExample_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTimeSourceExample(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTimeSourceExample_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTimeSourceExample", o) != 0)
  {
    Py_DECREF(o);
  }

}

