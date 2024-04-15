// python wrapper for vtkIdFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIdFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIdFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkIdFilter_ClassNew(); }


static PyObject *
PyvtkIdFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIdFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIdFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIdFilter *tempr = vtkIdFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIdFilter::NewInstance());

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
PyvtkIdFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIdFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIdFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkIdFilter::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkIdFilter::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOn();
    }
    else
    {
      op->vtkIdFilter::PointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_PointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointIdsOff();
    }
    else
    {
      op->vtkIdFilter::PointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIds(temp0);
    }
    else
    {
      op->vtkIdFilter::SetCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellIds() :
      op->vtkIdFilter::GetCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOn();
    }
    else
    {
      op->vtkIdFilter::CellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_CellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellIdsOff();
    }
    else
    {
      op->vtkIdFilter::CellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkIdFilter::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkIdFilter::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkIdFilter::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkIdFilter::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointIdsArrayName(temp0);
    }
    else
    {
      op->vtkIdFilter::SetPointIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetPointIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPointIdsArrayName() :
      op->vtkIdFilter::GetPointIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_SetCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdsArrayName(temp0);
    }
    else
    {
      op->vtkIdFilter::SetCellIdsArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIdFilter_GetCellIdsArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdsArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIdFilter *op = static_cast<vtkIdFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCellIdsArrayName() :
      op->vtkIdFilter::GetCellIdsArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIdFilter_Methods[] = {
  {"IsTypeOf", PyvtkIdFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIdFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIdFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIdFilter\nC++: static vtkIdFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIdFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIdFilter\nC++: vtkIdFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIdFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIdFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointIds", PyvtkIdFilter_SetPointIds, METH_VARARGS,
   "SetPointIds(self, _arg:int) -> None\nC++: virtual void SetPointIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"GetPointIds", PyvtkIdFilter_GetPointIds, METH_VARARGS,
   "GetPointIds(self) -> int\nC++: virtual vtkTypeBool GetPointIds()\n\n"},
  {"PointIdsOn", PyvtkIdFilter_PointIdsOn, METH_VARARGS,
   "PointIdsOn(self) -> None\nC++: virtual void PointIdsOn()\n\n"},
  {"PointIdsOff", PyvtkIdFilter_PointIdsOff, METH_VARARGS,
   "PointIdsOff(self) -> None\nC++: virtual void PointIdsOff()\n\n"},
  {"SetCellIds", PyvtkIdFilter_SetCellIds, METH_VARARGS,
   "SetCellIds(self, _arg:int) -> None\nC++: virtual void SetCellIds(vtkTypeBool _arg)\n\nEnable/disable the generation of point ids. Default is on.\n"},
  {"GetCellIds", PyvtkIdFilter_GetCellIds, METH_VARARGS,
   "GetCellIds(self) -> int\nC++: virtual vtkTypeBool GetCellIds()\n\n"},
  {"CellIdsOn", PyvtkIdFilter_CellIdsOn, METH_VARARGS,
   "CellIdsOn(self) -> None\nC++: virtual void CellIdsOn()\n\n"},
  {"CellIdsOff", PyvtkIdFilter_CellIdsOff, METH_VARARGS,
   "CellIdsOff(self) -> None\nC++: virtual void CellIdsOff()\n\n"},
  {"SetFieldData", PyvtkIdFilter_SetFieldData, METH_VARARGS,
   "SetFieldData(self, _arg:int) -> None\nC++: virtual void SetFieldData(vtkTypeBool _arg)\n\nSet/Get the flag which controls whether to generate scalar data\nor field data. If this flag is off, scalar data is generated.\nOtherwise, field data is generated. Default is off.\n"},
  {"GetFieldData", PyvtkIdFilter_GetFieldData, METH_VARARGS,
   "GetFieldData(self) -> int\nC++: virtual vtkTypeBool GetFieldData()\n\n"},
  {"FieldDataOn", PyvtkIdFilter_FieldDataOn, METH_VARARGS,
   "FieldDataOn(self) -> None\nC++: virtual void FieldDataOn()\n\n"},
  {"FieldDataOff", PyvtkIdFilter_FieldDataOff, METH_VARARGS,
   "FieldDataOff(self) -> None\nC++: virtual void FieldDataOff()\n\n"},
  {"SetPointIdsArrayName", PyvtkIdFilter_SetPointIdsArrayName, METH_VARARGS,
   "SetPointIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetPointIdsArrayName(const char *_arg)\n\nSet/Get the name of the Ids array for points, if generated. By\ndefault, set to \"vtkIdFilter_Ids\" for backwards compatibility.\n"},
  {"GetPointIdsArrayName", PyvtkIdFilter_GetPointIdsArrayName, METH_VARARGS,
   "GetPointIdsArrayName(self) -> str\nC++: virtual char *GetPointIdsArrayName()\n\n"},
  {"SetCellIdsArrayName", PyvtkIdFilter_SetCellIdsArrayName, METH_VARARGS,
   "SetCellIdsArrayName(self, _arg:str) -> None\nC++: virtual void SetCellIdsArrayName(const char *_arg)\n\nSet/Get the name of the Ids array for points, if generated. By\ndefault, set to \"vtkIdFilter_Ids\" for backwards compatibility.\n"},
  {"GetCellIdsArrayName", PyvtkIdFilter_GetCellIdsArrayName, METH_VARARGS,
   "GetCellIdsArrayName(self) -> str\nC++: virtual char *GetCellIdsArrayName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIdFilter_Doc =
  "vtkIdFilter - generate scalars or field data from point and cell ids\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkIdFilter is a filter to that generates scalars or field data using\n"
  "cell and point ids. That is, the point attribute data scalars or\n"
  "field data are generated from the point ids, and the cell attribute\n"
  "data scalars or field data are generated from the cell ids.\n\n"
  "Typically this filter is used with vtkLabeledDataMapper (and possibly\n"
  "vtkSelectVisiblePoints) to create labels for points and cells, or\n"
  "labels for the point or cell data scalar values.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIdFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkIdFilter", // tp_name
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
  PyvtkIdFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIdFilter_StaticNew()
{
  return vtkIdFilter::New();
}

PyObject *PyvtkIdFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIdFilter_Type, PyvtkIdFilter_Methods,
    "vtkIdFilter",
 &PyvtkIdFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIdFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIdFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIdFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

