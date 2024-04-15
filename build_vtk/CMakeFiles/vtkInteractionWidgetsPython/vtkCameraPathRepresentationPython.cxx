// python wrapper for vtkCameraPathRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCameraPathRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCameraPathRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkCameraPathRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractSplineRepresentation_ClassNew
extern "C" { PyObject *PyvtkAbstractSplineRepresentation_ClassNew(); }
#define DECLARED_PyvtkAbstractSplineRepresentation_ClassNew
#endif

static PyObject *
PyvtkCameraPathRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCameraPathRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCameraPathRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCameraPathRepresentation *tempr = vtkCameraPathRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCameraPathRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCameraPathRepresentation::NewInstance());

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
PyvtkCameraPathRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCameraPathRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCameraPathRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_SetDirectional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectional(temp0);
    }
    else
    {
      op->vtkCameraPathRepresentation::SetDirectional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_SetNumberOfHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfHandles(temp0);
    }
    else
    {
      op->vtkCameraPathRepresentation::SetNumberOfHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_SetParametricSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  vtkParametricSpline *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkParametricSpline"))
  {
    if (ap.IsBound())
    {
      op->SetParametricSpline(temp0);
    }
    else
    {
      op->vtkCameraPathRepresentation::SetParametricSpline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_InitializeHandles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeHandles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->InitializeHandles(temp0);
    }
    else
    {
      op->vtkCameraPathRepresentation::InitializeHandles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkCameraPathRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_AddCameraAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCameraAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  vtkCamera *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddCameraAt(temp0, temp1);
    }
    else
    {
      op->vtkCameraPathRepresentation::AddCameraAt(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCameraPathRepresentation_DeleteCameraAt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCameraAt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCameraPathRepresentation *op = static_cast<vtkCameraPathRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteCameraAt(temp0);
    }
    else
    {
      op->vtkCameraPathRepresentation::DeleteCameraAt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCameraPathRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkCameraPathRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCameraPathRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCameraPathRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCameraPathRepresentation\nC++: static vtkCameraPathRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCameraPathRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCameraPathRepresentation\nC++: vtkCameraPathRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCameraPathRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCameraPathRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDirectional", PyvtkCameraPathRepresentation_SetDirectional, METH_VARARGS,
   "SetDirectional(self, val:bool) -> None\nC++: void SetDirectional(bool val) override;\n\nSets the representation to be a curve interpolating multiple\ncameras pointing to their focal point. If set to false, the\ncameras are only represented as spheres.\n"},
  {"SetNumberOfHandles", PyvtkCameraPathRepresentation_SetNumberOfHandles, METH_VARARGS,
   "SetNumberOfHandles(self, npts:int) -> None\nC++: void SetNumberOfHandles(int npts) override;\n\nAdjust the number of camera handles while keeping the same path.\n"},
  {"SetParametricSpline", PyvtkCameraPathRepresentation_SetParametricSpline, METH_VARARGS,
   "SetParametricSpline(self, spline:vtkParametricSpline) -> None\nC++: void SetParametricSpline(vtkParametricSpline *spline)\n    override;\n\nSet the parametric spline object.\n"},
  {"InitializeHandles", PyvtkCameraPathRepresentation_InitializeHandles, METH_VARARGS,
   "InitializeHandles(self, points:vtkPoints) -> None\nC++: void InitializeHandles(vtkPoints *points) override;\n\nConvenience method to allocate and set the Camera handles from a\nvtkPoints instance (corresponding to the camera positions). If\nthe first and last points are the same, the spline sets Closed to\nthe on InteractionState and disregards the last point, otherwise\nClosed remains unchanged.\n"},
  {"BuildRepresentation", PyvtkCameraPathRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nMethod that satisfy vtkWidgetRepresentation API. Updates the\nspline in relation with the handles positions and updates\nvtkWidgetRepresentation::InitialLength (useful for the sizing\nmethods).\n"},
  {"AddCameraAt", PyvtkCameraPathRepresentation_AddCameraAt, METH_VARARGS,
   "AddCameraAt(self, camera:vtkCamera, index:int) -> None\nC++: void AddCameraAt(vtkCamera *camera, int index)\n\nAdd a camera to the path.\n"},
  {"DeleteCameraAt", PyvtkCameraPathRepresentation_DeleteCameraAt, METH_VARARGS,
   "DeleteCameraAt(self, index:int) -> None\nC++: void DeleteCameraAt(int index)\n\nRemove a camera from the path.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCameraPathRepresentation_Doc =
  "vtkCameraPathRepresentation - representation for a camera path.\n\n"
  "Superclass: vtkAbstractSplineRepresentation\n\n"
  "vtkCameraPathRepresentation is a vtkWidgetRepresentation for a camera\n"
  "path. This 3D widget defines a camera path that can be interactively\n"
  "manipulated in a scene. The camera path has camera handles, that can\n"
  "be added and deleted, plus they can be picked on the path itself to\n"
  "be translated in the scene. This representation is used with\n"
  "vtkCameraPathWidget.\n"
  "@sa\n"
  "vtkCameraPathWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCameraPathRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCameraPathRepresentation", // tp_name
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
  PyvtkCameraPathRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCameraPathRepresentation_StaticNew()
{
  return vtkCameraPathRepresentation::New();
}

PyObject *PyvtkCameraPathRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCameraPathRepresentation_Type, PyvtkCameraPathRepresentation_Methods,
    "vtkCameraPathRepresentation",
 &PyvtkCameraPathRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractSplineRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCameraPathRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCameraPathRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCameraPathRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

