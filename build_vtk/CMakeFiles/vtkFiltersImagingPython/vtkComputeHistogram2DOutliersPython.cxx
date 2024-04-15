// python wrapper for vtkComputeHistogram2DOutliers
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkComputeHistogram2DOutliers.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkComputeHistogram2DOutliers(PyObject *dict); }
extern "C" { PyObject *PyvtkComputeHistogram2DOutliers_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkComputeHistogram2DOutliers_InputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkComputeHistogram2DOutliers.InputPorts", // tp_name
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
PyObject *PyvtkComputeHistogram2DOutliers_InputPorts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkComputeHistogram2DOutliers_InputPorts_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkComputeHistogram2DOutliers_OutputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkComputeHistogram2DOutliers.OutputPorts", // tp_name
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
PyObject *PyvtkComputeHistogram2DOutliers_OutputPorts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkComputeHistogram2DOutliers_OutputPorts_Type, static_cast<int>(val));
}


static PyObject *
PyvtkComputeHistogram2DOutliers_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkComputeHistogram2DOutliers::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkComputeHistogram2DOutliers::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkComputeHistogram2DOutliers *tempr = vtkComputeHistogram2DOutliers::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkComputeHistogram2DOutliers *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkComputeHistogram2DOutliers::NewInstance());

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
PyvtkComputeHistogram2DOutliers_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkComputeHistogram2DOutliers::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkComputeHistogram2DOutliers::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreferredNumberOfOutliers(temp0);
    }
    else
    {
      op->vtkComputeHistogram2DOutliers::SetPreferredNumberOfOutliers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreferredNumberOfOutliers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreferredNumberOfOutliers() :
      op->vtkComputeHistogram2DOutliers::GetPreferredNumberOfOutliers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_GetOutputTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutputTable() :
      op->vtkComputeHistogram2DOutliers::GetOutputTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputTableConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTableConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputTableConnection(temp0);
    }
    else
    {
      op->vtkComputeHistogram2DOutliers::SetInputTableConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramImageDataConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputHistogramImageDataConnection(temp0);
    }
    else
    {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramImageDataConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputHistogramMultiBlockConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkComputeHistogram2DOutliers *op = static_cast<vtkComputeHistogram2DOutliers *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputHistogramMultiBlockConnection(temp0);
    }
    else
    {
      op->vtkComputeHistogram2DOutliers::SetInputHistogramMultiBlockConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkComputeHistogram2DOutliers_Methods[] = {
  {"IsTypeOf", PyvtkComputeHistogram2DOutliers_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkComputeHistogram2DOutliers_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkComputeHistogram2DOutliers_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkComputeHistogram2DOutliers\nC++: static vtkComputeHistogram2DOutliers *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkComputeHistogram2DOutliers_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkComputeHistogram2DOutliers\nC++: vtkComputeHistogram2DOutliers *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkComputeHistogram2DOutliers_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkComputeHistogram2DOutliers_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_SetPreferredNumberOfOutliers, METH_VARARGS,
   "SetPreferredNumberOfOutliers(self, _arg:int) -> None\nC++: virtual void SetPreferredNumberOfOutliers(int _arg)\n\n"},
  {"GetPreferredNumberOfOutliers", PyvtkComputeHistogram2DOutliers_GetPreferredNumberOfOutliers, METH_VARARGS,
   "GetPreferredNumberOfOutliers(self) -> int\nC++: virtual int GetPreferredNumberOfOutliers()\n\n"},
  {"GetOutputTable", PyvtkComputeHistogram2DOutliers_GetOutputTable, METH_VARARGS,
   "GetOutputTable(self) -> vtkTable\nC++: vtkTable *GetOutputTable()\n\n"},
  {"SetInputTableConnection", PyvtkComputeHistogram2DOutliers_SetInputTableConnection, METH_VARARGS,
   "SetInputTableConnection(self, cxn:vtkAlgorithmOutput) -> None\nC++: void SetInputTableConnection(vtkAlgorithmOutput *cxn)\n\nSet the source table data, from which data will be filtered.\n"},
  {"SetInputHistogramImageDataConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramImageDataConnection, METH_VARARGS,
   "SetInputHistogramImageDataConnection(self, cxn:vtkAlgorithmOutput)\n     -> None\nC++: void SetInputHistogramImageDataConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a (repeatable) vtkImageData\n"},
  {"SetInputHistogramMultiBlockConnection", PyvtkComputeHistogram2DOutliers_SetInputHistogramMultiBlockConnection, METH_VARARGS,
   "SetInputHistogramMultiBlockConnection(self,\n    cxn:vtkAlgorithmOutput) -> None\nC++: void SetInputHistogramMultiBlockConnection(\n    vtkAlgorithmOutput *cxn)\n\nSet the input histogram data as a vtkMultiBlockData set\ncontaining multiple vtkImageData objects.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkComputeHistogram2DOutliers_Doc =
  "vtkComputeHistogram2DOutliers - compute the outliers in a set\n of 2D histograms and extract the corresponding row data.\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "This class takes a table and one or more vtkImageData histograms as\n"
  "input\n"
  " and computes the outliers in that data.  In general it does so by\n"
  " identifying histogram bins that are removed by a median (salt and\n"
  "pepper)\n"
  " filter and below a threshold.  This threshold is automatically\n"
  "identified\n"
  " to retrieve a number of outliers close to a user-determined value. \n"
  "This\n"
  " value is set by calling SetPreferredNumberOfOutliers(int).\n\n\n"
  " The image data input can come either as a multiple vtkImageData via\n"
  "the\n"
  " repeatable INPUT_HISTOGRAM_IMAGE_DATA port, or as a single\n"
  " vtkMultiBlockDataSet containing vtkImageData objects as blocks.  One\n"
  " or the other must be set, not both (or neither).\n\n\n"
  " The output can be retrieved as a set of row ids in a vtkSelection or\n"
  " as a vtkTable containing the actual outlier row data.\n\n"
  "@sa\n"
  " vtkExtractHistogram2D vtkPComputeHistogram2DOutliers\n\n"
  "@par Thanks:\n"
  " Developed by David Feng at Sandia National Laboratories\n"
  "----------------------------------------------------------------------\n"
  "    --------\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkComputeHistogram2DOutliers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersImaging.vtkComputeHistogram2DOutliers", // tp_name
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
  PyvtkComputeHistogram2DOutliers_Doc, // tp_doc
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

static vtkObjectBase *PyvtkComputeHistogram2DOutliers_StaticNew()
{
  return vtkComputeHistogram2DOutliers::New();
}

PyObject *PyvtkComputeHistogram2DOutliers_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkComputeHistogram2DOutliers_Type, PyvtkComputeHistogram2DOutliers_Methods,
    "vtkComputeHistogram2DOutliers",
 &PyvtkComputeHistogram2DOutliers_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkComputeHistogram2DOutliers_InputPorts_Type);
  PyVTKEnum_Add(&PyvtkComputeHistogram2DOutliers_InputPorts_Type, "vtkComputeHistogram2DOutliers.InputPorts");

  o = (PyObject *)&PyvtkComputeHistogram2DOutliers_InputPorts_Type;
  if (PyDict_SetItemString(d, "InputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkComputeHistogram2DOutliers_OutputPorts_Type);
  PyVTKEnum_Add(&PyvtkComputeHistogram2DOutliers_OutputPorts_Type, "vtkComputeHistogram2DOutliers.OutputPorts");

  o = (PyObject *)&PyvtkComputeHistogram2DOutliers_OutputPorts_Type;
  if (PyDict_SetItemString(d, "OutputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkComputeHistogram2DOutliers::InputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INPUT_TABLE_DATA", vtkComputeHistogram2DOutliers::INPUT_TABLE_DATA },
        { "INPUT_HISTOGRAMS_IMAGE_DATA", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_IMAGE_DATA },
        { "INPUT_HISTOGRAMS_MULTIBLOCK", vtkComputeHistogram2DOutliers::INPUT_HISTOGRAMS_MULTIBLOCK },
      };

    o = PyvtkComputeHistogram2DOutliers_InputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkComputeHistogram2DOutliers::OutputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "OUTPUT_SELECTED_ROWS", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_ROWS },
        { "OUTPUT_SELECTED_TABLE_DATA", vtkComputeHistogram2DOutliers::OUTPUT_SELECTED_TABLE_DATA },
      };

    o = PyvtkComputeHistogram2DOutliers_OutputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkComputeHistogram2DOutliers(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkComputeHistogram2DOutliers_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkComputeHistogram2DOutliers", o) != 0)
  {
    Py_DECREF(o);
  }

}

