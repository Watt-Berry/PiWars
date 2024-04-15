// python wrapper for vtkDataArraySelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataArraySelection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataArraySelection(PyObject *dict); }
extern "C" { PyObject *PyvtkDataArraySelection_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkDataArraySelection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataArraySelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataArraySelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataArraySelection *tempr = vtkDataArraySelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArraySelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataArraySelection::NewInstance());

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
PyvtkDataArraySelection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataArraySelection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataArraySelection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_EnableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableArray(temp0);
    }
    else
    {
      op->vtkDataArraySelection::EnableArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableArray(temp0);
    }
    else
    {
      op->vtkDataArraySelection::DisableArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayIsEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayIsEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ArrayIsEnabled(temp0) :
      op->vtkDataArraySelection::ArrayIsEnabled(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_ArrayExists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ArrayExists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->ArrayExists(temp0) :
      op->vtkDataArraySelection::ArrayExists(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_EnableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->EnableAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::EnableAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DisableAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::DisableAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkDataArraySelection::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetNumberOfArraysEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArraysEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArraysEnabled() :
      op->vtkDataArraySelection::GetNumberOfArraysEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkDataArraySelection::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayIndex(temp0) :
      op->vtkDataArraySelection::GetArrayIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetEnabledArrayIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnabledArrayIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnabledArrayIndex(temp0) :
      op->vtkDataArraySelection::GetEnabledArrayIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetArraySetting_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArraySetting(temp0) :
      op->vtkDataArraySelection::GetArraySetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataArraySelection_GetArraySetting_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArraySetting(temp0) :
      op->vtkDataArraySelection::GetArraySetting(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_GetArraySetting_Methods[] = {
  {"GetArraySetting", PyvtkDataArraySelection_GetArraySetting_s1, METH_VARARGS,
   "@i"},
  {"GetArraySetting", PyvtkDataArraySelection_GetArraySetting_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataArraySelection_GetArraySetting(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataArraySelection_GetArraySetting_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArraySetting");
  return nullptr;
}


static PyObject *
PyvtkDataArraySelection_SetArraySetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetArraySetting(temp0, temp1);
    }
    else
    {
      op->vtkDataArraySelection::SetArraySetting(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveAllArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllArrays();
    }
    else
    {
      op->vtkDataArraySelection::RemoveAllArrays();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddArray(temp0, temp1) :
      op->vtkDataArraySelection::AddArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArrayByIndex(temp0);
    }
    else
    {
      op->vtkDataArraySelection::RemoveArrayByIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_RemoveArrayByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArrayByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArrayByName(temp0);
    }
    else
    {
      op->vtkDataArraySelection::RemoveArrayByName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_CopySelections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopySelections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->CopySelections(temp0);
    }
    else
    {
      op->vtkDataArraySelection::CopySelections(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_Union_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->Union(temp0);
    }
    else
    {
      op->vtkDataArraySelection::Union(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArraySelection_Union_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Union");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Union(temp0, temp1);
    }
    else
    {
      op->vtkDataArraySelection::Union(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataArraySelection_Union(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataArraySelection_Union_s1(self, args);
    case 2:
      return PyvtkDataArraySelection_Union_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Union");
  return nullptr;
}


static PyObject *
PyvtkDataArraySelection_SetUnknownArraySetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnknownArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnknownArraySetting(temp0);
    }
    else
    {
      op->vtkDataArraySelection::SetUnknownArraySetting(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_GetUnknownArraySetting(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnknownArraySetting");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUnknownArraySetting() :
      op->vtkDataArraySelection::GetUnknownArraySetting());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataArraySelection::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataArraySelection_IsEqual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsEqual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataArraySelection *op = static_cast<vtkDataArraySelection *>(vp);

  vtkDataArraySelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArraySelection"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsEqual(temp0) :
      op->vtkDataArraySelection::IsEqual(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataArraySelection_Methods[] = {
  {"IsTypeOf", PyvtkDataArraySelection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataArraySelection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataArraySelection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataArraySelection\nC++: static vtkDataArraySelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataArraySelection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataArraySelection\nC++: vtkDataArraySelection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataArraySelection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataArraySelection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EnableArray", PyvtkDataArraySelection_EnableArray, METH_VARARGS,
   "EnableArray(self, name:str) -> None\nC++: void EnableArray(const char *name)\n\nEnable the array with the given name.  Creates a new entry if\nnone exists.\n\nThis method will call `this->Modified()` if the enable state for\nthe array changed.\n"},
  {"DisableArray", PyvtkDataArraySelection_DisableArray, METH_VARARGS,
   "DisableArray(self, name:str) -> None\nC++: void DisableArray(const char *name)\n\nDisable the array with the given name.  Creates a new entry if\nnone exists.\n\nThis method will call `this->Modified()` if the enable state for\nthe array changed.\n"},
  {"ArrayIsEnabled", PyvtkDataArraySelection_ArrayIsEnabled, METH_VARARGS,
   "ArrayIsEnabled(self, name:str) -> int\nC++: int ArrayIsEnabled(const char *name)\n\nReturn whether the array with the given name is enabled.  If\nthere is no entry, the array is assumed to be disabled.\n"},
  {"ArrayExists", PyvtkDataArraySelection_ArrayExists, METH_VARARGS,
   "ArrayExists(self, name:str) -> int\nC++: int ArrayExists(const char *name)\n\nReturn whether the array with the given name exists.\n"},
  {"EnableAllArrays", PyvtkDataArraySelection_EnableAllArrays, METH_VARARGS,
   "EnableAllArrays(self) -> None\nC++: void EnableAllArrays()\n\nEnable all arrays that currently have an entry.\n\nThis method will call `this->Modified()` if the enable state for\nany of the known arrays is changed.\n"},
  {"DisableAllArrays", PyvtkDataArraySelection_DisableAllArrays, METH_VARARGS,
   "DisableAllArrays(self) -> None\nC++: void DisableAllArrays()\n\nDisable all arrays that currently have an entry.\n\nThis method will call `this->Modified()` if the enable state for\nany of the known arrays is changed.\n"},
  {"GetNumberOfArrays", PyvtkDataArraySelection_GetNumberOfArrays, METH_VARARGS,
   "GetNumberOfArrays(self) -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays that currently have an entry.\n"},
  {"GetNumberOfArraysEnabled", PyvtkDataArraySelection_GetNumberOfArraysEnabled, METH_VARARGS,
   "GetNumberOfArraysEnabled(self) -> int\nC++: int GetNumberOfArraysEnabled()\n\nGet the number of arrays that are enabled.\n"},
  {"GetArrayName", PyvtkDataArraySelection_GetArrayName, METH_VARARGS,
   "GetArrayName(self, index:int) -> str\nC++: const char *GetArrayName(int index)\n\nGet the name of the array entry at the given index.\n"},
  {"GetArrayIndex", PyvtkDataArraySelection_GetArrayIndex, METH_VARARGS,
   "GetArrayIndex(self, name:str) -> int\nC++: int GetArrayIndex(const char *name)\n\nGet an index of the array with the given name.\n"},
  {"GetEnabledArrayIndex", PyvtkDataArraySelection_GetEnabledArrayIndex, METH_VARARGS,
   "GetEnabledArrayIndex(self, name:str) -> int\nC++: int GetEnabledArrayIndex(const char *name)\n\nGet the index of an array with the given name among those that\nare enabled.  Returns -1 if the array is not enabled.\n"},
  {"GetArraySetting", PyvtkDataArraySelection_GetArraySetting, METH_VARARGS,
   "GetArraySetting(self, index:int) -> int\nC++: int GetArraySetting(int index)\nGetArraySetting(self, name:str) -> int\nC++: int GetArraySetting(const char *name)\n\nGet whether the array at the given index is enabled.\n"},
  {"SetArraySetting", PyvtkDataArraySelection_SetArraySetting, METH_VARARGS,
   "SetArraySetting(self, name:str, setting:int) -> None\nC++: void SetArraySetting(const char *name, int setting)\n\nSet array setting given the name. If the array doesn't exist, it\nwill be added.\n\nThis method will call `this->Modified()` if the enable state for\nthe array changed.\n"},
  {"RemoveAllArrays", PyvtkDataArraySelection_RemoveAllArrays, METH_VARARGS,
   "RemoveAllArrays(self) -> None\nC++: void RemoveAllArrays()\n\nRemove all array entries.\n\nThis method will call `this->Modified()` if the arrays were\ncleared.\n"},
  {"AddArray", PyvtkDataArraySelection_AddArray, METH_VARARGS,
   "AddArray(self, name:str, state:bool=True) -> int\nC++: int AddArray(const char *name, bool state=true)\n\nAdd to the list of arrays that have entries.  For arrays that\nalready have entries, the settings are untouched.  For arrays\nthat don't already have an entry, they are assumed to be enabled\nby default. The state can also be passed as the second argument.\nThis method should be called only by the filter owning this\nobject.\n\nThis method **does not** call `this->Modified()`.\n\nAlso note for arrays already known to this instance (i.e.\n`this->ArrayExists(name) == true`, this method has no effect.\n"},
  {"RemoveArrayByIndex", PyvtkDataArraySelection_RemoveArrayByIndex, METH_VARARGS,
   "RemoveArrayByIndex(self, index:int) -> None\nC++: void RemoveArrayByIndex(int index)\n\nRemove an array setting given its index.\n\nThis method **does not** call `this->Modified()`.\n"},
  {"RemoveArrayByName", PyvtkDataArraySelection_RemoveArrayByName, METH_VARARGS,
   "RemoveArrayByName(self, name:str) -> None\nC++: void RemoveArrayByName(const char *name)\n\nRemove an array setting given its name.\n\nThis method **does not** call `this->Modified()`.\n"},
  {"CopySelections", PyvtkDataArraySelection_CopySelections, METH_VARARGS,
   "CopySelections(self, selections:vtkDataArraySelection) -> None\nC++: void CopySelections(vtkDataArraySelection *selections)\n\nCopy the selections from the given vtkDataArraySelection\ninstance.\n\nThis method will call `this->Modified()` if the array selections\nchanged.\n"},
  {"Union", PyvtkDataArraySelection_Union, METH_VARARGS,
   "Union(self, other:vtkDataArraySelection) -> None\nC++: void Union(vtkDataArraySelection *other)\nUnion(self, other:vtkDataArraySelection, skipModified:bool)\n    -> None\nC++: void Union(vtkDataArraySelection *other, bool skipModified)\n\nUpdate `this` to include values from `other`. For arrays that\ndon't exist in `this` but exist in `other`, they will get added\nto `this` with the same array setting as in `other`. Array\nsettings for arrays already in `this` are left unchanged.\n\nThis method will call `this->Modified()` if the array selections\nchanged unless skipModified is set to true (default is false).\n"},
  {"SetUnknownArraySetting", PyvtkDataArraySelection_SetUnknownArraySetting, METH_VARARGS,
   "SetUnknownArraySetting(self, _arg:int) -> None\nC++: virtual void SetUnknownArraySetting(int _arg)\n\nGet/Set enabled state for any unknown arrays. Default is 0 i.e.\nnot enabled. When set to 1, `ArrayIsEnabled` will return 1 for\nany array not explicitly specified.\n"},
  {"GetUnknownArraySetting", PyvtkDataArraySelection_GetUnknownArraySetting, METH_VARARGS,
   "GetUnknownArraySetting(self) -> int\nC++: virtual int GetUnknownArraySetting()\n\n"},
  {"DeepCopy", PyvtkDataArraySelection_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkDataArraySelection) -> None\nC++: void DeepCopy(const vtkDataArraySelection *other)\n\nCopy contents of other. The MTime for this instance is modified\nonly if values are different.\n"},
  {"IsEqual", PyvtkDataArraySelection_IsEqual, METH_VARARGS,
   "IsEqual(self, other:vtkDataArraySelection) -> bool\nC++: bool IsEqual(const vtkDataArraySelection *other)\n\nReturns true if the two array selections are equivalent.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataArraySelection_Doc =
  "vtkDataArraySelection - Store on/off settings for data arrays, etc.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataArraySelection is intended to be used by algorithms that want\n"
  "to expose a API that allow the user to enable/disable a collection of\n"
  "entities, such as arrays. Readers, for example, can use\n"
  "vtkDataArraySelection to let the user choose which array to read from\n"
  "the file.\n\n"
  "Originally intended for selecting data arrays (hence the name), this\n"
  "class can be used for letting users choose other items too, for\n"
  "example, vtkIOSSReader uses vtkDataArraySelection to let users choose\n"
  "which blocks to read.\n\n"
  "Unlike most other vtkObject subclasses, vtkDataArraySelection has\n"
  "public API that need not modify the MTime for the object. These\n"
  "M-Time non-modifying methods are typically intended for use within\n"
  "the algorithm or reader to populate the vtkDataArraySelection\n"
  "instance with available array names and their default values.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataArraySelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkDataArraySelection", // tp_name
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
  PyvtkDataArraySelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataArraySelection_StaticNew()
{
  return vtkDataArraySelection::New();
}

PyObject *PyvtkDataArraySelection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataArraySelection_Type, PyvtkDataArraySelection_Methods,
    "vtkDataArraySelection",
 &PyvtkDataArraySelection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataArraySelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataArraySelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataArraySelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

