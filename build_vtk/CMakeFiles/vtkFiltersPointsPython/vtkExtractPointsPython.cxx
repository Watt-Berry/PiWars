// python wrapper for vtkExtractPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkExtractPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractPoints *tempr = vtkExtractPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractPoints::NewInstance());

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
PyvtkExtractPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

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
      op->vtkExtractPoints::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtkExtractPoints::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_SetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtractInside(temp0);
    }
    else
    {
      op->vtkExtractPoints::SetExtractInside(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_GetExtractInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtractInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtractInside() :
      op->vtkExtractPoints::GetExtractInside());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_ExtractInsideOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOn();
    }
    else
    {
      op->vtkExtractPoints::ExtractInsideOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_ExtractInsideOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtractInsideOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtractInsideOff();
    }
    else
    {
      op->vtkExtractPoints::ExtractInsideOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractPoints_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractPoints *op = static_cast<vtkExtractPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExtractPoints::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractPoints_Methods[] = {
  {"IsTypeOf", PyvtkExtractPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractPoints\nC++: static vtkExtractPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractPoints\nC++: vtkExtractPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImplicitFunction", PyvtkExtractPoints_SetImplicitFunction, METH_VARARGS,
   "SetImplicitFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function for inside/outside checks.\n"},
  {"GetImplicitFunction", PyvtkExtractPoints_GetImplicitFunction, METH_VARARGS,
   "GetImplicitFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\n"},
  {"SetExtractInside", PyvtkExtractPoints_SetExtractInside, METH_VARARGS,
   "SetExtractInside(self, _arg:bool) -> None\nC++: virtual void SetExtractInside(bool _arg)\n\nBoolean controls whether to extract points that are inside of\nimplicit function (ExtractInside == true) or outside of implicit\nfunction (ExtractInside == false). By default, ExtractInside is\ntrue.\n"},
  {"GetExtractInside", PyvtkExtractPoints_GetExtractInside, METH_VARARGS,
   "GetExtractInside(self) -> bool\nC++: virtual bool GetExtractInside()\n\n"},
  {"ExtractInsideOn", PyvtkExtractPoints_ExtractInsideOn, METH_VARARGS,
   "ExtractInsideOn(self) -> None\nC++: virtual void ExtractInsideOn()\n\n"},
  {"ExtractInsideOff", PyvtkExtractPoints_ExtractInsideOff, METH_VARARGS,
   "ExtractInsideOff(self) -> None\nC++: virtual void ExtractInsideOff()\n\n"},
  {"GetMTime", PyvtkExtractPoints_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the implicit\nfunction\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractPoints_Doc =
  "vtkExtractPoints - extract points within an implicit function\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkExtractPoints removes points that are either inside or outside of\n"
  "a vtkImplicitFunction. Implicit functions in VTK defined as function\n"
  "of the form f(x,y,z)=c, where values c<=0 are interior values of the\n"
  "implicit function. Typical examples include planes, spheres,\n"
  "cylinders, cones, etc. plus boolean combinations of these functions.\n"
  "(This operation presumes closure on the set, so points on the\n"
  "boundary are also considered to be inside.)\n\n"
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
  "@warning\n"
  "The vtkExtractEnclosedPoints filter can be used to extract points\n"
  "inside of a volume defined by a manifold, closed polygonal surface.\n"
  "This filter however is much slower than methods based on implicit\n"
  "functions (like this filter).\n\n"
  "@sa\n"
  "vtkExtractEnclosedPoints vtkSelectEnclosedPoints vtkPointCloudFilter\n"
  "vtkRadiusOutlierRemoval vtkStatisticalOutlierRemoval\n"
  "vtkThresholdPoints vtkImplicitFunction vtkExtractGeometry\n"
  "vtkFitImplicitFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkExtractPoints", // tp_name
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
  PyvtkExtractPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractPoints_StaticNew()
{
  return vtkExtractPoints::New();
}

PyObject *PyvtkExtractPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractPoints_Type, PyvtkExtractPoints_Methods,
    "vtkExtractPoints",
 &PyvtkExtractPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

