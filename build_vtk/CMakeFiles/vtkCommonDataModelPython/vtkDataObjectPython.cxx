// python wrapper for vtkDataObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObject(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObject_FieldAssociations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObject.FieldAssociations", // tp_name
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
PyObject *PyvtkDataObject_FieldAssociations_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataObject_FieldAssociations_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObject_AttributeTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObject.AttributeTypes", // tp_name
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
PyObject *PyvtkDataObject_AttributeTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataObject_AttributeTypes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObject_FieldOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObject.FieldOperations", // tp_name
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
PyObject *PyvtkDataObject_FieldOperations_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataObject_FieldOperations_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObject *tempr = vtkDataObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObject::NewInstance());

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
PyvtkDataObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetInformation() :
      op->vtkDataObject::GetInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->SetInformation(temp0);
    }
    else
    {
      op->vtkDataObject::SetInformation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDataObject::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataObject::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ReleaseData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseData();
    }
    else
    {
      op->vtkDataObject::ReleaseData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataReleased(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataReleased");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataReleased() :
      op->vtkDataObject::GetDataReleased());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetGlobalReleaseDataFlag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalReleaseDataFlag");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataObject::SetGlobalReleaseDataFlag(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlobalReleaseDataFlagOn();
    }
    else
    {
      op->vtkDataObject::GlobalReleaseDataFlagOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GlobalReleaseDataFlagOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlobalReleaseDataFlagOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GlobalReleaseDataFlagOff();
    }
    else
    {
      op->vtkDataObject::GlobalReleaseDataFlagOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetGlobalReleaseDataFlag(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalReleaseDataFlag");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDataObject::GetGlobalReleaseDataFlag();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkDataObject::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDataObject::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDataObject::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetUpdateTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpdateTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUpdateTime() :
      op->vtkDataObject::GetUpdateTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataObject::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkDataObject::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkDataObject::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetActiveFieldInformation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetActiveFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkInformation *tempr = vtkDataObject::GetActiveFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetNamedFieldInformation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNamedFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkInformation *tempr = vtkDataObject::GetNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_RemoveNamedFieldInformation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RemoveNamedFieldInformation");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataObject::RemoveNamedFieldInformation(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttribute(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttribute");

  vtkInformation *temp0 = nullptr;
  int temp1;
  const char *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkInformation *tempr = vtkDataObject::SetActiveAttribute(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetActiveAttributeInfo(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetActiveAttributeInfo");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  const char *temp3 = nullptr;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkDataObject::SetActiveAttributeInfo(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SetPointDataActiveScalarInfo(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetPointDataActiveScalarInfo");

  vtkInformation *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkDataObject::SetPointDataActiveScalarInfo(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DataHasBeenGenerated(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataHasBeenGenerated");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DataHasBeenGenerated();
    }
    else
    {
      op->vtkDataObject::DataHasBeenGenerated();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrepareForNewData();
    }
    else
    {
      op->vtkDataObject::PrepareForNewData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataObject::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataObject::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkDataObject::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_Crop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Crop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->Crop(temp0);
    }
    else
    {
      op->vtkDataObject::Crop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkDataObject::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostArray(temp0) :
      op->vtkDataObject::GetGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkDataObject::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeTypeForArray(temp0) :
      op->vtkDataObject::GetAttributeTypeForArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObject *op = static_cast<vtkDataObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkDataObject::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkDataObject::GetAssociationTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetAssociationTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAssociationTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObject::GetAssociationTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TYPE_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TYPE_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkDataObject::DATA_TYPE_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_OBJECT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_OBJECT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectKey *tempr = vtkDataObject::DATA_OBJECT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_EXTENT_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerPointerKey *tempr = vtkDataObject::DATA_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ALL_PIECES_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ALL_PIECES_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::ALL_PIECES_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_PIECE_NUMBER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_PIECE_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_PIECE_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_PIECES(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_PIECES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_PIECES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_NUMBER_OF_GHOST_LEVELS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::DATA_NUMBER_OF_GHOST_LEVELS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DATA_TIME_STEP(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DATA_TIME_STEP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkDataObject::DATA_TIME_STEP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_POINT_DATA_VECTOR(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "POINT_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::POINT_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_CELL_DATA_VECTOR(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CELL_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::CELL_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_VERTEX_DATA_VECTOR(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "VERTEX_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::VERTEX_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_EDGE_DATA_VECTOR(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EDGE_DATA_VECTOR");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationInformationVectorKey *tempr = vtkDataObject::EDGE_DATA_VECTOR();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ARRAY_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ARRAY_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ARRAY_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ASSOCIATION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ASSOCIATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ASSOCIATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ATTRIBUTE_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ATTRIBUTE_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ATTRIBUTE_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_ACTIVE_ATTRIBUTE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_ACTIVE_ATTRIBUTE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_COMPONENTS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_COMPONENTS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NUMBER_OF_TUPLES(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NUMBER_OF_TUPLES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_NUMBER_OF_TUPLES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_OPERATION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_OPERATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDataObject::FIELD_OPERATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_RANGE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_RANGE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::FIELD_RANGE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_PIECE_EXTENT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PIECE_EXTENT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerVectorKey *tempr = vtkDataObject::PIECE_EXTENT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_FIELD_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkDataObject::FIELD_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_ORIGIN(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGIN");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::ORIGIN();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SPACING(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SPACING");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::SPACING();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_DIRECTION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DIRECTION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::DIRECTION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_BOUNDING_BOX(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "BOUNDING_BOX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkDataObject::BOUNDING_BOX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_SIL(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SIL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectKey *tempr = vtkDataObject::SIL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObject_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObject_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataObject *tempr = vtkDataObject::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObject_GetData_Methods[] = {
  {"GetData", PyvtkDataObject_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkDataObject_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataObject_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataObject_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataObject_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkDataObject_Methods[] = {
  {"IsTypeOf", PyvtkDataObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObject\nC++: static vtkDataObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObject\nC++: vtkDataObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInformation", PyvtkDataObject_GetInformation, METH_VARARGS,
   "GetInformation(self) -> vtkInformation\nC++: virtual vtkInformation *GetInformation()\n\nSet/Get the information object associated with this data object.\n"},
  {"SetInformation", PyvtkDataObject_SetInformation, METH_VARARGS,
   "SetInformation(self, __a:vtkInformation) -> None\nC++: virtual void SetInformation(vtkInformation *)\n\n"},
  {"GetMTime", PyvtkDataObject_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nData objects are composite objects and need to check each part\nfor MTime. The information object also needs to be considered.\n"},
  {"Initialize", PyvtkDataObject_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {"ReleaseData", PyvtkDataObject_ReleaseData, METH_VARARGS,
   "ReleaseData(self) -> None\nC++: void ReleaseData()\n\nRelease data back to system to conserve memory resource. Used\nduring visualization network execution.  Releasing this data does\nnot make down-stream data invalid.\n"},
  {"GetDataReleased", PyvtkDataObject_GetDataReleased, METH_VARARGS,
   "GetDataReleased(self) -> int\nC++: virtual vtkTypeBool GetDataReleased()\n\nGet the flag indicating the data has been released.\n"},
  {"SetGlobalReleaseDataFlag", PyvtkDataObject_SetGlobalReleaseDataFlag, METH_VARARGS,
   "SetGlobalReleaseDataFlag(val:int) -> None\nC++: static void SetGlobalReleaseDataFlag(vtkTypeBool val)\n\nTurn on/off flag to control whether every object releases its\ndata after being used by a filter.\n"},
  {"GlobalReleaseDataFlagOn", PyvtkDataObject_GlobalReleaseDataFlagOn, METH_VARARGS,
   "GlobalReleaseDataFlagOn(self) -> None\nC++: void GlobalReleaseDataFlagOn()\n\n"},
  {"GlobalReleaseDataFlagOff", PyvtkDataObject_GlobalReleaseDataFlagOff, METH_VARARGS,
   "GlobalReleaseDataFlagOff(self) -> None\nC++: void GlobalReleaseDataFlagOff()\n\n"},
  {"GetGlobalReleaseDataFlag", PyvtkDataObject_GetGlobalReleaseDataFlag, METH_VARARGS,
   "GetGlobalReleaseDataFlag() -> int\nC++: static vtkTypeBool GetGlobalReleaseDataFlag()\n\n"},
  {"SetFieldData", PyvtkDataObject_SetFieldData, METH_VARARGS,
   "SetFieldData(self, __a:vtkFieldData) -> None\nC++: virtual void SetFieldData(vtkFieldData *)\n\nAssign or retrieve a general field data to this data object.\n"},
  {"GetFieldData", PyvtkDataObject_GetFieldData, METH_VARARGS,
   "GetFieldData(self) -> vtkFieldData\nC++: virtual vtkFieldData *GetFieldData()\n\n"},
  {"GetDataObjectType", PyvtkDataObject_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: virtual int GetDataObjectType()\n\nReturn class name of data type. This is one of\nVTK_STRUCTURED_GRID, VTK_STRUCTURED_POINTS,\nVTK_UNSTRUCTURED_GRID, VTK_POLY_DATA, or VTK_RECTILINEAR_GRID\n(see vtkSetGet.h for definitions). THIS METHOD IS THREAD SAFE\n"},
  {"GetUpdateTime", PyvtkDataObject_GetUpdateTime, METH_VARARGS,
   "GetUpdateTime(self) -> int\nC++: vtkMTimeType GetUpdateTime()\n\nUsed by Threaded ports to determine if they should initiate an\nasynchronous update (still in development).\n"},
  {"GetActualMemorySize", PyvtkDataObject_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value).\n"},
  {"CopyInformationFromPipeline", PyvtkDataObject_CopyInformationFromPipeline, METH_VARARGS,
   "CopyInformationFromPipeline(self, info:vtkInformation) -> None\nC++: virtual void CopyInformationFromPipeline(\n    vtkInformation *info)\n\nCopy from the pipeline information to the data object's own\ninformation. Called right before the main execution pass.\n"},
  {"CopyInformationToPipeline", PyvtkDataObject_CopyInformationToPipeline, METH_VARARGS,
   "CopyInformationToPipeline(self, info:vtkInformation) -> None\nC++: virtual void CopyInformationToPipeline(vtkInformation *info)\n\nCopy information from this data object to the pipeline\ninformation. This is used by the vtkTrivialProducer that is\ncreated when someone calls SetInputData() to connect a data\nobject to a pipeline.\n"},
  {"GetActiveFieldInformation", PyvtkDataObject_GetActiveFieldInformation, METH_VARARGS,
   "GetActiveFieldInformation(info:vtkInformation,\n    fieldAssociation:int, attributeType:int) -> vtkInformation\nC++: static vtkInformation *GetActiveFieldInformation(\n    vtkInformation *info, int fieldAssociation, int attributeType)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and\nattribute (SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS)\n"},
  {"GetNamedFieldInformation", PyvtkDataObject_GetNamedFieldInformation, METH_VARARGS,
   "GetNamedFieldInformation(info:vtkInformation,\n    fieldAssociation:int, name:str) -> vtkInformation\nC++: static vtkInformation *GetNamedFieldInformation(\n    vtkInformation *info, int fieldAssociation, const char *name)\n\nReturn the information object within the input information\nobject's field data corresponding to the specified association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS) and name.\n"},
  {"RemoveNamedFieldInformation", PyvtkDataObject_RemoveNamedFieldInformation, METH_VARARGS,
   "RemoveNamedFieldInformation(info:vtkInformation,\n    fieldAssociation:int, name:str) -> None\nC++: static void RemoveNamedFieldInformation(vtkInformation *info,\n     int fieldAssociation, const char *name)\n\nRemove the info associated with an array\n"},
  {"SetActiveAttribute", PyvtkDataObject_SetActiveAttribute, METH_VARARGS,
   "SetActiveAttribute(info:vtkInformation, fieldAssociation:int,\n    attributeName:str, attributeType:int) -> vtkInformation\nC++: static vtkInformation *SetActiveAttribute(\n    vtkInformation *info, int fieldAssociation,\n    const char *attributeName, int attributeType)\n\nSet the named array to be the active field for the specified type\n(SCALARS, VECTORS, NORMALS, TCOORDS, or TENSORS) and association\n(FIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  Returns\nthe active field information object and creates on entry if one\nnot found.\n"},
  {"SetActiveAttributeInfo", PyvtkDataObject_SetActiveAttributeInfo, METH_VARARGS,
   "SetActiveAttributeInfo(info:vtkInformation, fieldAssociation:int,\n    attributeType:int, name:str, arrayType:int, numComponents:int,\n     numTuples:int) -> None\nC++: static void SetActiveAttributeInfo(vtkInformation *info,\n    int fieldAssociation, int attributeType, const char *name,\n    int arrayType, int numComponents, int numTuples)\n\nSet the name, array type, number of components, and number of\ntuples within the passed information object for the active\nattribute of type attributeType (in specified association,\nFIELD_ASSOCIATION_POINTS or FIELD_ASSOCIATION_CELLS).  If there\nis not an active attribute of the specified type, an entry in the\ninformation object is created.  If arrayType, numComponents, or\nnumTuples equal to -1, or name=nullptr the value is not changed.\n"},
  {"SetPointDataActiveScalarInfo", PyvtkDataObject_SetPointDataActiveScalarInfo, METH_VARARGS,
   "SetPointDataActiveScalarInfo(info:vtkInformation, arrayType:int,\n    numComponents:int) -> None\nC++: static void SetPointDataActiveScalarInfo(\n    vtkInformation *info, int arrayType, int numComponents)\n\nConvenience version of previous method for use (primarily) by the\nImaging filters. If arrayType or numComponents == -1, the value\nis not changed.\n"},
  {"DataHasBeenGenerated", PyvtkDataObject_DataHasBeenGenerated, METH_VARARGS,
   "DataHasBeenGenerated(self) -> None\nC++: void DataHasBeenGenerated()\n\nThis method is called by the source when it executes to generate\ndata. It is sort of the opposite of ReleaseData. It sets the\nDataReleased flag to 0, and sets a new UpdateTime.\n"},
  {"PrepareForNewData", PyvtkDataObject_PrepareForNewData, METH_VARARGS,
   "PrepareForNewData(self) -> None\nC++: virtual void PrepareForNewData()\n\nmake the output data ready for new data to be inserted. For most\nobjects we just call Initialize. But for vtkImageData we leave\nthe old data in case the memory can be reused.\n"},
  {"ShallowCopy", PyvtkDataObject_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: virtual void ShallowCopy(vtkDataObject *src)\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"DeepCopy", PyvtkDataObject_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: virtual void DeepCopy(vtkDataObject *src)\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetExtentType", PyvtkDataObject_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: virtual int GetExtentType()\n\nThe ExtentType will be left as VTK_PIECES_EXTENT for data objects\nsuch as vtkPolyData and vtkUnstructuredGrid. The ExtentType will\nbe changed to VTK_3D_EXTENT for data objects with 3D structure\nsuch as vtkImageData (and its subclass vtkStructuredPoints),\nvtkRectilinearGrid, and vtkStructuredGrid. The default is the\nhave an extent in pieces, with only one piece (no streaming\npossible).\n"},
  {"Crop", PyvtkDataObject_Crop, METH_VARARGS,
   "Crop(self, updateExtent:(int, ...)) -> None\nC++: virtual void Crop(const int *updateExtent)\n\nThis method crops the data object (if necessary) so that the\nextent matches the update extent.\n"},
  {"GetAttributes", PyvtkDataObject_GetAttributes, METH_VARARGS,
   "GetAttributes(self, type:int) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetAttributes(int type)\n\nReturns the attributes of the data object of the specified\nattribute type. The type may be:  POINT  - Defined in vtkDataSet\nsubclasses. CELL   - Defined in vtkDataSet subclasses. VERTEX -\nDefined in vtkGraph subclasses. EDGE   - Defined in vtkGraph\nsubclasses. ROW    - Defined in vtkTable.  The other attribute\ntype, FIELD, will return nullptr since field data is stored as a\nvtkFieldData instance, not a vtkDataSetAttributes instance. To\nretrieve field data, use GetAttributesAsFieldData.\n\n@warning This method NEEDS to be\noverridden in subclasses to work as documented. If not, it\nreturns nullptr for any type but FIELD.\n"},
  {"GetGhostArray", PyvtkDataObject_GetGhostArray, METH_VARARGS,
   "GetGhostArray(self, type:int) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetGhostArray(int type)\n\nReturns the ghost arrays of the data object of the specified\nattribute type. The type may be:  POINT    - Defined in\nvtkDataSet subclasses CELL   - Defined in vtkDataSet subclasses. \nThe other attribute types, will return nullptr since ghosts\narrays are not defined for now outside of point or cell.\n"},
  {"GetAttributesAsFieldData", PyvtkDataObject_GetAttributesAsFieldData, METH_VARARGS,
   "GetAttributesAsFieldData(self, type:int) -> vtkFieldData\nC++: virtual vtkFieldData *GetAttributesAsFieldData(int type)\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {"GetAttributeTypeForArray", PyvtkDataObject_GetAttributeTypeForArray, METH_VARARGS,
   "GetAttributeTypeForArray(self, arr:vtkAbstractArray) -> int\nC++: virtual int GetAttributeTypeForArray(vtkAbstractArray *arr)\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {"GetNumberOfElements", PyvtkDataObject_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: virtual vtkIdType GetNumberOfElements(int type)\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetAssociationTypeAsString", PyvtkDataObject_GetAssociationTypeAsString, METH_VARARGS,
   "GetAssociationTypeAsString(associationType:int) -> str\nC++: static const char *GetAssociationTypeAsString(\n    int associationType)\n\nGiven an integer association type, this static method returns a\nstring type for the attribute (i.e. associationType = 0: returns\n\"Points\").\n"},
  {"GetAssociationTypeFromString", PyvtkDataObject_GetAssociationTypeFromString, METH_VARARGS,
   "GetAssociationTypeFromString(associationName:str) -> int\nC++: static int GetAssociationTypeFromString(\n    const char *associationName)\n\nGiven a string association name, this static method returns an\ninteger association type for the attribute (i.e. associationName\n= \"Points\": returns 0).\n"},
  {"DATA_TYPE_NAME", PyvtkDataObject_DATA_TYPE_NAME, METH_VARARGS,
   "DATA_TYPE_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *DATA_TYPE_NAME()\n\n"},
  {"DATA_OBJECT", PyvtkDataObject_DATA_OBJECT, METH_VARARGS,
   "DATA_OBJECT() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *DATA_OBJECT()\n\n"},
  {"DATA_EXTENT_TYPE", PyvtkDataObject_DATA_EXTENT_TYPE, METH_VARARGS,
   "DATA_EXTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_EXTENT_TYPE()\n\n"},
  {"DATA_EXTENT", PyvtkDataObject_DATA_EXTENT, METH_VARARGS,
   "DATA_EXTENT() -> vtkInformationIntegerPointerKey\nC++: static vtkInformationIntegerPointerKey *DATA_EXTENT()\n\n"},
  {"ALL_PIECES_EXTENT", PyvtkDataObject_ALL_PIECES_EXTENT, METH_VARARGS,
   "ALL_PIECES_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *ALL_PIECES_EXTENT()\n\n"},
  {"DATA_PIECE_NUMBER", PyvtkDataObject_DATA_PIECE_NUMBER, METH_VARARGS,
   "DATA_PIECE_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_PIECE_NUMBER()\n\n"},
  {"DATA_NUMBER_OF_PIECES", PyvtkDataObject_DATA_NUMBER_OF_PIECES, METH_VARARGS,
   "DATA_NUMBER_OF_PIECES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_PIECES()\n\n"},
  {"DATA_NUMBER_OF_GHOST_LEVELS", PyvtkDataObject_DATA_NUMBER_OF_GHOST_LEVELS, METH_VARARGS,
   "DATA_NUMBER_OF_GHOST_LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DATA_NUMBER_OF_GHOST_LEVELS(\n    )\n\n"},
  {"DATA_TIME_STEP", PyvtkDataObject_DATA_TIME_STEP, METH_VARARGS,
   "DATA_TIME_STEP() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *DATA_TIME_STEP()\n\n"},
  {"POINT_DATA_VECTOR", PyvtkDataObject_POINT_DATA_VECTOR, METH_VARARGS,
   "POINT_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *POINT_DATA_VECTOR(\n    )\n\n"},
  {"CELL_DATA_VECTOR", PyvtkDataObject_CELL_DATA_VECTOR, METH_VARARGS,
   "CELL_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *CELL_DATA_VECTOR()\n\n"},
  {"VERTEX_DATA_VECTOR", PyvtkDataObject_VERTEX_DATA_VECTOR, METH_VARARGS,
   "VERTEX_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *VERTEX_DATA_VECTOR(\n    )\n\n"},
  {"EDGE_DATA_VECTOR", PyvtkDataObject_EDGE_DATA_VECTOR, METH_VARARGS,
   "EDGE_DATA_VECTOR() -> vtkInformationInformationVectorKey\nC++: static vtkInformationInformationVectorKey *EDGE_DATA_VECTOR()\n\n"},
  {"FIELD_ARRAY_TYPE", PyvtkDataObject_FIELD_ARRAY_TYPE, METH_VARARGS,
   "FIELD_ARRAY_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ARRAY_TYPE()\n\n"},
  {"FIELD_ASSOCIATION", PyvtkDataObject_FIELD_ASSOCIATION, METH_VARARGS,
   "FIELD_ASSOCIATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ASSOCIATION()\n\n"},
  {"FIELD_ATTRIBUTE_TYPE", PyvtkDataObject_FIELD_ATTRIBUTE_TYPE, METH_VARARGS,
   "FIELD_ATTRIBUTE_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ATTRIBUTE_TYPE()\n\n"},
  {"FIELD_ACTIVE_ATTRIBUTE", PyvtkDataObject_FIELD_ACTIVE_ATTRIBUTE, METH_VARARGS,
   "FIELD_ACTIVE_ATTRIBUTE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_ACTIVE_ATTRIBUTE()\n\n"},
  {"FIELD_NUMBER_OF_COMPONENTS", PyvtkDataObject_FIELD_NUMBER_OF_COMPONENTS, METH_VARARGS,
   "FIELD_NUMBER_OF_COMPONENTS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_COMPONENTS()\n\n"},
  {"FIELD_NUMBER_OF_TUPLES", PyvtkDataObject_FIELD_NUMBER_OF_TUPLES, METH_VARARGS,
   "FIELD_NUMBER_OF_TUPLES() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_NUMBER_OF_TUPLES()\n\n"},
  {"FIELD_OPERATION", PyvtkDataObject_FIELD_OPERATION, METH_VARARGS,
   "FIELD_OPERATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_OPERATION()\n\n"},
  {"FIELD_RANGE", PyvtkDataObject_FIELD_RANGE, METH_VARARGS,
   "FIELD_RANGE() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *FIELD_RANGE()\n\n"},
  {"PIECE_EXTENT", PyvtkDataObject_PIECE_EXTENT, METH_VARARGS,
   "PIECE_EXTENT() -> vtkInformationIntegerVectorKey\nC++: static vtkInformationIntegerVectorKey *PIECE_EXTENT()\n\n"},
  {"FIELD_NAME", PyvtkDataObject_FIELD_NAME, METH_VARARGS,
   "FIELD_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *FIELD_NAME()\n\n"},
  {"ORIGIN", PyvtkDataObject_ORIGIN, METH_VARARGS,
   "ORIGIN() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *ORIGIN()\n\n"},
  {"SPACING", PyvtkDataObject_SPACING, METH_VARARGS,
   "SPACING() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SPACING()\n\n"},
  {"DIRECTION", PyvtkDataObject_DIRECTION, METH_VARARGS,
   "DIRECTION() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *DIRECTION()\n\n"},
  {"BOUNDING_BOX", PyvtkDataObject_BOUNDING_BOX, METH_VARARGS,
   "BOUNDING_BOX() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *BOUNDING_BOX()\n\n"},
  {"SIL", PyvtkDataObject_SIL, METH_VARARGS,
   "SIL() -> vtkInformationDataObjectKey\nC++: static vtkInformationDataObjectKey *SIL()\n\n"},
  {"GetData", PyvtkDataObject_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkDataObject\nC++: static vtkDataObject *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObject_Doc =
  "vtkDataObject - general representation of visualization data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataObject is an general representation of visualization data. It\n"
  "serves to encapsulate instance variables and methods for\n"
  "visualization network execution, as well as representing data\n"
  "consisting of a field (i.e., just an unstructured pile of data). This\n"
  "is to be compared with a vtkDataSet, which is data with geometric\n"
  "and/or topological structure.\n\n"
  "vtkDataObjects are used to represent arbitrary repositories of data\n"
  "via the vtkFieldData instance variable. These data must be eventually\n"
  "mapped into a concrete subclass of vtkDataSet before they can\n"
  "actually be displayed.\n\n"
  "@sa\n"
  "vtkDataSet vtkFieldData vtkDataObjectToDataSetFilter\n"
  "vtkFieldDataToAttributeDataFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataObject", // tp_name
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
  PyvtkDataObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObject_StaticNew()
{
  return vtkDataObject::New();
}

PyObject *PyvtkDataObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObject_Type, PyvtkDataObject_Methods,
    "vtkDataObject",
 &PyvtkDataObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataObject_FieldAssociations_Type);
  PyVTKEnum_Add(&PyvtkDataObject_FieldAssociations_Type, "vtkDataObject.FieldAssociations");

  o = (PyObject *)&PyvtkDataObject_FieldAssociations_Type;
  if (PyDict_SetItemString(d, "FieldAssociations", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataObject_AttributeTypes_Type);
  PyVTKEnum_Add(&PyvtkDataObject_AttributeTypes_Type, "vtkDataObject.AttributeTypes");

  o = (PyObject *)&PyvtkDataObject_AttributeTypes_Type;
  if (PyDict_SetItemString(d, "AttributeTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkDataObject_FieldOperations_Type);
  PyVTKEnum_Add(&PyvtkDataObject_FieldOperations_Type, "vtkDataObject.FieldOperations");

  o = (PyObject *)&PyvtkDataObject_FieldOperations_Type;
  if (PyDict_SetItemString(d, "FieldOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDataObject::FieldAssociations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "FIELD_ASSOCIATION_POINTS", vtkDataObject::FIELD_ASSOCIATION_POINTS },
        { "FIELD_ASSOCIATION_CELLS", vtkDataObject::FIELD_ASSOCIATION_CELLS },
        { "FIELD_ASSOCIATION_NONE", vtkDataObject::FIELD_ASSOCIATION_NONE },
        { "FIELD_ASSOCIATION_POINTS_THEN_CELLS", vtkDataObject::FIELD_ASSOCIATION_POINTS_THEN_CELLS },
        { "FIELD_ASSOCIATION_VERTICES", vtkDataObject::FIELD_ASSOCIATION_VERTICES },
        { "FIELD_ASSOCIATION_EDGES", vtkDataObject::FIELD_ASSOCIATION_EDGES },
        { "FIELD_ASSOCIATION_ROWS", vtkDataObject::FIELD_ASSOCIATION_ROWS },
        { "NUMBER_OF_ASSOCIATIONS", vtkDataObject::NUMBER_OF_ASSOCIATIONS },
      };

    o = PyvtkDataObject_FieldAssociations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDataObject::AttributeTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "POINT", vtkDataObject::POINT },
        { "CELL", vtkDataObject::CELL },
        { "FIELD", vtkDataObject::FIELD },
        { "POINT_THEN_CELL", vtkDataObject::POINT_THEN_CELL },
        { "VERTEX", vtkDataObject::VERTEX },
        { "EDGE", vtkDataObject::EDGE },
        { "ROW", vtkDataObject::ROW },
        { "NUMBER_OF_ATTRIBUTE_TYPES", vtkDataObject::NUMBER_OF_ATTRIBUTE_TYPES },
      };

    o = PyvtkDataObject_AttributeTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkDataObject::FieldOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "FIELD_OPERATION_PRESERVED", vtkDataObject::FIELD_OPERATION_PRESERVED },
        { "FIELD_OPERATION_REINTERPOLATED", vtkDataObject::FIELD_OPERATION_REINTERPOLATED },
        { "FIELD_OPERATION_MODIFIED", vtkDataObject::FIELD_OPERATION_MODIFIED },
        { "FIELD_OPERATION_REMOVED", vtkDataObject::FIELD_OPERATION_REMOVED },
      };

    o = PyvtkDataObject_FieldOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObject", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_PIECES_EXTENT", 0 },
        { "VTK_3D_EXTENT", 1 },
        { "VTK_TIME_EXTENT", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

