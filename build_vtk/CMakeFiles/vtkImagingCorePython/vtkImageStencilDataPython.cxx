// python wrapper for vtkImageStencilData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageStencilData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageStencilData(PyObject *dict); }
extern "C" { PyObject *PyvtkImageStencilData_ClassNew(); }


static PyObject *
PyvtkImageStencilData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageStencilData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStencilData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStencilData::NewInstance());

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
PyvtkImageStencilData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageStencilData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageStencilData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkImageStencilData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkImageStencilData::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkImageStencilData::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InternalImageStencilDataCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalImageStencilDataCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->InternalImageStencilDataCopy(temp0);
    }
    else
    {
      op->vtkImageStencilData::InternalImageStencilDataCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkImageStencilData::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkImageStencilData::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    int tempr = (ap.IsBound() ?
      op->GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkImageStencilData::GetNextExtent(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_IsInside(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInside");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsInside(temp0, temp1, temp2) :
      op->vtkImageStencilData::IsInside(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertNextExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InsertNextExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::InsertNextExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_InsertAndMergeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertAndMergeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->InsertAndMergeExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::InsertAndMergeExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_RemoveExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->RemoveExtent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencilData::RemoveExtent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilData::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkImageStencilData::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilData_SetSpacing_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageStencilData_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkImageStencilData::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilData::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkImageStencilData::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilData_SetOrigin_s1(self, args);
    case 1:
      return PyvtkImageStencilData_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageStencilData_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkImageStencilData::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkImageStencilData::SetExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageStencilData::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageStencilData_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageStencilData_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkImageStencilData_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkImageStencilData::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_AllocateExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllocateExtents();
    }
    else
    {
      op->vtkImageStencilData::AllocateExtents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Fill(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Fill");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Fill();
    }
    else
    {
      op->vtkImageStencilData::Fill();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationFromPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationFromPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationFromPipeline(temp0);
    }
    else
    {
      op->vtkImageStencilData::CopyInformationFromPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_CopyInformationToPipeline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyInformationToPipeline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->CopyInformationToPipeline(temp0);
    }
    else
    {
      op->vtkImageStencilData::CopyInformationToPipeline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilData_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkImageStencilData *tempr = vtkImageStencilData::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilData_GetData_Methods[] = {
  {"GetData", PyvtkImageStencilData_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkImageStencilData_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageStencilData_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageStencilData_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageStencilData_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkImageStencilData_Add(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Add");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Add(temp0);
    }
    else
    {
      op->vtkImageStencilData::Add(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Subtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Subtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Subtract(temp0);
    }
    else
    {
      op->vtkImageStencilData::Subtract(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Replace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Replace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->Replace(temp0);
    }
    else
    {
      op->vtkImageStencilData::Replace(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilData_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilData *op = static_cast<vtkImageStencilData *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Clip(temp0) :
      op->vtkImageStencilData::Clip(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilData_Methods[] = {
  {"IsTypeOf", PyvtkImageStencilData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageStencilData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageStencilData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageStencilData\nC++: static vtkImageStencilData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageStencilData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageStencilData\nC++: vtkImageStencilData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageStencilData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageStencilData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkImageStencilData_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"DeepCopy", PyvtkImageStencilData_DeepCopy, METH_VARARGS,
   "DeepCopy(self, o:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *o) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"ShallowCopy", PyvtkImageStencilData_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, f:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *f) override;\n\nThe goal of the method is to copy the data up to the array\npointers only. The implementation is delegated to the differenent\nsubclasses. If you want to copy the actual data, @see DeepCopy.\n\nThis method shallow copy the field data and copy the internal\nstructure.\n"},
  {"InternalImageStencilDataCopy", PyvtkImageStencilData_InternalImageStencilDataCopy, METH_VARARGS,
   "InternalImageStencilDataCopy(self, s:vtkImageStencilData) -> None\nC++: void InternalImageStencilDataCopy(vtkImageStencilData *s)\n\n"},
  {"GetDataObjectType", PyvtkImageStencilData_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturns `VTK_IMAGE_STENCIL_DATA`.\n"},
  {"GetExtentType", PyvtkImageStencilData_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nThe extent type is 3D, just like vtkImageData.\n"},
  {"GetNextExtent", PyvtkImageStencilData_GetNextExtent, METH_VARARGS,
   "GetNextExtent(self, r1:int, r2:int, xMin:int, xMax:int, yIdx:int,\n    zIdx:int, iter:int) -> int\nC++: int GetNextExtent(int &r1, int &r2, int xMin, int xMax,\n    int yIdx, int zIdx, int &iter)\n\nGiven the total output x extent [xMin,xMax] and the current y, z\nindices, return each sub-extent [r1,r2] that lies within within\nthe unclipped region in sequence.  A value of '0' is returned if\nno more sub-extents are available.  The variable 'iter' must be\ninitialized to zero before the first call, unless you want the\ncomplementary sub-extents in which case you must initialize\n'iter' to -1.  The variable 'iter' is used internally to keep\ntrack of which sub-extent should be returned next.\n"},
  {"IsInside", PyvtkImageStencilData_IsInside, METH_VARARGS,
   "IsInside(self, xIdx:int, yIdx:int, zIdx:int) -> int\nC++: int IsInside(int xIdx, int yIdx, int zIdx)\n\nChecks if an image index is inside the stencil. Even though\nGetNextExtent and the vtkImageStencilIterator are faster if every\nvoxel in the volume has to be checked, IsInside provides an\nefficient alternative for if just a single voxel has to be\nchecked.\n"},
  {"InsertNextExtent", PyvtkImageStencilData_InsertNextExtent, METH_VARARGS,
   "InsertNextExtent(self, r1:int, r2:int, yIdx:int, zIdx:int) -> None\nC++: void InsertNextExtent(int r1, int r2, int yIdx, int zIdx)\n\nThis method is used by vtkImageStencilDataSource to add an x sub\nextent [r1,r2] for the x row (yIdx,zIdx).  The specified sub\nextent must not intersect any other sub extents along the same x\nrow. As well, r1 and r2 must both be within the total x extent\n[Extent[0],Extent[1]].\n"},
  {"InsertAndMergeExtent", PyvtkImageStencilData_InsertAndMergeExtent, METH_VARARGS,
   "InsertAndMergeExtent(self, r1:int, r2:int, yIdx:int, zIdx:int)\n    -> None\nC++: void InsertAndMergeExtent(int r1, int r2, int yIdx, int zIdx)\n\nSimilar to InsertNextExtent, except that the extent (r1,r2) at\nyIdx, zIdx is merged with other extents, (if any) on that row. So\na unique extent may not necessarily be added. For instance, if an\nextent [5,11] already exists adding an extent, [7,9] will not\naffect the stencil. Likewise adding [10, 13] will replace the\nexisting extent with [5,13].\n"},
  {"RemoveExtent", PyvtkImageStencilData_RemoveExtent, METH_VARARGS,
   "RemoveExtent(self, r1:int, r2:int, yIdx:int, zIdx:int) -> None\nC++: void RemoveExtent(int r1, int r2, int yIdx, int zIdx)\n\nRemove the extent from (r1,r2) at yIdx, zIdx\n"},
  {"SetSpacing", PyvtkImageStencilData_SetSpacing, METH_VARARGS,
   "SetSpacing(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpacing(const double _arg[3])\n\nSet the desired spacing for the stencil. This must be called\nbefore the stencil is Updated, ideally in the ExecuteInformation\nmethod of the imaging filter that is using the stencil.\n"},
  {"GetSpacing", PyvtkImageStencilData_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\n"},
  {"SetOrigin", PyvtkImageStencilData_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet the desired origin for the stencil. This must be called\nbefore the stencil is Updated, ideally in the ExecuteInformation\nmethod of the imaging filter that is using the stencil.\n"},
  {"GetOrigin", PyvtkImageStencilData_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetExtent", PyvtkImageStencilData_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:(int, int, int, int, int, int)) -> None\nC++: void SetExtent(const int extent[6])\nSetExtent(self, x1:int, x2:int, y1:int, y2:int, z1:int, z2:int)\n    -> None\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nSet the extent of the data.  This is should be called only by\nvtkImageStencilSource, as it is part of the basic pipeline\nfunctionality.\n"},
  {"GetExtent", PyvtkImageStencilData_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"AllocateExtents", PyvtkImageStencilData_AllocateExtents, METH_VARARGS,
   "AllocateExtents(self) -> None\nC++: void AllocateExtents()\n\nAllocate space for the sub-extents.  This is called by\nvtkImageStencilSource.\n"},
  {"Fill", PyvtkImageStencilData_Fill, METH_VARARGS,
   "Fill(self) -> None\nC++: void Fill()\n\nFill the sub-extents.\n"},
  {"CopyInformationFromPipeline", PyvtkImageStencilData_CopyInformationFromPipeline, METH_VARARGS,
   "CopyInformationFromPipeline(self, info:vtkInformation) -> None\nC++: void CopyInformationFromPipeline(vtkInformation *info)\n    override;\n\nOverride these to handle origin, spacing, scalar type, and scalar\nnumber of components.  See vtkDataObject for details.\n"},
  {"CopyInformationToPipeline", PyvtkImageStencilData_CopyInformationToPipeline, METH_VARARGS,
   "CopyInformationToPipeline(self, info:vtkInformation) -> None\nC++: void CopyInformationToPipeline(vtkInformation *info)\n    override;\n\nCopy information from this data object to the pipeline\ninformation. This is used by the vtkTrivialProducer that is\ncreated when someone calls SetInputData() to connect a data\nobject to a pipeline.\n"},
  {"GetData", PyvtkImageStencilData_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkImageStencilData\nC++: static vtkImageStencilData *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"Add", PyvtkImageStencilData_Add, METH_VARARGS,
   "Add(self, __a:vtkImageStencilData) -> None\nC++: virtual void Add(vtkImageStencilData *)\n\nAdd merges the stencil supplied as argument into Self.\n"},
  {"Subtract", PyvtkImageStencilData_Subtract, METH_VARARGS,
   "Subtract(self, __a:vtkImageStencilData) -> None\nC++: virtual void Subtract(vtkImageStencilData *)\n\nSubtract removes the portion of the stencil, supplied as\nargument, that lies within Self from Self.\n"},
  {"Replace", PyvtkImageStencilData_Replace, METH_VARARGS,
   "Replace(self, __a:vtkImageStencilData) -> None\nC++: virtual void Replace(vtkImageStencilData *)\n\nReplaces the portion of the stencil, supplied as argument, that\nlies within Self from Self.\n"},
  {"Clip", PyvtkImageStencilData_Clip, METH_VARARGS,
   "Clip(self, extent:[int, int, int, int, int, int]) -> int\nC++: virtual int Clip(int extent[6])\n\nClip the stencil with the supplied extents. In other words,\ndiscard data outside the specified extents. Return 1 if something\nchanged.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageStencilData_Doc =
  "vtkImageStencilData - efficient description of an image stencil\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkImageStencilData describes an image stencil in a manner which is\n"
  "efficient both in terms of speed and storage space.  The stencil\n"
  "extents are stored for each x-row across the image (multiple extents\n"
  "per row if necessary) and can be retrieved via the GetNextExtent()\n"
  "method.\n"
  "@sa\n"
  "vtkImageStencilSource vtkImageStencil\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageStencilData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageStencilData", // tp_name
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
  PyvtkImageStencilData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageStencilData_StaticNew()
{
  return vtkImageStencilData::New();
}

PyObject *PyvtkImageStencilData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageStencilData_Type, PyvtkImageStencilData_Methods,
    "vtkImageStencilData",
 &PyvtkImageStencilData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}


static PyObject *
PyvtkImageStencilRaster_PrepareForNewData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareForNewData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  size_t size0 = 0;
  int store0[2];
  int *temp0 = nullptr;
  if (ap.GetArgSize(0) > 0)
  {
    size0 = 2;
    temp0 = store0;
  }
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp0, size0)))
  {
    op->PrepareForNewData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_InsertLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertLine");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  const size_t size1 = 2;
  double temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    op->InsertLine(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_FillStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillStencilData");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  const size_t size1 = 6;
  int temp1[6];
  int temp2 = 0;
  int temp3 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData") &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->FillStencilData(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetTolerance(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilRaster_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkImageStencilRaster *op = static_cast<vtkImageStencilRaster *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = op->GetTolerance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilRaster_Methods[] = {
  {"PrepareForNewData", PyvtkImageStencilRaster_PrepareForNewData, METH_VARARGS,
   "PrepareForNewData(self, allocateExtent:(int, int)=...) -> None\nC++: void PrepareForNewData(const int allocateExtent[2]=nullptr)\n\nReset the raster to its original state, but keep the same whole\nextent. Pre-allocate the specified 1D allocateExtent, which must\nbe within the whole extent.\n"},
  {"InsertLine", PyvtkImageStencilRaster_InsertLine, METH_VARARGS,
   "InsertLine(self, pt1:(float, float), pt2:(float, float)) -> None\nC++: void InsertLine(const double pt1[2], const double pt2[2])\n\nInsert a line into the raster, given the two end points.\n"},
  {"FillStencilData", PyvtkImageStencilRaster_FillStencilData, METH_VARARGS,
   "FillStencilData(self, data:vtkImageStencilData, extent:(int, int,\n    int, int, int, int), xj:int=0, yj:int=1) -> None\nC++: void FillStencilData(vtkImageStencilData *data,\n    const int extent[6], int xj=0, int yj=1)\n\nFill the specified extent of a vtkImageStencilData with the\nraster, after permuting the raster according to xj and yj.\n"},
  {"SetTolerance", PyvtkImageStencilRaster_SetTolerance, METH_VARARGS,
   "SetTolerance(self, tol:float) -> None\nC++: void SetTolerance(double tol)\n\nThe tolerance for float-to-int conversions.\n"},
  {"GetTolerance", PyvtkImageStencilRaster_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: double GetTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImageStencilRaster_vtkImageStencilRaster(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImageStencilRaster");

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkImageStencilRaster *op = new vtkImageStencilRaster(temp0);

    result = PyVTKSpecialObject_New("vtkImageStencilRaster", op);
  }

  return result;
}

static PyMethodDef PyvtkImageStencilRaster_vtkImageStencilRaster_Methods[] = {
  {"vtkImageStencilRaster", PyvtkImageStencilRaster_vtkImageStencilRaster, METH_VARARGS,
   "@P *i"},
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkImageStencilRaster_Doc =

  "vtkImageStencilRaster(wholeExtent:(int, int)) -> vtkImageStencilRaster\nC++: vtkImageStencilRaster(const int wholeExtent[2])\n""\n"
  "vtkImageStencilRaster - This is a helper class for stencil creation.\n\n"
  "It is a raster with infinite resolution in the X direction\n"
  "(approximately, since it uses double precision).  Lines that\n"
  "represent polygon edges can be drawn into this raster, and then\n"
  "filled given a tolerance.\n\n";

static PyObject *
PyvtkImageStencilRaster_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImageStencilRaster_vtkImageStencilRaster(nullptr, args);
}

static void PyvtkImageStencilRaster_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImageStencilRaster *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImageStencilRaster_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageStencilRaster_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageStencilRaster", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImageStencilRaster_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImageStencilRaster_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImageStencilRaster_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkImageStencilRaster_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkImageStencilRaster_TypeNew
extern "C" { PyObject *PyvtkImageStencilRaster_TypeNew(); }
#define DECLARED_PyvtkImageStencilRaster_TypeNew
#endif

PyObject *PyvtkImageStencilRaster_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkImageStencilRaster_Type,
    PyvtkImageStencilRaster_Methods,
    PyvtkImageStencilRaster_vtkImageStencilRaster_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageStencilData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageStencilData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencilData", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkImageStencilRaster_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencilRaster", o) != 0)
  {
    Py_DECREF(o);
  }

}

