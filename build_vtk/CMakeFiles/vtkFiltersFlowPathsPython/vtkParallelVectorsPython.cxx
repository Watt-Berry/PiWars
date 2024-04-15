// python wrapper for vtkParallelVectors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelVectors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelVectors(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelVectors_ClassNew(); }


static PyObject *
PyvtkParallelVectors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelVectors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelVectors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelVectors *tempr = vtkParallelVectors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelVectors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelVectors::NewInstance());

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
PyvtkParallelVectors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelVectors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelVectors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_SetFirstVectorFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstVectorFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFirstVectorFieldName(temp0);
    }
    else
    {
      op->vtkParallelVectors::SetFirstVectorFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_GetFirstVectorFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstVectorFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFirstVectorFieldName() :
      op->vtkParallelVectors::GetFirstVectorFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_SetSecondVectorFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondVectorFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondVectorFieldName(temp0);
    }
    else
    {
      op->vtkParallelVectors::SetSecondVectorFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelVectors_GetSecondVectorFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondVectorFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelVectors *op = static_cast<vtkParallelVectors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSecondVectorFieldName() :
      op->vtkParallelVectors::GetSecondVectorFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelVectors_Methods[] = {
  {"IsTypeOf", PyvtkParallelVectors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelVectors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelVectors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParallelVectors\nC++: static vtkParallelVectors *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelVectors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelVectors\nC++: vtkParallelVectors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelVectors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelVectors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFirstVectorFieldName", PyvtkParallelVectors_SetFirstVectorFieldName, METH_VARARGS,
   "SetFirstVectorFieldName(self, _arg:str) -> None\nC++: virtual void SetFirstVectorFieldName(const char *_arg)\n\nSet/Get the name of first vector field.\n"},
  {"GetFirstVectorFieldName", PyvtkParallelVectors_GetFirstVectorFieldName, METH_VARARGS,
   "GetFirstVectorFieldName(self) -> str\nC++: virtual char *GetFirstVectorFieldName()\n\n"},
  {"SetSecondVectorFieldName", PyvtkParallelVectors_SetSecondVectorFieldName, METH_VARARGS,
   "SetSecondVectorFieldName(self, _arg:str) -> None\nC++: virtual void SetSecondVectorFieldName(const char *_arg)\n\nSet/Get the name of second vector field.\n"},
  {"GetSecondVectorFieldName", PyvtkParallelVectors_GetSecondVectorFieldName, METH_VARARGS,
   "GetSecondVectorFieldName(self) -> str\nC++: virtual char *GetSecondVectorFieldName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelVectors_Doc =
  "vtkParallelVectors - Compute polylines corresponding to locations\nwhere two vector fields\n         are parallel\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkParallelVectors accepts a 3D dataset with two nodal 3-vector\n"
  "fields and generates polylines along the paths where the vector\n"
  "fields are parallel. This filter is an implementation of the concepts\n"
  "outlined in the following article:\n\n"
  "R. Peikert and M. Roth, \"The \"Parallel Vectors\" operator-a vector\n"
  "field visualization primitive,\" Proceedings Visualization '99 (Cat.\n"
  "No.99CB37067), San Francisco, CA, USA, 1999, pp. 263-532.\n\n"
  "@sa\n"
  "vtkVortexCore\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelVectors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkParallelVectors", // tp_name
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
  PyvtkParallelVectors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelVectors_StaticNew()
{
  return vtkParallelVectors::New();
}

PyObject *PyvtkParallelVectors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelVectors_Type, PyvtkParallelVectors_Methods,
    "vtkParallelVectors",
 &PyvtkParallelVectors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelVectors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelVectors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelVectors", o) != 0)
  {
    Py_DECREF(o);
  }

}

