// python wrapper for vtkResliceCursorPicker
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResliceCursorPicker.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResliceCursorPicker(PyObject *dict); }
extern "C" { PyObject *PyvtkResliceCursorPicker_ClassNew(); }


static PyObject *
PyvtkResliceCursorPicker_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResliceCursorPicker::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResliceCursorPicker::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResliceCursorPicker *tempr = vtkResliceCursorPicker::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorPicker *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResliceCursorPicker::NewInstance());

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
PyvtkResliceCursorPicker_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResliceCursorPicker::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResliceCursorPicker::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_Pick_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  double temp0;
  double temp1;
  double temp2;
  vtkRenderer *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkRenderer"))
  {
    int tempr = (ap.IsBound() ?
      op->Pick(temp0, temp1, temp2, temp3) :
      op->vtkResliceCursorPicker::Pick(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPicker_Pick_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Pick");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkRenderer *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkRenderer"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Pick(temp0, temp1, temp2);
    }
    else
    {
      op->vtkResliceCursorPicker::Pick(temp0, temp1, temp2);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResliceCursorPicker_Pick(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkResliceCursorPicker_Pick_s1(self, args);
    case 3:
      return PyvtkResliceCursorPicker_Pick_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Pick");
  return nullptr;
}


static PyObject *
PyvtkResliceCursorPicker_GetPickedAxis1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedAxis1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickedAxis1() :
      op->vtkResliceCursorPicker::GetPickedAxis1());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetPickedAxis2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedAxis2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickedAxis2() :
      op->vtkResliceCursorPicker::GetPickedAxis2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetPickedCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPickedCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPickedCenter() :
      op->vtkResliceCursorPicker::GetPickedCenter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_SetResliceCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  vtkResliceCursorPolyDataAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkResliceCursorPolyDataAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetResliceCursorAlgorithm(temp0);
    }
    else
    {
      op->vtkResliceCursorPicker::SetResliceCursorAlgorithm(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_GetResliceCursorAlgorithm(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceCursorAlgorithm");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResliceCursorPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetResliceCursorAlgorithm() :
      op->vtkResliceCursorPicker::GetResliceCursorAlgorithm());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResliceCursorPicker_SetTransformMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResliceCursorPicker *op = static_cast<vtkResliceCursorPicker *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTransformMatrix(temp0);
    }
    else
    {
      op->vtkResliceCursorPicker::SetTransformMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkResliceCursorPicker_Methods[] = {
  {"IsTypeOf", PyvtkResliceCursorPicker_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResliceCursorPicker_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResliceCursorPicker_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResliceCursorPicker\nC++: static vtkResliceCursorPicker *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResliceCursorPicker_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResliceCursorPicker\nC++: vtkResliceCursorPicker *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResliceCursorPicker_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResliceCursorPicker_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Pick", PyvtkResliceCursorPicker_Pick, METH_VARARGS,
   "Pick(self, selectionX:float, selectionY:float, selectionZ:float,\n    renderer:vtkRenderer) -> int\nC++: int Pick(double selectionX, double selectionY,\n    double selectionZ, vtkRenderer *renderer) override;\nPick(self, displayPos:[float, float], world:[float, float, float],\n     ren:vtkRenderer) -> None\nC++: void Pick(double displayPos[2], double world[3],\n    vtkRenderer *ren)\n\nPerform pick operation with selection point provided. Normally\nthe first two values are the (x,y) pixel coordinates for the\npick, and the third value is z=0. The return value will be\nnon-zero if something was successfully picked.\n"},
  {"GetPickedAxis1", PyvtkResliceCursorPicker_GetPickedAxis1, METH_VARARGS,
   "GetPickedAxis1(self) -> int\nC++: virtual int GetPickedAxis1()\n\nGet the picked axis\n"},
  {"GetPickedAxis2", PyvtkResliceCursorPicker_GetPickedAxis2, METH_VARARGS,
   "GetPickedAxis2(self) -> int\nC++: virtual int GetPickedAxis2()\n\n"},
  {"GetPickedCenter", PyvtkResliceCursorPicker_GetPickedCenter, METH_VARARGS,
   "GetPickedCenter(self) -> int\nC++: virtual int GetPickedCenter()\n\n"},
  {"SetResliceCursorAlgorithm", PyvtkResliceCursorPicker_SetResliceCursorAlgorithm, METH_VARARGS,
   "SetResliceCursorAlgorithm(self,\n    __a:vtkResliceCursorPolyDataAlgorithm) -> None\nC++: virtual void SetResliceCursorAlgorithm(\n    vtkResliceCursorPolyDataAlgorithm *)\n\nSet the reslice cursor algorithm. One must be set\n"},
  {"GetResliceCursorAlgorithm", PyvtkResliceCursorPicker_GetResliceCursorAlgorithm, METH_VARARGS,
   "GetResliceCursorAlgorithm(self)\n    -> vtkResliceCursorPolyDataAlgorithm\nC++: virtual vtkResliceCursorPolyDataAlgorithm *GetResliceCursorAlgorithm(\n    )\n\n"},
  {"SetTransformMatrix", PyvtkResliceCursorPicker_SetTransformMatrix, METH_VARARGS,
   "SetTransformMatrix(self, __a:vtkMatrix4x4) -> None\nC++: virtual void SetTransformMatrix(vtkMatrix4x4 *)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResliceCursorPicker_Doc =
  "vtkResliceCursorPicker - ray-cast cell picker for the reslice cursor\n\n"
  "Superclass: vtkPicker\n\n"
  "This class is used by the vtkResliceCursorWidget to pick reslice axes\n"
  "drawn by a vtkResliceCursorActor. The class returns the axes picked\n"
  "if any, whether one has picked the center. It takes as input an\n"
  "instance of vtkResliceCursorPolyDataAlgorithm. This is all done\n"
  "internally by vtkResliceCursorWidget and as such users are not\n"
  "expected to use this class directly, unless they are overriding the\n"
  "behaviour of vtkResliceCursorWidget.\n"
  "@sa\n"
  "vtkResliceCursor vtkResliceCursorWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResliceCursorPicker_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkResliceCursorPicker", // tp_name
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
  PyvtkResliceCursorPicker_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResliceCursorPicker_StaticNew()
{
  return vtkResliceCursorPicker::New();
}

PyObject *PyvtkResliceCursorPicker_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResliceCursorPicker_Type, PyvtkResliceCursorPicker_Methods,
    "vtkResliceCursorPicker",
 &PyvtkResliceCursorPicker_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPicker");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResliceCursorPicker(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResliceCursorPicker_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResliceCursorPicker", o) != 0)
  {
    Py_DECREF(o);
  }

}

