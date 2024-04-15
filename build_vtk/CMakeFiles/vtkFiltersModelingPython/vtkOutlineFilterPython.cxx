// python wrapper for vtkOutlineFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOutlineFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOutlineFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkOutlineFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutlineFilter_CompositeOutlineStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkOutlineFilter.CompositeOutlineStyle", // tp_name
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
PyObject *PyvtkOutlineFilter_CompositeOutlineStyle_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOutlineFilter_CompositeOutlineStyle_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOutlineFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOutlineFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOutlineFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOutlineFilter *tempr = vtkOutlineFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOutlineFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOutlineFilter::NewInstance());

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
PyvtkOutlineFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOutlineFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOutlineFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkOutlineFilter::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkOutlineFilter::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkOutlineFilter::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkOutlineFilter::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetCompositeStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStyle(temp0);
    }
    else
    {
      op->vtkOutlineFilter::SetCompositeStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetCompositeStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeStyle() :
      op->vtkOutlineFilter::GetCompositeStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetCompositeStyleToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStyleToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStyleToRoot();
    }
    else
    {
      op->vtkOutlineFilter::SetCompositeStyleToRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetCompositeStyleToLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStyleToLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStyleToLeafs();
    }
    else
    {
      op->vtkOutlineFilter::SetCompositeStyleToLeafs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetCompositeStyleToRootAndLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStyleToRootAndLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStyleToRootAndLeafs();
    }
    else
    {
      op->vtkOutlineFilter::SetCompositeStyleToRootAndLeafs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetCompositeStyleToSpecifiedIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeStyleToSpecifiedIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeStyleToSpecifiedIndex();
    }
    else
    {
      op->vtkOutlineFilter::SetCompositeStyleToSpecifiedIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_AddIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddIndex(temp0);
    }
    else
    {
      op->vtkOutlineFilter::AddIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_RemoveIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveIndex(temp0);
    }
    else
    {
      op->vtkOutlineFilter::RemoveIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_RemoveAllIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIndices();
    }
    else
    {
      op->vtkOutlineFilter::RemoveAllIndices();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

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
      op->vtkOutlineFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOutlineFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOutlineFilter *op = static_cast<vtkOutlineFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkOutlineFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOutlineFilter_Methods[] = {
  {"IsTypeOf", PyvtkOutlineFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOutlineFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOutlineFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOutlineFilter\nC++: static vtkOutlineFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOutlineFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOutlineFilter\nC++: vtkOutlineFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOutlineFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOutlineFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGenerateFaces", PyvtkOutlineFilter_SetGenerateFaces, METH_VARARGS,
   "SetGenerateFaces(self, _arg:int) -> None\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nGenerate solid faces for the box. This is off by default.\n"},
  {"GenerateFacesOn", PyvtkOutlineFilter_GenerateFacesOn, METH_VARARGS,
   "GenerateFacesOn(self) -> None\nC++: virtual void GenerateFacesOn()\n\n"},
  {"GenerateFacesOff", PyvtkOutlineFilter_GenerateFacesOff, METH_VARARGS,
   "GenerateFacesOff(self) -> None\nC++: virtual void GenerateFacesOff()\n\n"},
  {"GetGenerateFaces", PyvtkOutlineFilter_GetGenerateFaces, METH_VARARGS,
   "GetGenerateFaces(self) -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\n"},
  {"SetCompositeStyle", PyvtkOutlineFilter_SetCompositeStyle, METH_VARARGS,
   "SetCompositeStyle(self, _arg:int) -> None\nC++: virtual void SetCompositeStyle(int _arg)\n\nSpecify a style for creating bounding boxes around input\ncomposite datasets. (If the filter input is a vtkDataSet type\nthese options have no effect.) There are four choices: 1) place a\nbounding box around the root of the vtkCompositeDataSet (i.e.,\nall of the data); 2) place separate bounding boxes around each\nvtkDataSet leaf of the composite dataset; 3) place a bounding box\naround the root and all dataset leaves; and 4) place a bounding\nbox around each (flat) index of the composite dataset. The\ndefault behavior is both root and leafs.\n"},
  {"GetCompositeStyle", PyvtkOutlineFilter_GetCompositeStyle, METH_VARARGS,
   "GetCompositeStyle(self) -> int\nC++: virtual int GetCompositeStyle()\n\n"},
  {"SetCompositeStyleToRoot", PyvtkOutlineFilter_SetCompositeStyleToRoot, METH_VARARGS,
   "SetCompositeStyleToRoot(self) -> None\nC++: void SetCompositeStyleToRoot()\n\n"},
  {"SetCompositeStyleToLeafs", PyvtkOutlineFilter_SetCompositeStyleToLeafs, METH_VARARGS,
   "SetCompositeStyleToLeafs(self) -> None\nC++: void SetCompositeStyleToLeafs()\n\n"},
  {"SetCompositeStyleToRootAndLeafs", PyvtkOutlineFilter_SetCompositeStyleToRootAndLeafs, METH_VARARGS,
   "SetCompositeStyleToRootAndLeafs(self) -> None\nC++: void SetCompositeStyleToRootAndLeafs()\n\n"},
  {"SetCompositeStyleToSpecifiedIndex", PyvtkOutlineFilter_SetCompositeStyleToSpecifiedIndex, METH_VARARGS,
   "SetCompositeStyleToSpecifiedIndex(self) -> None\nC++: void SetCompositeStyleToSpecifiedIndex()\n\n"},
  {"AddIndex", PyvtkOutlineFilter_AddIndex, METH_VARARGS,
   "AddIndex(self, index:int) -> None\nC++: void AddIndex(unsigned int index)\n\nIf the composite style is set to SpecifiedIndex, then one or more\nflat indices can be specified, and bounding boxes will be drawn\naround those pieces of the composite dataset. (Recall that the\nflat index is a non-negative integer, with root index=0,\nincreasing in perorder (depth-first) traversal order.\n"},
  {"RemoveIndex", PyvtkOutlineFilter_RemoveIndex, METH_VARARGS,
   "RemoveIndex(self, index:int) -> None\nC++: void RemoveIndex(unsigned int index)\n\n"},
  {"RemoveAllIndices", PyvtkOutlineFilter_RemoveAllIndices, METH_VARARGS,
   "RemoveAllIndices(self) -> None\nC++: void RemoveAllIndices()\n\n"},
  {"SetOutputPointsPrecision", PyvtkOutlineFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output points.\nvtkAlgorithm::SINGLE_PRECISION - Output single-precision floating\npoint. vtkAlgorithm::DOUBLE_PRECISION - Output double-precision\nfloating point.\n"},
  {"GetOutputPointsPrecision", PyvtkOutlineFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOutlineFilter_Doc =
  "vtkOutlineFilter - create wireframe outline for an arbitrary data set\nor composite dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkOutlineFilter is a filter that generates a wireframe outline of\n"
  "any dataset or composite dataset. An outline consists of the twelve\n"
  "edges of the dataset bounding box. An option exists for generating\n"
  "faces instead of a wireframe outline.\n\n"
  "@warning\n"
  "When an input composite dataset is provided, options exist for\n"
  "producing different styles of outline(s). Also, if the composite\n"
  "dataset has non-geometric members (like tables) the result is\n"
  "unpredictable.\n\n"
  "@warning\n"
  "Specialized versions of the outline filter are also available. For\n"
  "example see vtkStructuredGridOutlineFilter,\n"
  "vtkRectilinearGridOutlineFilter, and vtkImageDataOutlineFilter.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOutlineFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkOutlineFilter", // tp_name
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
  PyvtkOutlineFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOutlineFilter_StaticNew()
{
  return vtkOutlineFilter::New();
}

PyObject *PyvtkOutlineFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOutlineFilter_Type, PyvtkOutlineFilter_Methods,
    "vtkOutlineFilter",
 &PyvtkOutlineFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOutlineFilter_CompositeOutlineStyle_Type);
  PyVTKEnum_Add(&PyvtkOutlineFilter_CompositeOutlineStyle_Type, "vtkOutlineFilter.CompositeOutlineStyle");

  o = (PyObject *)&PyvtkOutlineFilter_CompositeOutlineStyle_Type;
  if (PyDict_SetItemString(d, "CompositeOutlineStyle", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkOutlineFilter::CompositeOutlineStyle cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ROOT_LEVEL", vtkOutlineFilter::ROOT_LEVEL },
        { "LEAF_DATASETS", vtkOutlineFilter::LEAF_DATASETS },
        { "ROOT_AND_LEAFS", vtkOutlineFilter::ROOT_AND_LEAFS },
        { "SPECIFIED_INDEX", vtkOutlineFilter::SPECIFIED_INDEX },
      };

    o = PyvtkOutlineFilter_CompositeOutlineStyle_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOutlineFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOutlineFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOutlineFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

