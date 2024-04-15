// python wrapper for vtkVortexCore
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVortexCore.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVortexCore(PyObject *dict); }
extern "C" { PyObject *PyvtkVortexCore_ClassNew(); }


static PyObject *
PyvtkVortexCore_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVortexCore::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVortexCore::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVortexCore *tempr = vtkVortexCore::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVortexCore *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVortexCore::NewInstance());

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
PyvtkVortexCore_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVortexCore::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVortexCore::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_SetHigherOrderMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHigherOrderMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHigherOrderMethod(temp0);
    }
    else
    {
      op->vtkVortexCore::SetHigherOrderMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_GetHigherOrderMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHigherOrderMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHigherOrderMethod() :
      op->vtkVortexCore::GetHigherOrderMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_HigherOrderMethodOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HigherOrderMethodOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HigherOrderMethodOn();
    }
    else
    {
      op->vtkVortexCore::HigherOrderMethodOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_HigherOrderMethodOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HigherOrderMethodOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HigherOrderMethodOff();
    }
    else
    {
      op->vtkVortexCore::HigherOrderMethodOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_GetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFasterApproximation() :
      op->vtkVortexCore::GetFasterApproximation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_SetFasterApproximation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFasterApproximation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFasterApproximation(temp0);
    }
    else
    {
      op->vtkVortexCore::SetFasterApproximation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_FasterApproximationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOn();
    }
    else
    {
      op->vtkVortexCore::FasterApproximationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVortexCore_FasterApproximationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FasterApproximationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVortexCore *op = static_cast<vtkVortexCore *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FasterApproximationOff();
    }
    else
    {
      op->vtkVortexCore::FasterApproximationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkVortexCore_Methods[] = {
  {"IsTypeOf", PyvtkVortexCore_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVortexCore_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVortexCore_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVortexCore\nC++: static vtkVortexCore *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVortexCore_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVortexCore\nC++: vtkVortexCore *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVortexCore_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVortexCore_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHigherOrderMethod", PyvtkVortexCore_SetHigherOrderMethod, METH_VARARGS,
   "SetHigherOrderMethod(self, _arg:int) -> None\nC++: virtual void SetHigherOrderMethod(vtkTypeBool _arg)\n\nWhen this flag is on, the flow field's jerk is used instead of\nacceleration as the second vector field during the parallel\nvector operation. The default is off.\n"},
  {"GetHigherOrderMethod", PyvtkVortexCore_GetHigherOrderMethod, METH_VARARGS,
   "GetHigherOrderMethod(self) -> int\nC++: virtual vtkTypeBool GetHigherOrderMethod()\n\n"},
  {"HigherOrderMethodOn", PyvtkVortexCore_HigherOrderMethodOn, METH_VARARGS,
   "HigherOrderMethodOn(self) -> None\nC++: virtual void HigherOrderMethodOn()\n\n"},
  {"HigherOrderMethodOff", PyvtkVortexCore_HigherOrderMethodOff, METH_VARARGS,
   "HigherOrderMethodOff(self) -> None\nC++: virtual void HigherOrderMethodOff()\n\n"},
  {"GetFasterApproximation", PyvtkVortexCore_GetFasterApproximation, METH_VARARGS,
   "GetFasterApproximation(self) -> bool\nC++: virtual bool GetFasterApproximation()\n\nWhen this flag is on, the gradient filter will provide a less\naccurate (but close) algorithm that performs fewer derivative\ncalculations (and is therefore faster). The default is off.\n"},
  {"SetFasterApproximation", PyvtkVortexCore_SetFasterApproximation, METH_VARARGS,
   "SetFasterApproximation(self, _arg:bool) -> None\nC++: virtual void SetFasterApproximation(bool _arg)\n\n"},
  {"FasterApproximationOn", PyvtkVortexCore_FasterApproximationOn, METH_VARARGS,
   "FasterApproximationOn(self) -> None\nC++: virtual void FasterApproximationOn()\n\n"},
  {"FasterApproximationOff", PyvtkVortexCore_FasterApproximationOff, METH_VARARGS,
   "FasterApproximationOff(self) -> None\nC++: virtual void FasterApproximationOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVortexCore_Doc =
  "vtkVortexCore - Compute vortex core lines using the parallel vectors\nmethod\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVortexCore computes vortex core lines using the parallel vectors\n"
  "method, as described in\n\n"
  "Roth, Martin and Ronald Peikert. \342\200\234A higher-order method for finding\n"
  "vortex core lines.\342\200\235 Proceedings Visualization '98 (Cat.\n"
  "No.98CB36276) (1998): 143-150.\n\n"
  "By default, the \"Higher-Order\" approach of computing the parallel\n"
  "vector lines between the flow field's velocity and jerk is disabled\n"
  "in favor of computing the parallel vector lines between the velocity\n"
  "and acceleration, as suggested in\n\n"
  "Haimes, Robert and David N. Kenwright. \342\200\234On the velocity gradient\n"
  "tensor and fluid feature extraction.\342\200\235 (1999).\n\n"
  "To further discriminate against spurious vortex cores, at each\n"
  "potential point value the Q-criterion, delta-criterion, and\n"
  "lambda_2-criterion are checked as defined in\n\n"
  "Haller, G. (2005). An objective definition of a vortex. Journal of\n"
  "Fluid Mechanics, 525, 1-26.\n\n"
  "Additionally, the lambda_ci criterion is computed as defined in\n\n"
  "Chakraborty, P., Balachandar, S., & Adran, R. (2005). On the\n"
  "relationships between local vortex identification schemes. Journal of\n"
  "Fluid Mechanics, 535, 189-214.\n\n"
  "The Q-criterion and delta-criterion are used to prefilter cells prior\n"
  "to the execution of the parallel lines algorithm, and all criteria\n"
  "values are stored as point values on the output polylines.\n\n"
  "The FasterApproximation option uses a faster approximate gradient\n"
  "calculation to accelerate the vortex core calculation.\n\n"
  "@sa\n"
  "vtkParallelVectors\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVortexCore_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkVortexCore", // tp_name
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
  PyvtkVortexCore_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVortexCore_StaticNew()
{
  return vtkVortexCore::New();
}

PyObject *PyvtkVortexCore_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVortexCore_Type, PyvtkVortexCore_Methods,
    "vtkVortexCore",
 &PyvtkVortexCore_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVortexCore(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVortexCore_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVortexCore", o) != 0)
  {
    Py_DECREF(o);
  }

}

