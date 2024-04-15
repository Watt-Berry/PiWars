// python wrapper for vtkMatrixMathFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMatrixMathFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMatrixMathFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkMatrixMathFilter_ClassNew(); }


static PyObject *
PyvtkMatrixMathFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMatrixMathFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMatrixMathFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMatrixMathFilter *tempr = vtkMatrixMathFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrixMathFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMatrixMathFilter::NewInstance());

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
PyvtkMatrixMathFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMatrixMathFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMatrixMathFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkMatrixMathFilter::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToDeterminant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToDeterminant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToDeterminant();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToDeterminant();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvalue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvalue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToEigenvalue();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToEigenvalue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToEigenvector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToEigenvector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToEigenvector();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToEigenvector();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMatrixMathFilter_SetOperationToInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMatrixMathFilter *op = static_cast<vtkMatrixMathFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToInverse();
    }
    else
    {
      op->vtkMatrixMathFilter::SetOperationToInverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMatrixMathFilter_Methods[] = {
  {"IsTypeOf", PyvtkMatrixMathFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMatrixMathFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMatrixMathFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMatrixMathFilter\nC++: static vtkMatrixMathFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMatrixMathFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMatrixMathFilter\nC++: vtkMatrixMathFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMatrixMathFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMatrixMathFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOperation", PyvtkMatrixMathFilter_SetOperation, METH_VARARGS,
   "SetOperation(self, _arg:int) -> None\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the particular estimator used to function the quality of\nquery.\n"},
  {"GetOperation", PyvtkMatrixMathFilter_GetOperation, METH_VARARGS,
   "GetOperation(self) -> int\nC++: virtual int GetOperation()\n\n"},
  {"SetOperationToDeterminant", PyvtkMatrixMathFilter_SetOperationToDeterminant, METH_VARARGS,
   "SetOperationToDeterminant(self) -> None\nC++: void SetOperationToDeterminant()\n\n"},
  {"SetOperationToEigenvalue", PyvtkMatrixMathFilter_SetOperationToEigenvalue, METH_VARARGS,
   "SetOperationToEigenvalue(self) -> None\nC++: void SetOperationToEigenvalue()\n\n"},
  {"SetOperationToEigenvector", PyvtkMatrixMathFilter_SetOperationToEigenvector, METH_VARARGS,
   "SetOperationToEigenvector(self) -> None\nC++: void SetOperationToEigenvector()\n\n"},
  {"SetOperationToInverse", PyvtkMatrixMathFilter_SetOperationToInverse, METH_VARARGS,
   "SetOperationToInverse(self) -> None\nC++: void SetOperationToInverse()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMatrixMathFilter_Doc =
  "vtkMatrixMathFilter - Calculate functions of quality of the elements\n of a mesh\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMatrixMathFilter computes one or more functions of mathematical\n"
  "quality for the cells or points in a mesh. The per-cell or per-point\n"
  "quality is added to the mesh's cell data or point data, in an array\n"
  "with names varied with different quality being queried. Note this\n"
  "filter always assume the data associate with the cells or points are\n"
  "3 by 3 matrix.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMatrixMathFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersVerdict.vtkMatrixMathFilter", // tp_name
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
  PyvtkMatrixMathFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMatrixMathFilter_StaticNew()
{
  return vtkMatrixMathFilter::New();
}

PyObject *PyvtkMatrixMathFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMatrixMathFilter_Type, PyvtkMatrixMathFilter_Methods,
    "vtkMatrixMathFilter",
 &PyvtkMatrixMathFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMatrixMathFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMatrixMathFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMatrixMathFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

