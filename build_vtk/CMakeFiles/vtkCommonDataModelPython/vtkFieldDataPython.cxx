// python wrapper for vtkFieldData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFieldData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFieldData(PyObject *dict); }
extern "C" { PyObject *PyvtkFieldData_ClassNew(); }


static PyObject *
PyvtkFieldData_ExtendedNew(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ExtendedNew");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = vtkFieldData::ExtendedNew();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFieldData *tempr = vtkFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFieldData::NewInstance());

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
PyvtkFieldData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFieldData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFieldData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkFieldData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkFieldData::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkFieldData::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_AllocateArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AllocateArrays(temp0);
    }
    else
    {
      op->vtkFieldData::AllocateArrays(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays() :
      op->vtkFieldData::GetNumberOfArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_AddArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AddArray(temp0) :
      op->vtkFieldData::AddArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_NullData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NullData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->NullData(temp0);
    }
    else
    {
      op->vtkFieldData::NullData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_RemoveArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkFieldData::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_RemoveArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveArray(temp0);
    }
    else
    {
      op->vtkFieldData::RemoveArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_RemoveArray_Methods[] = {
  {"RemoveArray", PyvtkFieldData_RemoveArray_s1, METH_VARARGS,
   "@z"},
  {"RemoveArray", PyvtkFieldData_RemoveArray_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_RemoveArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_RemoveArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveArray");
  return nullptr;
}


static PyObject *
PyvtkFieldData_GetArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkFieldData::GetArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0, temp1) :
      op->vtkFieldData::GetArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetArray(temp0) :
      op->vtkFieldData::GetArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetArray_Methods[] = {
  {"GetArray", PyvtkFieldData_GetArray_s1, METH_VARARGS,
   "@i"},
  {"GetArray", PyvtkFieldData_GetArray_s3, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFieldData_GetArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArray");
  return nullptr;
}


static PyObject *
PyvtkFieldData_GetAbstractArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0) :
      op->vtkFieldData::GetAbstractArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0, temp1) :
      op->vtkFieldData::GetAbstractArray(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetAbstractArray_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAbstractArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetAbstractArray(temp0) :
      op->vtkFieldData::GetAbstractArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetAbstractArray_Methods[] = {
  {"GetAbstractArray", PyvtkFieldData_GetAbstractArray_s1, METH_VARARGS,
   "@i"},
  {"GetAbstractArray", PyvtkFieldData_GetAbstractArray_s3, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetAbstractArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetAbstractArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkFieldData_GetAbstractArray_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAbstractArray");
  return nullptr;
}


static PyObject *
PyvtkFieldData_HasArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasArray(temp0) :
      op->vtkFieldData::HasArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkFieldData::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_PassData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->PassData(temp0);
    }
    else
    {
      op->vtkFieldData::PassData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOn(temp0);
    }
    else
    {
      op->vtkFieldData::CopyFieldOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyFieldOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyFieldOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CopyFieldOff(temp0);
    }
    else
    {
      op->vtkFieldData::CopyFieldOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOn(temp0);
    }
    else
    {
      op->vtkFieldData::CopyAllOn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_CopyAllOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAllOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->CopyAllOff(temp0);
    }
    else
    {
      op->vtkFieldData::CopyAllOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkFieldData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkFieldData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkFieldData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkFieldData::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkFieldData::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkFieldData::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFieldData::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  vtkIdList *temp0 = nullptr;
  vtkFieldData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->GetField(temp0, temp1);
    }
    else
    {
      op->vtkFieldData::GetField(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetArrayContainingComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayContainingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayContainingComponent(temp0, temp1) :
      op->vtkFieldData::GetArrayContainingComponent(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkFieldData::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkFieldData::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfTuples(temp0);
    }
    else
    {
      op->vtkFieldData::SetNumberOfTuples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SetTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  long long temp1;
  vtkFieldData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->SetTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldData::SetTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_InsertTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  long long temp1;
  vtkFieldData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkFieldData"))
  {
    if (ap.IsBound())
    {
      op->InsertTuple(temp0, temp1, temp2);
    }
    else
    {
      op->vtkFieldData::InsertTuple(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_InsertNextTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  long long temp0;
  vtkFieldData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkFieldData"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextTuple(temp0, temp1) :
      op->vtkFieldData::InsertNextTuple(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetRange(temp0, temp1, temp2) :
      op->vtkFieldData::GetRange(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetRange(temp0, temp1, temp2) :
      op->vtkFieldData::GetRange(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetRange_Methods[] = {
  {"GetRange", PyvtkFieldData_GetRange_s1, METH_VARARGS,
   "@zP|i *d"},
  {"GetRange", PyvtkFieldData_GetRange_s2, METH_VARARGS,
   "@iP|i *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRange");
  return nullptr;
}


static PyObject *
PyvtkFieldData_GetFiniteRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetFiniteRange(temp0, temp1, temp2) :
      op->vtkFieldData::GetFiniteRange(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFieldData_GetFiniteRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFiniteRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetFiniteRange(temp0, temp1, temp2) :
      op->vtkFieldData::GetFiniteRange(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_GetFiniteRange_Methods[] = {
  {"GetFiniteRange", PyvtkFieldData_GetFiniteRange_s1, METH_VARARGS,
   "@zP|i *d"},
  {"GetFiniteRange", PyvtkFieldData_GetFiniteRange_s2, METH_VARARGS,
   "@iP|i *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFieldData_GetFiniteRange(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFieldData_GetFiniteRange_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetFiniteRange");
  return nullptr;
}


static PyObject *
PyvtkFieldData_GetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetGhostsToSkip() :
      op->vtkFieldData::GetGhostsToSkip());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_SetGhostsToSkip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGhostsToSkip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGhostsToSkip(temp0);
    }
    else
    {
      op->vtkFieldData::SetGhostsToSkip(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_HasAnyGhostBitSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyGhostBitSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyGhostBitSet(temp0) :
      op->vtkFieldData::HasAnyGhostBitSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFieldData_GetGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFieldData *op = static_cast<vtkFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostArray() :
      op->vtkFieldData::GetGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFieldData_Methods[] = {
  {"ExtendedNew", PyvtkFieldData_ExtendedNew, METH_VARARGS,
   "ExtendedNew() -> vtkFieldData\nC++: static vtkFieldData *ExtendedNew()\n\n"},
  {"IsTypeOf", PyvtkFieldData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFieldData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFieldData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFieldData\nC++: static vtkFieldData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFieldData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFieldData\nC++: vtkFieldData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFieldData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFieldData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkFieldData_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nRelease all data but do not delete object. Also, clear the copy\nflags.\n"},
  {"Allocate", PyvtkFieldData_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: vtkTypeBool Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate data for each array. Note that ext is no longer used.\n"},
  {"CopyStructure", PyvtkFieldData_CopyStructure, METH_VARARGS,
   "CopyStructure(self, __a:vtkFieldData) -> None\nC++: void CopyStructure(vtkFieldData *)\n\nCopy data array structure from a given field.  The same arrays\nwill exist with the same types, but will contain nothing in the\ncopy.\n"},
  {"AllocateArrays", PyvtkFieldData_AllocateArrays, METH_VARARGS,
   "AllocateArrays(self, num:int) -> None\nC++: void AllocateArrays(int num)\n\nAllocateArrays actually sets the number of vtkAbstractArray\npointers in the vtkFieldData object, not the number of used\npointers (arrays). Adding more arrays will cause the object to\ndynamically adjust the number of pointers if it needs to extend.\nAlthough AllocateArrays can be used if the number of arrays which\nwill be added is known, it can be omitted with a small\ncomputation cost.\n"},
  {"GetNumberOfArrays", PyvtkFieldData_GetNumberOfArrays, METH_VARARGS,
   "GetNumberOfArrays(self) -> int\nC++: int GetNumberOfArrays()\n\nGet the number of arrays of data available. This does not include\nnullptr array pointers therefore after fd->AllocateArray(n);\nnArrays = GetNumberOfArrays(); nArrays is not necessarily equal\nto n.\n"},
  {"AddArray", PyvtkFieldData_AddArray, METH_VARARGS,
   "AddArray(self, array:vtkAbstractArray) -> int\nC++: int AddArray(vtkAbstractArray *array)\n\nAdd an array to the array list. If an array with the same name\nalready exists - then the added array will replace it. Return the\nindex of the added array. If the given array is nullptr, does\nnothing and returns -1.\n"},
  {"NullData", PyvtkFieldData_NullData, METH_VARARGS,
   "NullData(self, id:int) -> None\nC++: void NullData(vtkIdType id)\n\nSets every vtkDataArray at index id to a null tuple.\n"},
  {"RemoveArray", PyvtkFieldData_RemoveArray, METH_VARARGS,
   "RemoveArray(self, name:str) -> None\nC++: virtual void RemoveArray(const char *name)\nRemoveArray(self, index:int) -> None\nC++: virtual void RemoveArray(int index)\n\nRemove an array (with the given name) from the list of arrays.\n"},
  {"GetArray", PyvtkFieldData_GetArray, METH_VARARGS,
   "GetArray(self, i:int) -> vtkDataArray\nC++: vtkDataArray *GetArray(int i)\nGetArray(self, arrayName:str, index:int) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName, int &index)\nGetArray(self, arrayName:str) -> vtkDataArray\nC++: vtkDataArray *GetArray(const char *arrayName)\n\nNot recommended for use. Use GetAbstractArray(int i) instead.\n\nReturn the ith array in the field. A nullptr is returned if the\nindex i is out of range, or if the array at the given index is\nnot a vtkDataArray. To access vtkStringArray, or vtkVariantArray,\nuse GetAbstractArray(int i).\n"},
  {"GetAbstractArray", PyvtkFieldData_GetAbstractArray, METH_VARARGS,
   "GetAbstractArray(self, i:int) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(int i)\nGetAbstractArray(self, arrayName:str, index:int)\n    -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName,\n    int &index)\nGetAbstractArray(self, arrayName:str) -> vtkAbstractArray\nC++: vtkAbstractArray *GetAbstractArray(const char *arrayName)\n\nReturns the ith array in the field. Unlike GetArray(), this\nmethod returns a vtkAbstractArray and can be used to access any\narray type. A nullptr is returned only if the index i is out of\nrange.\n"},
  {"HasArray", PyvtkFieldData_HasArray, METH_VARARGS,
   "HasArray(self, name:str) -> int\nC++: vtkTypeBool HasArray(const char *name)\n\nReturn 1 if an array with the given name could be found. 0\notherwise.\n"},
  {"GetArrayName", PyvtkFieldData_GetArrayName, METH_VARARGS,
   "GetArrayName(self, i:int) -> str\nC++: const char *GetArrayName(int i)\n\nGet the name of ith array. Note that this is equivalent to:\nGetAbstractArray(i)->GetName() if ith array pointer is not\nnullptr\n"},
  {"PassData", PyvtkFieldData_PassData, METH_VARARGS,
   "PassData(self, fd:vtkFieldData) -> None\nC++: virtual void PassData(vtkFieldData *fd)\n\nPass entire arrays of input data through to output. Obey the\n\"copy\" flags.\n"},
  {"CopyFieldOn", PyvtkFieldData_CopyFieldOn, METH_VARARGS,
   "CopyFieldOn(self, name:str) -> None\nC++: void CopyFieldOn(const char *name)\n\nTurn on/off the copying of the field specified by name. During\nthe copying/passing, the following rules are followed for each\narray:\n1. If the copy flag for an array is set (on or off), it is\n   applied. This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array.\n"},
  {"CopyFieldOff", PyvtkFieldData_CopyFieldOff, METH_VARARGS,
   "CopyFieldOff(self, name:str) -> None\nC++: void CopyFieldOff(const char *name)\n\n"},
  {"CopyAllOn", PyvtkFieldData_CopyAllOn, METH_VARARGS,
   "CopyAllOn(self, unused:int=0) -> None\nC++: virtual void CopyAllOn(int unused=0)\n\nTurn on copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied. This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array.\n"},
  {"CopyAllOff", PyvtkFieldData_CopyAllOff, METH_VARARGS,
   "CopyAllOff(self, unused:int=0) -> None\nC++: virtual void CopyAllOff(int unused=0)\n\nTurn off copying of all data. During the copying/passing, the\nfollowing rules are followed for each array:\n1. If the copy flag for an array is set (on or off), it is\n   applied. This overrides rule 2.\n2. If CopyAllOn is set, copy the array. If CopyAllOff is set, do\n   not copy the array.\n"},
  {"DeepCopy", PyvtkFieldData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, da:vtkFieldData) -> None\nC++: virtual void DeepCopy(vtkFieldData *da)\n\nCopy a field by creating new data arrays (i.e., duplicate\nstorage).\n"},
  {"ShallowCopy", PyvtkFieldData_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, da:vtkFieldData) -> None\nC++: virtual void ShallowCopy(vtkFieldData *da)\n\nCopy a field by reference counting the data arrays.\n"},
  {"Squeeze", PyvtkFieldData_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze()\n\nSqueezes each data array in the field (Squeeze() reclaims unused\nmemory.)\n"},
  {"Reset", PyvtkFieldData_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nResets each data array in the field (Reset() does not release\nmemory but it makes the arrays look like they are empty.)\n"},
  {"GetActualMemorySize", PyvtkFieldData_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: virtual unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this\nfield data. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object.\n"},
  {"GetMTime", PyvtkFieldData_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nCheck object's components for modified times.\n"},
  {"GetField", PyvtkFieldData_GetField, METH_VARARGS,
   "GetField(self, ptId:vtkIdList, f:vtkFieldData) -> None\nC++: void GetField(vtkIdList *ptId, vtkFieldData *f)\n\nGet a field from a list of ids. Supplied field f should have same\ntypes and number of data arrays as this one (i.e., like\nCopyStructure() creates).  This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData).  This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {"GetArrayContainingComponent", PyvtkFieldData_GetArrayContainingComponent, METH_VARARGS,
   "GetArrayContainingComponent(self, i:int, arrayComp:int) -> int\nC++: int GetArrayContainingComponent(int i, int &arrayComp)\n\nReturn the array containing the ith component of the field. The\nreturn value is an integer number n 0<=n<this->NumberOfArrays.\nAlso, an integer value is returned indicating the component in\nthe array is returned. Method returns -1 if specified component\nis not in the field.\n"},
  {"GetNumberOfComponents", PyvtkFieldData_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: int GetNumberOfComponents()\n\nGet the number of components in the field. This is determined by\nadding up the components in each non-nullptr array. This method\nshould not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {"GetNumberOfTuples", PyvtkFieldData_GetNumberOfTuples, METH_VARARGS,
   "GetNumberOfTuples(self) -> int\nC++: vtkIdType GetNumberOfTuples()\n\nGet the number of tuples in the field. Note: some fields have\narrays with different numbers of tuples; this method returns the\nnumber of tuples in the first array. Mixed-length arrays may have\nto be treated specially. This method should not be used if the\ninstance is from a subclass of vtkFieldData (vtkPointData or\nvtkCellData). This is because in those cases, the attribute data\nis stored with the other fields and will cause the method to\nbehave in an unexpected way.\n"},
  {"SetNumberOfTuples", PyvtkFieldData_SetNumberOfTuples, METH_VARARGS,
   "SetNumberOfTuples(self, number:int) -> None\nC++: void SetNumberOfTuples(vtkIdType number)\n\nSet the number of tuples for each data array in the field. This\nmethod should not be used if the instance is from a subclass of\nvtkFieldData (vtkPointData or vtkCellData). This is because in\nthose cases, the attribute data is stored with the other fields\nand will cause the method to behave in an unexpected way.\n"},
  {"SetTuple", PyvtkFieldData_SetTuple, METH_VARARGS,
   "SetTuple(self, i:int, j:int, source:vtkFieldData) -> None\nC++: void SetTuple(vtkIdType i, vtkIdType j, vtkFieldData *source)\n\nSet the jth tuple in source field data at the ith location. Set\noperations mean that no range checking is performed, so they're\nfaster.\n"},
  {"InsertTuple", PyvtkFieldData_InsertTuple, METH_VARARGS,
   "InsertTuple(self, i:int, j:int, source:vtkFieldData) -> None\nC++: void InsertTuple(vtkIdType i, vtkIdType j,\n    vtkFieldData *source)\n\nInsert the jth tuple in source field data at the ith location.\nRange checking is performed and memory allocates as necessary.\n"},
  {"InsertNextTuple", PyvtkFieldData_InsertNextTuple, METH_VARARGS,
   "InsertNextTuple(self, j:int, source:vtkFieldData) -> int\nC++: vtkIdType InsertNextTuple(vtkIdType j, vtkFieldData *source)\n\nInsert the jth tuple in source field data at the end of the tuple\nmatrix. Range checking is performed and memory is allocated as\nnecessary.\n"},
  {"GetRange", PyvtkFieldData_GetRange, METH_VARARGS,
   "GetRange(self, name:str, range:[float, float], comp:int=0) -> bool\nC++: bool GetRange(const char *name, double range[2], int comp=0)\nGetRange(self, index:int, range:[float, float], comp:int=0)\n    -> bool\nC++: bool GetRange(int index, double range[2], int comp=0)\n\nComputes the range of the input data array (specified through its\n`name` or the `index` in this field data). If the targeted array\nis not polymorphic with a `vtkDataArray`, or if no array match\nthe input `name` or `index`, or if `comp` is out of bounds, then\nthe returned range is `[NaN, NaN]`.\n\nThe computed range is cached to avoid recomputing it. The range\nis recomputed if the held array has been modified, if\n`GhostsToSkip` has been changed, or if the ghost array has been\nchanged / modified.\n\nIf a ghost array is present in the field data, then the binary\nmask `GhostsToSkip` is used to skip values associated with a\nghost that intersects this mask.\n\n`comp` targets which component of the array the range is to be\ncomputed on. Setting it to -1 results in computing the range of\nthe magnitude of the array.\n\nThe `Finite` version of this method skips infinite values in the\narray in addition to ghosts matching with `GhostsToSkip`.\n"},
  {"GetFiniteRange", PyvtkFieldData_GetFiniteRange, METH_VARARGS,
   "GetFiniteRange(self, name:str, range:[float, float], comp:int=0)\n    -> bool\nC++: bool GetFiniteRange(const char *name, double range[2],\n    int comp=0)\nGetFiniteRange(self, index:int, range:[float, float], comp:int=0)\n    -> bool\nC++: bool GetFiniteRange(int index, double range[2], int comp=0)\n\n"},
  {"GetGhostsToSkip", PyvtkFieldData_GetGhostsToSkip, METH_VARARGS,
   "GetGhostsToSkip(self) -> int\nC++: virtual unsigned char GetGhostsToSkip()\n\nSet / Get the binary mask filtering out certain types of ghosts\nwhen calling `GetRange`. By default, it is set to 0xff for pure\n`vtkFieldData`. In `vtkCellData`, it is set to `HIDDENCELL` and\nin `vtkPointData`, it is set to `HIDDENPOINT` by default. See\n`vtkDataSetAttributes` for more context on ghost types\ndefinitions.\n\n@sa\nvtkDataSetAttributes vtkPointData vtkCellData\n"},
  {"SetGhostsToSkip", PyvtkFieldData_SetGhostsToSkip, METH_VARARGS,
   "SetGhostsToSkip(self, __a:int) -> None\nC++: virtual void SetGhostsToSkip(unsigned char)\n\n"},
  {"HasAnyGhostBitSet", PyvtkFieldData_HasAnyGhostBitSet, METH_VARARGS,
   "HasAnyGhostBitSet(self, bitFlag:int) -> bool\nC++: bool HasAnyGhostBitSet(int bitFlag)\n\nHelper function that tests if any of the values in ghost array\nhas been set. The test performed is (value & bitFlag).\n"},
  {"GetGhostArray", PyvtkFieldData_GetGhostArray, METH_VARARGS,
   "GetGhostArray(self) -> vtkUnsignedCharArray\nC++: virtual vtkUnsignedCharArray *GetGhostArray()\n\nGet the ghost array, if present in this field data. If no ghost\narray is set, returns `nullptr`. A ghost array is a\n`vtkUnsignedCharArray` called `vtkGhostType`. See\n`vtkDataSetAttributes` for more context on ghost types.\n\n@sa\nvtkDataSetAttributes\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFieldData_Doc =
  "vtkFieldData - represent and manipulate fields of data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFieldData represents and manipulates fields of data. The model of\n"
  "a field is a m x n matrix of data values, where m is the number of\n"
  "tuples, and n is the number of components. (A tuple is a row of n\n"
  "components in the matrix.) The field is assumed to be composed of a\n"
  "set of one or more data arrays, where the data in the arrays are of\n"
  "different types (e.g., int, double, char, etc.), and there may be\n"
  "variable numbers of components in each array. Note that each data\n"
  "array is assumed to be \"m\" in length (i.e., number of tuples), which\n"
  "typically corresponds to the number of points or cells in a dataset.\n"
  "Also, each data array must have a character-string name. (This is\n"
  "used to manipulate data.)\n\n"
  "There are two ways of manipulating and interfacing to fields. You can\n"
  "do it generically by manipulating components/tuples via a double-type\n"
  "data exchange, or you can do it by grabbing the arrays and\n"
  "manipulating them directly. The former is simpler but performs type\n"
  "conversion, which is bad if your data has non-castable types like\n"
  "(void) pointers, or you lose information as a result of the cast. The\n"
  "more efficient method means managing each array in the field.  Using\n"
  "this method you can create faster, more efficient algorithms that do\n"
  "not lose information.\n\n"
  "@sa\n"
  "vtkAbstractArray vtkDataSetAttributes vtkPointData vtkCellData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkFieldData", // tp_name
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
  PyvtkFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFieldData_StaticNew()
{
  return vtkFieldData::New();
}

PyObject *PyvtkFieldData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFieldData_Type, PyvtkFieldData_Methods,
    "vtkFieldData",
 &PyvtkFieldData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

