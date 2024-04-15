// python wrapper for vtkHausdorffDistancePointSetFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHausdorffDistancePointSetFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHausdorffDistancePointSetFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkHausdorffDistancePointSetFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHausdorffDistancePointSetFilter_DistanceMethod_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkHausdorffDistancePointSetFilter.DistanceMethod", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkHausdorffDistancePointSetFilter_DistanceMethod_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkHausdorffDistancePointSetFilter_DistanceMethod_Type, static_cast<int>(val));
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHausdorffDistancePointSetFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHausdorffDistancePointSetFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHausdorffDistancePointSetFilter *tempr = vtkHausdorffDistancePointSetFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHausdorffDistancePointSetFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHausdorffDistancePointSetFilter::NewInstance());

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
PyvtkHausdorffDistancePointSetFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHausdorffDistancePointSetFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHausdorffDistancePointSetFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_GetRelativeDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRelativeDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRelativeDistance() :
      op->vtkHausdorffDistancePointSetFilter::GetRelativeDistance());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_GetHausdorffDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHausdorffDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHausdorffDistance() :
      op->vtkHausdorffDistancePointSetFilter::GetHausdorffDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetDistanceMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTargetDistanceMethod(temp0);
    }
    else
    {
      op->vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_GetTargetDistanceMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetDistanceMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTargetDistanceMethod() :
      op->vtkHausdorffDistancePointSetFilter::GetTargetDistanceMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethodToPointToPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetDistanceMethodToPointToPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTargetDistanceMethodToPointToPoint();
    }
    else
    {
      op->vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethodToPointToPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethodToPointToCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTargetDistanceMethodToPointToCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTargetDistanceMethodToPointToCell();
    }
    else
    {
      op->vtkHausdorffDistancePointSetFilter::SetTargetDistanceMethodToPointToCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHausdorffDistancePointSetFilter_GetTargetDistanceMethodAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTargetDistanceMethodAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHausdorffDistancePointSetFilter *op = static_cast<vtkHausdorffDistancePointSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTargetDistanceMethodAsString() :
      op->vtkHausdorffDistancePointSetFilter::GetTargetDistanceMethodAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHausdorffDistancePointSetFilter_Methods[] = {
  {"IsTypeOf", PyvtkHausdorffDistancePointSetFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHausdorffDistancePointSetFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHausdorffDistancePointSetFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHausdorffDistancePointSetFilter\nC++: static vtkHausdorffDistancePointSetFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHausdorffDistancePointSetFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHausdorffDistancePointSetFilter\nC++: vtkHausdorffDistancePointSetFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHausdorffDistancePointSetFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHausdorffDistancePointSetFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRelativeDistance", PyvtkHausdorffDistancePointSetFilter_GetRelativeDistance, METH_VARARGS,
   "GetRelativeDistance(self) -> (float, float)\nC++: virtual double *GetRelativeDistance()\n\nGet the Relative Distance from A to B and B to A.\n"},
  {"GetHausdorffDistance", PyvtkHausdorffDistancePointSetFilter_GetHausdorffDistance, METH_VARARGS,
   "GetHausdorffDistance(self) -> float\nC++: virtual double GetHausdorffDistance()\n\nGet the Hausdorff Distance.\n"},
  {"SetTargetDistanceMethod", PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethod, METH_VARARGS,
   "SetTargetDistanceMethod(self, _arg:int) -> None\nC++: virtual void SetTargetDistanceMethod(int _arg)\n\nSpecify the strategy for computing the distance. If no topology\nis specified (ie. vtkPointSet or vtkPolyData without vtkPolys),\nthe distances are computed between point location. If polys exist\n(i.e. triangulation), the TargetDistanceMethod allows for an\ninterpolation of the cells to ensure a better minimal distance\nexploration.\n"},
  {"GetTargetDistanceMethod", PyvtkHausdorffDistancePointSetFilter_GetTargetDistanceMethod, METH_VARARGS,
   "GetTargetDistanceMethod(self) -> int\nC++: virtual int GetTargetDistanceMethod()\n\n"},
  {"SetTargetDistanceMethodToPointToPoint", PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethodToPointToPoint, METH_VARARGS,
   "SetTargetDistanceMethodToPointToPoint(self) -> None\nC++: void SetTargetDistanceMethodToPointToPoint()\n\n"},
  {"SetTargetDistanceMethodToPointToCell", PyvtkHausdorffDistancePointSetFilter_SetTargetDistanceMethodToPointToCell, METH_VARARGS,
   "SetTargetDistanceMethodToPointToCell(self) -> None\nC++: void SetTargetDistanceMethodToPointToCell()\n\n"},
  {"GetTargetDistanceMethodAsString", PyvtkHausdorffDistancePointSetFilter_GetTargetDistanceMethodAsString, METH_VARARGS,
   "GetTargetDistanceMethodAsString(self) -> str\nC++: const char *GetTargetDistanceMethodAsString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHausdorffDistancePointSetFilter_Doc =
  "vtkHausdorffDistancePointSetFilter - Compute Hausdorff distance\nbetween two point sets\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This class computes the relative and hausdorff distances from two\n"
  "point sets (input port 0 and input port 1). If no topology is\n"
  "specified (ie. vtkPointSet or vtkPolyData without vtkPolys), the\n"
  "distances are computed between point location. If polys exist (ie\n"
  "triangulation), the TargetDistanceMethod allows for an interpolation\n"
  "of the cells to ensure a better minimal distance exploration.\n\n"
  "The outputs (port 0 and 1) have the same geometry and topology as its\n"
  "respective input port. Two FieldData arrays are added :\n"
  "HausdorffDistance and RelativeDistance. The former is equal on both\n"
  "outputs whereas the latter may differ. A PointData containing the\n"
  "specific point minimal distance is also added to both outputs.\n\n"
  "@author Frederic Commandeur@author Jerome Velut@author LTSI\n\n"
  "@see https://www.vtkjournal.org/browse/publication/839\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHausdorffDistancePointSetFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkHausdorffDistancePointSetFilter", // tp_name
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
  PyvtkHausdorffDistancePointSetFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHausdorffDistancePointSetFilter_StaticNew()
{
  return vtkHausdorffDistancePointSetFilter::New();
}

PyObject *PyvtkHausdorffDistancePointSetFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHausdorffDistancePointSetFilter_Type, PyvtkHausdorffDistancePointSetFilter_Methods,
    "vtkHausdorffDistancePointSetFilter",
 &PyvtkHausdorffDistancePointSetFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkHausdorffDistancePointSetFilter_DistanceMethod_Type);
  PyVTKEnum_Add(&PyvtkHausdorffDistancePointSetFilter_DistanceMethod_Type, "vtkHausdorffDistancePointSetFilter.DistanceMethod");

  o = (PyObject *)&PyvtkHausdorffDistancePointSetFilter_DistanceMethod_Type;
  if (PyDict_SetItemString(d, "DistanceMethod", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkHausdorffDistancePointSetFilter::DistanceMethod cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "POINT_TO_POINT", vtkHausdorffDistancePointSetFilter::POINT_TO_POINT },
        { "POINT_TO_CELL", vtkHausdorffDistancePointSetFilter::POINT_TO_CELL },
      };

    o = PyvtkHausdorffDistancePointSetFilter_DistanceMethod_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHausdorffDistancePointSetFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHausdorffDistancePointSetFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHausdorffDistancePointSetFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

