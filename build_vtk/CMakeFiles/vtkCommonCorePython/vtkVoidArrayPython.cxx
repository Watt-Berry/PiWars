// python wrapper for vtkVoidArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVoidArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoidArray(PyObject *dict); }
extern "C" { PyObject *PyvtkVoidArray_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkVoidArray_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkVoidArray *tempr = vtkVoidArray::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoidArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoidArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoidArray *tempr = vtkVoidArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoidArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoidArray::NewInstance());

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
PyvtkVoidArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVoidArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVoidArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkVoidArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkVoidArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkVoidArray::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkVoidArray::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_SetNumberOfPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointers(temp0);
    }
    else
    {
      op->vtkVoidArray::SetNumberOfPointers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_GetNumberOfPointers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPointers() :
      op->vtkVoidArray::GetNumberOfPointers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_GetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetVoidPointer(temp0) :
      op->vtkVoidArray::GetVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_SetVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  long long temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->SetVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkVoidArray::SetVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkVoidArray_InsertVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  long long temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->InsertVoidPointer(temp0, temp1);
    }
    else
    {
      op->vtkVoidArray::InsertVoidPointer(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkVoidArray_InsertNextVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextVoidPointer(temp0) :
      op->vtkVoidArray::InsertNextVoidPointer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkVoidArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkVoidArray::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkVoidArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoidArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoidArray *op = static_cast<vtkVoidArray *>(vp);

  vtkVoidArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVoidArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkVoidArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVoidArray_Methods[] = {
  {"ExtendedNew", PyvtkVoidArray_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkVoidArray\nC++: static vtkVoidArray *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkVoidArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVoidArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVoidArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVoidArray\nC++: static vtkVoidArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVoidArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVoidArray\nC++: vtkVoidArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVoidArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVoidArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkVoidArray_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: vtkTypeBool Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary. Note that the parameter ext is no longer used.\n"},
  {"Initialize", PyvtkVoidArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nRelease storage and reset array to initial state.\n"},
  {"GetDataType", PyvtkVoidArray_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: int GetDataType()\n\nReturn the type of data.\n"},
  {"GetDataTypeSize", PyvtkVoidArray_GetDataTypeSize, METH_VARARGS,
   "GetDataTypeSize(self) -> int\nC++: int GetDataTypeSize()\n\nReturn the size of the data contained in the array.\n"},
  {"SetNumberOfPointers", PyvtkVoidArray_SetNumberOfPointers, METH_VARARGS,
   "SetNumberOfPointers(self, number:int) -> None\nC++: void SetNumberOfPointers(vtkIdType number)\n\nSet the number of void* pointers held in the array.\n"},
  {"GetNumberOfPointers", PyvtkVoidArray_GetNumberOfPointers, METH_VARARGS,
   "GetNumberOfPointers(self) -> int\nC++: vtkIdType GetNumberOfPointers()\n\nGet the number of void* pointers held in the array.\n"},
  {"GetVoidPointer", PyvtkVoidArray_GetVoidPointer, METH_VARARGS,
   "GetVoidPointer(self, id:int) -> Pointer\nC++: void *GetVoidPointer(vtkIdType id)\n\nGet the void* pointer at the ith location.\n"},
  {"SetVoidPointer", PyvtkVoidArray_SetVoidPointer, METH_VARARGS,
   "SetVoidPointer(self, id:int, ptr:Pointer) -> None\nC++: void SetVoidPointer(vtkIdType id, void *ptr)\n\nSet the void* pointer value at the ith location in the array.\n"},
  {"InsertVoidPointer", PyvtkVoidArray_InsertVoidPointer, METH_VARARGS,
   "InsertVoidPointer(self, i:int, ptr:Pointer) -> None\nC++: void InsertVoidPointer(vtkIdType i, void *ptr)\n\nInsert (memory allocation performed) the void* into the ith\nlocation in the array.\n"},
  {"InsertNextVoidPointer", PyvtkVoidArray_InsertNextVoidPointer, METH_VARARGS,
   "InsertNextVoidPointer(self, tuple:Pointer) -> int\nC++: vtkIdType InsertNextVoidPointer(void *tuple)\n\nInsert (memory allocation performed) the void* pointer at the end\nof the array.\n"},
  {"Reset", PyvtkVoidArray_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReuse already allocated data; make the container look like it is\nempty.\n"},
  {"Squeeze", PyvtkVoidArray_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze()\n\nResize the array to just fit the inserted memory. Reclaims extra\nmemory.\n"},
  {"DeepCopy", PyvtkVoidArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, va:vtkVoidArray) -> None\nC++: void DeepCopy(vtkVoidArray *va)\n\nDeep copy of another void array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVoidArray_Doc =
  "vtkVoidArray - dynamic, self-adjusting array of void* pointers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkVoidArray is an array of pointers to void. It provides methods for\n"
  "insertion and retrieval of these pointers values, and will\n"
  "automatically resize itself to hold new data.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVoidArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkVoidArray", // tp_name
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
  PyvtkVoidArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoidArray_StaticNew()
{
  return vtkVoidArray::New();
}

PyObject *PyvtkVoidArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVoidArray_Type, PyvtkVoidArray_Methods,
    "vtkVoidArray",
 &PyvtkVoidArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoidArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoidArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoidArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

