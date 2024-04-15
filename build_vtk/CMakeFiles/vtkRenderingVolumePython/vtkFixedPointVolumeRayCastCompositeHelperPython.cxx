// python wrapper for vtkFixedPointVolumeRayCastCompositeHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFixedPointVolumeRayCastCompositeHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkFixedPointVolumeRayCastCompositeHelper_ClassNew(); }

#ifndef DECLARED_PyvtkFixedPointVolumeRayCastHelper_ClassNew
extern "C" { PyObject *PyvtkFixedPointVolumeRayCastHelper_ClassNew(); }
#define DECLARED_PyvtkFixedPointVolumeRayCastHelper_ClassNew
#endif

static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFixedPointVolumeRayCastCompositeHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFixedPointVolumeRayCastCompositeHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = vtkFixedPointVolumeRayCastCompositeHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFixedPointVolumeRayCastCompositeHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFixedPointVolumeRayCastCompositeHelper::NewInstance());

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
PyvtkFixedPointVolumeRayCastCompositeHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFixedPointVolumeRayCastCompositeHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFixedPointVolumeRayCastCompositeHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFixedPointVolumeRayCastCompositeHelper_GenerateImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFixedPointVolumeRayCastCompositeHelper *op = static_cast<vtkFixedPointVolumeRayCastCompositeHelper *>(vp);

  int temp0;
  int temp1;
  vtkVolume *temp2 = nullptr;
  vtkFixedPointVolumeRayCastMapper *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVolume") &&
      ap.GetVTKObject(temp3, "vtkFixedPointVolumeRayCastMapper"))
  {
    if (ap.IsBound())
    {
      op->GenerateImage(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFixedPointVolumeRayCastCompositeHelper::GenerateImage(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFixedPointVolumeRayCastCompositeHelper_Methods[] = {
  {"IsTypeOf", PyvtkFixedPointVolumeRayCastCompositeHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFixedPointVolumeRayCastCompositeHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFixedPointVolumeRayCastCompositeHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: static vtkFixedPointVolumeRayCastCompositeHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFixedPointVolumeRayCastCompositeHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFixedPointVolumeRayCastCompositeHelper\nC++: vtkFixedPointVolumeRayCastCompositeHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFixedPointVolumeRayCastCompositeHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFixedPointVolumeRayCastCompositeHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateImage", PyvtkFixedPointVolumeRayCastCompositeHelper_GenerateImage, METH_VARARGS,
   "GenerateImage(self, threadID:int, threadCount:int, vol:vtkVolume,\n    mapper:vtkFixedPointVolumeRayCastMapper) -> None\nC++: void GenerateImage(int threadID, int threadCount,\n    vtkVolume *vol, vtkFixedPointVolumeRayCastMapper *mapper)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFixedPointVolumeRayCastCompositeHelper_Doc =
  "vtkFixedPointVolumeRayCastCompositeHelper - A helper that generates\ncomposite images for the volume ray cast mapper\n\n"
  "Superclass: vtkFixedPointVolumeRayCastHelper\n\n"
  "This is one of the helper classes for the\n"
  "vtkFixedPointVolumeRayCastMapper. It will generate composite images\n"
  "using an alpha blending operation. This class should not be used\n"
  "directly, it is a helper class for the mapper and has no user-level\n"
  "API.\n\n"
  "@sa\n"
  "vtkFixedPointVolumeRayCastMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFixedPointVolumeRayCastCompositeHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkFixedPointVolumeRayCastCompositeHelper", // tp_name
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
  PyvtkFixedPointVolumeRayCastCompositeHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFixedPointVolumeRayCastCompositeHelper_StaticNew()
{
  return vtkFixedPointVolumeRayCastCompositeHelper::New();
}

PyObject *PyvtkFixedPointVolumeRayCastCompositeHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFixedPointVolumeRayCastCompositeHelper_Type, PyvtkFixedPointVolumeRayCastCompositeHelper_Methods,
    "vtkFixedPointVolumeRayCastCompositeHelper",
 &PyvtkFixedPointVolumeRayCastCompositeHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkFixedPointVolumeRayCastHelper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFixedPointVolumeRayCastCompositeHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFixedPointVolumeRayCastCompositeHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFixedPointVolumeRayCastCompositeHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

