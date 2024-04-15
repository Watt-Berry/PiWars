// python wrapper for vtkFitImplicitFunction
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFitImplicitFunction.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFitImplicitFunction(PyObject *dict); }
extern "C" { PyObject *PyvtkFitImplicitFunction_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkFitImplicitFunction_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFitImplicitFunction::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFitImplicitFunction::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFitImplicitFunction *tempr = vtkFitImplicitFunction::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFitImplicitFunction *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFitImplicitFunction::NewInstance());

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
PyvtkFitImplicitFunction_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFitImplicitFunction::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFitImplicitFunction::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtkFitImplicitFunction::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkFitImplicitFunction::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0);
    }
    else
    {
      op->vtkFitImplicitFunction::SetThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThresholdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMinValue() :
      op->vtkFitImplicitFunction::GetThresholdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThresholdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdMaxValue() :
      op->vtkFitImplicitFunction::GetThresholdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkFitImplicitFunction::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFitImplicitFunction_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFitImplicitFunction *op = static_cast<vtkFitImplicitFunction *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFitImplicitFunction::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFitImplicitFunction_Methods[] = {
  {"IsTypeOf", PyvtkFitImplicitFunction_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFitImplicitFunction_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFitImplicitFunction_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFitImplicitFunction\nC++: static vtkFitImplicitFunction *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFitImplicitFunction_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFitImplicitFunction\nC++: vtkFitImplicitFunction *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFitImplicitFunction_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFitImplicitFunction_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImplicitFunction", PyvtkFitImplicitFunction_SetImplicitFunction, METH_VARARGS,
   "SetImplicitFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function defining a surface on which points\nare to be extracted.\n"},
  {"GetImplicitFunction", PyvtkFitImplicitFunction_GetImplicitFunction, METH_VARARGS,
   "GetImplicitFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\n"},
  {"SetThreshold", PyvtkFitImplicitFunction_SetThreshold, METH_VARARGS,
   "SetThreshold(self, _arg:float) -> None\nC++: virtual void SetThreshold(double _arg)\n\nSpecify a threshold value which defines a fuzzy extraction\nsurface. Since in this filter the implicit surface is defined as\nf(x,y,z)=0; the extracted points are (-Threshold <= f(x,y,z) <\nThreshold).\n"},
  {"GetThresholdMinValue", PyvtkFitImplicitFunction_GetThresholdMinValue, METH_VARARGS,
   "GetThresholdMinValue(self) -> float\nC++: virtual double GetThresholdMinValue()\n\n"},
  {"GetThresholdMaxValue", PyvtkFitImplicitFunction_GetThresholdMaxValue, METH_VARARGS,
   "GetThresholdMaxValue(self) -> float\nC++: virtual double GetThresholdMaxValue()\n\n"},
  {"GetThreshold", PyvtkFitImplicitFunction_GetThreshold, METH_VARARGS,
   "GetThreshold(self) -> float\nC++: virtual double GetThreshold()\n\n"},
  {"GetMTime", PyvtkFitImplicitFunction_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the implicit\nfunction.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFitImplicitFunction_Doc =
  "vtkFitImplicitFunction - extract points on the surface of an implicit\nfunction\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkFitImplicitFunction extract points that are on the surface of an\n"
  "implicit function (within some threshold). Implicit functions in VTK\n"
  "are any function of the form f(x,y,z)=c, where values c==0 are\n"
  "considered the surface of the implicit function. Typical examples of\n"
  "implicit functions include planes, spheres, cylinders, cones, etc.\n"
  "plus boolean combinations of these functions. In this implementation,\n"
  "a threshold is used to create a fuzzy region considered \"on\" the\n"
  "surface. In essence, this is a very poor man's RANSAC algorithm,\n"
  "where the user picks a function on which to fit some points. Thus it\n"
  "is possible to use this filter to define a proposed model and place\n"
  "it into an optimization loop to best fit it to a set of points.\n\n"
  "Note that while any vtkPointSet type can be provided as input, the\n"
  "output is represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output). Also, after filter\n"
  "execution, the user can request a vtkIdType* map which indicates how\n"
  "the input points were mapped to the output. A value of map[i] (where\n"
  "i is the ith input point) less than 0 means that the ith input point\n"
  "was removed. (See also the superclass documentation for accessing the\n"
  "removed points through the filter's second output.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointCloudFilter vtkExtractPoints vtkImplicitFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFitImplicitFunction_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkFitImplicitFunction", // tp_name
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
  PyvtkFitImplicitFunction_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFitImplicitFunction_StaticNew()
{
  return vtkFitImplicitFunction::New();
}

PyObject *PyvtkFitImplicitFunction_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFitImplicitFunction_Type, PyvtkFitImplicitFunction_Methods,
    "vtkFitImplicitFunction",
 &PyvtkFitImplicitFunction_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFitImplicitFunction(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFitImplicitFunction_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFitImplicitFunction", o) != 0)
  {
    Py_DECREF(o);
  }

}

