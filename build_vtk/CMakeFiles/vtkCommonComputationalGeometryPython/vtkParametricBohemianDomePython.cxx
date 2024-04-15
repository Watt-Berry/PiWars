// python wrapper for vtkParametricBohemianDome
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParametricBohemianDome.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParametricBohemianDome(PyObject *dict); }
extern "C" { PyObject *PyvtkParametricBohemianDome_ClassNew(); }

#ifndef DECLARED_PyvtkParametricFunction_ClassNew
extern "C" { PyObject *PyvtkParametricFunction_ClassNew(); }
#define DECLARED_PyvtkParametricFunction_ClassNew
#endif

static PyObject *
PyvtkParametricBohemianDome_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParametricBohemianDome::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParametricBohemianDome::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParametricBohemianDome *tempr = vtkParametricBohemianDome::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParametricBohemianDome *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParametricBohemianDome::NewInstance());

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
PyvtkParametricBohemianDome_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParametricBohemianDome::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParametricBohemianDome::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_GetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetA() :
      op->vtkParametricBohemianDome::GetA());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_SetA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetA(temp0);
    }
    else
    {
      op->vtkParametricBohemianDome::SetA(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_GetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetB() :
      op->vtkParametricBohemianDome::GetB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_SetB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetB(temp0);
    }
    else
    {
      op->vtkParametricBohemianDome::SetB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_GetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetC() :
      op->vtkParametricBohemianDome::GetC());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_SetC(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetC");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetC(temp0);
    }
    else
    {
      op->vtkParametricBohemianDome::SetC(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkParametricBohemianDome::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParametricBohemianDome_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

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
      op->vtkParametricBohemianDome::Evaluate(temp0, temp1, temp2);
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
PyvtkParametricBohemianDome_EvaluateScalar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateScalar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParametricBohemianDome *op = static_cast<vtkParametricBohemianDome *>(vp);

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
      op->vtkParametricBohemianDome::EvaluateScalar(temp0, temp1, temp2));

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

static PyMethodDef PyvtkParametricBohemianDome_Methods[] = {
  {"IsTypeOf", PyvtkParametricBohemianDome_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParametricBohemianDome_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParametricBohemianDome_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParametricBohemianDome\nC++: static vtkParametricBohemianDome *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParametricBohemianDome_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParametricBohemianDome\nC++: vtkParametricBohemianDome *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParametricBohemianDome_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParametricBohemianDome_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetA", PyvtkParametricBohemianDome_GetA, METH_VARARGS,
   "GetA(self) -> float\nC++: virtual double GetA()\n\nConstruct a Bohemian dome surface with the following parameters:\n"},
  {"SetA", PyvtkParametricBohemianDome_SetA, METH_VARARGS,
   "SetA(self, _arg:float) -> None\nC++: virtual void SetA(double _arg)\n\n"},
  {"GetB", PyvtkParametricBohemianDome_GetB, METH_VARARGS,
   "GetB(self) -> float\nC++: virtual double GetB()\n\n"},
  {"SetB", PyvtkParametricBohemianDome_SetB, METH_VARARGS,
   "SetB(self, _arg:float) -> None\nC++: virtual void SetB(double _arg)\n\n"},
  {"GetC", PyvtkParametricBohemianDome_GetC, METH_VARARGS,
   "GetC(self) -> float\nC++: virtual double GetC()\n\n"},
  {"SetC", PyvtkParametricBohemianDome_SetC, METH_VARARGS,
   "SetC(self, _arg:float) -> None\nC++: virtual void SetC(double _arg)\n\n"},
  {"GetDimension", PyvtkParametricBohemianDome_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension() override;\n\nReturn the parametric dimension of the class.\n"},
  {"Evaluate", PyvtkParametricBohemianDome_Evaluate, METH_VARARGS,
   "Evaluate(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: void Evaluate(double uvw[3], double Pt[3], double Duvw[9])\n    override;\n\nBohemianDome surface.\n\n* This function performs the mapping $f(u,v) \\rightarrow (x,y,x)\n  $, returning it\n* as Pt. It also returns the partial derivatives Du and Dv.\n* $Pt = (x, y, z), D_u\\vec{f} = (dx/du, dy/du, dz/du), D_v\\vec{f}\n= (dx/dv, dy/dv, dz/dv) $ .\n* Then the normal is $N = D_u\\vec{f} \\times D_v\\vec{f} $ .\n"},
  {"EvaluateScalar", PyvtkParametricBohemianDome_EvaluateScalar, METH_VARARGS,
   "EvaluateScalar(self, uvw:[float, float, float], Pt:[float, float,\n    float], Duvw:[float, float, float, float, float, float, float,\n     float, float]) -> float\nC++: double EvaluateScalar(double uvw[3], double Pt[3],\n    double Duvw[9]) override;\n\nCalculate a user defined scalar using one or all of uvw, Pt,\nDuvw. This method simply returns 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParametricBohemianDome_Doc =
  "vtkParametricBohemianDome - Generate a Bohemian dome.\n\n"
  "Superclass: vtkParametricFunction\n\n"
  "vtkParametricBohemianDome generates a parametric Bohemian dome. The\n"
  "Bohemian dome is a quartic surface, and is described in much better\n"
  "detail at <a\n"
  "href=\"https://www.math.hmc.edu/math142-01/mellon/curves_and_surfaces/surfaces/bohdom.html\"\n"
  ">HMC page.\n"
  "@warning\n"
  "I haven't set any restrictions on the A, B, or C values.@par Thanks:\n"
  "Tim Meehan\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParametricBohemianDome_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkParametricBohemianDome", // tp_name
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
  PyvtkParametricBohemianDome_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParametricBohemianDome_StaticNew()
{
  return vtkParametricBohemianDome::New();
}

PyObject *PyvtkParametricBohemianDome_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParametricBohemianDome_Type, PyvtkParametricBohemianDome_Methods,
    "vtkParametricBohemianDome",
 &PyvtkParametricBohemianDome_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkParametricFunction_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParametricBohemianDome(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParametricBohemianDome_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParametricBohemianDome", o) != 0)
  {
    Py_DECREF(o);
  }

}

