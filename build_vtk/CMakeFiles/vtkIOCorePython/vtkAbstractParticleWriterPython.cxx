// python wrapper for vtkAbstractParticleWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractParticleWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractParticleWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractParticleWriter_ClassNew(); }

#ifndef DECLARED_PyvtkWriter_ClassNew
extern "C" { PyObject *PyvtkWriter_ClassNew(); }
#define DECLARED_PyvtkWriter_ClassNew
#endif

static PyObject *
PyvtkAbstractParticleWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractParticleWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractParticleWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractParticleWriter *tempr = vtkAbstractParticleWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractParticleWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractParticleWriter::NewInstance());

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
PyvtkAbstractParticleWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractParticleWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractParticleWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeStep(temp0);
    }
    else
    {
      op->vtkAbstractParticleWriter::SetTimeStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetTimeStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeStep() :
      op->vtkAbstractParticleWriter::GetTimeStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeValue(temp0);
    }
    else
    {
      op->vtkAbstractParticleWriter::SetTimeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetTimeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeValue() :
      op->vtkAbstractParticleWriter::GetTimeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

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
      op->vtkAbstractParticleWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkAbstractParticleWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetCollectiveIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollectiveIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCollectiveIO(temp0);
    }
    else
    {
      op->vtkAbstractParticleWriter::SetCollectiveIO(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_GetCollectiveIO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollectiveIO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCollectiveIO() :
      op->vtkAbstractParticleWriter::GetCollectiveIO());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetWriteModeToCollective(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteModeToCollective");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteModeToCollective();
    }
    else
    {
      op->vtkAbstractParticleWriter::SetWriteModeToCollective();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_SetWriteModeToIndependent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWriteModeToIndependent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetWriteModeToIndependent();
    }
    else
    {
      op->vtkAbstractParticleWriter::SetWriteModeToIndependent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractParticleWriter_CloseFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractParticleWriter *op = static_cast<vtkAbstractParticleWriter *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->CloseFile();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractParticleWriter_Methods[] = {
  {"IsTypeOf", PyvtkAbstractParticleWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractParticleWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractParticleWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractParticleWriter\nC++: static vtkAbstractParticleWriter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractParticleWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractParticleWriter\nC++: vtkAbstractParticleWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractParticleWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractParticleWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTimeStep", PyvtkAbstractParticleWriter_SetTimeStep, METH_VARARGS,
   "SetTimeStep(self, _arg:int) -> None\nC++: virtual void SetTimeStep(int _arg)\n\nSet/get the TimeStep that is being written\n"},
  {"GetTimeStep", PyvtkAbstractParticleWriter_GetTimeStep, METH_VARARGS,
   "GetTimeStep(self) -> int\nC++: virtual int GetTimeStep()\n\n"},
  {"SetTimeValue", PyvtkAbstractParticleWriter_SetTimeValue, METH_VARARGS,
   "SetTimeValue(self, _arg:float) -> None\nC++: virtual void SetTimeValue(double _arg)\n\nBefore writing the current data out, set the TimeValue (optional)\nThe TimeValue is a float/double value that corresponds to the\nreal time of the data, it may not be regular, whereas the\nTimeSteps are simple increments.\n"},
  {"GetTimeValue", PyvtkAbstractParticleWriter_GetTimeValue, METH_VARARGS,
   "GetTimeValue(self) -> float\nC++: virtual double GetTimeValue()\n\n"},
  {"SetFileName", PyvtkAbstractParticleWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet/get the FileName that is being written to\n"},
  {"GetFileName", PyvtkAbstractParticleWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetCollectiveIO", PyvtkAbstractParticleWriter_SetCollectiveIO, METH_VARARGS,
   "SetCollectiveIO(self, _arg:int) -> None\nC++: virtual void SetCollectiveIO(int _arg)\n\nWhen running in parallel, this writer may be capable of\nCollective IO operations (HDF5). By default, this is off.\n"},
  {"GetCollectiveIO", PyvtkAbstractParticleWriter_GetCollectiveIO, METH_VARARGS,
   "GetCollectiveIO(self) -> int\nC++: virtual int GetCollectiveIO()\n\n"},
  {"SetWriteModeToCollective", PyvtkAbstractParticleWriter_SetWriteModeToCollective, METH_VARARGS,
   "SetWriteModeToCollective(self) -> None\nC++: void SetWriteModeToCollective()\n\n"},
  {"SetWriteModeToIndependent", PyvtkAbstractParticleWriter_SetWriteModeToIndependent, METH_VARARGS,
   "SetWriteModeToIndependent(self) -> None\nC++: void SetWriteModeToIndependent()\n\n"},
  {"CloseFile", PyvtkAbstractParticleWriter_CloseFile, METH_VARARGS,
   "CloseFile(self) -> None\nC++: virtual void CloseFile()\n\nClose the file after a write. This is optional but may protect\nagainst data loss in between steps\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractParticleWriter_Doc =
  "vtkAbstractParticleWriter - abstract class to write particle data to\nfile\n\n"
  "Superclass: vtkWriter\n\n"
  "vtkAbstractParticleWriter is an abstract class which is used by\n"
  "vtkParticleTracerBase to write particles out during simulations. This\n"
  "class is abstract and provides a TimeStep and FileName. Subclasses of\n"
  "this should provide the necessary IO.\n\n"
  "@warning\n"
  "See vtkWriter\n\n"
  "@sa\n"
  "vtkParticleTracerBase\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractParticleWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkAbstractParticleWriter", // tp_name
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
  PyvtkAbstractParticleWriter_Doc, // tp_doc
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

PyObject *PyvtkAbstractParticleWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractParticleWriter_Type, PyvtkAbstractParticleWriter_Methods,
    "vtkAbstractParticleWriter",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractParticleWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractParticleWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractParticleWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

