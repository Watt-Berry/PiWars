// python wrapper for vtkParametricCatalanMinimal
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricCatalanMinimal.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricCatalanMinimal(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricCatalanMinimal_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static PyObject *
PyvtkParametricCatalanMinimal_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricCatalanMinimal::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricCatalanMinimal::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricCatalanMinimal *tempr = vtkParametricCatalanMinimal::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricCatalanMinimal *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricCatalanMinimal::NewInstance());

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
PyvtkParametricCatalanMinimal_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricCatalanMinimal::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricCatalanMinimal::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricCatalanMinimal::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->Evaluate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParametricCatalanMinimal::Evaluate(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricCatalanMinimal_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricCatalanMinimal *op = static_cast<vtkParametricCatalanMinimal *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  const size_t size2 = 9;
  double temp2[9];
  double save2[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    double tempr = (ap.IsBound() ?
      op->EvaluateScalar(temp0, temp1, temp2) :
      op->vtkParametricCatalanMinimal::EvaluateScalar(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkParametricCatalanMinimal_Methods[] = {
  {"IsTypeOf", PyvtkParametricCatalanMinimal_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricCatalanMinimal_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricCatalanMinimal_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricCatalanMinimal\nC++: static vtkParametricCatalanMinimal *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricCatalanMinimal_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricCatalanMinimal\nC++: vtkParametricCatalanMinimal *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricCatalanMinimal_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricCatalanMinimal_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDimension", PyvtkParametricCatalanMinimal_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"Evaluate", PyvtkParametricCatalanMinimal_Evaluate, METH_VARARGS,
   "Evaluate(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nCatalan's minimal surface.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), D_u\\vec{f} = (dx/du, dy/du, dz/du), D_v\\vec{f}\n= (dx/dv, dy/dv, dz/dv) $ .\n* Then the normal is $N = D_u\\vec{f} \\times D_v\\vec{f} $ .\n"},
  {"EvaluateScalar", PyvtkParametricCatalanMinimal_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw. This method simply returns 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricCatalanMinimal_Doc =
  "vtkParametricCatalanMinimal - Generate Catalan's minimal surface.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricCatalanMinimal generates Catalan's minimal surface\n"
  "parametrically. This minimal surface contains the cycloid as a\n"
  "geodesic. More information about it can be found at <a\n"
  "href=\"https://en.wikipedia.org/wiki/Catalan%27s_minimal_surface\">Wikip\n"
  "edia.@par Thanks: Tim Meehan\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricCatalanMinimal_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricCatalanMinimal", // tp_name
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
  PyvtkParametricCatalanMinimal_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricCatalanMinimal_StaticNew()
{
  return vtkParametricCatalanMinimal::New();
}

PyObject *PyvtkParametricCatalanMinimal_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricCatalanMinimal_Type, PyvtkParametricCatalanMinimal_Methods,
    "vtkParametricCatalanMinimal",
 &PyvtkParametricCatalanMinimal_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricCatalanMinimal(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricCatalanMinimal_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricCatalanMinimal", o) != 0)
  {
    Py_DECREF(o);
  }

}

