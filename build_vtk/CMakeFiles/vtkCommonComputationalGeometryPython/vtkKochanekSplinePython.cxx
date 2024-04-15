// python wrapper for vtkKochanekSpline
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKochanekSpline.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKochanekSpline(PyObject *dict); }
extern "C" { PyObject *PyvtkKochanekSpline_ClassNew(); }


static PyObject *
PyvtkKochanekSpline_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKochanekSpline::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKochanekSpline::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKochanekSpline *tempr = vtkKochanekSpline::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKochanekSpline *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKochanekSpline::NewInstance());

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
PyvtkKochanekSpline_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKochanekSpline::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKochanekSpline::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_Compute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Compute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Compute();
    }
    else
    {
      op->vtkKochanekSpline::Compute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_Evaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Evaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->Evaluate(temp0) :
      op->vtkKochanekSpline::Evaluate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultBias(temp0);
    }
    else
    {
      op->vtkKochanekSpline::SetDefaultBias(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultBias(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultBias");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultBias() :
      op->vtkKochanekSpline::GetDefaultBias());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultTension(temp0);
    }
    else
    {
      op->vtkKochanekSpline::SetDefaultTension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultTension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultTension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultTension() :
      op->vtkKochanekSpline::GetDefaultTension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_SetDefaultContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultContinuity(temp0);
    }
    else
    {
      op->vtkKochanekSpline::SetDefaultContinuity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_GetDefaultContinuity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultContinuity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDefaultContinuity() :
      op->vtkKochanekSpline::GetDefaultContinuity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKochanekSpline_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKochanekSpline *op = static_cast<vtkKochanekSpline *>(vp);

  vtkSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSpline"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkKochanekSpline::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKochanekSpline_Methods[] = {
  {"IsTypeOf", PyvtkKochanekSpline_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKochanekSpline_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKochanekSpline_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKochanekSpline\nC++: static vtkKochanekSpline *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKochanekSpline_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKochanekSpline\nC++: vtkKochanekSpline *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKochanekSpline_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKochanekSpline_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Compute", PyvtkKochanekSpline_Compute, METH_VARARGS,
   "Compute(self) -> None\nC++: void Compute() override;\n\nCompute Kochanek Spline coefficients.\n"},
  {"Evaluate", PyvtkKochanekSpline_Evaluate, METH_VARARGS,
   "Evaluate(self, t:float) -> float\nC++: double Evaluate(double t) override;\n\nEvaluate a 1D Kochanek spline.\n"},
  {"SetDefaultBias", PyvtkKochanekSpline_SetDefaultBias, METH_VARARGS,
   "SetDefaultBias(self, _arg:float) -> None\nC++: virtual void SetDefaultBias(double _arg)\n\nSet the bias for all points. Default is 0.\n"},
  {"GetDefaultBias", PyvtkKochanekSpline_GetDefaultBias, METH_VARARGS,
   "GetDefaultBias(self) -> float\nC++: virtual double GetDefaultBias()\n\n"},
  {"SetDefaultTension", PyvtkKochanekSpline_SetDefaultTension, METH_VARARGS,
   "SetDefaultTension(self, _arg:float) -> None\nC++: virtual void SetDefaultTension(double _arg)\n\nSet the tension for all points. Default is 0.\n"},
  {"GetDefaultTension", PyvtkKochanekSpline_GetDefaultTension, METH_VARARGS,
   "GetDefaultTension(self) -> float\nC++: virtual double GetDefaultTension()\n\n"},
  {"SetDefaultContinuity", PyvtkKochanekSpline_SetDefaultContinuity, METH_VARARGS,
   "SetDefaultContinuity(self, _arg:float) -> None\nC++: virtual void SetDefaultContinuity(double _arg)\n\nSet the continuity for all points. Default is 0.\n"},
  {"GetDefaultContinuity", PyvtkKochanekSpline_GetDefaultContinuity, METH_VARARGS,
   "GetDefaultContinuity(self) -> float\nC++: virtual double GetDefaultContinuity()\n\n"},
  {"DeepCopy", PyvtkKochanekSpline_DeepCopy, METH_VARARGS,
   "DeepCopy(self, s:vtkSpline) -> None\nC++: void DeepCopy(vtkSpline *s) override;\n\nDeep copy of cardinal spline data.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKochanekSpline_Doc =
  "vtkKochanekSpline - computes an interpolating spline using a Kochanek\nbasis.\n\n"
  "Superclass: vtkSpline\n\n"
  "Implements the Kochanek interpolating spline described in: Kochanek,\n"
  "D., Bartels, R., \"Interpolating Splines with Local Tension,\n"
  "Continuity, and Bias Control,\" Computer Graphics, vol. 18, no. 3, pp.\n"
  "33-41, July 1984. These splines give the user more control over the\n"
  "shape of the curve than the cardinal splines implemented in\n"
  "vtkCardinalSpline. Three parameters can be specified. All have a\n"
  "range from -1 to 1.\n\n"
  "Tension controls how sharply the curve bends at an input point. A\n"
  "value of -1 produces more slack in the curve. A value of 1 tightens\n"
  "the curve.\n\n"
  "Continuity controls the continuity of the first derivative at input\n"
  "points.\n\n"
  "Bias controls the direction of the curve at it passes through an\n"
  "input point. A value of -1 undershoots the point while a value of 1\n"
  "overshoots the point.\n\n"
  "These three parameters give the user broad control over the shape of\n"
  "the interpolating spline. The original Kochanek paper describes the\n"
  "effects nicely and is recommended reading.\n\n"
  "@sa\n"
  "vtkSpline vtkCardinalSpline\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKochanekSpline_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonComputationalGeometry.vtkKochanekSpline", // tp_name
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
  PyvtkKochanekSpline_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKochanekSpline_StaticNew()
{
  return vtkKochanekSpline::New();
}

PyObject *PyvtkKochanekSpline_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKochanekSpline_Type, PyvtkKochanekSpline_Methods,
    "vtkKochanekSpline",
 &PyvtkKochanekSpline_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSpline");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKochanekSpline(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKochanekSpline_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKochanekSpline", o) != 0)
  {
    Py_DECREF(o);
  }

}

