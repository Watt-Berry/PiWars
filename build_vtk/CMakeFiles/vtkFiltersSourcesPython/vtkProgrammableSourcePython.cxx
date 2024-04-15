// python wrapper for vtkProgrammableSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProgrammableSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableSource(PyObject *dict); }
extern "C" { PyObject *PyvtkProgrammableSource_ClassNew(); }


static PyObject *
PyvtkProgrammableSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableSource *tempr = vtkProgrammableSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableSource::NewInstance());

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
PyvtkProgrammableSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProgrammableSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProgrammableSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFunction(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }
    else
    {
      op->vtkProgrammableSource::SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableSource::SetExecuteMethodArgDelete(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFuncArgDelete));
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkProgrammableSource::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkProgrammableSource::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkProgrammableSource::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkProgrammableSource::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkProgrammableSource::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetGraphOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraphOutput() :
      op->vtkProgrammableSource::GetGraphOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetMoleculeOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetMoleculeOutput() :
      op->vtkProgrammableSource::GetMoleculeOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableSource_GetTableOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableSource *op = static_cast<vtkProgrammableSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTableOutput() :
      op->vtkProgrammableSource::GetTableOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableSource_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProgrammableSource\nC++: static vtkProgrammableSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProgrammableSource\nC++: vtkProgrammableSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProgrammableSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProgrammableSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExecuteMethod", PyvtkProgrammableSource_SetExecuteMethod, METH_VARARGS,
   "SetExecuteMethod(self, f:Callback) -> None\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to generate the source data. Note\nthat the function takes a single (void *) argument.\n"},
  {"GetPolyDataOutput", PyvtkProgrammableSource_GetPolyDataOutput, METH_VARARGS,
   "GetPolyDataOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as a concrete type. This method is typically used\nby the writer of the source function to get the output as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the output\ndata.\n"},
  {"GetStructuredPointsOutput", PyvtkProgrammableSource_GetStructuredPointsOutput, METH_VARARGS,
   "GetStructuredPointsOutput(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\n"},
  {"GetStructuredGridOutput", PyvtkProgrammableSource_GetStructuredGridOutput, METH_VARARGS,
   "GetStructuredGridOutput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\n"},
  {"GetUnstructuredGridOutput", PyvtkProgrammableSource_GetUnstructuredGridOutput, METH_VARARGS,
   "GetUnstructuredGridOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\n"},
  {"GetRectilinearGridOutput", PyvtkProgrammableSource_GetRectilinearGridOutput, METH_VARARGS,
   "GetRectilinearGridOutput(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\n"},
  {"GetGraphOutput", PyvtkProgrammableSource_GetGraphOutput, METH_VARARGS,
   "GetGraphOutput(self) -> vtkGraph\nC++: vtkGraph *GetGraphOutput()\n\n"},
  {"GetMoleculeOutput", PyvtkProgrammableSource_GetMoleculeOutput, METH_VARARGS,
   "GetMoleculeOutput(self) -> vtkMolecule\nC++: vtkMolecule *GetMoleculeOutput()\n\n"},
  {"GetTableOutput", PyvtkProgrammableSource_GetTableOutput, METH_VARARGS,
   "GetTableOutput(self) -> vtkTable\nC++: vtkTable *GetTableOutput()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProgrammableSource_Doc =
  "vtkProgrammableSource - generate source dataset via a user-specified\nfunction\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkProgrammableSource is a source object that is programmable by the\n"
  "user. To use this object, you must specify a function that creates\n"
  "the output.  It is possible to generate an output dataset of any\n"
  "(concrete) type; it is up to the function to properly initialize and\n"
  "define the output. Typically, you use one of the methods to get a\n"
  "concrete output type (e.g., GetPolyDataOutput() or\n"
  "GetStructuredPointsOutput()), and then manipulate the output in the\n"
  "user-specified function.\n\n"
  "Example use of this include writing a function to read a data file or\n"
  "interface to another system. (You might want to do this in favor of\n"
  "deriving a new class.) Another important use of this class is that it\n"
  "allows users of interpreters (e.g., Java) the ability to write source\n"
  "objects without having to recompile C++ code or generate new\n"
  "libraries.\n"
  "@sa\n"
  "vtkProgrammableFilter vtkProgrammableAttributeDataFilter\n"
  "vtkProgrammableDataObjectSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProgrammableSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkProgrammableSource", // tp_name
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
  PyvtkProgrammableSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableSource_StaticNew()
{
  return vtkProgrammableSource::New();
}

PyObject *PyvtkProgrammableSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProgrammableSource_Type, PyvtkProgrammableSource_Methods,
    "vtkProgrammableSource",
 &PyvtkProgrammableSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

