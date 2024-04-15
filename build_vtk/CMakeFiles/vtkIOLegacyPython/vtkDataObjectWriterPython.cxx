// python wrapper for vtkDataObjectWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkDataObjectWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObjectWriter_ClassNew(); }


static PyObject *
PyvtkDataObjectWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectWriter *tempr = vtkDataObjectWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectWriter::NewInstance());

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
PyvtkDataObjectWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkDataObjectWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHeader(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetHeader() :
      op->vtkDataObjectWriter::GetHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileType(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetFileType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFileType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFileType() :
      op->vtkDataObjectWriter::GetFileType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToASCII(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToASCII");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToASCII();
    }
    else
    {
      op->vtkDataObjectWriter::SetFileTypeToASCII();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFileTypeToBinary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileTypeToBinary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFileTypeToBinary();
    }
    else
    {
      op->vtkDataObjectWriter::SetFileTypeToBinary();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWriteToOutputString(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetWriteToOutputString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOn();
    }
    else
    {
      op->vtkDataObjectWriter::WriteToOutputStringOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_WriteToOutputStringOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToOutputStringOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->WriteToOutputStringOff();
    }
    else
    {
      op->vtkDataObjectWriter::WriteToOutputStringOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetWriteToOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWriteToOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetWriteToOutputString() :
      op->vtkDataObjectWriter::GetWriteToOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputString() :
      op->vtkDataObjectWriter::GetOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStdString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStdString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetOutputStdString() :
      op->vtkDataObjectWriter::GetOutputStdString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetOutputStringLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputStringLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOutputStringLength() :
      op->vtkDataObjectWriter::GetOutputStringLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetBinaryOutputString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryOutputString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryOutputString() :
      op->vtkDataObjectWriter::GetBinaryOutputString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_SetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldDataName(temp0);
    }
    else
    {
      op->vtkDataObjectWriter::SetFieldDataName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectWriter_GetFieldDataName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldDataName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectWriter *op = static_cast<vtkDataObjectWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFieldDataName() :
      op->vtkDataObjectWriter::GetFieldDataName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectWriter_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectWriter\nC++: static vtkDataObjectWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectWriter\nC++: vtkDataObjectWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkDataObjectWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, filename:str) -> None\nC++: void SetFileName(const char *filename)\n\nMethods delegated to vtkDataWriter, see vtkDataWriter.\n"},
  {"GetFileName", PyvtkDataObjectWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: char *GetFileName()\n\n"},
  {"SetHeader", PyvtkDataObjectWriter_SetHeader, METH_VARARGS,
   "SetHeader(self, header:str) -> None\nC++: void SetHeader(const char *header)\n\n"},
  {"GetHeader", PyvtkDataObjectWriter_GetHeader, METH_VARARGS,
   "GetHeader(self) -> str\nC++: char *GetHeader()\n\n"},
  {"SetFileType", PyvtkDataObjectWriter_SetFileType, METH_VARARGS,
   "SetFileType(self, type:int) -> None\nC++: void SetFileType(int type)\n\n"},
  {"GetFileType", PyvtkDataObjectWriter_GetFileType, METH_VARARGS,
   "GetFileType(self) -> int\nC++: int GetFileType()\n\n"},
  {"SetFileTypeToASCII", PyvtkDataObjectWriter_SetFileTypeToASCII, METH_VARARGS,
   "SetFileTypeToASCII(self) -> None\nC++: void SetFileTypeToASCII()\n\n"},
  {"SetFileTypeToBinary", PyvtkDataObjectWriter_SetFileTypeToBinary, METH_VARARGS,
   "SetFileTypeToBinary(self) -> None\nC++: void SetFileTypeToBinary()\n\n"},
  {"SetWriteToOutputString", PyvtkDataObjectWriter_SetWriteToOutputString, METH_VARARGS,
   "SetWriteToOutputString(self, b:int) -> None\nC++: void SetWriteToOutputString(int b)\n\n"},
  {"WriteToOutputStringOn", PyvtkDataObjectWriter_WriteToOutputStringOn, METH_VARARGS,
   "WriteToOutputStringOn(self) -> None\nC++: void WriteToOutputStringOn()\n\n"},
  {"WriteToOutputStringOff", PyvtkDataObjectWriter_WriteToOutputStringOff, METH_VARARGS,
   "WriteToOutputStringOff(self) -> None\nC++: void WriteToOutputStringOff()\n\n"},
  {"GetWriteToOutputString", PyvtkDataObjectWriter_GetWriteToOutputString, METH_VARARGS,
   "GetWriteToOutputString(self) -> int\nC++: int GetWriteToOutputString()\n\n"},
  {"GetOutputString", PyvtkDataObjectWriter_GetOutputString, METH_VARARGS,
   "GetOutputString(self) -> str\nC++: char *GetOutputString()\n\n"},
  {"GetOutputStdString", PyvtkDataObjectWriter_GetOutputStdString, METH_VARARGS,
   "GetOutputStdString(self) -> str\nC++: vtkStdString GetOutputStdString()\n\n"},
  {"GetOutputStringLength", PyvtkDataObjectWriter_GetOutputStringLength, METH_VARARGS,
   "GetOutputStringLength(self) -> int\nC++: vtkIdType GetOutputStringLength()\n\n"},
  {"GetBinaryOutputString", PyvtkDataObjectWriter_GetBinaryOutputString, METH_VARARGS,
   "GetBinaryOutputString(self) -> Pointer\nC++: unsigned char *GetBinaryOutputString()\n\n"},
  {"SetFieldDataName", PyvtkDataObjectWriter_SetFieldDataName, METH_VARARGS,
   "SetFieldDataName(self, fieldname:str) -> None\nC++: void SetFieldDataName(const char *fieldname)\n\n"},
  {"GetFieldDataName", PyvtkDataObjectWriter_GetFieldDataName, METH_VARARGS,
   "GetFieldDataName(self) -> str\nC++: char *GetFieldDataName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObjectWriter_Doc =
  "vtkDataObjectWriter - write vtk field data\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkDataObjectWriter is a source object that writes ASCII or binary\n"
  "field data files in vtk format. Field data is a general form of data\n"
  "in matrix form.\n\n"
  "@warning\n"
  "Binary files written on one system may not be readable on other\n"
  "systems.\n\n"
  "@sa\n"
  "vtkFieldData vtkFieldDataReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOLegacy.vtkDataObjectWriter", // tp_name
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
  PyvtkDataObjectWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectWriter_StaticNew()
{
  return vtkDataObjectWriter::New();
}

PyObject *PyvtkDataObjectWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectWriter_Type, PyvtkDataObjectWriter_Methods,
    "vtkDataObjectWriter",
 &PyvtkDataObjectWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkWriter");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

