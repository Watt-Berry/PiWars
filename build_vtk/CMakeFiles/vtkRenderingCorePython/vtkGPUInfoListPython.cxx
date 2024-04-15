// python wrapper for vtkGPUInfoList
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGPUInfoList.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGPUInfoList(PyObject *dict); }
extern "C" { PyObject *PyvtkGPUInfoList_ClassNew(); }


static PyObject *
PyvtkGPUInfoList_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGPUInfoList::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGPUInfoList::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGPUInfoList *tempr = vtkGPUInfoList::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGPUInfoList *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGPUInfoList::NewInstance());

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
PyvtkGPUInfoList_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGPUInfoList::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGPUInfoList::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Probe();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_IsProbed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsProbed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsProbed() :
      op->vtkGPUInfoList::IsProbed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_GetNumberOfGPUs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGPUs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGPUs() :
      op->vtkGPUInfoList::GetNumberOfGPUs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGPUInfoList_GetGPUInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGPUInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGPUInfoList *op = static_cast<vtkGPUInfoList *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkGPUInfo *tempr = (ap.IsBound() ?
      op->GetGPUInfo(temp0) :
      op->vtkGPUInfoList::GetGPUInfo(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGPUInfoList_Methods[] = {
  {"IsTypeOf", PyvtkGPUInfoList_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGPUInfoList_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGPUInfoList_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGPUInfoList\nC++: static vtkGPUInfoList *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGPUInfoList_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGPUInfoList\nC++: vtkGPUInfoList *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGPUInfoList_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGPUInfoList_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Probe", PyvtkGPUInfoList_Probe, METH_VARARGS,
   "Probe(self) -> None\nC++: virtual void Probe()\n\nBuild the list of vtkInfoGPU if not done yet. Default\nimplementation created an empty list. Useful if there is no\nimplementation available for a given architecture yet.\n\\post probed: IsProbed()\n"},
  {"IsProbed", PyvtkGPUInfoList_IsProbed, METH_VARARGS,
   "IsProbed(self) -> bool\nC++: virtual bool IsProbed()\n\nTells if the operating system has been probed. Initial value is\nfalse.\n"},
  {"GetNumberOfGPUs", PyvtkGPUInfoList_GetNumberOfGPUs, METH_VARARGS,
   "GetNumberOfGPUs(self) -> int\nC++: virtual int GetNumberOfGPUs()\n\nReturn the number of GPUs.\n\\pre probed: IsProbed()\n"},
  {"GetGPUInfo", PyvtkGPUInfoList_GetGPUInfo, METH_VARARGS,
   "GetGPUInfo(self, i:int) -> vtkGPUInfo\nC++: virtual vtkGPUInfo *GetGPUInfo(int i)\n\nReturn information about GPU i.\n\\pre probed: IsProbed()\n\\pre valid_index: i>=0 && i<GetNumberOfGPUs()\n\\post result_exists: result!=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGPUInfoList_Doc =
  "vtkGPUInfoList - Stores the list of GPUs VRAM information.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGPUInfoList stores a list of vtkGPUInfo. An host can have several\n"
  "GPUs. It creates and sets the list by probing the host with system\n"
  "calls. This an abstract class. Concrete classes are OS specific.\n"
  "@sa\n"
  "vtkGPUInfo vtkDirectXGPUInfoList vtkCoreGraphicsGPUInfoList\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGPUInfoList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGPUInfoList", // tp_name
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
  PyvtkGPUInfoList_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGPUInfoList_StaticNew()
{
  return vtkGPUInfoList::New();
}

PyObject *PyvtkGPUInfoList_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGPUInfoList_Type, PyvtkGPUInfoList_Methods,
    "vtkGPUInfoList",
 &PyvtkGPUInfoList_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGPUInfoList(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGPUInfoList_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGPUInfoList", o) != 0)
  {
    Py_DECREF(o);
  }

}

