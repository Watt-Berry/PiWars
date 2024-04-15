// python wrapper for vtkExtractEnclosedPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractEnclosedPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractEnclosedPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractEnclosedPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkExtractEnclosedPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractEnclosedPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractEnclosedPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractEnclosedPoints *tempr = vtkExtractEnclosedPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractEnclosedPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractEnclosedPoints::NewInstance());

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
PyvtkExtractEnclosedPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractEnclosedPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractEnclosedPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetSurfaceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceData(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetSurfaceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetSurfaceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceConnection(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetSurfaceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetSurface_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface() :
      op->vtkExtractEnclosedPoints::GetSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractEnclosedPoints_GetSurface_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  vtkInformationVector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVector"))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSurface(temp0) :
      op->vtkExtractEnclosedPoints::GetSurface(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExtractEnclosedPoints_GetSurface(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkExtractEnclosedPoints_GetSurface_s1(self, args);
    case 1:
      return PyvtkExtractEnclosedPoints_GetSurface_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSurface");
  return nullptr;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckSurface(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetCheckSurface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_CheckSurfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOn();
    }
    else
    {
      op->vtkExtractEnclosedPoints::CheckSurfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_CheckSurfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckSurfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckSurfaceOff();
    }
    else
    {
      op->vtkExtractEnclosedPoints::CheckSurfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetCheckSurface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckSurface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckSurface() :
      op->vtkExtractEnclosedPoints::GetCheckSurface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkExtractEnclosedPoints::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkExtractEnclosedPoints::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkExtractEnclosedPoints::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractEnclosedPoints_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractEnclosedPoints *op = static_cast<vtkExtractEnclosedPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkExtractEnclosedPoints::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractEnclosedPoints_Methods[] = {
  {"IsTypeOf", PyvtkExtractEnclosedPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractEnclosedPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractEnclosedPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractEnclosedPoints\nC++: static vtkExtractEnclosedPoints *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractEnclosedPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractEnclosedPoints\nC++: vtkExtractEnclosedPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractEnclosedPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractEnclosedPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSurfaceData", PyvtkExtractEnclosedPoints_SetSurfaceData, METH_VARARGS,
   "SetSurfaceData(self, pd:vtkPolyData) -> None\nC++: void SetSurfaceData(vtkPolyData *pd)\n\nSet the surface to be used to test for containment. Two methods\nare provided: one directly for vtkPolyData, and one for the\noutput of a filter.\n"},
  {"SetSurfaceConnection", PyvtkExtractEnclosedPoints_SetSurfaceConnection, METH_VARARGS,
   "SetSurfaceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSurfaceConnection(vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetSurface", PyvtkExtractEnclosedPoints_GetSurface, METH_VARARGS,
   "GetSurface(self) -> vtkPolyData\nC++: vtkPolyData *GetSurface()\nGetSurface(self, sourceInfo:vtkInformationVector) -> vtkPolyData\nC++: vtkPolyData *GetSurface(vtkInformationVector *sourceInfo)\n\nReturn a pointer to the enclosing surface.\n"},
  {"SetCheckSurface", PyvtkExtractEnclosedPoints_SetCheckSurface, METH_VARARGS,
   "SetCheckSurface(self, _arg:int) -> None\nC++: virtual void SetCheckSurface(vtkTypeBool _arg)\n\nSpecify whether to check the surface for closure. If on, then the\nalgorithm first checks to see if the surface is closed and\nmanifold.\n"},
  {"CheckSurfaceOn", PyvtkExtractEnclosedPoints_CheckSurfaceOn, METH_VARARGS,
   "CheckSurfaceOn(self) -> None\nC++: virtual void CheckSurfaceOn()\n\n"},
  {"CheckSurfaceOff", PyvtkExtractEnclosedPoints_CheckSurfaceOff, METH_VARARGS,
   "CheckSurfaceOff(self) -> None\nC++: virtual void CheckSurfaceOff()\n\n"},
  {"GetCheckSurface", PyvtkExtractEnclosedPoints_GetCheckSurface, METH_VARARGS,
   "GetCheckSurface(self) -> int\nC++: virtual vtkTypeBool GetCheckSurface()\n\n"},
  {"SetTolerance", PyvtkExtractEnclosedPoints_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify the tolerance on the intersection. The tolerance is\nexpressed as a fraction of the diagonal of the bounding box of\nthe enclosing surface.\n"},
  {"GetToleranceMinValue", PyvtkExtractEnclosedPoints_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkExtractEnclosedPoints_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkExtractEnclosedPoints_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractEnclosedPoints_Doc =
  "vtkExtractEnclosedPoints - extract points inside of a closed\npolygonal surface\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkExtractEnclosedPoints is a filter that evaluates all the input\n"
  "points to determine whether they are contained within an enclosing\n"
  "surface. Those within the surface are sent to the output. The\n"
  "enclosing surface is specified through a second input to the filter.\n\n"
  "Note: as a derived class of vtkPointCloudFilter, additional methods\n"
  "are available for generating an in/out mask, and also extracting\n"
  "points outside of the enclosing surface.\n\n"
  "@warning\n"
  "The filter assumes that the surface is closed and manifold. A boolean\n"
  "flag can be set to force the filter to first check whether this is\n"
  "true. If false, all points will be marked outside. Note that if this\n"
  "check is not performed and the surface is not closed, the results are\n"
  "undefined.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@warning\n"
  "The filter vtkSelectEnclosedPoints marks points as to in/out of the\n"
  "enclosing surface, and operates on any dataset type, producing an\n"
  "output dataset of the same type as the input. Then, thresholding and\n"
  "masking filters can be used to extract parts of the dataset. This\n"
  "filter (vtkExtractEnclosedPoints) is meant to operate on point clouds\n"
  "represented by vtkPolyData, and produces vtkPolyData on output, so it\n"
  "is more efficient for point processing. Note that this filter\n"
  "delegates many of its methods to vtkSelectEnclosedPoints.\n\n"
  "@sa\n"
  "vtkSelectEnclosedPoints vtkExtractPoints\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractEnclosedPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkExtractEnclosedPoints", // tp_name
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
  PyvtkExtractEnclosedPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractEnclosedPoints_StaticNew()
{
  return vtkExtractEnclosedPoints::New();
}

PyObject *PyvtkExtractEnclosedPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractEnclosedPoints_Type, PyvtkExtractEnclosedPoints_Methods,
    "vtkExtractEnclosedPoints",
 &PyvtkExtractEnclosedPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractEnclosedPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractEnclosedPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractEnclosedPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

