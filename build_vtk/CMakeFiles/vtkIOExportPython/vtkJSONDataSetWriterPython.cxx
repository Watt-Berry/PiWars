// python wrapper for vtkJSONDataSetWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkJSONDataSetWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkJSONDataSetWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkJSONDataSetWriter_ClassNew(); }


static PyObject *
PyvtkJSONDataSetWriter_ComputeMD5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeMD5");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  int temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkJSONDataSetWriter::ComputeMD5(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetShortType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShortType");

  vtkDataArray *temp0 = nullptr;
  bool temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkJSONDataSetWriter::GetShortType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetUID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetUID");

  vtkDataArray *temp0 = nullptr;
  bool temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    std::string tempr = vtkJSONDataSetWriter::GetUID(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetValidString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetValidString(temp0) :
      op->vtkJSONDataSetWriter::GetValidString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_WriteArrayContents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteArrayContents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  vtkDataArray *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetFilePath(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->WriteArrayContents(temp0, temp1) :
      op->vtkJSONDataSetWriter::WriteArrayContents(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_WriteArrayAsRAW(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WriteArrayAsRAW");

  vtkDataArray *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetFilePath(temp1))
  {
    bool tempr = vtkJSONDataSetWriter::WriteArrayAsRAW(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkJSONDataSetWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkJSONDataSetWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkJSONDataSetWriter *tempr = vtkJSONDataSetWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkJSONDataSetWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkJSONDataSetWriter::NewInstance());

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
PyvtkJSONDataSetWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkJSONDataSetWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkJSONDataSetWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkJSONDataSetWriter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkJSONDataSetWriter_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkJSONDataSetWriter::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkJSONDataSetWriter_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkJSONDataSetWriter_GetInput_s1(self, args);
    case 1:
      return PyvtkJSONDataSetWriter_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkJSONDataSetWriter_SetArchiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArchiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  vtkArchiver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkArchiver"))
  {
    if (ap.IsBound())
    {
      op->SetArchiver(temp0);
    }
    else
    {
      op->vtkJSONDataSetWriter::SetArchiver(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_GetArchiver(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArchiver");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArchiver *tempr = (ap.IsBound() ?
      op->GetArchiver() :
      op->vtkJSONDataSetWriter::GetArchiver());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkJSONDataSetWriter_Write_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->Write(temp0);
    }
    else
    {
      op->vtkJSONDataSetWriter::Write(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkJSONDataSetWriter_Write_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Write() :
      op->vtkJSONDataSetWriter::Write());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkJSONDataSetWriter_Write(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkJSONDataSetWriter_Write_s1(self, args);
    case 0:
      return PyvtkJSONDataSetWriter_Write_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Write");
  return nullptr;
}


static PyObject *
PyvtkJSONDataSetWriter_IsDataSetValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDataSetValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkJSONDataSetWriter *op = static_cast<vtkJSONDataSetWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDataSetValid() :
      op->vtkJSONDataSetWriter::IsDataSetValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkJSONDataSetWriter_Methods[] = {
  {"ComputeMD5", PyvtkJSONDataSetWriter_ComputeMD5, METH_VARARGS,
   "ComputeMD5(content:(int, ...), size:int, hash:str) -> None\nC++: static void ComputeMD5(const unsigned char *content,\n    int size, std::string &hash)\n\nCompute a MD5 digest of a void/(const unsigned char) pointer to\ncompute a\n string hash\n"},
  {"GetShortType", PyvtkJSONDataSetWriter_GetShortType, METH_VARARGS,
   "GetShortType(input:vtkDataArray, needConversion:bool) -> str\nC++: static std::string GetShortType(vtkDataArray *input,\n    bool &needConversion)\n\nCompute the target JavaScript typed array name for the given\nvtkDataArray (Uin8, Uint16, Uin32, Int8, Int16, Int32, Float32,\nFloat64) or \"xxx\" if no match found\n\nSince Uint64 and Int64 does not exist in JavaScript, the\nneedConversion argument will be set to true and Uint32/Int32 will\nbe returned instead.\n"},
  {"GetUID", PyvtkJSONDataSetWriter_GetUID, METH_VARARGS,
   "GetUID(__a:vtkDataArray, needConversion:bool) -> str\nC++: static std::string GetUID(vtkDataArray *,\n    bool &needConversion)\n\nReturn a Unique identifier for that array (i.e.:\nFloat32_356_13f880891af7b77262c49cae09a41e28 )\n"},
  {"GetValidString", PyvtkJSONDataSetWriter_GetValidString, METH_VARARGS,
   "GetValidString(self, __a:str) -> str\nC++: std::string GetValidString(const char *)\n\nReturn a Unique identifier for any invalid string\n"},
  {"WriteArrayContents", PyvtkJSONDataSetWriter_WriteArrayContents, METH_VARARGS,
   "WriteArrayContents(self, __a:vtkDataArray, relativeFilePath:str)\n    -> bool\nC++: bool WriteArrayContents(vtkDataArray *,\n    const char *relativeFilePath)\n\nWrite the contents of the vtkDataArray to disk based on the\nfilePath provided without any extra information. Just the raw\ndata will be written.\n\nIf vtkDataArray is a Uint64 or Int64, the data will be converted\nto Uint32 or Int32 before being written.\n"},
  {"WriteArrayAsRAW", PyvtkJSONDataSetWriter_WriteArrayAsRAW, METH_VARARGS,
   "WriteArrayAsRAW(__a:vtkDataArray, filePath:str) -> bool\nC++: static bool WriteArrayAsRAW(vtkDataArray *,\n    const char *filePath)\n\nFor backwards compatibility, this static method writes a data\narray's contents directly to a file.\n"},
  {"IsTypeOf", PyvtkJSONDataSetWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkJSONDataSetWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkJSONDataSetWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkJSONDataSetWriter\nC++: static vtkJSONDataSetWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkJSONDataSetWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkJSONDataSetWriter\nC++: vtkJSONDataSetWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkJSONDataSetWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkJSONDataSetWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkJSONDataSetWriter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataSet\nC++: vtkDataSet *GetInput()\nGetInput(self, port:int) -> vtkDataSet\nC++: vtkDataSet *GetInput(int port)\n\nGet the input to this writer.\n"},
  {"SetArchiver", PyvtkJSONDataSetWriter_SetArchiver, METH_VARARGS,
   "SetArchiver(self, __a:vtkArchiver) -> None\nC++: virtual void SetArchiver(vtkArchiver *)\n\nSpecify the Scene Archiver object\n"},
  {"GetArchiver", PyvtkJSONDataSetWriter_GetArchiver, METH_VARARGS,
   "GetArchiver(self) -> vtkArchiver\nC++: virtual vtkArchiver *GetArchiver()\n\n"},
  {"Write", PyvtkJSONDataSetWriter_Write, METH_VARARGS,
   "Write(self, __a:vtkDataSet) -> None\nC++: void Write(vtkDataSet *)\nWrite(self) -> int\nC++: virtual int Write()\n\n"},
  {"IsDataSetValid", PyvtkJSONDataSetWriter_IsDataSetValid, METH_VARARGS,
   "IsDataSetValid(self) -> bool\nC++: bool IsDataSetValid()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkJSONDataSetWriter_Doc =
  "vtkJSONDataSetWriter - write vtkDataSet using a vtkArchiver with a\nJSON meta file along\n         with all the binary arrays written as standalone binary\nfiles.\n\n"
  "Superclass: vtkWriter\n\n"
  "The generated format can be used by vtk.js using the reader below\n"
  "        \n"
  "https://kitware.github.io/vtk-js/examples/HttpDataSetReader.html\n\n"
  "vtkJSONDataSetWriter writes vtkImageData / vtkPolyData into a set of\n"
  "files representing each arrays that compose the dataset along with a\n"
  "JSON meta file that describe what they are and how they should be\n"
  "assembled into an actual vtkDataSet.\n\n"
  "@warning\n"
  "This writer assume LittleEndian by default. Additional work should be\n"
  "done to properly handle endianness.\n\n"
  "@sa\n"
  "vtkArchiver\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkJSONDataSetWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkJSONDataSetWriter", // tp_name
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
  PyvtkJSONDataSetWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkJSONDataSetWriter_StaticNew()
{
  return vtkJSONDataSetWriter::New();
}

PyObject *PyvtkJSONDataSetWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkJSONDataSetWriter_Type, PyvtkJSONDataSetWriter_Methods,
    "vtkJSONDataSetWriter",
 &PyvtkJSONDataSetWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkJSONDataSetWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkJSONDataSetWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkJSONDataSetWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

