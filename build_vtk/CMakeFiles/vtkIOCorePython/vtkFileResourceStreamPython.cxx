// python wrapper for vtkFileResourceStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFileResourceStream.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFileResourceStream(PyObject *dict); }
extern "C" { PyObject *PyvtkFileResourceStream_ClassNew(); }

#ifndef DECLARED_PyvtkResourceStream_ClassNew
extern "C" { PyObject *PyvtkResourceStream_ClassNew(); }
#define DECLARED_PyvtkResourceStream_ClassNew
#endif

static PyObject *
PyvtkFileResourceStream_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFileResourceStream::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFileResourceStream::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFileResourceStream *tempr = vtkFileResourceStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFileResourceStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFileResourceStream::NewInstance());

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
PyvtkFileResourceStream_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFileResourceStream::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFileResourceStream::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_Open(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Open");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->Open(temp0) :
      op->vtkFileResourceStream::Open(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    size_t tempr = (ap.IsBound() ?
      op->Read(temp0, temp1) :
      op->vtkFileResourceStream::Read(temp0, temp1));

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
PyvtkFileResourceStream_EndOfStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndOfStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->EndOfStream() :
      op->vtkFileResourceStream::EndOfStream());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFileResourceStream_Tell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFileResourceStream *op = static_cast<vtkFileResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->Tell() :
      op->vtkFileResourceStream::Tell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFileResourceStream_Methods[] = {
  {"IsTypeOf", PyvtkFileResourceStream_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFileResourceStream_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFileResourceStream_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFileResourceStream\nC++: static vtkFileResourceStream *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFileResourceStream_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFileResourceStream\nC++: vtkFileResourceStream *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFileResourceStream_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFileResourceStream_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Open", PyvtkFileResourceStream_Open, METH_VARARGS,
   "Open(self, path:str) -> bool\nC++: bool Open(const char *path)\n\nOpen a file\n\nOpening a file reset the stream to intial position: Tell() = 0.\nEndOfStream is set to true if file opening failed. If path is\nnullptr, the file will only be closed. This function will\nincrease modified time.\n\n@param path the file path\n@return true if file was succefully opened, false otherwise.\nReturn false if path is nullptr.\n"},
  {"Read", PyvtkFileResourceStream_Read, METH_VARARGS,
   "Read(self, buffer:Pointer, bytes:int) -> int\nC++: std::size_t Read(void *buffer, std::size_t bytes) override;\n\nOverride vtkResourceStream functions\n"},
  {"EndOfStream", PyvtkFileResourceStream_EndOfStream, METH_VARARGS,
   "EndOfStream(self) -> bool\nC++: bool EndOfStream() override;\n\nCheck if the stream reached an end.\n\nThe stream may be out of range (EOF) if a Seek call move before\nstream begin (0), or after stream end (max) Seek on an\nEndOfStream stream may restore it back to a valid state. Read on\nan invalid stream must do nothing and return 0.\n\n@return Return true if the stream reached the end of input, false\notherwise.\n"},
  {"Tell", PyvtkFileResourceStream_Tell, METH_VARARGS,
   "Tell(self) -> int\nC++: vtkTypeInt64 Tell() override;\n\nGet the stream cursor position\n\nBase version calls `Seek(0, std::ios_base::cur)`. If seeking is\nunsupported, return 0. Subclasses may reimplement it to provide a\nmore efficient version.\n\n@return Current position in stream.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFileResourceStream_Doc =
  "vtkFileResourceStream - vtkResourceStream implementation for file\ninput\n\n"
  "Superclass: vtkResourceStream\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFileResourceStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkFileResourceStream", // tp_name
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
  PyvtkFileResourceStream_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFileResourceStream_StaticNew()
{
  return vtkFileResourceStream::New();
}

PyObject *PyvtkFileResourceStream_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFileResourceStream_Type, PyvtkFileResourceStream_Methods,
    "vtkFileResourceStream",
 &PyvtkFileResourceStream_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkResourceStream_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFileResourceStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFileResourceStream_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFileResourceStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

