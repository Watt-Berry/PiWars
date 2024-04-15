// python wrapper for vtkGenericCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGenericCell.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGenericCell(PyObject *dict); }
extern "C" { PyObject *PyvtkGenericCell_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static PyObject *
PyvtkGenericCell_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGenericCell::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGenericCell::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGenericCell *tempr = vtkGenericCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGenericCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGenericCell::NewInstance());

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
PyvtkGenericCell_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGenericCell::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGenericCell::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkGenericCell::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->SetPointIds(temp0);
    }
    else
    {
      op->vtkGenericCell::SetPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkGenericCell::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  vtkCell *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCell"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkGenericCell::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkGenericCell::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkGenericCell::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLinear() :
      op->vtkGenericCell::IsLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresInitialization() :
      op->vtkGenericCell::RequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkGenericCell::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_RequiresExplicitFaceRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresExplicitFaceRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresExplicitFaceRepresentation() :
      op->vtkGenericCell::RequiresExplicitFaceRepresentation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFaces(temp0);
    }
    else
    {
      op->vtkGenericCell::SetFaces(temp0);
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
PyvtkGenericCell_GetFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      op->GetFaces() :
      op->vtkGenericCell::GetFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkGenericCell::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkGenericCell::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkGenericCell::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkGenericCell::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->CellBoundary(temp0, temp1, temp2) :
      op->vtkGenericCell::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkGenericCell::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->EvaluateLocation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkGenericCell::EvaluateLocation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkCellArray *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkPointData *temp7 = nullptr;
  vtkCellData *temp8 = nullptr;
  long long temp9;
  vtkCellData *temp10 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }
    else
    {
      op->vtkGenericCell::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkGenericCell::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkGenericCell::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
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
PyvtkGenericCell_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0, temp1, temp2) :
      op->vtkGenericCell::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Derivatives(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkGenericCell::Derivatives(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetParametricCenter(temp0) :
      op->vtkGenericCell::GetParametricCenter(temp0));

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


static PyObject *
PyvtkGenericCell_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkGenericCell::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkGenericCell::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateFunctions(temp0, temp1);
    }
    else
    {
      op->vtkGenericCell::InterpolateFunctions(temp0, temp1);
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
PyvtkGenericCell_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateDerivs(temp0, temp1);
    }
    else
    {
      op->vtkGenericCell::InterpolateDerivs(temp0, temp1);
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
PyvtkGenericCell_SetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellType(temp0);
    }
    else
    {
      op->vtkGenericCell::SetCellType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToEmptyCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToEmptyCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToEmptyCell();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToEmptyCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToVertex();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyVertex();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyVertex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriangleStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriangleStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriangleStrip();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriangleStrip();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolygon();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolygon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPixel();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPixel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToVoxel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToVoxel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToVoxel();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToVoxel();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPyramid();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPyramid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPentagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPentagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPentagonalPrism();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPentagonalPrism();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToHexagonalPrism(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToHexagonalPrism");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToHexagonalPrism();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToHexagonalPrism();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToPolyhedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToPolyhedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToPolyhedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToPolyhedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToConvexPointSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToConvexPointSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToConvexPointSet();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToConvexPointSet();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticEdge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticEdge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToCubicLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToCubicLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToCubicLine();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToCubicLine();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticPolygon();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticPolygon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticPyramid();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticPyramid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticLinearQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuad();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuad();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToQuadraticLinearWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToQuadraticLinearWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToQuadraticLinearWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuadraticWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToTriQuadraticPyramid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToTriQuadraticPyramid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToTriQuadraticPyramid();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToTriQuadraticPyramid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBiQuadraticQuadraticHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBiQuadraticQuadraticHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBiQuadraticQuadraticHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeCurve();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeCurve();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeQuadrilateral(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeQuadrilateral");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeQuadrilateral();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeQuadrilateral();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToLagrangeWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToLagrangeWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToLagrangeWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToLagrangeWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierTriangle();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierTriangle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierTetra(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierTetra");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierTetra();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierTetra();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierCurve(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierCurve");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierCurve();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierCurve();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierQuadrilateral(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierQuadrilateral");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierQuadrilateral();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierQuadrilateral();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierHexahedron(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierHexahedron");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierHexahedron();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierHexahedron();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_SetCellTypeToBezierWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeToBezierWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeToBezierWedge();
    }
    else
    {
      op->vtkGenericCell::SetCellTypeToBezierWedge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_InstantiateCell(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InstantiateCell");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = vtkGenericCell::InstantiateCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGenericCell_GetRepresentativeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepresentativeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGenericCell *op = static_cast<vtkGenericCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetRepresentativeCell() :
      op->vtkGenericCell::GetRepresentativeCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGenericCell_Methods[] = {
  {"IsTypeOf", PyvtkGenericCell_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGenericCell_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGenericCell_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGenericCell\nC++: static vtkGenericCell *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGenericCell_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGenericCell\nC++: vtkGenericCell *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGenericCell_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGenericCell_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPoints", PyvtkGenericCell_SetPoints, METH_VARARGS,
   "SetPoints(self, points:vtkPoints) -> None\nC++: void SetPoints(vtkPoints *points)\n\nSet the points object to use for this cell. This updates the\ninternal cell storage as well as the public member variable\nPoints.\n"},
  {"SetPointIds", PyvtkGenericCell_SetPointIds, METH_VARARGS,
   "SetPointIds(self, pointIds:vtkIdList) -> None\nC++: void SetPointIds(vtkIdList *pointIds)\n\nSet the point ids to use for this cell. This updates the internal\ncell storage as well as the public member variable PointIds.\n"},
  {"ShallowCopy", PyvtkGenericCell_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, c:vtkCell) -> None\nC++: void ShallowCopy(vtkCell *c) override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"DeepCopy", PyvtkGenericCell_DeepCopy, METH_VARARGS,
   "DeepCopy(self, c:vtkCell) -> None\nC++: void DeepCopy(vtkCell *c) override;\n\nCopy this cell by completely copying internal data structures.\nThis is slower but safer than ShallowCopy().\n"},
  {"GetCellType", PyvtkGenericCell_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nReturn the type of cell.\n"},
  {"GetCellDimension", PyvtkGenericCell_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {"IsLinear", PyvtkGenericCell_IsLinear, METH_VARARGS,
   "IsLinear(self) -> int\nC++: int IsLinear() override;\n\nNon-linear cells require special treatment beyond the usual cell\ntype and connectivity list information.  Most cells in VTK are\nimplicit cells.\n"},
  {"RequiresInitialization", PyvtkGenericCell_RequiresInitialization, METH_VARARGS,
   "RequiresInitialization(self) -> int\nC++: int RequiresInitialization() override;\n\nSome cells require initialization prior to access. For example,\nthey may have to triangulate themselves or set up internal data\nstructures.\n"},
  {"Initialize", PyvtkGenericCell_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\n"},
  {"RequiresExplicitFaceRepresentation", PyvtkGenericCell_RequiresExplicitFaceRepresentation, METH_VARARGS,
   "RequiresExplicitFaceRepresentation(self) -> int\nC++: int RequiresExplicitFaceRepresentation() override;\n\nDetermine whether the cell requires explicit face representation,\nand methods for setting and getting the faces (see vtkPolyhedron\nfor example usage of these methods).\n"},
  {"SetFaces", PyvtkGenericCell_SetFaces, METH_VARARGS,
   "SetFaces(self, faces:[int, ...]) -> None\nC++: void SetFaces(vtkIdType *faces) override;\n\n"},
  {"GetFaces", PyvtkGenericCell_GetFaces, METH_VARARGS,
   "GetFaces(self) -> Pointer\nC++: vtkIdType *GetFaces() override;\n\n"},
  {"GetNumberOfEdges", PyvtkGenericCell_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkGenericCell_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkGenericCell_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkGenericCell_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"CellBoundary", PyvtkGenericCell_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"EvaluatePosition", PyvtkGenericCell_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkGenericCell_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"Contour", PyvtkGenericCell_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"Clip", PyvtkGenericCell_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, connectivity:vtkCellArray,\n     inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut) override;\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell. The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-nullptr,\nthe cell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)\n"},
  {"IntersectWithLine", PyvtkGenericCell_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition p1[3], p2[3] and tolerance tol. The method returns\nnon-zero value if intersection occurs. A parametric distance t\nbetween 0 and 1 along the ray representing the intersection\npoint, the point coordinates x[3] in data coordinates and also\npcoords[3] in parametric coordinates. subId is the index within\nthe cell if a composed cell like a triangle strip.\n"},
  {"Triangulate", PyvtkGenericCell_Triangulate, METH_VARARGS,
   "Triangulate(self, index:int, ptIds:vtkIdList, pts:vtkPoints)\n    -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {"Derivatives", PyvtkGenericCell_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"GetParametricCenter", PyvtkGenericCell_GetParametricCenter, METH_VARARGS,
   "GetParametricCenter(self, pcoords:[float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn center of the cell in parametric coordinates.  Note that\nthe parametric center is not always located at (0.5,0.5,0.5). The\nreturn value is the subId that the center is in (if a composite\ncell). If you want the center in x-y-z space, invoke the\nEvaluateLocation() method.\n"},
  {"GetParametricCoords", PyvtkGenericCell_GetParametricCoords, METH_VARARGS,
   "GetParametricCoords(self) -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nReturn a contiguous array of parametric coordinates of the points\ndefining this cell. In other words, (px,py,pz, px,py,pz, etc..) \nThe coordinates are ordered consistent with the definition of the\npoint ordering for the cell. This method returns a non-nullptr\npointer when the cell is a primary type (i.e., IsPrimaryCell() is\ntrue). Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n"},
  {"IsPrimaryCell", PyvtkGenericCell_IsPrimaryCell, METH_VARARGS,
   "IsPrimaryCell(self) -> int\nC++: int IsPrimaryCell() override;\n\nReturn whether this cell type has a fixed topology or whether the\ntopology varies depending on the data (e.g., vtkConvexPointSet).\nThis compares to composite cells that are typically composed of\nprimary cells (e.g., a triangle strip composite cell is made up\nof triangle primary cells).\n"},
  {"InterpolateFunctions", PyvtkGenericCell_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    weights:[float, ...]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *weights) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"InterpolateDerivs", PyvtkGenericCell_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, ...]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override;\n\n"},
  {"SetCellType", PyvtkGenericCell_SetCellType, METH_VARARGS,
   "SetCellType(self, cellType:int) -> None\nC++: void SetCellType(int cellType)\n\nThis method is used to support the\nvtkDataSet::GetCell(vtkGenericCell *) method. It allows\nvtkGenericCell to act like any cell type by dereferencing an\ninternal instance of a concrete cell type. When you set the cell\ntype, you are resetting a pointer to an internal cell which is\nthen used for computation.\n"},
  {"SetCellTypeToEmptyCell", PyvtkGenericCell_SetCellTypeToEmptyCell, METH_VARARGS,
   "SetCellTypeToEmptyCell(self) -> None\nC++: void SetCellTypeToEmptyCell()\n\n"},
  {"SetCellTypeToVertex", PyvtkGenericCell_SetCellTypeToVertex, METH_VARARGS,
   "SetCellTypeToVertex(self) -> None\nC++: void SetCellTypeToVertex()\n\n"},
  {"SetCellTypeToPolyVertex", PyvtkGenericCell_SetCellTypeToPolyVertex, METH_VARARGS,
   "SetCellTypeToPolyVertex(self) -> None\nC++: void SetCellTypeToPolyVertex()\n\n"},
  {"SetCellTypeToLine", PyvtkGenericCell_SetCellTypeToLine, METH_VARARGS,
   "SetCellTypeToLine(self) -> None\nC++: void SetCellTypeToLine()\n\n"},
  {"SetCellTypeToPolyLine", PyvtkGenericCell_SetCellTypeToPolyLine, METH_VARARGS,
   "SetCellTypeToPolyLine(self) -> None\nC++: void SetCellTypeToPolyLine()\n\n"},
  {"SetCellTypeToTriangle", PyvtkGenericCell_SetCellTypeToTriangle, METH_VARARGS,
   "SetCellTypeToTriangle(self) -> None\nC++: void SetCellTypeToTriangle()\n\n"},
  {"SetCellTypeToTriangleStrip", PyvtkGenericCell_SetCellTypeToTriangleStrip, METH_VARARGS,
   "SetCellTypeToTriangleStrip(self) -> None\nC++: void SetCellTypeToTriangleStrip()\n\n"},
  {"SetCellTypeToPolygon", PyvtkGenericCell_SetCellTypeToPolygon, METH_VARARGS,
   "SetCellTypeToPolygon(self) -> None\nC++: void SetCellTypeToPolygon()\n\n"},
  {"SetCellTypeToPixel", PyvtkGenericCell_SetCellTypeToPixel, METH_VARARGS,
   "SetCellTypeToPixel(self) -> None\nC++: void SetCellTypeToPixel()\n\n"},
  {"SetCellTypeToQuad", PyvtkGenericCell_SetCellTypeToQuad, METH_VARARGS,
   "SetCellTypeToQuad(self) -> None\nC++: void SetCellTypeToQuad()\n\n"},
  {"SetCellTypeToTetra", PyvtkGenericCell_SetCellTypeToTetra, METH_VARARGS,
   "SetCellTypeToTetra(self) -> None\nC++: void SetCellTypeToTetra()\n\n"},
  {"SetCellTypeToVoxel", PyvtkGenericCell_SetCellTypeToVoxel, METH_VARARGS,
   "SetCellTypeToVoxel(self) -> None\nC++: void SetCellTypeToVoxel()\n\n"},
  {"SetCellTypeToHexahedron", PyvtkGenericCell_SetCellTypeToHexahedron, METH_VARARGS,
   "SetCellTypeToHexahedron(self) -> None\nC++: void SetCellTypeToHexahedron()\n\n"},
  {"SetCellTypeToWedge", PyvtkGenericCell_SetCellTypeToWedge, METH_VARARGS,
   "SetCellTypeToWedge(self) -> None\nC++: void SetCellTypeToWedge()\n\n"},
  {"SetCellTypeToPyramid", PyvtkGenericCell_SetCellTypeToPyramid, METH_VARARGS,
   "SetCellTypeToPyramid(self) -> None\nC++: void SetCellTypeToPyramid()\n\n"},
  {"SetCellTypeToPentagonalPrism", PyvtkGenericCell_SetCellTypeToPentagonalPrism, METH_VARARGS,
   "SetCellTypeToPentagonalPrism(self) -> None\nC++: void SetCellTypeToPentagonalPrism()\n\n"},
  {"SetCellTypeToHexagonalPrism", PyvtkGenericCell_SetCellTypeToHexagonalPrism, METH_VARARGS,
   "SetCellTypeToHexagonalPrism(self) -> None\nC++: void SetCellTypeToHexagonalPrism()\n\n"},
  {"SetCellTypeToPolyhedron", PyvtkGenericCell_SetCellTypeToPolyhedron, METH_VARARGS,
   "SetCellTypeToPolyhedron(self) -> None\nC++: void SetCellTypeToPolyhedron()\n\n"},
  {"SetCellTypeToConvexPointSet", PyvtkGenericCell_SetCellTypeToConvexPointSet, METH_VARARGS,
   "SetCellTypeToConvexPointSet(self) -> None\nC++: void SetCellTypeToConvexPointSet()\n\n"},
  {"SetCellTypeToQuadraticEdge", PyvtkGenericCell_SetCellTypeToQuadraticEdge, METH_VARARGS,
   "SetCellTypeToQuadraticEdge(self) -> None\nC++: void SetCellTypeToQuadraticEdge()\n\n"},
  {"SetCellTypeToCubicLine", PyvtkGenericCell_SetCellTypeToCubicLine, METH_VARARGS,
   "SetCellTypeToCubicLine(self) -> None\nC++: void SetCellTypeToCubicLine()\n\n"},
  {"SetCellTypeToQuadraticTriangle", PyvtkGenericCell_SetCellTypeToQuadraticTriangle, METH_VARARGS,
   "SetCellTypeToQuadraticTriangle(self) -> None\nC++: void SetCellTypeToQuadraticTriangle()\n\n"},
  {"SetCellTypeToBiQuadraticTriangle", PyvtkGenericCell_SetCellTypeToBiQuadraticTriangle, METH_VARARGS,
   "SetCellTypeToBiQuadraticTriangle(self) -> None\nC++: void SetCellTypeToBiQuadraticTriangle()\n\n"},
  {"SetCellTypeToQuadraticQuad", PyvtkGenericCell_SetCellTypeToQuadraticQuad, METH_VARARGS,
   "SetCellTypeToQuadraticQuad(self) -> None\nC++: void SetCellTypeToQuadraticQuad()\n\n"},
  {"SetCellTypeToQuadraticPolygon", PyvtkGenericCell_SetCellTypeToQuadraticPolygon, METH_VARARGS,
   "SetCellTypeToQuadraticPolygon(self) -> None\nC++: void SetCellTypeToQuadraticPolygon()\n\n"},
  {"SetCellTypeToQuadraticTetra", PyvtkGenericCell_SetCellTypeToQuadraticTetra, METH_VARARGS,
   "SetCellTypeToQuadraticTetra(self) -> None\nC++: void SetCellTypeToQuadraticTetra()\n\n"},
  {"SetCellTypeToQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToQuadraticHexahedron, METH_VARARGS,
   "SetCellTypeToQuadraticHexahedron(self) -> None\nC++: void SetCellTypeToQuadraticHexahedron()\n\n"},
  {"SetCellTypeToQuadraticWedge", PyvtkGenericCell_SetCellTypeToQuadraticWedge, METH_VARARGS,
   "SetCellTypeToQuadraticWedge(self) -> None\nC++: void SetCellTypeToQuadraticWedge()\n\n"},
  {"SetCellTypeToQuadraticPyramid", PyvtkGenericCell_SetCellTypeToQuadraticPyramid, METH_VARARGS,
   "SetCellTypeToQuadraticPyramid(self) -> None\nC++: void SetCellTypeToQuadraticPyramid()\n\n"},
  {"SetCellTypeToQuadraticLinearQuad", PyvtkGenericCell_SetCellTypeToQuadraticLinearQuad, METH_VARARGS,
   "SetCellTypeToQuadraticLinearQuad(self) -> None\nC++: void SetCellTypeToQuadraticLinearQuad()\n\n"},
  {"SetCellTypeToBiQuadraticQuad", PyvtkGenericCell_SetCellTypeToBiQuadraticQuad, METH_VARARGS,
   "SetCellTypeToBiQuadraticQuad(self) -> None\nC++: void SetCellTypeToBiQuadraticQuad()\n\n"},
  {"SetCellTypeToQuadraticLinearWedge", PyvtkGenericCell_SetCellTypeToQuadraticLinearWedge, METH_VARARGS,
   "SetCellTypeToQuadraticLinearWedge(self) -> None\nC++: void SetCellTypeToQuadraticLinearWedge()\n\n"},
  {"SetCellTypeToBiQuadraticQuadraticWedge", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticWedge, METH_VARARGS,
   "SetCellTypeToBiQuadraticQuadraticWedge(self) -> None\nC++: void SetCellTypeToBiQuadraticQuadraticWedge()\n\n"},
  {"SetCellTypeToTriQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToTriQuadraticHexahedron, METH_VARARGS,
   "SetCellTypeToTriQuadraticHexahedron(self) -> None\nC++: void SetCellTypeToTriQuadraticHexahedron()\n\n"},
  {"SetCellTypeToTriQuadraticPyramid", PyvtkGenericCell_SetCellTypeToTriQuadraticPyramid, METH_VARARGS,
   "SetCellTypeToTriQuadraticPyramid(self) -> None\nC++: void SetCellTypeToTriQuadraticPyramid()\n\n"},
  {"SetCellTypeToBiQuadraticQuadraticHexahedron", PyvtkGenericCell_SetCellTypeToBiQuadraticQuadraticHexahedron, METH_VARARGS,
   "SetCellTypeToBiQuadraticQuadraticHexahedron(self) -> None\nC++: void SetCellTypeToBiQuadraticQuadraticHexahedron()\n\n"},
  {"SetCellTypeToLagrangeTriangle", PyvtkGenericCell_SetCellTypeToLagrangeTriangle, METH_VARARGS,
   "SetCellTypeToLagrangeTriangle(self) -> None\nC++: void SetCellTypeToLagrangeTriangle()\n\n"},
  {"SetCellTypeToLagrangeTetra", PyvtkGenericCell_SetCellTypeToLagrangeTetra, METH_VARARGS,
   "SetCellTypeToLagrangeTetra(self) -> None\nC++: void SetCellTypeToLagrangeTetra()\n\n"},
  {"SetCellTypeToLagrangeCurve", PyvtkGenericCell_SetCellTypeToLagrangeCurve, METH_VARARGS,
   "SetCellTypeToLagrangeCurve(self) -> None\nC++: void SetCellTypeToLagrangeCurve()\n\n"},
  {"SetCellTypeToLagrangeQuadrilateral", PyvtkGenericCell_SetCellTypeToLagrangeQuadrilateral, METH_VARARGS,
   "SetCellTypeToLagrangeQuadrilateral(self) -> None\nC++: void SetCellTypeToLagrangeQuadrilateral()\n\n"},
  {"SetCellTypeToLagrangeHexahedron", PyvtkGenericCell_SetCellTypeToLagrangeHexahedron, METH_VARARGS,
   "SetCellTypeToLagrangeHexahedron(self) -> None\nC++: void SetCellTypeToLagrangeHexahedron()\n\n"},
  {"SetCellTypeToLagrangeWedge", PyvtkGenericCell_SetCellTypeToLagrangeWedge, METH_VARARGS,
   "SetCellTypeToLagrangeWedge(self) -> None\nC++: void SetCellTypeToLagrangeWedge()\n\n"},
  {"SetCellTypeToBezierTriangle", PyvtkGenericCell_SetCellTypeToBezierTriangle, METH_VARARGS,
   "SetCellTypeToBezierTriangle(self) -> None\nC++: void SetCellTypeToBezierTriangle()\n\n"},
  {"SetCellTypeToBezierTetra", PyvtkGenericCell_SetCellTypeToBezierTetra, METH_VARARGS,
   "SetCellTypeToBezierTetra(self) -> None\nC++: void SetCellTypeToBezierTetra()\n\n"},
  {"SetCellTypeToBezierCurve", PyvtkGenericCell_SetCellTypeToBezierCurve, METH_VARARGS,
   "SetCellTypeToBezierCurve(self) -> None\nC++: void SetCellTypeToBezierCurve()\n\n"},
  {"SetCellTypeToBezierQuadrilateral", PyvtkGenericCell_SetCellTypeToBezierQuadrilateral, METH_VARARGS,
   "SetCellTypeToBezierQuadrilateral(self) -> None\nC++: void SetCellTypeToBezierQuadrilateral()\n\n"},
  {"SetCellTypeToBezierHexahedron", PyvtkGenericCell_SetCellTypeToBezierHexahedron, METH_VARARGS,
   "SetCellTypeToBezierHexahedron(self) -> None\nC++: void SetCellTypeToBezierHexahedron()\n\n"},
  {"SetCellTypeToBezierWedge", PyvtkGenericCell_SetCellTypeToBezierWedge, METH_VARARGS,
   "SetCellTypeToBezierWedge(self) -> None\nC++: void SetCellTypeToBezierWedge()\n\n"},
  {"InstantiateCell", PyvtkGenericCell_InstantiateCell, METH_VARARGS,
   "InstantiateCell(cellType:int) -> vtkCell\nC++: static vtkCell *InstantiateCell(int cellType)\n\nInstantiate a new vtkCell based on it's cell type value\n"},
  {"GetRepresentativeCell", PyvtkGenericCell_GetRepresentativeCell, METH_VARARGS,
   "GetRepresentativeCell(self) -> vtkCell\nC++: vtkCell *GetRepresentativeCell()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGenericCell_Doc =
  "vtkGenericCell - provides thread-safe access to cells\n\n"
  "Superclass: vtkCell\n\n"
  "vtkGenericCell is a class that provides access to concrete types of\n"
  "cells. It's main purpose is to allow thread-safe access to cells,\n"
  "supporting the vtkDataSet::GetCell(vtkGenericCell *) method.\n"
  "vtkGenericCell acts like any type of cell, it just dereferences an\n"
  "internal representation. The SetCellType() methods use #define\n"
  "constants; these are defined in the file vtkCellType.h.\n\n"
  "@sa\n"
  "vtkCell vtkDataSet\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGenericCell_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkGenericCell", // tp_name
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
  PyvtkGenericCell_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGenericCell_StaticNew()
{
  return vtkGenericCell::New();
}

PyObject *PyvtkGenericCell_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGenericCell_Type, PyvtkGenericCell_Methods,
    "vtkGenericCell",
 &PyvtkGenericCell_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGenericCell(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGenericCell_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGenericCell", o) != 0)
  {
    Py_DECREF(o);
  }

}

