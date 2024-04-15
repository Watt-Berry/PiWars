// python wrapper for vtkMath
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMath.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMath(PyObject *dict); }
extern "C" { PyObject *PyvtkMath_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMath_ConvolutionMode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkMath.ConvolutionMode", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkMath_ConvolutionMode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkMath_ConvolutionMode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkMath_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMath::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMath *tempr = vtkMath::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMath *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMath::NewInstance());

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
PyvtkMath_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMath::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMath *op = static_cast<vtkMath *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMath::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Pi(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Pi");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::Pi();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_RadiansFromDegrees(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RadiansFromDegrees");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkMath::RadiansFromDegrees(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_DegreesFromRadians(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DegreesFromRadians");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = vtkMath::DegreesFromRadians(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Round(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Round");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::Round(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Floor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Floor");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::Floor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Ceil(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Ceil");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::Ceil(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_CeilLog2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CeilLog2");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::CeilLog2(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_IsPowerOfTwo(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPowerOfTwo");

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkMath::IsPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_NearestPowerOfTwo(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NearestPowerOfTwo");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::NearestPowerOfTwo(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Factorial(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Factorial");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMath::Factorial(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Binomial(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Binomial");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = vtkMath::Binomial(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_BeginCombination(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BeginCombination");

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int *tempr = vtkMath::BeginCombination(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_NextCombination(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NextCombination");

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkMath::NextCombination(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_FreeCombination(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FreeCombination");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::FreeCombination(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_RandomSeed(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RandomSeed");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMath::RandomSeed(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GetSeed(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSeed");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkMath::GetSeed();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Random_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Random");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::Random();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Random_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Random");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMath::Random(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Random(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMath_Random_s1(self, args);
    case 2:
      return PyvtkMath_Random_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Random");
  return nullptr;
}


static PyObject *
PyvtkMath_Gaussian_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Gaussian");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::Gaussian();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Gaussian_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Gaussian");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMath::Gaussian(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Gaussian(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkMath_Gaussian_s1(self, args);
    case 2:
      return PyvtkMath_Gaussian_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Gaussian");
  return nullptr;
}


static PyObject *
PyvtkMath_Assign(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Assign");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::Assign(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Add(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Add");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::Add(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Subtract(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Subtract");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::Subtract(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_MultiplyScalar(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyScalar");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::MultiplyScalar(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_MultiplyScalar2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyScalar2D");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::MultiplyScalar2D(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Dot(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Dot");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::Dot(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Outer(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Outer");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Outer(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Cross(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Cross");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::Cross(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Norm_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMath::Norm(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Norm_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm");

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMath::Norm(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Norm(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_Norm_s1(self, args);
    case 1:
      return PyvtkMath_Norm_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Norm");
  return nullptr;
}


static PyObject *
PyvtkMath_Normalize(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkMath::Normalize(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Perpendiculars(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Perpendiculars");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::Perpendiculars(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_ProjectVector(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ProjectVector");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkMath::ProjectVector(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_ProjectVector2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ProjectVector2D");

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkMath::ProjectVector2D(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Distance2BetweenPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Distance2BetweenPoints");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::Distance2BetweenPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_AngleBetweenVectors(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AngleBetweenVectors");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::AngleBetweenVectors(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_SignedAngleBetweenVectors(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SignedAngleBetweenVectors");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    double tempr = vtkMath::SignedAngleBetweenVectors(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GaussianAmplitude_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianAmplitude");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMath::GaussianAmplitude(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_GaussianAmplitude_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianAmplitude");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = vtkMath::GaussianAmplitude(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_GaussianAmplitude(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_GaussianAmplitude_s1(self, args);
    case 3:
      return PyvtkMath_GaussianAmplitude_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GaussianAmplitude");
  return nullptr;
}


static PyObject *
PyvtkMath_GaussianWeight_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianWeight");

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = vtkMath::GaussianWeight(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_GaussianWeight_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GaussianWeight");

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = vtkMath::GaussianWeight(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_GaussianWeight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_GaussianWeight_s1(self, args);
    case 3:
      return PyvtkMath_GaussianWeight_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GaussianWeight");
  return nullptr;
}


static PyObject *
PyvtkMath_Dot2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Dot2D");

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::Dot2D(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Outer2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Outer2D");

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  static size_t size2[2] = { 2, 2 };
  double temp2[2][2];
  double save2[2][2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Outer2D(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Norm2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Norm2D");

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = vtkMath::Norm2D(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Normalize2D(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Normalize2D");

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    double tempr = vtkMath::Normalize2D(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Determinant2x2_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant2x2");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    double tempr = vtkMath::Determinant2x2(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Determinant2x2_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant2x2");

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::Determinant2x2(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Determinant2x2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkMath_Determinant2x2_s1(self, args);
    case 2:
      return PyvtkMath_Determinant2x2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant2x2");
  return nullptr;
}


static PyObject *
PyvtkMath_LUFactor3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LUFactor3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::LUFactor3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_LUSolve3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LUSolve3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  const size_t size1 = 3;
  int temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::LUSolve3x3(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_LinearSolve3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LinearSolve3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::LinearSolve3x3(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Multiply3x3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::Multiply3x3(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Multiply3x3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Multiply3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Multiply3x3(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMath_Multiply3x3_Methods[] = {
  {"Multiply3x3", PyvtkMath_Multiply3x3_s1, METH_VARARGS | METH_STATIC,
   "APP *d[3] *d *d"},
  {"Multiply3x3", PyvtkMath_Multiply3x3_s2, METH_VARARGS | METH_STATIC,
   "AAA *d[3] *d[3] *d[3]"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkMath_Multiply3x3(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkMath_Multiply3x3_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Multiply3x3");
  return nullptr;
}


static PyObject *
PyvtkMath_Transpose3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Transpose3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
  {
    vtkPythonArgs::Save(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Transpose3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(1, *temp1, 2, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Invert3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Invert3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
  {
    vtkPythonArgs::Save(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Invert3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(1, *temp1, 2, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Identity3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Identity3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  double save0[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    vtkPythonArgs::Save(*temp0, *save0, size0[0]*size0[1]);

    vtkMath::Identity3x3(temp0);

    if (vtkPythonArgs::HasChanged(*temp0, *save0, size0[0]*size0[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(0, *temp0, 2, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Determinant3x3_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetNArray(*temp0, 2, size0))
  {
    double tempr = vtkMath::Determinant3x3(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    double tempr = vtkMath::Determinant3x3(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Determinant3x3");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(9) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    double tempr = vtkMath::Determinant3x3(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMath_Determinant3x3(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return PyvtkMath_Determinant3x3_s1(self, args);
    case 3:
      return PyvtkMath_Determinant3x3_s2(self, args);
    case 9:
      return PyvtkMath_Determinant3x3_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Determinant3x3");
  return nullptr;
}


static PyObject *
PyvtkMath_QuaternionToMatrix3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuaternionToMatrix3x3");

  const size_t size0 = 4;
  double temp0[4];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetNArray(*temp1, 2, size1))
  {
    vtkPythonArgs::Save(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::QuaternionToMatrix3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(1, *temp1, 2, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Matrix3x3ToQuaternion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Matrix3x3ToQuaternion");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  const size_t size1 = 4;
  double temp1[4];
  double save1[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::Matrix3x3ToQuaternion(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_MultiplyQuaternion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MultiplyQuaternion");

  const size_t size0 = 4;
  double temp0[4];
  const size_t size1 = 4;
  double temp1[4];
  const size_t size2 = 4;
  double temp2[4];
  double save2[4];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::MultiplyQuaternion(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_RotateVectorByNormalizedQuaternion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RotateVectorByNormalizedQuaternion");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 4;
  double temp1[4];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::RotateVectorByNormalizedQuaternion(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_RotateVectorByWXYZ(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RotateVectorByWXYZ");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 4;
  double temp1[4];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::RotateVectorByWXYZ(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Orthogonalize3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Orthogonalize3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1))
  {
    vtkPythonArgs::Save(*temp1, *save1, size1[0]*size1[1]);

    vtkMath::Orthogonalize3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(1, *temp1, 2, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Diagonalize3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Diagonalize3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    vtkMath::Diagonalize3x3(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_SingularValueDecomposition3x3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SingularValueDecomposition3x3");

  static size_t size0[2] = { 3, 3 };
  double temp0[3][3];
  static size_t size1[2] = { 3, 3 };
  double temp1[3][3];
  double save1[3][3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  static size_t size3[2] = { 3, 3 };
  double temp3[3][3];
  double save3[3][3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetNArray(*temp0, 2, size0) &&
      ap.GetNArray(*temp1, 2, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetNArray(*temp3, 2, size3))
  {
    vtkPythonArgs::Save(*temp1, *save1, size1[0]*size1[1]);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(*temp3, *save3, size3[0]*size3[1]);

    vtkMath::SingularValueDecomposition3x3(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(*temp1, *save1, size1[0]*size1[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(1, *temp1, 2, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(*temp3, *save3, size3[0]*size3[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(3, *temp3, 2, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_SolveLinearSystemGEPP2x2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SolveLinearSystemGEPP2x2");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    int tempr = vtkMath::SolveLinearSystemGEPP2x2(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_RGBToHSV_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::RGBToHSV(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToHSV_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToHSV");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::RGBToHSV(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToHSV(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_RGBToHSV_s1(self, args);
    case 6:
      return PyvtkMath_RGBToHSV_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RGBToHSV");
  return nullptr;
}


static PyObject *
PyvtkMath_HSVToRGB_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::HSVToRGB(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_HSVToRGB_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HSVToRGB");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::HSVToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_HSVToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_HSVToRGB_s1(self, args);
    case 6:
      return PyvtkMath_HSVToRGB_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HSVToRGB");
  return nullptr;
}


static PyObject *
PyvtkMath_LabToXYZ_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToXYZ");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::LabToXYZ(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_LabToXYZ_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToXYZ");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::LabToXYZ(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_LabToXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_LabToXYZ_s1(self, args);
    case 6:
      return PyvtkMath_LabToXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LabToXYZ");
  return nullptr;
}


static PyObject *
PyvtkMath_XYZToLab_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToLab");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::XYZToLab(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_XYZToLab_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToLab");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::XYZToLab(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_XYZToLab(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_XYZToLab_s1(self, args);
    case 6:
      return PyvtkMath_XYZToLab_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "XYZToLab");
  return nullptr;
}


static PyObject *
PyvtkMath_XYZToRGB_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToRGB");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::XYZToRGB(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_XYZToRGB_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "XYZToRGB");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::XYZToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_XYZToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_XYZToRGB_s1(self, args);
    case 6:
      return PyvtkMath_XYZToRGB_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "XYZToRGB");
  return nullptr;
}


static PyObject *
PyvtkMath_RGBToXYZ_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToXYZ");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::RGBToXYZ(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToXYZ_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToXYZ");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::RGBToXYZ(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToXYZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_RGBToXYZ_s1(self, args);
    case 6:
      return PyvtkMath_RGBToXYZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RGBToXYZ");
  return nullptr;
}


static PyObject *
PyvtkMath_RGBToLab_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToLab");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::RGBToLab(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToLab_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RGBToLab");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::RGBToLab(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_RGBToLab(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_RGBToLab_s1(self, args);
    case 6:
      return PyvtkMath_RGBToLab_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RGBToLab");
  return nullptr;
}


static PyObject *
PyvtkMath_LabToRGB_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToRGB");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkMath::LabToRGB(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_LabToRGB_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LabToRGB");

  double temp0;
  double temp1;
  double temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkMath::LabToRGB(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_LabToRGB(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_LabToRGB_s1(self, args);
    case 6:
      return PyvtkMath_LabToRGB_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LabToRGB");
  return nullptr;
}


static PyObject *
PyvtkMath_UninitializeBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UninitializeBounds");

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::UninitializeBounds(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMath_AreBoundsInitialized(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AreBoundsInitialized");

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = vtkMath::AreBoundsInitialized(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_ClampValue_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValue");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::ClampValue(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_ClampValue_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValue");

  double temp0;
  const size_t size1 = 2;
  double temp1[2];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::ClampValue(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_ClampValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkMath_ClampValue_s1(self, args);
    case 3:
      return PyvtkMath_ClampValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClampValue");
  return nullptr;
}


static PyObject *
PyvtkMath_ClampValues_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValues");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  const size_t size2 = 2;
  double temp2[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkMath::ClampValues(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_ClampValues_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampValues");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  int temp1;
  const size_t size2 = 2;
  double temp2[2];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkMath::ClampValues(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMath_ClampValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkMath_ClampValues_s1(self, args);
    case 4:
      return PyvtkMath_ClampValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClampValues");
  return nullptr;
}


static PyObject *
PyvtkMath_ClampAndNormalizeValue(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ClampAndNormalizeValue");

  double temp0;
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    double tempr = vtkMath::ClampAndNormalizeValue(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GetScalarTypeFittingRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetScalarTypeFittingRange");

  double temp0;
  double temp1;
  double temp2 = 1.0;
  double temp3 = 0.0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    int tempr = vtkMath::GetScalarTypeFittingRange(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GetAdjustedScalarRange(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAdjustedScalarRange");

  vtkDataArray *temp0 = nullptr;
  int temp1;
  const size_t size2 = 2;
  double temp2[2];
  double save2[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkMath::GetAdjustedScalarRange(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_ExtentIsWithinOtherExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtentIsWithinOtherExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    int tempr = vtkMath::ExtentIsWithinOtherExtent(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_BoundsIsWithinOtherBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BoundsIsWithinOtherBounds");

  const size_t size0 = 6;
  double temp0[6];
  const size_t size1 = 6;
  double temp1[6];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    int tempr = vtkMath::BoundsIsWithinOtherBounds(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_PointIsWithinBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PointIsWithinBounds");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 6;
  double temp1[6];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    int tempr = vtkMath::PointIsWithinBounds(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_PlaneIntersectsAABB(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PlaneIntersectsAABB");

  const size_t size0 = 6;
  double temp0[6];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    int tempr = vtkMath::PlaneIntersectsAABB(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Solve3PointCircle(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Solve3PointCircle");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    double tempr = vtkMath::Solve3PointCircle(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Inf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Inf");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::Inf();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_NegInf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NegInf");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::NegInf();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_Nan(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Nan");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    double tempr = vtkMath::Nan();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_IsInf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsInf");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::IsInf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_IsNan(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNan");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMath::IsNan(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_IsFinite(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsFinite");

  double temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkMath::IsFinite(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_QuadraticRoot(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "QuadraticRoot");

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = vtkMath::QuadraticRoot(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_ComputeGCD(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeGCD");

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = vtkMath::ComputeGCD(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMath_GetPointAlongLine(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointAlongLine");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  double temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkMath::GetPointAlongLine(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMath_Methods[] = {
  {"IsTypeOf", PyvtkMath_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMath_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMath_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMath\nC++: static vtkMath *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMath_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMath\nC++: vtkMath *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMath_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMath_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Pi", PyvtkMath_Pi, METH_VARARGS,
   "Pi() -> float\nC++: static constexpr double Pi()\n\nA mathematical constant. This version is atan(1.0) * 4.0\n"},
  {"RadiansFromDegrees", PyvtkMath_RadiansFromDegrees, METH_VARARGS,
   "RadiansFromDegrees(degrees:float) -> float\nC++: static double RadiansFromDegrees(double degrees)\n\n"},
  {"DegreesFromRadians", PyvtkMath_DegreesFromRadians, METH_VARARGS,
   "DegreesFromRadians(radians:float) -> float\nC++: static double DegreesFromRadians(double radians)\n\n"},
  {"Round", PyvtkMath_Round, METH_VARARGS,
   "Round(f:float) -> int\nC++: static int Round(double f)\n\n"},
  {"Floor", PyvtkMath_Floor, METH_VARARGS,
   "Floor(x:float) -> int\nC++: static int Floor(double x)\n\nRounds a double to the nearest integer not greater than itself.\nThis is faster than floor() but provides undefined output on\noverflow.\n"},
  {"Ceil", PyvtkMath_Ceil, METH_VARARGS,
   "Ceil(x:float) -> int\nC++: static int Ceil(double x)\n\nRounds a double to the nearest integer not less than itself. This\nis faster than ceil() but provides undefined output on overflow.\n"},
  {"CeilLog2", PyvtkMath_CeilLog2, METH_VARARGS,
   "CeilLog2(x:int) -> int\nC++: static int CeilLog2(vtkTypeUInt64 x)\n\nGives the exponent of the lowest power of two not less than x. Or\nin mathspeak, return the smallest \"i\" for which 2^i >= x. If x is\nzero, then the return value will be zero.\n"},
  {"IsPowerOfTwo", PyvtkMath_IsPowerOfTwo, METH_VARARGS,
   "IsPowerOfTwo(x:int) -> bool\nC++: static bool IsPowerOfTwo(vtkTypeUInt64 x)\n\nReturns true if integer is a power of two.\n"},
  {"NearestPowerOfTwo", PyvtkMath_NearestPowerOfTwo, METH_VARARGS,
   "NearestPowerOfTwo(x:int) -> int\nC++: static int NearestPowerOfTwo(int x)\n\nCompute the nearest power of two that is not less than x. The\nreturn value is 1 if x is less than or equal to zero, and is\nVTK_INT_MIN if result is too large to fit in an int.\n"},
  {"Factorial", PyvtkMath_Factorial, METH_VARARGS,
   "Factorial(N:int) -> int\nC++: static vtkTypeInt64 Factorial(int N)\n\nCompute N factorial, N! = N*(N-1) * (N-2)...*3*2*1. 0! is taken\nto be 1.\n"},
  {"Binomial", PyvtkMath_Binomial, METH_VARARGS,
   "Binomial(m:int, n:int) -> int\nC++: static vtkTypeInt64 Binomial(int m, int n)\n\nThe number of combinations of n objects from a pool of m objects\n(m>n). This is commonly known as \"m choose n\" and sometimes\ndenoted $_mC_n $ or $\\left(\\begin{array}{c}m \\\nn\\end{array}\\right) $.\n"},
  {"BeginCombination", PyvtkMath_BeginCombination, METH_VARARGS,
   "BeginCombination(m:int, n:int) -> Pointer\nC++: static int *BeginCombination(int m, int n)\n\nStart iterating over \"m choose n\" objects. This function returns\nan array of n integers, each from 0 to m-1. These integers\nrepresent the n items chosen from the set [0,m[.\n\n* You are responsible for calling vtkMath::FreeCombination() once\nthe iterator is no longer needed.\n\n* Warning: this gets large very quickly, especially when n nears\n  m/2!\n* (Hint: think of Pascal's triangle.)\n"},
  {"NextCombination", PyvtkMath_NextCombination, METH_VARARGS,
   "NextCombination(m:int, n:int, combination:[int, ...]) -> int\nC++: static int NextCombination(int m, int n, int *combination)\n\nGiven m, n, and a valid combination of n integers in the range\n[0,m[, this function alters the integers into the next\ncombination in a sequence of all combinations of n items from a\npool of m.\n\n* If the combination is the last item in the sequence on input,\n* then combination is unaltered and 0 is returned.\n* Otherwise, 1 is returned and combination is updated.\n"},
  {"FreeCombination", PyvtkMath_FreeCombination, METH_VARARGS,
   "FreeCombination(combination:[int, ...]) -> None\nC++: static void FreeCombination(int *combination)\n\nFree the \"iterator\" array created by vtkMath::BeginCombination.\n"},
  {"RandomSeed", PyvtkMath_RandomSeed, METH_VARARGS,
   "RandomSeed(s:int) -> None\nC++: static void RandomSeed(int s)\n\nInitialize seed value. NOTE: Random() has the bad property that\nthe first random number returned after RandomSeed() is called is\nproportional to the seed value! To help solve this, call\nRandomSeed() a few times inside seed. This doesn't ruin the\nrepeatability of Random().\n\n* DON'T USE Random(), RandomSeed(), GetSeed(), Gaussian()\n* THIS IS STATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR\n  REGRESSION TESTS)\n* THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY.\n* Instead, for a sequence of random numbers with a uniform\n  distribution\n* create a vtkMinimalStandardRandomSequence object.\n* For a sequence of random numbers with a gaussian/normal\n  distribution\n* create a vtkBoxMuellerRandomSequence object.\n"},
  {"GetSeed", PyvtkMath_GetSeed, METH_VARARGS,
   "GetSeed() -> int\nC++: static int GetSeed()\n\nReturn the current seed used by the random number generator.\n\n* DON'T USE Random(), RandomSeed(), GetSeed(), Gaussian()\n* THIS IS STATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR\n  REGRESSION TESTS)\n* THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY.\n* Instead, for a sequence of random numbers with a uniform\n  distribution\n* create a vtkMinimalStandardRandomSequence object.\n* For a sequence of random numbers with a gaussian/normal\n  distribution\n* create a vtkBoxMuellerRandomSequence object.\n"},
  {"Random", PyvtkMath_Random, METH_VARARGS,
   "Random() -> float\nC++: static double Random()\nRandom(min:float, max:float) -> float\nC++: static double Random(double min, double max)\n\nGenerate pseudo-random numbers distributed according to the\nuniform distribution between 0.0 and 1.0. This is used to provide\nportability across different systems.\n\n* DON'T USE Random(), RandomSeed(), GetSeed(), Gaussian()\n* THIS IS STATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR\n  REGRESSION TESTS)\n* THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY.\n* Instead, for a sequence of random numbers with a uniform\n  distribution\n* create a vtkMinimalStandardRandomSequence object.\n* For a sequence of random numbers with a gaussian/normal\n  distribution\n* create a vtkBoxMuellerRandomSequence object.\n"},
  {"Gaussian", PyvtkMath_Gaussian, METH_VARARGS,
   "Gaussian() -> float\nC++: static double Gaussian()\nGaussian(mean:float, std:float) -> float\nC++: static double Gaussian(double mean, double std)\n\nGenerate pseudo-random numbers distributed according to the\nstandard normal distribution.\n\n* DON'T USE Random(), RandomSeed(), GetSeed(), Gaussian()\n* THIS IS STATIC SO THIS IS PRONE TO ERRORS (SPECIALLY FOR\n  REGRESSION TESTS)\n* THIS IS HERE FOR BACKWARD COMPATIBILITY ONLY.\n* Instead, for a sequence of random numbers with a uniform\n  distribution\n* create a vtkMinimalStandardRandomSequence object.\n* For a sequence of random numbers with a gaussian/normal\n  distribution\n* create a vtkBoxMuellerRandomSequence object.\n"},
  {"Assign", PyvtkMath_Assign, METH_VARARGS,
   "Assign(a:(float, float, float), b:[float, float, float]) -> None\nC++: static void Assign(const double a[3], double b[3])\n\nAssign values to a 3-vector (double version). Result is stored in\nb according to b = a.\n"},
  {"Add", PyvtkMath_Add, METH_VARARGS,
   "Add(a:(float, float, float), b:(float, float, float), c:[float,\n    float, float]) -> None\nC++: static void Add(const double a[3], const double b[3],\n    double c[3])\n\nAddition of two 3-vectors (double version). Result is stored in c\naccording to c = a + b.\n"},
  {"Subtract", PyvtkMath_Subtract, METH_VARARGS,
   "Subtract(a:(float, float, float), b:(float, float, float),\n    c:[float, float, float]) -> None\nC++: static void Subtract(const double a[3], const double b[3],\n    double c[3])\n\nSubtraction of two 3-vectors (double version). Result is stored\nin c according to c = a - b.\n"},
  {"MultiplyScalar", PyvtkMath_MultiplyScalar, METH_VARARGS,
   "MultiplyScalar(a:[float, float, float], s:float) -> None\nC++: static void MultiplyScalar(double a[3], double s)\n\nMultiplies a 3-vector by a scalar (double version). This modifies\nthe input 3-vector.\n"},
  {"MultiplyScalar2D", PyvtkMath_MultiplyScalar2D, METH_VARARGS,
   "MultiplyScalar2D(a:[float, float], s:float) -> None\nC++: static void MultiplyScalar2D(double a[2], double s)\n\nMultiplies a 2-vector by a scalar (double version). This modifies\nthe input 2-vector.\n"},
  {"Dot", PyvtkMath_Dot, METH_VARARGS,
   "Dot(a:(float, float, float), b:(float, float, float)) -> float\nC++: static double Dot(const double a[3], const double b[3])\n\nDot product of two 3-vectors (double version).\n"},
  {"Outer", PyvtkMath_Outer, METH_VARARGS,
   "Outer(a:(float, float, float), b:(float, float, float), c:[[float,\n     float, float], [float, float, float], [float, float, float]])\n     -> None\nC++: static void Outer(const double a[3], const double b[3],\n    double c[3][3])\n\nOuter product of two 3-vectors (double version).\n"},
  {"Cross", PyvtkMath_Cross, METH_VARARGS,
   "Cross(a:(float, float, float), b:(float, float, float), c:[float,\n    float, float]) -> None\nC++: static void Cross(const double a[3], const double b[3],\n    double c[3])\n\nCross product of two 3-vectors. Result (a x b) is stored in c.\n(double version)\n"},
  {"Norm", PyvtkMath_Norm, METH_VARARGS,
   "Norm(x:(float, ...), n:int) -> float\nC++: static double Norm(const double *x, int n)\nNorm(v:(float, float, float)) -> float\nC++: static double Norm(const double v[3])\n\n"},
  {"Normalize", PyvtkMath_Normalize, METH_VARARGS,
   "Normalize(v:[float, float, float]) -> float\nC++: static double Normalize(double v[3])\n\nNormalize (in place) a 3-vector. Returns norm of vector (double\nversion).\n"},
  {"Perpendiculars", PyvtkMath_Perpendiculars, METH_VARARGS,
   "Perpendiculars(v1:(float, float, float), v2:[float, float, float],\n     v3:[float, float, float], theta:float) -> None\nC++: static void Perpendiculars(const double v1[3], double v2[3],\n    double v3[3], double theta)\n\nGiven a unit vector v1, find two unit vectors v2 and v3 such that\nv1 cross v2 = v3 (i.e. the vectors are perpendicular to each\nother). There is an infinite number of such vectors, specify an\nangle theta to choose one set.  If you want only one\nperpendicular vector, specify nullptr for v3.\n"},
  {"ProjectVector", PyvtkMath_ProjectVector, METH_VARARGS,
   "ProjectVector(a:(float, float, float), b:(float, float, float),\n    projection:[float, float, float]) -> bool\nC++: static bool ProjectVector(const double a[3],\n    const double b[3], double projection[3])\n\n"},
  {"ProjectVector2D", PyvtkMath_ProjectVector2D, METH_VARARGS,
   "ProjectVector2D(a:(float, float), b:(float, float),\n    projection:[float, float]) -> bool\nC++: static bool ProjectVector2D(const double a[2],\n    const double b[2], double projection[2])\n\n"},
  {"Distance2BetweenPoints", PyvtkMath_Distance2BetweenPoints, METH_VARARGS,
   "Distance2BetweenPoints(p1:(float, float, float), p2:(float, float,\n     float)) -> float\nC++: static double Distance2BetweenPoints(const double p1[3],\n    const double p2[3])\n\nCompute distance squared between two points p1 and p2. (double\nversion).\n"},
  {"AngleBetweenVectors", PyvtkMath_AngleBetweenVectors, METH_VARARGS,
   "AngleBetweenVectors(v1:(float, float, float), v2:(float, float,\n    float)) -> float\nC++: static double AngleBetweenVectors(const double v1[3],\n    const double v2[3])\n\nCompute angle in radians between two vectors.\n"},
  {"SignedAngleBetweenVectors", PyvtkMath_SignedAngleBetweenVectors, METH_VARARGS,
   "SignedAngleBetweenVectors(v1:(float, float, float), v2:(float,\n    float, float), vn:(float, float, float)) -> float\nC++: static double SignedAngleBetweenVectors(const double v1[3],\n    const double v2[3], const double vn[3])\n\nCompute signed angle in radians between two vectors with regard\nto a third orthogonal vector\n"},
  {"GaussianAmplitude", PyvtkMath_GaussianAmplitude, METH_VARARGS,
   "GaussianAmplitude(variance:float, distanceFromMean:float) -> float\nC++: static double GaussianAmplitude(double variance,\n    double distanceFromMean)\nGaussianAmplitude(mean:float, variance:float, position:float)\n    -> float\nC++: static double GaussianAmplitude(double mean, double variance,\n     double position)\n\nCompute the amplitude of a Gaussian function with mean=0 and\nspecified variance. That is, 1./(std::sqrt(2 Pi * variance)) *\nexp(-distanceFromMean^2/(2.*variance)).\n"},
  {"GaussianWeight", PyvtkMath_GaussianWeight, METH_VARARGS,
   "GaussianWeight(variance:float, distanceFromMean:float) -> float\nC++: static double GaussianWeight(double variance,\n    double distanceFromMean)\nGaussianWeight(mean:float, variance:float, position:float)\n    -> float\nC++: static double GaussianWeight(double mean, double variance,\n    double position)\n\nCompute the amplitude of an unnormalized Gaussian function with\nmean=0 and specified variance. That is,\nexp(-distanceFromMean^2/(2.*variance)). When distanceFromMean =\n0, this function returns 1.\n"},
  {"Dot2D", PyvtkMath_Dot2D, METH_VARARGS,
   "Dot2D(x:(float, float), y:(float, float)) -> float\nC++: static double Dot2D(const double x[2], const double y[2])\n\nDot product of two 2-vectors. (double version).\n"},
  {"Outer2D", PyvtkMath_Outer2D, METH_VARARGS,
   "Outer2D(x:(float, float), y:(float, float), A:[[float, float],\n    [float, float]]) -> None\nC++: static void Outer2D(const double x[2], const double y[2],\n    double A[2][2])\n\nOuter product of two 2-vectors (double version).\n"},
  {"Norm2D", PyvtkMath_Norm2D, METH_VARARGS,
   "Norm2D(x:(float, float)) -> float\nC++: static double Norm2D(const double x[2])\n\nCompute the norm of a 2-vector. (double version).\n"},
  {"Normalize2D", PyvtkMath_Normalize2D, METH_VARARGS,
   "Normalize2D(v:[float, float]) -> float\nC++: static double Normalize2D(double v[2])\n\nNormalize (in place) a 2-vector. Returns norm of vector. (double\nversion).\n"},
  {"Determinant2x2", PyvtkMath_Determinant2x2, METH_VARARGS,
   "Determinant2x2(a:float, b:float, c:float, d:float) -> float\nC++: static double Determinant2x2(double a, double b, double c,\n    double d)\nDeterminant2x2(c1:(float, float), c2:(float, float)) -> float\nC++: static double Determinant2x2(const double c1[2],\n    const double c2[2])\n\nCalculate the determinant of a 2x2 matrix: | a b | | c d |\n"},
  {"LUFactor3x3", PyvtkMath_LUFactor3x3, METH_VARARGS,
   "LUFactor3x3(A:[[float, float, float], [float, float, float],\n    [float, float, float]], index:[int, int, int]) -> None\nC++: static void LUFactor3x3(double A[3][3], int index[3])\n\n"},
  {"LUSolve3x3", PyvtkMath_LUSolve3x3, METH_VARARGS,
   "LUSolve3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), index:(int, int, int), x:[float, float,\n     float]) -> None\nC++: static void LUSolve3x3(const double A[3][3],\n    const int index[3], double x[3])\n\n"},
  {"LinearSolve3x3", PyvtkMath_LinearSolve3x3, METH_VARARGS,
   "LinearSolve3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), x:(float, float, float), y:[float,\n    float, float]) -> None\nC++: static void LinearSolve3x3(const double A[3][3],\n    const double x[3], double y[3])\n\n"},
  {"Multiply3x3", PyvtkMath_Multiply3x3, METH_VARARGS,
   "Multiply3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), v:(float, float, float), u:[float,\n    float, float]) -> None\nC++: static void Multiply3x3(const double A[3][3],\n    const double v[3], double u[3])\nMultiply3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), B:((float, float, float), (float,\n    float, float), (float, float, float)), C:[[float, float,\n    float], [float, float, float], [float, float, float]]) -> None\nC++: static void Multiply3x3(const double A[3][3],\n    const double B[3][3], double C[3][3])\n\n"},
  {"Transpose3x3", PyvtkMath_Transpose3x3, METH_VARARGS,
   "Transpose3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), AT:[[float, float, float], [float,\n    float, float], [float, float, float]]) -> None\nC++: static void Transpose3x3(const double A[3][3],\n    double AT[3][3])\n\n"},
  {"Invert3x3", PyvtkMath_Invert3x3, METH_VARARGS,
   "Invert3x3(A:((float, float, float), (float, float, float), (float,\n     float, float)), AI:[[float, float, float], [float, float,\n    float], [float, float, float]]) -> None\nC++: static void Invert3x3(const double A[3][3], double AI[3][3])\n\n"},
  {"Identity3x3", PyvtkMath_Identity3x3, METH_VARARGS,
   "Identity3x3(A:[[float, float, float], [float, float, float],\n    [float, float, float]]) -> None\nC++: static void Identity3x3(double A[3][3])\n\n"},
  {"Determinant3x3", PyvtkMath_Determinant3x3, METH_VARARGS,
   "Determinant3x3(A:((float, float, float), (float, float, float), (\n    float, float, float))) -> float\nC++: static double Determinant3x3(const double A[3][3])\nDeterminant3x3(c1:(float, float, float), c2:(float, float, float),\n     c3:(float, float, float)) -> float\nC++: static double Determinant3x3(const double c1[3],\n    const double c2[3], const double c3[3])\nDeterminant3x3(a1:float, a2:float, a3:float, b1:float, b2:float,\n    b3:float, c1:float, c2:float, c3:float) -> float\nC++: static double Determinant3x3(double a1, double a2, double a3,\n     double b1, double b2, double b3, double c1, double c2,\n    double c3)\n\n"},
  {"QuaternionToMatrix3x3", PyvtkMath_QuaternionToMatrix3x3, METH_VARARGS,
   "QuaternionToMatrix3x3(quat:(float, float, float, float),\n    A:[[float, float, float], [float, float, float], [float,\n    float, float]]) -> None\nC++: static void QuaternionToMatrix3x3(const double quat[4],\n    double A[3][3])\n\n"},
  {"Matrix3x3ToQuaternion", PyvtkMath_Matrix3x3ToQuaternion, METH_VARARGS,
   "Matrix3x3ToQuaternion(A:((float, float, float), (float, float,\n    float), (float, float, float)), quat:[float, float, float,\n    float]) -> None\nC++: static void Matrix3x3ToQuaternion(const double A[3][3],\n    double quat[4])\n\n"},
  {"MultiplyQuaternion", PyvtkMath_MultiplyQuaternion, METH_VARARGS,
   "MultiplyQuaternion(q1:(float, float, float, float), q2:(float,\n    float, float, float), q:[float, float, float, float]) -> None\nC++: static void MultiplyQuaternion(const double q1[4],\n    const double q2[4], double q[4])\n\n"},
  {"RotateVectorByNormalizedQuaternion", PyvtkMath_RotateVectorByNormalizedQuaternion, METH_VARARGS,
   "RotateVectorByNormalizedQuaternion(v:(float, float, float), q:(\n    float, float, float, float), r:[float, float, float]) -> None\nC++: static void RotateVectorByNormalizedQuaternion(\n    const double v[3], const double q[4], double r[3])\n\n"},
  {"RotateVectorByWXYZ", PyvtkMath_RotateVectorByWXYZ, METH_VARARGS,
   "RotateVectorByWXYZ(v:(float, float, float), q:(float, float,\n    float, float), r:[float, float, float]) -> None\nC++: static void RotateVectorByWXYZ(const double v[3],\n    const double q[4], double r[3])\n\n"},
  {"Orthogonalize3x3", PyvtkMath_Orthogonalize3x3, METH_VARARGS,
   "Orthogonalize3x3(A:((float, float, float), (float, float, float),\n    (float, float, float)), B:[[float, float, float], [float,\n    float, float], [float, float, float]]) -> None\nC++: static void Orthogonalize3x3(const double A[3][3],\n    double B[3][3])\n\n"},
  {"Diagonalize3x3", PyvtkMath_Diagonalize3x3, METH_VARARGS,
   "Diagonalize3x3(A:((float, float, float), (float, float, float), (\n    float, float, float)), w:[float, float, float], V:[[float,\n    float, float], [float, float, float], [float, float, float]])\n    -> None\nC++: static void Diagonalize3x3(const double A[3][3], double w[3],\n     double V[3][3])\n\n"},
  {"SingularValueDecomposition3x3", PyvtkMath_SingularValueDecomposition3x3, METH_VARARGS,
   "SingularValueDecomposition3x3(A:((float, float, float), (float,\n    float, float), (float, float, float)), U:[[float, float,\n    float], [float, float, float], [float, float, float]],\n    w:[float, float, float], VT:[[float, float, float], [float,\n    float, float], [float, float, float]]) -> None\nC++: static void SingularValueDecomposition3x3(\n    const double A[3][3], double U[3][3], double w[3],\n    double VT[3][3])\n\n"},
  {"SolveLinearSystemGEPP2x2", PyvtkMath_SolveLinearSystemGEPP2x2, METH_VARARGS,
   "SolveLinearSystemGEPP2x2(a00:float, a01:float, a10:float,\n    a11:float, b0:float, b1:float, x0:float, x1:float) -> int\nC++: static vtkTypeBool SolveLinearSystemGEPP2x2(double a00,\n    double a01, double a10, double a11, double b0, double b1,\n    double &x0, double &x1)\n\nSolve linear equation Ax = b using Gaussian Elimination with\nPartial Pivoting for a 2x2 system. If the matrix is found to be\nsingular within a small numerical tolerance close to machine\nprecision then 0 is returned. Note: Even if method succeeded the\nmatrix A could be close to singular.\n      The solution should be checked against relevant tolerance\ncriteria.\n"},
  {"RGBToHSV", PyvtkMath_RGBToHSV, METH_VARARGS,
   "RGBToHSV(rgb:(float, float, float), hsv:[float, float, float])\n    -> None\nC++: static void RGBToHSV(const double rgb[3], double hsv[3])\nRGBToHSV(r:float, g:float, b:float, h:[float, ...], s:[float,\n    ...], v:[float, ...]) -> None\nC++: static void RGBToHSV(double r, double g, double b, double *h,\n     double *s, double *v)\n\n"},
  {"HSVToRGB", PyvtkMath_HSVToRGB, METH_VARARGS,
   "HSVToRGB(hsv:(float, float, float), rgb:[float, float, float])\n    -> None\nC++: static void HSVToRGB(const double hsv[3], double rgb[3])\nHSVToRGB(h:float, s:float, v:float, r:[float, ...], g:[float,\n    ...], b:[float, ...]) -> None\nC++: static void HSVToRGB(double h, double s, double v, double *r,\n     double *g, double *b)\n\n"},
  {"LabToXYZ", PyvtkMath_LabToXYZ, METH_VARARGS,
   "LabToXYZ(lab:(float, float, float), xyz:[float, float, float])\n    -> None\nC++: static void LabToXYZ(const double lab[3], double xyz[3])\nLabToXYZ(L:float, a:float, b:float, x:[float, ...], y:[float,\n    ...], z:[float, ...]) -> None\nC++: static void LabToXYZ(double L, double a, double b, double *x,\n     double *y, double *z)\n\nConvert color from the CIE-L*ab system to CIE XYZ.\n"},
  {"XYZToLab", PyvtkMath_XYZToLab, METH_VARARGS,
   "XYZToLab(xyz:(float, float, float), lab:[float, float, float])\n    -> None\nC++: static void XYZToLab(const double xyz[3], double lab[3])\nXYZToLab(x:float, y:float, z:float, L:[float, ...], a:[float,\n    ...], b:[float, ...]) -> None\nC++: static void XYZToLab(double x, double y, double z, double *L,\n     double *a, double *b)\n\nConvert Color from the CIE XYZ system to CIE-L*ab.\n"},
  {"XYZToRGB", PyvtkMath_XYZToRGB, METH_VARARGS,
   "XYZToRGB(xyz:(float, float, float), rgb:[float, float, float])\n    -> None\nC++: static void XYZToRGB(const double xyz[3], double rgb[3])\nXYZToRGB(x:float, y:float, z:float, r:[float, ...], g:[float,\n    ...], b:[float, ...]) -> None\nC++: static void XYZToRGB(double x, double y, double z, double *r,\n     double *g, double *b)\n\nConvert color from the CIE XYZ system to RGB.\n"},
  {"RGBToXYZ", PyvtkMath_RGBToXYZ, METH_VARARGS,
   "RGBToXYZ(rgb:(float, float, float), xyz:[float, float, float])\n    -> None\nC++: static void RGBToXYZ(const double rgb[3], double xyz[3])\nRGBToXYZ(r:float, g:float, b:float, x:[float, ...], y:[float,\n    ...], z:[float, ...]) -> None\nC++: static void RGBToXYZ(double r, double g, double b, double *x,\n     double *y, double *z)\n\nConvert color from the RGB system to CIE XYZ.\n"},
  {"RGBToLab", PyvtkMath_RGBToLab, METH_VARARGS,
   "RGBToLab(rgb:(float, float, float), lab:[float, float, float])\n    -> None\nC++: static void RGBToLab(const double rgb[3], double lab[3])\nRGBToLab(red:float, green:float, blue:float, L:[float, ...],\n    a:[float, ...], b:[float, ...]) -> None\nC++: static void RGBToLab(double red, double green, double blue,\n    double *L, double *a, double *b)\n\nConvert color from the RGB system to CIE-L*ab. The input RGB must\nbe values in the range [0, 1]. The output ranges of 'L' is [0,\n100]. The output range of 'a' and 'b' are approximately [-110,\n110].\n"},
  {"LabToRGB", PyvtkMath_LabToRGB, METH_VARARGS,
   "LabToRGB(lab:(float, float, float), rgb:[float, float, float])\n    -> None\nC++: static void LabToRGB(const double lab[3], double rgb[3])\nLabToRGB(L:float, a:float, b:float, red:[float, ...],\n    green:[float, ...], blue:[float, ...]) -> None\nC++: static void LabToRGB(double L, double a, double b,\n    double *red, double *green, double *blue)\n\nConvert color from the CIE-L*ab system to RGB.\n"},
  {"UninitializeBounds", PyvtkMath_UninitializeBounds, METH_VARARGS,
   "UninitializeBounds(bounds:[float, float, float, float, float,\n    float]) -> None\nC++: static void UninitializeBounds(double bounds[6])\n\nSet the bounds to an uninitialized state\n"},
  {"AreBoundsInitialized", PyvtkMath_AreBoundsInitialized, METH_VARARGS,
   "AreBoundsInitialized(bounds:(float, float, float, float, float,\n    float)) -> int\nC++: static vtkTypeBool AreBoundsInitialized(\n    const double bounds[6])\n\nAre the bounds initialized?\n"},
  {"ClampValue", PyvtkMath_ClampValue, METH_VARARGS,
   "ClampValue(value:[float, ...], range:(float, float)) -> None\nC++: static void ClampValue(double *value, const double range[2])\nClampValue(value:float, range:(float, float),\n    clamped_value:[float, ...]) -> None\nC++: static void ClampValue(double value, const double range[2],\n    double *clamped_value)\n\nClamp some values against a range The method without\n'clamped_values' will perform in-place clamping.\n"},
  {"ClampValues", PyvtkMath_ClampValues, METH_VARARGS,
   "ClampValues(values:[float, ...], nb_values:int, range:(float,\n    float)) -> None\nC++: static void ClampValues(double *values, int nb_values,\n    const double range[2])\nClampValues(values:(float, ...), nb_values:int, range:(float,\n    float), clamped_values:[float, ...]) -> None\nC++: static void ClampValues(const double *values, int nb_values,\n    const double range[2], double *clamped_values)\n\n"},
  {"ClampAndNormalizeValue", PyvtkMath_ClampAndNormalizeValue, METH_VARARGS,
   "ClampAndNormalizeValue(value:float, range:(float, float)) -> float\nC++: static double ClampAndNormalizeValue(double value,\n    const double range[2])\n\nClamp a value against a range and then normalize it between 0 and\n1. If range[0]==range[1], the result is 0.\n\\pre valid_range: range[0]<=range[1]\n\\post valid_result: result>=0.0 && result<=1.0\n"},
  {"GetScalarTypeFittingRange", PyvtkMath_GetScalarTypeFittingRange, METH_VARARGS,
   "GetScalarTypeFittingRange(range_min:float, range_max:float,\n    scale:float=1.0, shift:float=0.0) -> int\nC++: static int GetScalarTypeFittingRange(double range_min,\n    double range_max, double scale=1.0, double shift=0.0)\n\nReturn the scalar type that is most likely to have enough\nprecision to store a given range of data once it has been scaled\nand shifted (i.e. [range_min * scale + shift, range_max * scale +\nshift]. If any one of the parameters is not an integer number\n(decimal part != 0), the search will default to float types only\n(float or double) Return -1 on error or no scalar type found.\n"},
  {"GetAdjustedScalarRange", PyvtkMath_GetAdjustedScalarRange, METH_VARARGS,
   "GetAdjustedScalarRange(array:vtkDataArray, comp:int, range:[float,\n     float]) -> int\nC++: static vtkTypeBool GetAdjustedScalarRange(\n    vtkDataArray *array, int comp, double range[2])\n\nGet a vtkDataArray's scalar range for a given component. If the\nvtkDataArray's data type is unsigned char (VTK_UNSIGNED_CHAR) the\nrange is adjusted to the whole data type range [0, 255.0]. Same\ngoes for unsigned short (VTK_UNSIGNED_SHORT) but the upper bound\nis also adjusted down to 4095.0 if was between ]255, 4095.0].\nReturn 1 on success, 0 otherwise.\n"},
  {"ExtentIsWithinOtherExtent", PyvtkMath_ExtentIsWithinOtherExtent, METH_VARARGS,
   "ExtentIsWithinOtherExtent(extent1:(int, int, int, int, int, int),\n    extent2:(int, int, int, int, int, int)) -> int\nC++: static vtkTypeBool ExtentIsWithinOtherExtent(\n    const int extent1[6], const int extent2[6])\n\nReturn true if first 3D extent is within second 3D extent Extent\nis x-min, x-max, y-min, y-max, z-min, z-max\n"},
  {"BoundsIsWithinOtherBounds", PyvtkMath_BoundsIsWithinOtherBounds, METH_VARARGS,
   "BoundsIsWithinOtherBounds(bounds1:(float, float, float, float,\n    float, float), bounds2:(float, float, float, float, float,\n    float), delta:(float, float, float)) -> int\nC++: static vtkTypeBool BoundsIsWithinOtherBounds(\n    const double bounds1[6], const double bounds2[6],\n    const double delta[3])\n\nReturn true if first 3D bounds is within the second 3D bounds\nBounds is x-min, x-max, y-min, y-max, z-min, z-max Delta is the\nerror margin along each axis (usually a small number)\n"},
  {"PointIsWithinBounds", PyvtkMath_PointIsWithinBounds, METH_VARARGS,
   "PointIsWithinBounds(point:(float, float, float), bounds:(float,\n    float, float, float, float, float), delta:(float, float,\n    float)) -> int\nC++: static vtkTypeBool PointIsWithinBounds(const double point[3],\n     const double bounds[6], const double delta[3])\n\nReturn true if point is within the given 3D bounds Bounds is\nx-min, x-max, y-min, y-max, z-min, z-max Delta is the error\nmargin along each axis (usually a small number)\n"},
  {"PlaneIntersectsAABB", PyvtkMath_PlaneIntersectsAABB, METH_VARARGS,
   "PlaneIntersectsAABB(bounds:(float, float, float, float, float,\n    float), normal:(float, float, float), point:(float, float,\n    float)) -> int\nC++: static int PlaneIntersectsAABB(const double bounds[6],\n    const double normal[3], const double point[3])\n\nImplements Plane / Axis-Aligned Bounding-Box intersection as\ndescribed in Graphics Gems IV, Ned Greene; pp. 75-76. Variable\nnames are based on the description in the book. This function\nreturns +1 if the box lies fully in the positive side of the\nplane (by convention, the side to which the plane's normal points\nto), -1 if the box fully lies in the negative side and 0 if the\nplane intersects the box.  -2 is returned if any of the arguments\nis invalid.\n"},
  {"Solve3PointCircle", PyvtkMath_Solve3PointCircle, METH_VARARGS,
   "Solve3PointCircle(p1:(float, float, float), p2:(float, float,\n    float), p3:(float, float, float), center:[float, float,\n    float]) -> float\nC++: static double Solve3PointCircle(const double p1[3],\n    const double p2[3], const double p3[3], double center[3])\n\nIn Euclidean space, there is a unique circle passing through any\ngiven three non-collinear points P1, P2, and P3. Using Cartesian\ncoordinates to represent these points as spatial vectors, it is\npossible to use the dot product and cross product to calculate\nthe radius and center of the circle. See:\nhttp://en.wikipedia.org/wiki/Circumscribed_circle and more\nspecifically the section Barycentric coordinates from cross- and\ndot-products\n"},
  {"Inf", PyvtkMath_Inf, METH_VARARGS,
   "Inf() -> float\nC++: static double Inf()\n\nSpecial IEEE-754 number used to represent positive infinity.\n"},
  {"NegInf", PyvtkMath_NegInf, METH_VARARGS,
   "NegInf() -> float\nC++: static double NegInf()\n\nSpecial IEEE-754 number used to represent negative infinity.\n"},
  {"Nan", PyvtkMath_Nan, METH_VARARGS,
   "Nan() -> float\nC++: static double Nan()\n\nSpecial IEEE-754 number used to represent Not-A-Number (Nan).\n"},
  {"IsInf", PyvtkMath_IsInf, METH_VARARGS,
   "IsInf(x:float) -> int\nC++: static vtkTypeBool IsInf(double x)\n\nTest if a number is equal to the special floating point value\ninfinity.\n"},
  {"IsNan", PyvtkMath_IsNan, METH_VARARGS,
   "IsNan(x:float) -> int\nC++: static vtkTypeBool IsNan(double x)\n\nTest if a number is equal to the special floating point value\nNot-A-Number (Nan).\n"},
  {"IsFinite", PyvtkMath_IsFinite, METH_VARARGS,
   "IsFinite(x:float) -> bool\nC++: static bool IsFinite(double x)\n\nTest if a number has finite value i.e. it is normal, subnormal or\nzero, but not infinite or Nan.\n"},
  {"QuadraticRoot", PyvtkMath_QuadraticRoot, METH_VARARGS,
   "QuadraticRoot(a:float, b:float, c:float, min:float, max:float,\n    u:[float, ...]) -> int\nC++: static int QuadraticRoot(double a, double b, double c,\n    double min, double max, double *u)\n\nfind roots of ax^2+bx+c=0  in the interval min,max. place the\nroots in u[2] and return how many roots found\n"},
  {"ComputeGCD", PyvtkMath_ComputeGCD, METH_VARARGS,
   "ComputeGCD(m:int, n:int) -> int\nC++: static vtkIdType ComputeGCD(vtkIdType m, vtkIdType n)\n\nCompute the greatest common divisor (GCD) of two positive\nintegers m and n. If the computed GCD==1, then the two integers\nare coprime to one another. This is a simple, recursive\nimplementation.\n"},
  {"GetPointAlongLine", PyvtkMath_GetPointAlongLine, METH_VARARGS,
   "GetPointAlongLine(result:[float, float, float], p1:[float, float,\n    float], p2:[float, float, float], offset:float) -> None\nC++: static void GetPointAlongLine(double result[3], double p1[3],\n     double p2[3], const double offset)\n\nGet the coordinates of a point along a line defined by p1 and p2,\nat a specified offset relative to p2.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMath_Doc =
  "vtkMath - performs common math operations\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMath provides methods to perform common math operations. These\n"
  "include providing constants such as Pi; conversion from degrees to\n"
  "radians; vector operations such as dot and cross products and vector\n"
  "norm; matrix determinant for 2x2 and 3x3 matrices; univariate\n"
  "polynomial solvers; and for random number generation (for backward\n"
  "compatibility only).\n"
  "@sa\n"
  "vtkMinimalStandardRandomSequence, vtkBoxMuellerRandomSequence,\n"
  "vtkQuaternion\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMath_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkMath", // tp_name
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
  PyvtkMath_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMath_StaticNew()
{
  return vtkMath::New();
}

PyObject *PyvtkMath_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMath_Type, PyvtkMath_Methods,
    "vtkMath",
 &PyvtkMath_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkMath_ConvolutionMode_Type);
  // members of vtkMath::ConvolutionMode
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkMath_ConvolutionMode_Type.tp_dict = enumdict;

    typedef vtkMath::ConvolutionMode cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[3] = {
      { "FULL", cxx_enum_type::FULL },
      { "SAME", cxx_enum_type::SAME },
      { "VALID", cxx_enum_type::VALID },
    };

    for (int c = 0; c < 3; c++)
    {
      enumval = PyvtkMath_ConvolutionMode_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkMath_ConvolutionMode_Type, "vtkMath.ConvolutionMode");

  o = (PyObject *)&PyvtkMath_ConvolutionMode_Type;
  if (PyDict_SetItemString(d, "ConvolutionMode", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMath(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMath_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMath", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; double value; }
      constants[2] = {
        { "VTK_DBL_MIN", 2.2250738585072014e-308 },
        { "VTK_DBL_EPSILON", 2.2204460492503131e-16 },
      };

    o = PyFloat_FromDouble(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

