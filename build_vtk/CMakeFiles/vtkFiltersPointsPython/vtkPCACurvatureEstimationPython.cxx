// python wrapper for vtkPCACurvatureEstimation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPCACurvatureEstimation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPCACurvatureEstimation(PyObject *dict); }
extern "C" { PyObject *PyvtkPCACurvatureEstimation_ClassNew(); }


static PyObject *
PyvtkPCACurvatureEstimation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPCACurvatureEstimation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPCACurvatureEstimation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPCACurvatureEstimation *tempr = vtkPCACurvatureEstimation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPCACurvatureEstimation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPCACurvatureEstimation::NewInstance());

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
PyvtkPCACurvatureEstimation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPCACurvatureEstimation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPCACurvatureEstimation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_SetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSize(temp0);
    }
    else
    {
      op->vtkPCACurvatureEstimation::SetSampleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMinValue() :
      op->vtkPCACurvatureEstimation::GetSampleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSizeMaxValue() :
      op->vtkPCACurvatureEstimation::GetSampleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetSampleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSampleSize() :
      op->vtkPCACurvatureEstimation::GetSampleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  vtkAbstractPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkPCACurvatureEstimation::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPCACurvatureEstimation_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPCACurvatureEstimation *op = static_cast<vtkPCACurvatureEstimation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkPCACurvatureEstimation::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPCACurvatureEstimation_Methods[] = {
  {"IsTypeOf", PyvtkPCACurvatureEstimation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPCACurvatureEstimation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPCACurvatureEstimation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPCACurvatureEstimation\nC++: static vtkPCACurvatureEstimation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPCACurvatureEstimation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPCACurvatureEstimation\nC++: vtkPCACurvatureEstimation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPCACurvatureEstimation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPCACurvatureEstimation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSampleSize", PyvtkPCACurvatureEstimation_SetSampleSize, METH_VARARGS,
   "SetSampleSize(self, _arg:int) -> None\nC++: virtual void SetSampleSize(int _arg)\n\nFor each sampled point, specify the number of the closest,\nsurrounding points used to estimate the normal (the so called\nk-neighborhood). By default 25 points are used. Smaller numbers\nmay speed performance at the cost of accuracy.\n"},
  {"GetSampleSizeMinValue", PyvtkPCACurvatureEstimation_GetSampleSizeMinValue, METH_VARARGS,
   "GetSampleSizeMinValue(self) -> int\nC++: virtual int GetSampleSizeMinValue()\n\n"},
  {"GetSampleSizeMaxValue", PyvtkPCACurvatureEstimation_GetSampleSizeMaxValue, METH_VARARGS,
   "GetSampleSizeMaxValue(self) -> int\nC++: virtual int GetSampleSizeMaxValue()\n\n"},
  {"GetSampleSize", PyvtkPCACurvatureEstimation_GetSampleSize, METH_VARARGS,
   "GetSampleSize(self) -> int\nC++: virtual int GetSampleSize()\n\n"},
  {"SetLocator", PyvtkPCACurvatureEstimation_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkAbstractPointLocator) -> None\nC++: void SetLocator(vtkAbstractPointLocator *locator)\n\nSpecify a point locator. By default a vtkStaticPointLocator is\nused. The locator performs efficient searches to locate points\naround a sample point.\n"},
  {"GetLocator", PyvtkPCACurvatureEstimation_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkAbstractPointLocator\nC++: virtual vtkAbstractPointLocator *GetLocator()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPCACurvatureEstimation_Doc =
  "vtkPCACurvatureEstimation - generate curvature estimates using\nprincipal component analysis\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPCACurvatureEstimation generates point normals using PCA\n"
  "(principal component analysis).  Basically this estimates a local\n"
  "tangent plane around sample point p by considering a small\n"
  "neighborhood of points around p, and fitting a plane to the\n"
  "neighborhood (via PCA). A good introductory reference is Hoppe's\n"
  "\"Surface reconstruction from unorganized points.\"\n\n"
  "To use this filter, specify a neighborhood size. This may have to be\n"
  "set via experimentation. Optionally a point locator can be specified\n"
  "(instead of the default locator), which is used to accelerate\n"
  "searches around a sample point. Finally, the user should specify how\n"
  "to generate consistently-oriented normals. As computed by PCA,\n"
  "normals may point in +/- orientation, which may not be consistent\n"
  "with neighboring normals.\n\n"
  "The output of this filter is the same as the input except that a\n"
  "normal per point is produced. (Note that these are unit normals.)\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPCANormalEstimation\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPCACurvatureEstimation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkPCACurvatureEstimation", // tp_name
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
  PyvtkPCACurvatureEstimation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPCACurvatureEstimation_StaticNew()
{
  return vtkPCACurvatureEstimation::New();
}

PyObject *PyvtkPCACurvatureEstimation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPCACurvatureEstimation_Type, PyvtkPCACurvatureEstimation_Methods,
    "vtkPCACurvatureEstimation",
 &PyvtkPCACurvatureEstimation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPCACurvatureEstimation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPCACurvatureEstimation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPCACurvatureEstimation", o) != 0)
  {
    Py_DECREF(o);
  }

}

