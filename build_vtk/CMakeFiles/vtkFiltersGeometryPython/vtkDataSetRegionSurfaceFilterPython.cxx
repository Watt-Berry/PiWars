// python wrapper for vtkDataSetRegionSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetRegionSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetRegionSurfaceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetRegionSurfaceFilter_ClassNew(); }

#ifndef DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
extern "C" { PyObject *PyvtkDataSetSurfaceFilter_ClassNew(); }
#define DECLARED_PyvtkDataSetSurfaceFilter_ClassNew
#endif

static PyObject *
PyvtkDataSetRegionSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetRegionSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetRegionSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetRegionSurfaceFilter *tempr = vtkDataSetRegionSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetRegionSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetRegionSurfaceFilter::NewInstance());

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
PyvtkDataSetRegionSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetRegionSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetRegionSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetRegionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRegionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRegionArrayName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetRegionArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetRegionArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRegionArrayName() :
      op->vtkDataSetRegionSurfaceFilter::GetRegionArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->UnstructuredGridExecute(temp0, temp1) :
      op->vtkDataSetRegionSurfaceFilter::UnstructuredGridExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetSingleSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleSided(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetSingleSided(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetSingleSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSingleSided() :
      op->vtkDataSetRegionSurfaceFilter::GetSingleSided());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialPropertiesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialPropertiesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialPropertiesName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialPropertiesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialPropertiesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialPropertiesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialPropertiesName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialPropertiesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetMaterialPIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialPIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialPIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetMaterialPIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetMaterialPIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialPIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialPIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetMaterialPIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_SetInterfaceIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceIDsName(temp0);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::SetInterfaceIDsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_GetInterfaceIDsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceIDsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceIDsName() :
      op->vtkDataSetRegionSurfaceFilter::GetInterfaceIDsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetRegionSurfaceFilter_RecordOrigCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecordOrigCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetRegionSurfaceFilter *op = static_cast<vtkDataSetRegionSurfaceFilter *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RecordOrigCellId(temp0, temp1);
    }
    else
    {
      op->vtkDataSetRegionSurfaceFilter::RecordOrigCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetRegionSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetRegionSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetRegionSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetRegionSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetRegionSurfaceFilter\nC++: static vtkDataSetRegionSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetRegionSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetRegionSurfaceFilter\nC++: vtkDataSetRegionSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetRegionSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetRegionSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRegionArrayName", PyvtkDataSetRegionSurfaceFilter_SetRegionArrayName, METH_VARARGS,
   "SetRegionArrayName(self, _arg:str) -> None\nC++: virtual void SetRegionArrayName(const char *_arg)\n\nThe name of the cell based array that we use to extract\ninterfaces from Default is \"Regions\"\n"},
  {"GetRegionArrayName", PyvtkDataSetRegionSurfaceFilter_GetRegionArrayName, METH_VARARGS,
   "GetRegionArrayName(self) -> str\nC++: virtual char *GetRegionArrayName()\n\n"},
  {"UnstructuredGridExecute", PyvtkDataSetRegionSurfaceFilter_UnstructuredGridExecute, METH_VARARGS,
   "UnstructuredGridExecute(self, input:vtkDataSet,\n    output:vtkPolyData) -> int\nC++: int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output) override;\n\nExecute the filter on input and store the result in output. The\ncorrect function should be used accordingly to the type of the\ninput.\n\nInput can be any subclass of vtkUnstructuredGridBase. In case of\na vtkUnstructuredGrid or subclass instance, an optimized version\nof the filter is executed.\n"},
  {"SetSingleSided", PyvtkDataSetRegionSurfaceFilter_SetSingleSided, METH_VARARGS,
   "SetSingleSided(self, _arg:bool) -> None\nC++: virtual void SetSingleSided(bool _arg)\n\nWhether to return single sided material interfaces or double\nsided Default is single\n"},
  {"GetSingleSided", PyvtkDataSetRegionSurfaceFilter_GetSingleSided, METH_VARARGS,
   "GetSingleSided(self) -> bool\nC++: virtual bool GetSingleSided()\n\n"},
  {"SetMaterialPropertiesName", PyvtkDataSetRegionSurfaceFilter_SetMaterialPropertiesName, METH_VARARGS,
   "SetMaterialPropertiesName(self, _arg:str) -> None\nC++: virtual void SetMaterialPropertiesName(const char *_arg)\n\nThe name of the field array that has characteristics of each\nmaterial Default is \"material_properties\"\n"},
  {"GetMaterialPropertiesName", PyvtkDataSetRegionSurfaceFilter_GetMaterialPropertiesName, METH_VARARGS,
   "GetMaterialPropertiesName(self) -> str\nC++: virtual char *GetMaterialPropertiesName()\n\n"},
  {"SetMaterialIDsName", PyvtkDataSetRegionSurfaceFilter_SetMaterialIDsName, METH_VARARGS,
   "SetMaterialIDsName(self, _arg:str) -> None\nC++: virtual void SetMaterialIDsName(const char *_arg)\n\nThe name of the field array that has material type identifiers in\nit Default is \"material_ids\"\n"},
  {"GetMaterialIDsName", PyvtkDataSetRegionSurfaceFilter_GetMaterialIDsName, METH_VARARGS,
   "GetMaterialIDsName(self) -> str\nC++: virtual char *GetMaterialIDsName()\n\n"},
  {"SetMaterialPIDsName", PyvtkDataSetRegionSurfaceFilter_SetMaterialPIDsName, METH_VARARGS,
   "SetMaterialPIDsName(self, _arg:str) -> None\nC++: virtual void SetMaterialPIDsName(const char *_arg)\n\nThe name of the output field array that records parent materials\nof each interface Default is \"material_ancestors\"\n"},
  {"GetMaterialPIDsName", PyvtkDataSetRegionSurfaceFilter_GetMaterialPIDsName, METH_VARARGS,
   "GetMaterialPIDsName(self) -> str\nC++: virtual char *GetMaterialPIDsName()\n\n"},
  {"SetInterfaceIDsName", PyvtkDataSetRegionSurfaceFilter_SetInterfaceIDsName, METH_VARARGS,
   "SetInterfaceIDsName(self, _arg:str) -> None\nC++: virtual void SetInterfaceIDsName(const char *_arg)\n\nThe name of the field array that has material interface type\nidentifiers in it Default is \"interface_ids\"\n"},
  {"GetInterfaceIDsName", PyvtkDataSetRegionSurfaceFilter_GetInterfaceIDsName, METH_VARARGS,
   "GetInterfaceIDsName(self) -> str\nC++: virtual char *GetInterfaceIDsName()\n\n"},
  {"RecordOrigCellId", PyvtkDataSetRegionSurfaceFilter_RecordOrigCellId, METH_VARARGS,
   "RecordOrigCellId(self, newIndex:int, origId:int) -> None\nC++: void RecordOrigCellId(vtkIdType newIndex, vtkIdType origId)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetRegionSurfaceFilter_Doc =
  "vtkDataSetRegionSurfaceFilter - Extract surface of materials.\n\n"
  "Superclass: vtkDataSetSurfaceFilter\n\n"
  "This filter extracts surfaces of materials such that a surface could\n"
  "have a material on each side of it. It also stores a mapping of the\n"
  "original cells and their sides back to the original grid so that we\n"
  "can output boundary information for those cells given only surfaces.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetRegionSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkDataSetRegionSurfaceFilter", // tp_name
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
  PyvtkDataSetRegionSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetRegionSurfaceFilter_StaticNew()
{
  return vtkDataSetRegionSurfaceFilter::New();
}

PyObject *PyvtkDataSetRegionSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetRegionSurfaceFilter_Type, PyvtkDataSetRegionSurfaceFilter_Methods,
    "vtkDataSetRegionSurfaceFilter",
 &PyvtkDataSetRegionSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataSetSurfaceFilter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetRegionSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetRegionSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetRegionSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

