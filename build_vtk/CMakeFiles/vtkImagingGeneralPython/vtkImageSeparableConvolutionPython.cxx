// python wrapper for vtkImageSeparableConvolution
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSeparableConvolution.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSeparableConvolution(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSeparableConvolution_ClassNew(); }


static PyObject *
PyvtkImageSeparableConvolution_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSeparableConvolution::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSeparableConvolution::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSeparableConvolution *tempr = vtkImageSeparableConvolution::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSeparableConvolution *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSeparableConvolution::NewInstance());

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
PyvtkImageSeparableConvolution_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSeparableConvolution::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSeparableConvolution::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetXKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetXKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetXKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetXKernel() :
      op->vtkImageSeparableConvolution::GetXKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetYKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetYKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetYKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetYKernel() :
      op->vtkImageSeparableConvolution::GetYKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_SetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  vtkFloatArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFloatArray"))
  {
    if (ap.IsBound())
    {
      op->SetZKernel(temp0);
    }
    else
    {
      op->vtkImageSeparableConvolution::SetZKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetZKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetZKernel() :
      op->vtkImageSeparableConvolution::GetZKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSeparableConvolution_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSeparableConvolution *op = static_cast<vtkImageSeparableConvolution *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageSeparableConvolution::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSeparableConvolution_Methods[] = {
  {"IsTypeOf", PyvtkImageSeparableConvolution_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSeparableConvolution_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSeparableConvolution_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSeparableConvolution\nC++: static vtkImageSeparableConvolution *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSeparableConvolution_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSeparableConvolution\nC++: vtkImageSeparableConvolution *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSeparableConvolution_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSeparableConvolution_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXKernel", PyvtkImageSeparableConvolution_SetXKernel, METH_VARARGS,
   "SetXKernel(self, __a:vtkFloatArray) -> None\nC++: virtual void SetXKernel(vtkFloatArray *)\n\n"},
  {"GetXKernel", PyvtkImageSeparableConvolution_GetXKernel, METH_VARARGS,
   "GetXKernel(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetXKernel()\n\n"},
  {"SetYKernel", PyvtkImageSeparableConvolution_SetYKernel, METH_VARARGS,
   "SetYKernel(self, __a:vtkFloatArray) -> None\nC++: virtual void SetYKernel(vtkFloatArray *)\n\n"},
  {"GetYKernel", PyvtkImageSeparableConvolution_GetYKernel, METH_VARARGS,
   "GetYKernel(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetYKernel()\n\n"},
  {"SetZKernel", PyvtkImageSeparableConvolution_SetZKernel, METH_VARARGS,
   "SetZKernel(self, __a:vtkFloatArray) -> None\nC++: virtual void SetZKernel(vtkFloatArray *)\n\n"},
  {"GetZKernel", PyvtkImageSeparableConvolution_GetZKernel, METH_VARARGS,
   "GetZKernel(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetZKernel()\n\n"},
  {"GetMTime", PyvtkImageSeparableConvolution_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload standard modified time function. If kernel arrays are\nmodified, then this object is modified as well.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSeparableConvolution_Doc =
  "vtkImageSeparableConvolution - 3 1D convolutions on an image\n\n"
  "Superclass: vtkImageDecomposeFilter\n\n"
  "vtkImageSeparableConvolution performs a convolution along the X, Y,\n"
  "and Z axes of an image, based on the three different 1D convolution\n"
  "kernels.  The kernels must be of odd size, and are considered to be\n"
  "centered at (int)((kernelsize - 1) / 2.0 ).  If a kernel is nullptr,\n"
  "that dimension is skipped.  This filter is designed to efficiently\n"
  "convolve separable filters that can be decomposed into 1 or more 1D\n"
  "convolutions.  It also handles arbitrarily large kernel sizes, and\n"
  "uses edge replication to handle boundaries.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSeparableConvolution_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageSeparableConvolution", // tp_name
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
  PyvtkImageSeparableConvolution_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSeparableConvolution_StaticNew()
{
  return vtkImageSeparableConvolution::New();
}

PyObject *PyvtkImageSeparableConvolution_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSeparableConvolution_Type, PyvtkImageSeparableConvolution_Methods,
    "vtkImageSeparableConvolution",
 &PyvtkImageSeparableConvolution_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageDecomposeFilter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSeparableConvolution(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSeparableConvolution_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSeparableConvolution", o) != 0)
  {
    Py_DECREF(o);
  }

}

