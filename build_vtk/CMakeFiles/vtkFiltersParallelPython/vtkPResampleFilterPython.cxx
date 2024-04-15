// python wrapper for vtkPResampleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPResampleFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPResampleFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPResampleFilter_ClassNew(); }


static PyObject *
PyvtkPResampleFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPResampleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPResampleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPResampleFilter *tempr = vtkPResampleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPResampleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPResampleFilter::NewInstance());

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
PyvtkPResampleFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPResampleFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPResampleFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPResampleFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseInputBounds(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetUseInputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_GetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseInputBounds() :
      op->vtkPResampleFilter::GetUseInputBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOn();
    }
    else
    {
      op->vtkPResampleFilter::UseInputBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_UseInputBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOff();
    }
    else
    {
      op->vtkPResampleFilter::UseInputBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomSamplingBounds(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetCustomSamplingBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetCustomSamplingBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomSamplingBounds");
  return nullptr;
}


static PyObject *
PyvtkPResampleFilter_GetCustomSamplingBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomSamplingBounds() :
      op->vtkPResampleFilter::GetCustomSamplingBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSamplingDimension(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPResampleFilter::SetSamplingDimension(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingDimension(temp0);
    }
    else
    {
      op->vtkPResampleFilter::SetSamplingDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPResampleFilter_SetSamplingDimension(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPResampleFilter_SetSamplingDimension_s1(self, args);
    case 1:
      return PyvtkPResampleFilter_SetSamplingDimension_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimension");
  return nullptr;
}


static PyObject *
PyvtkPResampleFilter_GetSamplingDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPResampleFilter *op = static_cast<vtkPResampleFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingDimension() :
      op->vtkPResampleFilter::GetSamplingDimension());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkPResampleFilter_Methods[] = {
  {"IsTypeOf", PyvtkPResampleFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPResampleFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPResampleFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPResampleFilter\nC++: static vtkPResampleFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPResampleFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPResampleFilter\nC++: vtkPResampleFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPResampleFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPResampleFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkPResampleFilter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet and get the controller.\n"},
  {"GetController", PyvtkPResampleFilter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetUseInputBounds", PyvtkPResampleFilter_SetUseInputBounds, METH_VARARGS,
   "SetUseInputBounds(self, _arg:int) -> None\nC++: virtual void SetUseInputBounds(vtkTypeBool _arg)\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"GetUseInputBounds", PyvtkPResampleFilter_GetUseInputBounds, METH_VARARGS,
   "GetUseInputBounds(self) -> int\nC++: virtual vtkTypeBool GetUseInputBounds()\n\n"},
  {"UseInputBoundsOn", PyvtkPResampleFilter_UseInputBoundsOn, METH_VARARGS,
   "UseInputBoundsOn(self) -> None\nC++: virtual void UseInputBoundsOn()\n\n"},
  {"UseInputBoundsOff", PyvtkPResampleFilter_UseInputBoundsOff, METH_VARARGS,
   "UseInputBoundsOff(self) -> None\nC++: virtual void UseInputBoundsOff()\n\n"},
  {"SetCustomSamplingBounds", PyvtkPResampleFilter_SetCustomSamplingBounds, METH_VARARGS,
   "SetCustomSamplingBounds(self, _arg1:float, _arg2:float,\n    _arg3:float, _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetCustomSamplingBounds(double _arg1,\n    double _arg2, double _arg3, double _arg4, double _arg5,\n    double _arg6)\nSetCustomSamplingBounds(self, _arg:(float, float, float, float,\n    float, float)) -> None\nC++: virtual void SetCustomSamplingBounds(const double _arg[6])\n\nSet/Get sampling bounds. If (UseInputBounds == 1) then the\nsampling bounds won't be used.\n"},
  {"GetCustomSamplingBounds", PyvtkPResampleFilter_GetCustomSamplingBounds, METH_VARARGS,
   "GetCustomSamplingBounds(self) -> (float, float, float, float,\n    float, float)\nC++: virtual double *GetCustomSamplingBounds()\n\n"},
  {"SetSamplingDimension", PyvtkPResampleFilter_SetSamplingDimension, METH_VARARGS,
   "SetSamplingDimension(self, _arg1:int, _arg2:int, _arg3:int)\n    -> None\nC++: virtual void SetSamplingDimension(int _arg1, int _arg2,\n    int _arg3)\nSetSamplingDimension(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSamplingDimension(const int _arg[3])\n\nSet/Get sampling dimension along each axis. Default will be\n[10,10,10]\n"},
  {"GetSamplingDimension", PyvtkPResampleFilter_GetSamplingDimension, METH_VARARGS,
   "GetSamplingDimension(self) -> (int, int, int)\nC++: virtual int *GetSamplingDimension()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPResampleFilter_Doc =
  "vtkPResampleFilter - probe dataset in parallel using a vtkImageData\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPResampleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPResampleFilter", // tp_name
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
  PyvtkPResampleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPResampleFilter_StaticNew()
{
  return vtkPResampleFilter::New();
}

PyObject *PyvtkPResampleFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPResampleFilter_Type, PyvtkPResampleFilter_Methods,
    "vtkPResampleFilter",
 &PyvtkPResampleFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPResampleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPResampleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPResampleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

