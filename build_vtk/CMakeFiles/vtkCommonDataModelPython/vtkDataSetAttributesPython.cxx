// python wrapper for vtkDataSetAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetAttributes_ClassNew(); }

#ifndef DECLARED_PyvtkFieldData_ClassNew
extern "C" { PyObject *PyvtkFieldData_ClassNew(); }
#define DECLARED_PyvtkFieldData_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes.AttributeTypes", // tp_name
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
PyObject *PyvtkDataSetAttributes_AttributeTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSetAttributes_AttributeTypes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_AttributeLimitTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes.AttributeLimitTypes", // tp_name
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
PyObject *PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSetAttributes_AttributeLimitTypes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_CellGhostTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes.CellGhostTypes", // tp_name
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
PyObject *PyvtkDataSetAttributes_CellGhostTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSetAttributes_CellGhostTypes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_PointGhostTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes.PointGhostTypes", // tp_name
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
PyObject *PyvtkDataSetAttributes_PointGhostTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSetAttributes_PointGhostTypes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_AttributeCopyOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes.AttributeCopyOperations", // tp_name
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
PyObject *PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSetAttributes_AttributeCopyOperations_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataSetAttributes_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = vtkDataSetAttributes::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetAttributes *tempr = vtkDataSetAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetAttributes::NewInstance());

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
PyvtkDataSetAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataSetAttributes::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkDataSetAttributes::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GhostArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GhostArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkDataSetAttributes::GhostArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetScalars(temp0) :
      op->vtkDataSetAttributes::SetScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveScalars(temp0) :
      op->vtkDataSetAttributes::SetActiveScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetScalars_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars() :
      op->vtkDataSetAttributes::GetScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetScalars(temp0) :
      op->vtkDataSetAttributes::GetScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetScalars(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetScalars_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetScalars_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalars");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetVectors(temp0) :
      op->vtkDataSetAttributes::SetVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveVectors(temp0) :
      op->vtkDataSetAttributes::SetActiveVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetVectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors() :
      op->vtkDataSetAttributes::GetVectors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetVectors(temp0) :
      op->vtkDataSetAttributes::GetVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetVectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetVectors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetVectors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectors");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetNormals(temp0) :
      op->vtkDataSetAttributes::SetNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveNormals(temp0) :
      op->vtkDataSetAttributes::SetActiveNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetNormals_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals() :
      op->vtkDataSetAttributes::GetNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetNormals(temp0) :
      op->vtkDataSetAttributes::GetNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetNormals(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetNormals_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetNormals_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNormals");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetTangents(temp0) :
      op->vtkDataSetAttributes::SetTangents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveTangents(temp0) :
      op->vtkDataSetAttributes::SetActiveTangents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTangents_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTangents() :
      op->vtkDataSetAttributes::GetTangents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTangents_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTangents(temp0) :
      op->vtkDataSetAttributes::GetTangents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTangents(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetTangents_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTangents_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTangents");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetTCoords(temp0) :
      op->vtkDataSetAttributes::SetTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveTCoords(temp0) :
      op->vtkDataSetAttributes::SetActiveTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTCoords_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords() :
      op->vtkDataSetAttributes::GetTCoords());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTCoords(temp0) :
      op->vtkDataSetAttributes::GetTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTCoords(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetTCoords_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTCoords_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTCoords");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetTensors(temp0) :
      op->vtkDataSetAttributes::SetTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveTensors(temp0) :
      op->vtkDataSetAttributes::SetActiveTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetTensors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors() :
      op->vtkDataSetAttributes::GetTensors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetTensors(temp0) :
      op->vtkDataSetAttributes::GetTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetTensors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetTensors_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetTensors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTensors");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveGlobalIds(temp0) :
      op->vtkDataSetAttributes::SetActiveGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds() :
      op->vtkDataSetAttributes::GetGlobalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetGlobalIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetGlobalIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetGlobalIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalIds");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActivePedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActivePedigreeIds(temp0) :
      op->vtkDataSetAttributes::SetActivePedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds() :
      op->vtkDataSetAttributes::GetPedigreeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetPedigreeIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetPedigreeIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetPedigreeIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPedigreeIds");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetRationalWeights(temp0) :
      op->vtkDataSetAttributes::SetRationalWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveRationalWeights(temp0) :
      op->vtkDataSetAttributes::SetActiveRationalWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetRationalWeights_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRationalWeights() :
      op->vtkDataSetAttributes::GetRationalWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetRationalWeights_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetRationalWeights(temp0) :
      op->vtkDataSetAttributes::GetRationalWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetRationalWeights(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetRationalWeights_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetRationalWeights_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRationalWeights");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetHigherOrderDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetHigherOrderDegrees(temp0) :
      op->vtkDataSetAttributes::SetHigherOrderDegrees(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveHigherOrderDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveHigherOrderDegrees(temp0) :
      op->vtkDataSetAttributes::SetActiveHigherOrderDegrees(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetHigherOrderDegrees_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetHigherOrderDegrees() :
      op->vtkDataSetAttributes::GetHigherOrderDegrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetHigherOrderDegrees_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetHigherOrderDegrees(temp0) :
      op->vtkDataSetAttributes::GetHigherOrderDegrees(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetHigherOrderDegrees(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetHigherOrderDegrees_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetHigherOrderDegrees_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHigherOrderDegrees");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->SetProcessIds(temp0) :
      op->vtkDataSetAttributes::SetProcessIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveProcessIds(temp0) :
      op->vtkDataSetAttributes::SetActiveProcessIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetProcessIds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetProcessIds() :
      op->vtkDataSetAttributes::GetProcessIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetProcessIds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetProcessIds(temp0) :
      op->vtkDataSetAttributes::GetProcessIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_GetProcessIds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSetAttributes_GetProcessIds_s1(self, args);
    case 1:
      return PyvtkDataSetAttributes_GetProcessIds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetProcessIds");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetActiveAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetActiveAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_SetActiveAttribute_Methods[] = {
  {"SetActiveAttribute", PyvtkDataSetAttributes_SetActiveAttribute_s1, METH_VARARGS,
   "@zi"},
  {"SetActiveAttribute", PyvtkDataSetAttributes_SetActiveAttribute_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_SetActiveAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_SetActiveAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActiveAttribute");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_GetAttributeIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetAttributeIndices(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::GetAttributeIndices(temp0);
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
PyvtkDataSetAttributes_IsArrayAnAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsArrayAnAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsArrayAnAttribute(temp0) :
      op->vtkDataSetAttributes::IsArrayAnAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::SetAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetAttribute(temp0) :
      op->vtkDataSetAttributes::GetAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetAbstractAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractAttribute(temp0) :
      op->vtkDataSetAttributes::GetAbstractAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_RemoveArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_RemoveArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_RemoveArray_Methods[] = {
  {"RemoveArray", PyvtkDataSetAttributes_RemoveArray_s1, METH_VARARGS,
   "@i"},
  {"RemoveArray", PyvtkDataSetAttributes_RemoveArray_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_RemoveArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_RemoveArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveArray");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_GetAttributeTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAttributeTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataSetAttributes::GetAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetLongAttributeTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLongAttributeTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataSetAttributes::GetLongAttributeTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  int temp2 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->SetCopyAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyAttribute(temp0, temp1) :
      op->vtkDataSetAttributes::GetCopyAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyScalars(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyScalars(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyScalars(temp0) :
      op->vtkDataSetAttributes::GetCopyScalars(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyScalarsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyScalarsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyVectors(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyVectors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyVectors(temp0) :
      op->vtkDataSetAttributes::GetCopyVectors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyVectorsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyVectorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyVectorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyVectorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyVectorsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyVectorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyNormals(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyNormals(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyNormals(temp0) :
      op->vtkDataSetAttributes::GetCopyNormals(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyNormalsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyNormalsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyTangents(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyTangents(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTangents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTangents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyTangents(temp0) :
      op->vtkDataSetAttributes::GetCopyTangents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTangentsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTangentsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTangentsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTangentsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTangentsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTangentsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTangentsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTangentsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyTCoords(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyTCoords(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyTCoords(temp0) :
      op->vtkDataSetAttributes::GetCopyTCoords(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTCoordsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTCoordsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTCoordsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTCoordsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTCoordsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTCoordsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyTensors(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyTensors(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyTensors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyTensors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyTensors(temp0) :
      op->vtkDataSetAttributes::GetCopyTensors(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTensorsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTensorsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTensorsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTensorsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyTensorsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyTensorsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyGlobalIds(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyGlobalIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyGlobalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyGlobalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyGlobalIds(temp0) :
      op->vtkDataSetAttributes::GetCopyGlobalIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyGlobalIdsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyGlobalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyGlobalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyGlobalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyGlobalIdsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyGlobalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyPedigreeIds(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyPedigreeIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyPedigreeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyPedigreeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyPedigreeIds(temp0) :
      op->vtkDataSetAttributes::GetCopyPedigreeIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPedigreeIdsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyPedigreeIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyPedigreeIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPedigreeIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPedigreeIdsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyPedigreeIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyRationalWeights(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyRationalWeights(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyRationalWeights(temp0) :
      op->vtkDataSetAttributes::GetCopyRationalWeights(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyRationalWeightsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyRationalWeightsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyRationalWeightsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyRationalWeightsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyRationalWeightsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyRationalWeightsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyRationalWeightsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyRationalWeightsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyHigherOrderDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyHigherOrderDegrees(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyHigherOrderDegrees(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyHigherOrderDegrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyHigherOrderDegrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyHigherOrderDegrees(temp0) :
      op->vtkDataSetAttributes::GetCopyHigherOrderDegrees(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyHigherOrderDegreesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyHigherOrderDegreesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyHigherOrderDegreesOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyHigherOrderDegreesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyHigherOrderDegreesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyHigherOrderDegreesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyHigherOrderDegreesOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyHigherOrderDegreesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_SetCopyProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0;
  int temp1 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetCopyProcessIds(temp0, temp1);
    }
    else
    {
      op->vtkDataSetAttributes::SetCopyProcessIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_GetCopyProcessIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyProcessIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetCopyProcessIds(temp0) :
      op->vtkDataSetAttributes::GetCopyProcessIds(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyProcessIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyProcessIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyProcessIdsOn();
    }
    else
    {
      op->vtkDataSetAttributes::CopyProcessIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyProcessIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyProcessIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyProcessIdsOff();
    }
    else
    {
      op->vtkDataSetAttributes::CopyProcessIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOn(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  int temp0 = vtkDataSetAttributes::ALLCOPY;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOff(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->PassData(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::PassData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1 = 0;
  long long temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyAllocate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  long long temp1 = 0;
  long long temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyAllocate(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyAllocate(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_CopyAllocate_Methods[] = {
  {"CopyAllocate", PyvtkDataSetAttributes_CopyAllocate_s1, METH_VARARGS,
   "@V|kk *vtkDataSetAttributes"},
  {"CopyAllocate", PyvtkDataSetAttributes_CopyAllocate_s3, METH_VARARGS,
   "@W|kk &vtkDataSetAttributesFieldList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_CopyAllocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_CopyAllocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_CopyAllocate_s2(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyAllocate");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_SetupForCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetupForCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetupForCopy(temp0);
    }
    else
    {
      op->vtkDataSetAttributes::SetupForCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyStructuredData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructuredData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  bool temp3 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    if (ap.IsBound())
    {
      op->CopyStructuredData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyStructuredData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  long long temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  long long temp3;
  long long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->CopyData(*temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(*temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyData_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  long long temp3;
  long long temp4;
  long long temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->CopyData(*temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataSetAttributes::CopyData(*temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_CopyData_Methods[] = {
  {"CopyData", PyvtkDataSetAttributes_CopyData_s1, METH_VARARGS,
   "@Vkk *vtkDataSetAttributes"},
  {"CopyData", PyvtkDataSetAttributes_CopyData_s2, METH_VARARGS,
   "@VVV *vtkDataSetAttributes *vtkIdList *vtkIdList"},
  {"CopyData", PyvtkDataSetAttributes_CopyData_s3, METH_VARARGS,
   "@VV|k *vtkDataSetAttributes *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_CopyData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_CopyData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataSetAttributes_CopyData_s3(self, args);
    case 4:
      return PyvtkDataSetAttributes_CopyData_s4(self, args);
    case 5:
      return PyvtkDataSetAttributes_CopyData_s5(self, args);
    case 6:
      return PyvtkDataSetAttributes_CopyData_s6(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyData");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_CopyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->CopyTuple(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuple(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_CopyTuples_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->CopyTuples(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  long long temp2;
  long long temp3;
  long long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->CopyTuples(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::CopyTuples(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_CopyTuples(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_CopyTuples_s1(self, args);
    case 5:
      return PyvtkDataSetAttributes_CopyTuples_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyTuples");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1 = 0;
  long long temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAllocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  long long temp1 = 0;
  long long temp2 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InterpolateAllocate(*temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateAllocate(*temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_InterpolateAllocate_Methods[] = {
  {"InterpolateAllocate", PyvtkDataSetAttributes_InterpolateAllocate_s1, METH_VARARGS,
   "@V|kk *vtkDataSetAttributes"},
  {"InterpolateAllocate", PyvtkDataSetAttributes_InterpolateAllocate_s3, METH_VARARGS,
   "@W|kk &vtkDataSetAttributesFieldList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetAttributes_InterpolateAllocate(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetAttributes_InterpolateAllocate_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_InterpolateAllocate_s2(self, args);
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolateAllocate");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_InterpolatePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->InterpolatePoint(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolatePoint(temp0, temp1, temp2, temp3);
    }

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
PyvtkDataSetAttributes_InterpolatePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolatePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributesFieldList *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  int temp2;
  long long temp3;
  vtkIdList *temp4 = nullptr;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetSpecialObject(temp0, "vtkDataSetAttributesFieldList") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->InterpolatePoint(*temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolatePoint(*temp0, temp1, temp2, temp3, temp4, temp5);
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
PyvtkDataSetAttributes_InterpolatePoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataSetAttributes_InterpolatePoint_s1(self, args);
    case 6:
      return PyvtkDataSetAttributes_InterpolatePoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InterpolatePoint");
  return nullptr;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  long long temp1;
  long long temp2;
  long long temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateEdge(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetAttributes_InterpolateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetAttributes *op = static_cast<vtkDataSetAttributes *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  vtkDataSetAttributes *temp1 = nullptr;
  long long temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes") &&
      ap.GetVTKObject(temp1, "vtkDataSetAttributes") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InterpolateTime(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataSetAttributes::InterpolateTime(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetAttributes_Methods[] = {
  {"ExtendedNew", PyvtkDataSetAttributes_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkDataSetAttributes\nC++: static vtkDataSetAttributes *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkDataSetAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetAttributes\nC++: static vtkDataSetAttributes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkDataSetAttributes_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nInitialize all of the object's data to nullptr Also, clear the\ncopy flags.\n"},
  {"Update", PyvtkDataSetAttributes_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nAttributes have a chance to bring themselves up to date; right\nnow this is ignored.\n"},
  {"DeepCopy", PyvtkDataSetAttributes_DeepCopy, METH_VARARGS,
   "DeepCopy(self, pd:vtkFieldData) -> None\nC++: void DeepCopy(vtkFieldData *pd) override;\n\nDeep copy of data (i.e., create new data arrays and copy from\ninput data). Ignores the copy flags but preserves them in the\noutput.\n"},
  {"ShallowCopy", PyvtkDataSetAttributes_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, pd:vtkFieldData) -> None\nC++: void ShallowCopy(vtkFieldData *pd) override;\n\nShallow copy of data (i.e., use reference counting). Ignores the\ncopy flags but preserves them in the output.\n"},
  {"GhostArrayName", PyvtkDataSetAttributes_GhostArrayName, METH_VARARGS,
   "GhostArrayName() -> str\nC++: static const char *GhostArrayName()\n\n"},
  {"SetScalars", PyvtkDataSetAttributes_SetScalars, METH_VARARGS,
   "SetScalars(self, da:vtkDataArray) -> int\nC++: int SetScalars(vtkDataArray *da)\n\nSet/Get the scalar data.\n"},
  {"SetActiveScalars", PyvtkDataSetAttributes_SetActiveScalars, METH_VARARGS,
   "SetActiveScalars(self, name:str) -> int\nC++: int SetActiveScalars(const char *name)\n\n"},
  {"GetScalars", PyvtkDataSetAttributes_GetScalars, METH_VARARGS,
   "GetScalars(self) -> vtkDataArray\nC++: vtkDataArray *GetScalars()\nGetScalars(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetScalars(const char *name)\n\n"},
  {"SetVectors", PyvtkDataSetAttributes_SetVectors, METH_VARARGS,
   "SetVectors(self, da:vtkDataArray) -> int\nC++: int SetVectors(vtkDataArray *da)\n\nSet/Get the vector data.\n"},
  {"SetActiveVectors", PyvtkDataSetAttributes_SetActiveVectors, METH_VARARGS,
   "SetActiveVectors(self, name:str) -> int\nC++: int SetActiveVectors(const char *name)\n\n"},
  {"GetVectors", PyvtkDataSetAttributes_GetVectors, METH_VARARGS,
   "GetVectors(self) -> vtkDataArray\nC++: vtkDataArray *GetVectors()\nGetVectors(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetVectors(const char *name)\n\n"},
  {"SetNormals", PyvtkDataSetAttributes_SetNormals, METH_VARARGS,
   "SetNormals(self, da:vtkDataArray) -> int\nC++: int SetNormals(vtkDataArray *da)\n\nSet/get the normal data.\n"},
  {"SetActiveNormals", PyvtkDataSetAttributes_SetActiveNormals, METH_VARARGS,
   "SetActiveNormals(self, name:str) -> int\nC++: int SetActiveNormals(const char *name)\n\n"},
  {"GetNormals", PyvtkDataSetAttributes_GetNormals, METH_VARARGS,
   "GetNormals(self) -> vtkDataArray\nC++: vtkDataArray *GetNormals()\nGetNormals(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetNormals(const char *name)\n\n"},
  {"SetTangents", PyvtkDataSetAttributes_SetTangents, METH_VARARGS,
   "SetTangents(self, da:vtkDataArray) -> int\nC++: int SetTangents(vtkDataArray *da)\n\nSet/get the tangent data.\n"},
  {"SetActiveTangents", PyvtkDataSetAttributes_SetActiveTangents, METH_VARARGS,
   "SetActiveTangents(self, name:str) -> int\nC++: int SetActiveTangents(const char *name)\n\n"},
  {"GetTangents", PyvtkDataSetAttributes_GetTangents, METH_VARARGS,
   "GetTangents(self) -> vtkDataArray\nC++: vtkDataArray *GetTangents()\nGetTangents(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetTangents(const char *name)\n\n"},
  {"SetTCoords", PyvtkDataSetAttributes_SetTCoords, METH_VARARGS,
   "SetTCoords(self, da:vtkDataArray) -> int\nC++: int SetTCoords(vtkDataArray *da)\n\nSet/Get the texture coordinate data.\n"},
  {"SetActiveTCoords", PyvtkDataSetAttributes_SetActiveTCoords, METH_VARARGS,
   "SetActiveTCoords(self, name:str) -> int\nC++: int SetActiveTCoords(const char *name)\n\n"},
  {"GetTCoords", PyvtkDataSetAttributes_GetTCoords, METH_VARARGS,
   "GetTCoords(self) -> vtkDataArray\nC++: vtkDataArray *GetTCoords()\nGetTCoords(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetTCoords(const char *name)\n\n"},
  {"SetTensors", PyvtkDataSetAttributes_SetTensors, METH_VARARGS,
   "SetTensors(self, da:vtkDataArray) -> int\nC++: int SetTensors(vtkDataArray *da)\n\nSet/Get the tensor data.\n"},
  {"SetActiveTensors", PyvtkDataSetAttributes_SetActiveTensors, METH_VARARGS,
   "SetActiveTensors(self, name:str) -> int\nC++: int SetActiveTensors(const char *name)\n\n"},
  {"GetTensors", PyvtkDataSetAttributes_GetTensors, METH_VARARGS,
   "GetTensors(self) -> vtkDataArray\nC++: vtkDataArray *GetTensors()\nGetTensors(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetTensors(const char *name)\n\n"},
  {"SetGlobalIds", PyvtkDataSetAttributes_SetGlobalIds, METH_VARARGS,
   "SetGlobalIds(self, da:vtkDataArray) -> int\nC++: int SetGlobalIds(vtkDataArray *da)\n\nSet/Get the global id data.\n"},
  {"SetActiveGlobalIds", PyvtkDataSetAttributes_SetActiveGlobalIds, METH_VARARGS,
   "SetActiveGlobalIds(self, name:str) -> int\nC++: int SetActiveGlobalIds(const char *name)\n\n"},
  {"GetGlobalIds", PyvtkDataSetAttributes_GetGlobalIds, METH_VARARGS,
   "GetGlobalIds(self) -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds()\nGetGlobalIds(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetGlobalIds(const char *name)\n\n"},
  {"SetPedigreeIds", PyvtkDataSetAttributes_SetPedigreeIds, METH_VARARGS,
   "SetPedigreeIds(self, da:vtkAbstractArray) -> int\nC++: int SetPedigreeIds(vtkAbstractArray *da)\n\nSet/Get the pedigree id data.\n"},
  {"SetActivePedigreeIds", PyvtkDataSetAttributes_SetActivePedigreeIds, METH_VARARGS,
   "SetActivePedigreeIds(self, name:str) -> int\nC++: int SetActivePedigreeIds(const char *name)\n\n"},
  {"GetPedigreeIds", PyvtkDataSetAttributes_GetPedigreeIds, METH_VARARGS,
   "GetPedigreeIds(self) -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds()\nGetPedigreeIds(self, name:str) -> vtkAbstractArray\nC++: vtkAbstractArray *GetPedigreeIds(const char *name)\n\n"},
  {"SetRationalWeights", PyvtkDataSetAttributes_SetRationalWeights, METH_VARARGS,
   "SetRationalWeights(self, da:vtkDataArray) -> int\nC++: int SetRationalWeights(vtkDataArray *da)\n\nSet/Get the rational weights data.\n"},
  {"SetActiveRationalWeights", PyvtkDataSetAttributes_SetActiveRationalWeights, METH_VARARGS,
   "SetActiveRationalWeights(self, name:str) -> int\nC++: int SetActiveRationalWeights(const char *name)\n\n"},
  {"GetRationalWeights", PyvtkDataSetAttributes_GetRationalWeights, METH_VARARGS,
   "GetRationalWeights(self) -> vtkDataArray\nC++: vtkDataArray *GetRationalWeights()\nGetRationalWeights(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetRationalWeights(const char *name)\n\n"},
  {"SetHigherOrderDegrees", PyvtkDataSetAttributes_SetHigherOrderDegrees, METH_VARARGS,
   "SetHigherOrderDegrees(self, da:vtkDataArray) -> int\nC++: int SetHigherOrderDegrees(vtkDataArray *da)\n\nSet/Get the rational degrees data.\n"},
  {"SetActiveHigherOrderDegrees", PyvtkDataSetAttributes_SetActiveHigherOrderDegrees, METH_VARARGS,
   "SetActiveHigherOrderDegrees(self, name:str) -> int\nC++: int SetActiveHigherOrderDegrees(const char *name)\n\n"},
  {"GetHigherOrderDegrees", PyvtkDataSetAttributes_GetHigherOrderDegrees, METH_VARARGS,
   "GetHigherOrderDegrees(self) -> vtkDataArray\nC++: vtkDataArray *GetHigherOrderDegrees()\nGetHigherOrderDegrees(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetHigherOrderDegrees(const char *name)\n\n"},
  {"SetProcessIds", PyvtkDataSetAttributes_SetProcessIds, METH_VARARGS,
   "SetProcessIds(self, da:vtkDataArray) -> int\nC++: int SetProcessIds(vtkDataArray *da)\n\nSet/Get the process id data.\n"},
  {"SetActiveProcessIds", PyvtkDataSetAttributes_SetActiveProcessIds, METH_VARARGS,
   "SetActiveProcessIds(self, name:str) -> int\nC++: int SetActiveProcessIds(const char *name)\n\n"},
  {"GetProcessIds", PyvtkDataSetAttributes_GetProcessIds, METH_VARARGS,
   "GetProcessIds(self) -> vtkDataArray\nC++: vtkDataArray *GetProcessIds()\nGetProcessIds(self, name:str) -> vtkDataArray\nC++: vtkDataArray *GetProcessIds(const char *name)\n\n"},
  {"SetActiveAttribute", PyvtkDataSetAttributes_SetActiveAttribute, METH_VARARGS,
   "SetActiveAttribute(self, name:str, attributeType:int) -> int\nC++: int SetActiveAttribute(const char *name, int attributeType)\nSetActiveAttribute(self, index:int, attributeType:int) -> int\nC++: int SetActiveAttribute(int index, int attributeType)\n\nMake the array with the given name the active attribute.\nAttribute types are: vtkDataSetAttributes::SCALARS = 0\nvtkDataSetAttributes::VECTORS = 1 vtkDataSetAttributes::NORMALS =\n2 vtkDataSetAttributes::TCOORDS = 3 vtkDataSetAttributes::TENSORS\n= 4 vtkDataSetAttributes::GLOBALIDS = 5\nvtkDataSetAttributes::PEDIGREEIDS = 6\nvtkDataSetAttributes::EDGEFLAG = 7 vtkDataSetAttributes::TANGENTS\n= 8 vtkDataSetAttributes::RATIONALWEIGHTS = 9\nvtkDataSetAttributes::HIGHERORDERDEGREES = 10\nvtkDataSetAttributes::PROCESSIDS = 11 Returns the index of the\narray if successful, -1 if the array is not in the list of\narrays.\n"},
  {"GetAttributeIndices", PyvtkDataSetAttributes_GetAttributeIndices, METH_VARARGS,
   "GetAttributeIndices(self, indexArray:[int, ...]) -> None\nC++: void GetAttributeIndices(int *indexArray)\n\nGet the field data array indices corresponding to scalars,\nvectors, tensors, etc.  The given buffer must be at least\nNUM_ATTRIBUTES elements big.\n"},
  {"IsArrayAnAttribute", PyvtkDataSetAttributes_IsArrayAnAttribute, METH_VARARGS,
   "IsArrayAnAttribute(self, idx:int) -> int\nC++: int IsArrayAnAttribute(int idx)\n\nDetermine whether a data array of index idx is considered a data\nset attribute (i.e., scalar, vector, tensor, etc). Return\nless-than zero if it is, otherwise an index 0<=idx<NUM_ATTRIBUTES\nto indicate which attribute.\n"},
  {"SetAttribute", PyvtkDataSetAttributes_SetAttribute, METH_VARARGS,
   "SetAttribute(self, aa:vtkAbstractArray, attributeType:int) -> int\nC++: int SetAttribute(vtkAbstractArray *aa, int attributeType)\n\nSet an array to use as the given attribute type (i.e.,\nvtkDataSetAttributes::SCALAR, vtkDataSetAttributes::VECTOR,\nvtkDataSetAttributes::TENSOR, etc.). If this attribute was\npreviously set to another array, that array is removed from the\nvtkDataSetAttributes object and the array aa is used as the\nattribute.\n\n* Returns the index of aa within the vtkDataSetAttributes object\n* (i.e., the index to pass to the method GetArray(int) to obtain\n* aa) if the attribute was set to aa successfully. If aa was\n* already set as the given attributeType, returns the index of\n* aa.\n\n* Returns -1 in the following cases:\n\n* - aa is nullptr (used to unset an attribute; not an error\n  indicator)\n* - aa is not a subclass of vtkDataArray, unless the\n  attributeType\n* is vtkDataSetAttributes::PEDIGREEIDS (error indicator)\n* - aa has a number of components incompatible with the attribute\ntype\n* (error indicator)\n"},
  {"GetAttribute", PyvtkDataSetAttributes_GetAttribute, METH_VARARGS,
   "GetAttribute(self, attributeType:int) -> vtkDataArray\nC++: vtkDataArray *GetAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). Some attributes (such as\nPEDIGREEIDS) may not be vtkDataArray subclass, so in that case\nuse GetAbstractAttribute().\n"},
  {"GetAbstractAttribute", PyvtkDataSetAttributes_GetAbstractAttribute, METH_VARARGS,
   "GetAbstractAttribute(self, attributeType:int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractAttribute(int attributeType)\n\nReturn an attribute given the attribute type (see\nvtkDataSetAttributes::AttributeTypes). This is the same as\nGetAttribute(), except that the returned array is a\nvtkAbstractArray instead of vtkDataArray. Some attributes (such\nas PEDIGREEIDS) may not be vtkDataArray subclass.\n"},
  {"RemoveArray", PyvtkDataSetAttributes_RemoveArray, METH_VARARGS,
   "RemoveArray(self, index:int) -> None\nC++: void RemoveArray(int index) override;\nRemoveArray(self, name:str) -> None\nC++: virtual void RemoveArray(const char *name)\n\nRemove an array (with the given index) from the list of arrays.\n"},
  {"GetAttributeTypeAsString", PyvtkDataSetAttributes_GetAttributeTypeAsString, METH_VARARGS,
   "GetAttributeTypeAsString(attributeType:int) -> str\nC++: static const char *GetAttributeTypeAsString(\n    int attributeType)\n\nGiven an integer attribute type, this static method returns a\nstring type for the attribute (i.e. type = 0: returns \"Scalars\").\n"},
  {"GetLongAttributeTypeAsString", PyvtkDataSetAttributes_GetLongAttributeTypeAsString, METH_VARARGS,
   "GetLongAttributeTypeAsString(attributeType:int) -> str\nC++: static const char *GetLongAttributeTypeAsString(\n    int attributeType)\n\n"},
  {"SetCopyAttribute", PyvtkDataSetAttributes_SetCopyAttribute, METH_VARARGS,
   "SetCopyAttribute(self, index:int, value:int, ctype:int=...)\n    -> None\nC++: void SetCopyAttribute(int index, int value,\n    int ctype=ALLCOPY)\n\nTurn on/off the copying of attribute data. ctype is one of the\nAttributeCopyOperations, and controls copy, interpolate and\npassdata behavior. For set, ctype=ALLCOPY means set all three\nflags to the same value. For get, ctype=ALLCOPY returns true only\nif all three flags are true.\n\n* During copying, interpolation and passdata, the following rules\nare\n* followed for each array:\n* 1. If the copy/interpolate/pass flag for an attribute is set\n  (on or off),\n* it is applied. This overrides rules 2 and 3.\n* 2. If the copy flag for an array is set (on or off), it is\n  applied\n* This overrides rule 3.\n* 3. If CopyAllOn is set, copy the array.\n* If CopyAllOff is set, do not copy the array\n\n* For interpolation, the flag values can be as follows:\n* 0: Do not interpolate.\n* 1: Weighted interpolation.\n* 2: Nearest neighbor interpolation.\n"},
  {"GetCopyAttribute", PyvtkDataSetAttributes_GetCopyAttribute, METH_VARARGS,
   "GetCopyAttribute(self, index:int, ctype:int) -> int\nC++: int GetCopyAttribute(int index, int ctype)\n\nGet the attribute copy flag for copy operation ctype of\nattributeindex.\n"},
  {"SetCopyScalars", PyvtkDataSetAttributes_SetCopyScalars, METH_VARARGS,
   "SetCopyScalars(self, i:int, ctype:int=...) -> None\nC++: void SetCopyScalars(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyScalars", PyvtkDataSetAttributes_GetCopyScalars, METH_VARARGS,
   "GetCopyScalars(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyScalars(int ctype=ALLCOPY)\n\n"},
  {"CopyScalarsOn", PyvtkDataSetAttributes_CopyScalarsOn, METH_VARARGS,
   "CopyScalarsOn(self) -> None\nC++: virtual void CopyScalarsOn()\n\n"},
  {"CopyScalarsOff", PyvtkDataSetAttributes_CopyScalarsOff, METH_VARARGS,
   "CopyScalarsOff(self) -> None\nC++: virtual void CopyScalarsOff()\n\n"},
  {"SetCopyVectors", PyvtkDataSetAttributes_SetCopyVectors, METH_VARARGS,
   "SetCopyVectors(self, i:int, ctype:int=...) -> None\nC++: void SetCopyVectors(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyVectors", PyvtkDataSetAttributes_GetCopyVectors, METH_VARARGS,
   "GetCopyVectors(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyVectors(int ctype=ALLCOPY)\n\n"},
  {"CopyVectorsOn", PyvtkDataSetAttributes_CopyVectorsOn, METH_VARARGS,
   "CopyVectorsOn(self) -> None\nC++: virtual void CopyVectorsOn()\n\n"},
  {"CopyVectorsOff", PyvtkDataSetAttributes_CopyVectorsOff, METH_VARARGS,
   "CopyVectorsOff(self) -> None\nC++: virtual void CopyVectorsOff()\n\n"},
  {"SetCopyNormals", PyvtkDataSetAttributes_SetCopyNormals, METH_VARARGS,
   "SetCopyNormals(self, i:int, ctype:int=...) -> None\nC++: void SetCopyNormals(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyNormals", PyvtkDataSetAttributes_GetCopyNormals, METH_VARARGS,
   "GetCopyNormals(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyNormals(int ctype=ALLCOPY)\n\n"},
  {"CopyNormalsOn", PyvtkDataSetAttributes_CopyNormalsOn, METH_VARARGS,
   "CopyNormalsOn(self) -> None\nC++: virtual void CopyNormalsOn()\n\n"},
  {"CopyNormalsOff", PyvtkDataSetAttributes_CopyNormalsOff, METH_VARARGS,
   "CopyNormalsOff(self) -> None\nC++: virtual void CopyNormalsOff()\n\n"},
  {"SetCopyTangents", PyvtkDataSetAttributes_SetCopyTangents, METH_VARARGS,
   "SetCopyTangents(self, i:int, ctype:int=...) -> None\nC++: void SetCopyTangents(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyTangents", PyvtkDataSetAttributes_GetCopyTangents, METH_VARARGS,
   "GetCopyTangents(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyTangents(int ctype=ALLCOPY)\n\n"},
  {"CopyTangentsOn", PyvtkDataSetAttributes_CopyTangentsOn, METH_VARARGS,
   "CopyTangentsOn(self) -> None\nC++: virtual void CopyTangentsOn()\n\n"},
  {"CopyTangentsOff", PyvtkDataSetAttributes_CopyTangentsOff, METH_VARARGS,
   "CopyTangentsOff(self) -> None\nC++: virtual void CopyTangentsOff()\n\n"},
  {"SetCopyTCoords", PyvtkDataSetAttributes_SetCopyTCoords, METH_VARARGS,
   "SetCopyTCoords(self, i:int, ctype:int=...) -> None\nC++: void SetCopyTCoords(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyTCoords", PyvtkDataSetAttributes_GetCopyTCoords, METH_VARARGS,
   "GetCopyTCoords(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyTCoords(int ctype=ALLCOPY)\n\n"},
  {"CopyTCoordsOn", PyvtkDataSetAttributes_CopyTCoordsOn, METH_VARARGS,
   "CopyTCoordsOn(self) -> None\nC++: virtual void CopyTCoordsOn()\n\n"},
  {"CopyTCoordsOff", PyvtkDataSetAttributes_CopyTCoordsOff, METH_VARARGS,
   "CopyTCoordsOff(self) -> None\nC++: virtual void CopyTCoordsOff()\n\n"},
  {"SetCopyTensors", PyvtkDataSetAttributes_SetCopyTensors, METH_VARARGS,
   "SetCopyTensors(self, i:int, ctype:int=...) -> None\nC++: void SetCopyTensors(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyTensors", PyvtkDataSetAttributes_GetCopyTensors, METH_VARARGS,
   "GetCopyTensors(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyTensors(int ctype=ALLCOPY)\n\n"},
  {"CopyTensorsOn", PyvtkDataSetAttributes_CopyTensorsOn, METH_VARARGS,
   "CopyTensorsOn(self) -> None\nC++: virtual void CopyTensorsOn()\n\n"},
  {"CopyTensorsOff", PyvtkDataSetAttributes_CopyTensorsOff, METH_VARARGS,
   "CopyTensorsOff(self) -> None\nC++: virtual void CopyTensorsOff()\n\n"},
  {"SetCopyGlobalIds", PyvtkDataSetAttributes_SetCopyGlobalIds, METH_VARARGS,
   "SetCopyGlobalIds(self, i:int, ctype:int=...) -> None\nC++: void SetCopyGlobalIds(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyGlobalIds", PyvtkDataSetAttributes_GetCopyGlobalIds, METH_VARARGS,
   "GetCopyGlobalIds(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyGlobalIds(int ctype=ALLCOPY)\n\n"},
  {"CopyGlobalIdsOn", PyvtkDataSetAttributes_CopyGlobalIdsOn, METH_VARARGS,
   "CopyGlobalIdsOn(self) -> None\nC++: virtual void CopyGlobalIdsOn()\n\n"},
  {"CopyGlobalIdsOff", PyvtkDataSetAttributes_CopyGlobalIdsOff, METH_VARARGS,
   "CopyGlobalIdsOff(self) -> None\nC++: virtual void CopyGlobalIdsOff()\n\n"},
  {"SetCopyPedigreeIds", PyvtkDataSetAttributes_SetCopyPedigreeIds, METH_VARARGS,
   "SetCopyPedigreeIds(self, i:int, ctype:int=...) -> None\nC++: void SetCopyPedigreeIds(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyPedigreeIds", PyvtkDataSetAttributes_GetCopyPedigreeIds, METH_VARARGS,
   "GetCopyPedigreeIds(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyPedigreeIds(int ctype=ALLCOPY)\n\n"},
  {"CopyPedigreeIdsOn", PyvtkDataSetAttributes_CopyPedigreeIdsOn, METH_VARARGS,
   "CopyPedigreeIdsOn(self) -> None\nC++: virtual void CopyPedigreeIdsOn()\n\n"},
  {"CopyPedigreeIdsOff", PyvtkDataSetAttributes_CopyPedigreeIdsOff, METH_VARARGS,
   "CopyPedigreeIdsOff(self) -> None\nC++: virtual void CopyPedigreeIdsOff()\n\n"},
  {"SetCopyRationalWeights", PyvtkDataSetAttributes_SetCopyRationalWeights, METH_VARARGS,
   "SetCopyRationalWeights(self, i:int, ctype:int=...) -> None\nC++: void SetCopyRationalWeights(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyRationalWeights", PyvtkDataSetAttributes_GetCopyRationalWeights, METH_VARARGS,
   "GetCopyRationalWeights(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyRationalWeights(int ctype=ALLCOPY)\n\n"},
  {"CopyRationalWeightsOn", PyvtkDataSetAttributes_CopyRationalWeightsOn, METH_VARARGS,
   "CopyRationalWeightsOn(self) -> None\nC++: virtual void CopyRationalWeightsOn()\n\n"},
  {"CopyRationalWeightsOff", PyvtkDataSetAttributes_CopyRationalWeightsOff, METH_VARARGS,
   "CopyRationalWeightsOff(self) -> None\nC++: virtual void CopyRationalWeightsOff()\n\n"},
  {"SetCopyHigherOrderDegrees", PyvtkDataSetAttributes_SetCopyHigherOrderDegrees, METH_VARARGS,
   "SetCopyHigherOrderDegrees(self, i:int, ctype:int=...) -> None\nC++: void SetCopyHigherOrderDegrees(vtkTypeBool i,\n    int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyHigherOrderDegrees", PyvtkDataSetAttributes_GetCopyHigherOrderDegrees, METH_VARARGS,
   "GetCopyHigherOrderDegrees(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyHigherOrderDegrees(int ctype=ALLCOPY)\n\n"},
  {"CopyHigherOrderDegreesOn", PyvtkDataSetAttributes_CopyHigherOrderDegreesOn, METH_VARARGS,
   "CopyHigherOrderDegreesOn(self) -> None\nC++: virtual void CopyHigherOrderDegreesOn()\n\n"},
  {"CopyHigherOrderDegreesOff", PyvtkDataSetAttributes_CopyHigherOrderDegreesOff, METH_VARARGS,
   "CopyHigherOrderDegreesOff(self) -> None\nC++: virtual void CopyHigherOrderDegreesOff()\n\n"},
  {"SetCopyProcessIds", PyvtkDataSetAttributes_SetCopyProcessIds, METH_VARARGS,
   "SetCopyProcessIds(self, i:int, ctype:int=...) -> None\nC++: void SetCopyProcessIds(vtkTypeBool i, int ctype=ALLCOPY)\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"GetCopyProcessIds", PyvtkDataSetAttributes_GetCopyProcessIds, METH_VARARGS,
   "GetCopyProcessIds(self, ctype:int=...) -> int\nC++: vtkTypeBool GetCopyProcessIds(int ctype=ALLCOPY)\n\n"},
  {"CopyProcessIdsOn", PyvtkDataSetAttributes_CopyProcessIdsOn, METH_VARARGS,
   "CopyProcessIdsOn(self) -> None\nC++: virtual void CopyProcessIdsOn()\n\n"},
  {"CopyProcessIdsOff", PyvtkDataSetAttributes_CopyProcessIdsOff, METH_VARARGS,
   "CopyProcessIdsOff(self) -> None\nC++: virtual void CopyProcessIdsOff()\n\n"},
  {"CopyAllOn", PyvtkDataSetAttributes_CopyAllOn, METH_VARARGS,
   "CopyAllOn(self, ctype:int=...) -> None\nC++: void CopyAllOn(int ctype=ALLCOPY) override;\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"CopyAllOff", PyvtkDataSetAttributes_CopyAllOff, METH_VARARGS,
   "CopyAllOff(self, ctype:int=...) -> None\nC++: void CopyAllOff(int ctype=ALLCOPY) override;\n\n@copydoc vtkDataSetAttributes::SetCopyAttribute()\n"},
  {"PassData", PyvtkDataSetAttributes_PassData, METH_VARARGS,
   "PassData(self, fd:vtkFieldData) -> None\nC++: void PassData(vtkFieldData *fd) override;\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags. When passing a field, the following copying rules\nare followed: 1) Check if a field is an attribute, if yes and if\nthere is a PASSDATA copy flag for that attribute (on or off),\nobey the flag for that attribute, ignore (2) and (3), 2) if there\nis a copy field for that field (on or off), obey the flag, ignore\n(3) 3) obey CopyAllOn/Off\n"},
  {"CopyAllocate", PyvtkDataSetAttributes_CopyAllocate, METH_VARARGS,
   "CopyAllocate(self, pd:vtkDataSetAttributes, sze:int=0,\n    ext:int=1000) -> None\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze=0,\n    vtkIdType ext=1000)\nCopyAllocate(self, pd:vtkDataSetAttributes, sze:int, ext:int,\n    shallowCopyArrays:int) -> None\nC++: void CopyAllocate(vtkDataSetAttributes *pd, vtkIdType sze,\n    vtkIdType ext, int shallowCopyArrays)\nCopyAllocate(self, list:vtkDataSetAttributesFieldList, sze:int=0,\n    ext:int=1000) -> None\nC++: void CopyAllocate(vtkDataSetAttributes::FieldList &list,\n    vtkIdType sze=0, vtkIdType ext=1000)\n\nAllocates point data for point-by-point (or cell-by-cell) copy\noperation. If sze=0, then use the input DataSetAttributes to\ncreate (i.e., find initial size of) new objects; otherwise use\nthe sze variable. Note that pd HAS to be the vtkDataSetAttributes\nobject which will later be used with CopyData. If this is not the\ncase, consider using the alternative forms of CopyAllocate and\nCopyData. ext is no longer used. If shallowCopyArrays is true,\ninput arrays are copied to the output instead of new ones being\nallocated.\n"},
  {"SetupForCopy", PyvtkDataSetAttributes_SetupForCopy, METH_VARARGS,
   "SetupForCopy(self, pd:vtkDataSetAttributes) -> None\nC++: void SetupForCopy(vtkDataSetAttributes *pd)\n\nCreate a mapping between the input attributes and this object so\nthat methods like CopyData() and CopyStructuredData() can be\ncalled. This method assumes that this object has the same arrays\nas the input and that they are ordered the same way (same array\nindices).\n"},
  {"CopyStructuredData", PyvtkDataSetAttributes_CopyStructuredData, METH_VARARGS,
   "CopyStructuredData(self, inDsa:vtkDataSetAttributes, inExt:(int,\n    ...), outExt:(int, ...), setSize:bool=True) -> None\nC++: void CopyStructuredData(vtkDataSetAttributes *inDsa,\n    const int *inExt, const int *outExt, bool setSize=true)\n\nThis method is used to copy data arrays in images. You should\ncall CopyAllocate or SetupForCopy before calling this method. If\nsetSize is true, this method will set the size of the output\narrays according to the output extent. This is required when\nCopyAllocate() was used to setup output arrays.\n"},
  {"CopyData", PyvtkDataSetAttributes_CopyData, METH_VARARGS,
   "CopyData(self, fromPd:vtkDataSetAttributes, fromId:int, toId:int)\n    -> None\nC++: void CopyData(vtkDataSetAttributes *fromPd, vtkIdType fromId,\n     vtkIdType toId)\nCopyData(self, fromPd:vtkDataSetAttributes, fromIds:vtkIdList,\n    toIds:vtkIdList) -> None\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdList *fromIds, vtkIdList *toIds)\nCopyData(self, fromPd:vtkDataSetAttributes, fromIds:vtkIdList,\n    destStartId:int=0) -> None\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdList *fromIds, vtkIdType destStartId=0)\nCopyData(self, fromPd:vtkDataSetAttributes, dstStart:int, n:int,\n    srcStart:int) -> None\nC++: void CopyData(vtkDataSetAttributes *fromPd,\n    vtkIdType dstStart, vtkIdType n, vtkIdType srcStart)\nCopyData(self, list:vtkDataSetAttributesFieldList,\n    dsa:vtkDataSetAttributes, idx:int, fromId:int, toId:int)\n    -> None\nC++: void CopyData(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *dsa, int idx, vtkIdType fromId,\n    vtkIdType toId)\nCopyData(self, list:vtkDataSetAttributesFieldList,\n    dsa:vtkDataSetAttributes, idx:int, dstStart:int, n:int,\n    srcStart:int) -> None\nC++: void CopyData(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *dsa, int idx, vtkIdType dstStart,\n    vtkIdType n, vtkIdType srcStart)\n\nCopy the attribute data from one id to another. Make sure\nCopyAllocate() has been invoked before using this method. When\ncopying a field, the following copying rules are followed: 1)\nCheck if a field is an attribute, if yes and if there is a\nCOPYTUPLE copy flag for that attribute (on or off), obey the flag\nfor that attribute, ignore (2) and (3), 2) if there is a copy\nfield for that field (on or off), obey the flag, ignore (3) 3)\nobey CopyAllOn/Off\n\n@warning This method is prone to compile-time ambiguity when\n    called using `0` parameters.\nTo fix the ambiguity, please replace `0` by `vtkIdType(0)`.\n"},
  {"CopyTuple", PyvtkDataSetAttributes_CopyTuple, METH_VARARGS,
   "CopyTuple(self, fromData:vtkAbstractArray,\n    toData:vtkAbstractArray, fromId:int, toId:int) -> None\nC++: void CopyTuple(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType fromId, vtkIdType toId)\n\nCopy a tuple (or set of tuples) of data from one data array to\nanother. This method assumes that the fromData and toData objects\nare of the same type, and have the same number of components.\nThis is true if you invoke CopyAllocate() or\nInterpolateAllocate().\n"},
  {"CopyTuples", PyvtkDataSetAttributes_CopyTuples, METH_VARARGS,
   "CopyTuples(self, fromData:vtkAbstractArray,\n    toData:vtkAbstractArray, fromIds:vtkIdList, toIds:vtkIdList)\n    -> None\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdList *fromIds,\n    vtkIdList *toIds)\nCopyTuples(self, fromData:vtkAbstractArray,\n    toData:vtkAbstractArray, dstStart:int, n:int, srcStart:int)\n    -> None\nC++: void CopyTuples(vtkAbstractArray *fromData,\n    vtkAbstractArray *toData, vtkIdType dstStart, vtkIdType n,\n    vtkIdType srcStart)\n\n"},
  {"InterpolateAllocate", PyvtkDataSetAttributes_InterpolateAllocate, METH_VARARGS,
   "InterpolateAllocate(self, pd:vtkDataSetAttributes, sze:int=0,\n    ext:int=1000) -> None\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze=0, vtkIdType ext=1000)\nInterpolateAllocate(self, pd:vtkDataSetAttributes, sze:int,\n    ext:int, shallowCopyArrays:int) -> None\nC++: void InterpolateAllocate(vtkDataSetAttributes *pd,\n    vtkIdType sze, vtkIdType ext, int shallowCopyArrays)\nInterpolateAllocate(self, list:vtkDataSetAttributesFieldList,\n    sze:int=0, ext:int=1000) -> None\nC++: void InterpolateAllocate(\n    vtkDataSetAttributes::FieldList &list, vtkIdType sze=0,\n    vtkIdType ext=1000)\n\nInitialize point interpolation method. Note that pd HAS to be the\nvtkDataSetAttributes object which will later be used with\nInterpolatePoint or InterpolateEdge. ext is no longer used. If\nshallowCopyArrays is true, input arrays are copied to the output\ninstead of new ones being allocated.\n"},
  {"InterpolatePoint", PyvtkDataSetAttributes_InterpolatePoint, METH_VARARGS,
   "InterpolatePoint(self, fromPd:vtkDataSetAttributes, toId:int,\n    ids:vtkIdList, weights:[float, ...]) -> None\nC++: void InterpolatePoint(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdList *ids, double *weights)\nInterpolatePoint(self, list:vtkDataSetAttributesFieldList,\n    fromPd:vtkDataSetAttributes, idx:int, toId:int, ids:vtkIdList,\n     weights:[float, ...]) -> None\nC++: void InterpolatePoint(vtkDataSetAttributes::FieldList &list,\n    vtkDataSetAttributes *fromPd, int idx, vtkIdType toId,\n    vtkIdList *ids, double *weights)\n\nInterpolate data set attributes from other data set attributes\ngiven cell or point ids and associated interpolation weights. If\nthe INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {"InterpolateEdge", PyvtkDataSetAttributes_InterpolateEdge, METH_VARARGS,
   "InterpolateEdge(self, fromPd:vtkDataSetAttributes, toId:int,\n    p1:int, p2:int, t:float) -> None\nC++: void InterpolateEdge(vtkDataSetAttributes *fromPd,\n    vtkIdType toId, vtkIdType p1, vtkIdType p2, double t)\n\nInterpolate data from the two points p1,p2 (forming an edge) and\nan interpolation factor, t, along the edge. The weight ranges\nfrom (0,1), with t=0 located at p1. Make sure that the method\nInterpolateAllocate() has been invoked before using this method.\nIf the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {"InterpolateTime", PyvtkDataSetAttributes_InterpolateTime, METH_VARARGS,
   "InterpolateTime(self, from1:vtkDataSetAttributes,\n    from2:vtkDataSetAttributes, id:int, t:float) -> None\nC++: void InterpolateTime(vtkDataSetAttributes *from1,\n    vtkDataSetAttributes *from2, vtkIdType id, double t)\n\nInterpolate data from the same id (point or cell) at different\npoints in time (parameter t). Two input data set attributes\nobjects are input. The parameter t lies between (0<=t<=1).\nIMPORTANT: it is assumed that the number of attributes and number\nof components is the same for both from1 and from2, and the type\nof data for from1 and from2 are the same. Make sure that the\nmethod InterpolateAllocate() has been invoked before using this\nmethod. If the INTERPOLATION copy flag is set to 0 for an array,\ninterpolation is prevented. If the flag is set to 1, weighted\ninterpolation occurs. If the flag is set to 2, nearest neighbor\ninterpolation is used.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetAttributes_Doc =
  "vtkDataSetAttributes - represent and manipulate attribute data in a\ndataset\n\n"
  "Superclass: vtkFieldData\n\n"
  "vtkDataSetAttributes is a class that is used to represent and\n"
  "manipulate attribute data (e.g., scalars, vectors, normals, texture\n"
  "coordinates, tensors, global ids, pedigree ids, and field data).\n\n"
  "This adds to vtkFieldData the ability to pick one of the arrays from\n"
  "the field as the currently active array for each attribute type. In\n"
  "other words, you pick one array to be called \"THE\" Scalars, and then\n"
  "filters down the pipeline will treat that array specially. For\n"
  "example vtkContourFilter will contour \"THE\" Scalar array unless a\n"
  "different array is asked for.\n\n"
  "Additionally vtkDataSetAttributes provides methods that filters call\n"
  "to pass data through, copy data into, and interpolate from Fields.\n"
  "PassData passes entire arrays from the source to the destination.\n"
  "Copy passes through some subset of the tuples from the source to the\n"
  "destination. Interpolate interpolates from the chosen tuple(s) in the\n"
  "source data, using the provided weights, to produce new tuples in the\n"
  "destination. Each attribute type has pass, copy and interpolate\n"
  "\"copy\" flags that can be set in the destination to choose which\n"
  "attribute arrays will be transferred from the source to the\n"
  "destination.\n\n"
  "Finally this class provides a mechanism to determine which attributes\n"
  "a group of sources have in common, and to copy tuples from a source\n"
  "into the destination, for only those attributes that are held by all.\n\n"
  "@warning\n"
  "vtkDataSetAttributes is not in general thread safe due to the use of\n"
  "its vtkFieldData::BasicIterator RequiredArrays data member. The class\n"
  "vtkArrayListTemplate augments vtkDataSetAttributes for thread safety.\n\n"
  "@sa vtkArrayListTemplate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSetAttributes", // tp_name
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
  PyvtkDataSetAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetAttributes_StaticNew()
{
  return vtkDataSetAttributes::New();
}

PyObject *PyvtkDataSetAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetAttributes_Type, PyvtkDataSetAttributes_Methods,
    "vtkDataSetAttributes",
 &PyvtkDataSetAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkFieldData_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataSetAttributes_AttributeTypes_Type);
  PyVTKEnum_Add(&PyvtkDataSetAttributes_AttributeTypes_Type, "vtkDataSetAttributes.AttributeTypes");

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_AttributeLimitTypes_Type);
  PyVTKEnum_Add(&PyvtkDataSetAttributes_AttributeLimitTypes_Type, "vtkDataSetAttributes.AttributeLimitTypes");

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeLimitTypes_Type;
  if (PyDict_SetItemString(d, "AttributeLimitTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_CellGhostTypes_Type);
  PyVTKEnum_Add(&PyvtkDataSetAttributes_CellGhostTypes_Type, "vtkDataSetAttributes.CellGhostTypes");

  o = (PyObject *)&PyvtkDataSetAttributes_CellGhostTypes_Type;
  if (PyDict_SetItemString(d, "CellGhostTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_PointGhostTypes_Type);
  PyVTKEnum_Add(&PyvtkDataSetAttributes_PointGhostTypes_Type, "vtkDataSetAttributes.PointGhostTypes");

  o = (PyObject *)&PyvtkDataSetAttributes_PointGhostTypes_Type;
  if (PyDict_SetItemString(d, "PointGhostTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataSetAttributes_AttributeCopyOperations_Type);
  PyVTKEnum_Add(&PyvtkDataSetAttributes_AttributeCopyOperations_Type, "vtkDataSetAttributes.AttributeCopyOperations");

  o = (PyObject *)&PyvtkDataSetAttributes_AttributeCopyOperations_Type;
  if (PyDict_SetItemString(d, "AttributeCopyOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 13; c++)
  {
    typedef vtkDataSetAttributes::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[13] = {
        { "SCALARS", vtkDataSetAttributes::SCALARS },
        { "VECTORS", vtkDataSetAttributes::VECTORS },
        { "NORMALS", vtkDataSetAttributes::NORMALS },
        { "TCOORDS", vtkDataSetAttributes::TCOORDS },
        { "TENSORS", vtkDataSetAttributes::TENSORS },
        { "GLOBALIDS", vtkDataSetAttributes::GLOBALIDS },
        { "PEDIGREEIDS", vtkDataSetAttributes::PEDIGREEIDS },
        { "EDGEFLAG", vtkDataSetAttributes::EDGEFLAG },
        { "TANGENTS", vtkDataSetAttributes::TANGENTS },
        { "RATIONALWEIGHTS", vtkDataSetAttributes::RATIONALWEIGHTS },
        { "HIGHERORDERDEGREES", vtkDataSetAttributes::HIGHERORDERDEGREES },
        { "PROCESSIDS", vtkDataSetAttributes::PROCESSIDS },
        { "NUM_ATTRIBUTES", vtkDataSetAttributes::NUM_ATTRIBUTES },
      };

    o = PyvtkDataSetAttributes_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDataSetAttributes::AttributeLimitTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MAX", vtkDataSetAttributes::MAX },
        { "EXACT", vtkDataSetAttributes::EXACT },
        { "NOLIMIT", vtkDataSetAttributes::NOLIMIT },
      };

    o = PyvtkDataSetAttributes_AttributeLimitTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkDataSetAttributes::CellGhostTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "DUPLICATECELL", vtkDataSetAttributes::DUPLICATECELL },
        { "HIGHCONNECTIVITYCELL", vtkDataSetAttributes::HIGHCONNECTIVITYCELL },
        { "LOWCONNECTIVITYCELL", vtkDataSetAttributes::LOWCONNECTIVITYCELL },
        { "REFINEDCELL", vtkDataSetAttributes::REFINEDCELL },
        { "EXTERIORCELL", vtkDataSetAttributes::EXTERIORCELL },
        { "HIDDENCELL", vtkDataSetAttributes::HIDDENCELL },
      };

    o = PyvtkDataSetAttributes_CellGhostTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkDataSetAttributes::PointGhostTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DUPLICATEPOINT", vtkDataSetAttributes::DUPLICATEPOINT },
        { "HIDDENPOINT", vtkDataSetAttributes::HIDDENPOINT },
      };

    o = PyvtkDataSetAttributes_PointGhostTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkDataSetAttributes::AttributeCopyOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "COPYTUPLE", vtkDataSetAttributes::COPYTUPLE },
        { "INTERPOLATE", vtkDataSetAttributes::INTERPOLATE },
        { "PASSDATA", vtkDataSetAttributes::PASSDATA },
        { "ALLCOPY", vtkDataSetAttributes::ALLCOPY },
      };

    o = PyvtkDataSetAttributes_AttributeCopyOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

