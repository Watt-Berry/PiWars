// python wrapper for vtkEnsembleSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEnsembleSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnsembleSource(PyObject *dict); }
extern "C" { PyObject *PyvtkEnsembleSource_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static PyObject *
PyvtkEnsembleSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnsembleSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnsembleSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnsembleSource *tempr = vtkEnsembleSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnsembleSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnsembleSource::NewInstance());

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
PyvtkEnsembleSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEnsembleSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEnsembleSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_AddMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  vtkAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->AddMember(temp0);
    }
    else
    {
      op->vtkEnsembleSource::AddMember(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_RemoveAllMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllMembers();
    }
    else
    {
      op->vtkEnsembleSource::RemoveAllMembers();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_GetNumberOfMembers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfMembers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfMembers() :
      op->vtkEnsembleSource::GetNumberOfMembers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_SetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentMember(temp0);
    }
    else
    {
      op->vtkEnsembleSource::SetCurrentMember(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_GetCurrentMember(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentMember");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCurrentMember() :
      op->vtkEnsembleSource::GetCurrentMember());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_SetMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnsembleSource *op = static_cast<vtkEnsembleSource *>(vp);

  vtkTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTable"))
  {
    if (ap.IsBound())
    {
      op->SetMetaData(temp0);
    }
    else
    {
      op->vtkEnsembleSource::SetMetaData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_META_DATA(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "META_DATA");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDataObjectMetaDataKey *tempr = vtkEnsembleSource::META_DATA();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnsembleSource_UPDATE_MEMBER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UPDATE_MEMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerRequestKey *tempr = vtkEnsembleSource::UPDATE_MEMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnsembleSource_Methods[] = {
  {"IsTypeOf", PyvtkEnsembleSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnsembleSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnsembleSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEnsembleSource\nC++: static vtkEnsembleSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnsembleSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEnsembleSource\nC++: vtkEnsembleSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEnsembleSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEnsembleSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddMember", PyvtkEnsembleSource_AddMember, METH_VARARGS,
   "AddMember(self, __a:vtkAlgorithm) -> None\nC++: void AddMember(vtkAlgorithm *)\n\nAdd an algorithm (source) that will produce the next ensemble\nmember. This algorithm will be passed the REQUEST_INFORMATION,\nREQUEST_UPDATE_EXTENT and REQUEST_DATA pipeline passes for\nexecution.\n"},
  {"RemoveAllMembers", PyvtkEnsembleSource_RemoveAllMembers, METH_VARARGS,
   "RemoveAllMembers(self) -> None\nC++: void RemoveAllMembers()\n\nRemoves all ensemble members.\n"},
  {"GetNumberOfMembers", PyvtkEnsembleSource_GetNumberOfMembers, METH_VARARGS,
   "GetNumberOfMembers(self) -> int\nC++: unsigned int GetNumberOfMembers()\n\nReturns the number of ensemble members.\n"},
  {"SetCurrentMember", PyvtkEnsembleSource_SetCurrentMember, METH_VARARGS,
   "SetCurrentMember(self, _arg:int) -> None\nC++: virtual void SetCurrentMember(unsigned int _arg)\n\nSet/Get the current ensemble member to process. Note that this\ndata member will not be used if the UPDATE_MEMBER key is present\nin the pipeline. Also, this data member may be removed in the\nfuture. Unless it is absolutely necessary to use this data\nmember, use the UPDATE_MEMBER key instead.\n"},
  {"GetCurrentMember", PyvtkEnsembleSource_GetCurrentMember, METH_VARARGS,
   "GetCurrentMember(self) -> int\nC++: virtual unsigned int GetCurrentMember()\n\n"},
  {"SetMetaData", PyvtkEnsembleSource_SetMetaData, METH_VARARGS,
   "SetMetaData(self, __a:vtkTable) -> None\nC++: void SetMetaData(vtkTable *)\n\nSet the meta-data that will be propagated downstream. Make sure\nthat this table has as many rows as the ensemble members and the\nmeta-data for each row matches the corresponding ensemble source.\n"},
  {"META_DATA", PyvtkEnsembleSource_META_DATA, METH_VARARGS,
   "META_DATA() -> vtkInformationDataObjectMetaDataKey\nC++: static vtkInformationDataObjectMetaDataKey *META_DATA()\n\nMeta-data for the ensemble. This is set with SetMetaData.\n"},
  {"UPDATE_MEMBER", PyvtkEnsembleSource_UPDATE_MEMBER, METH_VARARGS,
   "UPDATE_MEMBER() -> vtkInformationIntegerRequestKey\nC++: static vtkInformationIntegerRequestKey *UPDATE_MEMBER()\n\nKey used to request a particular ensemble member.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEnsembleSource_Doc =
  "vtkEnsembleSource - source that manages dataset ensembles\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkEnsembleSource manages a collection of data sources in order to\n"
  "represent a dataset ensemble. It has the ability to provide meta-data\n"
  "about the ensemble in the form of a table, using the META_DATA key as\n"
  "well as accept a pipeline request using the UPDATE_MEMBER key. Note\n"
  "that it is expected that all ensemble members produce data of the\n"
  "same type.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnsembleSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkEnsembleSource", // tp_name
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
  PyvtkEnsembleSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEnsembleSource_StaticNew()
{
  return vtkEnsembleSource::New();
}

PyObject *PyvtkEnsembleSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEnsembleSource_Type, PyvtkEnsembleSource_Methods,
    "vtkEnsembleSource",
 &PyvtkEnsembleSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnsembleSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnsembleSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnsembleSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

