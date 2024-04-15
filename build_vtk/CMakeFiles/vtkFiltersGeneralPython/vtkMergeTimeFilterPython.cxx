// python wrapper for vtkMergeTimeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMergeTimeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMergeTimeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkMergeTimeFilter_ClassNew(); }


static PyObject *
PyvtkMergeTimeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMergeTimeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMergeTimeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMergeTimeFilter *tempr = vtkMergeTimeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMergeTimeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMergeTimeFilter::NewInstance());

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
PyvtkMergeTimeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMergeTimeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMergeTimeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkMergeTimeFilter::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkMergeTimeFilter::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkMergeTimeFilter::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkMergeTimeFilter::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_SetUseRelativeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRelativeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRelativeTolerance(temp0);
    }
    else
    {
      op->vtkMergeTimeFilter::SetUseRelativeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetUseRelativeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRelativeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRelativeTolerance() :
      op->vtkMergeTimeFilter::GetUseRelativeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_UseRelativeToleranceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRelativeToleranceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRelativeToleranceOn();
    }
    else
    {
      op->vtkMergeTimeFilter::UseRelativeToleranceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_UseRelativeToleranceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRelativeToleranceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRelativeToleranceOff();
    }
    else
    {
      op->vtkMergeTimeFilter::UseRelativeToleranceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_SetUseIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseIntersection(temp0);
    }
    else
    {
      op->vtkMergeTimeFilter::SetUseIntersection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_GetUseIntersection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseIntersection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseIntersection() :
      op->vtkMergeTimeFilter::GetUseIntersection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_UseIntersectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIntersectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIntersectionOn();
    }
    else
    {
      op->vtkMergeTimeFilter::UseIntersectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMergeTimeFilter_UseIntersectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseIntersectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMergeTimeFilter *op = static_cast<vtkMergeTimeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseIntersectionOff();
    }
    else
    {
      op->vtkMergeTimeFilter::UseIntersectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMergeTimeFilter_Methods[] = {
  {"IsTypeOf", PyvtkMergeTimeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMergeTimeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMergeTimeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMergeTimeFilter\nC++: static vtkMergeTimeFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMergeTimeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMergeTimeFilter\nC++: vtkMergeTimeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMergeTimeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMergeTimeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTolerance", PyvtkMergeTimeFilter_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet/Get the tolerance for comparing time step values to see if\nthey are close enough to be considered identical. Default is\n0.00001\n"},
  {"GetToleranceMinValue", PyvtkMergeTimeFilter_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkMergeTimeFilter_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkMergeTimeFilter_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetUseRelativeTolerance", PyvtkMergeTimeFilter_SetUseRelativeTolerance, METH_VARARGS,
   "SetUseRelativeTolerance(self, _arg:bool) -> None\nC++: virtual void SetUseRelativeTolerance(bool _arg)\n\nSet/Get if the tolerance is relative to previous input or\nabsolute.\n\nDefault is false (absolute tolerance).\n"},
  {"GetUseRelativeTolerance", PyvtkMergeTimeFilter_GetUseRelativeTolerance, METH_VARARGS,
   "GetUseRelativeTolerance(self) -> bool\nC++: virtual bool GetUseRelativeTolerance()\n\n"},
  {"UseRelativeToleranceOn", PyvtkMergeTimeFilter_UseRelativeToleranceOn, METH_VARARGS,
   "UseRelativeToleranceOn(self) -> None\nC++: virtual void UseRelativeToleranceOn()\n\n"},
  {"UseRelativeToleranceOff", PyvtkMergeTimeFilter_UseRelativeToleranceOff, METH_VARARGS,
   "UseRelativeToleranceOff(self) -> None\nC++: virtual void UseRelativeToleranceOff()\n\n"},
  {"SetUseIntersection", PyvtkMergeTimeFilter_SetUseIntersection, METH_VARARGS,
   "SetUseIntersection(self, _arg:bool) -> None\nC++: virtual void SetUseIntersection(bool _arg)\n\nSet/Get if the merge use intersection instead of union. Default\nis false (union is used).\n"},
  {"GetUseIntersection", PyvtkMergeTimeFilter_GetUseIntersection, METH_VARARGS,
   "GetUseIntersection(self) -> bool\nC++: virtual bool GetUseIntersection()\n\n"},
  {"UseIntersectionOn", PyvtkMergeTimeFilter_UseIntersectionOn, METH_VARARGS,
   "UseIntersectionOn(self) -> None\nC++: virtual void UseIntersectionOn()\n\n"},
  {"UseIntersectionOff", PyvtkMergeTimeFilter_UseIntersectionOff, METH_VARARGS,
   "UseIntersectionOff(self) -> None\nC++: virtual void UseIntersectionOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMergeTimeFilter_Doc =
  "vtkMergeTimeFilter - Create a multiblock containing one block per\ninput, with unified timestep list.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkMergeTimeFilter takes multiple temporal datasets as input and\n"
  "synchronize them.\n\n"
  "The output data is a multiblock dataset containing one block per\n"
  "input dataset. The output timesteps is the union (or the\n"
  "intersection) of each input timestep lists. Duplicates time values\n"
  "are removed, dependending on a tolerance, either absolute or\n"
  "relative.\n\n"
  "When source time is exactly 0., absolute tolerance is used even in\n"
  "relative mode.\n\n"
  "Note that the actual merge of timesteps is done during the\n"
  "RequestInformation pass. In the 'Relative' mode, inputs are processed\n"
  "in order and compararison is done with previously processed inputs.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMergeTimeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkMergeTimeFilter", // tp_name
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
  PyvtkMergeTimeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMergeTimeFilter_StaticNew()
{
  return vtkMergeTimeFilter::New();
}

PyObject *PyvtkMergeTimeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMergeTimeFilter_Type, PyvtkMergeTimeFilter_Methods,
    "vtkMergeTimeFilter",
 &PyvtkMergeTimeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMergeTimeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMergeTimeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMergeTimeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

