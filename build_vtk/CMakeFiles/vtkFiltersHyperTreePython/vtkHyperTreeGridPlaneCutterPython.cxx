// python wrapper for vtkHyperTreeGridPlaneCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridPlaneCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridPlaneCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridPlaneCutter_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridPlaneCutter *tempr = vtkHyperTreeGridPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridPlaneCutter::NewInstance());

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
PyvtkHyperTreeGridPlaneCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridPlaneCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridPlaneCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtkHyperTreeGridPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetAxisAlignment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisAlignment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAxisAlignment() :
      op->vtkHyperTreeGridPlaneCutter::GetAxisAlignment());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPlaneOrthogonalToXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPlaneOrthogonalToXAxis() :
      op->vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPlaneOrthogonalToYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPlaneOrthogonalToYAxis() :
      op->vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToZAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPlaneOrthogonalToZAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsPlaneOrthogonalToZAxis() :
      op->vtkHyperTreeGridPlaneCutter::IsPlaneOrthogonalToZAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_SetDual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDual(temp0);
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::SetDual(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_GetDual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDual() :
      op->vtkHyperTreeGridPlaneCutter::GetDual());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_DualOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DualOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DualOn();
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::DualOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridPlaneCutter_DualOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DualOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridPlaneCutter *op = static_cast<vtkHyperTreeGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DualOff();
    }
    else
    {
      op->vtkHyperTreeGridPlaneCutter::DualOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridPlaneCutter_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridPlaneCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridPlaneCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridPlaneCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridPlaneCutter\nC++: static vtkHyperTreeGridPlaneCutter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridPlaneCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridPlaneCutter\nC++: vtkHyperTreeGridPlaneCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridPlaneCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridPlaneCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", PyvtkHyperTreeGridPlaneCutter_SetPlane, METH_VARARGS,
   "SetPlane(self, a:float, b:float, c:float, d:float) -> None\nC++: void SetPlane(double a, double b, double c, double d)\n\nSpecify the plane with its [a,b,c,d] Cartesian coefficients: a*x\n+ b*y + c*z = d\n"},
  {"GetPlane", PyvtkHyperTreeGridPlaneCutter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> (float, float, float, float)\nC++: virtual double *GetPlane()\n\n"},
  {"GetAxisAlignment", PyvtkHyperTreeGridPlaneCutter_GetAxisAlignment, METH_VARARGS,
   "GetAxisAlignment(self) -> int\nC++: virtual int GetAxisAlignment()\n\nReturns 0 if plane's normal is aligned with X axis, 1 if it is\naligned with Y axis, 2 if it is aligned with Z axis. Returns -1\nif not aligned with any principal axis.\n"},
  {"IsPlaneOrthogonalToXAxis", PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToXAxis, METH_VARARGS,
   "IsPlaneOrthogonalToXAxis(self) -> bool\nC++: bool IsPlaneOrthogonalToXAxis()\n\nReturns true if plane's normal is aligned with the corresponding\naxis, false elsewise.\n"},
  {"IsPlaneOrthogonalToYAxis", PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToYAxis, METH_VARARGS,
   "IsPlaneOrthogonalToYAxis(self) -> bool\nC++: bool IsPlaneOrthogonalToYAxis()\n\n"},
  {"IsPlaneOrthogonalToZAxis", PyvtkHyperTreeGridPlaneCutter_IsPlaneOrthogonalToZAxis, METH_VARARGS,
   "IsPlaneOrthogonalToZAxis(self) -> bool\nC++: bool IsPlaneOrthogonalToZAxis()\n\n"},
  {"SetDual", PyvtkHyperTreeGridPlaneCutter_SetDual, METH_VARARGS,
   "SetDual(self, _arg:int) -> None\nC++: virtual void SetDual(int _arg)\n\nSet/Get whether output mesh should be computed on dual grid\n"},
  {"GetDual", PyvtkHyperTreeGridPlaneCutter_GetDual, METH_VARARGS,
   "GetDual(self) -> int\nC++: virtual int GetDual()\n\n"},
  {"DualOn", PyvtkHyperTreeGridPlaneCutter_DualOn, METH_VARARGS,
   "DualOn(self) -> None\nC++: virtual void DualOn()\n\n"},
  {"DualOff", PyvtkHyperTreeGridPlaneCutter_DualOff, METH_VARARGS,
   "DualOff(self) -> None\nC++: virtual void DualOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridPlaneCutter_Doc =
  "vtkHyperTreeGridPlaneCutter - cut an hyper tree grid volume with a\nplane and generate a polygonal cut surface.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "vtkHyperTreeGridPlaneCutter is a filter that takes as input an hyper\n"
  "tree grid and a single plane and generates the polygonal data\n"
  "intersection surface. This cut is computed at the leaf cells of the\n"
  "hyper tree. It is left as an option to decide whether the cut should\n"
  "be computed over the original AMR mesh or over its dual; in the\n"
  "latter case, perfect connectivity (i.e., mesh conformity in the FE\n"
  "sense) is achieved at the cost of interpolation to the dual of the\n"
  "input AMR mesh, and therefore of missing intersection plane pieces\n"
  "near the primal boundary.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkHyperTreeGridAlgorithm\n\n"
  "@par Thanks: This class was written by Philippe Pebay on a idea of\n"
  "Guenole Harel and Jacques-Bernard Lekien, 2016 This class was\n"
  "modified by Rogeli Grima Torres, 2016 This class was modified by\n"
  "Jacques-Bernard Lekien, 2018 This work was supported by Commissariat\n"
  "a l'Energie Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHyperTree.vtkHyperTreeGridPlaneCutter", // tp_name
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
  PyvtkHyperTreeGridPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridPlaneCutter_StaticNew()
{
  return vtkHyperTreeGridPlaneCutter::New();
}

PyObject *PyvtkHyperTreeGridPlaneCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridPlaneCutter_Type, PyvtkHyperTreeGridPlaneCutter_Methods,
    "vtkHyperTreeGridPlaneCutter",
 &PyvtkHyperTreeGridPlaneCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

