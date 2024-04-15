// python wrapper for vtkAbstractInteractionDevice
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractInteractionDevice.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractInteractionDevice(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractInteractionDevice_ClassNew(); }


static PyObject *
PyvtkAbstractInteractionDevice_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractInteractionDevice::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractInteractionDevice::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractInteractionDevice *tempr = vtkAbstractInteractionDevice::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractInteractionDevice *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractInteractionDevice::NewInstance());

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
PyvtkAbstractInteractionDevice_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractInteractionDevice::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractInteractionDevice::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Initialize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_Start(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Start");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Start();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_ProcessEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ProcessEvents();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SetRenderWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  vtkRenderWidget *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWidget"))
  {
    if (ap.IsBound())
    {
      op->SetRenderWidget(temp0);
    }
    else
    {
      op->vtkAbstractInteractionDevice::SetRenderWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_GetRenderWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWidget *tempr = (ap.IsBound() ?
      op->GetRenderWidget() :
      op->vtkAbstractInteractionDevice::GetRenderWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_SetRenderDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  vtkAbstractRenderDevice *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractRenderDevice"))
  {
    if (ap.IsBound())
    {
      op->SetRenderDevice(temp0);
    }
    else
    {
      op->vtkAbstractInteractionDevice::SetRenderDevice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractInteractionDevice_GetRenderDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractInteractionDevice *op = static_cast<vtkAbstractInteractionDevice *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractRenderDevice *tempr = (ap.IsBound() ?
      op->GetRenderDevice() :
      op->vtkAbstractInteractionDevice::GetRenderDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractInteractionDevice_Methods[] = {
  {"IsTypeOf", PyvtkAbstractInteractionDevice_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractInteractionDevice_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractInteractionDevice_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractInteractionDevice\nC++: static vtkAbstractInteractionDevice *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractInteractionDevice_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractInteractionDevice\nC++: vtkAbstractInteractionDevice *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractInteractionDevice_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractInteractionDevice_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkAbstractInteractionDevice_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nInitialize the interaction device.\n"},
  {"Start", PyvtkAbstractInteractionDevice_Start, METH_VARARGS,
   "Start(self) -> None\nC++: virtual void Start()\n\nStart the event loop.\n"},
  {"ProcessEvents", PyvtkAbstractInteractionDevice_ProcessEvents, METH_VARARGS,
   "ProcessEvents(self) -> None\nC++: virtual void ProcessEvents()\n\nProcess any pending events, this can be used to process OS level\nevents without running a full event loop.\n"},
  {"SetRenderWidget", PyvtkAbstractInteractionDevice_SetRenderWidget, METH_VARARGS,
   "SetRenderWidget(self, widget:vtkRenderWidget) -> None\nC++: void SetRenderWidget(vtkRenderWidget *widget)\n\n"},
  {"GetRenderWidget", PyvtkAbstractInteractionDevice_GetRenderWidget, METH_VARARGS,
   "GetRenderWidget(self) -> vtkRenderWidget\nC++: vtkRenderWidget *GetRenderWidget()\n\n"},
  {"SetRenderDevice", PyvtkAbstractInteractionDevice_SetRenderDevice, METH_VARARGS,
   "SetRenderDevice(self, device:vtkAbstractRenderDevice) -> None\nC++: void SetRenderDevice(vtkAbstractRenderDevice *device)\n\n"},
  {"GetRenderDevice", PyvtkAbstractInteractionDevice_GetRenderDevice, METH_VARARGS,
   "GetRenderDevice(self) -> vtkAbstractRenderDevice\nC++: vtkAbstractRenderDevice *GetRenderDevice()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractInteractionDevice_Doc =
  "vtkAbstractInteractionDevice - no description provided.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractInteractionDevice_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAbstractInteractionDevice", // tp_name
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
  PyvtkAbstractInteractionDevice_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAbstractInteractionDevice_StaticNew()
{
  return vtkAbstractInteractionDevice::New();
}

PyObject *PyvtkAbstractInteractionDevice_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractInteractionDevice_Type, PyvtkAbstractInteractionDevice_Methods,
    "vtkAbstractInteractionDevice",
 &PyvtkAbstractInteractionDevice_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractInteractionDevice(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractInteractionDevice_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractInteractionDevice", o) != 0)
  {
    Py_DECREF(o);
  }

}

