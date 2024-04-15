// python wrapper for vtkSurfaceNets3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceNets3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceNets3D(PyObject *dict); }
extern "C" { PyObject *PyvtkSurfaceNets3D_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceNets3D_MeshType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSurfaceNets3D.MeshType", // tp_name
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
PyObject *PyvtkSurfaceNets3D_MeshType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSurfaceNets3D_MeshType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceNets3D_OutputType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSurfaceNets3D.OutputType", // tp_name
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
PyObject *PyvtkSurfaceNets3D_OutputType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSurfaceNets3D_OutputType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceNets3D_TriangulationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSurfaceNets3D.TriangulationType", // tp_name
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
PyObject *PyvtkSurfaceNets3D_TriangulationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSurfaceNets3D_TriangulationType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSurfaceNets3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceNets3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceNets3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceNets3D *tempr = vtkSurfaceNets3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceNets3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceNets3D::NewInstance());

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
PyvtkSurfaceNets3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceNets3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceNets3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSurfaceNets3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets3D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLabel(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets3D::SetLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSurfaceNets3D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLabel(temp0) :
      op->vtkSurfaceNets3D::GetLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkSurfaceNets3D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::GetValues(temp0);
    }

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
PyvtkSurfaceNets3D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSurfaceNets3D_GetValues_s1(self, args);
    case 1:
      return PyvtkSurfaceNets3D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_GetLabels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLabels() :
      op->vtkSurfaceNets3D::GetLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_GetLabels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetLabels(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::GetLabels(temp0);
    }

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
PyvtkSurfaceNets3D_GetLabels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSurfaceNets3D_GetLabels_s1(self, args);
    case 1:
      return PyvtkSurfaceNets3D_GetLabels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLabels");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLabels() :
      op->vtkSurfaceNets3D::GetNumberOfLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkSurfaceNets3D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GenerateLabels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateLabels(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets3D::GenerateLabels(temp0, temp1);
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
PyvtkSurfaceNets3D_GenerateLabels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
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
      op->GenerateLabels(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceNets3D::GenerateLabels(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_GenerateLabels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSurfaceNets3D_GenerateLabels_s1(self, args);
    case 3:
      return PyvtkSurfaceNets3D_GenerateLabels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateLabels");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceNets3D::GenerateValues(temp0, temp1);
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
PyvtkSurfaceNets3D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceNets3D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSurfaceNets3D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkSurfaceNets3D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_SetBackgroundLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundLabel(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetBackgroundLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetBackgroundLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundLabel() :
      op->vtkSurfaceNets3D::GetBackgroundLabel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSurfaceNets3D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputMeshType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMeshType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMeshType(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputMeshType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputMeshTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputMeshTypeMinValue() :
      op->vtkSurfaceNets3D::GetOutputMeshTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputMeshTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputMeshTypeMaxValue() :
      op->vtkSurfaceNets3D::GetOutputMeshTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputMeshType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputMeshType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputMeshType() :
      op->vtkSurfaceNets3D::GetOutputMeshType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputMeshTypeToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMeshTypeToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMeshTypeToDefault();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputMeshTypeToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputMeshTypeToTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMeshTypeToTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMeshTypeToTriangles();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputMeshTypeToTriangles();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputMeshTypeToQuads(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputMeshTypeToQuads");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputMeshTypeToQuads();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputMeshTypeToQuads();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSmoothing(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetSmoothing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetSmoothing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoothing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSmoothing() :
      op->vtkSurfaceNets3D::GetSmoothing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SmoothingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOn();
    }
    else
    {
      op->vtkSurfaceNets3D::SmoothingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SmoothingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SmoothingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SmoothingOff();
    }
    else
    {
      op->vtkSurfaceNets3D::SmoothingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfIterations(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetNumberOfIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetNumberOfIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfIterations() :
      op->vtkSurfaceNets3D::GetNumberOfIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRelaxationFactor(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetRelaxationFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetRelaxationFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelaxationFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRelaxationFactor() :
      op->vtkSurfaceNets3D::GetRelaxationFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintDistance(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintDistance() :
      op->vtkSurfaceNets3D::GetConstraintDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetConstraintBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

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
      op->SetConstraintBox(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintBox(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_SetConstraintBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetConstraintBox(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintBox(temp0);
    }

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
PyvtkSurfaceNets3D_SetConstraintBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSurfaceNets3D_SetConstraintBox_s1(self, args);
    case 1:
      return PyvtkSurfaceNets3D_SetConstraintBox_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetConstraintBox");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintBox_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetConstraintBox() :
      op->vtkSurfaceNets3D::GetConstraintBox());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSurfaceNets3D_GetConstraintBox_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetConstraintBox(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::GetConstraintBox(temp0);
    }

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
PyvtkSurfaceNets3D_GetConstraintBox(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSurfaceNets3D_GetConstraintBox_s1(self, args);
    case 1:
      return PyvtkSurfaceNets3D_GetConstraintBox_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetConstraintBox");
  return nullptr;
}


static PyObject *
PyvtkSurfaceNets3D_SetConstraintStrategyToConstraintDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToConstraintDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToConstraintDistance();
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintStrategyToConstraintDistance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetConstraintStrategyToConstraintBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintStrategyToConstraintBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintStrategyToConstraintBox();
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintStrategyToConstraintBox();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstraintStrategy() :
      op->vtkSurfaceNets3D::GetConstraintStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetAutomaticSmoothingConstraints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticSmoothingConstraints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticSmoothingConstraints(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetAutomaticSmoothingConstraints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetAutomaticSmoothingConstraints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticSmoothingConstraints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutomaticSmoothingConstraints() :
      op->vtkSurfaceNets3D::GetAutomaticSmoothingConstraints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_AutomaticSmoothingConstraintsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSmoothingConstraintsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticSmoothingConstraintsOn();
    }
    else
    {
      op->vtkSurfaceNets3D::AutomaticSmoothingConstraintsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_AutomaticSmoothingConstraintsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticSmoothingConstraintsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticSmoothingConstraintsOff();
    }
    else
    {
      op->vtkSurfaceNets3D::AutomaticSmoothingConstraintsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetConstraintScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConstraintScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConstraintScale(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetConstraintScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintScaleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintScaleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintScaleMinValue() :
      op->vtkSurfaceNets3D::GetConstraintScaleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintScaleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintScaleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintScaleMaxValue() :
      op->vtkSurfaceNets3D::GetConstraintScaleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetConstraintScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstraintScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetConstraintScale() :
      op->vtkSurfaceNets3D::GetConstraintScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOptimizedSmoothingStencils(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOptimizedSmoothingStencils");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOptimizedSmoothingStencils(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetOptimizedSmoothingStencils(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOptimizedSmoothingStencils(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOptimizedSmoothingStencils");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOptimizedSmoothingStencils() :
      op->vtkSurfaceNets3D::GetOptimizedSmoothingStencils());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_OptimizedSmoothingStencilsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizedSmoothingStencilsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizedSmoothingStencilsOn();
    }
    else
    {
      op->vtkSurfaceNets3D::OptimizedSmoothingStencilsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_OptimizedSmoothingStencilsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OptimizedSmoothingStencilsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OptimizedSmoothingStencilsOff();
    }
    else
    {
      op->vtkSurfaceNets3D::OptimizedSmoothingStencilsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetSmoother(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSmoother");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConstrainedSmoothingFilter *tempr = (ap.IsBound() ?
      op->GetSmoother() :
      op->vtkSurfaceNets3D::GetSmoother());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyle(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyleMinValue() :
      op->vtkSurfaceNets3D::GetOutputStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyleMaxValue() :
      op->vtkSurfaceNets3D::GetOutputStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetOutputStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputStyle() :
      op->vtkSurfaceNets3D::GetOutputStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputStyleToDefault(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToDefault();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputStyleToDefault();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputStyleToBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToBoundary();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputStyleToBoundary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetOutputStyleToSelected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputStyleToSelected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputStyleToSelected();
    }
    else
    {
      op->vtkSurfaceNets3D::SetOutputStyleToSelected();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_InitializeSelectedLabelsList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSelectedLabelsList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeSelectedLabelsList();
    }
    else
    {
      op->vtkSurfaceNets3D::InitializeSelectedLabelsList();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_AddSelectedLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelectedLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSelectedLabel(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::AddSelectedLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_DeleteSelectedLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteSelectedLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteSelectedLabel(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::DeleteSelectedLabel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetNumberOfSelectedLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectedLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfSelectedLabels() :
      op->vtkSurfaceNets3D::GetNumberOfSelectedLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetSelectedLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSelectedLabel(temp0) :
      op->vtkSurfaceNets3D::GetSelectedLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetTriangulationStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationStrategy(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetTriangulationStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetTriangulationStrategyMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationStrategyMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationStrategyMinValue() :
      op->vtkSurfaceNets3D::GetTriangulationStrategyMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetTriangulationStrategyMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationStrategyMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationStrategyMaxValue() :
      op->vtkSurfaceNets3D::GetTriangulationStrategyMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetTriangulationStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTriangulationStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTriangulationStrategy() :
      op->vtkSurfaceNets3D::GetTriangulationStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetTriangulationStrategyToGreedy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationStrategyToGreedy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationStrategyToGreedy();
    }
    else
    {
      op->vtkSurfaceNets3D::SetTriangulationStrategyToGreedy();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetTriangulationStrategyToMinEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationStrategyToMinEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationStrategyToMinEdge();
    }
    else
    {
      op->vtkSurfaceNets3D::SetTriangulationStrategyToMinEdge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetTriangulationStrategyToMinArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTriangulationStrategyToMinArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTriangulationStrategyToMinArea();
    }
    else
    {
      op->vtkSurfaceNets3D::SetTriangulationStrategyToMinArea();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_SetDataCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataCaching(temp0);
    }
    else
    {
      op->vtkSurfaceNets3D::SetDataCaching(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_GetDataCaching(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataCaching");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDataCaching() :
      op->vtkSurfaceNets3D::GetDataCaching());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_DataCachingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataCachingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataCachingOn();
    }
    else
    {
      op->vtkSurfaceNets3D::DataCachingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceNets3D_DataCachingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataCachingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceNets3D *op = static_cast<vtkSurfaceNets3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataCachingOff();
    }
    else
    {
      op->vtkSurfaceNets3D::DataCachingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceNets3D_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceNets3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceNets3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceNets3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceNets3D\nC++: static vtkSurfaceNets3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceNets3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceNets3D\nC++: vtkSurfaceNets3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceNets3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceNets3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkSurfaceNets3D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time is also a function of the label values and the\nsmoothing filter.\n"},
  {"SetValue", PyvtkSurfaceNets3D_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular label value at label number i. The index i\nranges between (0 <= i < NumberOfLabels). (Note: while labels\nvalues are expressed as doubles, the underlying scalar data may\nbe a different type. During execution the label values are cast\nto the type of the scalar data.)  Note the use of \"Value\" and\n\"Label\" when specifying regions to extract. The use of \"Value\" is\nconsistent with other VTK continuous-scalar field isocontouring\nalgorithms; however the term \"Label\" is more consistent with\nlabel maps.  Warning: make sure that the value of the background\nlabel (see definition below) is different than any of the\nspecified labels, otherwise the generated cell scalars may be\nincorrect.\n"},
  {"SetLabel", PyvtkSurfaceNets3D_SetLabel, METH_VARARGS,
   "SetLabel(self, i:int, value:float) -> None\nC++: void SetLabel(int i, double value)\n\n"},
  {"GetValue", PyvtkSurfaceNets3D_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith label value.\n"},
  {"GetLabel", PyvtkSurfaceNets3D_GetLabel, METH_VARARGS,
   "GetLabel(self, i:int) -> float\nC++: double GetLabel(int i)\n\n"},
  {"GetValues", PyvtkSurfaceNets3D_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of labels. There will be\nGetNumberOfLabels() values in the list.\n"},
  {"GetLabels", PyvtkSurfaceNets3D_GetLabels, METH_VARARGS,
   "GetLabels(self) -> Pointer\nC++: double *GetLabels()\nGetLabels(self, contourValues:[float, ...]) -> None\nC++: void GetLabels(double *contourValues)\n\n"},
  {"SetNumberOfLabels", PyvtkSurfaceNets3D_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, number:int) -> None\nC++: void SetNumberOfLabels(int number)\n\nSet the number of labels to place into the list. You only really\nneed to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed. Note\nthat for consistency with other isocountoring-related algorithms,\nsome methods use \"Labels\" and \"Contours\" interchangeably.\n"},
  {"SetNumberOfContours", PyvtkSurfaceNets3D_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\n"},
  {"GetNumberOfLabels", PyvtkSurfaceNets3D_GetNumberOfLabels, METH_VARARGS,
   "GetNumberOfLabels(self) -> int\nC++: vtkIdType GetNumberOfLabels()\n\nGet the number of labels in the list of label values.\n"},
  {"GetNumberOfContours", PyvtkSurfaceNets3D_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\n"},
  {"GenerateLabels", PyvtkSurfaceNets3D_GenerateLabels, METH_VARARGS,
   "GenerateLabels(self, numLabels:int, range:[float, float]) -> None\nC++: void GenerateLabels(int numLabels, double range[2])\nGenerateLabels(self, numLabels:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateLabels(int numLabels, double rangeStart,\n    double rangeEnd)\n\nGenerate numLabels equally spaced labels between the specified\nrange. The labels will include the min/max range values.\n"},
  {"GenerateValues", PyvtkSurfaceNets3D_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\n"},
  {"SetBackgroundLabel", PyvtkSurfaceNets3D_SetBackgroundLabel, METH_VARARGS,
   "SetBackgroundLabel(self, _arg:float) -> None\nC++: virtual void SetBackgroundLabel(double _arg)\n\nThis value specifies the label value to use when referencing the\nbackround region outside of any of the specified regions. (This\nvalue is used when producing cell scalars.) By default this value\nis zero. Be very careful of the value being used here, it should\nnot overlap an extracted label value, and because it is the same\ntype as the input image scalars, make sure the value can be\nproperly represented (e.g., if the input scalars are an unsigned\ntype, then BackgroundLabel should not be negative).\n"},
  {"GetBackgroundLabel", PyvtkSurfaceNets3D_GetBackgroundLabel, METH_VARARGS,
   "GetBackgroundLabel(self) -> float\nC++: virtual double GetBackgroundLabel()\n\n"},
  {"SetArrayComponent", PyvtkSurfaceNets3D_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of a input multi-component scalar array\nto contour with; defaults to component 0.\n"},
  {"GetArrayComponent", PyvtkSurfaceNets3D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {"SetOutputMeshType", PyvtkSurfaceNets3D_SetOutputMeshType, METH_VARARGS,
   "SetOutputMeshType(self, _arg:int) -> None\nC++: virtual void SetOutputMeshType(int _arg)\n\nControl the type of output mesh. By default, if smoothing is off,\nthe output mesh is a polygonal mesh consisting of quadrilaterals\n(quads). However, if smoothing is enabled, then the output mesh\ntype is a polygonal mesh consisting of triangles. It is possible\nto force the output mesh type to be of a certain type (triangles,\nor quads) regardless whether smoothing is enabled or not. Note\nthat if an output mesh is forced to be quads, and smoothing is\nenabled, the resulting quads may not be planar.\n"},
  {"GetOutputMeshTypeMinValue", PyvtkSurfaceNets3D_GetOutputMeshTypeMinValue, METH_VARARGS,
   "GetOutputMeshTypeMinValue(self) -> int\nC++: virtual int GetOutputMeshTypeMinValue()\n\n"},
  {"GetOutputMeshTypeMaxValue", PyvtkSurfaceNets3D_GetOutputMeshTypeMaxValue, METH_VARARGS,
   "GetOutputMeshTypeMaxValue(self) -> int\nC++: virtual int GetOutputMeshTypeMaxValue()\n\n"},
  {"GetOutputMeshType", PyvtkSurfaceNets3D_GetOutputMeshType, METH_VARARGS,
   "GetOutputMeshType(self) -> int\nC++: virtual int GetOutputMeshType()\n\n"},
  {"SetOutputMeshTypeToDefault", PyvtkSurfaceNets3D_SetOutputMeshTypeToDefault, METH_VARARGS,
   "SetOutputMeshTypeToDefault(self) -> None\nC++: void SetOutputMeshTypeToDefault()\n\n"},
  {"SetOutputMeshTypeToTriangles", PyvtkSurfaceNets3D_SetOutputMeshTypeToTriangles, METH_VARARGS,
   "SetOutputMeshTypeToTriangles(self) -> None\nC++: void SetOutputMeshTypeToTriangles()\n\n"},
  {"SetOutputMeshTypeToQuads", PyvtkSurfaceNets3D_SetOutputMeshTypeToQuads, METH_VARARGS,
   "SetOutputMeshTypeToQuads(self) -> None\nC++: void SetOutputMeshTypeToQuads()\n\n"},
  {"SetSmoothing", PyvtkSurfaceNets3D_SetSmoothing, METH_VARARGS,
   "SetSmoothing(self, _arg:bool) -> None\nC++: virtual void SetSmoothing(bool _arg)\n\nIndicate whether smoothing should be enabled. By default, after\nthe surface net is extracted, smoothing occurs using the built-in\nsmoother. To disable smoothing, invoke SmoothingOff().\n"},
  {"GetSmoothing", PyvtkSurfaceNets3D_GetSmoothing, METH_VARARGS,
   "GetSmoothing(self) -> bool\nC++: virtual bool GetSmoothing()\n\n"},
  {"SmoothingOn", PyvtkSurfaceNets3D_SmoothingOn, METH_VARARGS,
   "SmoothingOn(self) -> None\nC++: virtual void SmoothingOn()\n\n"},
  {"SmoothingOff", PyvtkSurfaceNets3D_SmoothingOff, METH_VARARGS,
   "SmoothingOff(self) -> None\nC++: virtual void SmoothingOff()\n\n"},
  {"SetNumberOfIterations", PyvtkSurfaceNets3D_SetNumberOfIterations, METH_VARARGS,
   "SetNumberOfIterations(self, n:int) -> None\nC++: void SetNumberOfIterations(int n)\n\nConvenience methods that delegate to the internal smoothing\nfilter follow below. See the documentation for\nvtkConstrainedSmoothingAlgorithm for more information.\n"},
  {"GetNumberOfIterations", PyvtkSurfaceNets3D_GetNumberOfIterations, METH_VARARGS,
   "GetNumberOfIterations(self) -> int\nC++: int GetNumberOfIterations()\n\n"},
  {"SetRelaxationFactor", PyvtkSurfaceNets3D_SetRelaxationFactor, METH_VARARGS,
   "SetRelaxationFactor(self, f:float) -> None\nC++: void SetRelaxationFactor(double f)\n\n"},
  {"GetRelaxationFactor", PyvtkSurfaceNets3D_GetRelaxationFactor, METH_VARARGS,
   "GetRelaxationFactor(self) -> float\nC++: double GetRelaxationFactor()\n\n"},
  {"SetConstraintDistance", PyvtkSurfaceNets3D_SetConstraintDistance, METH_VARARGS,
   "SetConstraintDistance(self, d:float) -> None\nC++: void SetConstraintDistance(double d)\n\n"},
  {"GetConstraintDistance", PyvtkSurfaceNets3D_GetConstraintDistance, METH_VARARGS,
   "GetConstraintDistance(self) -> float\nC++: double GetConstraintDistance()\n\n"},
  {"SetConstraintBox", PyvtkSurfaceNets3D_SetConstraintBox, METH_VARARGS,
   "SetConstraintBox(self, sx:float, sy:float, sz:float) -> None\nC++: void SetConstraintBox(double sx, double sy, double sz)\nSetConstraintBox(self, s:[float, float, float]) -> None\nC++: void SetConstraintBox(double s[3])\n\n"},
  {"GetConstraintBox", PyvtkSurfaceNets3D_GetConstraintBox, METH_VARARGS,
   "GetConstraintBox(self) -> (float, float, float)\nC++: double *GetConstraintBox()\nGetConstraintBox(self, s:[float, float, float]) -> None\nC++: void GetConstraintBox(double s[3])\n\n"},
  {"SetConstraintStrategyToConstraintDistance", PyvtkSurfaceNets3D_SetConstraintStrategyToConstraintDistance, METH_VARARGS,
   "SetConstraintStrategyToConstraintDistance(self) -> None\nC++: void SetConstraintStrategyToConstraintDistance()\n\n"},
  {"SetConstraintStrategyToConstraintBox", PyvtkSurfaceNets3D_SetConstraintStrategyToConstraintBox, METH_VARARGS,
   "SetConstraintStrategyToConstraintBox(self) -> None\nC++: void SetConstraintStrategyToConstraintBox()\n\n"},
  {"GetConstraintStrategy", PyvtkSurfaceNets3D_GetConstraintStrategy, METH_VARARGS,
   "GetConstraintStrategy(self) -> int\nC++: int GetConstraintStrategy()\n\n"},
  {"SetAutomaticSmoothingConstraints", PyvtkSurfaceNets3D_SetAutomaticSmoothingConstraints, METH_VARARGS,
   "SetAutomaticSmoothingConstraints(self, _arg:bool) -> None\nC++: virtual void SetAutomaticSmoothingConstraints(bool _arg)\n\nSpecify whether to set the smoothing constraints automatically.\nIf automatic is on, the constraint distance and constraint box\nwill calculated and set (based on the input size of the volume\nvoxel). Note that the ConstraintScale is used to adjust the size\nof the constraint distance or box when set automatically.\n(Typically the constraint distance defines a circumscribing\nsphere around a voxel, and the constraint box is a box with voxel\nspacing.)  If constraints are not set automatically, then the\nconstraint distance and/or constraint box should be set\nmanually.) By default, automatic smoothing constraints are\nenabled.\n"},
  {"GetAutomaticSmoothingConstraints", PyvtkSurfaceNets3D_GetAutomaticSmoothingConstraints, METH_VARARGS,
   "GetAutomaticSmoothingConstraints(self) -> bool\nC++: virtual bool GetAutomaticSmoothingConstraints()\n\n"},
  {"AutomaticSmoothingConstraintsOn", PyvtkSurfaceNets3D_AutomaticSmoothingConstraintsOn, METH_VARARGS,
   "AutomaticSmoothingConstraintsOn(self) -> None\nC++: virtual void AutomaticSmoothingConstraintsOn()\n\n"},
  {"AutomaticSmoothingConstraintsOff", PyvtkSurfaceNets3D_AutomaticSmoothingConstraintsOff, METH_VARARGS,
   "AutomaticSmoothingConstraintsOff(self) -> None\nC++: virtual void AutomaticSmoothingConstraintsOff()\n\n"},
  {"SetConstraintScale", PyvtkSurfaceNets3D_SetConstraintScale, METH_VARARGS,
   "SetConstraintScale(self, _arg:float) -> None\nC++: virtual void SetConstraintScale(double _arg)\n\n"},
  {"GetConstraintScaleMinValue", PyvtkSurfaceNets3D_GetConstraintScaleMinValue, METH_VARARGS,
   "GetConstraintScaleMinValue(self) -> float\nC++: virtual double GetConstraintScaleMinValue()\n\n"},
  {"GetConstraintScaleMaxValue", PyvtkSurfaceNets3D_GetConstraintScaleMaxValue, METH_VARARGS,
   "GetConstraintScaleMaxValue(self) -> float\nC++: virtual double GetConstraintScaleMaxValue()\n\n"},
  {"GetConstraintScale", PyvtkSurfaceNets3D_GetConstraintScale, METH_VARARGS,
   "GetConstraintScale(self) -> float\nC++: virtual double GetConstraintScale()\n\n"},
  {"SetOptimizedSmoothingStencils", PyvtkSurfaceNets3D_SetOptimizedSmoothingStencils, METH_VARARGS,
   "SetOptimizedSmoothingStencils(self, _arg:bool) -> None\nC++: virtual void SetOptimizedSmoothingStencils(bool _arg)\n\nIndicate whether to use optimized smoothing stencils. Optimized\nstencils (which are on by default) are designed to better smooth\nsharp edges across the surface net. In some cases it may be\ndesired to disable the use of optimized smoothing stencils.\n"},
  {"GetOptimizedSmoothingStencils", PyvtkSurfaceNets3D_GetOptimizedSmoothingStencils, METH_VARARGS,
   "GetOptimizedSmoothingStencils(self) -> bool\nC++: virtual bool GetOptimizedSmoothingStencils()\n\n"},
  {"OptimizedSmoothingStencilsOn", PyvtkSurfaceNets3D_OptimizedSmoothingStencilsOn, METH_VARARGS,
   "OptimizedSmoothingStencilsOn(self) -> None\nC++: virtual void OptimizedSmoothingStencilsOn()\n\n"},
  {"OptimizedSmoothingStencilsOff", PyvtkSurfaceNets3D_OptimizedSmoothingStencilsOff, METH_VARARGS,
   "OptimizedSmoothingStencilsOff(self) -> None\nC++: virtual void OptimizedSmoothingStencilsOff()\n\n"},
  {"GetSmoother", PyvtkSurfaceNets3D_GetSmoother, METH_VARARGS,
   "GetSmoother(self) -> vtkConstrainedSmoothingFilter\nC++: virtual vtkConstrainedSmoothingFilter *GetSmoother()\n\nGet the instance of vtkConstrainedSmoothingFilter used to smooth\nthe extracted surface net. To control smoothing, access this\ninstance and specify its parameters such as number of smoothing\niterations and constraint distance. If you wish to disable\nsmoothing, set SmoothingOff().\n"},
  {"SetOutputStyle", PyvtkSurfaceNets3D_SetOutputStyle, METH_VARARGS,
   "SetOutputStyle(self, _arg:int) -> None\nC++: virtual void SetOutputStyle(int _arg)\n\nSpecify the form (i.e., the style) of the output. Different\nstyles are meant to support different workflows.\nOUTPUT_STYLE_DEFAULT provides the basic information defining the\noutput surface net. OUTPUT_STYLE_BOUNDARY produces much smaller\noutput since the interior polygon faces are not produced. \nFinally, OUTPUT_STYLE_SELECTED enables the user to extract a\nsubset of the labeled regions. This is useful because the\nsmoothing operation will occur across all the specified input\nregions, meaning that the selected regions do not change shape\ndue to changes in the specified input regions. You must specify\nthe selected regions (i.e., labels) to output.\n"},
  {"GetOutputStyleMinValue", PyvtkSurfaceNets3D_GetOutputStyleMinValue, METH_VARARGS,
   "GetOutputStyleMinValue(self) -> int\nC++: virtual int GetOutputStyleMinValue()\n\n"},
  {"GetOutputStyleMaxValue", PyvtkSurfaceNets3D_GetOutputStyleMaxValue, METH_VARARGS,
   "GetOutputStyleMaxValue(self) -> int\nC++: virtual int GetOutputStyleMaxValue()\n\n"},
  {"GetOutputStyle", PyvtkSurfaceNets3D_GetOutputStyle, METH_VARARGS,
   "GetOutputStyle(self) -> int\nC++: virtual int GetOutputStyle()\n\n"},
  {"SetOutputStyleToDefault", PyvtkSurfaceNets3D_SetOutputStyleToDefault, METH_VARARGS,
   "SetOutputStyleToDefault(self) -> None\nC++: void SetOutputStyleToDefault()\n\n"},
  {"SetOutputStyleToBoundary", PyvtkSurfaceNets3D_SetOutputStyleToBoundary, METH_VARARGS,
   "SetOutputStyleToBoundary(self) -> None\nC++: void SetOutputStyleToBoundary()\n\n"},
  {"SetOutputStyleToSelected", PyvtkSurfaceNets3D_SetOutputStyleToSelected, METH_VARARGS,
   "SetOutputStyleToSelected(self) -> None\nC++: void SetOutputStyleToSelected()\n\n"},
  {"InitializeSelectedLabelsList", PyvtkSurfaceNets3D_InitializeSelectedLabelsList, METH_VARARGS,
   "InitializeSelectedLabelsList(self) -> None\nC++: void InitializeSelectedLabelsList()\n\nWhen the OutputStyle is set to OUTPUT_STYLE_SELECTED, these\nmethods are used to specify the labeled regions to output.\n"},
  {"AddSelectedLabel", PyvtkSurfaceNets3D_AddSelectedLabel, METH_VARARGS,
   "AddSelectedLabel(self, label:float) -> None\nC++: void AddSelectedLabel(double label)\n\n"},
  {"DeleteSelectedLabel", PyvtkSurfaceNets3D_DeleteSelectedLabel, METH_VARARGS,
   "DeleteSelectedLabel(self, label:float) -> None\nC++: void DeleteSelectedLabel(double label)\n\n"},
  {"GetNumberOfSelectedLabels", PyvtkSurfaceNets3D_GetNumberOfSelectedLabels, METH_VARARGS,
   "GetNumberOfSelectedLabels(self) -> int\nC++: vtkIdType GetNumberOfSelectedLabels()\n\n"},
  {"GetSelectedLabel", PyvtkSurfaceNets3D_GetSelectedLabel, METH_VARARGS,
   "GetSelectedLabel(self, ithLabel:int) -> float\nC++: double GetSelectedLabel(vtkIdType ithLabel)\n\n"},
  {"SetTriangulationStrategy", PyvtkSurfaceNets3D_SetTriangulationStrategy, METH_VARARGS,
   "SetTriangulationStrategy(self, _arg:int) -> None\nC++: virtual void SetTriangulationStrategy(int _arg)\n\nSpecify the strategy to triangulate the quads (not applicable if\nthe output mesh type is set to MESH_TYPE_QUADS). If\nTRIANGULATE_GREEDY is specified, then quads are triangulated in\nno particular order. If TRIANGULATED_MIN_EDGE is specified, then\ntrianglate the quad using a minimum-edge-length diagonal. If\nTRIANGULATED_MIN_AREA is specified, then trianglate the quad to\nproduce a minimum surface area. By default, TRIANGULATE_MIN_EDGE\nis used. (Slight performance affects may occur, with\nTRIANGULATION_GREEDY generally the fastest.)\n"},
  {"GetTriangulationStrategyMinValue", PyvtkSurfaceNets3D_GetTriangulationStrategyMinValue, METH_VARARGS,
   "GetTriangulationStrategyMinValue(self) -> int\nC++: virtual int GetTriangulationStrategyMinValue()\n\n"},
  {"GetTriangulationStrategyMaxValue", PyvtkSurfaceNets3D_GetTriangulationStrategyMaxValue, METH_VARARGS,
   "GetTriangulationStrategyMaxValue(self) -> int\nC++: virtual int GetTriangulationStrategyMaxValue()\n\n"},
  {"GetTriangulationStrategy", PyvtkSurfaceNets3D_GetTriangulationStrategy, METH_VARARGS,
   "GetTriangulationStrategy(self) -> int\nC++: virtual int GetTriangulationStrategy()\n\n"},
  {"SetTriangulationStrategyToGreedy", PyvtkSurfaceNets3D_SetTriangulationStrategyToGreedy, METH_VARARGS,
   "SetTriangulationStrategyToGreedy(self) -> None\nC++: void SetTriangulationStrategyToGreedy()\n\n"},
  {"SetTriangulationStrategyToMinEdge", PyvtkSurfaceNets3D_SetTriangulationStrategyToMinEdge, METH_VARARGS,
   "SetTriangulationStrategyToMinEdge(self) -> None\nC++: void SetTriangulationStrategyToMinEdge()\n\n"},
  {"SetTriangulationStrategyToMinArea", PyvtkSurfaceNets3D_SetTriangulationStrategyToMinArea, METH_VARARGS,
   "SetTriangulationStrategyToMinArea(self) -> None\nC++: void SetTriangulationStrategyToMinArea()\n\n"},
  {"SetDataCaching", PyvtkSurfaceNets3D_SetDataCaching, METH_VARARGS,
   "SetDataCaching(self, _arg:bool) -> None\nC++: virtual void SetDataCaching(bool _arg)\n\nEnable caching of intermediate data. A common workflow using this\nfilter requires extracting object boundaries (i.e., the\nisocontour), and then repeatedly rerunning the smoothing process\nwith different parameters. To improve performance by avoiding\nrepeated extraction of the boundary, the filter can cache\nintermediate data prior to the smoothing process. In this way,\nthe boundary is only extracted once, and as long as only the\ninternal constrained smoothing filter is modified, then boundary\nextraction will not be reexecuted. By default this is enabled.\n"},
  {"GetDataCaching", PyvtkSurfaceNets3D_GetDataCaching, METH_VARARGS,
   "GetDataCaching(self) -> bool\nC++: virtual bool GetDataCaching()\n\n"},
  {"DataCachingOn", PyvtkSurfaceNets3D_DataCachingOn, METH_VARARGS,
   "DataCachingOn(self) -> None\nC++: virtual void DataCachingOn()\n\n"},
  {"DataCachingOff", PyvtkSurfaceNets3D_DataCachingOff, METH_VARARGS,
   "DataCachingOff(self) -> None\nC++: virtual void DataCachingOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSurfaceNets3D_Doc =
  "vtkSurfaceNets3D - generate smoothed isocontours from segmented 3D\nimage data (i.e., \"label maps\")\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSurfaceNets3D creates boundary/isocontour surfaces from a label\n"
  "map (e.g., a segmented image) using a threaded, 3D version of the\n"
  "multiple objects/labels Surface Nets algorithm. The input is a 3D\n"
  "image (i.e., volume) where each voxel is labeled (integer labels are\n"
  "preferred to real values), and the output data is a polygonal mesh\n"
  "separating labeled regions / objects.  (Note that on output each\n"
  "region [corresponding to a different segmented object] will share\n"
  "points/edges on a common boundary, i.e., two neighboring objects will\n"
  "share the boundary that separates them.) This threaded implementation\n"
  "uses concepts from Flying Edges to achieve high performance and\n"
  "scalability.\n\n"
  "The filter implements a contouring operation over a non-continuous\n"
  "scalar field. In comparison, classic contouring methods (like Flying\n"
  "Edges or Marching Cubes) presume a continuous scalar field. In\n"
  "comparision, this method processes non-continuous label maps, which\n"
  "corresponds to discrete regions in an input 3D image (i.e., volume).\n"
  "With a non-continuous scalar function, the usual data interpolation\n"
  "across a continuous function (e.g., interpolation along cell edges)\n"
  "is not possible. Instead, when the edge endpoint voxels are labeled\n"
  "in differing regions, the edge is split and transected by a quad\n"
  "polygon that connects the center points of the voxels on either side\n"
  "of the edge. Later, using a energy minimization smoothing process,\n"
  "the resulting polygonal mesh is adjusted to produce a smoother\n"
  "result. (Constraints on smoothing displacements may be specified to\n"
  "prevent excessive shrinkage and/or object distortion.)\n\n"
  "The smoothing process is controlled by setting a convergence measure,\n"
  "the number of smoothing iterations, the step size, and the allowed\n"
  "(constraint) distance that points may move.  These can be adjusted to\n"
  "provide the desired result. This class provides a method to access an\n"
  "internal instance of vtkConstrainedSmoothingFilter, through which\n"
  "these smoothing parameters may be specified, and which actually\n"
  "performs the smoothing operation. (Note: it is possible to skip the\n"
  "smoothing process altogether by disabling smoothing [e.g., invoking\n"
  "SmoothingOff()] or setting the number of smoothing iterations to\n"
  "zero. This can be useful when using a different smoothing filter like\n"
  "vtkWindowedSincPolyDataFilter; or if an unsmoothed, aliased output is\n"
  "desired. The reason the smoothing is built in to this filter is to\n"
  "remain faithful to the original published literature describing the\n"
  "Surface Nets algorithm, and for performance reasons since smoothing\n"
  "stencils can be generated on the fly.)\n\n"
  "The Surface Nets algorithm was first proposed by Sarah Frisken.  Two\n"
  "important papers include the description of surface nets for binary\n"
  "objects (i.e., extracting just one segmented object from a volume)\n"
  "and multi-label (multiple object extraction).\n\n"
  "S. Frisken (Gibson), \342\200\234Constrained Elastic SurfaceNets: Generating\n"
  "Smooth Surfaces from Binary Segmented Data\342\200\235, Proc. MICCAI, 1998,\n"
  "pp. 888-898.\n\n"
  "S. Frisken, \342\200\234SurfaceNets for Multi-Label Segmentations with\n"
  "Preservation of Sharp Boundaries\342\200\235, J. Computer Graphics Techniques,\n"
  "2022.\n\n"
  "Note that one nice feature of this filter is that algorithm execution\n"
  "occurs only once no matter the number of object labels / contour\n"
  "values. In many contouring-like algorithms, each separate contour\n"
  "value requires an additional algorithm execution with a new contour\n"
  "value. So in this filter large numbers of contour values do not\n"
  "significantly affect overall speed. The user can specify which\n"
  "objects (i.e., labels) are to be output to the filter. (Unspecified\n"
  "labels are treated as background and not output.)\n\n"
  "Besides output geometry defining the surface net, the filter outputs\n"
  "a two-component, cell data array indicating the labels/regions on\n"
  "either side of the polygons composing the output vtkPolyData. (This\n"
  "can be used for advanced operations like extracting shared/contacting\n"
  "boundaries between two objects. The name of this cell data array is\n"
  "\"BoundaryLabels\".)\n\n"
  "Note also that the content of the filter's output can be controlled\n"
  "by specifying the OutputStyle.  This produces different output which\n"
  "may better serve a particular workflow. For example, it is possible\n"
  "to produce just exterior boundary faces, or extract selected objects/\n"
  "labeled regions from the surface net.\n\n"
  "Implementation note: For performance reasons, this filter is\n"
  "internally implemented quite differently than described in the\n"
  "literature.  The main difference is that concepts from the Flying\n"
  "Edges parallel isocontouring algorithm are used. Namely, parallel,\n"
  "edge-by-edge processing is used to define cell cases, generate\n"
  "smoothing stencils, and produce points and output polygons. Plus the\n"
  "constrained smoothing process is also threaded using a\n"
  "double-buffering approach. For more information on Flying Edges see\n"
  "the paper:\n\n"
  "\"Flying Edges: A High-Performance Scalable Isocontouring Algorithm\"\n"
  "by Schroeder, Maynard, Geveci. Proc. of LDAV 2015. Chicago, IL.\n\n"
  "or visit VTK's FE implementation vtkFlyingEdges3D.\n\n"
  "@warning\n"
  "This filter is specialized to 3D images.\n\n"
  "@warning\n"
  "The output of this filter is a polygonal mesh. By default when\n"
  "smoothing is disabled, the output is quad polygons. However, once\n"
  "smoothing is enabled, the quads are typically decomposed into\n"
  "triangles since the quads are typically no longer planar. A filter\n"
  "option is available to force the type of output polygonal mesh\n"
  "(quads, or triangles).\n\n"
  "@warning\n"
  "Subtle differences in the output may result when the number of\n"
  "objects / labels extracted changes. This is because the smoothing\n"
  "operation operates on all of the boundaries simultaneously. If the\n"
  "boundaries change due to a difference in the number of extracted\n"
  "regions / labels, then the smoothing operation can produce slightly\n"
  "different results.\n\n"
  "@warning\n"
  "The filters vtkDiscreteMarchingCubes and vtkDiscreteFlyingEdges3D\n"
  "also perform contouring of label maps. However these filters produce\n"
  "output that may not share coincident points and/or cells, or may\n"
  "produce \"gaps\" between segmented regions. For example,\n"
  "vtkDiscreteMarchingCubes will share points between adjacent regions,\n"
  "but not triangle cells (which will be coincident). Also, no center\n"
  "point is inserted into voxels, meaning that intermittent gaps may\n"
  "form between regions. This Surface Nets implementation fully shares\n"
  "the boundary (points and cells) between adjacent objects; and no gaps\n"
  "between objects are formed (if the objects are neighbors to one\n"
  "another).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly. \n"
  "Note that for \"small\" volumes, serial execution may be faster due to\n"
  "the cost of managing threads. To force serial execution set\n"
  "VTK_IMPLEMENTATION_TYPE to \"Sequential\".\n\n"
  "@warning\n"
  "See also vtkPackLabels which is a utility class for renumbering the\n"
  "labels found in the input segmentation mask to contiguous forms of\n"
  "smaller type.\n\n"
  "@sa\n"
  "vtkSurfaceNets2D vtkDiscreteMarchingCubes vtkDiscreteFlyingEdges3D\n"
  "vtkConstrainedSmoothingFilter vtkFlyingEdges3D\n"
  "vtkWindowedSincPolyDataFilter vtkPackLabels\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceNets3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSurfaceNets3D", // tp_name
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
  PyvtkSurfaceNets3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceNets3D_StaticNew()
{
  return vtkSurfaceNets3D::New();
}

PyObject *PyvtkSurfaceNets3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceNets3D_Type, PyvtkSurfaceNets3D_Methods,
    "vtkSurfaceNets3D",
 &PyvtkSurfaceNets3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSurfaceNets3D_MeshType_Type);
  PyVTKEnum_Add(&PyvtkSurfaceNets3D_MeshType_Type, "vtkSurfaceNets3D.MeshType");

  o = (PyObject *)&PyvtkSurfaceNets3D_MeshType_Type;
  if (PyDict_SetItemString(d, "MeshType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSurfaceNets3D_OutputType_Type);
  PyVTKEnum_Add(&PyvtkSurfaceNets3D_OutputType_Type, "vtkSurfaceNets3D.OutputType");

  o = (PyObject *)&PyvtkSurfaceNets3D_OutputType_Type;
  if (PyDict_SetItemString(d, "OutputType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSurfaceNets3D_TriangulationType_Type);
  PyVTKEnum_Add(&PyvtkSurfaceNets3D_TriangulationType_Type, "vtkSurfaceNets3D.TriangulationType");

  o = (PyObject *)&PyvtkSurfaceNets3D_TriangulationType_Type;
  if (PyDict_SetItemString(d, "TriangulationType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSurfaceNets3D::MeshType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MESH_TYPE_DEFAULT", vtkSurfaceNets3D::MESH_TYPE_DEFAULT },
        { "MESH_TYPE_TRIANGLES", vtkSurfaceNets3D::MESH_TYPE_TRIANGLES },
        { "MESH_TYPE_QUADS", vtkSurfaceNets3D::MESH_TYPE_QUADS },
      };

    o = PyvtkSurfaceNets3D_MeshType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSurfaceNets3D::OutputType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OUTPUT_STYLE_DEFAULT", vtkSurfaceNets3D::OUTPUT_STYLE_DEFAULT },
        { "OUTPUT_STYLE_BOUNDARY", vtkSurfaceNets3D::OUTPUT_STYLE_BOUNDARY },
        { "OUTPUT_STYLE_SELECTED", vtkSurfaceNets3D::OUTPUT_STYLE_SELECTED },
      };

    o = PyvtkSurfaceNets3D_OutputType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSurfaceNets3D::TriangulationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "TRIANGULATION_GREEDY", vtkSurfaceNets3D::TRIANGULATION_GREEDY },
        { "TRIANGULATION_MIN_EDGE", vtkSurfaceNets3D::TRIANGULATION_MIN_EDGE },
        { "TRIANGULATION_MIN_AREA", vtkSurfaceNets3D::TRIANGULATION_MIN_AREA },
      };

    o = PyvtkSurfaceNets3D_TriangulationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceNets3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceNets3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceNets3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

