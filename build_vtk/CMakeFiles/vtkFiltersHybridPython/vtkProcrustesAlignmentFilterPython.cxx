// python wrapper for vtkProcrustesAlignmentFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProcrustesAlignmentFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProcrustesAlignmentFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProcrustesAlignmentFilter_ClassNew(); }


static PyObject *
PyvtkProcrustesAlignmentFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProcrustesAlignmentFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProcrustesAlignmentFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProcrustesAlignmentFilter *tempr = vtkProcrustesAlignmentFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProcrustesAlignmentFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProcrustesAlignmentFilter::NewInstance());

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
PyvtkProcrustesAlignmentFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProcrustesAlignmentFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProcrustesAlignmentFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetLandmarkTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLandmarkTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLandmarkTransform *tempr = (ap.IsBound() ?
      op->GetLandmarkTransform() :
      op->vtkProcrustesAlignmentFilter::GetLandmarkTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetMeanPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeanPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetMeanPoints() :
      op->vtkProcrustesAlignmentFilter::GetMeanPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStartFromCentroid(temp0);
    }
    else
    {
      op->vtkProcrustesAlignmentFilter::SetStartFromCentroid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetStartFromCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartFromCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStartFromCentroid() :
      op->vtkProcrustesAlignmentFilter::GetStartFromCentroid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartFromCentroidOn();
    }
    else
    {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_StartFromCentroidOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StartFromCentroidOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StartFromCentroidOff();
    }
    else
    {
      op->vtkProcrustesAlignmentFilter::StartFromCentroidOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkProcrustesAlignmentFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProcrustesAlignmentFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProcrustesAlignmentFilter *op = static_cast<vtkProcrustesAlignmentFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkProcrustesAlignmentFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkProcrustesAlignmentFilter_Methods[] = {
  {"IsTypeOf", PyvtkProcrustesAlignmentFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProcrustesAlignmentFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProcrustesAlignmentFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProcrustesAlignmentFilter\nC++: static vtkProcrustesAlignmentFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProcrustesAlignmentFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProcrustesAlignmentFilter\nC++: vtkProcrustesAlignmentFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProcrustesAlignmentFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProcrustesAlignmentFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLandmarkTransform", PyvtkProcrustesAlignmentFilter_GetLandmarkTransform, METH_VARARGS,
   "GetLandmarkTransform(self) -> vtkLandmarkTransform\nC++: virtual vtkLandmarkTransform *GetLandmarkTransform()\n\nGet the internal landmark transform. Use it to constrain the\nnumber of degrees of freedom of the alignment (i.e. rigid body,\nsimilarity, etc.). The default is a similarity alignment.\n"},
  {"GetMeanPoints", PyvtkProcrustesAlignmentFilter_GetMeanPoints, METH_VARARGS,
   "GetMeanPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetMeanPoints()\n\nGet the estimated mean point cloud\n"},
  {"SetStartFromCentroid", PyvtkProcrustesAlignmentFilter_SetStartFromCentroid, METH_VARARGS,
   "SetStartFromCentroid(self, _arg:bool) -> None\nC++: virtual void SetStartFromCentroid(bool _arg)\n\nWhen on, the initial alignment is to the centroid of the cohort\ncurves.  When off, the alignment is to the centroid of the first\ninput.  Default is off for backward compatibility.\n"},
  {"GetStartFromCentroid", PyvtkProcrustesAlignmentFilter_GetStartFromCentroid, METH_VARARGS,
   "GetStartFromCentroid(self) -> bool\nC++: virtual bool GetStartFromCentroid()\n\n"},
  {"StartFromCentroidOn", PyvtkProcrustesAlignmentFilter_StartFromCentroidOn, METH_VARARGS,
   "StartFromCentroidOn(self) -> None\nC++: virtual void StartFromCentroidOn()\n\n"},
  {"StartFromCentroidOff", PyvtkProcrustesAlignmentFilter_StartFromCentroidOff, METH_VARARGS,
   "StartFromCentroidOff(self) -> None\nC++: virtual void StartFromCentroidOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkProcrustesAlignmentFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. If the\ndesired precision is DEFAULT_PRECISION and any of the inputs are\ndouble precision, then the mean points will be double precision.\nOtherwise, if the desired precision is DEFAULT_PRECISION and all\nthe inputs are single precision, then the mean points will be\nsingle precision.\n"},
  {"GetOutputPointsPrecision", PyvtkProcrustesAlignmentFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProcrustesAlignmentFilter_Doc =
  "vtkProcrustesAlignmentFilter - aligns a set of pointsets together\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkProcrustesAlignmentFilter is a filter that takes a set of\n"
  "pointsets (any object derived from vtkPointSet) and aligns them in a\n"
  "least-squares sense to their mutual mean. The algorithm is iterated\n"
  "until convergence, as the mean must be recomputed after each\n"
  "alignment.\n\n"
  "vtkProcrustesAlignmentFilter requires a vtkMultiBlock input\n"
  "consisting of vtkPointSets as first level children.\n\n"
  "The default (in vtkLandmarkTransform) is for a similarity alignment.\n"
  "For a rigid-body alignment (to build a 'size-and-shape' model) use:\n\n\n"
  "   GetLandmarkTransform()->SetModeToRigidBody().\n\n"
  "Affine alignments are not normally used but are left in for\n"
  "completeness:\n\n\n"
  "   GetLandmarkTransform()->SetModeToAffine().\n\n"
  "vtkProcrustesAlignmentFilter is an implementation of:\n\n\n"
  "   J.C. Gower (1975)\n"
  "   Generalized Procrustes Analysis. Psychometrika, 40:33-51.\n\n"
  "@warning\n"
  "All of the input pointsets must have the same number of points.\n\n"
  "@par Thanks: Tim Hutton and Rasmus Paulsen who developed and\n"
  "contributed this class\n\n"
  "@sa\n"
  "vtkLandmarkTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProcrustesAlignmentFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkProcrustesAlignmentFilter", // tp_name
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
  PyvtkProcrustesAlignmentFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProcrustesAlignmentFilter_StaticNew()
{
  return vtkProcrustesAlignmentFilter::New();
}

PyObject *PyvtkProcrustesAlignmentFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProcrustesAlignmentFilter_Type, PyvtkProcrustesAlignmentFilter_Methods,
    "vtkProcrustesAlignmentFilter",
 &PyvtkProcrustesAlignmentFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProcrustesAlignmentFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProcrustesAlignmentFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProcrustesAlignmentFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

