// python wrapper for vtkTreeFieldAggregator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTreeFieldAggregator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTreeFieldAggregator(PyObject *dict); }
extern "C" { PyObject *PyvtkTreeFieldAggregator_ClassNew(); }


static PyObject *
PyvtkTreeFieldAggregator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTreeFieldAggregator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTreeFieldAggregator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTreeFieldAggregator *tempr = vtkTreeFieldAggregator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTreeFieldAggregator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTreeFieldAggregator::NewInstance());

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
PyvtkTreeFieldAggregator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTreeFieldAggregator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTreeFieldAggregator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetField() :
      op->vtkTreeFieldAggregator::GetField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetField(temp0);
    }
    else
    {
      op->vtkTreeFieldAggregator::SetField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinValue() :
      op->vtkTreeFieldAggregator::GetMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinValue(temp0);
    }
    else
    {
      op->vtkTreeFieldAggregator::SetMinValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetLeafVertexUnitSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafVertexUnitSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeafVertexUnitSize(temp0);
    }
    else
    {
      op->vtkTreeFieldAggregator::SetLeafVertexUnitSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetLeafVertexUnitSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafVertexUnitSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLeafVertexUnitSize() :
      op->vtkTreeFieldAggregator::GetLeafVertexUnitSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LeafVertexUnitSizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeafVertexUnitSizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeafVertexUnitSizeOn();
    }
    else
    {
      op->vtkTreeFieldAggregator::LeafVertexUnitSizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LeafVertexUnitSizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LeafVertexUnitSizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LeafVertexUnitSizeOff();
    }
    else
    {
      op->vtkTreeFieldAggregator::LeafVertexUnitSizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_SetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogScale(temp0);
    }
    else
    {
      op->vtkTreeFieldAggregator::SetLogScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_GetLogScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLogScale() :
      op->vtkTreeFieldAggregator::GetLogScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LogScaleOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOn();
    }
    else
    {
      op->vtkTreeFieldAggregator::LogScaleOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTreeFieldAggregator_LogScaleOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogScaleOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTreeFieldAggregator *op = static_cast<vtkTreeFieldAggregator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogScaleOff();
    }
    else
    {
      op->vtkTreeFieldAggregator::LogScaleOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTreeFieldAggregator_Methods[] = {
  {"IsTypeOf", PyvtkTreeFieldAggregator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTreeFieldAggregator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTreeFieldAggregator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTreeFieldAggregator\nC++: static vtkTreeFieldAggregator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTreeFieldAggregator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTreeFieldAggregator\nC++: vtkTreeFieldAggregator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTreeFieldAggregator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTreeFieldAggregator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetField", PyvtkTreeFieldAggregator_GetField, METH_VARARGS,
   "GetField(self) -> str\nC++: virtual char *GetField()\n\nThe field to aggregate.  If this is a string array, the entries\nare converted to double. TODO: Remove this field and use the\nArrayToProcess in vtkAlgorithm.\n"},
  {"SetField", PyvtkTreeFieldAggregator_SetField, METH_VARARGS,
   "SetField(self, _arg:str) -> None\nC++: virtual void SetField(const char *_arg)\n\n"},
  {"GetMinValue", PyvtkTreeFieldAggregator_GetMinValue, METH_VARARGS,
   "GetMinValue(self) -> float\nC++: virtual double GetMinValue()\n\nIf the value of the vertex is less than MinValue then consider\nit's value to be minVal.\n"},
  {"SetMinValue", PyvtkTreeFieldAggregator_SetMinValue, METH_VARARGS,
   "SetMinValue(self, _arg:float) -> None\nC++: virtual void SetMinValue(double _arg)\n\n"},
  {"SetLeafVertexUnitSize", PyvtkTreeFieldAggregator_SetLeafVertexUnitSize, METH_VARARGS,
   "SetLeafVertexUnitSize(self, _arg:bool) -> None\nC++: virtual void SetLeafVertexUnitSize(bool _arg)\n\nIf set, the algorithm will assume a size of 1 for each leaf\nvertex.\n"},
  {"GetLeafVertexUnitSize", PyvtkTreeFieldAggregator_GetLeafVertexUnitSize, METH_VARARGS,
   "GetLeafVertexUnitSize(self) -> bool\nC++: virtual bool GetLeafVertexUnitSize()\n\n"},
  {"LeafVertexUnitSizeOn", PyvtkTreeFieldAggregator_LeafVertexUnitSizeOn, METH_VARARGS,
   "LeafVertexUnitSizeOn(self) -> None\nC++: virtual void LeafVertexUnitSizeOn()\n\n"},
  {"LeafVertexUnitSizeOff", PyvtkTreeFieldAggregator_LeafVertexUnitSizeOff, METH_VARARGS,
   "LeafVertexUnitSizeOff(self) -> None\nC++: virtual void LeafVertexUnitSizeOff()\n\n"},
  {"SetLogScale", PyvtkTreeFieldAggregator_SetLogScale, METH_VARARGS,
   "SetLogScale(self, _arg:bool) -> None\nC++: virtual void SetLogScale(bool _arg)\n\nIf set, the leaf values in the tree will be logarithmically\nscaled (base 10).\n"},
  {"GetLogScale", PyvtkTreeFieldAggregator_GetLogScale, METH_VARARGS,
   "GetLogScale(self) -> bool\nC++: virtual bool GetLogScale()\n\n"},
  {"LogScaleOn", PyvtkTreeFieldAggregator_LogScaleOn, METH_VARARGS,
   "LogScaleOn(self) -> None\nC++: virtual void LogScaleOn()\n\n"},
  {"LogScaleOff", PyvtkTreeFieldAggregator_LogScaleOff, METH_VARARGS,
   "LogScaleOff(self) -> None\nC++: virtual void LogScaleOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTreeFieldAggregator_Doc =
  "vtkTreeFieldAggregator - aggregate field values from the leaves up\nthe tree\n\n"
  "Superclass: vtkTreeAlgorithm\n\n"
  "vtkTreeFieldAggregator may be used to assign sizes to all the\n"
  "vertices in the tree, based on the sizes of the leaves.  The size of\n"
  "a vertex will equal the sum of the sizes of the child vertices.  If\n"
  "you have a data array with values for all leaves, you may specify\n"
  "that array, and the values will be filled in for interior tree\n"
  "vertices.  If you do not yet have an array, you may tell the filter\n"
  "to create a new array, assuming that the size of each leaf vertex is\n"
  "1.  You may optionally set a flag to first take the log of all leaf\n"
  "values before aggregating.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTreeFieldAggregator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkTreeFieldAggregator", // tp_name
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
  PyvtkTreeFieldAggregator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTreeFieldAggregator_StaticNew()
{
  return vtkTreeFieldAggregator::New();
}

PyObject *PyvtkTreeFieldAggregator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTreeFieldAggregator_Type, PyvtkTreeFieldAggregator_Methods,
    "vtkTreeFieldAggregator",
 &PyvtkTreeFieldAggregator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTreeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTreeFieldAggregator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTreeFieldAggregator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTreeFieldAggregator", o) != 0)
  {
    Py_DECREF(o);
  }

}

