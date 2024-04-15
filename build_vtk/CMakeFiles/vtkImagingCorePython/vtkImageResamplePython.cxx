// python wrapper for vtkImageResample
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageResample.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResample(PyObject *dict); }
extern "C" { PyObject *PyvtkImageResample_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static PyObject *
PyvtkImageResample_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResample::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResample::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResample *tempr = vtkImageResample::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResample *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResample::NewInstance());

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
PyvtkImageResample_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageResample::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageResample::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResample::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageResample::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResample_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageResample_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageResample_SetAxisOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisOutputSpacing(temp0, temp1);
    }
    else
    {
      op->vtkImageResample::SetAxisOutputSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetMagnificationFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageResample::SetMagnificationFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetMagnificationFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetMagnificationFactors(temp0);
    }
    else
    {
      op->vtkImageResample::SetMagnificationFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageResample_SetMagnificationFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageResample_SetMagnificationFactors_s1(self, args);
    case 1:
      return PyvtkImageResample_SetMagnificationFactors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMagnificationFactors");
  return nullptr;
}


static PyObject *
PyvtkImageResample_GetMagnificationFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMagnificationFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMagnificationFactors() :
      op->vtkImageResample::GetMagnificationFactors());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAxisMagnificationFactor(temp0, temp1);
    }
    else
    {
      op->vtkImageResample::SetAxisMagnificationFactor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_GetAxisMagnificationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisMagnificationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
  {
    double tempr = (ap.IsBound() ?
      op->GetAxisMagnificationFactor(temp0, temp1) :
      op->vtkImageResample::GetAxisMagnificationFactor(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDimensionality(temp0);
    }
    else
    {
      op->vtkImageResample::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResample_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResample *op = static_cast<vtkImageResample *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageResample::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResample_Methods[] = {
  {"IsTypeOf", PyvtkImageResample_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResample_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResample_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageResample\nC++: static vtkImageResample *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResample_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageResample\nC++: vtkImageResample *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageResample_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageResample_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutputSpacing", PyvtkImageResample_SetOutputSpacing, METH_VARARGS,
   "SetOutputSpacing(self, sx:float, sy:float, sz:float) -> None\nC++: void SetOutputSpacing(double sx, double sy, double sz)\n    override;\nSetOutputSpacing(self, spacing:(float, float, float)) -> None\nC++: void SetOutputSpacing(const double spacing[3]) override;\n\nSet desired spacing. Zero is a reserved value indicating spacing\nhas not been set.\n"},
  {"SetAxisOutputSpacing", PyvtkImageResample_SetAxisOutputSpacing, METH_VARARGS,
   "SetAxisOutputSpacing(self, axis:int, spacing:float) -> None\nC++: void SetAxisOutputSpacing(int axis, double spacing)\n\n"},
  {"SetMagnificationFactors", PyvtkImageResample_SetMagnificationFactors, METH_VARARGS,
   "SetMagnificationFactors(self, fx:float, fy:float, fz:float)\n    -> None\nC++: void SetMagnificationFactors(double fx, double fy, double fz)\nSetMagnificationFactors(self, f:(float, float, float)) -> None\nC++: void SetMagnificationFactors(const double f[3])\n\nSet/Get Magnification factors. Zero is a reserved value\nindicating values have not been computed.\n"},
  {"GetMagnificationFactors", PyvtkImageResample_GetMagnificationFactors, METH_VARARGS,
   "GetMagnificationFactors(self) -> (float, float, float)\nC++: virtual double *GetMagnificationFactors()\n\n"},
  {"SetAxisMagnificationFactor", PyvtkImageResample_SetAxisMagnificationFactor, METH_VARARGS,
   "SetAxisMagnificationFactor(self, axis:int, factor:float) -> None\nC++: void SetAxisMagnificationFactor(int axis, double factor)\n\n"},
  {"GetAxisMagnificationFactor", PyvtkImageResample_GetAxisMagnificationFactor, METH_VARARGS,
   "GetAxisMagnificationFactor(self, axis:int,\n    inInfo:vtkInformation=...) -> float\nC++: double GetAxisMagnificationFactor(int axis,\n    vtkInformation *inInfo=nullptr)\n\nGet the computed magnification factor for a specific axis. The\ninput information is required to compute the value.\n"},
  {"SetDimensionality", PyvtkImageResample_SetDimensionality, METH_VARARGS,
   "SetDimensionality(self, _arg:int) -> None\nC++: virtual void SetDimensionality(int _arg)\n\nDimensionality is the number of axes which are considered during\nexecution. To process images dimensionality would be set to 2.\nThis has the same effect as setting the magnification of the\nthird axis to 1.0\n"},
  {"GetDimensionality", PyvtkImageResample_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageResample_Doc =
  "vtkImageResample - Resamples an image to be larger or smaller.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "This filter produces an output with different spacing (and extent)\n"
  "than the input.  Linear interpolation can be used to resample the\n"
  "data. The Output spacing can be set explicitly or relative to input\n"
  "spacing with the SetAxisMagnificationFactor method.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageResample_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageResample", // tp_name
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
  PyvtkImageResample_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResample_StaticNew()
{
  return vtkImageResample::New();
}

PyObject *PyvtkImageResample_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageResample_Type, PyvtkImageResample_Methods,
    "vtkImageResample",
 &PyvtkImageResample_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReslice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageResample(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResample_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResample", o) != 0)
  {
    Py_DECREF(o);
  }

}

