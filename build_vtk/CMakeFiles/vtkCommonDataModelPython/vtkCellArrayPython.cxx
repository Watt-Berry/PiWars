// python wrapper for vtkCellArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellArray(PyObject *dict); }
extern "C" { PyObject *PyvtkCellArray_ClassNew(); }


static PyObject *
PyvtkCellArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellArray *tempr = vtkCellArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellArray::NewInstance());

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
PyvtkCellArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellArray::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_AllocateEstimate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateEstimate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateEstimate(temp0, temp1) :
      op->vtkCellArray::AllocateEstimate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_AllocateExact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateExact(temp0, temp1) :
      op->vtkCellArray::AllocateExact(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_AllocateCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->AllocateCopy(temp0) :
      op->vtkCellArray::AllocateCopy(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ResizeExact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResizeExact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->ResizeExact(temp0, temp1) :
      op->vtkCellArray::ResizeExact(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellArray::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellArray::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellArray::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_IsValid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsValid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsValid() :
      op->vtkCellArray::IsValid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellArray::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfOffsets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOffsets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfOffsets() :
      op->vtkCellArray::GetNumberOfOffsets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetOffset(temp0) :
      op->vtkCellArray::GetOffset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfConnectivityIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfConnectivityIds() :
      op->vtkCellArray::GetNumberOfConnectivityIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_NewIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellArrayIterator *tempr = (ap.IsBound() ?
      op->NewIterator() :
      op->vtkCellArray::NewIterator());

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
PyvtkCellArray_SetData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkAOSDataArrayTemplate<int> *temp0 = nullptr;
  vtkAOSDataArrayTemplate<int> *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, typeid(vtkAOSDataArrayTemplate<int>).name()) &&
      ap.GetVTKObject(temp1, typeid(vtkAOSDataArrayTemplate<int>).name()))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkAOSDataArrayTemplate<long> *temp0 = nullptr;
  vtkAOSDataArrayTemplate<long> *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, typeid(vtkAOSDataArrayTemplate<long>).name()) &&
      ap.GetVTKObject(temp1, typeid(vtkAOSDataArrayTemplate<long>).name()))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkAOSDataArrayTemplate<long long> *temp0 = nullptr;
  vtkAOSDataArrayTemplate<long long> *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, typeid(vtkAOSDataArrayTemplate<long long>).name()) &&
      ap.GetVTKObject(temp1, typeid(vtkAOSDataArrayTemplate<long long>).name()))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkTypeInt32Array *temp0 = nullptr;
  vtkTypeInt32Array *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTypeInt32Array") &&
      ap.GetVTKObject(temp1, "vtkTypeInt32Array"))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkTypeInt64Array *temp0 = nullptr;
  vtkTypeInt64Array *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTypeInt64Array") &&
      ap.GetVTKObject(temp1, "vtkTypeInt64Array"))
  {
    if (ap.IsBound())
    {
      op->SetData(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetData(temp0, temp1) :
      op->vtkCellArray::SetData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_SetData_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetData(temp0, temp1) :
      op->vtkCellArray::SetData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_SetData_Methods[] = {
  {"SetData", PyvtkCellArray_SetData_s1, METH_VARARGS,
   "@VV *vtkIdTypeArray *vtkIdTypeArray"},
  {"SetData", PyvtkCellArray_SetData_s2, METH_VARARGS,
   "@VV *vtkAOSDataArrayTemplate_IiE *vtkAOSDataArrayTemplate_IiE"},
  {"SetData", PyvtkCellArray_SetData_s3, METH_VARARGS,
   "@VV *vtkAOSDataArrayTemplate_IlE *vtkAOSDataArrayTemplate_IlE"},
  {"SetData", PyvtkCellArray_SetData_s4, METH_VARARGS,
   "@VV *vtkAOSDataArrayTemplate_IxE *vtkAOSDataArrayTemplate_IxE"},
  {"SetData", PyvtkCellArray_SetData_s5, METH_VARARGS,
   "@VV *vtkTypeInt32Array *vtkTypeInt32Array"},
  {"SetData", PyvtkCellArray_SetData_s6, METH_VARARGS,
   "@VV *vtkTypeInt64Array *vtkTypeInt64Array"},
  {"SetData", PyvtkCellArray_SetData_s7, METH_VARARGS,
   "@VV *vtkDataArray *vtkDataArray"},
  {"SetData", PyvtkCellArray_SetData_s8, METH_VARARGS,
   "@kV *vtkDataArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellArray_SetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellArray_SetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetData");
  return nullptr;
}


static PyObject *
PyvtkCellArray_IsStorage64Bit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStorage64Bit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStorage64Bit() :
      op->vtkCellArray::IsStorage64Bit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_IsStorageShareable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsStorageShareable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsStorageShareable() :
      op->vtkCellArray::IsStorageShareable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Use32BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use32BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use32BitStorage();
    }
    else
    {
      op->vtkCellArray::Use32BitStorage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Use64BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Use64BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Use64BitStorage();
    }
    else
    {
      op->vtkCellArray::Use64BitStorage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_UseDefaultStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDefaultStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDefaultStorage();
    }
    else
    {
      op->vtkCellArray::UseDefaultStorage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_CanConvertTo32BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanConvertTo32BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanConvertTo32BitStorage() :
      op->vtkCellArray::CanConvertTo32BitStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_CanConvertTo64BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanConvertTo64BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanConvertTo64BitStorage() :
      op->vtkCellArray::CanConvertTo64BitStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_CanConvertToDefaultStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanConvertToDefaultStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanConvertToDefaultStorage() :
      op->vtkCellArray::CanConvertToDefaultStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ConvertTo32BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertTo32BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ConvertTo32BitStorage() :
      op->vtkCellArray::ConvertTo32BitStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ConvertTo64BitStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertTo64BitStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ConvertTo64BitStorage() :
      op->vtkCellArray::ConvertTo64BitStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ConvertToDefaultStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToDefaultStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ConvertToDefaultStorage() :
      op->vtkCellArray::ConvertToDefaultStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ConvertToSmallestStorage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToSmallestStorage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->ConvertToSmallestStorage() :
      op->vtkCellArray::ConvertToSmallestStorage());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetOffsetsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetOffsetsArray() :
      op->vtkCellArray::GetOffsetsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetOffsetsArray32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetsArray32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetOffsetsArray32() :
      op->vtkCellArray::GetOffsetsArray32());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetOffsetsArray64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOffsetsArray64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt64Array *tempr = (ap.IsBound() ?
      op->GetOffsetsArray64() :
      op->vtkCellArray::GetOffsetsArray64());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetConnectivityArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectivityArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetConnectivityArray() :
      op->vtkCellArray::GetConnectivityArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetConnectivityArray32(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectivityArray32");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = (ap.IsBound() ?
      op->GetConnectivityArray32() :
      op->vtkCellArray::GetConnectivityArray32());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetConnectivityArray64(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConnectivityArray64");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTypeInt64Array *tempr = (ap.IsBound() ?
      op->GetConnectivityArray64() :
      op->vtkCellArray::GetConnectivityArray64());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->IsHomogeneous() :
      op->vtkCellArray::IsHomogeneous());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitTraversal();
    }
    else
    {
      op->vtkCellArray::InitTraversal();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextCell(temp0, temp1c) :
      op->vtkCellArray::GetNextCell(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextCell(temp0) :
      op->vtkCellArray::GetNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArray_GetNextCell_s1(self, args);
    case 1:
      return PyvtkCellArray_GetNextCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNextCell");
  return nullptr;
}


static PyObject *
PyvtkCellArray_GetCellAtId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkCellArray::GetCellAtId(temp0, temp1, temp2c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCellAtId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1, temp2c, temp3);
    }
    else
    {
      op->vtkCellArray::GetCellAtId(temp0, temp1, temp2c, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCellAtId_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->GetCellAtId(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::GetCellAtId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCellAtId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellArray_GetCellAtId_s1(self, args);
    case 4:
      return PyvtkCellArray_GetCellAtId_s2(self, args);
    case 2:
      return PyvtkCellArray_GetCellAtId_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellAtId");
  return nullptr;
}


static PyObject *
PyvtkCellArray_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkCellArray::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckSizeHint(1, size1, temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellArray::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_InsertNextCell_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0) :
      op->vtkCellArray::InsertNextCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_InsertNextCell_Methods[] = {
  {"InsertNextCell", PyvtkCellArray_InsertNextCell_s1, METH_VARARGS,
   "@V *vtkCell"},
  {"InsertNextCell", PyvtkCellArray_InsertNextCell_s3, METH_VARARGS,
   "@V *vtkIdList"},
  {"InsertNextCell", PyvtkCellArray_InsertNextCell_s4, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellArray_InsertNextCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellArray_InsertNextCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArray_InsertNextCell_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}


static PyObject *
PyvtkCellArray_InsertCellPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCellPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InsertCellPoint(temp0);
    }
    else
    {
      op->vtkCellArray::InsertCellPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_UpdateCellCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCellCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->UpdateCellCount(temp0);
    }
    else
    {
      op->vtkCellArray::UpdateCellCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetTraversalCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTraversalCellId() :
      op->vtkCellArray::GetTraversalCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SetTraversalCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversalCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTraversalCellId(temp0);
    }
    else
    {
      op->vtkCellArray::SetTraversalCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReverseCellAtId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->ReverseCellAtId(temp0);
    }
    else
    {
      op->vtkCellArray::ReverseCellAtId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReplaceCellAtId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellAtId(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::ReplaceCellAtId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_ReplaceCellAtId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfCells()),
                      "0 <= cellId && cellId < GetNumberOfCells()"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellAtId(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::ReplaceCellAtId(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_ReplaceCellAtId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellArray_ReplaceCellAtId_s1(self, args);
    case 3:
      return PyvtkCellArray_ReplaceCellAtId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ReplaceCellAtId");
  return nullptr;
}


static PyObject *
PyvtkCellArray_ReplaceCellPointAtId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCellPointAtId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ReplaceCellPointAtId(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::ReplaceCellPointAtId(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellSize() :
      op->vtkCellArray::GetMaxCellSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellArray::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellArray"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCellArray::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_Append(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkCellArray *temp0 = nullptr;
  long long temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkCellArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ExportLegacyFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportLegacyFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->ExportLegacyFormat(temp0);
    }
    else
    {
      op->vtkCellArray::ExportLegacyFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ImportLegacyFormat_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImportLegacyFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->ImportLegacyFormat(temp0);
    }
    else
    {
      op->vtkCellArray::ImportLegacyFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_ImportLegacyFormat_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImportLegacyFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.CheckSizeHint(0, size0, temp1))
  {
    if (ap.IsBound())
    {
      op->ImportLegacyFormat(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::ImportLegacyFormat(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_ImportLegacyFormat(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellArray_ImportLegacyFormat_s1(self, args);
    case 2:
      return PyvtkCellArray_ImportLegacyFormat_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ImportLegacyFormat");
  return nullptr;
}


static PyObject *
PyvtkCellArray_AppendLegacyFormat_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendLegacyFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  long long temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AppendLegacyFormat(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::AppendLegacyFormat(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_AppendLegacyFormat_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendLegacyFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  long long temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      ap.CheckSizeHint(0, size0, temp1))
  {
    if (ap.IsBound())
    {
      op->AppendLegacyFormat(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::AppendLegacyFormat(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_AppendLegacyFormat_Methods[] = {
  {"AppendLegacyFormat", PyvtkCellArray_AppendLegacyFormat_s1, METH_VARARGS,
   "@V|k *vtkIdTypeArray"},
  {"AppendLegacyFormat", PyvtkCellArray_AppendLegacyFormat_s2, METH_VARARGS,
   "@Pk|k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellArray_AppendLegacyFormat(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellArray_AppendLegacyFormat_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellArray_AppendLegacyFormat_s1(self, args);
    case 3:
      return PyvtkCellArray_AppendLegacyFormat_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AppendLegacyFormat");
  return nullptr;
}


static PyObject *
PyvtkCellArray_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellArray::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCells(temp0);
    }
    else
    {
      op->vtkCellArray::SetNumberOfCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_EstimateSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EstimateSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->EstimateSize(temp0, temp1) :
      op->vtkCellArray::EstimateSize(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkCellArray::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetNumberOfConnectivityEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfConnectivityEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfConnectivityEntries() :
      op->vtkCellArray::GetNumberOfConnectivityEntries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfConnectivityEntries()),
                      "0 <= loc && loc < GetNumberOfConnectivityEntries()"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1, temp2c);
    }
    else
    {
      op->vtkCellArray::GetCell(temp0, temp1, temp2c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfConnectivityEntries()),
                      "0 <= loc && loc < GetNumberOfConnectivityEntries()"))
  {
    if (ap.IsBound())
    {
      op->GetCell(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::GetCell(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCellArray_GetCell_s1(self, args);
    case 2:
      return PyvtkCellArray_GetCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkCellArray_GetInsertLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInsertLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetInsertLocation(temp0) :
      op->vtkCellArray::GetInsertLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetTraversalLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTraversalLocation() :
      op->vtkCellArray::GetTraversalLocation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTraversalLocation(temp0) :
      op->vtkCellArray::GetTraversalLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellArray_GetTraversalLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCellArray_GetTraversalLocation_s1(self, args);
    case 1:
      return PyvtkCellArray_GetTraversalLocation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTraversalLocation");
  return nullptr;
}


static PyObject *
PyvtkCellArray_SetTraversalLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTraversalLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTraversalLocation(temp0);
    }
    else
    {
      op->vtkCellArray::SetTraversalLocation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReverseCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfConnectivityEntries()),
                      "0 <= loc && loc < GetNumberOfConnectivityEntries()"))
  {
    if (ap.IsBound())
    {
      op->ReverseCell(temp0);
    }
    else
    {
      op->vtkCellArray::ReverseCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfConnectivityEntries()),
                      "0 <= loc && loc < GetNumberOfConnectivityEntries()"))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellArray::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_SetCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  long long temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCells(temp0, temp1);
    }
    else
    {
      op->vtkCellArray::SetCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellArray_GetData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellArray *op = static_cast<vtkCellArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetData() :
      op->vtkCellArray::GetData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellArray_Methods[] = {
  {"IsTypeOf", PyvtkCellArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellArray\nC++: static vtkCellArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellArray\nC++: vtkCellArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkCellArray_Allocate, METH_VARARGS,
   "Allocate(self, sz:int, ext:int=1000) -> int\nC++: vtkTypeBool Allocate(vtkIdType sz, vtkIdType ext=1000)\n\nAllocate memory.\n\nThis currently allocates both the offsets and connectivity arrays\nto sz.\n\note It is preferable to use AllocateEstimate(numCells,\nmaxCellSize) or AllocateExact(numCells, connectivitySize)\ninstead.\n"},
  {"AllocateEstimate", PyvtkCellArray_AllocateEstimate, METH_VARARGS,
   "AllocateEstimate(self, numCells:int, maxCellSize:int) -> bool\nC++: bool AllocateEstimate(vtkIdType numCells,\n    vtkIdType maxCellSize)\n\nPre-allocate memory in internal data structures. Does not change\nthe number of cells, only the array capacities. Existing data is\nNOT preserved.\n@param numCells The number of expected cells in the dataset.\n@param maxCellSize The number of points per cell to allocate\n    memory for.\n@return True if allocation succeeds.\n@sa Squeeze AllocateExact AllocateCopy\n"},
  {"AllocateExact", PyvtkCellArray_AllocateExact, METH_VARARGS,
   "AllocateExact(self, numCells:int, connectivitySize:int) -> bool\nC++: bool AllocateExact(vtkIdType numCells,\n    vtkIdType connectivitySize)\n\nPre-allocate memory in internal data structures. Does not change\nthe number of cells, only the array capacities. Existing data is\nNOT preserved.\n@param numCells The number of expected cells in the dataset.\n@param connectivitySize The total number of pointIds stored for\n    all cells.\n@return True if allocation succeeds.\n@sa Squeeze AllocateEstimate AllocateCopy\n"},
  {"AllocateCopy", PyvtkCellArray_AllocateCopy, METH_VARARGS,
   "AllocateCopy(self, other:vtkCellArray) -> bool\nC++: bool AllocateCopy(vtkCellArray *other)\n\nPre-allocate memory in internal data structures to match the used\nsize of the input vtkCellArray. Does not change the number of\ncells, only the array capacities. Existing data is NOT preserved.\n@param other The vtkCellArray to use as a reference.\n@return True if allocation succeeds.\n@sa Squeeze AllocateEstimate AllocateExact\n"},
  {"ResizeExact", PyvtkCellArray_ResizeExact, METH_VARARGS,
   "ResizeExact(self, numCells:int, connectivitySize:int) -> bool\nC++: bool ResizeExact(vtkIdType numCells,\n    vtkIdType connectivitySize)\n\nResizeExact() resizes the internal structures to hold numCells\ntotal cell offsets and connectivitySize total pointIds. Old data\nis preserved, and newly-available memory is not initialized.\n\n@warning For advanced use only. You probably want an Allocate\n    method.\n\n@return True if allocation succeeds.\n"},
  {"Initialize", PyvtkCellArray_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nFree any memory and reset to an empty state.\n"},
  {"Reset", PyvtkCellArray_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nReuse list. Reset to initial state without freeing memory.\n"},
  {"Squeeze", PyvtkCellArray_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze()\n\nReclaim any extra memory while preserving data.\n\n@sa ConvertToSmallestStorage\n"},
  {"IsValid", PyvtkCellArray_IsValid, METH_VARARGS,
   "IsValid(self) -> bool\nC++: bool IsValid()\n\nCheck that internal storage is consistent and in a valid state.\n\nSpecifically, this function returns true if and only if:\n- The offset and connectivity arrays have exactly one component.\n- The offset array has at least one value and starts at 0.\n- The offset array values never decrease.\n- The connectivity array has as many entries as the last value in\nthe offset array.\n"},
  {"GetNumberOfCells", PyvtkCellArray_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\nGet the number of cells in the array.\n"},
  {"GetNumberOfOffsets", PyvtkCellArray_GetNumberOfOffsets, METH_VARARGS,
   "GetNumberOfOffsets(self) -> int\nC++: vtkIdType GetNumberOfOffsets()\n\nGet the number of elements in the offsets array. This will be the\nnumber of cells + 1.\n"},
  {"GetOffset", PyvtkCellArray_GetOffset, METH_VARARGS,
   "GetOffset(self, cellId:int) -> int\nC++: vtkIdType GetOffset(vtkIdType cellId)\n\nGet the offset (into the connectivity) for a specified cell id.\n"},
  {"GetNumberOfConnectivityIds", PyvtkCellArray_GetNumberOfConnectivityIds, METH_VARARGS,
   "GetNumberOfConnectivityIds(self) -> int\nC++: vtkIdType GetNumberOfConnectivityIds()\n\nGet the size of the connectivity array that stores the point ids.\n\note Do not confuse this with the deprecated\nGetNumberOfConnectivityEntries(), which refers to the legacy\nmemory layout.\n"},
  {"NewIterator", PyvtkCellArray_NewIterator, METH_VARARGS,
   "NewIterator(self) -> vtkCellArrayIterator\nC++: vtkCellArrayIterator *NewIterator()\n\nNewIterator returns a new instance of vtkCellArrayIterator that\nis initialized to point at the first cell's data. The caller is\nresponsible for Delete()'ing the object.\n"},
  {"SetData", PyvtkCellArray_SetData, METH_VARARGS,
   "SetData(self, offsets:vtkIdTypeArray, connectivity:vtkIdTypeArray)\n     -> None\nC++: void SetData(vtkIdTypeArray *offsets,\n    vtkIdTypeArray *connectivity)\nSetData(self, offsets:vtkAOSDataArrayTemplate_IiE,\n    connectivity:vtkAOSDataArrayTemplate_IiE) -> None\nC++: void SetData(vtkAOSDataArrayTemplate<int> *offsets,\n    vtkAOSDataArrayTemplate<int> *connectivity)\nSetData(self, offsets:vtkAOSDataArrayTemplate_IlE,\n    connectivity:vtkAOSDataArrayTemplate_IlE) -> None\nC++: void SetData(vtkAOSDataArrayTemplate<long> *offsets,\n    vtkAOSDataArrayTemplate<long> *connectivity)\nSetData(self, offsets:vtkAOSDataArrayTemplate_IxE,\n    connectivity:vtkAOSDataArrayTemplate_IxE) -> None\nC++: void SetData(vtkAOSDataArrayTemplate<long long> *offsets,\n    vtkAOSDataArrayTemplate<long long> *connectivity)\nSetData(self, offsets:vtkTypeInt32Array,\n    connectivity:vtkTypeInt32Array) -> None\nC++: void SetData(vtkTypeInt32Array *offsets,\n    vtkTypeInt32Array *connectivity)\nSetData(self, offsets:vtkTypeInt64Array,\n    connectivity:vtkTypeInt64Array) -> None\nC++: void SetData(vtkTypeInt64Array *offsets,\n    vtkTypeInt64Array *connectivity)\nSetData(self, offsets:vtkDataArray, connectivity:vtkDataArray)\n    -> bool\nC++: bool SetData(vtkDataArray *offsets,\n    vtkDataArray *connectivity)\nSetData(self, cellSize:int, connectivity:vtkDataArray) -> bool\nC++: bool SetData(vtkIdType cellSize, vtkDataArray *connectivity)\n\n"},
  {"IsStorage64Bit", PyvtkCellArray_IsStorage64Bit, METH_VARARGS,
   "IsStorage64Bit(self) -> bool\nC++: bool IsStorage64Bit()\n\n@return True if the internal storage is using 64 bit arrays. If\n    false,\nthe storage is using 32 bit arrays.\n"},
  {"IsStorageShareable", PyvtkCellArray_IsStorageShareable, METH_VARARGS,
   "IsStorageShareable(self) -> bool\nC++: bool IsStorageShareable()\n\n@return True if the internal storage can be shared as a\npointer to vtkIdType, i.e., the type and organization of internal\nstorage is such that copying of data can be avoided, and instead\na pointer to vtkIdType can be used.\n"},
  {"Use32BitStorage", PyvtkCellArray_Use32BitStorage, METH_VARARGS,
   "Use32BitStorage(self) -> None\nC++: void Use32BitStorage()\n\n"},
  {"Use64BitStorage", PyvtkCellArray_Use64BitStorage, METH_VARARGS,
   "Use64BitStorage(self) -> None\nC++: void Use64BitStorage()\n\n"},
  {"UseDefaultStorage", PyvtkCellArray_UseDefaultStorage, METH_VARARGS,
   "UseDefaultStorage(self) -> None\nC++: void UseDefaultStorage()\n\n"},
  {"CanConvertTo32BitStorage", PyvtkCellArray_CanConvertTo32BitStorage, METH_VARARGS,
   "CanConvertTo32BitStorage(self) -> bool\nC++: bool CanConvertTo32BitStorage()\n\n"},
  {"CanConvertTo64BitStorage", PyvtkCellArray_CanConvertTo64BitStorage, METH_VARARGS,
   "CanConvertTo64BitStorage(self) -> bool\nC++: bool CanConvertTo64BitStorage()\n\n"},
  {"CanConvertToDefaultStorage", PyvtkCellArray_CanConvertToDefaultStorage, METH_VARARGS,
   "CanConvertToDefaultStorage(self) -> bool\nC++: bool CanConvertToDefaultStorage()\n\n"},
  {"ConvertTo32BitStorage", PyvtkCellArray_ConvertTo32BitStorage, METH_VARARGS,
   "ConvertTo32BitStorage(self) -> bool\nC++: bool ConvertTo32BitStorage()\n\n"},
  {"ConvertTo64BitStorage", PyvtkCellArray_ConvertTo64BitStorage, METH_VARARGS,
   "ConvertTo64BitStorage(self) -> bool\nC++: bool ConvertTo64BitStorage()\n\n"},
  {"ConvertToDefaultStorage", PyvtkCellArray_ConvertToDefaultStorage, METH_VARARGS,
   "ConvertToDefaultStorage(self) -> bool\nC++: bool ConvertToDefaultStorage()\n\n"},
  {"ConvertToSmallestStorage", PyvtkCellArray_ConvertToSmallestStorage, METH_VARARGS,
   "ConvertToSmallestStorage(self) -> bool\nC++: bool ConvertToSmallestStorage()\n\n"},
  {"GetOffsetsArray", PyvtkCellArray_GetOffsetsArray, METH_VARARGS,
   "GetOffsetsArray(self) -> vtkDataArray\nC++: vtkDataArray *GetOffsetsArray()\n\n"},
  {"GetOffsetsArray32", PyvtkCellArray_GetOffsetsArray32, METH_VARARGS,
   "GetOffsetsArray32(self) -> vtkTypeInt32Array\nC++: ArrayType32 *GetOffsetsArray32()\n\n"},
  {"GetOffsetsArray64", PyvtkCellArray_GetOffsetsArray64, METH_VARARGS,
   "GetOffsetsArray64(self) -> vtkTypeInt64Array\nC++: ArrayType64 *GetOffsetsArray64()\n\n"},
  {"GetConnectivityArray", PyvtkCellArray_GetConnectivityArray, METH_VARARGS,
   "GetConnectivityArray(self) -> vtkDataArray\nC++: vtkDataArray *GetConnectivityArray()\n\n"},
  {"GetConnectivityArray32", PyvtkCellArray_GetConnectivityArray32, METH_VARARGS,
   "GetConnectivityArray32(self) -> vtkTypeInt32Array\nC++: ArrayType32 *GetConnectivityArray32()\n\n"},
  {"GetConnectivityArray64", PyvtkCellArray_GetConnectivityArray64, METH_VARARGS,
   "GetConnectivityArray64(self) -> vtkTypeInt64Array\nC++: ArrayType64 *GetConnectivityArray64()\n\n"},
  {"IsHomogeneous", PyvtkCellArray_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: vtkIdType IsHomogeneous()\n\nCheck if all cells have the same number of vertices.\n\nThe return value is coded as:\n* -1 = heterogeneous\n* 0 = Cell array empty\n* n (positive integer) = homogeneous array of cell size n\n"},
  {"InitTraversal", PyvtkCellArray_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: void InitTraversal()\n\n@warning This method is not thread-safe. Consider using the\n    NewIterator()\niterator instead.\n\nInitTraversal() initializes the traversal of the list of cells.\n\note This method is not thread-safe and has tricky syntax to use\ncorrectly. Prefer the use of vtkCellArrayIterator (see\nNewIterator()).\n"},
  {"GetNextCell", PyvtkCellArray_GetNextCell, METH_VARARGS,
   "GetNextCell(self, npts:int, pts:(int, ...)) -> int\nC++: int GetNextCell(vtkIdType &npts, vtkIdType const *&pts)\nGetNextCell(self, pts:vtkIdList) -> int\nC++: int GetNextCell(vtkIdList *pts)\n\n@warning This method is not thread-safe. Consider using the\n    NewIterator()\niterator instead.\n\nGetNextCell() gets the next cell in the list. If end of list is\nencountered, 0 is returned. A value of 1 is returned whenever\nnpts and pts have been updated without error.\n\nDo not modify the returned pts pointer, as it may point to shared\nmemory.\n\note This method is not thread-safe and has tricky syntax to use\ncorrectly. Prefer the use of vtkCellArrayIterator (see\nNewIterator()).\n"},
  {"GetCellAtId", PyvtkCellArray_GetCellAtId, METH_VARARGS,
   "GetCellAtId(self, cellId:int, cellSize:int, cellPoints:(int, ...))\n     -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &cellSize,\n    vtkIdType const *&cellPoints)\nGetCellAtId(self, cellId:int, cellSize:int, cellPoints:(int, ...),\n     ptIds:vtkIdList) -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdType &cellSize,\n    vtkIdType const *&cellPoints, vtkIdList *ptIds)\nGetCellAtId(self, cellId:int, pts:vtkIdList) -> None\nC++: void GetCellAtId(vtkIdType cellId, vtkIdList *pts)\n\nReturn the point ids for the cell at cellId.\n\n@warning Subsequent calls to this method may invalidate previous\n    call\nresults if the internal storage type is not the same as vtkIdType\nand cannot be shared through the cellPoints pointer. In other\nwords, the method may not be thread safe. Check if shareable\n(using IsStorageShareable()), or use a vtkCellArrayIterator to\nguarantee thread safety.\n"},
  {"GetCellSize", PyvtkCellArray_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: vtkIdType GetCellSize(vtkIdType cellId)\n\nReturn the size of the cell at cellId.\n"},
  {"InsertNextCell", PyvtkCellArray_InsertNextCell, METH_VARARGS,
   "InsertNextCell(self, cell:vtkCell) -> int\nC++: vtkIdType InsertNextCell(vtkCell *cell)\nInsertNextCell(self, npts:int, pts:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(vtkIdType npts,\n    const vtkIdType *pts)\nInsertNextCell(self, pts:vtkIdList) -> int\nC++: vtkIdType InsertNextCell(vtkIdList *pts)\nInsertNextCell(self, npts:int) -> int\nC++: vtkIdType InsertNextCell(int npts)\n\nInsert a cell object. Return the cell id of the cell.\n"},
  {"InsertCellPoint", PyvtkCellArray_InsertCellPoint, METH_VARARGS,
   "InsertCellPoint(self, id:int) -> None\nC++: void InsertCellPoint(vtkIdType id)\n\nUsed in conjunction with InsertNextCell(npts) to add another\npoint to the list of cells.\n"},
  {"UpdateCellCount", PyvtkCellArray_UpdateCellCount, METH_VARARGS,
   "UpdateCellCount(self, npts:int) -> None\nC++: void UpdateCellCount(int npts)\n\nUsed in conjunction with InsertNextCell(int npts) and\nInsertCellPoint() to update the number of points defining the\ncell.\n"},
  {"GetTraversalCellId", PyvtkCellArray_GetTraversalCellId, METH_VARARGS,
   "GetTraversalCellId(self) -> int\nC++: vtkIdType GetTraversalCellId()\n\n"},
  {"SetTraversalCellId", PyvtkCellArray_SetTraversalCellId, METH_VARARGS,
   "SetTraversalCellId(self, cellId:int) -> None\nC++: void SetTraversalCellId(vtkIdType cellId)\n\n"},
  {"ReverseCellAtId", PyvtkCellArray_ReverseCellAtId, METH_VARARGS,
   "ReverseCellAtId(self, cellId:int) -> None\nC++: void ReverseCellAtId(vtkIdType cellId)\n\nReverses the order of the point ids for the specified cell.\n"},
  {"ReplaceCellAtId", PyvtkCellArray_ReplaceCellAtId, METH_VARARGS,
   "ReplaceCellAtId(self, cellId:int, list:vtkIdList) -> None\nC++: void ReplaceCellAtId(vtkIdType cellId, vtkIdList *list)\nReplaceCellAtId(self, cellId:int, cellSize:int, cellPoints:(int,\n    ...)) -> None\nC++: void ReplaceCellAtId(vtkIdType cellId, vtkIdType cellSize,\n    const vtkIdType *cellPoints)\n\n"},
  {"ReplaceCellPointAtId", PyvtkCellArray_ReplaceCellPointAtId, METH_VARARGS,
   "ReplaceCellPointAtId(self, cellId:int, cellPointIndex:int,\n    newPointId:int) -> None\nC++: void ReplaceCellPointAtId(vtkIdType cellId,\n    vtkIdType cellPointIndex, vtkIdType newPointId)\n\nReplaces the pointId at cellPointIndex of a cell with newPointId.\n\n@warning This can ONLY replace the cell if the size does not\n    change.\nAttempting to change cell size through this method will have\nundefined results.\n"},
  {"GetMaxCellSize", PyvtkCellArray_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: int GetMaxCellSize()\n\nReturns the size of the largest cell. The size is the number of\npoints defining the cell.\n"},
  {"DeepCopy", PyvtkCellArray_DeepCopy, METH_VARARGS,
   "DeepCopy(self, ca:vtkCellArray) -> None\nC++: void DeepCopy(vtkCellArray *ca)\n\nPerform a deep copy (no reference counting) of the given cell\narray.\n"},
  {"ShallowCopy", PyvtkCellArray_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, ca:vtkCellArray) -> None\nC++: void ShallowCopy(vtkCellArray *ca)\n\nShallow copy ca into this cell array.\n"},
  {"Append", PyvtkCellArray_Append, METH_VARARGS,
   "Append(self, src:vtkCellArray, pointOffset:int=0) -> None\nC++: void Append(vtkCellArray *src, vtkIdType pointOffset=0)\n\nAppend cells from src into this. Point ids are offset by\npointOffset.\n"},
  {"ExportLegacyFormat", PyvtkCellArray_ExportLegacyFormat, METH_VARARGS,
   "ExportLegacyFormat(self, data:vtkIdTypeArray) -> None\nC++: void ExportLegacyFormat(vtkIdTypeArray *data)\n\nFill data with the old-style vtkCellArray data layout, e.g.\n\n``` { n0, p0_0, p0_1, ..., p0_n, n1, p1_0, p1_1, ..., p1_n, ... }\n```\n\nwhere `n0` is the number of points in cell 0, and `pX_Y` is the\nY'th point in cell X.\n"},
  {"ImportLegacyFormat", PyvtkCellArray_ImportLegacyFormat, METH_VARARGS,
   "ImportLegacyFormat(self, data:vtkIdTypeArray) -> None\nC++: void ImportLegacyFormat(vtkIdTypeArray *data)\nImportLegacyFormat(self, data:(int, ...), len:int) -> None\nC++: void ImportLegacyFormat(const vtkIdType *data, vtkIdType len)\n\n"},
  {"AppendLegacyFormat", PyvtkCellArray_AppendLegacyFormat, METH_VARARGS,
   "AppendLegacyFormat(self, data:vtkIdTypeArray, ptOffset:int=0)\n    -> None\nC++: void AppendLegacyFormat(vtkIdTypeArray *data,\n    vtkIdType ptOffset=0)\nAppendLegacyFormat(self, data:(int, ...), len:int, ptOffset:int=0)\n     -> None\nC++: void AppendLegacyFormat(const vtkIdType *data, vtkIdType len,\n     vtkIdType ptOffset=0)\n\n"},
  {"GetActualMemorySize", PyvtkCellArray_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\narray. Used to support streaming and reading/writing data. The\nvalue returned is guaranteed to be greater than or equal to the\nmemory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"SetNumberOfCells", PyvtkCellArray_SetNumberOfCells, METH_VARARGS,
   "SetNumberOfCells(self, __a:int) -> None\nC++: virtual void SetNumberOfCells(vtkIdType)\n\nSet the number of cells in the array. DO NOT do any kind of\nallocation, advanced use only.\n\note This call has no effect.\n"},
  {"EstimateSize", PyvtkCellArray_EstimateSize, METH_VARARGS,
   "EstimateSize(self, numCells:int, maxPtsPerCell:int) -> int\nC++: vtkIdType EstimateSize(vtkIdType numCells, int maxPtsPerCell)\n\nUtility routines help manage memory of cell array. EstimateSize()\nreturns a value used to initialize and allocate memory for array\nbased on number of cells and maximum number of points making up\ncell.  If every cell is the same size (in terms of number of\npoints), then the memory estimate is guaranteed exact. (If not\nexact, use Squeeze() to reclaim any extra memory.)\n\note This method was often misused (e.g. called alone and then\ndiscarding the result). Use AllocateEstimate directly instead.\n"},
  {"GetSize", PyvtkCellArray_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: vtkIdType GetSize()\n\nGet the size of the allocated connectivity array.\n\n@warning This returns the allocated capacity of the internal\n    arrays as a\nnumber of elements, NOT the number of elements in use.\n\note Method incompatible with current internal storage.\n"},
  {"GetNumberOfConnectivityEntries", PyvtkCellArray_GetNumberOfConnectivityEntries, METH_VARARGS,
   "GetNumberOfConnectivityEntries(self) -> int\nC++: vtkIdType GetNumberOfConnectivityEntries()\n\nReturn the size of the array that would be returned from\nExportLegacyFormat().\n\note Method incompatible with current internal storage.\n"},
  {"GetCell", PyvtkCellArray_GetCell, METH_VARARGS,
   "GetCell(self, loc:int, npts:int, pts:(int, ...)) -> None\nC++: void GetCell(vtkIdType loc, vtkIdType &npts,\n    const vtkIdType *&pts)\nGetCell(self, loc:int, pts:vtkIdList) -> None\nC++: void GetCell(vtkIdType loc, vtkIdList *pts)\n\nInternal method used to retrieve a cell given a legacy offset\nlocation.\n\n@warning Subsequent calls to this method may invalidate previous\n    call\nresults.\n\note The location-based API is now a super-slow compatibility\nlayer. Prefer GetCellAtId.\n"},
  {"GetInsertLocation", PyvtkCellArray_GetInsertLocation, METH_VARARGS,
   "GetInsertLocation(self, npts:int) -> int\nC++: vtkIdType GetInsertLocation(int npts)\n\nComputes the current legacy insertion location within the\ninternal array. Used in conjunction with GetCell(int loc,...).\n\note The location-based API is now a super-slow compatibility\nlayer.\n"},
  {"GetTraversalLocation", PyvtkCellArray_GetTraversalLocation, METH_VARARGS,
   "GetTraversalLocation(self) -> int\nC++: vtkIdType GetTraversalLocation()\nGetTraversalLocation(self, npts:int) -> int\nC++: vtkIdType GetTraversalLocation(vtkIdType npts)\n\n"},
  {"SetTraversalLocation", PyvtkCellArray_SetTraversalLocation, METH_VARARGS,
   "SetTraversalLocation(self, loc:int) -> None\nC++: void SetTraversalLocation(vtkIdType loc)\n\n"},
  {"ReverseCell", PyvtkCellArray_ReverseCell, METH_VARARGS,
   "ReverseCell(self, loc:int) -> None\nC++: void ReverseCell(vtkIdType loc)\n\nSpecial method inverts ordering of cell at the specified legacy\nlocation. Must be called carefully or the cell topology may be\ncorrupted.\n\note The location-based API is now a super-slow compatibility\nlayer. Prefer ReverseCellAtId;\n"},
  {"ReplaceCell", PyvtkCellArray_ReplaceCell, METH_VARARGS,
   "ReplaceCell(self, loc:int, npts:int, pts:(int, ...)) -> None\nC++: void ReplaceCell(vtkIdType loc, int npts,\n    const vtkIdType pts[])\n\nReplace the point ids of the cell at the legacy location with a\ndifferent list of point ids. Calling this method does not mark\nthe vtkCellArray as modified. This is the responsibility of the\ncaller and may be done after multiple calls to ReplaceCell. This\ncall does not support changing the number of points in the cell\n-- the caller must ensure that the target cell has npts points.\n\note The location-based API is now a super-slow compatibility\nlayer. Prefer ReplaceCellAtId.\n"},
  {"SetCells", PyvtkCellArray_SetCells, METH_VARARGS,
   "SetCells(self, ncells:int, cells:vtkIdTypeArray) -> None\nC++: void SetCells(vtkIdType ncells, vtkIdTypeArray *cells)\n\nDefine multiple cells by providing a connectivity list. The list\nis in the form (npts,p0,p1,...p(npts-1), repeated for each cell).\nBe careful using this method because it discards the old cells,\nand anything referring these cells becomes invalid (for example,\nif BuildCells() has been called see vtkPolyData).  The traversal\nlocation is reset to the beginning of the list; the insertion\nlocation is set to the end of the list.\n\n@warning The vtkCellArray will not hold a reference to `cells`.\n    This\nfunction merely calls ImportLegacyFormat.\n\note Use ImportLegacyFormat or SetData instead.\n"},
  {"GetData", PyvtkCellArray_GetData, METH_VARARGS,
   "GetData(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetData()\n\nReturn the underlying data as a data array.\n\n@warning The returned array is not the actual internal\n    representation used\nby vtkCellArray. Modifications to the returned array will not\nchange the vtkCellArray's topology.\n\note Use ExportLegacyFormat, or\nGetOffsetsArray/GetConnectivityArray instead.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellArray_Doc =
  "vtkCellArray - object to represent cell connectivity\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCellArray stores dataset topologies as an explicit connectivity\n"
  "table listing the point ids that make up each cell.\n\n"
  "Internally, the connectivity table is represented as two arrays:\n"
  "Offsets and Connectivity.\n\n"
  "Offsets is an array of [numCells+1] values indicating the index in\n"
  "the Connectivity array where each cell's points start. The last value\n"
  "is always the length of the Connectivity array.\n\n"
  "The Connectivity array stores the lists of point ids for each cell.\n\n"
  "Thus, for a dataset consisting of 2 triangles, a quad, and a line,\n"
  "the internal arrays will appear as follows:\n\n"
  "``` Topology:\n"
  "--------- Cell 0: Triangle | point ids: {0, 1, 2} Cell 1: Triangle |\n"
  "    point ids: {5, 7, 2} Cell 2: Quad     | point ids: {3, 4, 6, 7}\n"
  "    Cell 4: Line     | point ids: {5, 8}\n\n"
  "vtkCellArray (current):\n"
  "----------------------- Offsets:      {0, 3, 6, 10, 12} Connectivity:\n"
  "{0, 1, 2, 5, 7, 2, 3, 4, 6, 7, 5, 8} ```\n\n"
  "While this class provides traversal methods (the legacy\n"
  "InitTraversal(), GetNextCell() methods, and the newer method\n"
  "GetCellAtId()) these are in general not thread-safe. Whenever\n"
  "possible it is preferable to use a local thread-safe,\n"
  "vtkCellArrayIterator object, which can be obtained via:\n\n"
  "``` auto iter = vtk::TakeSmartPointer(cellArray->NewIterator()); for\n"
  "(iter->GoToFirstCell(); !iter->IsDoneWithTraversal();\n"
  "iter->GoToNextCell()) {\n"
  "  // do work with iter } ``` (Note however that depending on the type\n"
  "and structure of internal storage, a cell array iterator may be\n"
  "significantly slower than direct traversal over the cell array due to\n"
  "extra data copying. Factors of 3-4X are not uncommon. See\n"
  "vtkCellArrayIterator for more information. Also note that an iterator\n"
  "may become invalid if the internal vtkCellArray storage is modified.)\n\n"
  "Other methods are also available for allocation and memory-related\n"
  "management; insertion of new cells into the vtkCellArray; and limited\n"
  "editing operations such as replacing one cell with a new cell of the\n"
  "same size.\n\n"
  "The internal arrays may store either 32- or 64-bit values, though\n"
  "most of the API will prefer to use vtkIdType to refer to items in\n"
  "these arrays. This enables significant memory savings when vtkIdType\n"
  "is 64-bit, but 32 bits are sufficient to store all of the values in\n"
  "the connectivity table. Using 64-bit storage with a 32-bit vtkIdType\n"
  "is permitted, but values too large to fit in a 32-bit signed integer\n"
  "will be truncated when accessed through the API. (The particular\n"
  "internal storage type has implications on performance depending on\n"
  "vtkIdType. If the internal storage is equivalent to vtkIdType, then\n"
  "methods that return pointers to arrays of point ids can share the\n"
  "internal storage; otherwise a copy of internal memory must be\n"
  "performed.)\n\n"
  "Methods for managing the storage type are:\n\n"
  "- `bool IsStorage64Bit()`\n"
  "- `bool IsStorageShareable() // Can pointers to internal storage be\n"
  "  shared`\n"
  "- `void Use32BitStorage()`\n"
  "- `void Use64BitStorage()`\n"
  "- `void UseDefaultStorage() // Depends on vtkIdType`\n"
  "- `bool CanConvertTo32BitStorage()`\n"
  "- `bool CanConvertTo64BitStorage()`\n"
  "- `bool CanConvertToDefaultStorage() // Depends on vtkIdType`\n"
  "- `bool ConvertTo32BitStorage()`\n"
  "- `bool ConvertTo64BitStorage()`\n"
  "- `bool ConvertToDefaultStorage() // Depends on vtkIdType`\n"
  "- `bool ConvertToSmallestStorage() // Depends on current values in\n"
  "  arrays`\n\n"
  "Note that some legacy methods are still available that reflect the\n"
  "previous storage format of this data, which embedded the cell sizes\n"
  "into the Connectivity array:\n\n"
  "``` vtkCellArray (legacy):\n"
  "---------------------- Connectivity: {3, 0, 1, 2, 3, 5, 7, 2, 4, 3,\n"
  "    4, 6, 7, 2, 5, 8} |--Cell 0--||--Cell 1--||----Cell 2---||--C3-|\n"
  "    ```\n\n"
  "The methods require an external lookup table to allow random access,\n"
  "which was historically stored in the vtkCellTypes object. The\n"
  "following methods in vtkCellArray still support this style of\n"
  "indexing for compatibility purposes, but these are slow as they must\n"
  "perform some complex computations to convert the old \"location\" into\n"
  "the new \"offset\" and should be avoided. These methods (and their\n"
  "modern equivalents) are:\n\n"
  "- GetCell (Prefer GetCellAtId)\n"
  "- GetInsertLocation (Prefer GetNumberOfCells)\n"
  "- GetTraversalLocation (Prefer GetTraversalCellId, or better,\n"
  "  NewIterator)\n"
  "- SetTraversalLocation (Prefer SetTraversalLocation, or better,\n"
  "  NewIterator)\n"
  "- ReverseCell (Prefer ReverseCellAtId)\n"
  "- ReplaceCell (Prefer ReplaceCellAtId)\n"
  "- SetCells (Use ImportLegacyFormat, or SetData)\n"
  "- GetData (Use ExportLegacyFormat, or\n"
  "  Get[Offsets|Connectivity]Array[|32|64])\n\n"
  "Some other legacy methods were completely removed, such as\n"
  "GetPointer() / WritePointer(), since they are cannot be effectively\n"
  "emulated under the current design. If external code needs to support\n"
  "both the old and new version of the vtkCellArray API, the\n"
  "VTK_CELL_ARRAY_V2 preprocessor definition may be used to detect which\n"
  "API is being compiled against.\n\n"
  "@sa vtkCellTypes vtkCellLinks\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellArray", // tp_name
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
  PyvtkCellArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellArray_StaticNew()
{
  return vtkCellArray::New();
}

PyObject *PyvtkCellArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellArray_Type, PyvtkCellArray_Methods,
    "vtkCellArray",
 &PyvtkCellArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

