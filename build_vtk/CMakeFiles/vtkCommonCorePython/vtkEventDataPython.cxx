// python wrapper for vtkEventData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkEventData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEventData(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventDataDevice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventDataDevice", // tp_name
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
PyObject *PyvtkEventDataDevice_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEventDataDevice_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventDataDeviceInput_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventDataDeviceInput", // tp_name
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
PyObject *PyvtkEventDataDeviceInput_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEventDataDeviceInput_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventDataAction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventDataAction", // tp_name
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
PyObject *PyvtkEventDataAction_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEventDataAction_Type, static_cast<int>(val));
}

extern "C" { PyObject *PyvtkEventData_ClassNew(); }

#ifndef DECLARED_PyvtkObjectBase_ClassNew
extern "C" { PyObject *PyvtkObjectBase_ClassNew(); }
#define DECLARED_PyvtkObjectBase_ClassNew
#endif

static PyObject *
PyvtkEventData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEventData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEventData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEventData *tempr = vtkEventData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEventData::NewInstance());

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
PyvtkEventData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEventData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEventData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_GetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetType() :
      op->vtkEventData::GetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkEventData::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_GetAsEventDataForDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsEventDataForDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataForDevice *tempr = (ap.IsBound() ?
      op->GetAsEventDataForDevice() :
      op->vtkEventData::GetAsEventDataForDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventData_GetAsEventDataDevice3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsEventDataDevice3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventData *op = static_cast<vtkEventData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataDevice3D *tempr = (ap.IsBound() ?
      op->GetAsEventDataDevice3D() :
      op->vtkEventData::GetAsEventDataDevice3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEventData_Methods[] = {
  {"IsTypeOf", PyvtkEventData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEventData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEventData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEventData\nC++: static vtkEventData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEventData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEventData\nC++: vtkEventData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEventData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEventData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetType", PyvtkEventData_GetType, METH_VARARGS,
   "GetType(self) -> int\nC++: int GetType()\n\n"},
  {"SetType", PyvtkEventData_SetType, METH_VARARGS,
   "SetType(self, val:int) -> None\nC++: void SetType(int val)\n\n"},
  {"GetAsEventDataForDevice", PyvtkEventData_GetAsEventDataForDevice, METH_VARARGS,
   "GetAsEventDataForDevice(self) -> vtkEventDataForDevice\nC++: virtual vtkEventDataForDevice *GetAsEventDataForDevice()\n\n"},
  {"GetAsEventDataDevice3D", PyvtkEventData_GetAsEventDataDevice3D, METH_VARARGS,
   "GetAsEventDataDevice3D(self) -> vtkEventDataDevice3D\nC++: virtual vtkEventDataDevice3D *GetAsEventDataDevice3D()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEventData_Doc =
  "vtkEventData - no description provided.\n\n"
  "Superclass: vtkObjectBase\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventData", // tp_name
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
  PyvtkEventData_Doc, // tp_doc
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

PyObject *PyvtkEventData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEventData_Type, PyvtkEventData_Methods,
    "vtkEventData",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObjectBase_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkEventDataForDevice_ClassNew(); }

#ifndef DECLARED_PyvtkEventData_ClassNew
extern "C" { PyObject *PyvtkEventData_ClassNew(); }
#define DECLARED_PyvtkEventData_ClassNew
#endif

static PyObject *
PyvtkEventDataForDevice_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEventDataForDevice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEventDataForDevice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEventDataForDevice *tempr = vtkEventDataForDevice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataForDevice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEventDataForDevice::NewInstance());

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
PyvtkEventDataForDevice_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEventDataForDevice::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEventDataForDevice::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_GetDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataDevice tempr = (ap.IsBound() ?
      op->GetDevice() :
      op->vtkEventDataForDevice::GetDevice());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkEventDataDevice");
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataDeviceInput tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkEventDataForDevice::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkEventDataDeviceInput");
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_GetAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataAction tempr = (ap.IsBound() ?
      op->GetAction() :
      op->vtkEventDataForDevice::GetAction());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildEnumValue(tempr, "vtkEventDataAction");
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_SetDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  vtkEventDataDevice temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkEventDataDevice"))
  {
    if (ap.IsBound())
    {
      op->SetDevice(temp0);
    }
    else
    {
      op->vtkEventDataForDevice::SetDevice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  vtkEventDataDeviceInput temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkEventDataDeviceInput"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkEventDataForDevice::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_SetAction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  vtkEventDataAction temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkEventDataAction"))
  {
    if (ap.IsBound())
    {
      op->SetAction(temp0);
    }
    else
    {
      op->vtkEventDataForDevice::SetAction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_DeviceMatches(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeviceMatches");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  vtkEventDataDevice temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkEventDataDevice"))
  {
    bool tempr = (ap.IsBound() ?
      op->DeviceMatches(temp0) :
      op->vtkEventDataForDevice::DeviceMatches(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataForDevice_GetAsEventDataForDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsEventDataForDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataForDevice *op = static_cast<vtkEventDataForDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataForDevice *tempr = (ap.IsBound() ?
      op->GetAsEventDataForDevice() :
      op->vtkEventDataForDevice::GetAsEventDataForDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEventDataForDevice_Methods[] = {
  {"IsTypeOf", PyvtkEventDataForDevice_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEventDataForDevice_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEventDataForDevice_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEventDataForDevice\nC++: static vtkEventDataForDevice *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEventDataForDevice_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEventDataForDevice\nC++: vtkEventDataForDevice *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEventDataForDevice_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEventDataForDevice_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDevice", PyvtkEventDataForDevice_GetDevice, METH_VARARGS,
   "GetDevice(self) -> vtkEventDataDevice\nC++: vtkEventDataDevice GetDevice()\n\n"},
  {"GetInput", PyvtkEventDataForDevice_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkEventDataDeviceInput\nC++: vtkEventDataDeviceInput GetInput()\n\n"},
  {"GetAction", PyvtkEventDataForDevice_GetAction, METH_VARARGS,
   "GetAction(self) -> vtkEventDataAction\nC++: vtkEventDataAction GetAction()\n\n"},
  {"SetDevice", PyvtkEventDataForDevice_SetDevice, METH_VARARGS,
   "SetDevice(self, v:vtkEventDataDevice) -> None\nC++: void SetDevice(vtkEventDataDevice v)\n\n"},
  {"SetInput", PyvtkEventDataForDevice_SetInput, METH_VARARGS,
   "SetInput(self, v:vtkEventDataDeviceInput) -> None\nC++: void SetInput(vtkEventDataDeviceInput v)\n\n"},
  {"SetAction", PyvtkEventDataForDevice_SetAction, METH_VARARGS,
   "SetAction(self, v:vtkEventDataAction) -> None\nC++: void SetAction(vtkEventDataAction v)\n\n"},
  {"DeviceMatches", PyvtkEventDataForDevice_DeviceMatches, METH_VARARGS,
   "DeviceMatches(self, val:vtkEventDataDevice) -> bool\nC++: bool DeviceMatches(vtkEventDataDevice val)\n\n"},
  {"GetAsEventDataForDevice", PyvtkEventDataForDevice_GetAsEventDataForDevice, METH_VARARGS,
   "GetAsEventDataForDevice(self) -> vtkEventDataForDevice\nC++: vtkEventDataForDevice *GetAsEventDataForDevice() override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEventDataForDevice_Doc =
  "vtkEventDataForDevice - no description provided.\n\n"
  "Superclass: vtkEventData\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventDataForDevice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventDataForDevice", // tp_name
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
  PyvtkEventDataForDevice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEventDataForDevice_StaticNew()
{
  return vtkEventDataForDevice::New();
}

PyObject *PyvtkEventDataForDevice_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEventDataForDevice_Type, PyvtkEventDataForDevice_Methods,
    "vtkEventDataForDevice",
 &PyvtkEventDataForDevice_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEventData_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkEventDataDevice3D_ClassNew(); }

#ifndef DECLARED_PyvtkEventDataForDevice_ClassNew
extern "C" { PyObject *PyvtkEventDataForDevice_ClassNew(); }
#define DECLARED_PyvtkEventDataForDevice_ClassNew
#endif

static PyObject *
PyvtkEventDataDevice3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEventDataDevice3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEventDataDevice3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEventDataDevice3D *tempr = vtkEventDataDevice3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataDevice3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEventDataDevice3D::NewInstance());

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
PyvtkEventDataDevice3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEventDataDevice3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEventDataDevice3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetAsEventDataDevice3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAsEventDataDevice3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEventDataDevice3D *tempr = (ap.IsBound() ?
      op->GetAsEventDataDevice3D() :
      op->vtkEventDataDevice3D::GetAsEventDataDevice3D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

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
      op->GetWorldPosition(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::GetWorldPosition(temp0);
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
PyvtkEventDataDevice3D_GetWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetWorldPosition() :
      op->vtkEventDataDevice3D::GetWorldPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_GetWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventDataDevice3D_GetWorldPosition_s1(self, args);
    case 0:
      return PyvtkEventDataDevice3D_GetWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkEventDataDevice3D_SetWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWorldPosition(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::SetWorldPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetWorldDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

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
      op->GetWorldDirection(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::GetWorldDirection(temp0);
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
PyvtkEventDataDevice3D_GetWorldDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetWorldDirection() :
      op->vtkEventDataDevice3D::GetWorldDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_GetWorldDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventDataDevice3D_GetWorldDirection_s1(self, args);
    case 0:
      return PyvtkEventDataDevice3D_GetWorldDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldDirection");
  return nullptr;
}


static PyObject *
PyvtkEventDataDevice3D_SetWorldDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWorldDirection(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::SetWorldDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetWorldOrientation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetWorldOrientation(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::GetWorldOrientation(temp0);
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
PyvtkEventDataDevice3D_GetWorldOrientation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetWorldOrientation() :
      op->vtkEventDataDevice3D::GetWorldOrientation());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_GetWorldOrientation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventDataDevice3D_GetWorldOrientation_s1(self, args);
    case 0:
      return PyvtkEventDataDevice3D_GetWorldOrientation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetWorldOrientation");
  return nullptr;
}


static PyObject *
PyvtkEventDataDevice3D_SetWorldOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWorldOrientation(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::SetWorldOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEventDataDevice3D_GetTrackPadPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrackPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetTrackPadPosition(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::GetTrackPadPosition(temp0);
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
PyvtkEventDataDevice3D_GetTrackPadPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTrackPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetTrackPadPosition() :
      op->vtkEventDataDevice3D::GetTrackPadPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_GetTrackPadPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventDataDevice3D_GetTrackPadPosition_s1(self, args);
    case 0:
      return PyvtkEventDataDevice3D_GetTrackPadPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTrackPadPosition");
  return nullptr;
}


static PyObject *
PyvtkEventDataDevice3D_SetTrackPadPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrackPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTrackPadPosition(temp0);
    }
    else
    {
      op->vtkEventDataDevice3D::SetTrackPadPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_SetTrackPadPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrackPadPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEventDataDevice3D *op = static_cast<vtkEventDataDevice3D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTrackPadPosition(temp0, temp1);
    }
    else
    {
      op->vtkEventDataDevice3D::SetTrackPadPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkEventDataDevice3D_SetTrackPadPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkEventDataDevice3D_SetTrackPadPosition_s1(self, args);
    case 2:
      return PyvtkEventDataDevice3D_SetTrackPadPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTrackPadPosition");
  return nullptr;
}

static PyMethodDef PyvtkEventDataDevice3D_Methods[] = {
  {"IsTypeOf", PyvtkEventDataDevice3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEventDataDevice3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEventDataDevice3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEventDataDevice3D\nC++: static vtkEventDataDevice3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEventDataDevice3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEventDataDevice3D\nC++: vtkEventDataDevice3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEventDataDevice3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEventDataDevice3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetAsEventDataDevice3D", PyvtkEventDataDevice3D_GetAsEventDataDevice3D, METH_VARARGS,
   "GetAsEventDataDevice3D(self) -> vtkEventDataDevice3D\nC++: vtkEventDataDevice3D *GetAsEventDataDevice3D() override;\n\n"},
  {"GetWorldPosition", PyvtkEventDataDevice3D_GetWorldPosition, METH_VARARGS,
   "GetWorldPosition(self, v:[float, float, float]) -> None\nC++: void GetWorldPosition(double v[3])\nGetWorldPosition(self) -> (float, float, float)\nC++: const double *GetWorldPosition()\n\n"},
  {"SetWorldPosition", PyvtkEventDataDevice3D_SetWorldPosition, METH_VARARGS,
   "SetWorldPosition(self, p:(float, float, float)) -> None\nC++: void SetWorldPosition(const double p[3])\n\n"},
  {"GetWorldDirection", PyvtkEventDataDevice3D_GetWorldDirection, METH_VARARGS,
   "GetWorldDirection(self, v:[float, float, float]) -> None\nC++: void GetWorldDirection(double v[3])\nGetWorldDirection(self) -> (float, float, float)\nC++: const double *GetWorldDirection()\n\n"},
  {"SetWorldDirection", PyvtkEventDataDevice3D_SetWorldDirection, METH_VARARGS,
   "SetWorldDirection(self, p:(float, float, float)) -> None\nC++: void SetWorldDirection(const double p[3])\n\n"},
  {"GetWorldOrientation", PyvtkEventDataDevice3D_GetWorldOrientation, METH_VARARGS,
   "GetWorldOrientation(self, v:[float, float, float, float]) -> None\nC++: void GetWorldOrientation(double v[4])\nGetWorldOrientation(self) -> (float, float, float, float)\nC++: const double *GetWorldOrientation()\n\n"},
  {"SetWorldOrientation", PyvtkEventDataDevice3D_SetWorldOrientation, METH_VARARGS,
   "SetWorldOrientation(self, p:(float, float, float, float)) -> None\nC++: void SetWorldOrientation(const double p[4])\n\n"},
  {"GetTrackPadPosition", PyvtkEventDataDevice3D_GetTrackPadPosition, METH_VARARGS,
   "GetTrackPadPosition(self, v:[float, float]) -> None\nC++: void GetTrackPadPosition(double v[2])\nGetTrackPadPosition(self) -> (float, float)\nC++: const double *GetTrackPadPosition()\n\n"},
  {"SetTrackPadPosition", PyvtkEventDataDevice3D_SetTrackPadPosition, METH_VARARGS,
   "SetTrackPadPosition(self, p:(float, float)) -> None\nC++: void SetTrackPadPosition(const double p[2])\nSetTrackPadPosition(self, x:float, y:float) -> None\nC++: void SetTrackPadPosition(double x, double y)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEventDataDevice3D_Doc =
  "vtkEventDataDevice3D - no description provided.\n\n"
  "Superclass: vtkEventDataForDevice\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEventDataDevice3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkEventDataDevice3D", // tp_name
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
  PyvtkEventDataDevice3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEventDataDevice3D_StaticNew()
{
  return vtkEventDataDevice3D::New();
}

PyObject *PyvtkEventDataDevice3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEventDataDevice3D_Type, PyvtkEventDataDevice3D_Methods,
    "vtkEventDataDevice3D",
 &PyvtkEventDataDevice3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEventDataForDevice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEventData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEventData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEventData", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkEventDataForDevice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEventDataForDevice", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkEventDataDevice3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEventDataDevice3D", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEventDataDevice_Type);
  // members of vtkEventDataDevice
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkEventDataDevice_Type.tp_dict = enumdict;

    typedef vtkEventDataDevice cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[7] = {
      { "Unknown", cxx_enum_type::Unknown },
      { "HeadMountedDisplay", cxx_enum_type::HeadMountedDisplay },
      { "RightController", cxx_enum_type::RightController },
      { "LeftController", cxx_enum_type::LeftController },
      { "GenericTracker", cxx_enum_type::GenericTracker },
      { "Any", cxx_enum_type::Any },
      { "NumberOfDevices", cxx_enum_type::NumberOfDevices },
    };

    for (int c = 0; c < 7; c++)
    {
      enumval = PyvtkEventDataDevice_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkEventDataDevice_Type, "vtkEventDataDevice");

  o = (PyObject *)&PyvtkEventDataDevice_Type;
  if (PyDict_SetItemString(dict, "vtkEventDataDevice", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEventDataDeviceInput_Type);
  // members of vtkEventDataDeviceInput
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkEventDataDeviceInput_Type.tp_dict = enumdict;

    typedef vtkEventDataDeviceInput cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[8] = {
      { "Unknown", cxx_enum_type::Unknown },
      { "Any", cxx_enum_type::Any },
      { "Trigger", cxx_enum_type::Trigger },
      { "TrackPad", cxx_enum_type::TrackPad },
      { "Joystick", cxx_enum_type::Joystick },
      { "Grip", cxx_enum_type::Grip },
      { "ApplicationMenu", cxx_enum_type::ApplicationMenu },
      { "NumberOfInputs", cxx_enum_type::NumberOfInputs },
    };

    for (int c = 0; c < 8; c++)
    {
      enumval = PyvtkEventDataDeviceInput_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkEventDataDeviceInput_Type, "vtkEventDataDeviceInput");

  o = (PyObject *)&PyvtkEventDataDeviceInput_Type;
  if (PyDict_SetItemString(dict, "vtkEventDataDeviceInput", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEventDataAction_Type);
  // members of vtkEventDataAction
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkEventDataAction_Type.tp_dict = enumdict;

    typedef vtkEventDataAction cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[7] = {
      { "Unknown", cxx_enum_type::Unknown },
      { "Any", cxx_enum_type::Any },
      { "Press", cxx_enum_type::Press },
      { "Release", cxx_enum_type::Release },
      { "Touch", cxx_enum_type::Touch },
      { "Untouch", cxx_enum_type::Untouch },
      { "NumberOfActions", cxx_enum_type::NumberOfActions },
    };

    for (int c = 0; c < 7; c++)
    {
      enumval = PyvtkEventDataAction_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkEventDataAction_Type, "vtkEventDataAction");

  o = (PyObject *)&PyvtkEventDataAction_Type;
  if (PyDict_SetItemString(dict, "vtkEventDataAction", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "vtkEventDataNumberOfDevices", (static_cast < int > (vtkEventDataDevice::NumberOfDevices)) },
        { "vtkEventDataNumberOfInputs", (static_cast < int > (vtkEventDataDeviceInput::NumberOfInputs)) },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

