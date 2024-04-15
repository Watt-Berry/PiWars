// python wrapper for vtkRTXMLPolyDataReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRTXMLPolyDataReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRTXMLPolyDataReader(PyObject *dict); }
extern "C" { PyObject *PyvtkRTXMLPolyDataReader_ClassNew(); }

#ifndef DECLARED_PyvtkXMLPolyDataReader_ClassNew
extern "C" { PyObject *PyvtkXMLPolyDataReader_ClassNew(); }
#define DECLARED_PyvtkXMLPolyDataReader_ClassNew
#endif

static PyObject *
PyvtkRTXMLPolyDataReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRTXMLPolyDataReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRTXMLPolyDataReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRTXMLPolyDataReader *tempr = vtkRTXMLPolyDataReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRTXMLPolyDataReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRTXMLPolyDataReader::NewInstance());

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
PyvtkRTXMLPolyDataReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRTXMLPolyDataReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRTXMLPolyDataReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_SetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLocation(temp0);
    }
    else
    {
      op->vtkRTXMLPolyDataReader::SetLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_GetDataLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDataLocation() :
      op->vtkRTXMLPolyDataReader::GetDataLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_UpdateToNextFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateToNextFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateToNextFile();
    }
    else
    {
      op->vtkRTXMLPolyDataReader::UpdateToNextFile();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_NewDataAvailable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewDataAvailable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->NewDataAvailable() :
      op->vtkRTXMLPolyDataReader::NewDataAvailable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_ResetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetReader();
    }
    else
    {
      op->vtkRTXMLPolyDataReader::ResetReader();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRTXMLPolyDataReader_GetNextFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRTXMLPolyDataReader *op = static_cast<vtkRTXMLPolyDataReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNextFileName() :
      op->vtkRTXMLPolyDataReader::GetNextFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRTXMLPolyDataReader_Methods[] = {
  {"IsTypeOf", PyvtkRTXMLPolyDataReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRTXMLPolyDataReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRTXMLPolyDataReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRTXMLPolyDataReader\nC++: static vtkRTXMLPolyDataReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRTXMLPolyDataReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRTXMLPolyDataReader\nC++: vtkRTXMLPolyDataReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRTXMLPolyDataReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRTXMLPolyDataReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLocation", PyvtkRTXMLPolyDataReader_SetLocation, METH_VARARGS,
   "SetLocation(self, dataLocation:str) -> None\nC++: void SetLocation(const char *dataLocation)\n\n"},
  {"GetDataLocation", PyvtkRTXMLPolyDataReader_GetDataLocation, METH_VARARGS,
   "GetDataLocation(self) -> str\nC++: virtual char *GetDataLocation()\n\n"},
  {"UpdateToNextFile", PyvtkRTXMLPolyDataReader_UpdateToNextFile, METH_VARARGS,
   "UpdateToNextFile(self) -> None\nC++: virtual void UpdateToNextFile()\n\nReader will read in the next available data file The filename is\nthis->NextFileName maintained internally\n"},
  {"NewDataAvailable", PyvtkRTXMLPolyDataReader_NewDataAvailable, METH_VARARGS,
   "NewDataAvailable(self) -> int\nC++: virtual int NewDataAvailable()\n\ncheck if there is new data file available in the given\nDataLocation\n"},
  {"ResetReader", PyvtkRTXMLPolyDataReader_ResetReader, METH_VARARGS,
   "ResetReader(self) -> None\nC++: virtual void ResetReader()\n\nResetReader check the data directory specified in\nthis->DataLocation, and reset the Internal data structure\nspecifically: this->Internal->ProcessedFileList for monitoring\nthe arriving new data files if SetDataLocation(char*) is set by\nthe user, this ResetReader() should also be invoked.\n"},
  {"GetNextFileName", PyvtkRTXMLPolyDataReader_GetNextFileName, METH_VARARGS,
   "GetNextFileName(self) -> str\nC++: const char *GetNextFileName()\n\nReturn the name of the next available data file assume\nNewDataAvailable() return VTK_OK\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRTXMLPolyDataReader_Doc =
  "vtkRTXMLPolyDataReader - Read RealTime VTK XML PolyData files.\n\n"
  "Superclass: vtkXMLPolyDataReader\n\n"
  "vtkRTXMLPolyDataReader reads the VTK XML PolyData file format in real\n"
  "time.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRTXMLPolyDataReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOXML.vtkRTXMLPolyDataReader", // tp_name
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
  PyvtkRTXMLPolyDataReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRTXMLPolyDataReader_StaticNew()
{
  return vtkRTXMLPolyDataReader::New();
}

PyObject *PyvtkRTXMLPolyDataReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRTXMLPolyDataReader_Type, PyvtkRTXMLPolyDataReader_Methods,
    "vtkRTXMLPolyDataReader",
 &PyvtkRTXMLPolyDataReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkXMLPolyDataReader_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRTXMLPolyDataReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRTXMLPolyDataReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRTXMLPolyDataReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

