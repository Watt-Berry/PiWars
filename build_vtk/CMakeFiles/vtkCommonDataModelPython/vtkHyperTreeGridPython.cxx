// python wrapper for vtkHyperTreeGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGrid_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkHyperTreeGrid_LEVELS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "LEVELS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::LEVELS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DIMENSION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DIMENSION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::DIMENSION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_ORIENTATION(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIENTATION");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkHyperTreeGrid::ORIENTATION();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SIZES(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SIZES");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleVectorKey *tempr = vtkHyperTreeGrid::SIZES();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGrid::NewInstance());

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
PyvtkHyperTreeGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetModeSqueeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeSqueeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModeSqueeze(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetModeSqueeze(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetModeSqueeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeSqueeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModeSqueeze() :
      op->vtkHyperTreeGrid::GetModeSqueeze());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkHyperTreeGrid::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkHyperTreeGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_CopyEmptyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEmptyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyEmptyStructure(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::CopyEmptyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_SetDimensions_s1(self, args);
    case 3:
      return PyvtkHyperTreeGrid_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkHyperTreeGrid::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDimensions(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::GetDimensions(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGrid_GetDimensions_s1(self, args);
    case 1:
      return PyvtkHyperTreeGrid_GetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDimensions");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

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
      op->vtkHyperTreeGrid::SetExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

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
      op->vtkHyperTreeGrid::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_SetExtent_s1(self, args);
    case 6:
      return PyvtkHyperTreeGrid_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkHyperTreeGrid::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellDims_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      op->GetCellDims() :
      op->vtkHyperTreeGrid::GetCellDims());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCellDims_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDims");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCellDims(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCellDims(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCellDims(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGrid_GetCellDims_s1(self, args);
    case 1:
      return PyvtkHyperTreeGrid_GetCellDims_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellDims");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGrid::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_Get1DAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get1DAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Get1DAxis(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::Get1DAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_Get2DAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get2DAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Get2DAxes(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::Get2DAxes(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const unsigned int *tempr = (ap.IsBound() ?
      op->GetAxes() :
      op->vtkHyperTreeGrid::GetAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGrid::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransposedRootIndexing(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetTransposedRootIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGrid::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToKJI();
    }
    else
    {
      op->vtkHyperTreeGrid::SetIndexingModeToKJI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToIJK();
    }
    else
    {
      op->vtkHyperTreeGrid::SetIndexingModeToIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkHyperTreeGrid::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetFreezeState(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFreezeState");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFreezeState() :
      op->vtkHyperTreeGrid::GetFreezeState());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchFactor(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetBranchFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGrid::GetBranchFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMaxNumberOfTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfTrees() :
      op->vtkHyperTreeGrid::GetMaxNumberOfTrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetNumberOfVertices."
    " (" "Please use the renamed version, GetNumberOfCells()." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkHyperTreeGrid::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfNonEmptyTrees(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNonEmptyTrees");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfNonEmptyTrees() :
      op->vtkHyperTreeGrid::GetNumberOfNonEmptyTrees());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkHyperTreeGrid::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels(temp0) :
      op->vtkHyperTreeGrid::GetNumberOfLevels(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHyperTreeGrid::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGrid_GetNumberOfLevels_s1(self, args);
    case 0:
      return PyvtkHyperTreeGrid_GetNumberOfLevels_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfLevels");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetXCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetXCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetXCoordinates() :
      op->vtkHyperTreeGrid::GetXCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetYCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetYCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetYCoordinates() :
      op->vtkHyperTreeGrid::GetYCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetZCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetZCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetZCoordinates() :
      op->vtkHyperTreeGrid::GetZCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_CopyCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->CopyCoordinates(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::CopyCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetFixedCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFixedCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::SetFixedCoordinates(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMask() :
      op->vtkHyperTreeGrid::GetMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasMask() :
      op->vtkHyperTreeGrid::HasMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetHasInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasInterface(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetHasInterface(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetHasInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHasInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHasInterface() :
      op->vtkHyperTreeGrid::GetHasInterface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasInterfaceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInterfaceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasInterfaceOn();
    }
    else
    {
      op->vtkHyperTreeGrid::HasInterfaceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasInterfaceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasInterfaceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HasInterfaceOff();
    }
    else
    {
      op->vtkHyperTreeGrid::HasInterfaceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetInterfaceNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceNormalsName(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetInterfaceNormalsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetInterfaceNormalsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceNormalsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceNormalsName() :
      op->vtkHyperTreeGrid::GetInterfaceNormalsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetInterfaceInterceptsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterfaceInterceptsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterfaceInterceptsName(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetInterfaceInterceptsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetInterfaceInterceptsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterfaceInterceptsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInterfaceInterceptsName() :
      op->vtkHyperTreeGrid::GetInterfaceInterceptsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetDepthLimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDepthLimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDepthLimiter(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::SetDepthLimiter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetDepthLimiter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthLimiter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDepthLimiter() :
      op->vtkHyperTreeGrid::GetDepthLimiter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_InitializeOrientedCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOrientedCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridOrientedCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridOrientedCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeOrientedCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeOrientedCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewOrientedCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewOrientedCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridOrientedCursor *tempr = (ap.IsBound() ?
      op->NewOrientedCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewOrientedCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridOrientedGeometryCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridOrientedGeometryCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeOrientedGeometryCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeOrientedGeometryCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridOrientedGeometryCursor *tempr = (ap.IsBound() ?
      op->NewOrientedGeometryCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewOrientedGeometryCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedGeometryCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedGeometryCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedGeometryCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedGeometryCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedGeometryCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedGeometryCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedGeometryCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedUnlimitedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedUnlimitedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedUnlimitedGeometryCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedUnlimitedGeometryCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedUnlimitedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedUnlimitedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedUnlimitedGeometryCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedUnlimitedGeometryCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_FindNonOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNonOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkHyperTreeGridNonOrientedGeometryCursor *tempr = (ap.IsBound() ?
      op->FindNonOrientedGeometryCursor(temp0) :
      op->vtkHyperTreeGrid::FindNonOrientedGeometryCursor(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_FindDichotomicX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDichotomicX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0;
  double temp1 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->FindDichotomicX(temp0, temp1) :
      op->vtkHyperTreeGrid::FindDichotomicX(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_FindDichotomicY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDichotomicY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0;
  double temp1 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->FindDichotomicY(temp0, temp1) :
      op->vtkHyperTreeGrid::FindDichotomicY(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_FindDichotomicZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindDichotomicZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  double temp0;
  double temp1 = 0.0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->FindDichotomicZ(temp0, temp1) :
      op->vtkHyperTreeGrid::FindDichotomicZ(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_InitializeNonOrientedVonNeumannSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedVonNeumannSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedVonNeumannSuperCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedVonNeumannSuperCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedVonNeumannSuperCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedVonNeumannSuperCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedVonNeumannSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedVonNeumannSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedVonNeumannSuperCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedVonNeumannSuperCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedVonNeumannSuperCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedVonNeumannSuperCursorLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedVonNeumannSuperCursorLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedVonNeumannSuperCursorLight(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedVonNeumannSuperCursorLight(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedVonNeumannSuperCursorLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedVonNeumannSuperCursorLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *tempr = (ap.IsBound() ?
      op->NewNonOrientedVonNeumannSuperCursorLight(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedVonNeumannSuperCursorLight(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedMooreSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedMooreSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedMooreSuperCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedMooreSuperCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedMooreSuperCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedMooreSuperCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedMooreSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedMooreSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedMooreSuperCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedMooreSuperCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedMooreSuperCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedMooreSuperCursorLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedMooreSuperCursorLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedMooreSuperCursorLight *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedMooreSuperCursorLight") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedMooreSuperCursorLight(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedMooreSuperCursorLight(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedMooreSuperCursorLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedMooreSuperCursorLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedMooreSuperCursorLight *tempr = (ap.IsBound() ?
      op->NewNonOrientedMooreSuperCursorLight(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedMooreSuperCursorLight(temp0, temp1));

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
PyvtkHyperTreeGrid_InitializeNonOrientedUnlimitedMooreSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeNonOrientedUnlimitedMooreSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->InitializeNonOrientedUnlimitedMooreSuperCursor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeNonOrientedUnlimitedMooreSuperCursor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_NewNonOrientedUnlimitedMooreSuperCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewNonOrientedUnlimitedMooreSuperCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor *tempr = (ap.IsBound() ?
      op->NewNonOrientedUnlimitedMooreSuperCursor(temp0, temp1) :
      op->vtkHyperTreeGrid::NewNonOrientedUnlimitedMooreSuperCursor(temp0, temp1));

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
PyvtkHyperTreeGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkHyperTreeGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree(temp0, temp1) :
      op->vtkHyperTreeGrid::GetTree(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  vtkHyperTree *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkHyperTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::SetTree(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

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
      op->vtkHyperTreeGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

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
      op->vtkHyperTreeGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetExtentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExtentType() :
      op->vtkHyperTreeGrid::GetExtentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetActualMemorySizeBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySizeBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySizeBytes() :
      op->vtkHyperTreeGrid::GetActualMemorySizeBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkHyperTreeGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_RecursivelyInitializePureMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecursivelyInitializePureMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  vtkHyperTreeGridNonOrientedCursor *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedCursor") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    bool tempr = (ap.IsBound() ?
      op->RecursivelyInitializePureMask(temp0, temp1) :
      op->vtkHyperTreeGrid::RecursivelyInitializePureMask(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetPureMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPureMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetPureMask() :
      op->vtkHyperTreeGrid::GetPureMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetChildMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetChildMask(temp0) :
      op->vtkHyperTreeGrid::GetChildMask(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetIndexFromLevelZeroCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIndexFromLevelZeroCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetIndexFromLevelZeroCoordinates(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGrid::GetIndexFromLevelZeroCoordinates(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetShiftedLevelZeroIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftedLevelZeroIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    long long tempr = (ap.IsBound() ?
      op->GetShiftedLevelZeroIndex(temp0, temp1, temp2, temp3) :
      op->vtkHyperTreeGrid::GetShiftedLevelZeroIndex(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetLevelZeroCoordinatesFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroCoordinatesFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->GetLevelZeroCoordinatesFromIndex(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHyperTreeGrid::GetLevelZeroCoordinatesFromIndex(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetLevelZeroOriginAndSizeFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroOriginAndSizeFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetLevelZeroOriginAndSizeFromIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGrid::GetLevelZeroOriginAndSizeFromIndex(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetLevelZeroOriginFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroOriginFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetLevelZeroOriginFromIndex(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGrid::GetLevelZeroOriginFromIndex(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetGlobalNodeIndexMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndexMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndexMax() :
      op->vtkHyperTreeGrid::GetGlobalNodeIndexMax());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_InitializeLocalIndexNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeLocalIndexNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeLocalIndexNode();
    }
    else
    {
      op->vtkHyperTreeGrid::InitializeLocalIndexNode();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_HasAnyGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyGhostCells() :
      op->vtkHyperTreeGrid::HasAnyGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostCells() :
      op->vtkHyperTreeGrid::GetGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetTreeGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetTreeGhostArray() :
      op->vtkHyperTreeGrid::GetTreeGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_AllocateTreeGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateTreeGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->AllocateTreeGhostArray() :
      op->vtkHyperTreeGrid::AllocateTreeGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTreeGrid *tempr = vtkHyperTreeGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGrid_GetData_Methods[] = {
  {"GetData", PyvtkHyperTreeGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkHyperTreeGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTreeGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTreeGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkHyperTreeGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkHyperTreeGrid::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGrid_GetBounds_s1(self, args);
    case 1:
      return PyvtkHyperTreeGrid_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkHyperTreeGrid::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkHyperTreeGrid::GetCenter(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGrid_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGrid_GetCenter_s1(self, args);
    case 1:
      return PyvtkHyperTreeGrid_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGrid_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellData *tempr = (ap.IsBound() ?
      op->GetCellData() :
      op->vtkHyperTreeGrid::GetCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkHyperTreeGrid::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkHyperTreeGrid::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGrid *op = static_cast<vtkHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkHyperTreeGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGrid_Methods[] = {
  {"LEVELS", PyvtkHyperTreeGrid_LEVELS, METH_VARARGS,
   "LEVELS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *LEVELS()\n\n"},
  {"DIMENSION", PyvtkHyperTreeGrid_DIMENSION, METH_VARARGS,
   "DIMENSION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DIMENSION()\n\n"},
  {"ORIENTATION", PyvtkHyperTreeGrid_ORIENTATION, METH_VARARGS,
   "ORIENTATION() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIENTATION()\n\n"},
  {"SIZES", PyvtkHyperTreeGrid_SIZES, METH_VARARGS,
   "SIZES() -> vtkInformationDoubleVectorKey\nC++: static vtkInformationDoubleVectorKey *SIZES()\n\n"},
  {"IsTypeOf", PyvtkHyperTreeGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetModeSqueeze", PyvtkHyperTreeGrid_SetModeSqueeze, METH_VARARGS,
   "SetModeSqueeze(self, _arg:str) -> None\nC++: virtual void SetModeSqueeze(const char *_arg)\n\nSet/Get mode squeeze\n"},
  {"GetModeSqueeze", PyvtkHyperTreeGrid_GetModeSqueeze, METH_VARARGS,
   "GetModeSqueeze(self) -> str\nC++: virtual char *GetModeSqueeze()\n\n"},
  {"Squeeze", PyvtkHyperTreeGrid_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: virtual void Squeeze()\n\nSqueeze this representation.\n"},
  {"GetDataObjectType", PyvtkHyperTreeGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkHyperTreeGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, __a:vtkDataObject) -> None\nC++: virtual void CopyStructure(vtkDataObject *)\n\nCopy the internal geometric and topological structure of a\nvtkHyperTreeGrid object.\n"},
  {"CopyEmptyStructure", PyvtkHyperTreeGrid_CopyEmptyStructure, METH_VARARGS,
   "CopyEmptyStructure(self, __a:vtkDataObject) -> None\nC++: virtual void CopyEmptyStructure(vtkDataObject *)\n\nCopy the internal structure with no data associated.\n"},
  {"SetDimensions", PyvtkHyperTreeGrid_SetDimensions, METH_VARARGS,
   "SetDimensions(self, dims:(int, int, int)) -> None\nC++: void SetDimensions(const int dims[3])\nSetDimensions(self, i:int, j:int, k:int) -> None\nC++: void SetDimensions(int i, int j, int k)\n\n"},
  {"GetDimensions", PyvtkHyperTreeGrid_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: const unsigned int *GetDimensions()\nGetDimensions(self, dim:[int, int, int]) -> None\nC++: void GetDimensions(int dim[3])\n\nGet dimensions of this rectilinear grid dataset. The dimensions\ncorrespond to the number of points\n"},
  {"SetExtent", PyvtkHyperTreeGrid_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:(int, int, int, int, int, int)) -> None\nC++: void SetExtent(const int extent[6])\nSetExtent(self, x1:int, x2:int, y1:int, y2:int, z1:int, z2:int)\n    -> None\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nDifferent ways to set the extent of the data array.  The extent\nshould be set before the \"Scalars\" are set or allocated. The\nExtent is stored in the order (X, Y, Z). Set/Get extent of this\nrectilinear grid dataset.\n"},
  {"GetExtent", PyvtkHyperTreeGrid_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\n"},
  {"GetCellDims", PyvtkHyperTreeGrid_GetCellDims, METH_VARARGS,
   "GetCellDims(self) -> (int, int, int)\nC++: const unsigned int *GetCellDims()\nGetCellDims(self, cellDims:[int, int, int]) -> None\nC++: void GetCellDims(int cellDims[3])\n\nJB Get grid sizes of this structured cells dataset. Valeurs\ndeduites a partir de Dimensions/Extent Les dimensions non\nexprimees auront pour valeur 1.\n"},
  {"GetDimension", PyvtkHyperTreeGrid_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: unsigned int GetDimension()\n\nJB Get the dimensionality of the grid deduite a partir de\nDimensions/Extent.\n"},
  {"Get1DAxis", PyvtkHyperTreeGrid_Get1DAxis, METH_VARARGS,
   "Get1DAxis(self, axis:int) -> None\nC++: void Get1DAxis(unsigned int &axis)\n\nJB retourne l'indice de la dimension valide.\n"},
  {"Get2DAxes", PyvtkHyperTreeGrid_Get2DAxes, METH_VARARGS,
   "Get2DAxes(self, axis1:int, axis2:int) -> None\nC++: void Get2DAxes(unsigned int &axis1, unsigned int &axis2)\n\nJB Retourne l'indice des deux dimensions valides.\n"},
  {"GetAxes", PyvtkHyperTreeGrid_GetAxes, METH_VARARGS,
   "GetAxes(self) -> Pointer\nC++: const unsigned int *GetAxes()\n\nJB Get the axis information (used for CopyStructure)\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGrid_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: unsigned int GetNumberOfChildren()\n\nThe number of children each node can have.\n"},
  {"SetTransposedRootIndexing", PyvtkHyperTreeGrid_SetTransposedRootIndexing, METH_VARARGS,
   "SetTransposedRootIndexing(self, _arg:bool) -> None\nC++: virtual void SetTransposedRootIndexing(bool _arg)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"GetTransposedRootIndexing", PyvtkHyperTreeGrid_GetTransposedRootIndexing, METH_VARARGS,
   "GetTransposedRootIndexing(self) -> bool\nC++: virtual bool GetTransposedRootIndexing()\n\n"},
  {"SetIndexingModeToKJI", PyvtkHyperTreeGrid_SetIndexingModeToKJI, METH_VARARGS,
   "SetIndexingModeToKJI(self) -> None\nC++: void SetIndexingModeToKJI()\n\n"},
  {"SetIndexingModeToIJK", PyvtkHyperTreeGrid_SetIndexingModeToIJK, METH_VARARGS,
   "SetIndexingModeToIJK(self) -> None\nC++: void SetIndexingModeToIJK()\n\n"},
  {"GetOrientation", PyvtkHyperTreeGrid_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: unsigned int GetOrientation()\n\nGet the orientation of 1D or 2D grids:\n- in 1D: 0, 1, 2 = aligned along X, Y, Z axis\n- in 2D: 0, 1, 2 = normal to X, Y, Z axis NB: Not used in 3D\n"},
  {"GetFreezeState", PyvtkHyperTreeGrid_GetFreezeState, METH_VARARGS,
   "GetFreezeState(self) -> bool\nC++: virtual bool GetFreezeState()\n\nGet the state of frozen\n"},
  {"SetBranchFactor", PyvtkHyperTreeGrid_SetBranchFactor, METH_VARARGS,
   "SetBranchFactor(self, __a:int) -> None\nC++: void SetBranchFactor(unsigned int)\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactor", PyvtkHyperTreeGrid_GetBranchFactor, METH_VARARGS,
   "GetBranchFactor(self) -> int\nC++: unsigned int GetBranchFactor()\n\n"},
  {"GetMaxNumberOfTrees", PyvtkHyperTreeGrid_GetMaxNumberOfTrees, METH_VARARGS,
   "GetMaxNumberOfTrees(self) -> int\nC++: vtkIdType GetMaxNumberOfTrees()\n\nReturn the maximum number of trees in the level 0 grid.\n"},
  {"GetNumberOfVertices", PyvtkHyperTreeGrid_GetNumberOfVertices, METH_VARARGS,
   "GetNumberOfVertices(self) -> int\nC++: vtkIdType GetNumberOfVertices()\n\nGet the number of vertices in the primal tree grid.\n"},
  {"GetNumberOfNonEmptyTrees", PyvtkHyperTreeGrid_GetNumberOfNonEmptyTrees, METH_VARARGS,
   "GetNumberOfNonEmptyTrees(self) -> int\nC++: vtkIdType GetNumberOfNonEmptyTrees()\n\nGet the number of non empty trees in this grid.\n"},
  {"GetNumberOfLeaves", PyvtkHyperTreeGrid_GetNumberOfLeaves, METH_VARARGS,
   "GetNumberOfLeaves(self) -> int\nC++: vtkIdType GetNumberOfLeaves()\n\nGet the number of leaves in the primal tree grid.\n"},
  {"GetNumberOfLevels", PyvtkHyperTreeGrid_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self, __a:int) -> int\nC++: unsigned int GetNumberOfLevels(vtkIdType)\nGetNumberOfLevels(self) -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels in an individual (primal) tree.\n"},
  {"SetXCoordinates", PyvtkHyperTreeGrid_SetXCoordinates, METH_VARARGS,
   "SetXCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetXCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the x-direction.\n"},
  {"GetXCoordinates", PyvtkHyperTreeGrid_GetXCoordinates, METH_VARARGS,
   "GetXCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetXCoordinates()\n\n"},
  {"SetYCoordinates", PyvtkHyperTreeGrid_SetYCoordinates, METH_VARARGS,
   "SetYCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetYCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the y-direction.\n"},
  {"GetYCoordinates", PyvtkHyperTreeGrid_GetYCoordinates, METH_VARARGS,
   "GetYCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetYCoordinates()\n\n"},
  {"SetZCoordinates", PyvtkHyperTreeGrid_SetZCoordinates, METH_VARARGS,
   "SetZCoordinates(self, __a:vtkDataArray) -> None\nC++: virtual void SetZCoordinates(vtkDataArray *)\n\nSet/Get the grid coordinates in the z-direction.\n"},
  {"GetZCoordinates", PyvtkHyperTreeGrid_GetZCoordinates, METH_VARARGS,
   "GetZCoordinates(self) -> vtkDataArray\nC++: virtual vtkDataArray *GetZCoordinates()\n\n"},
  {"CopyCoordinates", PyvtkHyperTreeGrid_CopyCoordinates, METH_VARARGS,
   "CopyCoordinates(self, output:vtkHyperTreeGrid) -> None\nC++: virtual void CopyCoordinates(const vtkHyperTreeGrid *output)\n\nJB Augented services on Coordinates.\n"},
  {"SetFixedCoordinates", PyvtkHyperTreeGrid_SetFixedCoordinates, METH_VARARGS,
   "SetFixedCoordinates(self, axis:int, value:float) -> None\nC++: virtual void SetFixedCoordinates(unsigned int axis,\n    double value)\n\n"},
  {"SetMask", PyvtkHyperTreeGrid_SetMask, METH_VARARGS,
   "SetMask(self, __a:vtkBitArray) -> None\nC++: void SetMask(vtkBitArray *)\n\nSet/Get the blanking mask of primal leaf cells\n"},
  {"GetMask", PyvtkHyperTreeGrid_GetMask, METH_VARARGS,
   "GetMask(self) -> vtkBitArray\nC++: virtual vtkBitArray *GetMask()\n\n"},
  {"HasMask", PyvtkHyperTreeGrid_HasMask, METH_VARARGS,
   "HasMask(self) -> bool\nC++: bool HasMask()\n\nDetermine whether blanking mask is empty or not\n"},
  {"SetHasInterface", PyvtkHyperTreeGrid_SetHasInterface, METH_VARARGS,
   "SetHasInterface(self, _arg:bool) -> None\nC++: virtual void SetHasInterface(bool _arg)\n\nSet/Get presence or absence of interface\n"},
  {"GetHasInterface", PyvtkHyperTreeGrid_GetHasInterface, METH_VARARGS,
   "GetHasInterface(self) -> bool\nC++: virtual bool GetHasInterface()\n\n"},
  {"HasInterfaceOn", PyvtkHyperTreeGrid_HasInterfaceOn, METH_VARARGS,
   "HasInterfaceOn(self) -> None\nC++: virtual void HasInterfaceOn()\n\n"},
  {"HasInterfaceOff", PyvtkHyperTreeGrid_HasInterfaceOff, METH_VARARGS,
   "HasInterfaceOff(self) -> None\nC++: virtual void HasInterfaceOff()\n\n"},
  {"SetInterfaceNormalsName", PyvtkHyperTreeGrid_SetInterfaceNormalsName, METH_VARARGS,
   "SetInterfaceNormalsName(self, _arg:str) -> None\nC++: virtual void SetInterfaceNormalsName(const char *_arg)\n\nSet/Get names of interface normal vectors arrays\n"},
  {"GetInterfaceNormalsName", PyvtkHyperTreeGrid_GetInterfaceNormalsName, METH_VARARGS,
   "GetInterfaceNormalsName(self) -> str\nC++: virtual char *GetInterfaceNormalsName()\n\n"},
  {"SetInterfaceInterceptsName", PyvtkHyperTreeGrid_SetInterfaceInterceptsName, METH_VARARGS,
   "SetInterfaceInterceptsName(self, _arg:str) -> None\nC++: virtual void SetInterfaceInterceptsName(const char *_arg)\n\nSet/Get names of interface intercepts arrays\n"},
  {"GetInterfaceInterceptsName", PyvtkHyperTreeGrid_GetInterfaceInterceptsName, METH_VARARGS,
   "GetInterfaceInterceptsName(self) -> str\nC++: virtual char *GetInterfaceInterceptsName()\n\n"},
  {"SetDepthLimiter", PyvtkHyperTreeGrid_SetDepthLimiter, METH_VARARGS,
   "SetDepthLimiter(self, _arg:int) -> None\nC++: virtual void SetDepthLimiter(unsigned int _arg)\n\nSet/Get depth limiter value\n"},
  {"GetDepthLimiter", PyvtkHyperTreeGrid_GetDepthLimiter, METH_VARARGS,
   "GetDepthLimiter(self) -> int\nC++: virtual unsigned int GetDepthLimiter()\n\n"},
  {"InitializeOrientedCursor", PyvtkHyperTreeGrid_InitializeOrientedCursor, METH_VARARGS,
   "InitializeOrientedCursor(self,\n    cursor:vtkHyperTreeGridOrientedCursor, index:int,\n    create:bool=False) -> None\nC++: void InitializeOrientedCursor(\n    vtkHyperTreeGridOrientedCursor *cursor, vtkIdType index,\n    bool create=false)\n\nUsed to initialize a cursor of the given type.\n\ncursor: the cursor to initialize\n\nindex: the index of the tree to use in the HTG\n\ncreate: allow to construct the hyper tree if the slot is empty\n"},
  {"NewOrientedCursor", PyvtkHyperTreeGrid_NewOrientedCursor, METH_VARARGS,
   "NewOrientedCursor(self, index:int, create:bool=False)\n    -> vtkHyperTreeGridOrientedCursor\nC++: vtkHyperTreeGridOrientedCursor *NewOrientedCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeOrientedGeometryCursor", PyvtkHyperTreeGrid_InitializeOrientedGeometryCursor, METH_VARARGS,
   "InitializeOrientedGeometryCursor(self,\n    cursor:vtkHyperTreeGridOrientedGeometryCursor, index:int,\n    create:bool=False) -> None\nC++: void InitializeOrientedGeometryCursor(\n    vtkHyperTreeGridOrientedGeometryCursor *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewOrientedGeometryCursor", PyvtkHyperTreeGrid_NewOrientedGeometryCursor, METH_VARARGS,
   "NewOrientedGeometryCursor(self, index:int, create:bool=False)\n    -> vtkHyperTreeGridOrientedGeometryCursor\nC++: vtkHyperTreeGridOrientedGeometryCursor *NewOrientedGeometryCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedCursor", PyvtkHyperTreeGrid_InitializeNonOrientedCursor, METH_VARARGS,
   "InitializeNonOrientedCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedCursor, index:int,\n    create:bool=False) -> None\nC++: void InitializeNonOrientedCursor(\n    vtkHyperTreeGridNonOrientedCursor *cursor, vtkIdType index,\n    bool create=false)\n\n"},
  {"NewNonOrientedCursor", PyvtkHyperTreeGrid_NewNonOrientedCursor, METH_VARARGS,
   "NewNonOrientedCursor(self, index:int, create:bool=False)\n    -> vtkHyperTreeGridNonOrientedCursor\nC++: vtkHyperTreeGridNonOrientedCursor *NewNonOrientedCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedGeometryCursor", PyvtkHyperTreeGrid_InitializeNonOrientedGeometryCursor, METH_VARARGS,
   "InitializeNonOrientedGeometryCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedGeometryCursor, index:int,\n    create:bool=False) -> None\nC++: void InitializeNonOrientedGeometryCursor(\n    vtkHyperTreeGridNonOrientedGeometryCursor *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedGeometryCursor", PyvtkHyperTreeGrid_NewNonOrientedGeometryCursor, METH_VARARGS,
   "NewNonOrientedGeometryCursor(self, index:int, create:bool=False)\n    -> vtkHyperTreeGridNonOrientedGeometryCursor\nC++: vtkHyperTreeGridNonOrientedGeometryCursor *NewNonOrientedGeometryCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedUnlimitedGeometryCursor", PyvtkHyperTreeGrid_InitializeNonOrientedUnlimitedGeometryCursor, METH_VARARGS,
   "InitializeNonOrientedUnlimitedGeometryCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor,\n    index:int, create:bool=False) -> None\nC++: void InitializeNonOrientedUnlimitedGeometryCursor(\n    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedUnlimitedGeometryCursor", PyvtkHyperTreeGrid_NewNonOrientedUnlimitedGeometryCursor, METH_VARARGS,
   "NewNonOrientedUnlimitedGeometryCursor(self, index:int,\n    create:bool=False)\n    -> vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor\nC++: vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *NewNonOrientedUnlimitedGeometryCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"FindNonOrientedGeometryCursor", PyvtkHyperTreeGrid_FindNonOrientedGeometryCursor, METH_VARARGS,
   "FindNonOrientedGeometryCursor(self, x:[float, float, float])\n    -> vtkHyperTreeGridNonOrientedGeometryCursor\nC++: vtkHyperTreeGridNonOrientedGeometryCursor *FindNonOrientedGeometryCursor(\n    double x[3])\n\nJB Retourne un curseur geometrique pointant une des mailles\ncomportant la position spatiale x\n"},
  {"FindDichotomicX", PyvtkHyperTreeGrid_FindDichotomicX, METH_VARARGS,
   "FindDichotomicX(self, value:float, tol:float=0.0) -> int\nC++: virtual unsigned int FindDichotomicX(double value,\n    double tol=0.0)\n\n"},
  {"FindDichotomicY", PyvtkHyperTreeGrid_FindDichotomicY, METH_VARARGS,
   "FindDichotomicY(self, value:float, tol:float=0.0) -> int\nC++: virtual unsigned int FindDichotomicY(double value,\n    double tol=0.0)\n\n"},
  {"FindDichotomicZ", PyvtkHyperTreeGrid_FindDichotomicZ, METH_VARARGS,
   "FindDichotomicZ(self, value:float, tol:float=0.0) -> int\nC++: virtual unsigned int FindDichotomicZ(double value,\n    double tol=0.0)\n\n"},
  {"InitializeNonOrientedVonNeumannSuperCursor", PyvtkHyperTreeGrid_InitializeNonOrientedVonNeumannSuperCursor, METH_VARARGS,
   "InitializeNonOrientedVonNeumannSuperCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedVonNeumannSuperCursor,\n    index:int, create:bool=False) -> None\nC++: void InitializeNonOrientedVonNeumannSuperCursor(\n    vtkHyperTreeGridNonOrientedVonNeumannSuperCursor *cursor,\n    vtkIdType index, bool create=false)\n\nUsed to initialize a cursor of the given type.\n\ncursor: the cursor to initialize\n\nindex: the index of the tree to use in the HTG\n\ncreate: allow to construct the hyper tree if the slot is empty\n"},
  {"NewNonOrientedVonNeumannSuperCursor", PyvtkHyperTreeGrid_NewNonOrientedVonNeumannSuperCursor, METH_VARARGS,
   "NewNonOrientedVonNeumannSuperCursor(self, index:int,\n    create:bool=False)\n    -> vtkHyperTreeGridNonOrientedVonNeumannSuperCursor\nC++: vtkHyperTreeGridNonOrientedVonNeumannSuperCursor *NewNonOrientedVonNeumannSuperCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedVonNeumannSuperCursorLight", PyvtkHyperTreeGrid_InitializeNonOrientedVonNeumannSuperCursorLight, METH_VARARGS,
   "InitializeNonOrientedVonNeumannSuperCursorLight(self,\n    cursor:vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight,\n    index:int, create:bool=False) -> None\nC++: void InitializeNonOrientedVonNeumannSuperCursorLight(\n    vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *cursor,\n     vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedVonNeumannSuperCursorLight", PyvtkHyperTreeGrid_NewNonOrientedVonNeumannSuperCursorLight, METH_VARARGS,
   "NewNonOrientedVonNeumannSuperCursorLight(self, index:int,\n    create:bool=False)\n    -> vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight\nC++: vtkHyperTreeGridNonOrientedVonNeumannSuperCursorLight *NewNonOrientedVonNeumannSuperCursorLight(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedMooreSuperCursor", PyvtkHyperTreeGrid_InitializeNonOrientedMooreSuperCursor, METH_VARARGS,
   "InitializeNonOrientedMooreSuperCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedMooreSuperCursor, index:int,\n     create:bool=False) -> None\nC++: void InitializeNonOrientedMooreSuperCursor(\n    vtkHyperTreeGridNonOrientedMooreSuperCursor *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedMooreSuperCursor", PyvtkHyperTreeGrid_NewNonOrientedMooreSuperCursor, METH_VARARGS,
   "NewNonOrientedMooreSuperCursor(self, index:int, create:bool=False)\n     -> vtkHyperTreeGridNonOrientedMooreSuperCursor\nC++: vtkHyperTreeGridNonOrientedMooreSuperCursor *NewNonOrientedMooreSuperCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedMooreSuperCursorLight", PyvtkHyperTreeGrid_InitializeNonOrientedMooreSuperCursorLight, METH_VARARGS,
   "InitializeNonOrientedMooreSuperCursorLight(self,\n    cursor:vtkHyperTreeGridNonOrientedMooreSuperCursorLight,\n    index:int, create:bool=False) -> None\nC++: void InitializeNonOrientedMooreSuperCursorLight(\n    vtkHyperTreeGridNonOrientedMooreSuperCursorLight *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedMooreSuperCursorLight", PyvtkHyperTreeGrid_NewNonOrientedMooreSuperCursorLight, METH_VARARGS,
   "NewNonOrientedMooreSuperCursorLight(self, index:int,\n    create:bool=False)\n    -> vtkHyperTreeGridNonOrientedMooreSuperCursorLight\nC++: vtkHyperTreeGridNonOrientedMooreSuperCursorLight *NewNonOrientedMooreSuperCursorLight(\n    vtkIdType index, bool create=false)\n\n"},
  {"InitializeNonOrientedUnlimitedMooreSuperCursor", PyvtkHyperTreeGrid_InitializeNonOrientedUnlimitedMooreSuperCursor, METH_VARARGS,
   "InitializeNonOrientedUnlimitedMooreSuperCursor(self,\n    cursor:vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor,\n    index:int, create:bool=False) -> None\nC++: void InitializeNonOrientedUnlimitedMooreSuperCursor(\n    vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor *cursor,\n    vtkIdType index, bool create=false)\n\n"},
  {"NewNonOrientedUnlimitedMooreSuperCursor", PyvtkHyperTreeGrid_NewNonOrientedUnlimitedMooreSuperCursor, METH_VARARGS,
   "NewNonOrientedUnlimitedMooreSuperCursor(self, index:int,\n    create:bool=False)\n    -> vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor\nC++: vtkHyperTreeGridNonOrientedUnlimitedMooreSuperCursor *NewNonOrientedUnlimitedMooreSuperCursor(\n    vtkIdType index, bool create=false)\n\n"},
  {"Initialize", PyvtkHyperTreeGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state.\n"},
  {"GetTree", PyvtkHyperTreeGrid_GetTree, METH_VARARGS,
   "GetTree(self, __a:int, create:bool=False) -> vtkHyperTree\nC++: virtual vtkHyperTree *GetTree(vtkIdType, bool create=false)\n\nReturn tree located at given index of hyper tree grid NB: This\nwill construct a new HyperTree if grid slot is empty.\n"},
  {"SetTree", PyvtkHyperTreeGrid_SetTree, METH_VARARGS,
   "SetTree(self, __a:int, __b:vtkHyperTree) -> None\nC++: void SetTree(vtkIdType, vtkHyperTree *)\n\nAssign given tree to given index of hyper tree grid NB: This will\ncreate a new slot in the grid if needed.\n"},
  {"ShallowCopy", PyvtkHyperTreeGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, __a:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *) override;\n\nCreate shallow copy of hyper tree grid.\n"},
  {"DeepCopy", PyvtkHyperTreeGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, __a:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *) override;\n\nCreate deep copy of hyper tree grid.\n"},
  {"GetExtentType", PyvtkHyperTreeGrid_GetExtentType, METH_VARARGS,
   "GetExtentType(self) -> int\nC++: int GetExtentType() override;\n\nStructured extent. The extent type is a 3D extent.\n"},
  {"GetActualMemorySizeBytes", PyvtkHyperTreeGrid_GetActualMemorySizeBytes, METH_VARARGS,
   "GetActualMemorySizeBytes(self) -> int\nC++: virtual unsigned long GetActualMemorySizeBytes()\n\nReturn the actual size of the data in bytes. This number is valid\nonly after the pipeline has updated. The memory size returned is\nguaranteed to be greater than or equal to the memory required to\nrepresent the data (e.g., extra space in arrays, etc. are not\nincluded in the return value). THIS METHOD IS THREAD SAFE.\n"},
  {"GetActualMemorySize", PyvtkHyperTreeGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"RecursivelyInitializePureMask", PyvtkHyperTreeGrid_RecursivelyInitializePureMask, METH_VARARGS,
   "RecursivelyInitializePureMask(self,\n    cursor:vtkHyperTreeGridNonOrientedCursor,\n    normale:vtkDataArray) -> bool\nC++: bool RecursivelyInitializePureMask(\n    vtkHyperTreeGridNonOrientedCursor *cursor,\n    vtkDataArray *normale)\n\nRecursively initialize pure material mask\n"},
  {"GetPureMask", PyvtkHyperTreeGrid_GetPureMask, METH_VARARGS,
   "GetPureMask(self) -> vtkBitArray\nC++: vtkBitArray *GetPureMask()\n\nGet or create pure material mask\n"},
  {"GetChildMask", PyvtkHyperTreeGrid_GetChildMask, METH_VARARGS,
   "GetChildMask(self, __a:int) -> int\nC++: unsigned int GetChildMask(unsigned int)\n\nReturn hard-coded bitcode correspondng to child mask Dimension 1:\nFactor 2: 0: 100, 1: 001 Factor 3: 0: 100, 1: 010, 2: 001\nDimension 2: Factor 2: 0: 1101 0000 0, 1: 0110 0100 0 2: 0001\n0011 0, 3: 0000 0101 1 Factor 3: 0: 1101 0000 0, 1: 0100 0000 0,\n2: 0110 0100 0 3: 0001 0000 0, 4: 0000 1000 0, 5: 0000 0100 0 6:\n0001 0011 0, 7: 0000 0001 0, 8: 0000 0101 1 Dimension 3: Factor\n2: 0: 1101 1000 0110 1000 0000 0000 000, 1: 0110 1100 0011 0010\n0000 0000 000 2: 0001 1011 0000 1001 1000 0000 000, 3: 0000 1101\n1000 0010 1100 0000 000 4: 0000 0000 0110 1000 0011 0110 000, 5:\n0000 0000 0011 0010 0001 1011 000 6: 0000 0000 0000 1001 1000\n0110 110, 7: 0000 0000 0000 0010 1100 0011 011 Factor 3: 0: 1101\n1000 0110 1000 0000 0000 000 1: 0100 1000 0010 0000 0000 0000 000\n2: 0110 1100 0011 0010 0000 0000 000 3: 0001 1000 0000 1000 0000\n0000 000 4: 0000 1000 0000 0000 0000 0000 000 5: 0000 1100 0000\n0010 0000 0000 000 6: 0001 1011 0000 1001 1000 0000 000 7: 0000\n1001 0000 0000 1000 0000 000 8: 0000 1101 1000 0010 1100 0000 000\n9: 0000 0000 0110 1000 0000 0000 000 10: 0000 0000 0010 0000 0000\n0000 000 11: 0000 0000 0011 0010 0000 0000 000 12: 0000 0000 0000\n1000 0000 0000 000 13: 0000 0000 0000 0100 0000 0000 000 14: 0000\n0000 0000 0010 0000 0000 000 15: 0000 0000 0000 1001 1000 0000\n000 16: 0000 0000 0000 0000 1000 0000 000 17: 0000 0000 0000 0010\n1100 0000 000 18: 0000 0000 0110 1000 0011 0110 000 19: 0000 0000\n0010 0000 0001 0010 000 20: 0000 0000 0011 0010 0001 1011 000 21:\n0000 0000 0000 1000 0000 0110 000 22: 0000 0000 0000 0000 0000\n0010 000 23: 0000 0000 0000 0010 0000 0011 000 24: 0000 0000 0000\n1001 1000 0110 110 25: 0000 0000 0000 0000 1000 0010 010 26: 0000\n0000 0000 0010 1100 0011 011\n"},
  {"GetIndexFromLevelZeroCoordinates", PyvtkHyperTreeGrid_GetIndexFromLevelZeroCoordinates, METH_VARARGS,
   "GetIndexFromLevelZeroCoordinates(self, __a:int, __b:int, __c:int,\n    __d:int) -> None\nC++: void GetIndexFromLevelZeroCoordinates(vtkIdType &,\n    unsigned int, unsigned int, unsigned int)\n\nConvert the Cartesian coordinates of a root in the grid  to its\nglobal index.\n"},
  {"GetShiftedLevelZeroIndex", PyvtkHyperTreeGrid_GetShiftedLevelZeroIndex, METH_VARARGS,
   "GetShiftedLevelZeroIndex(self, __a:int, __b:int, __c:int, __d:int)\n     -> int\nC++: vtkIdType GetShiftedLevelZeroIndex(vtkIdType, unsigned int,\n    unsigned int, unsigned int)\n\nReturn the root index of a root cell with given index displaced.\nby a Cartesian vector in the grid. NB: No boundary checks are\nperformed.\n"},
  {"GetLevelZeroCoordinatesFromIndex", PyvtkHyperTreeGrid_GetLevelZeroCoordinatesFromIndex, METH_VARARGS,
   "GetLevelZeroCoordinatesFromIndex(self, __a:int, __b:int, __c:int,\n    __d:int) -> None\nC++: void GetLevelZeroCoordinatesFromIndex(vtkIdType,\n    unsigned int &, unsigned int &, unsigned int &)\n\nConvert the global index of a root to its Cartesian coordinates\nin the grid.\n"},
  {"GetLevelZeroOriginAndSizeFromIndex", PyvtkHyperTreeGrid_GetLevelZeroOriginAndSizeFromIndex, METH_VARARGS,
   "GetLevelZeroOriginAndSizeFromIndex(self, __a:int, __b:[float,\n    ...], __c:[float, ...]) -> None\nC++: virtual void GetLevelZeroOriginAndSizeFromIndex(vtkIdType,\n    double *, double *)\n\nConvert the global index of a root to its Spacial coordinates\norigin and size.\n"},
  {"GetLevelZeroOriginFromIndex", PyvtkHyperTreeGrid_GetLevelZeroOriginFromIndex, METH_VARARGS,
   "GetLevelZeroOriginFromIndex(self, __a:int, __b:[float, ...])\n    -> None\nC++: virtual void GetLevelZeroOriginFromIndex(vtkIdType, double *)\n\nJB Convert the global index of a root to its Spacial coordinates\norigin and size.\n"},
  {"GetGlobalNodeIndexMax", PyvtkHyperTreeGrid_GetGlobalNodeIndexMax, METH_VARARGS,
   "GetGlobalNodeIndexMax(self) -> int\nC++: vtkIdType GetGlobalNodeIndexMax()\n\nJB Retourne la valeur maximale du global index. Cette information\nest indispensable pour construire une nouvelle grandeur\npuisqu'elle devra au moins etre de cette taille. Pour les memes\nraisons, dans le cas de la construction du maillage dual, afin de\nreutiliser les grandeurs de l'HTG, le nombre de sommets sera\ndimensionne a cette valeur.\n"},
  {"InitializeLocalIndexNode", PyvtkHyperTreeGrid_InitializeLocalIndexNode, METH_VARARGS,
   "InitializeLocalIndexNode(self) -> None\nC++: void InitializeLocalIndexNode()\n\nJB Permet d'initialiser les index locaux de chacun des HT de cet\nHTG une fois que TOUS les HTs aient ete COMPLETEMENT\nconstruits/raffines ! A l'utilisateur ensuite de fournir les\ngrandeurs suivant cet ordre.\n"},
  {"HasAnyGhostCells", PyvtkHyperTreeGrid_HasAnyGhostCells, METH_VARARGS,
   "HasAnyGhostCells(self) -> bool\nC++: bool HasAnyGhostCells()\n\nReturns true if a ghost cell array is defined.\n"},
  {"GetGhostCells", PyvtkHyperTreeGrid_GetGhostCells, METH_VARARGS,
   "GetGhostCells(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostCells()\n\nGets the array that defines the ghost type of each cell. see also\nGetTreeGhostArray().\n"},
  {"GetTreeGhostArray", PyvtkHyperTreeGrid_GetTreeGhostArray, METH_VARARGS,
   "GetTreeGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetTreeGhostArray()\n\nGets the array that defines the ghost type of each cell. Unlike\nGetGhostCells(), we cache the pointer to the array to save a\nlookup involving string comparisons\n"},
  {"AllocateTreeGhostArray", PyvtkHyperTreeGrid_AllocateTreeGhostArray, METH_VARARGS,
   "AllocateTreeGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *AllocateTreeGhostArray()\n\nAllocate ghost array for points.\n"},
  {"GetData", PyvtkHyperTreeGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkHyperTreeGrid\nC++: static vtkHyperTreeGrid *GetData(vtkInformationVector *v,\n    int i=0)\n\nRetrieve an instance of this class from an information object\n"},
  {"GetBounds", PyvtkHyperTreeGrid_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: virtual double *GetBounds()\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"GetCenter", PyvtkHyperTreeGrid_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, center:[float, float, float]) -> None\nC++: void GetCenter(double center[3])\n\nGet the center of the bounding box. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"GetCellData", PyvtkHyperTreeGrid_GetCellData, METH_VARARGS,
   "GetCellData(self) -> vtkCellData\nC++: vtkCellData *GetCellData()\n\nReturn a pointer to this dataset's hypertree node data. THIS\nMETHOD IS THREAD SAFE\n"},
  {"GetAttributesAsFieldData", PyvtkHyperTreeGrid_GetAttributesAsFieldData, METH_VARARGS,
   "GetAttributesAsFieldData(self, type:int) -> vtkFieldData\nC++: vtkFieldData *GetAttributesAsFieldData(int type) override;\n\nReturns the hypertree node field data stored as cell data. If\ntype != vtkDataObject::AttributeTypes::CELL, it defers to\nvtkDataObject;\n"},
  {"GetNumberOfElements", PyvtkHyperTreeGrid_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nReturns the number of nodes. Ii type ==\nvtkDataObject::AttributeTypes::CELL, it defers to vtkDataObject.\n"},
  {"GetNumberOfCells", PyvtkHyperTreeGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\nReturn the number of cells. It matches the total number of\ninternal nodes and leaves of the underlying hypertrees.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGrid_Doc =
  "vtkHyperTreeGrid - A dataset containing a grid of vtkHyperTree\ninstances arranged as a rectilinear grid.\n\n"
  "Superclass: vtkDataObject\n\n"
  "An hypertree grid is a dataset containing a rectilinear grid of root\n"
  "nodes, each of which can be refined as a vtkHyperTree grid. This\n"
  "organization of the root nodes allows for the definition of\n"
  "tree-based AMR grids that do not have uniform geometry. Some filters\n"
  "can be applied on this dataset: contour, outline, geometry.\n\n"
  "JB A valider la suite The order and number of points must match that\n"
  "specified by the dimensions of the grid. The point order increases in\n"
  "i fastest (from 0<=i<dims[0]), then j (0<=j<dims[1]), then k\n"
  "(0<=k<dims[2]) where dims[] are the dimensions of the grid in the\n"
  "i-j-k topological directions. The number of points is\n"
  "dims[0]*dims[1]*dims[2]. The same is true for the cells of the grid.\n"
  "The order and number of cells must match that specified by the\n"
  "dimensions of the grid. The cell order increases in i fastest (from\n"
  "0<=i<(dims[0]-1)), then j (0<=j<(dims[1]-1)), then k\n"
  "(0<=k<(dims[2]-1)) The number of cells is\n"
  "(dims[0]-1)*(dims[1]-1)*(dims[2]-1). JB Dimensions : number of points\n"
  "by direction of rectilinear grid CellDims : number of cells by\n"
  "directions of rectilinear grid (1 for each dimensions 1)\n\n"
  "@warning\n"
  "It is not a spatial search object. If you are looking for this kind\n"
  "of octree see vtkCellLocator instead. Extent support is not finished\n"
  "yet.\n\n"
  "@sa\n"
  "vtkHyperTree vtkRectilinearGrid\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was\n"
  "rewritten by Philippe Pebay, 2016 This class was modified by\n"
  "Jacques-Bernard Lekien 2018 This work was supported by Commissariat a\n"
  "l'Energie Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGrid", // tp_name
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
  PyvtkHyperTreeGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGrid_StaticNew()
{
  return vtkHyperTreeGrid::New();
}

PyObject *PyvtkHyperTreeGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGrid_Type, PyvtkHyperTreeGrid_Methods,
    "vtkHyperTreeGrid",
 &PyvtkHyperTreeGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

