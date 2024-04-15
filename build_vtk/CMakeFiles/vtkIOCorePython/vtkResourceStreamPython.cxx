// python wrapper for vtkResourceStream
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResourceStream.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResourceStream(PyObject *dict); }
extern "C" { PyObject *PyvtkResourceStream_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResourceStream_SeekDirection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkResourceStream.SeekDirection", // tp_name
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
PyObject *PyvtkResourceStream_SeekDirection_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkResourceStream_SeekDirection_Type, static_cast<int>(val));
}


static PyObject *
PyvtkResourceStream_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResourceStream::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResourceStream::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResourceStream *tempr = vtkResourceStream::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResourceStream *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResourceStream::NewInstance());

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
PyvtkResourceStream_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResourceStream::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResourceStream::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_Read(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Read");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1))
  {
    size_t tempr = op->Read(temp0, temp1);

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
PyvtkResourceStream_EndOfStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EndOfStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->EndOfStream();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_Seek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Seek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  long long temp0;
  typedef vtkResourceStream::SeekDirection temp1_type;
  temp1_type temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkResourceStream.SeekDirection"))
  {
    long long tempr = (ap.IsBound() ?
      op->Seek(temp0, temp1) :
      op->vtkResourceStream::Seek(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_Tell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->Tell() :
      op->vtkResourceStream::Tell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResourceStream_SupportSeek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SupportSeek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResourceStream *op = static_cast<vtkResourceStream *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->SupportSeek() :
      op->vtkResourceStream::SupportSeek());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResourceStream_Methods[] = {
  {"IsTypeOf", PyvtkResourceStream_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResourceStream_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResourceStream_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResourceStream\nC++: static vtkResourceStream *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResourceStream_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResourceStream\nC++: vtkResourceStream *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResourceStream_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResourceStream_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Read", PyvtkResourceStream_Read, METH_VARARGS,
   "Read(self, buffer:Pointer, bytes:int) -> int\nC++: virtual std::size_t Read(void *buffer, std::size_t bytes)\n\nRead data form the stream\n\nRead at most `bytes` bytes from input stream. If this function\nreads less that `bytes` bytes, then EndOfStream must return true.\n\n@param buffer User provided storage buffer, may be nullptr if\n    bytes == 0\n@param bytes Maximum amount of bytes to read.\n@return The number of bytes read, may be 0.\n"},
  {"EndOfStream", PyvtkResourceStream_EndOfStream, METH_VARARGS,
   "EndOfStream(self) -> bool\nC++: virtual bool EndOfStream()\n\nCheck if the stream reached an end.\n\nThe stream may be out of range (EOF) if a Seek call move before\nstream begin (0), or after stream end (max) Seek on an\nEndOfStream stream may restore it back to a valid state. Read on\nan invalid stream must do nothing and return 0.\n\n@return Return true if the stream reached the end of input, false\notherwise.\n"},
  {"Seek", PyvtkResourceStream_Seek, METH_VARARGS,
   "Seek(self, pos:int, dir:SeekDirection) -> int\nC++: virtual vtkTypeInt64 Seek(vtkTypeInt64 pos,\n    SeekDirection dir)\n\nMove the stream cursor position\n\nBase version does nothing and returns 0. This function does not\ncheck if the position is out of range. EndOfFile() result must\nonly change after a call of Read with non-zero size.\n\n@return Current position in stream.\n"},
  {"Tell", PyvtkResourceStream_Tell, METH_VARARGS,
   "Tell(self) -> int\nC++: virtual vtkTypeInt64 Tell()\n\nGet the stream cursor position\n\nBase version calls `Seek(0, std::ios_base::cur)`. If seeking is\nunsupported, return 0. Subclasses may reimplement it to provide a\nmore efficient version.\n\n@return Current position in stream.\n"},
  {"SupportSeek", PyvtkResourceStream_SupportSeek, METH_VARARGS,
   "SupportSeek(self) -> bool\nC++: bool SupportSeek()\n\nCheck if stream supports Seek and Tell functions\n\n@return true if Seek and Tell functions are supported.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResourceStream_Doc =
  "vtkResourceStream - Abstract class used for custom streams\n\n"
  "Superclass: vtkObject\n\n"
  "vtkResourceStream provides a high-level interface for manipulating\n"
  "custom streams. This class is designed to be used instead of\n"
  "\"SetFileName\" and \"SetInputString\" or similar that exists in most of\n"
  "reader or reader-like classes in VTK.\n\n"
  "vtkResourceStream only support unformatted input, user must use\n"
  "external solution to format the input, such as sscanf or scnlib,\n"
  "fast_float or strtoX\n\n"
  "vtkResourceStream **may** be support seeking, code that uses\n"
  "vtkResourceStream should take in account this, and support for both\n"
  "seekable stream and not seekable streams, if possible.\n"
  "`stream.SupportSeek()` can be used for support checking.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResourceStream_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkResourceStream", // tp_name
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
  PyvtkResourceStream_Doc, // tp_doc
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

PyObject *PyvtkResourceStream_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResourceStream_Type, PyvtkResourceStream_Methods,
    "vtkResourceStream",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkResourceStream_SeekDirection_Type);
  // members of vtkResourceStream::SeekDirection
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkResourceStream_SeekDirection_Type.tp_dict = enumdict;

    typedef vtkResourceStream::SeekDirection cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[3] = {
      { "Begin", cxx_enum_type::Begin },
      { "Current", cxx_enum_type::Current },
      { "End", cxx_enum_type::End },
    };

    for (int c = 0; c < 3; c++)
    {
      enumval = PyvtkResourceStream_SeekDirection_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkResourceStream_SeekDirection_Type, "vtkResourceStream.SeekDirection");

  o = (PyObject *)&PyvtkResourceStream_SeekDirection_Type;
  if (PyDict_SetItemString(d, "SeekDirection", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResourceStream(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResourceStream_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResourceStream", o) != 0)
  {
    Py_DECREF(o);
  }

}

