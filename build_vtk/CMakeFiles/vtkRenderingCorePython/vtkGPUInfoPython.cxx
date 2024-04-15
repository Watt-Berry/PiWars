// python wrapper for vtkGPUInfo
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGPUInfo.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUInfo(PyObject *dict); }
extern "C" { PyObject *PyvtkGPUInfo_ClassNew(); }


static PyObject *
PyvtkGPUInfo_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGPUInfo::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUInfo::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGPUInfo *tempr = vtkGPUInfo::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGPUInfo *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUInfo::NewInstance());

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
PyvtkGPUInfo_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGPUInfo::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGPUInfo::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDedicatedVideoMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetDedicatedVideoMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedVideoMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedVideoMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedVideoMemory() :
      op->vtkGPUInfo::GetDedicatedVideoMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDedicatedSystemMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetDedicatedSystemMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetDedicatedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDedicatedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetDedicatedSystemMemory() :
      op->vtkGPUInfo::GetDedicatedSystemMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_SetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  unsigned long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSharedSystemMemory(temp0);
    }
    else
    {
      op->vtkGPUInfo::SetSharedSystemMemory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfo_GetSharedSystemMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSharedSystemMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfo *op = static_cast<vtkGPUInfo *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long long tempr = (ap.IsBound() ?
      op->GetSharedSystemMemory() :
      op->vtkGPUInfo::GetSharedSystemMemory());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUInfo_Methods[] = {
  {"IsTypeOf", PyvtkGPUInfo_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGPUInfo_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGPUInfo_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGPUInfo\nC++: static vtkGPUInfo *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGPUInfo_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGPUInfo\nC++: vtkGPUInfo *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGPUInfo_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGPUInfo_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDedicatedVideoMemory", PyvtkGPUInfo_SetDedicatedVideoMemory, METH_VARARGS,
   "SetDedicatedVideoMemory(self, _arg:int) -> None\nC++: virtual void SetDedicatedVideoMemory(vtkTypeUInt64 _arg)\n\nSet/Get dedicated video memory in bytes. Initial value is 0.\nUsually the fastest one. If it is not 0, it should be taken into\naccount first and DedicatedSystemMemory or SharedSystemMemory\nshould be ignored.\n"},
  {"GetDedicatedVideoMemory", PyvtkGPUInfo_GetDedicatedVideoMemory, METH_VARARGS,
   "GetDedicatedVideoMemory(self) -> int\nC++: virtual vtkTypeUInt64 GetDedicatedVideoMemory()\n\n"},
  {"SetDedicatedSystemMemory", PyvtkGPUInfo_SetDedicatedSystemMemory, METH_VARARGS,
   "SetDedicatedSystemMemory(self, _arg:int) -> None\nC++: virtual void SetDedicatedSystemMemory(vtkTypeUInt64 _arg)\n\nSet/Get dedicated system memory in bytes. Initial value is 0.\nThis is slow memory. If it is not 0, this value should be taken\ninto account only if there is no DedicatedVideoMemory and\nSharedSystemMemory should be ignored.\n"},
  {"GetDedicatedSystemMemory", PyvtkGPUInfo_GetDedicatedSystemMemory, METH_VARARGS,
   "GetDedicatedSystemMemory(self) -> int\nC++: virtual vtkTypeUInt64 GetDedicatedSystemMemory()\n\n"},
  {"SetSharedSystemMemory", PyvtkGPUInfo_SetSharedSystemMemory, METH_VARARGS,
   "SetSharedSystemMemory(self, _arg:int) -> None\nC++: virtual void SetSharedSystemMemory(vtkTypeUInt64 _arg)\n\nSet/Get shared system memory in bytes. Initial value is 0.\nSlowest memory. This value should be taken into account only if\nthere is neither DedicatedVideoMemory nor DedicatedSystemMemory.\n"},
  {"GetSharedSystemMemory", PyvtkGPUInfo_GetSharedSystemMemory, METH_VARARGS,
   "GetSharedSystemMemory(self) -> int\nC++: virtual vtkTypeUInt64 GetSharedSystemMemory()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGPUInfo_Doc =
  "vtkGPUInfo - Stores GPU VRAM information.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGPUInfo stores information about GPU Video RAM. An host can have\n"
  "several GPUs. The values are set by vtkGPUInfoList.\n"
  "@sa\n"
  "vtkGPUInfoList vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGPUInfo_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGPUInfo", // tp_name
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
  PyvtkGPUInfo_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGPUInfo_StaticNew()
{
  return vtkGPUInfo::New();
}

PyObject *PyvtkGPUInfo_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGPUInfo_Type, PyvtkGPUInfo_Methods,
    "vtkGPUInfo",
 &PyvtkGPUInfo_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUInfo(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUInfo_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUInfo", o) != 0)
  {
    Py_DECREF(o);
  }

}

