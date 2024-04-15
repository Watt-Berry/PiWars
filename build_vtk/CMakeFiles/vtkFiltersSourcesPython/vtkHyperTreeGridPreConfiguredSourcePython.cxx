// python wrapper for vtkHyperTreeGridPreConfiguredSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkHyperTreeGridPreConfiguredSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridPreConfiguredSource(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridPreConfiguredSource_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridPreConfiguredSource_HTGType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkHyperTreeGridPreConfiguredSource.HTGType", // tp_name
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
PyObject *PyvtkHyperTreeGridPreConfiguredSource_HTGType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridPreConfiguredSource_HTGType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkHyperTreeGridPreConfiguredSource.HTGArchitecture", // tp_name
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
PyObject *PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridPreConfiguredSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridPreConfiguredSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridPreConfiguredSource *tempr = vtkHyperTreeGridPreConfiguredSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridPreConfiguredSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridPreConfiguredSource::NewInstance());

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
PyvtkHyperTreeGridPreConfiguredSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridPreConfiguredSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridPreConfiguredSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnbalanced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  std::vector<double> temp4(ap.GetArgSize(4));
  std::vector<unsigned int> temp5(ap.GetArgSize(5));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4.data(), temp4.size()) &&
      ap.GetArray(temp5.data(), temp5.size()))
  {
    if (ap.IsBound())
    {
      op->GenerateUnbalanced(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBalanced");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  std::vector<double> temp4(ap.GetArgSize(4));
  std::vector<unsigned int> temp5(ap.GetArgSize(5));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4.data(), temp4.size()) &&
      ap.GetArray(temp5.data(), temp5.size()))
  {
    if (ap.IsBound())
    {
      op->GenerateBalanced(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateBalanced(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetHTGMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHTGMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetHTGMode() :
      op->vtkHyperTreeGridPreConfiguredSource::GetHTGMode());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkHyperTreeGridPreConfiguredSource_HTGType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetHTGMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHTGMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  typedef vtkHyperTreeGridPreConfiguredSource::HTGType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkHyperTreeGridPreConfiguredSource.HTGType"))
  {
    if (ap.IsBound())
    {
      op->SetHTGMode(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetHTGMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomArchitecture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomArchitecture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGArchitecture tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetCustomArchitecture() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomArchitecture());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomArchitecture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomArchitecture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  typedef vtkHyperTreeGridPreConfiguredSource::HTGArchitecture temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkHyperTreeGridPreConfiguredSource.HTGArchitecture"))
  {
    if (ap.IsBound())
    {
      op->SetCustomArchitecture(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomArchitecture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCustomDim() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomDim());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomDim(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDim");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomDim(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomDim(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCustomFactor() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomFactor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCustomDepth() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCustomDepth(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCustomExtent() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

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
      op->SetCustomExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomExtent(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomExtent");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GetCustomSubdivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCustomSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetCustomSubdivisions() :
      op->vtkHyperTreeGridPreConfiguredSource::GetCustomSubdivisions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCustomSubdivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomSubdivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCustomSubdivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  const size_t size0 = 3;
  unsigned int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCustomSubdivisions(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::SetCustomSubdivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCustomSubdivisions");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced3DepthQuadTree2x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnbalanced3DepthQuadTree2x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateUnbalanced3DepthQuadTree2x3(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced3DepthQuadTree2x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced3DepthQuadTree2x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBalanced3DepthQuadTree2x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateBalanced3DepthQuadTree2x3(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateBalanced3DepthQuadTree2x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced2Depth3BranchTree3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnbalanced2Depth3BranchTree3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateUnbalanced2Depth3BranchTree3x3(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced2Depth3BranchTree3x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced4Depth3BranchTree2x2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBalanced4Depth3BranchTree2x2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateBalanced4Depth3BranchTree2x2(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateBalanced4Depth3BranchTree2x2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced3DepthOctTree3x2x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateUnbalanced3DepthOctTree3x2x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateUnbalanced3DepthOctTree3x2x3(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateUnbalanced3DepthOctTree3x2x3(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced2Depth3BranchTree3x3x2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBalanced2Depth3BranchTree3x3x2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->GenerateBalanced2Depth3BranchTree3x3x2(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPreConfiguredSource::GenerateBalanced2Depth3BranchTree3x3x2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPreConfiguredSource_GenerateCustom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCustom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPreConfiguredSource *op = static_cast<vtkHyperTreeGridPreConfiguredSource *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    int tempr = (ap.IsBound() ?
      op->GenerateCustom(temp0) :
      op->vtkHyperTreeGridPreConfiguredSource::GenerateCustom(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridPreConfiguredSource_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridPreConfiguredSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridPreConfiguredSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridPreConfiguredSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridPreConfiguredSource\nC++: static vtkHyperTreeGridPreConfiguredSource *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridPreConfiguredSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridPreConfiguredSource\nC++: vtkHyperTreeGridPreConfiguredSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridPreConfiguredSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridPreConfiguredSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateUnbalanced", PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced, METH_VARARGS,
   "GenerateUnbalanced(self, HTG:vtkHyperTreeGrid, dim:int,\n    factor:int, depth:int, extent:(float, ...), subdivisions:(int,\n     ...)) -> None\nC++: void GenerateUnbalanced(vtkHyperTreeGrid *HTG,\n    unsigned int dim, unsigned int factor, unsigned int depth,\n    const std::vector<double> &extent,\n    const std::vector<unsigned int> &subdivisions)\n\nHelper methods for generating HTGs\n"},
  {"GenerateBalanced", PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced, METH_VARARGS,
   "GenerateBalanced(self, HTG:vtkHyperTreeGrid, dim:int, factor:int,\n    depth:int, extent:(float, ...), subdivisions:(int, ...))\n    -> None\nC++: void GenerateBalanced(vtkHyperTreeGrid *HTG,\n    unsigned int dim, unsigned int factor, unsigned int depth,\n    const std::vector<double> &extent,\n    const std::vector<unsigned int> &subdivisions)\n\n"},
  {"GetHTGMode", PyvtkHyperTreeGridPreConfiguredSource_GetHTGMode, METH_VARARGS,
   "GetHTGMode(self) -> HTGType\nC++: virtual HTGType GetHTGMode()\n\nGet/Set HyperTreeGrid mode\n"},
  {"SetHTGMode", PyvtkHyperTreeGridPreConfiguredSource_SetHTGMode, METH_VARARGS,
   "SetHTGMode(self, _arg:HTGType) -> None\nC++: virtual void SetHTGMode(HTGType _arg)\n\n"},
  {"GetCustomArchitecture", PyvtkHyperTreeGridPreConfiguredSource_GetCustomArchitecture, METH_VARARGS,
   "GetCustomArchitecture(self) -> HTGArchitecture\nC++: virtual HTGArchitecture GetCustomArchitecture()\n\nGet/Set for custom architecture\n"},
  {"SetCustomArchitecture", PyvtkHyperTreeGridPreConfiguredSource_SetCustomArchitecture, METH_VARARGS,
   "SetCustomArchitecture(self, _arg:HTGArchitecture) -> None\nC++: virtual void SetCustomArchitecture(HTGArchitecture _arg)\n\n"},
  {"GetCustomDim", PyvtkHyperTreeGridPreConfiguredSource_GetCustomDim, METH_VARARGS,
   "GetCustomDim(self) -> int\nC++: virtual unsigned int GetCustomDim()\n\nGet/Set for custom dimension\n"},
  {"SetCustomDim", PyvtkHyperTreeGridPreConfiguredSource_SetCustomDim, METH_VARARGS,
   "SetCustomDim(self, _arg:int) -> None\nC++: virtual void SetCustomDim(unsigned int _arg)\n\n"},
  {"GetCustomFactor", PyvtkHyperTreeGridPreConfiguredSource_GetCustomFactor, METH_VARARGS,
   "GetCustomFactor(self) -> int\nC++: virtual unsigned int GetCustomFactor()\n\nGet/Set for custom branching factor\n"},
  {"SetCustomFactor", PyvtkHyperTreeGridPreConfiguredSource_SetCustomFactor, METH_VARARGS,
   "SetCustomFactor(self, _arg:int) -> None\nC++: virtual void SetCustomFactor(unsigned int _arg)\n\n"},
  {"GetCustomDepth", PyvtkHyperTreeGridPreConfiguredSource_GetCustomDepth, METH_VARARGS,
   "GetCustomDepth(self) -> int\nC++: virtual unsigned int GetCustomDepth()\n\nGet/Set for custom depth\n"},
  {"SetCustomDepth", PyvtkHyperTreeGridPreConfiguredSource_SetCustomDepth, METH_VARARGS,
   "SetCustomDepth(self, _arg:int) -> None\nC++: virtual void SetCustomDepth(unsigned int _arg)\n\n"},
  {"GetCustomExtent", PyvtkHyperTreeGridPreConfiguredSource_GetCustomExtent, METH_VARARGS,
   "GetCustomExtent(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetCustomExtent()\n\nGet/Set for custom extent in coordinate space\n"},
  {"SetCustomExtent", PyvtkHyperTreeGridPreConfiguredSource_SetCustomExtent, METH_VARARGS,
   "SetCustomExtent(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetCustomExtent(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetCustomExtent(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetCustomExtent(const double _arg[6])\n\n"},
  {"GetCustomSubdivisions", PyvtkHyperTreeGridPreConfiguredSource_GetCustomSubdivisions, METH_VARARGS,
   "GetCustomSubdivisions(self) -> (int, int, int)\nC++: virtual unsigned int *GetCustomSubdivisions()\n\nGet/Set for custom subdivisions of the extent\n"},
  {"SetCustomSubdivisions", PyvtkHyperTreeGridPreConfiguredSource_SetCustomSubdivisions, METH_VARARGS,
   "SetCustomSubdivisions(self, _arg1:int, _arg2:int, _arg3:int)\n    -> None\nC++: virtual void SetCustomSubdivisions(unsigned int _arg1,\n    unsigned int _arg2, unsigned int _arg3)\nSetCustomSubdivisions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetCustomSubdivisions(\n    const unsigned int _arg[3])\n\n"},
  {"GenerateUnbalanced3DepthQuadTree2x3", PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced3DepthQuadTree2x3, METH_VARARGS,
   "GenerateUnbalanced3DepthQuadTree2x3(self, HTG:vtkHyperTreeGrid)\n    -> None\nC++: void GenerateUnbalanced3DepthQuadTree2x3(\n    vtkHyperTreeGrid *HTG)\n\nHelper functions for generating the different types of HTGs\n"},
  {"GenerateBalanced3DepthQuadTree2x3", PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced3DepthQuadTree2x3, METH_VARARGS,
   "GenerateBalanced3DepthQuadTree2x3(self, HTG:vtkHyperTreeGrid)\n    -> None\nC++: void GenerateBalanced3DepthQuadTree2x3(vtkHyperTreeGrid *HTG)\n\n"},
  {"GenerateUnbalanced2Depth3BranchTree3x3", PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced2Depth3BranchTree3x3, METH_VARARGS,
   "GenerateUnbalanced2Depth3BranchTree3x3(self, HTG:vtkHyperTreeGrid)\n     -> None\nC++: void GenerateUnbalanced2Depth3BranchTree3x3(\n    vtkHyperTreeGrid *HTG)\n\n"},
  {"GenerateBalanced4Depth3BranchTree2x2", PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced4Depth3BranchTree2x2, METH_VARARGS,
   "GenerateBalanced4Depth3BranchTree2x2(self, HTG:vtkHyperTreeGrid)\n    -> None\nC++: void GenerateBalanced4Depth3BranchTree2x2(\n    vtkHyperTreeGrid *HTG)\n\n"},
  {"GenerateUnbalanced3DepthOctTree3x2x3", PyvtkHyperTreeGridPreConfiguredSource_GenerateUnbalanced3DepthOctTree3x2x3, METH_VARARGS,
   "GenerateUnbalanced3DepthOctTree3x2x3(self, HTG:vtkHyperTreeGrid)\n    -> None\nC++: void GenerateUnbalanced3DepthOctTree3x2x3(\n    vtkHyperTreeGrid *HTG)\n\n"},
  {"GenerateBalanced2Depth3BranchTree3x3x2", PyvtkHyperTreeGridPreConfiguredSource_GenerateBalanced2Depth3BranchTree3x3x2, METH_VARARGS,
   "GenerateBalanced2Depth3BranchTree3x3x2(self, HTG:vtkHyperTreeGrid)\n     -> None\nC++: void GenerateBalanced2Depth3BranchTree3x3x2(\n    vtkHyperTreeGrid *HTG)\n\n"},
  {"GenerateCustom", PyvtkHyperTreeGridPreConfiguredSource_GenerateCustom, METH_VARARGS,
   "GenerateCustom(self, HTG:vtkHyperTreeGrid) -> int\nC++: int GenerateCustom(vtkHyperTreeGrid *HTG)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridPreConfiguredSource_Doc =
  "vtkHyperTreeGridPreConfiguredSource - Helper class for generating a\ncurated set of HyperTree Grids (HTGs) for testing purposes\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "Provides a set of public methods for generating some commonly used\n"
  "HTG setups.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridPreConfiguredSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkHyperTreeGridPreConfiguredSource", // tp_name
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
  PyvtkHyperTreeGridPreConfiguredSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridPreConfiguredSource_StaticNew()
{
  return vtkHyperTreeGridPreConfiguredSource::New();
}

PyObject *PyvtkHyperTreeGridPreConfiguredSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridPreConfiguredSource_Type, PyvtkHyperTreeGridPreConfiguredSource_Methods,
    "vtkHyperTreeGridPreConfiguredSource",
 &PyvtkHyperTreeGridPreConfiguredSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHyperTreeGridPreConfiguredSource_HTGType_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridPreConfiguredSource_HTGType_Type, "vtkHyperTreeGridPreConfiguredSource.HTGType");

  o = (PyObject *)&PyvtkHyperTreeGridPreConfiguredSource_HTGType_Type;
  if (PyDict_SetItemString(d, "HTGType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_Type);
  PyVTKEnum_Add(&PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_Type, "vtkHyperTreeGridPreConfiguredSource.HTGArchitecture");

  o = (PyObject *)&PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_Type;
  if (PyDict_SetItemString(d, "HTGArchitecture", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "UNBALANCED_3DEPTH_2BRANCH_2X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_3DEPTH_2BRANCH_2X3 },
        { "BALANCED_3DEPTH_2BRANCH_2X3", vtkHyperTreeGridPreConfiguredSource::BALANCED_3DEPTH_2BRANCH_2X3 },
        { "UNBALANCED_2DEPTH_3BRANCH_3X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_2DEPTH_3BRANCH_3X3 },
        { "BALANCED_4DEPTH_3BRANCH_2X2", vtkHyperTreeGridPreConfiguredSource::BALANCED_4DEPTH_3BRANCH_2X2 },
        { "UNBALANCED_3DEPTH_2BRANCH_3X2X3", vtkHyperTreeGridPreConfiguredSource::UNBALANCED_3DEPTH_2BRANCH_3X2X3 },
        { "BALANCED_2DEPTH_3BRANCH_3X3X2", vtkHyperTreeGridPreConfiguredSource::BALANCED_2DEPTH_3BRANCH_3X3X2 },
        { "CUSTOM", vtkHyperTreeGridPreConfiguredSource::CUSTOM },
      };

    o = PyvtkHyperTreeGridPreConfiguredSource_HTGType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkHyperTreeGridPreConfiguredSource::HTGArchitecture cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "UNBALANCED", vtkHyperTreeGridPreConfiguredSource::UNBALANCED },
        { "BALANCED", vtkHyperTreeGridPreConfiguredSource::BALANCED },
      };

    o = PyvtkHyperTreeGridPreConfiguredSource_HTGArchitecture_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridPreConfiguredSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridPreConfiguredSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridPreConfiguredSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

