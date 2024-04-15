// python wrapper for vtkSurfaceReconstructionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceReconstructionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceReconstructionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSurfaceReconstructionFilter_ClassNew(); }


static PyObject *
PyvtkSurfaceReconstructionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceReconstructionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceReconstructionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceReconstructionFilter *tempr = vtkSurfaceReconstructionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceReconstructionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceReconstructionFilter::NewInstance());

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
PyvtkSurfaceReconstructionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceReconstructionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceReconstructionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_GetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNeighborhoodSize() :
      op->vtkSurfaceReconstructionFilter::GetNeighborhoodSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_SetNeighborhoodSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNeighborhoodSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNeighborhoodSize(temp0);
    }
    else
    {
      op->vtkSurfaceReconstructionFilter::SetNeighborhoodSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_GetSampleSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSampleSpacing() :
      op->vtkSurfaceReconstructionFilter::GetSampleSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceReconstructionFilter_SetSampleSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceReconstructionFilter *op = static_cast<vtkSurfaceReconstructionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSampleSpacing(temp0);
    }
    else
    {
      op->vtkSurfaceReconstructionFilter::SetSampleSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceReconstructionFilter_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceReconstructionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceReconstructionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceReconstructionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceReconstructionFilter\nC++: static vtkSurfaceReconstructionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceReconstructionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceReconstructionFilter\nC++: vtkSurfaceReconstructionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceReconstructionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceReconstructionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNeighborhoodSize", PyvtkSurfaceReconstructionFilter_GetNeighborhoodSize, METH_VARARGS,
   "GetNeighborhoodSize(self) -> int\nC++: virtual int GetNeighborhoodSize()\n\nSpecify the number of neighbors each point has, used for\nestimating the local surface orientation.  The default value of\n20 should be OK for most applications, higher values can be\nspecified if the spread of points is uneven. Values as low as 10\nmay yield adequate results for some surfaces. Higher values cause\nthe algorithm to take longer. Higher values will cause errors on\nsharp boundaries.\n"},
  {"SetNeighborhoodSize", PyvtkSurfaceReconstructionFilter_SetNeighborhoodSize, METH_VARARGS,
   "SetNeighborhoodSize(self, _arg:int) -> None\nC++: virtual void SetNeighborhoodSize(int _arg)\n\n"},
  {"GetSampleSpacing", PyvtkSurfaceReconstructionFilter_GetSampleSpacing, METH_VARARGS,
   "GetSampleSpacing(self) -> float\nC++: virtual double GetSampleSpacing()\n\nSpecify the spacing of the 3D sampling grid. If not set, a\nreasonable guess will be made.\n"},
  {"SetSampleSpacing", PyvtkSurfaceReconstructionFilter_SetSampleSpacing, METH_VARARGS,
   "SetSampleSpacing(self, _arg:float) -> None\nC++: virtual void SetSampleSpacing(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSurfaceReconstructionFilter_Doc =
  "vtkSurfaceReconstructionFilter - reconstructs a surface from\nunorganized points\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkSurfaceReconstructionFilter takes a list of points assumed to lie\n"
  "on the surface of a solid 3D object. A signed measure of the distance\n"
  "to the surface is computed and sampled on a regular grid. The grid\n"
  "can then be contoured at zero to extract the surface. The default\n"
  "values for neighborhood size and sample spacing should give\n"
  "reasonable results for most uses but can be set if desired. This\n"
  "procedure is based on the PhD work of Hugues Hoppe:\n"
  "http://www.research.microsoft.com/~hoppe\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceReconstructionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingHybrid.vtkSurfaceReconstructionFilter", // tp_name
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
  PyvtkSurfaceReconstructionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceReconstructionFilter_StaticNew()
{
  return vtkSurfaceReconstructionFilter::New();
}

PyObject *PyvtkSurfaceReconstructionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceReconstructionFilter_Type, PyvtkSurfaceReconstructionFilter_Methods,
    "vtkSurfaceReconstructionFilter",
 &PyvtkSurfaceReconstructionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceReconstructionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceReconstructionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceReconstructionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

