// python wrapper for vtkFocalPlaneContourRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFocalPlaneContourRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFocalPlaneContourRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkFocalPlaneContourRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkContourRepresentation_ClassNew
extern "C" { PyObject *PyvtkContourRepresentation_ClassNew(); }
#define DECLARED_PyvtkContourRepresentation_ClassNew
#endif

static PyObject *
PyvtkFocalPlaneContourRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFocalPlaneContourRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFocalPlaneContourRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFocalPlaneContourRepresentation *tempr = vtkFocalPlaneContourRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFocalPlaneContourRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFocalPlaneContourRepresentation::NewInstance());

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
PyvtkFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFocalPlaneContourRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetIntermediatePointWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointWorldPosition(temp0, temp1, temp2) :
      op->vtkFocalPlaneContourRepresentation::GetIntermediatePointWorldPosition(temp0, temp1, temp2));

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


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetIntermediatePointDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntermediatePointDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  int temp1;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetIntermediatePointDisplayPosition(temp0, temp1, temp2) :
      op->vtkFocalPlaneContourRepresentation::GetIntermediatePointDisplayPosition(temp0, temp1, temp2));

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


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetNthNodeDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeDisplayPosition(temp0, temp1) :
      op->vtkFocalPlaneContourRepresentation::GetNthNodeDisplayPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_GetNthNodeWorldPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthNodeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetNthNodeWorldPosition(temp0, temp1) :
      op->vtkFocalPlaneContourRepresentation::GetNthNodeWorldPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateContourWorldPositionsBasedOnDisplayPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateContourWorldPositionsBasedOnDisplayPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateContourWorldPositionsBasedOnDisplayPositions();
    }
    else
    {
      op->vtkFocalPlaneContourRepresentation::UpdateContourWorldPositionsBasedOnDisplayPositions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateContour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateContour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->UpdateContour() :
      op->vtkFocalPlaneContourRepresentation::UpdateContour());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFocalPlaneContourRepresentation_UpdateLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFocalPlaneContourRepresentation *op = static_cast<vtkFocalPlaneContourRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateLines(temp0);
    }
    else
    {
      op->vtkFocalPlaneContourRepresentation::UpdateLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFocalPlaneContourRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkFocalPlaneContourRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFocalPlaneContourRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFocalPlaneContourRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkFocalPlaneContourRepresentation\nC++: static vtkFocalPlaneContourRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFocalPlaneContourRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFocalPlaneContourRepresentation\nC++: vtkFocalPlaneContourRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFocalPlaneContourRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetIntermediatePointWorldPosition", PyvtkFocalPlaneContourRepresentation_GetIntermediatePointWorldPosition, METH_VARARGS,
   "GetIntermediatePointWorldPosition(self, n:int, idx:int,\n    point:[float, float, float]) -> int\nC++: int GetIntermediatePointWorldPosition(int n, int idx,\n    double point[3]) override;\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {"GetIntermediatePointDisplayPosition", PyvtkFocalPlaneContourRepresentation_GetIntermediatePointDisplayPosition, METH_VARARGS,
   "GetIntermediatePointDisplayPosition(self, n:int, idx:int,\n    point:[float, float, float]) -> int\nC++: virtual int GetIntermediatePointDisplayPosition(int n,\n    int idx, double point[3])\n\nGet the world position of the intermediate point at index idx\nbetween nodes n and (n+1) (or n and 0 if n is the last node and\nthe loop is closed). Returns 1 on success or 0 if n or idx are\nout of range.\n"},
  {"GetNthNodeDisplayPosition", PyvtkFocalPlaneContourRepresentation_GetNthNodeDisplayPosition, METH_VARARGS,
   "GetNthNodeDisplayPosition(self, n:int, pos:[float, float]) -> int\nC++: int GetNthNodeDisplayPosition(int n, double pos[2]) override;\n\nGet the nth node's display position. Will return 1 on success, or\n0 if there are not at least (n+1) nodes (0 based counting).\n"},
  {"GetNthNodeWorldPosition", PyvtkFocalPlaneContourRepresentation_GetNthNodeWorldPosition, METH_VARARGS,
   "GetNthNodeWorldPosition(self, n:int, pos:[float, float, float])\n    -> int\nC++: int GetNthNodeWorldPosition(int n, double pos[3]) override;\n\nGet the nth node's world position. Will return 1 on success, or 0\nif there are not at least (n+1) nodes (0 based counting).\n"},
  {"UpdateContourWorldPositionsBasedOnDisplayPositions", PyvtkFocalPlaneContourRepresentation_UpdateContourWorldPositionsBasedOnDisplayPositions, METH_VARARGS,
   "UpdateContourWorldPositionsBasedOnDisplayPositions(self) -> None\nC++: virtual void UpdateContourWorldPositionsBasedOnDisplayPositions(\n    )\n\nThe class maintains its true contour locations based on display\nco-ords This method syncs the world co-ords data structure with\nthe display co-ords.\n"},
  {"UpdateContour", PyvtkFocalPlaneContourRepresentation_UpdateContour, METH_VARARGS,
   "UpdateContour(self) -> int\nC++: int UpdateContour() override;\n\nThe method must be called whenever the contour needs to be\nupdated, usually from RenderOpaqueGeometry()\n"},
  {"UpdateLines", PyvtkFocalPlaneContourRepresentation_UpdateLines, METH_VARARGS,
   "UpdateLines(self, index:int) -> None\nC++: void UpdateLines(int index) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFocalPlaneContourRepresentation_Doc =
  "vtkFocalPlaneContourRepresentation - represent a contour drawn on the\nfocal plane.\n\n"
  "Superclass: vtkContourRepresentation\n\n"
  "The contour will stay on the focal plane irrespective of camera\n"
  "position/orientation changes. The class was written in order to be\n"
  "able to draw contours on a volume widget and have the contours\n"
  "overlaid on the focal plane in order to do contour segmentation. The\n"
  "superclass, vtkContourRepresentation handles contours that are drawn\n"
  "in actual world position co-ordinates, so they would rotate with the\n"
  "camera position/ orientation changes\n\n"
  "@sa\n"
  "vtkContourWidget vtkHandleRepresentation vtkContourRepresentation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFocalPlaneContourRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkFocalPlaneContourRepresentation", // tp_name
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
  PyvtkFocalPlaneContourRepresentation_Doc, // tp_doc
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

PyObject *PyvtkFocalPlaneContourRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFocalPlaneContourRepresentation_Type, PyvtkFocalPlaneContourRepresentation_Methods,
    "vtkFocalPlaneContourRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkContourRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFocalPlaneContourRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFocalPlaneContourRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFocalPlaneContourRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

