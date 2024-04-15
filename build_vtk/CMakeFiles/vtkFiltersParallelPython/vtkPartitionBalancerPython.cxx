// python wrapper for vtkPartitionBalancer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPartitionBalancer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPartitionBalancer(PyObject *dict); }
extern "C" { PyObject *PyvtkPartitionBalancer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPartitionBalancer_Mode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPartitionBalancer.Mode", // tp_name
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
PyObject *PyvtkPartitionBalancer_Mode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPartitionBalancer_Mode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPartitionBalancer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPartitionBalancer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPartitionBalancer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPartitionBalancer *tempr = vtkPartitionBalancer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPartitionBalancer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPartitionBalancer::NewInstance());

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
PyvtkPartitionBalancer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPartitionBalancer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPartitionBalancer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_SetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

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
      op->vtkPartitionBalancer::SetController(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_GetController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->GetController() :
      op->vtkPartitionBalancer::GetController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkPartitionBalancer::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_GetModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMinValue() :
      op->vtkPartitionBalancer::GetModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_GetModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeMaxValue() :
      op->vtkPartitionBalancer::GetModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkPartitionBalancer::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_SetModeToExpand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToExpand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToExpand();
    }
    else
    {
      op->vtkPartitionBalancer::SetModeToExpand();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPartitionBalancer_SetModeToSquash(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeToSquash");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPartitionBalancer *op = static_cast<vtkPartitionBalancer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetModeToSquash();
    }
    else
    {
      op->vtkPartitionBalancer::SetModeToSquash();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPartitionBalancer_Methods[] = {
  {"IsTypeOf", PyvtkPartitionBalancer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPartitionBalancer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPartitionBalancer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPartitionBalancer\nC++: static vtkPartitionBalancer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPartitionBalancer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPartitionBalancer\nC++: vtkPartitionBalancer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPartitionBalancer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPartitionBalancer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetController", PyvtkPartitionBalancer_SetController, METH_VARARGS,
   "SetController(self, __a:vtkMultiProcessController) -> None\nC++: void SetController(vtkMultiProcessController *)\n\nGet/Set the controller to use. By default\nvtkMultiProcessController::GlobalController will be used.\n"},
  {"GetController", PyvtkPartitionBalancer_GetController, METH_VARARGS,
   "GetController(self) -> vtkMultiProcessController\nC++: virtual vtkMultiProcessController *GetController()\n\n"},
  {"SetMode", PyvtkPartitionBalancer_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nSet / Get current layout of the output. Default value is\n`vtkPartitionBalancer::Squash`.\n"},
  {"GetModeMinValue", PyvtkPartitionBalancer_GetModeMinValue, METH_VARARGS,
   "GetModeMinValue(self) -> int\nC++: virtual int GetModeMinValue()\n\n"},
  {"GetModeMaxValue", PyvtkPartitionBalancer_GetModeMaxValue, METH_VARARGS,
   "GetModeMaxValue(self) -> int\nC++: virtual int GetModeMaxValue()\n\n"},
  {"GetMode", PyvtkPartitionBalancer_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\n"},
  {"SetModeToExpand", PyvtkPartitionBalancer_SetModeToExpand, METH_VARARGS,
   "SetModeToExpand(self) -> None\nC++: void SetModeToExpand()\n\nSets filter to expand mode. See example below.\n\n\n Input:\n rank 0: PDC [ PD (DS0, DS1,     DS2) ] [PD (nullptr, DS100) ]\n rank 1: PDC [ PD (DS3, nullptr, DS4) ] [PD ()               ]\n\n Output:\n rank 0: PDC [ PD (DS0,     DS1,     DS2,     nullptr, nullptr) ] [PD (DS100)   ]\n rank 1: PDC [ PD (nullptr, nullptr, nullptr, DS3,     DS4)     ] [PD (nullptr) ]\n \n"},
  {"SetModeToSquash", PyvtkPartitionBalancer_SetModeToSquash, METH_VARARGS,
   "SetModeToSquash(self) -> None\nC++: void SetModeToSquash()\n\nSets filter to squash mode. See example below.\n\n\n Input:\n rank 0: PDC [ PD (DS0, DS1,     DS2) ] [PD (nullptr, DS100) ]\n rank 1: PDC [ PD (DS3, nullptr, DS4) ] [PD ()               ]\n\n Output:\n rank 0: PDC [ PD (DS0, DS1, DS2)     ] [PD (DS100)   ]\n rank 1: PDC [ PD (DS3, DS4, nullptr) ] [PD (nullptr) ]\n \n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPartitionBalancer_Doc =
  "vtkPartitionBalancer - Balances input partitioned data sets so each\nrank has the same number of data sets.\n\n"
  "Superclass: vtkPartitionedDataSetAlgorithm\n\n"
  "This filter can be applied on `vtkPartitionedDataSet` or\n"
  "`vtkPartitionedDataSetCollection`.\n\n"
  "* Given an input `vtkPartitionedDataSet`, this filter adds `nullptr`\n"
  "  instances in the output `vtkPartitionedDataSet` following a pattern\n"
  "specified as parameter. The output partitioned data set will have the\n"
  "same number of partitions across all ranks.\n"
  "* Given an input `vtkPartitionedDataSetCollection`, this filter is\n"
  "  applied on each partitioned data set separately, and is producing a\n"
  "`vtkPartitioneDataSetCollection`.\n\n"
  "If some input partitions are `nullptr`, the output will see this\n"
  "partition squeezed out. The filter will treat the input partitioned\n"
  "data set as if this `nullptr` partition was non existent.\n\n"
  "The way the output is laid out is driven by the parameter `Mode`;\n"
  "* `Mode::Expand` generates, per partitioned data set, as many\n"
  "  partitions as there are partitions in the input across all ranks.\n"
  "  Given a valid partition (not `nullptr`) in the output partitioned\n"
  "  data set at index n in rank i, all partitioned data set of all\n"
  "  ranks but i have a `nullptr` instance as index n. Output partitions\n"
  "are sorted by rank number. i.e., for i < j, partition at rank i are\n"
  "  indexed before partitions of rank j. Here is an example. of what\n"
  "  would be generated for a given input. PDC holds for Partitioned\n"
  "  Dataset Collection, and PD holds for Partitioned Dataset.\n"
  " Input:\n"
  " rank 0: PDC [ PD (DS0, DS1,     DS2) ] [PD (nullptr, DS100) ]\n"
  " rank 1: PDC [ PD (DS3, nullptr, DS4) ] [PD ()               ]\n\n"
  " Output:\n"
  " rank 0: PDC [ PD (DS0,     DS1,     DS2,     nullptr, nullptr) ] [PD (DS100)   ]\n"
  " rank 1: PDC [ PD (nullptr, nullptr, nullptr, DS3,     DS4)     ] [PD (nullptr) ]\n"
  " \n"
  "* `Mode::Squash` generates, per input partitioned data set, the\n"
  "  minimum number of partitions possible, appending `nullptr` in ranks\n"
  "lacking partitions. Using the same example as above:\n"
  " Input:\n"
  " rank 0: PDC [ PD (DS0, DS1,     DS2) ] [PD (nullptr, DS100) ]\n"
  " rank 1: PDC [ PD (DS3, nullptr, DS4) ] [PD ()               ]\n\n"
  " Output:\n"
  " rank 0: PDC [ PD (DS0, DS1, DS2)     ] [PD (DS100)   ]\n"
  " rank 1: PDC [ PD (DS3, DS4, nullptr) ] [PD (nullptr) ]\n"
  " \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPartitionBalancer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkPartitionBalancer", // tp_name
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
  PyvtkPartitionBalancer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPartitionBalancer_StaticNew()
{
  return vtkPartitionBalancer::New();
}

PyObject *PyvtkPartitionBalancer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPartitionBalancer_Type, PyvtkPartitionBalancer_Methods,
    "vtkPartitionBalancer",
 &PyvtkPartitionBalancer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPartitionedDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPartitionBalancer_Mode_Type);
  PyVTKEnum_Add(&PyvtkPartitionBalancer_Mode_Type, "vtkPartitionBalancer.Mode");

  o = (PyObject *)&PyvtkPartitionBalancer_Mode_Type;
  if (PyDict_SetItemString(d, "Mode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "Expand", vtkPartitionBalancer::Expand },
        { "Squash", vtkPartitionBalancer::Squash },
      };

    o = PyvtkPartitionBalancer_Mode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPartitionBalancer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPartitionBalancer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPartitionBalancer", o) != 0)
  {
    Py_DECREF(o);
  }

}

