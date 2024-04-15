// python wrapper for vtkPNGReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPNGReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPNGReader(PyObject *dict); }
extern "C" { PyObject *PyvtkPNGReader_ClassNew(); }

#ifndef DECLARED_PyvtkImageReader2_ClassNew
extern "C" { PyObject *PyvtkImageReader2_ClassNew(); }
#define DECLARED_PyvtkImageReader2_ClassNew
#endif

static PyObject *
PyvtkPNGReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPNGReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPNGReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPNGReader *tempr = vtkPNGReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPNGReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPNGReader::NewInstance());

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
PyvtkPNGReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPNGReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPNGReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkPNGReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkPNGReader::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkPNGReader::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextChunks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextChunks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetTextChunks(temp0, temp1);
    }
    else
    {
      op->vtkPNGReader::GetTextChunks(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTextKey(temp0) :
      op->vtkPNGReader::GetTextKey(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTextKeys() :
      op->vtkPNGReader::GetTextKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTextValue(temp0) :
      op->vtkPNGReader::GetTextValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetTextValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetTextValues() :
      op->vtkPNGReader::GetTextValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetNumberOfTextChunks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTextChunks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfTextChunks() :
      op->vtkPNGReader::GetNumberOfTextChunks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_SetReadSpacingFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReadSpacingFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReadSpacingFromFile(temp0);
    }
    else
    {
      op->vtkPNGReader::SetReadSpacingFromFile(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_GetReadSpacingFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReadSpacingFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetReadSpacingFromFile() :
      op->vtkPNGReader::GetReadSpacingFromFile());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_ReadSpacingFromFileOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadSpacingFromFileOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadSpacingFromFileOn();
    }
    else
    {
      op->vtkPNGReader::ReadSpacingFromFileOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPNGReader_ReadSpacingFromFileOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadSpacingFromFileOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPNGReader *op = static_cast<vtkPNGReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReadSpacingFromFileOff();
    }
    else
    {
      op->vtkPNGReader::ReadSpacingFromFileOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPNGReader_Methods[] = {
  {"IsTypeOf", PyvtkPNGReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPNGReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPNGReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPNGReader\nC++: static vtkPNGReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPNGReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPNGReader\nC++: vtkPNGReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPNGReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPNGReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CanReadFile", PyvtkPNGReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, fname:str) -> int\nC++: int CanReadFile(const char *fname) override;\n\nIs the given file a PNG file?\n"},
  {"GetFileExtensions", PyvtkPNGReader_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: const char *GetFileExtensions() override;\n\nGet the file extensions for this format. Returns a string with a\nspace separated list of extensions in the format .extension\n"},
  {"GetDescriptiveName", PyvtkPNGReader_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: const char *GetDescriptiveName() override;\n\nReturn a descriptive name for the file format that might be\nuseful in a GUI.\n"},
  {"GetTextChunks", PyvtkPNGReader_GetTextChunks, METH_VARARGS,
   "GetTextChunks(self, key:str, beginEndIndex:[int, int]) -> None\nC++: void GetTextChunks(const char *key, int beginEndIndex[2])\n\nGiven a 'key' for the text chunks, fills in 'beginEndIndex' with\nthe begin and end indexes. Values are stored between [begin, end)\nindexes.\n"},
  {"GetTextKey", PyvtkPNGReader_GetTextKey, METH_VARARGS,
   "GetTextKey(self, index:int) -> str\nC++: const char *GetTextKey(int index)\n\nReturns the text key stored at 'index'.\n"},
  {"GetTextKeys", PyvtkPNGReader_GetTextKeys, METH_VARARGS,
   "GetTextKeys(self) -> vtkStringArray\nC++: vtkStringArray *GetTextKeys()\n\n"},
  {"GetTextValue", PyvtkPNGReader_GetTextValue, METH_VARARGS,
   "GetTextValue(self, index:int) -> str\nC++: const char *GetTextValue(int index)\n\nReturns the text value stored at 'index'. A range of indexes that\nstore values for a certain key can be obtained by calling\nGetTextChunks.\n"},
  {"GetTextValues", PyvtkPNGReader_GetTextValues, METH_VARARGS,
   "GetTextValues(self) -> vtkStringArray\nC++: vtkStringArray *GetTextValues()\n\n"},
  {"GetNumberOfTextChunks", PyvtkPNGReader_GetNumberOfTextChunks, METH_VARARGS,
   "GetNumberOfTextChunks(self) -> int\nC++: size_t GetNumberOfTextChunks()\n\nReturn the number of text chunks in the PNG file. Note that we\ndon't process compressed or international text entries\n"},
  {"SetReadSpacingFromFile", PyvtkPNGReader_SetReadSpacingFromFile, METH_VARARGS,
   "SetReadSpacingFromFile(self, _arg:bool) -> None\nC++: virtual void SetReadSpacingFromFile(bool _arg)\n\nSet/Get if data spacing should be calculated from the PNG file.\nUse default spacing if the PNG file don't have valid pixel per\nmeter parameters. Default is false.\n"},
  {"GetReadSpacingFromFile", PyvtkPNGReader_GetReadSpacingFromFile, METH_VARARGS,
   "GetReadSpacingFromFile(self) -> bool\nC++: virtual bool GetReadSpacingFromFile()\n\n"},
  {"ReadSpacingFromFileOn", PyvtkPNGReader_ReadSpacingFromFileOn, METH_VARARGS,
   "ReadSpacingFromFileOn(self) -> None\nC++: virtual void ReadSpacingFromFileOn()\n\n"},
  {"ReadSpacingFromFileOff", PyvtkPNGReader_ReadSpacingFromFileOff, METH_VARARGS,
   "ReadSpacingFromFileOff(self) -> None\nC++: virtual void ReadSpacingFromFileOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPNGReader_Doc =
  "vtkPNGReader - read PNG files\n\n"
  "Superclass: vtkImageReader2\n\n"
  "vtkPNGReader is a source object that reads PNG files. It should be\n"
  "able to read most any PNG file\n\n"
  "@sa\n"
  "vtkPNGWriter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPNGReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkPNGReader", // tp_name
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
  PyvtkPNGReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPNGReader_StaticNew()
{
  return vtkPNGReader::New();
}

PyObject *PyvtkPNGReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPNGReader_Type, PyvtkPNGReader_Methods,
    "vtkPNGReader",
 &PyvtkPNGReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReader2_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPNGReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPNGReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPNGReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

