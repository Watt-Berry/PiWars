// python wrapper for vtkExtractHierarchicalBins
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractHierarchicalBins.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractHierarchicalBins(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractHierarchicalBins_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkExtractHierarchicalBins_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractHierarchicalBins::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractHierarchicalBins::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractHierarchicalBins *tempr = vtkExtractHierarchicalBins::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractHierarchicalBins *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractHierarchicalBins::NewInstance());

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
PyvtkExtractHierarchicalBins_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractHierarchicalBins::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractHierarchicalBins::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLevel(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkExtractHierarchicalBins::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SetBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBin(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetBin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBin() :
      op->vtkExtractHierarchicalBins::GetBin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_SetBinningFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBinningFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  vtkHierarchicalBinningFilter *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHierarchicalBinningFilter"))
  {
    if (ap.IsBound())
    {
      op->SetBinningFilter(temp0);
    }
    else
    {
      op->vtkExtractHierarchicalBins::SetBinningFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractHierarchicalBins_GetBinningFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinningFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractHierarchicalBins *op = static_cast<vtkExtractHierarchicalBins *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHierarchicalBinningFilter *tempr = (ap.IsBound() ?
      op->GetBinningFilter() :
      op->vtkExtractHierarchicalBins::GetBinningFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractHierarchicalBins_Methods[] = {
  {"IsTypeOf", PyvtkExtractHierarchicalBins_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractHierarchicalBins_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractHierarchicalBins_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractHierarchicalBins\nC++: static vtkExtractHierarchicalBins *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractHierarchicalBins_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractHierarchicalBins\nC++: vtkExtractHierarchicalBins *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractHierarchicalBins_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractHierarchicalBins_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLevel", PyvtkExtractHierarchicalBins_SetLevel, METH_VARARGS,
   "SetLevel(self, _arg:int) -> None\nC++: virtual void SetLevel(int _arg)\n\nSpecify the level to extract. If non-negative, with a negative\nbin number, then all points at this level are extracted and sent\nto the output. If negative, then the points from the specified\nbin are sent to the output. If both the level and bin number are\nnegative values, then the input is sent to the output. By default\nthe 0th level is extracted. Note that requesting a level greater\nthan the associated vtkHierarchicalBinningFilter will clamp the\nlevel to the maximum possible level of the binning filter.\n"},
  {"GetLevel", PyvtkExtractHierarchicalBins_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: virtual int GetLevel()\n\n"},
  {"SetBin", PyvtkExtractHierarchicalBins_SetBin, METH_VARARGS,
   "SetBin(self, _arg:int) -> None\nC++: virtual void SetBin(int _arg)\n\nSpecify the bin number to extract. If a non-negative value, then\nthe points from the bin number specified are extracted. If\nnegative, then entire levels of points are extacted (assuming the\nLevel is non-negative). Note that the bin tree is flattened, a\nparticular bin number may refer to a bin on any level. Note that\nrequesting a bin greater than the associated\nvtkHierarchicalBinningFilter will clamp the bin to the maximum\npossible bin of the binning filter.\n"},
  {"GetBin", PyvtkExtractHierarchicalBins_GetBin, METH_VARARGS,
   "GetBin(self) -> int\nC++: virtual int GetBin()\n\n"},
  {"SetBinningFilter", PyvtkExtractHierarchicalBins_SetBinningFilter, METH_VARARGS,
   "SetBinningFilter(self, __a:vtkHierarchicalBinningFilter) -> None\nC++: virtual void SetBinningFilter(vtkHierarchicalBinningFilter *)\n\nSpecify the vtkHierarchicalBinningFilter to query for relevant\ninformation. Make sure that this filter has executed prior to the\nexecution of this filter. (This is generally a safe bet if\nconnected in a pipeline.)\n"},
  {"GetBinningFilter", PyvtkExtractHierarchicalBins_GetBinningFilter, METH_VARARGS,
   "GetBinningFilter(self) -> vtkHierarchicalBinningFilter\nC++: virtual vtkHierarchicalBinningFilter *GetBinningFilter()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractHierarchicalBins_Doc =
  "vtkExtractHierarchicalBins - manipulate the output of\nvtkHierarchicalBinningFilter\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkExtractHierarchicalBins enables users to extract data from the\n"
  "output of vtkHierarchicalBinningFilter. Points at a particular level,\n"
  "or at a level and bin number, can be filtered to the output. To\n"
  "perform these operations, the output must contain points sorted into\n"
  "bins (the vtkPoints), with offsets pointing to the beginning of each\n"
  "bin (a vtkFieldData array named \"BinOffsets\").\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkFiltersPointsFilter vtkRadiusOutlierRemoval\n"
  "vtkStatisticalOutlierRemoval vtkThresholdPoints vtkImplicitFunction\n"
  "vtkExtractGeometry vtkFitImplicitFunction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractHierarchicalBins_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkExtractHierarchicalBins", // tp_name
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
  PyvtkExtractHierarchicalBins_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractHierarchicalBins_StaticNew()
{
  return vtkExtractHierarchicalBins::New();
}

PyObject *PyvtkExtractHierarchicalBins_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractHierarchicalBins_Type, PyvtkExtractHierarchicalBins_Methods,
    "vtkExtractHierarchicalBins",
 &PyvtkExtractHierarchicalBins_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractHierarchicalBins(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractHierarchicalBins_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractHierarchicalBins", o) != 0)
  {
    Py_DECREF(o);
  }

}

