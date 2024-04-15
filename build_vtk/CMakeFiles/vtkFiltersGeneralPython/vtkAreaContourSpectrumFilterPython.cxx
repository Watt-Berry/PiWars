// python wrapper for vtkAreaContourSpectrumFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAreaContourSpectrumFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAreaContourSpectrumFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAreaContourSpectrumFilter_ClassNew(); }


static PyObject *
PyvtkAreaContourSpectrumFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAreaContourSpectrumFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAreaContourSpectrumFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAreaContourSpectrumFilter *tempr = vtkAreaContourSpectrumFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaContourSpectrumFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAreaContourSpectrumFilter::NewInstance());

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
PyvtkAreaContourSpectrumFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAreaContourSpectrumFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAreaContourSpectrumFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArcId(temp0);
    }
    else
    {
      op->vtkAreaContourSpectrumFilter::SetArcId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetArcId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArcId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetArcId() :
      op->vtkAreaContourSpectrumFilter::GetArcId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfSamples(temp0);
    }
    else
    {
      op->vtkAreaContourSpectrumFilter::SetNumberOfSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkAreaContourSpectrumFilter::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_SetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldId(temp0);
    }
    else
    {
      op->vtkAreaContourSpectrumFilter::SetFieldId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetFieldId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFieldId() :
      op->vtkAreaContourSpectrumFilter::GetFieldId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAreaContourSpectrumFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAreaContourSpectrumFilter *op = static_cast<vtkAreaContourSpectrumFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTable *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkAreaContourSpectrumFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAreaContourSpectrumFilter_Methods[] = {
  {"IsTypeOf", PyvtkAreaContourSpectrumFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAreaContourSpectrumFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAreaContourSpectrumFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAreaContourSpectrumFilter\nC++: static vtkAreaContourSpectrumFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAreaContourSpectrumFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAreaContourSpectrumFilter\nC++: vtkAreaContourSpectrumFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAreaContourSpectrumFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAreaContourSpectrumFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetArcId", PyvtkAreaContourSpectrumFilter_SetArcId, METH_VARARGS,
   "SetArcId(self, _arg:int) -> None\nC++: virtual void SetArcId(vtkIdType _arg)\n\nSet the arc Id for which the contour signature has to be\ncomputed. Default value: 0\n"},
  {"GetArcId", PyvtkAreaContourSpectrumFilter_GetArcId, METH_VARARGS,
   "GetArcId(self) -> int\nC++: virtual vtkIdType GetArcId()\n\n"},
  {"SetNumberOfSamples", PyvtkAreaContourSpectrumFilter_SetNumberOfSamples, METH_VARARGS,
   "SetNumberOfSamples(self, _arg:int) -> None\nC++: virtual void SetNumberOfSamples(int _arg)\n\nSet the number of samples in the output signature Default value:\n100\n"},
  {"GetNumberOfSamples", PyvtkAreaContourSpectrumFilter_GetNumberOfSamples, METH_VARARGS,
   "GetNumberOfSamples(self) -> int\nC++: virtual int GetNumberOfSamples()\n\n"},
  {"SetFieldId", PyvtkAreaContourSpectrumFilter_SetFieldId, METH_VARARGS,
   "SetFieldId(self, _arg:int) -> None\nC++: virtual void SetFieldId(vtkIdType _arg)\n\nSet the scalar field Id Default value: 0\n"},
  {"GetFieldId", PyvtkAreaContourSpectrumFilter_GetFieldId, METH_VARARGS,
   "GetFieldId(self) -> int\nC++: virtual vtkIdType GetFieldId()\n\n"},
  {"GetOutput", PyvtkAreaContourSpectrumFilter_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkTable\nC++: vtkTable *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAreaContourSpectrumFilter_Doc =
  "vtkAreaContourSpectrumFilter - compute an approximation of the area\ncontour signature (evolution of the area of the input surface along\nan arc of the Reeb graph).\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "The filter takes a vtkPolyData as an input (port 0), along with a\n"
  "vtkReebGraph (port 1). The Reeb graph arc to consider can be\n"
  "specified with SetArcId() (default: 0). The number of (evenly\n"
  "distributed) samples of the signature can be defined with\n"
  "SetNumberOfSamples() (default value: 100). The filter will first try\n"
  "to pull as a scalar field the vtkDataArray with Id 'FieldId' of the\n"
  "vtkPolyData, see SetFieldId (default: 0). The filter will abort if\n"
  "this field does not exist.\n\n"
  "The filter outputs a vtkTable with the area contour signature\n"
  "approximation, each sample being evenly distributed in the function\n"
  "span of the arc.\n\n"
  "This filter is a typical example for designing your own contour\n"
  "signature filter (with customized metrics). It also shows typical\n"
  "vtkReebGraph traversals.\n\n"
  "Reference: C. Bajaj, V. Pascucci, D. Schikore, \"The contour\n"
  "spectrum\", IEEE Visualization, 167-174, 1997.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAreaContourSpectrumFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAreaContourSpectrumFilter", // tp_name
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
  PyvtkAreaContourSpectrumFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAreaContourSpectrumFilter_StaticNew()
{
  return vtkAreaContourSpectrumFilter::New();
}

PyObject *PyvtkAreaContourSpectrumFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAreaContourSpectrumFilter_Type, PyvtkAreaContourSpectrumFilter_Methods,
    "vtkAreaContourSpectrumFilter",
 &PyvtkAreaContourSpectrumFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAreaContourSpectrumFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAreaContourSpectrumFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAreaContourSpectrumFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

