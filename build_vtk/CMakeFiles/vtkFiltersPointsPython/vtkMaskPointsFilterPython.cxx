// python wrapper for vtkMaskPointsFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMaskPointsFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMaskPointsFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkMaskPointsFilter_ClassNew(); }

#ifndef DECLARED_PyvtkPointCloudFilter_ClassNew
extern "C" { PyObject *PyvtkPointCloudFilter_ClassNew(); }
#define DECLARED_PyvtkPointCloudFilter_ClassNew
#endif

static PyObject *
PyvtkMaskPointsFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMaskPointsFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMaskPointsFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMaskPointsFilter *tempr = vtkMaskPointsFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMaskPointsFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMaskPointsFilter::NewInstance());

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
PyvtkMaskPointsFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMaskPointsFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMaskPointsFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_SetMaskData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetMaskData(temp0);
    }
    else
    {
      op->vtkMaskPointsFilter::SetMaskData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_GetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetMask() :
      op->vtkMaskPointsFilter::GetMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_SetMaskConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetMaskConnection(temp0);
    }
    else
    {
      op->vtkMaskPointsFilter::SetMaskConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_SetEmptyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEmptyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEmptyValue(temp0);
    }
    else
    {
      op->vtkMaskPointsFilter::SetEmptyValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMaskPointsFilter_GetEmptyValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmptyValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMaskPointsFilter *op = static_cast<vtkMaskPointsFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetEmptyValue() :
      op->vtkMaskPointsFilter::GetEmptyValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMaskPointsFilter_Methods[] = {
  {"IsTypeOf", PyvtkMaskPointsFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMaskPointsFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMaskPointsFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMaskPointsFilter\nC++: static vtkMaskPointsFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMaskPointsFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMaskPointsFilter\nC++: vtkMaskPointsFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMaskPointsFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMaskPointsFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaskData", PyvtkMaskPointsFilter_SetMaskData, METH_VARARGS,
   "SetMaskData(self, source:vtkDataObject) -> None\nC++: void SetMaskData(vtkDataObject *source)\n\nSpecify the masking image. It must be of type vtkImageData.\n"},
  {"GetMask", PyvtkMaskPointsFilter_GetMask, METH_VARARGS,
   "GetMask(self) -> vtkDataObject\nC++: vtkDataObject *GetMask()\n\n"},
  {"SetMaskConnection", PyvtkMaskPointsFilter_SetMaskConnection, METH_VARARGS,
   "SetMaskConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetMaskConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the masking image. It is vtkImageData output from an\nalgorithm.\n"},
  {"SetEmptyValue", PyvtkMaskPointsFilter_SetEmptyValue, METH_VARARGS,
   "SetEmptyValue(self, _arg:int) -> None\nC++: virtual void SetEmptyValue(unsigned char _arg)\n\nSet / get the values indicating whether a voxel is empty. By\ndefault, an empty voxel is marked with a zero value. Any point\ninside a voxel marked empty is not selected for output. All other\nvoxels with a value that is not equal to the empty value are\nselected for output.\n"},
  {"GetEmptyValue", PyvtkMaskPointsFilter_GetEmptyValue, METH_VARARGS,
   "GetEmptyValue(self) -> int\nC++: virtual unsigned char GetEmptyValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMaskPointsFilter_Doc =
  "vtkMaskPointsFilter - extract points within an image/volume mask\n\n"
  "Superclass: vtkPointCloudFilter\n\n"
  "vtkMaskPointsFilter extracts points that are inside an image mask.\n"
  "The image mask is a second input to the filter. Points that are\n"
  "inside a voxel marked \"inside\" are copied to the output. The image\n"
  "mask can be generated by vtkPointOccupancyFilter, with optional image\n"
  "processing steps performed on the mask. Thus vtkPointOccupancyFilter\n"
  "and vtkMaskPointsFilter are generally used together, with a pipeline\n"
  "of image processing algorithms in between the two filters.\n\n"
  "Note also that this filter is a subclass of vtkPointCloudFilter which\n"
  "has the ability to produce an output mask indicating which points\n"
  "were selected for output. It also has an optional second output\n"
  "containing the points that were masked out (i.e., outliers) during\n"
  "processing.\n\n"
  "Finally, the mask value indicating non-selection of points (i.e., the\n"
  "empty value) may be specified. The second input, masking image, is\n"
  "typically of type unsigned char so the empty value is of this type as\n"
  "well.\n\n"
  "@warning\n"
  "During processing, points not within the masking image/volume are\n"
  "considered outside and never extracted.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointOccupancyFilter vtkPointCloudFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMaskPointsFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkMaskPointsFilter", // tp_name
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
  PyvtkMaskPointsFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMaskPointsFilter_StaticNew()
{
  return vtkMaskPointsFilter::New();
}

PyObject *PyvtkMaskPointsFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMaskPointsFilter_Type, PyvtkMaskPointsFilter_Methods,
    "vtkMaskPointsFilter",
 &PyvtkMaskPointsFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointCloudFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMaskPointsFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMaskPointsFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMaskPointsFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

