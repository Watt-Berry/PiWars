// python wrapper for vtkCellDistanceSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellDistanceSelector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellDistanceSelector(PyObject *dict); }
extern "C" { PyObject *PyvtkCellDistanceSelector_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellDistanceSelector_InputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSelection.vtkCellDistanceSelector.InputPorts", // tp_name
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
PyObject *PyvtkCellDistanceSelector_InputPorts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellDistanceSelector_InputPorts_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellDistanceSelector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellDistanceSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellDistanceSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellDistanceSelector *tempr = vtkCellDistanceSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellDistanceSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellDistanceSelector::NewInstance());

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
PyvtkCellDistanceSelector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellDistanceSelector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellDistanceSelector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetInputMeshConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMeshConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputMeshConnection(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetInputMeshConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetInputMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInputMesh(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetInputMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetInputSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputSelectionConnection(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetInputSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetInputSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->SetInputSelection(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetInputSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkCellDistanceSelector::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetIncludeSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeSeed(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetIncludeSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_GetIncludeSeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeSeed() :
      op->vtkCellDistanceSelector::GetIncludeSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_IncludeSeedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeSeedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeSeedOn();
    }
    else
    {
      op->vtkCellDistanceSelector::IncludeSeedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_IncludeSeedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeSeedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeSeedOff();
    }
    else
    {
      op->vtkCellDistanceSelector::IncludeSeedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_SetAddIntermediate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddIntermediate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddIntermediate(temp0);
    }
    else
    {
      op->vtkCellDistanceSelector::SetAddIntermediate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_GetAddIntermediate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddIntermediate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAddIntermediate() :
      op->vtkCellDistanceSelector::GetAddIntermediate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_AddIntermediateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIntermediateOn();
    }
    else
    {
      op->vtkCellDistanceSelector::AddIntermediateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellDistanceSelector_AddIntermediateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddIntermediateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellDistanceSelector *op = static_cast<vtkCellDistanceSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddIntermediateOff();
    }
    else
    {
      op->vtkCellDistanceSelector::AddIntermediateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellDistanceSelector_Methods[] = {
  {"IsTypeOf", PyvtkCellDistanceSelector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellDistanceSelector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellDistanceSelector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellDistanceSelector\nC++: static vtkCellDistanceSelector *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellDistanceSelector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellDistanceSelector\nC++: vtkCellDistanceSelector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellDistanceSelector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellDistanceSelector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputMeshConnection", PyvtkCellDistanceSelector_SetInputMeshConnection, METH_VARARGS,
   "SetInputMeshConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetInputMeshConnection(vtkAlgorithmOutput *in)\n\nA convenience method to set the data object input connection to\nthe producer output\n"},
  {"SetInputMesh", PyvtkCellDistanceSelector_SetInputMesh, METH_VARARGS,
   "SetInputMesh(self, obj:vtkDataObject) -> None\nC++: void SetInputMesh(vtkDataObject *obj)\n\nA convenience method to set the input data object\n"},
  {"SetInputSelectionConnection", PyvtkCellDistanceSelector_SetInputSelectionConnection, METH_VARARGS,
   "SetInputSelectionConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetInputSelectionConnection(vtkAlgorithmOutput *in)\n\nA convenience method to set the selection input connection to the\nproducer output\n"},
  {"SetInputSelection", PyvtkCellDistanceSelector_SetInputSelection, METH_VARARGS,
   "SetInputSelection(self, obj:vtkSelection) -> None\nC++: void SetInputSelection(vtkSelection *obj)\n\nA convenience method to set the input selection\n"},
  {"SetDistance", PyvtkCellDistanceSelector_SetDistance, METH_VARARGS,
   "SetDistance(self, _arg:int) -> None\nC++: virtual void SetDistance(int _arg)\n\nTells how far (in term of topological distance) away from seed\ncells to expand the selection\n"},
  {"GetDistance", PyvtkCellDistanceSelector_GetDistance, METH_VARARGS,
   "GetDistance(self) -> int\nC++: virtual int GetDistance()\n\n"},
  {"SetIncludeSeed", PyvtkCellDistanceSelector_SetIncludeSeed, METH_VARARGS,
   "SetIncludeSeed(self, _arg:int) -> None\nC++: virtual void SetIncludeSeed(vtkTypeBool _arg)\n\nIf set, seed cells passed with SetSeedCells will be included in\nthe final selection\n"},
  {"GetIncludeSeed", PyvtkCellDistanceSelector_GetIncludeSeed, METH_VARARGS,
   "GetIncludeSeed(self) -> int\nC++: virtual vtkTypeBool GetIncludeSeed()\n\n"},
  {"IncludeSeedOn", PyvtkCellDistanceSelector_IncludeSeedOn, METH_VARARGS,
   "IncludeSeedOn(self) -> None\nC++: virtual void IncludeSeedOn()\n\n"},
  {"IncludeSeedOff", PyvtkCellDistanceSelector_IncludeSeedOff, METH_VARARGS,
   "IncludeSeedOff(self) -> None\nC++: virtual void IncludeSeedOff()\n\n"},
  {"SetAddIntermediate", PyvtkCellDistanceSelector_SetAddIntermediate, METH_VARARGS,
   "SetAddIntermediate(self, _arg:int) -> None\nC++: virtual void SetAddIntermediate(vtkTypeBool _arg)\n\nIf set, intermediate cells (between seed cells and the selection\nboundary) will be included in the final selection\n"},
  {"GetAddIntermediate", PyvtkCellDistanceSelector_GetAddIntermediate, METH_VARARGS,
   "GetAddIntermediate(self) -> int\nC++: virtual vtkTypeBool GetAddIntermediate()\n\n"},
  {"AddIntermediateOn", PyvtkCellDistanceSelector_AddIntermediateOn, METH_VARARGS,
   "AddIntermediateOn(self) -> None\nC++: virtual void AddIntermediateOn()\n\n"},
  {"AddIntermediateOff", PyvtkCellDistanceSelector_AddIntermediateOff, METH_VARARGS,
   "AddIntermediateOff(self) -> None\nC++: virtual void AddIntermediateOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellDistanceSelector_Doc =
  "vtkCellDistanceSelector - select neighbor cells up to a distance\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "This filter grows an input selection by iteratively selecting\n"
  "neighbor cells (a neighbor cell is a cell that shares a\n"
  "vertex/edge/face), up to a given topological distance to the selected\n"
  "neighborhood (number of times we add neighbor cells). This filter\n"
  "takes a vtkSelection and a vtkCompositeDataSet as inputs. It outputs\n"
  "a vtkSelection identifying all the selected cells.\n\n"
  "@par Thanks: This file has been initially developed in the frame of\n"
  "CEA's Love visualization software development\n\n"
  "CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\n"
  "BP12, F-91297 Arpajon, France.\n\n"
  "Modified and integrated into VTK, Kitware SAS 2012 Implementation by\n"
  "Thierry Carrard and Philippe Pebay\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellDistanceSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSelection.vtkCellDistanceSelector", // tp_name
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
  PyvtkCellDistanceSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellDistanceSelector_StaticNew()
{
  return vtkCellDistanceSelector::New();
}

PyObject *PyvtkCellDistanceSelector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellDistanceSelector_Type, PyvtkCellDistanceSelector_Methods,
    "vtkCellDistanceSelector",
 &PyvtkCellDistanceSelector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellDistanceSelector_InputPorts_Type);
  PyVTKEnum_Add(&PyvtkCellDistanceSelector_InputPorts_Type, "vtkCellDistanceSelector.InputPorts");

  o = (PyObject *)&PyvtkCellDistanceSelector_InputPorts_Type;
  if (PyDict_SetItemString(d, "InputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkCellDistanceSelector::InputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "INPUT_MESH", vtkCellDistanceSelector::INPUT_MESH },
        { "INPUT_SELECTION", vtkCellDistanceSelector::INPUT_SELECTION },
      };

    o = PyvtkCellDistanceSelector_InputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellDistanceSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellDistanceSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellDistanceSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

