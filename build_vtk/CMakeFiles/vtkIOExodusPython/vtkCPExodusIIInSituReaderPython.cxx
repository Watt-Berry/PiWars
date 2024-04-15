// python wrapper for vtkCPExodusIIInSituReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCPExodusIIInSituReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCPExodusIIInSituReader(PyObject *dict); }
extern "C" { PyObject *PyvtkCPExodusIIInSituReader_ClassNew(); }


static PyObject *
PyvtkCPExodusIIInSituReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCPExodusIIInSituReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCPExodusIIInSituReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCPExodusIIInSituReader *tempr = vtkCPExodusIIInSituReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCPExodusIIInSituReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCPExodusIIInSituReader::NewInstance());

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
PyvtkCPExodusIIInSituReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCPExodusIIInSituReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCPExodusIIInSituReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

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
      op->vtkCPExodusIIInSituReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkCPExodusIIInSituReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentTimeStep() :
      op->vtkCPExodusIIInSituReader::GetCurrentTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_SetCurrentTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentTimeStep(temp0);
    }
    else
    {
      op->vtkCPExodusIIInSituReader::SetCurrentTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTimeStepRange() :
      op->vtkCPExodusIIInSituReader::GetTimeStepRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCPExodusIIInSituReader_GetTimeStepValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStepValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCPExodusIIInSituReader *op = static_cast<vtkCPExodusIIInSituReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeStepValue(temp0) :
      op->vtkCPExodusIIInSituReader::GetTimeStepValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCPExodusIIInSituReader_Methods[] = {
  {"IsTypeOf", PyvtkCPExodusIIInSituReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCPExodusIIInSituReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCPExodusIIInSituReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCPExodusIIInSituReader\nC++: static vtkCPExodusIIInSituReader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCPExodusIIInSituReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCPExodusIIInSituReader\nC++: vtkCPExodusIIInSituReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCPExodusIIInSituReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCPExodusIIInSituReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkCPExodusIIInSituReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nGet/Set the name of the Exodus file to read.\n"},
  {"GetFileName", PyvtkCPExodusIIInSituReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetCurrentTimeStep", PyvtkCPExodusIIInSituReader_GetCurrentTimeStep, METH_VARARGS,
   "GetCurrentTimeStep(self) -> int\nC++: virtual int GetCurrentTimeStep()\n\nGet/Set the current timestep to read as a zero-based index.\n"},
  {"SetCurrentTimeStep", PyvtkCPExodusIIInSituReader_SetCurrentTimeStep, METH_VARARGS,
   "SetCurrentTimeStep(self, _arg:int) -> None\nC++: virtual void SetCurrentTimeStep(int _arg)\n\n"},
  {"GetTimeStepRange", PyvtkCPExodusIIInSituReader_GetTimeStepRange, METH_VARARGS,
   "GetTimeStepRange(self) -> (int, int)\nC++: virtual int *GetTimeStepRange()\n\nGet the range of timesteps, represented as [0, numTimeSteps - 1].\nCall UpdateInformation first to set this without reading any\ntimestep data.\n"},
  {"GetTimeStepValue", PyvtkCPExodusIIInSituReader_GetTimeStepValue, METH_VARARGS,
   "GetTimeStepValue(self, step:int) -> float\nC++: double GetTimeStepValue(int step)\n\nGet the floating point tag associated with the timestep at\n'step'.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCPExodusIIInSituReader_Doc =
  "vtkCPExodusIIInSituReader - Read an Exodus II file into data\nstructures that map the raw arrays returned by the Exodus II library\ninto a multi-block data set containing vtkUnstructuredGridBase\nsubclasses.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "This class can be used to import Exodus II files into VTK without\n"
  "repacking the data into the standard VTK memory layout, avoiding the\n"
  "cost of a deep copy.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCPExodusIIInSituReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExodus.vtkCPExodusIIInSituReader", // tp_name
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
  PyvtkCPExodusIIInSituReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCPExodusIIInSituReader_StaticNew()
{
  return vtkCPExodusIIInSituReader::New();
}

PyObject *PyvtkCPExodusIIInSituReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCPExodusIIInSituReader_Type, PyvtkCPExodusIIInSituReader_Methods,
    "vtkCPExodusIIInSituReader",
 &PyvtkCPExodusIIInSituReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCPExodusIIInSituReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCPExodusIIInSituReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCPExodusIIInSituReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

