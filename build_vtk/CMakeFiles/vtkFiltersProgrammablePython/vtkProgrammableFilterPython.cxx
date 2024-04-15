// python wrapper for vtkProgrammableFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProgrammableFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProgrammableFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProgrammableFilter_ClassNew(); }


static PyObject *
PyvtkProgrammableFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProgrammableFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProgrammableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProgrammableFilter *tempr = vtkProgrammableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProgrammableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProgrammableFilter::NewInstance());

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
PyvtkProgrammableFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProgrammableFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProgrammableFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SetExecuteMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

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
      op->vtkProgrammableFilter::SetExecuteMethod(
        (temp0 == Py_None ? nullptr : vtkPythonVoidFunc),
        (temp0 == Py_None ? nullptr : temp0));
      if (temp0 != Py_None)
      {
        Py_INCREF(temp0);
      }
      op->vtkProgrammableFilter::SetExecuteMethodArgDelete(
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
PyvtkProgrammableFilter_GetPolyDataInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataInput() :
      op->vtkProgrammableFilter::GetPolyDataInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredPointsInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsInput() :
      op->vtkProgrammableFilter::GetStructuredPointsInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetStructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridInput() :
      op->vtkProgrammableFilter::GetStructuredGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetUnstructuredGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridInput() :
      op->vtkProgrammableFilter::GetUnstructuredGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetRectilinearGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridInput() :
      op->vtkProgrammableFilter::GetRectilinearGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetGraphInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraphInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraphInput() :
      op->vtkProgrammableFilter::GetGraphInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetMoleculeInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoleculeInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetMoleculeInput() :
      op->vtkProgrammableFilter::GetMoleculeInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetTableInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTableInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetTableInput() :
      op->vtkProgrammableFilter::GetTableInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetHyperTreeGridInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetHyperTreeGridInput() :
      op->vtkProgrammableFilter::GetHyperTreeGridInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_SetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyArrays(temp0);
    }
    else
    {
      op->vtkProgrammableFilter::SetCopyArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_GetCopyArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyArrays() :
      op->vtkProgrammableFilter::GetCopyArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOn();
    }
    else
    {
      op->vtkProgrammableFilter::CopyArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProgrammableFilter_CopyArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProgrammableFilter *op = static_cast<vtkProgrammableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyArraysOff();
    }
    else
    {
      op->vtkProgrammableFilter::CopyArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProgrammableFilter_Methods[] = {
  {"IsTypeOf", PyvtkProgrammableFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProgrammableFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProgrammableFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProgrammableFilter\nC++: static vtkProgrammableFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProgrammableFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProgrammableFilter\nC++: vtkProgrammableFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProgrammableFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProgrammableFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExecuteMethod", PyvtkProgrammableFilter_SetExecuteMethod, METH_VARARGS,
   "SetExecuteMethod(self, f:Callback) -> None\nC++: void SetExecuteMethod(void (*f)(void *), void *arg)\n\nSpecify the function to use to operate on the point attribute\ndata. Note that the function takes a single (void *) argument.\n"},
  {"GetPolyDataInput", PyvtkProgrammableFilter_GetPolyDataInput, METH_VARARGS,
   "GetPolyDataInput(self) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataInput()\n\nGet the input as a concrete type. This method is typically used\nby the writer of the filter function to get the input as a\nparticular type (i.e., it essentially does type casting). It is\nthe users responsibility to know the correct type of the input\ndata.\n"},
  {"GetStructuredPointsInput", PyvtkProgrammableFilter_GetStructuredPointsInput, METH_VARARGS,
   "GetStructuredPointsInput(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsInput()\n\n"},
  {"GetStructuredGridInput", PyvtkProgrammableFilter_GetStructuredGridInput, METH_VARARGS,
   "GetStructuredGridInput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridInput()\n\n"},
  {"GetUnstructuredGridInput", PyvtkProgrammableFilter_GetUnstructuredGridInput, METH_VARARGS,
   "GetUnstructuredGridInput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridInput()\n\n"},
  {"GetRectilinearGridInput", PyvtkProgrammableFilter_GetRectilinearGridInput, METH_VARARGS,
   "GetRectilinearGridInput(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridInput()\n\n"},
  {"GetGraphInput", PyvtkProgrammableFilter_GetGraphInput, METH_VARARGS,
   "GetGraphInput(self) -> vtkGraph\nC++: vtkGraph *GetGraphInput()\n\n"},
  {"GetMoleculeInput", PyvtkProgrammableFilter_GetMoleculeInput, METH_VARARGS,
   "GetMoleculeInput(self) -> vtkMolecule\nC++: vtkMolecule *GetMoleculeInput()\n\n"},
  {"GetTableInput", PyvtkProgrammableFilter_GetTableInput, METH_VARARGS,
   "GetTableInput(self) -> vtkTable\nC++: vtkTable *GetTableInput()\n\n"},
  {"GetHyperTreeGridInput", PyvtkProgrammableFilter_GetHyperTreeGridInput, METH_VARARGS,
   "GetHyperTreeGridInput(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetHyperTreeGridInput()\n\n"},
  {"SetCopyArrays", PyvtkProgrammableFilter_SetCopyArrays, METH_VARARGS,
   "SetCopyArrays(self, _arg:bool) -> None\nC++: virtual void SetCopyArrays(bool _arg)\n\nWhen CopyArrays is true, all arrays are copied to the output iff\ninput and output are of the same type. False by default.\n"},
  {"GetCopyArrays", PyvtkProgrammableFilter_GetCopyArrays, METH_VARARGS,
   "GetCopyArrays(self) -> bool\nC++: virtual bool GetCopyArrays()\n\n"},
  {"CopyArraysOn", PyvtkProgrammableFilter_CopyArraysOn, METH_VARARGS,
   "CopyArraysOn(self) -> None\nC++: virtual void CopyArraysOn()\n\n"},
  {"CopyArraysOff", PyvtkProgrammableFilter_CopyArraysOff, METH_VARARGS,
   "CopyArraysOff(self) -> None\nC++: virtual void CopyArraysOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProgrammableFilter_Doc =
  "vtkProgrammableFilter - a user-programmable filter\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkProgrammableFilter is a filter that can be programmed by the user.\n"
  " To use the filter you define a function that retrieves input of the\n"
  "correct type, creates data, and then manipulates the output of the\n"
  "filter.  Using this filter avoids the need for subclassing - and the\n"
  "function can be defined in an interpreter wrapper language such as\n"
  "Java.\n\n"
  "The trickiest part of using this filter is that the input and output\n"
  "methods are unusual and cannot be compile-time type checked. Instead,\n"
  "as a user of this filter it is your responsibility to set and get the\n"
  "correct input and output types.\n\n"
  "@warning\n"
  "The filter correctly manages modified time and network execution in\n"
  "most cases. However, if you change the definition of the filter\n"
  "function, you'll want to send a manual Modified() method to the\n"
  "filter to force it to reexecute.\n\n"
  "@sa\n"
  "vtkProgrammablePointDataFilter vtkProgrammableSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProgrammableFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersProgrammable.vtkProgrammableFilter", // tp_name
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
  PyvtkProgrammableFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProgrammableFilter_StaticNew()
{
  return vtkProgrammableFilter::New();
}

PyObject *PyvtkProgrammableFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProgrammableFilter_Type, PyvtkProgrammableFilter_Methods,
    "vtkProgrammableFilter",
 &PyvtkProgrammableFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProgrammableFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProgrammableFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProgrammableFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

