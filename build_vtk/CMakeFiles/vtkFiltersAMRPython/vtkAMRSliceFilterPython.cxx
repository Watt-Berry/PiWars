// python wrapper for vtkAMRSliceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRSliceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRSliceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRSliceFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRSliceFilter_NormalTag_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersAMR.vtkAMRSliceFilter.NormalTag", // tp_name
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
PyObject *PyvtkAMRSliceFilter_NormalTag_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAMRSliceFilter_NormalTag_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAMRSliceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRSliceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRSliceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRSliceFilter *tempr = vtkAMRSliceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRSliceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRSliceFilter::NewInstance());

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
PyvtkAMRSliceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRSliceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRSliceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetOffsetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOffsetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOffsetFromOrigin(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetOffsetFromOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetOffsetFromOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetFromOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOffsetFromOrigin() :
      op->vtkAMRSliceFilter::GetOffsetFromOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxResolution(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetMaxResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetMaxResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxResolution() :
      op->vtkAMRSliceFilter::GetMaxResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNormal(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkAMRSliceFilter::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  vtkMultiProcessController *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMultiProcessController"))
  {
    if (ap.IsBound())
    {
      op->SetController(temp0);
    }
    else
    {
      op->vtkAMRSliceFilter::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkAMRSliceFilter::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRSliceFilter_FillOutputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillOutputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRSliceFilter *op = static_cast<vtkAMRSliceFilter *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillOutputPortInformation(temp0, temp1) :
      op->vtkAMRSliceFilter::FillOutputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRSliceFilter_Methods[] = {
  {"IsTypeOf", PyvtkAMRSliceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRSliceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRSliceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRSliceFilter\nC++: static vtkAMRSliceFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRSliceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRSliceFilter\nC++: vtkAMRSliceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRSliceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRSliceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOffsetFromOrigin", PyvtkAMRSliceFilter_SetOffsetFromOrigin, METH_VARARGS,
   "SetOffsetFromOrigin(self, _arg:float) -> None\nC++: virtual void SetOffsetFromOrigin(double _arg)\n\nSet/Get the offset-from-origin of the slicing plane.\n"},
  {"GetOffsetFromOrigin", PyvtkAMRSliceFilter_GetOffsetFromOrigin, METH_VARARGS,
   "GetOffsetFromOrigin(self) -> float\nC++: virtual double GetOffsetFromOrigin()\n\n"},
  {"SetMaxResolution", PyvtkAMRSliceFilter_SetMaxResolution, METH_VARARGS,
   "SetMaxResolution(self, _arg:int) -> None\nC++: virtual void SetMaxResolution(unsigned int _arg)\n\nSet/Get the maximum resolution used in this instance.\n"},
  {"GetMaxResolution", PyvtkAMRSliceFilter_GetMaxResolution, METH_VARARGS,
   "GetMaxResolution(self) -> int\nC++: virtual unsigned int GetMaxResolution()\n\n"},
  {"SetNormal", PyvtkAMRSliceFilter_SetNormal, METH_VARARGS,
   "SetNormal(self, _arg:int) -> None\nC++: virtual void SetNormal(int _arg)\n\nSet/Get the Axis normal. The acceptable values are defined in the\nNormalTag enum.\n"},
  {"GetNormal", PyvtkAMRSliceFilter_GetNormal, METH_VARARGS,
   "GetNormal(self) -> int\nC++: virtual int GetNormal()\n\n"},
  {"SetController", PyvtkAMRSliceFilter_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: virtual void SetController(vtkMultiProcessController *)\n\nSet/Get a multiprocess controller for parallel processing. By\ndefault this parameter is set to nullptr by the constructor.\n"},
  {"GetController", PyvtkAMRSliceFilter_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"FillInputPortInformation", PyvtkAMRSliceFilter_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"FillOutputPortInformation", PyvtkAMRSliceFilter_FillOutputPortInformation, METH_VARARGS,
   "FillOutputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillOutputPortInformation(int port, vtkInformation *info)\n     override;\n\nSee algorithm for more info.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRSliceFilter_Doc =
  "vtkAMRSliceFilter -  A concrete instance of\nvtkOverlappingAMRAlgorithm which implements\n functionality for extracting slices from AMR data.\n\n"
  "Superclass: vtkOverlappingAMRAlgorithm\n\n"
  "Unlike the conventional\n"
  " slice filter, the output of this filter is a 2-D AMR dataset itself.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRSliceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersAMR.vtkAMRSliceFilter", // tp_name
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
  PyvtkAMRSliceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRSliceFilter_StaticNew()
{
  return vtkAMRSliceFilter::New();
}

PyObject *PyvtkAMRSliceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRSliceFilter_Type, PyvtkAMRSliceFilter_Methods,
    "vtkAMRSliceFilter",
 &PyvtkAMRSliceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOverlappingAMRAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAMRSliceFilter_NormalTag_Type);
  PyVTKEnum_Add(&PyvtkAMRSliceFilter_NormalTag_Type, "vtkAMRSliceFilter.NormalTag");

  o = (PyObject *)&PyvtkAMRSliceFilter_NormalTag_Type;
  if (PyDict_SetItemString(d, "NormalTag", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkAMRSliceFilter::NormalTag cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "X_NORMAL", vtkAMRSliceFilter::X_NORMAL },
        { "Y_NORMAL", vtkAMRSliceFilter::Y_NORMAL },
        { "Z_NORMAL", vtkAMRSliceFilter::Z_NORMAL },
      };

    o = PyvtkAMRSliceFilter_NormalTag_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRSliceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRSliceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRSliceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

