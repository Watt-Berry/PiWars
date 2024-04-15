// python wrapper for vtkAttributeDataToTableFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAttributeDataToTableFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeDataToTableFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAttributeDataToTableFilter_ClassNew(); }


static PyObject *
PyvtkAttributeDataToTableFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeDataToTableFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToTableFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeDataToTableFilter *tempr = vtkAttributeDataToTableFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeDataToTableFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToTableFilter::NewInstance());

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
PyvtkAttributeDataToTableFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAttributeDataToTableFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAttributeDataToTableFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldAssociation(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetFieldAssociation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetFieldAssociation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldAssociation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldAssociation() :
      op->vtkAttributeDataToTableFilter::GetFieldAssociation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddMetaData(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetAddMetaData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetAddMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddMetaData() :
      op->vtkAttributeDataToTableFilter::GetAddMetaData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddMetaDataOn();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::AddMetaDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_AddMetaDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddMetaDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddMetaDataOff();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::AddMetaDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOriginalIds(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetGenerateOriginalIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOriginalIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateOriginalIds() :
      op->vtkAttributeDataToTableFilter::GetGenerateOriginalIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GenerateOriginalIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOriginalIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOriginalIdsOn();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::GenerateOriginalIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GenerateOriginalIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOriginalIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOriginalIdsOff();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::GenerateOriginalIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCellConnectivity(temp0);
    }
    else
    {
      op->vtkAttributeDataToTableFilter::SetGenerateCellConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCellConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateCellConnectivity() :
      op->vtkAttributeDataToTableFilter::GetGenerateCellConnectivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GenerateCellConnectivityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellConnectivityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellConnectivityOn();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::GenerateCellConnectivityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToTableFilter_GenerateCellConnectivityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCellConnectivityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToTableFilter *op = static_cast<vtkAttributeDataToTableFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCellConnectivityOff();
    }
    else
    {
      op->vtkAttributeDataToTableFilter::GenerateCellConnectivityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeDataToTableFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeDataToTableFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeDataToTableFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeDataToTableFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAttributeDataToTableFilter\nC++: static vtkAttributeDataToTableFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeDataToTableFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAttributeDataToTableFilter\nC++: vtkAttributeDataToTableFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAttributeDataToTableFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAttributeDataToTableFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFieldAssociation", PyvtkAttributeDataToTableFilter_SetFieldAssociation, METH_VARARGS,
   "SetFieldAssociation(self, _arg:int) -> None\nC++: virtual void SetFieldAssociation(int _arg)\n\nSelect the attribute type. Accepted values are\n\\li vtkDataObject::FIELD_ASSOCIATION_POINTS,\n\\li vtkDataObject::FIELD_ASSOCIATION_CELLS,\n\\li vtkDataObject::FIELD_ASSOCIATION_NONE,\n\\li vtkDataObject::FIELD_ASSOCIATION_VERTICES,\n\\li vtkDataObject::FIELD_ASSOCIATION_EDGES,\n\\li vtkDataObject::FIELD_ASSOCIATION_ROWS\nIf value is vtkDataObject::FIELD_ASSOCIATION_NONE, then FieldData\nassociated with the input dataobject is extracted.\n\nDefault is vtkDataObject::FIELD_ASSOCIATION_POINTS\n"},
  {"GetFieldAssociation", PyvtkAttributeDataToTableFilter_GetFieldAssociation, METH_VARARGS,
   "GetFieldAssociation(self) -> int\nC++: virtual int GetFieldAssociation()\n\n"},
  {"SetAddMetaData", PyvtkAttributeDataToTableFilter_SetAddMetaData, METH_VARARGS,
   "SetAddMetaData(self, _arg:bool) -> None\nC++: virtual void SetAddMetaData(bool _arg)\n\nIt is possible for this filter to add additional meta-data to the\nfield data such as point coordinates (when point attributes are\nselected and input is pointset) or structured coordinates etc. To\nenable this addition of extra information, turn this flag on. Off\nby default.\n"},
  {"GetAddMetaData", PyvtkAttributeDataToTableFilter_GetAddMetaData, METH_VARARGS,
   "GetAddMetaData(self) -> bool\nC++: virtual bool GetAddMetaData()\n\n"},
  {"AddMetaDataOn", PyvtkAttributeDataToTableFilter_AddMetaDataOn, METH_VARARGS,
   "AddMetaDataOn(self) -> None\nC++: virtual void AddMetaDataOn()\n\n"},
  {"AddMetaDataOff", PyvtkAttributeDataToTableFilter_AddMetaDataOff, METH_VARARGS,
   "AddMetaDataOff(self) -> None\nC++: virtual void AddMetaDataOff()\n\n"},
  {"SetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_SetGenerateOriginalIds, METH_VARARGS,
   "SetGenerateOriginalIds(self, _arg:bool) -> None\nC++: virtual void SetGenerateOriginalIds(bool _arg)\n\nWhen set (default) the vtkOriginalIndices array will be added to\nthe output. Can be overridden by setting this flag to 0. This is\nonly respected when AddMetaData is true.\n"},
  {"GetGenerateOriginalIds", PyvtkAttributeDataToTableFilter_GetGenerateOriginalIds, METH_VARARGS,
   "GetGenerateOriginalIds(self) -> bool\nC++: virtual bool GetGenerateOriginalIds()\n\n"},
  {"GenerateOriginalIdsOn", PyvtkAttributeDataToTableFilter_GenerateOriginalIdsOn, METH_VARARGS,
   "GenerateOriginalIdsOn(self) -> None\nC++: virtual void GenerateOriginalIdsOn()\n\n"},
  {"GenerateOriginalIdsOff", PyvtkAttributeDataToTableFilter_GenerateOriginalIdsOff, METH_VARARGS,
   "GenerateOriginalIdsOff(self) -> None\nC++: virtual void GenerateOriginalIdsOff()\n\n"},
  {"SetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_SetGenerateCellConnectivity, METH_VARARGS,
   "SetGenerateCellConnectivity(self, _arg:bool) -> None\nC++: virtual void SetGenerateCellConnectivity(bool _arg)\n\nWhen set to true (default is false) the connectivity of each cell\nwill be added by adding a new column for each point.\n"},
  {"GetGenerateCellConnectivity", PyvtkAttributeDataToTableFilter_GetGenerateCellConnectivity, METH_VARARGS,
   "GetGenerateCellConnectivity(self) -> bool\nC++: virtual bool GetGenerateCellConnectivity()\n\n"},
  {"GenerateCellConnectivityOn", PyvtkAttributeDataToTableFilter_GenerateCellConnectivityOn, METH_VARARGS,
   "GenerateCellConnectivityOn(self) -> None\nC++: virtual void GenerateCellConnectivityOn()\n\n"},
  {"GenerateCellConnectivityOff", PyvtkAttributeDataToTableFilter_GenerateCellConnectivityOff, METH_VARARGS,
   "GenerateCellConnectivityOff(self) -> None\nC++: virtual void GenerateCellConnectivityOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAttributeDataToTableFilter_Doc =
  "vtkAttributeDataToTableFilter - this filter produces a vtkTable from\nthe chosen attribute in the input data object.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "vtkAttributeDataToTableFilter is a filter that produces a vtkTable\n"
  "from the chosen attribute in the input dataobject. This filter can\n"
  "accept composite datasets. If the input is a composite dataset, the\n"
  "output is a multiblock with vtkTable leaves.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributeDataToTableFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAttributeDataToTableFilter", // tp_name
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
  PyvtkAttributeDataToTableFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeDataToTableFilter_StaticNew()
{
  return vtkAttributeDataToTableFilter::New();
}

PyObject *PyvtkAttributeDataToTableFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAttributeDataToTableFilter_Type, PyvtkAttributeDataToTableFilter_Methods,
    "vtkAttributeDataToTableFilter",
 &PyvtkAttributeDataToTableFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributeDataToTableFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeDataToTableFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeDataToTableFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

