// python wrapper for vtkHeap
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHeap.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHeap(PyObject *dict); }
extern "C" { PyObject *PyvtkHeap_ClassNew(); }


static PyObject *
PyvtkHeap_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHeap::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHeap::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHeap *tempr = vtkHeap::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHeap *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHeap::NewInstance());

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
PyvtkHeap_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHeap::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHeap::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_AllocateMemory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateMemory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->AllocateMemory(temp0) :
      op->vtkHeap::AllocateMemory(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_SetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBlockSize(temp0);
    }
    else
    {
      op->vtkHeap::SetBlockSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_GetBlockSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetBlockSize() :
      op->vtkHeap::GetBlockSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_GetNumberOfBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBlocks() :
      op->vtkHeap::GetNumberOfBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_GetNumberOfAllocations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAllocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAllocations() :
      op->vtkHeap::GetNumberOfAllocations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkHeap::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHeap_StringDup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringDup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHeap *op = static_cast<vtkHeap *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    char *tempr = (ap.IsBound() ?
      op->StringDup(temp0) :
      op->vtkHeap::StringDup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHeap_Methods[] = {
  {"IsTypeOf", PyvtkHeap_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHeap_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHeap_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHeap\nC++: static vtkHeap *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHeap_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHeap\nC++: vtkHeap *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHeap_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHeap_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AllocateMemory", PyvtkHeap_AllocateMemory, METH_VARARGS,
   "AllocateMemory(self, n:int) -> Pointer\nC++: void *AllocateMemory(size_t n)\n\nAllocate the memory requested.\n"},
  {"SetBlockSize", PyvtkHeap_SetBlockSize, METH_VARARGS,
   "SetBlockSize(self, __a:int) -> None\nC++: virtual void SetBlockSize(size_t)\n\nSet/Get the size at which blocks are allocated. If a memory\nrequest is bigger than the block size, then that size will be\nallocated.\n"},
  {"GetBlockSize", PyvtkHeap_GetBlockSize, METH_VARARGS,
   "GetBlockSize(self) -> int\nC++: virtual size_t GetBlockSize()\n\n"},
  {"GetNumberOfBlocks", PyvtkHeap_GetNumberOfBlocks, METH_VARARGS,
   "GetNumberOfBlocks(self) -> int\nC++: virtual int GetNumberOfBlocks()\n\nGet the number of allocations thus far.\n"},
  {"GetNumberOfAllocations", PyvtkHeap_GetNumberOfAllocations, METH_VARARGS,
   "GetNumberOfAllocations(self) -> int\nC++: virtual int GetNumberOfAllocations()\n\n"},
  {"Reset", PyvtkHeap_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nThis methods resets the current allocation location back to the\nbeginning of the heap. This allows reuse of previously allocated\nmemory which may be beneficial to performance in many cases.\n"},
  {"StringDup", PyvtkHeap_StringDup, METH_VARARGS,
   "StringDup(self, str:str) -> str\nC++: char *StringDup(const char *str)\n\nConvenience method performs string duplication.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHeap_Doc =
  "vtkHeap - replacement for malloc/free and new/delete\n\n"
  "Superclass: vtkObject\n\n"
  "This class is a replacement for malloc/free and new/delete for\n"
  "software that has inherent memory leak or performance problems. For\n"
  "example, external software such as the PLY library (vtkPLY) and VRML\n"
  "importer (vtkVRMLImporter) are often written with lots of malloc()\n"
  "calls but without the corresponding free() invocations. The class\n"
  "vtkOrderedTriangulator may create and delete millions of new/delete\n"
  "calls. This class allows the overloading of the C++ new operator (or\n"
  "other memory allocation requests) by using the method\n"
  "AllocateMemory(). Memory is deleted with an invocation of CleanAll()\n"
  "(which deletes ALL memory; any given memory allocation cannot be\n"
  "deleted). Note: a block size can be used to control the size of each\n"
  "memory allocation. Requests for memory are fulfilled from the block\n"
  "until the block runs out, then a new block is created.\n\n"
  "@warning\n"
  "Do not use this class as a general replacement for system memory\n"
  "allocation.  This class should be used only as a last resort if\n"
  "memory leaks cannot be tracked down and eliminated by conventional\n"
  "means. Also, deleting memory from vtkHeap is not supported. Only the\n"
  "deletion of the entire heap is. (A Reset() method allows you to reuse\n"
  "previously allocated memory.)\n\n"
  "@sa\n"
  "vtkVRMLImporter vtkPLY vtkOrderedTriangulator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHeap_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMisc.vtkHeap", // tp_name
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
  PyvtkHeap_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHeap_StaticNew()
{
  return vtkHeap::New();
}

PyObject *PyvtkHeap_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHeap_Type, PyvtkHeap_Methods,
    "vtkHeap",
 &PyvtkHeap_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHeap(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHeap_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHeap", o) != 0)
  {
    Py_DECREF(o);
  }

}

