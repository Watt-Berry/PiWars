// python wrapper for vtkCGNSFileSeriesReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCGNSFileSeriesReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCGNSFileSeriesReader(PyObject *dict); }
extern "C" { PyObject *PyvtkCGNSFileSeriesReader_ClassNew(); }


static PyObject *
PyvtkCGNSFileSeriesReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCGNSFileSeriesReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCGNSFileSeriesReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCGNSFileSeriesReader *tempr = vtkCGNSFileSeriesReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSFileSeriesReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCGNSFileSeriesReader::NewInstance());

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
PyvtkCGNSFileSeriesReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCGNSFileSeriesReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCGNSFileSeriesReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

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
      op->vtkCGNSFileSeriesReader::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkCGNSFileSeriesReader::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  vtkCGNSReader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCGNSReader"))
  {
    if (ap.IsBound())
    {
      op->SetReader(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetReader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCGNSReader *tempr = (ap.IsBound() ?
      op->GetReader() :
      op->vtkCGNSFileSeriesReader::GetReader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_CanReadFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanReadFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->CanReadFile(temp0) :
      op->vtkCGNSFileSeriesReader::CanReadFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_AddFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFileName(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::AddFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_RemoveAllFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllFileNames();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::RemoveAllFileNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIgnoreReaderTime() :
      op->vtkCGNSFileSeriesReader::GetIgnoreReaderTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_SetIgnoreReaderTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreReaderTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreReaderTime(temp0);
    }
    else
    {
      op->vtkCGNSFileSeriesReader::SetIgnoreReaderTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOn();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::IgnoreReaderTimeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreReaderTimeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreReaderTimeOff();
    }
    else
    {
      op->vtkCGNSFileSeriesReader::IgnoreReaderTimeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCGNSFileSeriesReader_GetCurrentFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCGNSFileSeriesReader *op = static_cast<vtkCGNSFileSeriesReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCurrentFileName() :
      op->vtkCGNSFileSeriesReader::GetCurrentFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCGNSFileSeriesReader_Methods[] = {
  {"IsTypeOf", PyvtkCGNSFileSeriesReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCGNSFileSeriesReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCGNSFileSeriesReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCGNSFileSeriesReader\nC++: static vtkCGNSFileSeriesReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCGNSFileSeriesReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCGNSFileSeriesReader\nC++: vtkCGNSFileSeriesReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCGNSFileSeriesReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCGNSFileSeriesReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkCGNSFileSeriesReader_SetController, METH_VARARGS,
   "SetController(self, controller:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *controller)\n\nGet/Set the controller.\n"},
  {"GetController", PyvtkCGNSFileSeriesReader_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetReader", PyvtkCGNSFileSeriesReader_SetReader, METH_VARARGS,
   "SetReader(self, reader:vtkCGNSReader) -> None\nC++: virtual void SetReader(vtkCGNSReader *reader)\n\nGet/Set the reader.\n"},
  {"GetReader", PyvtkCGNSFileSeriesReader_GetReader, METH_VARARGS,
   "GetReader(self) -> vtkCGNSReader\nC++: virtual vtkCGNSReader *GetReader()\n\n"},
  {"CanReadFile", PyvtkCGNSFileSeriesReader_CanReadFile, METH_VARARGS,
   "CanReadFile(self, filename:str) -> int\nC++: int CanReadFile(const char *filename)\n\nTest a file for readability. Ensure that\nvtkCGNSFileSeriesReader::SetReader is called before using this\nmethod.\n"},
  {"AddFileName", PyvtkCGNSFileSeriesReader_AddFileName, METH_VARARGS,
   "AddFileName(self, fname:str) -> None\nC++: void AddFileName(const char *fname)\n\nAdd/remove files names in the file series.\n"},
  {"RemoveAllFileNames", PyvtkCGNSFileSeriesReader_RemoveAllFileNames, METH_VARARGS,
   "RemoveAllFileNames(self) -> None\nC++: void RemoveAllFileNames()\n\n"},
  {"GetIgnoreReaderTime", PyvtkCGNSFileSeriesReader_GetIgnoreReaderTime, METH_VARARGS,
   "GetIgnoreReaderTime(self) -> bool\nC++: virtual bool GetIgnoreReaderTime()\n\nIf true, then treat file series like it does not contain any time\nstep values. False by default.\n"},
  {"SetIgnoreReaderTime", PyvtkCGNSFileSeriesReader_SetIgnoreReaderTime, METH_VARARGS,
   "SetIgnoreReaderTime(self, _arg:bool) -> None\nC++: virtual void SetIgnoreReaderTime(bool _arg)\n\n"},
  {"IgnoreReaderTimeOn", PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOn, METH_VARARGS,
   "IgnoreReaderTimeOn(self) -> None\nC++: virtual void IgnoreReaderTimeOn()\n\n"},
  {"IgnoreReaderTimeOff", PyvtkCGNSFileSeriesReader_IgnoreReaderTimeOff, METH_VARARGS,
   "IgnoreReaderTimeOff(self) -> None\nC++: virtual void IgnoreReaderTimeOff()\n\n"},
  {"GetCurrentFileName", PyvtkCGNSFileSeriesReader_GetCurrentFileName, METH_VARARGS,
   "GetCurrentFileName(self) -> str\nC++: const char *GetCurrentFileName()\n\nReturns the filename being used for current timesteps. This is\nonly reasonable for temporal file series. For a partitioned file\nseries, this will return the filename being used on the current\nrank.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCGNSFileSeriesReader_Doc =
  "vtkCGNSFileSeriesReader - Adds support for reading temporal or\npartitioned CGNS files.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkCGNSFileSeriesReader is a meta-reader that add support for reading\n"
  "CGNS file series using vtkCGNSReader. We encounter two types of file\n"
  "series with CGNS:\n"
  "\\li 1. temporal file series - where each file is simply a single\n"
  "    timestep.\n"
  "\\li 2. partitioned file series - where each file corresponds to data\n"
  "    dumped\n"
  "       out from a rank but has all timesteps.\n\n\n"
  " vtkCGNSFileSeriesReader determines the nature of the file series\n"
  " encountered and reads the files accordingly. For partitioned files,\n"
  "the\n"
  " files are distributed among data-processing ranks, while for\n"
  "temporal file\n"
  " series, blocks are distributed among data-processing ranks (using\n"
  "logic in\n"
  " vtkCGNSReader itself).\n\n"
  "@sa vtkFileSeriesHelper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCGNSFileSeriesReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCGNSReader.vtkCGNSFileSeriesReader", // tp_name
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
  PyvtkCGNSFileSeriesReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCGNSFileSeriesReader_StaticNew()
{
  return vtkCGNSFileSeriesReader::New();
}

PyObject *PyvtkCGNSFileSeriesReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCGNSFileSeriesReader_Type, PyvtkCGNSFileSeriesReader_Methods,
    "vtkCGNSFileSeriesReader",
 &PyvtkCGNSFileSeriesReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCGNSFileSeriesReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCGNSFileSeriesReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCGNSFileSeriesReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

