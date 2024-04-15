// python wrapper for vtkImageSlabReslice
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSlabReslice.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSlabReslice(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSlabReslice_ClassNew(); }


static PyObject *
PyvtkImageSlabReslice_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSlabReslice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSlabReslice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSlabReslice *tempr = vtkImageSlabReslice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSlabReslice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSlabReslice::NewInstance());

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
PyvtkImageSlabReslice_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSlabReslice::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSlabReslice::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlendMode(temp0);
    }
    else
    {
      op->vtkImageSlabReslice::SetBlendMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetBlendMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlendMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlendMode() :
      op->vtkImageSlabReslice::GetBlendMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMin();
    }
    else
    {
      op->vtkImageSlabReslice::SetBlendModeToMin();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMax();
    }
    else
    {
      op->vtkImageSlabReslice::SetBlendModeToMax();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetBlendModeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlendModeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBlendModeToMean();
    }
    else
    {
      op->vtkImageSlabReslice::SetBlendModeToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetNumBlendSamplePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumBlendSamplePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumBlendSamplePoints() :
      op->vtkImageSlabReslice::GetNumBlendSamplePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabThickness(temp0);
    }
    else
    {
      op->vtkImageSlabReslice::SetSlabThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetSlabThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabThickness() :
      op->vtkImageSlabReslice::GetSlabThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_SetSlabResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlabResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSlabResolution(temp0);
    }
    else
    {
      op->vtkImageSlabReslice::SetSlabResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSlabReslice_GetSlabResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlabResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSlabReslice *op = static_cast<vtkImageSlabReslice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSlabResolution() :
      op->vtkImageSlabReslice::GetSlabResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSlabReslice_Methods[] = {
  {"IsTypeOf", PyvtkImageSlabReslice_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSlabReslice_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSlabReslice_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSlabReslice\nC++: static vtkImageSlabReslice *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSlabReslice_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSlabReslice\nC++: vtkImageSlabReslice *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSlabReslice_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSlabReslice_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBlendMode", PyvtkImageSlabReslice_SetBlendMode, METH_VARARGS,
   "SetBlendMode(self, _arg:int) -> None\nC++: virtual void SetBlendMode(int _arg)\n\nSet/Get the blend mode. Default is MIP (ie Max)\n"},
  {"GetBlendMode", PyvtkImageSlabReslice_GetBlendMode, METH_VARARGS,
   "GetBlendMode(self) -> int\nC++: virtual int GetBlendMode()\n\n"},
  {"SetBlendModeToMin", PyvtkImageSlabReslice_SetBlendModeToMin, METH_VARARGS,
   "SetBlendModeToMin(self) -> None\nC++: void SetBlendModeToMin()\n\n"},
  {"SetBlendModeToMax", PyvtkImageSlabReslice_SetBlendModeToMax, METH_VARARGS,
   "SetBlendModeToMax(self) -> None\nC++: void SetBlendModeToMax()\n\n"},
  {"SetBlendModeToMean", PyvtkImageSlabReslice_SetBlendModeToMean, METH_VARARGS,
   "SetBlendModeToMean(self) -> None\nC++: void SetBlendModeToMean()\n\n"},
  {"GetNumBlendSamplePoints", PyvtkImageSlabReslice_GetNumBlendSamplePoints, METH_VARARGS,
   "GetNumBlendSamplePoints(self) -> int\nC++: virtual int GetNumBlendSamplePoints()\n\nNumber of sample points used across the slab cross-section. If\nequal to 1, this ends up being a thin reslice through the data\na.k.a. vtkImageReslice\n"},
  {"SetSlabThickness", PyvtkImageSlabReslice_SetSlabThickness, METH_VARARGS,
   "SetSlabThickness(self, _arg:float) -> None\nC++: virtual void SetSlabThickness(double _arg)\n\nSlabThickness of slab in world coords. SlabThickness must be\nnon-zero and positive.\n"},
  {"GetSlabThickness", PyvtkImageSlabReslice_GetSlabThickness, METH_VARARGS,
   "GetSlabThickness(self) -> float\nC++: virtual double GetSlabThickness()\n\n"},
  {"SetSlabResolution", PyvtkImageSlabReslice_SetSlabResolution, METH_VARARGS,
   "SetSlabResolution(self, _arg:float) -> None\nC++: virtual void SetSlabResolution(double _arg)\n\nSpacing between slabs in world units. (Number of Slices, ie\nsamples to blend is computed from SlabThickness and\nSlabResolution).\n"},
  {"GetSlabResolution", PyvtkImageSlabReslice_GetSlabResolution, METH_VARARGS,
   "GetSlabResolution(self) -> float\nC++: virtual double GetSlabResolution()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSlabReslice_Doc =
  "vtkImageSlabReslice - Thick slab reformat through data.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "This class derives from vtkImageResliceBase. Much like\n"
  "vtkImageReslice, it reslices the data. It is multi-threaded. It takes\n"
  "a three dimensional image as input and produces a two dimensional\n"
  "thick MPR along some direction.\n\n"
  "The class reslices the thick slab using a blending function.\n"
  "Supported blending functions are Minimum Intensity blend through the\n"
  "slab, maximum intensity blend and a Mean (average) intensity of\n"
  "values across the slab.\n\n"
  "The user can adjust the thickness of the slab by using the method\n"
  "SetSlabThickness. The distance between sample points used for\n"
  "blending across the thickness of the slab is controlled by the method\n"
  "SetSlabResolution. These two methods determine the number of slices\n"
  "used across the slab for blending, which is computed as {(2 x\n"
  "(int)(0.5 x SlabThickness/SlabResolution)) + 1}. This value may be\n"
  "queried via GetNumBlendSamplePoints() and is always >= 1.\n\n"
  "Much like vtkImageReslice, the reslice axes direction cosines may be\n"
  "set via the methods SetResliceAxes or SetResliceAxesDirectionCosines.\n"
  "The output spacing is controlled by SetOutputSpacing and the output\n"
  "origin is controlled by SetOutputOrigin. The default value to be set\n"
  "on pixels that lie outside the volume when reformatting is controlled\n"
  "by SetBackgroundColor or SetBackgroundLevel. The\n"
  "SetResliceAxesOrigin() method can also be used to provide an (x,y,z)\n"
  "point that the slice will pass through.\n"
  "@sa\n"
  "vtkImageReslice\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSlabReslice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageSlabReslice", // tp_name
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
  PyvtkImageSlabReslice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSlabReslice_StaticNew()
{
  return vtkImageSlabReslice::New();
}

PyObject *PyvtkImageSlabReslice_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSlabReslice_Type, PyvtkImageSlabReslice_Methods,
    "vtkImageSlabReslice",
 &PyvtkImageSlabReslice_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageReslice");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSlabReslice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSlabReslice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSlabReslice", o) != 0)
  {
    Py_DECREF(o);
  }

}

