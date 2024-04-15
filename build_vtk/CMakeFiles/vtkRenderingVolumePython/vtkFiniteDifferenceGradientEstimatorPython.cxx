// python wrapper for vtkFiniteDifferenceGradientEstimator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFiniteDifferenceGradientEstimator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFiniteDifferenceGradientEstimator(PyObject *dict); }
extern "C" { PyObject *PyvtkFiniteDifferenceGradientEstimator_ClassNew(); }

#ifndef DECLARED_PyvtkEncodedGradientEstimator_ClassNew
extern "C" { PyObject *PyvtkEncodedGradientEstimator_ClassNew(); }
#define DECLARED_PyvtkEncodedGradientEstimator_ClassNew
#endif

static PyObject *
PyvtkFiniteDifferenceGradientEstimator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFiniteDifferenceGradientEstimator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFiniteDifferenceGradientEstimator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFiniteDifferenceGradientEstimator *tempr = vtkFiniteDifferenceGradientEstimator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFiniteDifferenceGradientEstimator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFiniteDifferenceGradientEstimator::NewInstance());

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
PyvtkFiniteDifferenceGradientEstimator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFiniteDifferenceGradientEstimator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFiniteDifferenceGradientEstimator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_SetSampleSpacingInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSpacingInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSpacingInVoxels(temp0);
    }
    else
    {
      op->vtkFiniteDifferenceGradientEstimator::SetSampleSpacingInVoxels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFiniteDifferenceGradientEstimator_GetSampleSpacingInVoxels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSpacingInVoxels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFiniteDifferenceGradientEstimator *op = static_cast<vtkFiniteDifferenceGradientEstimator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSpacingInVoxels() :
      op->vtkFiniteDifferenceGradientEstimator::GetSampleSpacingInVoxels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFiniteDifferenceGradientEstimator_Methods[] = {
  {"IsTypeOf", PyvtkFiniteDifferenceGradientEstimator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFiniteDifferenceGradientEstimator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFiniteDifferenceGradientEstimator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkFiniteDifferenceGradientEstimator\nC++: static vtkFiniteDifferenceGradientEstimator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFiniteDifferenceGradientEstimator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFiniteDifferenceGradientEstimator\nC++: vtkFiniteDifferenceGradientEstimator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFiniteDifferenceGradientEstimator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFiniteDifferenceGradientEstimator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSampleSpacingInVoxels", PyvtkFiniteDifferenceGradientEstimator_SetSampleSpacingInVoxels, METH_VARARGS,
   "SetSampleSpacingInVoxels(self, _arg:int) -> None\nC++: virtual void SetSampleSpacingInVoxels(int _arg)\n\nSet/Get the spacing between samples for the finite differences\nmethod used to compute the normal. This spacing is in voxel\nunits.\n"},
  {"GetSampleSpacingInVoxels", PyvtkFiniteDifferenceGradientEstimator_GetSampleSpacingInVoxels, METH_VARARGS,
   "GetSampleSpacingInVoxels(self) -> int\nC++: virtual int GetSampleSpacingInVoxels()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFiniteDifferenceGradientEstimator_Doc =
  "vtkFiniteDifferenceGradientEstimator - Use finite differences to\nestimate gradient.\n\n"
  "Superclass: vtkEncodedGradientEstimator\n\n"
  "vtkFiniteDifferenceGradientEstimator is a concrete subclass of\n"
  " vtkEncodedGradientEstimator that uses a central differences\n"
  "technique to\n"
  " estimate the gradient. The gradient at some sample location (x,y,z)\n"
  " would be estimated by:\n\n\n"
  "      nx = (f(x-dx,y,z) - f(x+dx,y,z)) / 2*dx;\n"
  "      ny = (f(x,y-dy,z) - f(x,y+dy,z)) / 2*dy;\n"
  "      nz = (f(x,y,z-dz) - f(x,y,z+dz)) / 2*dz;\n\n\n"
  " This value is normalized to determine a unit direction vector and a\n"
  " magnitude. The normal is computed in voxel space, and\n"
  " dx = dy = dz = SampleSpacingInVoxels. A scaling factor is applied to\n"
  " convert this normal from voxel space to world coordinates.\n\n"
  "@sa\n"
  "vtkEncodedGradientEstimator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFiniteDifferenceGradientEstimator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkFiniteDifferenceGradientEstimator", // tp_name
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
  PyvtkFiniteDifferenceGradientEstimator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFiniteDifferenceGradientEstimator_StaticNew()
{
  return vtkFiniteDifferenceGradientEstimator::New();
}

PyObject *PyvtkFiniteDifferenceGradientEstimator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFiniteDifferenceGradientEstimator_Type, PyvtkFiniteDifferenceGradientEstimator_Methods,
    "vtkFiniteDifferenceGradientEstimator",
 &PyvtkFiniteDifferenceGradientEstimator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEncodedGradientEstimator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFiniteDifferenceGradientEstimator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFiniteDifferenceGradientEstimator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFiniteDifferenceGradientEstimator", o) != 0)
  {
    Py_DECREF(o);
  }

}

