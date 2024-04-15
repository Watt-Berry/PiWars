// python wrapper for vtkResampleToImage
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResampleToImage.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResampleToImage(PyObject *dict); }
extern "C" { PyObject *PyvtkResampleToImage_ClassNew(); }


static PyObject *
PyvtkResampleToImage_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResampleToImage::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResampleToImage::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResampleToImage *tempr = vtkResampleToImage::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResampleToImage *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResampleToImage::NewInstance());

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
PyvtkResampleToImage_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResampleToImage::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResampleToImage::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  bool temp0 = false;
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
      op->vtkResampleToImage::SetUseInputBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetUseInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseInputBounds() :
      op->vtkResampleToImage::GetUseInputBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_UseInputBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOn();
    }
    else
    {
      op->vtkResampleToImage::UseInputBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_UseInputBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseInputBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseInputBoundsOff();
    }
    else
    {
      op->vtkResampleToImage::UseInputBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SetSamplingBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

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
      op->SetSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingBounds(temp0);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkResampleToImage_SetSamplingBounds_s1(self, args);
    case 1:
      return PyvtkResampleToImage_SetSamplingBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingBounds");
  return nullptr;
}


static PyObject *
PyvtkResampleToImage_GetSamplingBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSamplingBounds() :
      op->vtkResampleToImage::GetSamplingBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_SetSamplingDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

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
      op->SetSamplingDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSamplingDimensions(temp0);
    }
    else
    {
      op->vtkResampleToImage::SetSamplingDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResampleToImage_SetSamplingDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkResampleToImage_SetSamplingDimensions_s1(self, args);
    case 1:
      return PyvtkResampleToImage_SetSamplingDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSamplingDimensions");
  return nullptr;
}


static PyObject *
PyvtkResampleToImage_GetSamplingDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamplingDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSamplingDimensions() :
      op->vtkResampleToImage::GetSamplingDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkResampleToImage::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResampleToImage_GetMaskArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResampleToImage *op = static_cast<vtkResampleToImage *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetMaskArrayName() :
      op->vtkResampleToImage::GetMaskArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResampleToImage_Methods[] = {
  {"IsTypeOf", PyvtkResampleToImage_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResampleToImage_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResampleToImage_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResampleToImage\nC++: static vtkResampleToImage *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResampleToImage_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResampleToImage\nC++: vtkResampleToImage *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResampleToImage_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResampleToImage_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetUseInputBounds", PyvtkResampleToImage_SetUseInputBounds, METH_VARARGS,
   "SetUseInputBounds(self, _arg:bool) -> None\nC++: virtual void SetUseInputBounds(bool _arg)\n\nSet/Get if the filter should use Input bounds to sub-sample the\ndata. By default it is set to 1.\n"},
  {"GetUseInputBounds", PyvtkResampleToImage_GetUseInputBounds, METH_VARARGS,
   "GetUseInputBounds(self) -> bool\nC++: virtual bool GetUseInputBounds()\n\n"},
  {"UseInputBoundsOn", PyvtkResampleToImage_UseInputBoundsOn, METH_VARARGS,
   "UseInputBoundsOn(self) -> None\nC++: virtual void UseInputBoundsOn()\n\n"},
  {"UseInputBoundsOff", PyvtkResampleToImage_UseInputBoundsOff, METH_VARARGS,
   "UseInputBoundsOff(self) -> None\nC++: virtual void UseInputBoundsOff()\n\n"},
  {"SetSamplingBounds", PyvtkResampleToImage_SetSamplingBounds, METH_VARARGS,
   "SetSamplingBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetSamplingBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetSamplingBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetSamplingBounds(const double _arg[6])\n\nSet/Get sampling bounds. If (UseInputBounds == 1) then the\nsampling bounds won't be used.\n"},
  {"GetSamplingBounds", PyvtkResampleToImage_GetSamplingBounds, METH_VARARGS,
   "GetSamplingBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetSamplingBounds()\n\n"},
  {"SetSamplingDimensions", PyvtkResampleToImage_SetSamplingDimensions, METH_VARARGS,
   "SetSamplingDimensions(self, _arg1:int, _arg2:int, _arg3:int)\n    -> None\nC++: virtual void SetSamplingDimensions(int _arg1, int _arg2,\n    int _arg3)\nSetSamplingDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSamplingDimensions(const int _arg[3])\n\nSet/Get sampling dimension along each axis. Default will be\n[10,10,10]\n"},
  {"GetSamplingDimensions", PyvtkResampleToImage_GetSamplingDimensions, METH_VARARGS,
   "GetSamplingDimensions(self) -> (int, int, int)\nC++: virtual int *GetSamplingDimensions()\n\n"},
  {"GetOutput", PyvtkResampleToImage_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data for this algorithm.\n"},
  {"GetMaskArrayName", PyvtkResampleToImage_GetMaskArrayName, METH_VARARGS,
   "GetMaskArrayName(self) -> str\nC++: const char *GetMaskArrayName()\n\nGet the name of the valid-points mask array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResampleToImage_Doc =
  "vtkResampleToImage - sample dataset on a uniform grid\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkPResampleToImage is a filter that resamples the input dataset on a\n"
  "uniform grid. It internally uses vtkProbeFilter to do the probing.\n"
  "@sa\n"
  "vtkProbeFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResampleToImage_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkResampleToImage", // tp_name
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
  PyvtkResampleToImage_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResampleToImage_StaticNew()
{
  return vtkResampleToImage::New();
}

PyObject *PyvtkResampleToImage_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResampleToImage_Type, PyvtkResampleToImage_Methods,
    "vtkResampleToImage",
 &PyvtkResampleToImage_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResampleToImage(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResampleToImage_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResampleToImage", o) != 0)
  {
    Py_DECREF(o);
  }

}

