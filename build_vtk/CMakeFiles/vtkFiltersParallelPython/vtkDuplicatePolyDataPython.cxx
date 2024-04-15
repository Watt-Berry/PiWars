// python wrapper for vtkDuplicatePolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDuplicatePolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDuplicatePolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkDuplicatePolyData_ClassNew(); }


static PyObject *
PyvtkDuplicatePolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDuplicatePolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDuplicatePolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDuplicatePolyData *tempr = vtkDuplicatePolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDuplicatePolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDuplicatePolyData::NewInstance());

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
PyvtkDuplicatePolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDuplicatePolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDuplicatePolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkDuplicatePolyData::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_InitializeSchedule(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeSchedule");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InitializeSchedule(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::InitializeSchedule(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSynchronous(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetSynchronous(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSynchronous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSynchronous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSynchronous() :
      op->vtkDuplicatePolyData::GetSynchronous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronousOn();
    }
    else
    {
      op->vtkDuplicatePolyData::SynchronousOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SynchronousOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SynchronousOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SynchronousOff();
    }
    else
    {
      op->vtkDuplicatePolyData::SynchronousOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->GetSocketController() :
      op->vtkDuplicatePolyData::GetSocketController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetSocketController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocketController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  vtkSocketController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketController"))
  {
    if (ap.IsBound())
    {
      op->SetSocketController(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetSocketController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_SetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetClientFlag(temp0);
    }
    else
    {
      op->vtkDuplicatePolyData::SetClientFlag(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetClientFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClientFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClientFlag() :
      op->vtkDuplicatePolyData::GetClientFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDuplicatePolyData_GetMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDuplicatePolyData *op = static_cast<vtkDuplicatePolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMemorySize() :
      op->vtkDuplicatePolyData::GetMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDuplicatePolyData_Methods[] = {
  {"IsTypeOf", PyvtkDuplicatePolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDuplicatePolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDuplicatePolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDuplicatePolyData\nC++: static vtkDuplicatePolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDuplicatePolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDuplicatePolyData\nC++: vtkDuplicatePolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDuplicatePolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDuplicatePolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkDuplicatePolyData_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nBy default this filter uses the global controller, but this\nmethod can be used to set another instead.\n"},
  {"GetController", PyvtkDuplicatePolyData_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"InitializeSchedule", PyvtkDuplicatePolyData_InitializeSchedule, METH_VARARGS,
   "InitializeSchedule(self, numProcs:int) -> None\nC++: void InitializeSchedule(int numProcs)\n\n"},
  {"SetSynchronous", PyvtkDuplicatePolyData_SetSynchronous, METH_VARARGS,
   "SetSynchronous(self, _arg:int) -> None\nC++: virtual void SetSynchronous(vtkTypeBool _arg)\n\nThis flag causes sends and receives to be matched. When this flag\nis off, two sends occur then two receives. I want to see if it\nmakes a difference in performance. The flag is on by default.\n"},
  {"GetSynchronous", PyvtkDuplicatePolyData_GetSynchronous, METH_VARARGS,
   "GetSynchronous(self) -> int\nC++: virtual vtkTypeBool GetSynchronous()\n\n"},
  {"SynchronousOn", PyvtkDuplicatePolyData_SynchronousOn, METH_VARARGS,
   "SynchronousOn(self) -> None\nC++: virtual void SynchronousOn()\n\n"},
  {"SynchronousOff", PyvtkDuplicatePolyData_SynchronousOff, METH_VARARGS,
   "SynchronousOff(self) -> None\nC++: virtual void SynchronousOff()\n\n"},
  {"GetSocketController", PyvtkDuplicatePolyData_GetSocketController, METH_VARARGS,
   "GetSocketController(self) -> vtkSocketController\nC++: vtkSocketController *GetSocketController()\n\nThis duplicate filter works in client server mode when this\ncontroller is set.  We have a client flag to differentiate the\nclient and server because the socket controller is odd: Proth\nprocesses think their id is 0.\n"},
  {"SetSocketController", PyvtkDuplicatePolyData_SetSocketController, METH_VARARGS,
   "SetSocketController(self, controller:vtkSocketController) -> None\nC++: void SetSocketController(vtkSocketController *controller)\n\n"},
  {"SetClientFlag", PyvtkDuplicatePolyData_SetClientFlag, METH_VARARGS,
   "SetClientFlag(self, _arg:int) -> None\nC++: virtual void SetClientFlag(int _arg)\n\n"},
  {"GetClientFlag", PyvtkDuplicatePolyData_GetClientFlag, METH_VARARGS,
   "GetClientFlag(self) -> int\nC++: virtual int GetClientFlag()\n\n"},
  {"GetMemorySize", PyvtkDuplicatePolyData_GetMemorySize, METH_VARARGS,
   "GetMemorySize(self) -> int\nC++: virtual unsigned long GetMemorySize()\n\nThis returns to size of the output (on this process). This method\nis not really used.  It is needed to have the same API as\nvtkCollectPolyData.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDuplicatePolyData_Doc =
  "vtkDuplicatePolyData - For distributed tiled displays.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter collects poly data and duplicates it on every node.\n"
  "Converts data parallel so every node has a complete copy of the data.\n"
  "The filter is used at the end of a pipeline for driving a tiled\n"
  "display.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDuplicatePolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkDuplicatePolyData", // tp_name
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
  PyvtkDuplicatePolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDuplicatePolyData_StaticNew()
{
  return vtkDuplicatePolyData::New();
}

PyObject *PyvtkDuplicatePolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDuplicatePolyData_Type, PyvtkDuplicatePolyData_Methods,
    "vtkDuplicatePolyData",
 &PyvtkDuplicatePolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDuplicatePolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDuplicatePolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDuplicatePolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

