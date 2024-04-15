// python wrapper for vtkPassArrays
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPassArrays.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPassArrays(PyObject *dict); }
extern "C" { PyObject *PyvtkPassArrays_ClassNew(); }


static PyObject *
PyvtkPassArrays_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPassArrays::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPassArrays::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPassArrays *tempr = vtkPassArrays::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPassArrays *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPassArrays::NewInstance());

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
PyvtkPassArrays_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPassArrays::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPassArrays::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddArray(temp0, temp1);
    }
    else
    {
      op->vtkPassArrays::AddArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_AddPointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

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
      op->vtkPassArrays::AddPointDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_AddCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddCellDataArray(temp0);
    }
    else
    {
      op->vtkPassArrays::AddCellDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_AddFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFieldDataArray(temp0);
    }
    else
    {
      op->vtkPassArrays::AddFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0, temp1);
    }
    else
    {
      op->vtkPassArrays::RemoveArray(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemovePointDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePointDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

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
      op->vtkPassArrays::RemovePointDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveCellDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCellDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveCellDataArray(temp0);
    }
    else
    {
      op->vtkPassArrays::RemoveCellDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveFieldDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveFieldDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveFieldDataArray(temp0);
    }
    else
    {
      op->vtkPassArrays::RemoveFieldDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearArrays();
    }
    else
    {
      op->vtkPassArrays::ClearArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearPointDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPointDataArrays();
    }
    else
    {
      op->vtkPassArrays::ClearPointDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearCellDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCellDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCellDataArrays();
    }
    else
    {
      op->vtkPassArrays::ClearCellDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearFieldDataArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldDataArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFieldDataArrays();
    }
    else
    {
      op->vtkPassArrays::ClearFieldDataArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_SetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveArrays(temp0);
    }
    else
    {
      op->vtkPassArrays::SetRemoveArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_GetRemoveArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveArrays() :
      op->vtkPassArrays::GetRemoveArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveArraysOn();
    }
    else
    {
      op->vtkPassArrays::RemoveArraysOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_RemoveArraysOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArraysOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveArraysOff();
    }
    else
    {
      op->vtkPassArrays::RemoveArraysOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_SetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFieldTypes(temp0);
    }
    else
    {
      op->vtkPassArrays::SetUseFieldTypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_GetUseFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseFieldTypes() :
      op->vtkPassArrays::GetUseFieldTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFieldTypesOn();
    }
    else
    {
      op->vtkPassArrays::UseFieldTypesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_UseFieldTypesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFieldTypesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFieldTypesOff();
    }
    else
    {
      op->vtkPassArrays::UseFieldTypesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_AddFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddFieldType(temp0);
    }
    else
    {
      op->vtkPassArrays::AddFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPassArrays_ClearFieldTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPassArrays *op = static_cast<vtkPassArrays *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFieldTypes();
    }
    else
    {
      op->vtkPassArrays::ClearFieldTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPassArrays_Methods[] = {
  {"IsTypeOf", PyvtkPassArrays_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPassArrays_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPassArrays_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPassArrays\nC++: static vtkPassArrays *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPassArrays_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPassArrays\nC++: vtkPassArrays *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPassArrays_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPassArrays_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddArray", PyvtkPassArrays_AddArray, METH_VARARGS,
   "AddArray(self, fieldType:int, name:str) -> None\nC++: virtual void AddArray(int fieldType, const char *name)\n\nAdds an array to pass through. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration.\n"},
  {"AddPointDataArray", PyvtkPassArrays_AddPointDataArray, METH_VARARGS,
   "AddPointDataArray(self, name:str) -> None\nC++: virtual void AddPointDataArray(const char *name)\n\n"},
  {"AddCellDataArray", PyvtkPassArrays_AddCellDataArray, METH_VARARGS,
   "AddCellDataArray(self, name:str) -> None\nC++: virtual void AddCellDataArray(const char *name)\n\n"},
  {"AddFieldDataArray", PyvtkPassArrays_AddFieldDataArray, METH_VARARGS,
   "AddFieldDataArray(self, name:str) -> None\nC++: virtual void AddFieldDataArray(const char *name)\n\n"},
  {"RemoveArray", PyvtkPassArrays_RemoveArray, METH_VARARGS,
   "RemoveArray(self, fieldType:int, name:str) -> None\nC++: virtual void RemoveArray(int fieldType, const char *name)\n\n"},
  {"RemovePointDataArray", PyvtkPassArrays_RemovePointDataArray, METH_VARARGS,
   "RemovePointDataArray(self, name:str) -> None\nC++: virtual void RemovePointDataArray(const char *name)\n\n"},
  {"RemoveCellDataArray", PyvtkPassArrays_RemoveCellDataArray, METH_VARARGS,
   "RemoveCellDataArray(self, name:str) -> None\nC++: virtual void RemoveCellDataArray(const char *name)\n\n"},
  {"RemoveFieldDataArray", PyvtkPassArrays_RemoveFieldDataArray, METH_VARARGS,
   "RemoveFieldDataArray(self, name:str) -> None\nC++: virtual void RemoveFieldDataArray(const char *name)\n\n"},
  {"ClearArrays", PyvtkPassArrays_ClearArrays, METH_VARARGS,
   "ClearArrays(self) -> None\nC++: virtual void ClearArrays()\n\nClear all arrays to pass through.\n"},
  {"ClearPointDataArrays", PyvtkPassArrays_ClearPointDataArrays, METH_VARARGS,
   "ClearPointDataArrays(self) -> None\nC++: virtual void ClearPointDataArrays()\n\n"},
  {"ClearCellDataArrays", PyvtkPassArrays_ClearCellDataArrays, METH_VARARGS,
   "ClearCellDataArrays(self) -> None\nC++: virtual void ClearCellDataArrays()\n\n"},
  {"ClearFieldDataArrays", PyvtkPassArrays_ClearFieldDataArrays, METH_VARARGS,
   "ClearFieldDataArrays(self) -> None\nC++: virtual void ClearFieldDataArrays()\n\n"},
  {"SetRemoveArrays", PyvtkPassArrays_SetRemoveArrays, METH_VARARGS,
   "SetRemoveArrays(self, _arg:bool) -> None\nC++: virtual void SetRemoveArrays(bool _arg)\n\nInstead of passing only the specified arrays, remove the\nspecified arrays and keep all other arrays. Default is off.\n"},
  {"GetRemoveArrays", PyvtkPassArrays_GetRemoveArrays, METH_VARARGS,
   "GetRemoveArrays(self) -> bool\nC++: virtual bool GetRemoveArrays()\n\n"},
  {"RemoveArraysOn", PyvtkPassArrays_RemoveArraysOn, METH_VARARGS,
   "RemoveArraysOn(self) -> None\nC++: virtual void RemoveArraysOn()\n\n"},
  {"RemoveArraysOff", PyvtkPassArrays_RemoveArraysOff, METH_VARARGS,
   "RemoveArraysOff(self) -> None\nC++: virtual void RemoveArraysOff()\n\n"},
  {"SetUseFieldTypes", PyvtkPassArrays_SetUseFieldTypes, METH_VARARGS,
   "SetUseFieldTypes(self, _arg:bool) -> None\nC++: virtual void SetUseFieldTypes(bool _arg)\n\nProcess only those field types explicitly specified with\nAddFieldType. Otherwise, processes field types associated with at\nleast one specified array. Default is off.\n"},
  {"GetUseFieldTypes", PyvtkPassArrays_GetUseFieldTypes, METH_VARARGS,
   "GetUseFieldTypes(self) -> bool\nC++: virtual bool GetUseFieldTypes()\n\n"},
  {"UseFieldTypesOn", PyvtkPassArrays_UseFieldTypesOn, METH_VARARGS,
   "UseFieldTypesOn(self) -> None\nC++: virtual void UseFieldTypesOn()\n\n"},
  {"UseFieldTypesOff", PyvtkPassArrays_UseFieldTypesOff, METH_VARARGS,
   "UseFieldTypesOff(self) -> None\nC++: virtual void UseFieldTypesOff()\n\n"},
  {"AddFieldType", PyvtkPassArrays_AddFieldType, METH_VARARGS,
   "AddFieldType(self, fieldType:int) -> None\nC++: virtual void AddFieldType(int fieldType)\n\nAdd a field type to process. fieldType where the array that\nshould be passed (point data, cell data, etc.). It should be one\nof the constants defined in the vtkDataObject::AttributeTypes\nenumeration. NOTE: These are only used if UseFieldType is turned\non.\n"},
  {"ClearFieldTypes", PyvtkPassArrays_ClearFieldTypes, METH_VARARGS,
   "ClearFieldTypes(self) -> None\nC++: virtual void ClearFieldTypes()\n\nClear all field types to process.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPassArrays_Doc =
  "vtkPassArrays - Passes a subset of arrays to the output\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "This filter preserves all the topology of the input, but only a\n"
  "subset of arrays are passed to the output. Add an array to be passed\n"
  "to the output data object with AddArray(). If RemoveArrays is on, the\n"
  "specified arrays will be the ones that are removed instead of the\n"
  "ones that are kept.\n\n"
  "Arrays with special attributes (scalars, pedigree ids, etc.) will\n"
  "retain those attributes in the output.\n\n"
  "By default, only those field types with at least one array specified\n"
  "through AddArray will be processed. If instead UseFieldTypes is\n"
  "turned on, you explicitly set which field types to process with\n"
  "AddFieldType.\n\n"
  "By default, ghost arrays will be passed unless RemoveArrays is\n"
  "selected and those arrays are specifically chosen to be removed.\n\n"
  "Example 1:\n\n"
  "passArray->AddArray(vtkDataObject::POINT, \"velocity\"); \n\n"
  "The output will have only that one array \"velocity\" in the point\n"
  "data, but cell and field data will be untouched.\n\n"
  "Example 2:\n\n"
  "passArray->AddArray(vtkDataObject::POINT, \"velocity\");\n"
  "passArray->UseFieldTypesOn();\n"
  "passArray->AddFieldType(vtkDataObject::POINT);\n"
  "passArray->AddFieldType(vtkDataObject::CELL); \n\n"
  "The point data would still contain the single array, but the cell\n"
  "data would be cleared since you did not specify any arrays to pass.\n"
  "Field data would still be untouched.\n\n"
  "@section Note\n\n"
  "vtkPassArrays has been replaced by `vtkPassSelectedArrays`. It is\n"
  "recommended that newer code uses `vtkPassSelectedArrays` instead of\n"
  "this filter. `vtkPassSelectedArrays` uses `vtkDataArraySelection` to\n"
  "select arrays and hence provides a more typical API. `vtkPassArrays`\n"
  "may be deprecated in future releases.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPassArrays_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkPassArrays", // tp_name
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
  PyvtkPassArrays_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPassArrays_StaticNew()
{
  return vtkPassArrays::New();
}

PyObject *PyvtkPassArrays_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPassArrays_Type, PyvtkPassArrays_Methods,
    "vtkPassArrays",
 &PyvtkPassArrays_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPassArrays(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPassArrays_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPassArrays", o) != 0)
  {
    Py_DECREF(o);
  }

}

