// python wrapper for vtkSpherePuzzle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSpherePuzzle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSpherePuzzle(PyObject *dict); }
extern "C" { PyObject *PyvtkSpherePuzzle_ClassNew(); }


static PyObject *
PyvtkSpherePuzzle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSpherePuzzle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSpherePuzzle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSpherePuzzle *tempr = vtkSpherePuzzle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSpherePuzzle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSpherePuzzle::NewInstance());

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
PyvtkSpherePuzzle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSpherePuzzle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSpherePuzzle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkSpherePuzzle::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MoveHorizontal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveHorizontal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->MoveHorizontal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSpherePuzzle::MoveHorizontal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MoveVertical(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveVertical");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->MoveVertical(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSpherePuzzle::MoveVertical(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_SetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->SetPoint(temp0, temp1, temp2) :
      op->vtkSpherePuzzle::SetPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_MovePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->MovePoint(temp0);
    }
    else
    {
      op->vtkSpherePuzzle::MovePoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSpherePuzzle_GetState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSpherePuzzle *op = static_cast<vtkSpherePuzzle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetState() :
      op->vtkSpherePuzzle::GetState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSpherePuzzle_Methods[] = {
  {"IsTypeOf", PyvtkSpherePuzzle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSpherePuzzle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSpherePuzzle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSpherePuzzle\nC++: static vtkSpherePuzzle *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSpherePuzzle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSpherePuzzle\nC++: vtkSpherePuzzle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSpherePuzzle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSpherePuzzle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Reset", PyvtkSpherePuzzle_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReset the state of this puzzle back to its original state.\n"},
  {"MoveHorizontal", PyvtkSpherePuzzle_MoveHorizontal, METH_VARARGS,
   "MoveHorizontal(self, section:int, percentage:int, rightFlag:int)\n    -> None\nC++: void MoveHorizontal(int section, int percentage,\n    int rightFlag)\n\nMove the top/bottom half one segment either direction.\n"},
  {"MoveVertical", PyvtkSpherePuzzle_MoveVertical, METH_VARARGS,
   "MoveVertical(self, section:int, percentage:int, rightFlag:int)\n    -> None\nC++: void MoveVertical(int section, int percentage, int rightFlag)\n\nRotate vertical half of sphere along one of the longitude lines.\n"},
  {"SetPoint", PyvtkSpherePuzzle_SetPoint, METH_VARARGS,
   "SetPoint(self, x:float, y:float, z:float) -> int\nC++: int SetPoint(double x, double y, double z)\n\nSetPoint will be called as the mouse moves over the screen. The\noutput will change to indicate the pending move. SetPoint returns\nzero if move is not activated by point. Otherwise it encodes the\nmove into a unique integer so that the caller can determine if\nthe move state has changed. This will answer the question, \"Should I\nrender.\"\n"},
  {"MovePoint", PyvtkSpherePuzzle_MovePoint, METH_VARARGS,
   "MovePoint(self, percentage:int) -> None\nC++: void MovePoint(int percentage)\n\nMove actually implements the pending move. When percentage is\n100, the pending move becomes inactive, and SetPoint will have to\nbe called again to setup another move.\n"},
  {"GetState", PyvtkSpherePuzzle_GetState, METH_VARARGS,
   "GetState(self) -> Pointer\nC++: int *GetState()\n\nFor drawing state as arrows.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSpherePuzzle_Doc =
  "vtkSpherePuzzle - create a polygonal sphere centered at the origin\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSpherePuzzle creates\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSpherePuzzle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkSpherePuzzle", // tp_name
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
  PyvtkSpherePuzzle_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSpherePuzzle_StaticNew()
{
  return vtkSpherePuzzle::New();
}

PyObject *PyvtkSpherePuzzle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSpherePuzzle_Type, PyvtkSpherePuzzle_Methods,
    "vtkSpherePuzzle",
 &PyvtkSpherePuzzle_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSpherePuzzle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSpherePuzzle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSpherePuzzle", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(1024);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_SPHERE_RESOLUTION", o);
    Py_DECREF(o);
  }
}

