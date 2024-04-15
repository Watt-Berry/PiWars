// python wrapper for vtkPointInterpolator2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPointInterpolator2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointInterpolator2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPointInterpolator2D_ClassNew(); }

#ifndef DECLARED_PyvtkPointInterpolator_ClassNew
extern "C" { PyObject *PyvtkPointInterpolator_ClassNew(); }
#define DECLARED_PyvtkPointInterpolator_ClassNew
#endif

static PyObject *
PyvtkPointInterpolator2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointInterpolator2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointInterpolator2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointInterpolator2D *tempr = vtkPointInterpolator2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointInterpolator2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointInterpolator2D::NewInstance());

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
PyvtkPointInterpolator2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointInterpolator2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointInterpolator2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_SetInterpolateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateZ(temp0);
    }
    else
    {
      op->vtkPointInterpolator2D::SetInterpolateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_GetInterpolateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateZ() :
      op->vtkPointInterpolator2D::GetInterpolateZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_InterpolateZOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateZOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateZOn();
    }
    else
    {
      op->vtkPointInterpolator2D::InterpolateZOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_InterpolateZOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateZOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateZOff();
    }
    else
    {
      op->vtkPointInterpolator2D::InterpolateZOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_SetZArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZArrayName(temp0);
    }
    else
    {
      op->vtkPointInterpolator2D::SetZArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointInterpolator2D_GetZArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointInterpolator2D *op = static_cast<vtkPointInterpolator2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetZArrayName() :
      op->vtkPointInterpolator2D::GetZArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPointInterpolator2D_Methods[] = {
  {"IsTypeOf", PyvtkPointInterpolator2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointInterpolator2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointInterpolator2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointInterpolator2D\nC++: static vtkPointInterpolator2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointInterpolator2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointInterpolator2D\nC++: vtkPointInterpolator2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointInterpolator2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointInterpolator2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInterpolateZ", PyvtkPointInterpolator2D_SetInterpolateZ, METH_VARARGS,
   "SetInterpolateZ(self, _arg:bool) -> None\nC++: virtual void SetInterpolateZ(bool _arg)\n\nSpecify whether to take the z-coordinate values of the source\npoints as attributes to be interpolated. This is in addition to\nany other point attribute data associated with the source. By\ndefault this is enabled.\n"},
  {"GetInterpolateZ", PyvtkPointInterpolator2D_GetInterpolateZ, METH_VARARGS,
   "GetInterpolateZ(self) -> bool\nC++: virtual bool GetInterpolateZ()\n\n"},
  {"InterpolateZOn", PyvtkPointInterpolator2D_InterpolateZOn, METH_VARARGS,
   "InterpolateZOn(self) -> None\nC++: virtual void InterpolateZOn()\n\n"},
  {"InterpolateZOff", PyvtkPointInterpolator2D_InterpolateZOff, METH_VARARGS,
   "InterpolateZOff(self) -> None\nC++: virtual void InterpolateZOff()\n\n"},
  {"SetZArrayName", PyvtkPointInterpolator2D_SetZArrayName, METH_VARARGS,
   "SetZArrayName(self, _arg:str) -> None\nC++: virtual void SetZArrayName(vtkStdString _arg)\n\nSpecify the name of the output array containing z values. This\nmethod is only applicable when InterpolateZ is enabled. By\ndefault the output array name is \"Elevation\".\n"},
  {"GetZArrayName", PyvtkPointInterpolator2D_GetZArrayName, METH_VARARGS,
   "GetZArrayName(self) -> str\nC++: virtual vtkStdString GetZArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointInterpolator2D_Doc =
  "vtkPointInterpolator2D - interpolate point cloud attribute data onto\nx-y plane using various kernels\n\n"
  "Superclass: vtkPointInterpolator\n\n"
  "vtkPointInterpolator2D probes a point cloud Pc (the filter Source)\n"
  "with a set of points P (the filter Input), interpolating the data\n"
  "values from Pc onto P. Note however that the descriptive phrase \"point\n"
  "cloud\" is a misnomer: Pc can be represented by any vtkDataSet type,\n"
  "with the points of the dataset forming Pc. Similarly, the output P\n"
  "can also be represented by any vtkDataSet type; and the\n"
  "topology/geometry structure of P is passed through to the output\n"
  "along with the newly interpolated arrays. However, this filter\n"
  "presumes that P lies on a plane z=0.0, thus z-coordinates are set\n"
  "accordingly during the interpolation process.\n\n"
  "The optional boolean flag InterpolateZ is provided for convenience.\n"
  "In effect it turns the source z coordinates into an additional array\n"
  "that is interpolated onto the output data. For example, if the source\n"
  "is a x-y-z LIDAR point cloud, then z can be interpolated onto the\n"
  "output dataset as a vertical elevation(z-coordinate).\n\n"
  "A key input to this filter is the specification of the interpolation\n"
  "kernel, and the parameters which control the associated interpolation\n"
  "process. Interpolation kernels include Voronoi, Gaussian, Shepard,\n"
  "and SPH (smoothed particle hydrodynamics), with additional kernels to\n"
  "be added in the future. See vtkPointInterpolator for more\n"
  "information.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "For widely spaced points in Pc, or when p is located outside the\n"
  "bounding region of Pc, the interpolation may behave badly and the\n"
  "interpolation process will adapt as necessary to produce output. For\n"
  "example, if the N closest points within R are requested to\n"
  "interpolate p, if N=0 then the interpolation will switch to a\n"
  "different strategy (which can be controlled as in the\n"
  "NullPointsStrategy).\n\n"
  "@sa\n"
  "vtkPointInterpolator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointInterpolator2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPointInterpolator2D", // tp_name
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
  PyvtkPointInterpolator2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointInterpolator2D_StaticNew()
{
  return vtkPointInterpolator2D::New();
}

PyObject *PyvtkPointInterpolator2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointInterpolator2D_Type, PyvtkPointInterpolator2D_Methods,
    "vtkPointInterpolator2D",
 &PyvtkPointInterpolator2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointInterpolator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointInterpolator2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointInterpolator2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointInterpolator2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

