// python wrapper for vtkNormalizeMatrixVectors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNormalizeMatrixVectors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNormalizeMatrixVectors(PyObject *dict); }
extern "C" { PyObject *PyvtkNormalizeMatrixVectors_ClassNew(); }


static PyObject *
PyvtkNormalizeMatrixVectors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNormalizeMatrixVectors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNormalizeMatrixVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNormalizeMatrixVectors *tempr = vtkNormalizeMatrixVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNormalizeMatrixVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNormalizeMatrixVectors::NewInstance());

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
PyvtkNormalizeMatrixVectors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNormalizeMatrixVectors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNormalizeMatrixVectors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorDimension() :
      op->vtkNormalizeMatrixVectors::GetVectorDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorDimension(temp0);
    }
    else
    {
      op->vtkNormalizeMatrixVectors::SetVectorDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_GetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPValue() :
      op->vtkNormalizeMatrixVectors::GetPValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNormalizeMatrixVectors_SetPValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNormalizeMatrixVectors *op = static_cast<vtkNormalizeMatrixVectors *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPValue(temp0);
    }
    else
    {
      op->vtkNormalizeMatrixVectors::SetPValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkNormalizeMatrixVectors_Methods[] = {
  {"IsTypeOf", PyvtkNormalizeMatrixVectors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNormalizeMatrixVectors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNormalizeMatrixVectors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNormalizeMatrixVectors\nC++: static vtkNormalizeMatrixVectors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNormalizeMatrixVectors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNormalizeMatrixVectors\nC++: vtkNormalizeMatrixVectors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNormalizeMatrixVectors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNormalizeMatrixVectors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVectorDimension", PyvtkNormalizeMatrixVectors_GetVectorDimension, METH_VARARGS,
   "GetVectorDimension(self) -> int\nC++: virtual int GetVectorDimension()\n\nControls whether to normalize row-vectors or column-vectors.  0 =\nrows, 1 = columns.\n"},
  {"SetVectorDimension", PyvtkNormalizeMatrixVectors_SetVectorDimension, METH_VARARGS,
   "SetVectorDimension(self, _arg:int) -> None\nC++: virtual void SetVectorDimension(int _arg)\n\n"},
  {"GetPValue", PyvtkNormalizeMatrixVectors_GetPValue, METH_VARARGS,
   "GetPValue(self) -> float\nC++: virtual double GetPValue()\n\nValue of p in p-norm normalization, subject to p >= 1.  Default\nis p=2 (Euclidean norm).\n"},
  {"SetPValue", PyvtkNormalizeMatrixVectors_SetPValue, METH_VARARGS,
   "SetPValue(self, _arg:float) -> None\nC++: virtual void SetPValue(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNormalizeMatrixVectors_Doc =
  "vtkNormalizeMatrixVectors - given a sparse input matrix, produces a\nsparse output matrix with each vector normalized to unit length with\nrespect to a p-norm (default p=2).\n\n"
  "Superclass: vtkArrayDataAlgorithm\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNormalizeMatrixVectors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkNormalizeMatrixVectors", // tp_name
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
  PyvtkNormalizeMatrixVectors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNormalizeMatrixVectors_StaticNew()
{
  return vtkNormalizeMatrixVectors::New();
}

PyObject *PyvtkNormalizeMatrixVectors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNormalizeMatrixVectors_Type, PyvtkNormalizeMatrixVectors_Methods,
    "vtkNormalizeMatrixVectors",
 &PyvtkNormalizeMatrixVectors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkArrayDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNormalizeMatrixVectors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNormalizeMatrixVectors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNormalizeMatrixVectors", o) != 0)
  {
    Py_DECREF(o);
  }

}

