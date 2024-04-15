// python wrapper for vtkExtractVOI
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractVOI.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractVOI(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractVOI_ClassNew(); }


static PyObject *
PyvtkExtractVOI_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractVOI::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractVOI::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractVOI *tempr = vtkExtractVOI::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractVOI *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractVOI::NewInstance());

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
PyvtkExtractVOI_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractVOI::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractVOI::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractVOI::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0);
    }
    else
    {
      op->vtkExtractVOI::SetVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractVOI_SetVOI_s1(self, args);
    case 1:
      return PyvtkExtractVOI_SetVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return nullptr;
}


static PyObject *
PyvtkExtractVOI_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkExtractVOI::GetVOI());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

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
      op->SetSampleRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtractVOI::SetSampleRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0);
    }
    else
    {
      op->vtkExtractVOI::SetSampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractVOI_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractVOI_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkExtractVOI_SetSampleRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return nullptr;
}


static PyObject *
PyvtkExtractVOI_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkExtractVOI::GetSampleRate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeBoundary(temp0);
    }
    else
    {
      op->vtkExtractVOI::SetIncludeBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkExtractVOI::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOn();
    }
    else
    {
      op->vtkExtractVOI::IncludeBoundaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractVOI_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractVOI *op = static_cast<vtkExtractVOI *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOff();
    }
    else
    {
      op->vtkExtractVOI::IncludeBoundaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractVOI_Methods[] = {
  {"IsTypeOf", PyvtkExtractVOI_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractVOI_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractVOI_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractVOI\nC++: static vtkExtractVOI *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractVOI_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractVOI\nC++: vtkExtractVOI *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractVOI_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractVOI_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVOI", PyvtkExtractVOI_SetVOI, METH_VARARGS,
   "SetVOI(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetVOI(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetVOI(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetVOI(const int _arg[6])\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured points dataset can be of any topological dimension\n(i.e., point, line, image, or volume).\n"},
  {"GetVOI", PyvtkExtractVOI_GetVOI, METH_VARARGS,
   "GetVOI(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetVOI()\n\n"},
  {"SetSampleRate", PyvtkExtractVOI_SetSampleRate, METH_VARARGS,
   "SetSampleRate(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetSampleRate(int _arg1, int _arg2, int _arg3)\nSetSampleRate(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSampleRate(const int _arg[3])\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input.  For example, if the SampleRate=(2,2,2), every\nother point will be selected, resulting in a volume 1/8th the\noriginal size.\n"},
  {"GetSampleRate", PyvtkExtractVOI_GetSampleRate, METH_VARARGS,
   "GetSampleRate(self) -> (int, int, int)\nC++: virtual int *GetSampleRate()\n\n"},
  {"SetIncludeBoundary", PyvtkExtractVOI_SetIncludeBoundary, METH_VARARGS,
   "SetIncludeBoundary(self, _arg:int) -> None\nC++: virtual void SetIncludeBoundary(vtkTypeBool _arg)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"GetIncludeBoundary", PyvtkExtractVOI_GetIncludeBoundary, METH_VARARGS,
   "GetIncludeBoundary(self) -> int\nC++: virtual vtkTypeBool GetIncludeBoundary()\n\n"},
  {"IncludeBoundaryOn", PyvtkExtractVOI_IncludeBoundaryOn, METH_VARARGS,
   "IncludeBoundaryOn(self) -> None\nC++: virtual void IncludeBoundaryOn()\n\n"},
  {"IncludeBoundaryOff", PyvtkExtractVOI_IncludeBoundaryOff, METH_VARARGS,
   "IncludeBoundaryOff(self) -> None\nC++: virtual void IncludeBoundaryOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractVOI_Doc =
  "vtkExtractVOI - select piece (e.g., volume of interest) and/or\nsubsample structured points dataset\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkExtractVOI is a filter that selects a portion of an input\n"
  "structured points dataset, or subsamples an input dataset. (The\n"
  "selected portion of interested is referred to as the Volume Of\n"
  "Interest, or VOI.) The output of this filter is a structured points\n"
  "dataset. The filter treats input data of any topological dimension\n"
  "(i.e., point, line, image, or volume) and can generate output data of\n"
  "any topological dimension.\n\n"
  "To use this filter set the VOI ivar which are i-j-k min/max indices\n"
  "that specify a rectangular region in the data. (Note that these are\n"
  "0-offset.) You can also specify a sampling rate to subsample the\n"
  "data.\n\n"
  "Typical applications of this filter are to extract a slice from a\n"
  "volume for image processing, subsampling large volumes to reduce data\n"
  "size, or extracting regions of a volume with interesting data.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkExtractGeometry vtkExtractGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractVOI_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkExtractVOI", // tp_name
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
  PyvtkExtractVOI_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractVOI_StaticNew()
{
  return vtkExtractVOI::New();
}

PyObject *PyvtkExtractVOI_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractVOI_Type, PyvtkExtractVOI_Methods,
    "vtkExtractVOI",
 &PyvtkExtractVOI_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractVOI(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractVOI_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractVOI", o) != 0)
  {
    Py_DECREF(o);
  }

}

