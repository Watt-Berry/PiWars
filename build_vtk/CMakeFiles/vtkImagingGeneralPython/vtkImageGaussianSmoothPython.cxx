// python wrapper for vtkImageGaussianSmooth
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageGaussianSmooth.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageGaussianSmooth(PyObject *dict); }
extern "C" { PyObject *PyvtkImageGaussianSmooth_ClassNew(); }


static PyObject *
PyvtkImageGaussianSmooth_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageGaussianSmooth::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageGaussianSmooth::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageGaussianSmooth *tempr = vtkImageGaussianSmooth::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageGaussianSmooth *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageGaussianSmooth::NewInstance());

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
PyvtkImageGaussianSmooth_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageGaussianSmooth::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageGaussianSmooth::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      op->SetStandardDeviations(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviations(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviations(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviations(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviations_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviations");
  return nullptr;
}


static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStandardDeviation(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStandardDeviation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      op->SetStandardDeviation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetStandardDeviation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetStandardDeviation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s1(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s2(self, args);
    case 3:
      return PyvtkImageGaussianSmooth_SetStandardDeviation_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStandardDeviation");
  return nullptr;
}


static PyObject *
PyvtkImageGaussianSmooth_GetStandardDeviations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStandardDeviations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStandardDeviations() :
      op->vtkImageGaussianSmooth::GetStandardDeviations());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      op->SetRadiusFactors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactors(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactors(temp0, temp1);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s1(self, args);
    case 1:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s2(self, args);
    case 2:
      return PyvtkImageGaussianSmooth_SetRadiusFactors_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRadiusFactors");
  return nullptr;
}


static PyObject *
PyvtkImageGaussianSmooth_SetRadiusFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusFactor(temp0);
    }
    else
    {
      op->vtkImageGaussianSmooth::SetRadiusFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetRadiusFactors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusFactors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRadiusFactors() :
      op->vtkImageGaussianSmooth::GetRadiusFactors());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_SetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

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
      op->vtkImageGaussianSmooth::SetDimensionality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageGaussianSmooth_GetDimensionality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensionality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageGaussianSmooth *op = static_cast<vtkImageGaussianSmooth *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimensionality() :
      op->vtkImageGaussianSmooth::GetDimensionality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageGaussianSmooth_Methods[] = {
  {"IsTypeOf", PyvtkImageGaussianSmooth_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageGaussianSmooth_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageGaussianSmooth_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageGaussianSmooth\nC++: static vtkImageGaussianSmooth *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageGaussianSmooth_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageGaussianSmooth\nC++: vtkImageGaussianSmooth *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageGaussianSmooth_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageGaussianSmooth_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStandardDeviations", PyvtkImageGaussianSmooth_SetStandardDeviations, METH_VARARGS,
   "SetStandardDeviations(self, _arg1:float, _arg2:float, _arg3:float)\n     -> None\nC++: virtual void SetStandardDeviations(double _arg1,\n    double _arg2, double _arg3)\nSetStandardDeviations(self, _arg:(float, float, float)) -> None\nC++: virtual void SetStandardDeviations(const double _arg[3])\nSetStandardDeviations(self, a:float, b:float) -> None\nC++: void SetStandardDeviations(double a, double b)\n\nSets/Gets the Standard deviation of the gaussian in pixel units.\n"},
  {"SetStandardDeviation", PyvtkImageGaussianSmooth_SetStandardDeviation, METH_VARARGS,
   "SetStandardDeviation(self, std:float) -> None\nC++: void SetStandardDeviation(double std)\nSetStandardDeviation(self, a:float, b:float) -> None\nC++: void SetStandardDeviation(double a, double b)\nSetStandardDeviation(self, a:float, b:float, c:float) -> None\nC++: void SetStandardDeviation(double a, double b, double c)\n\n"},
  {"GetStandardDeviations", PyvtkImageGaussianSmooth_GetStandardDeviations, METH_VARARGS,
   "GetStandardDeviations(self) -> (float, float, float)\nC++: virtual double *GetStandardDeviations()\n\n"},
  {"SetRadiusFactors", PyvtkImageGaussianSmooth_SetRadiusFactors, METH_VARARGS,
   "SetRadiusFactors(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetRadiusFactors(double _arg1, double _arg2,\n    double _arg3)\nSetRadiusFactors(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRadiusFactors(const double _arg[3])\nSetRadiusFactors(self, f:float, f2:float) -> None\nC++: void SetRadiusFactors(double f, double f2)\n\nSets/Gets the Radius Factors of the gaussian (no unit). The\nradius factors determine how far out the gaussian kernel will go\nbefore being clamped to zero.\n"},
  {"SetRadiusFactor", PyvtkImageGaussianSmooth_SetRadiusFactor, METH_VARARGS,
   "SetRadiusFactor(self, f:float) -> None\nC++: void SetRadiusFactor(double f)\n\n"},
  {"GetRadiusFactors", PyvtkImageGaussianSmooth_GetRadiusFactors, METH_VARARGS,
   "GetRadiusFactors(self) -> (float, float, float)\nC++: virtual double *GetRadiusFactors()\n\n"},
  {"SetDimensionality", PyvtkImageGaussianSmooth_SetDimensionality, METH_VARARGS,
   "SetDimensionality(self, _arg:int) -> None\nC++: virtual void SetDimensionality(int _arg)\n\nSet/Get the dimensionality of this filter. This determines\nwhether a one, two, or three dimensional gaussian is performed.\n"},
  {"GetDimensionality", PyvtkImageGaussianSmooth_GetDimensionality, METH_VARARGS,
   "GetDimensionality(self) -> int\nC++: virtual int GetDimensionality()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageGaussianSmooth_Doc =
  "vtkImageGaussianSmooth - Performs a gaussian convolution.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageGaussianSmooth implements a convolution of the input image\n"
  "with a gaussian. Supports from one to three dimensional convolutions.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageGaussianSmooth_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingGeneral.vtkImageGaussianSmooth", // tp_name
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
  PyvtkImageGaussianSmooth_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageGaussianSmooth_StaticNew()
{
  return vtkImageGaussianSmooth::New();
}

PyObject *PyvtkImageGaussianSmooth_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageGaussianSmooth_Type, PyvtkImageGaussianSmooth_Methods,
    "vtkImageGaussianSmooth",
 &PyvtkImageGaussianSmooth_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageGaussianSmooth(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageGaussianSmooth_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageGaussianSmooth", o) != 0)
  {
    Py_DECREF(o);
  }

}

