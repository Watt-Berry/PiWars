// python wrapper for vtkPointDataToCellData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointDataToCellData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointDataToCellData(PyObject *dict); }
extern "C" { PyObject *PyvtkPointDataToCellData_ClassNew(); }


static PyObject *
PyvtkPointDataToCellData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointDataToCellData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointDataToCellData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointDataToCellData *tempr = vtkPointDataToCellData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointDataToCellData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointDataToCellData::NewInstance());

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
PyvtkPointDataToCellData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointDataToCellData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointDataToCellData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassPointData(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::SetPassPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetPassPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassPointData() :
      op->vtkPointDataToCellData::GetPassPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOn();
    }
    else
    {
      op->vtkPointDataToCellData::PassPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_PassPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassPointDataOff();
    }
    else
    {
      op->vtkPointDataToCellData::PassPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCategoricalData(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::SetCategoricalData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetCategoricalData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCategoricalData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCategoricalData() :
      op->vtkPointDataToCellData::GetCategoricalData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_CategoricalDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOn();
    }
    else
    {
      op->vtkPointDataToCellData::CategoricalDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_CategoricalDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CategoricalDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CategoricalDataOff();
    }
    else
    {
      op->vtkPointDataToCellData::CategoricalDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_SetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessAllArrays(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::SetProcessAllArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_GetProcessAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProcessAllArrays() :
      op->vtkPointDataToCellData::GetProcessAllArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_ProcessAllArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOn();
    }
    else
    {
      op->vtkPointDataToCellData::ProcessAllArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_ProcessAllArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessAllArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProcessAllArraysOff();
    }
    else
    {
      op->vtkPointDataToCellData::ProcessAllArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_AddPointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddPointDataArray(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::AddPointDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_RemovePointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemovePointDataArray(temp0);
    }
    else
    {
      op->vtkPointDataToCellData::RemovePointDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointDataToCellData_ClearPointDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointDataToCellData *op = static_cast<vtkPointDataToCellData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPointDataArrays();
    }
    else
    {
      op->vtkPointDataToCellData::ClearPointDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointDataToCellData_Methods[] = {
  {"IsTypeOf", PyvtkPointDataToCellData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointDataToCellData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointDataToCellData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointDataToCellData\nC++: static vtkPointDataToCellData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointDataToCellData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointDataToCellData\nC++: vtkPointDataToCellData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointDataToCellData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointDataToCellData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassPointData", PyvtkPointDataToCellData_SetPassPointData, METH_VARARGS,
   "SetPassPointData(self, _arg:bool) -> None\nC++: virtual void SetPassPointData(bool _arg)\n\nControl whether the input point data is to be passed to the\noutput. If on, then the input point data is passed through to the\noutput; otherwise, only generated cell data is placed into the\noutput.\n"},
  {"GetPassPointData", PyvtkPointDataToCellData_GetPassPointData, METH_VARARGS,
   "GetPassPointData(self) -> bool\nC++: virtual bool GetPassPointData()\n\n"},
  {"PassPointDataOn", PyvtkPointDataToCellData_PassPointDataOn, METH_VARARGS,
   "PassPointDataOn(self) -> None\nC++: virtual void PassPointDataOn()\n\n"},
  {"PassPointDataOff", PyvtkPointDataToCellData_PassPointDataOff, METH_VARARGS,
   "PassPointDataOff(self) -> None\nC++: virtual void PassPointDataOff()\n\n"},
  {"SetCategoricalData", PyvtkPointDataToCellData_SetCategoricalData, METH_VARARGS,
   "SetCategoricalData(self, _arg:bool) -> None\nC++: virtual void SetCategoricalData(bool _arg)\n\nControl whether the input point data is to be treated as\ncategorical. If the data is categorical, then the resultant cell\ndata will be determined by a \"majority rules\" vote (using a\nhistogram of the point data scalar values), with ties going to\nthe smaller point data value.\n"},
  {"GetCategoricalData", PyvtkPointDataToCellData_GetCategoricalData, METH_VARARGS,
   "GetCategoricalData(self) -> bool\nC++: virtual bool GetCategoricalData()\n\n"},
  {"CategoricalDataOn", PyvtkPointDataToCellData_CategoricalDataOn, METH_VARARGS,
   "CategoricalDataOn(self) -> None\nC++: virtual void CategoricalDataOn()\n\n"},
  {"CategoricalDataOff", PyvtkPointDataToCellData_CategoricalDataOff, METH_VARARGS,
   "CategoricalDataOff(self) -> None\nC++: virtual void CategoricalDataOff()\n\n"},
  {"SetProcessAllArrays", PyvtkPointDataToCellData_SetProcessAllArrays, METH_VARARGS,
   "SetProcessAllArrays(self, _arg:bool) -> None\nC++: virtual void SetProcessAllArrays(bool _arg)\n\nActivate selective processing of arrays. If inactive, only arrays\nselected by the user will be considered by this filter. The\ndefault is true.\n"},
  {"GetProcessAllArrays", PyvtkPointDataToCellData_GetProcessAllArrays, METH_VARARGS,
   "GetProcessAllArrays(self) -> bool\nC++: virtual bool GetProcessAllArrays()\n\n"},
  {"ProcessAllArraysOn", PyvtkPointDataToCellData_ProcessAllArraysOn, METH_VARARGS,
   "ProcessAllArraysOn(self) -> None\nC++: virtual void ProcessAllArraysOn()\n\n"},
  {"ProcessAllArraysOff", PyvtkPointDataToCellData_ProcessAllArraysOff, METH_VARARGS,
   "ProcessAllArraysOff(self) -> None\nC++: virtual void ProcessAllArraysOff()\n\n"},
  {"AddPointDataArray", PyvtkPointDataToCellData_AddPointDataArray, METH_VARARGS,
   "AddPointDataArray(self, name:str) -> None\nC++: virtual void AddPointDataArray(const char *name)\n\nAdds an array to be processed. This only has an effect if the\nProcessAllArrays option is turned off. If a name is already\npresent, nothing happens.\n"},
  {"RemovePointDataArray", PyvtkPointDataToCellData_RemovePointDataArray, METH_VARARGS,
   "RemovePointDataArray(self, name:str) -> None\nC++: virtual void RemovePointDataArray(const char *name)\n\nRemoves an array to be processed. This only has an effect if the\nProcessAllArrays option is turned off. If the specified name is\nnot present, nothing happens.\n"},
  {"ClearPointDataArrays", PyvtkPointDataToCellData_ClearPointDataArrays, METH_VARARGS,
   "ClearPointDataArrays(self) -> None\nC++: virtual void ClearPointDataArrays()\n\nRemoves all arrays to be processed from the list. This only has\nan effect if the ProcessAllArrays option is turned off.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointDataToCellData_Doc =
  "vtkPointDataToCellData - map point data to cell data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkPointDataToCellData is a filter that transforms point data (i.e.,\n"
  "data specified per point) into cell data (i.e., data specified per\n"
  "cell).  By default, the method of transformation is based on\n"
  "averaging the data values of all the points defining a particular\n"
  "cell. Optionally (by enabling CategoricalData), histograming can be\n"
  "used to assign the cell data. For large datasets with several cell\n"
  "data arrays, the filter optionally supports selective processing to\n"
  "speed up processing. Optionally, the input point data can be passed\n"
  "through to the output as well.\n\n"
  "@warning\n"
  "This filter is an abstract filter, that is, the output is an abstract\n"
  "type (i.e., vtkDataSet). Use the convenience methods (e.g.,\n"
  "GetPolyDataOutput(), GetStructuredPointsOutput(), etc.) to get the\n"
  "type of output you want.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkPointData vtkCellData vtkCellDataToPointData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointDataToCellData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkPointDataToCellData", // tp_name
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
  PyvtkPointDataToCellData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointDataToCellData_StaticNew()
{
  return vtkPointDataToCellData::New();
}

PyObject *PyvtkPointDataToCellData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointDataToCellData_Type, PyvtkPointDataToCellData_Methods,
    "vtkPointDataToCellData",
 &PyvtkPointDataToCellData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointDataToCellData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointDataToCellData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointDataToCellData", o) != 0)
  {
    Py_DECREF(o);
  }

}

