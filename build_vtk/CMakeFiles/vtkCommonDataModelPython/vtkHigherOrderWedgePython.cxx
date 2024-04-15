// python wrapper for vtkHigherOrderWedge
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHigherOrderWedge.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHigherOrderWedge(PyObject *dict); }
extern "C" { PyObject *PyvtkHigherOrderWedge_ClassNew(); }

#ifndef DECLARED_PyvtkNonLinearCell_ClassNew
extern "C" { PyObject *PyvtkNonLinearCell_ClassNew(); }
#define DECLARED_PyvtkNonLinearCell_ClassNew
#endif

static PyObject *
PyvtkHigherOrderWedge_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderWedge::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHigherOrderWedge::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHigherOrderWedge *tempr = vtkHigherOrderWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderWedge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHigherOrderWedge::NewInstance());

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
PyvtkHigherOrderWedge_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHigherOrderWedge::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHigherOrderWedge::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetCellType();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkHigherOrderWedge::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresInitialization() :
      op->vtkHigherOrderWedge::RequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkHigherOrderWedge::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkHigherOrderWedge::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = op->GetEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = op->GetFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkHigherOrderWedge::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkHigherOrderWedge_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkHigherOrderWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkHigherOrderWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkHigherOrderWedge_SetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetParametricCoords();
    }
    else
    {
      op->vtkHigherOrderWedge::SetParametricCoords();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkHigherOrderWedge::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->vtkHigherOrderWedge::GetParametricCenter(temp0));

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
PyvtkHigherOrderWedge_GetParametricDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    double tempr = (ap.IsBound() ?
      op->GetParametricDistance(temp0) :
      op->vtkHigherOrderWedge::GetParametricDistance(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_SetOrderFromCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrderFromCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  vtkCellData *temp0 = nullptr;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCellData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrderFromCellData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHigherOrderWedge::SetOrderFromCellData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_SetUniformOrderFromNumPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformOrderFromNumPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUniformOrderFromNumPoints(temp0);
    }
    else
    {
      op->vtkHigherOrderWedge::SetUniformOrderFromNumPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
  int temp1;
  int temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetOrder(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHigherOrderWedge::SetOrder(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetOrder_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const int *tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkHigherOrderWedge::GetOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_GetOrder_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrder(temp0) :
      op->vtkHigherOrderWedge::GetOrder(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_GetOrder(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHigherOrderWedge_GetOrder_s1(self, args);
    case 1:
      return PyvtkHigherOrderWedge_GetOrder_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOrder");
  return nullptr;
}


static PyObject *
PyvtkHigherOrderWedge_PointCountSupportsUniformOrder(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PointCountSupportsUniformOrder");

  long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkHigherOrderWedge::PointCountSupportsUniformOrder(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->InterpolateFunctions(temp0, temp1);

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
PyvtkHigherOrderWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->InterpolateDerivs(temp0, temp1);

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
PyvtkHigherOrderWedge_SubCellCoordinatesFromId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubCellCoordinatesFromId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  vtkVector3i *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkVector3i") &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SubCellCoordinatesFromId(*temp0, temp1) :
      op->vtkHigherOrderWedge::SubCellCoordinatesFromId(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_SubCellCoordinatesFromId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubCellCoordinatesFromId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
    bool tempr = (ap.IsBound() ?
      op->SubCellCoordinatesFromId(temp0, temp1, temp2, temp3) :
      op->vtkHigherOrderWedge::SubCellCoordinatesFromId(temp0, temp1, temp2, temp3));

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
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_SubCellCoordinatesFromId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHigherOrderWedge_SubCellCoordinatesFromId_s1(self, args);
    case 4:
      return PyvtkHigherOrderWedge_SubCellCoordinatesFromId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SubCellCoordinatesFromId");
  return nullptr;
}


static PyObject *
PyvtkHigherOrderWedge_PointIndexFromIJK_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PointIndexFromIJK");

  int temp0;
  int temp1;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    int tempr = vtkHigherOrderWedge::PointIndexFromIJK(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_PointIndexFromIJK_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointIndexFromIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

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
      op->PointIndexFromIJK(temp0, temp1, temp2) :
      op->vtkHigherOrderWedge::PointIndexFromIJK(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHigherOrderWedge_PointIndexFromIJK_Methods[] = {
  {"PointIndexFromIJK", PyvtkHigherOrderWedge_PointIndexFromIJK_s1, METH_VARARGS | METH_STATIC,
   "iiiP *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHigherOrderWedge_PointIndexFromIJK(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHigherOrderWedge_PointIndexFromIJK_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkHigherOrderWedge_PointIndexFromIJK_s2(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PointIndexFromIJK");
  return nullptr;
}


static PyObject *
PyvtkHigherOrderWedge_TransformApproxToCellParams(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformApproxToCellParams");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
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

    bool tempr = (ap.IsBound() ?
      op->TransformApproxToCellParams(temp0, temp1) :
      op->vtkHigherOrderWedge::TransformApproxToCellParams(temp0, temp1));

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
PyvtkHigherOrderWedge_TransformFaceToCellParams(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TransformFaceToCellParams");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  int temp0;
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

    bool tempr = (ap.IsBound() ?
      op->TransformFaceToCellParams(temp0, temp1) :
      op->vtkHigherOrderWedge::TransformFaceToCellParams(temp0, temp1));

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
PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfApproximatingWedges");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = vtkHigherOrderWedge::GetNumberOfApproximatingWedges(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfApproximatingWedges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfApproximatingWedges() :
      op->vtkHigherOrderWedge::GetNumberOfApproximatingWedges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_Methods[] = {
  {"GetNumberOfApproximatingWedges", PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_s1, METH_VARARGS | METH_STATIC,
   "P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfApproximatingWedges");
  return nullptr;
}


static PyObject *
PyvtkHigherOrderWedge_GetBoundaryQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHigherOrderQuadrilateral *tempr = op->GetBoundaryQuad();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetBoundaryTri(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryTri");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHigherOrderTriangle *tempr = op->GetBoundaryTri();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetEdgeCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHigherOrderCurve *tempr = op->GetEdgeCell();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderWedge_GetInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderWedge *op = static_cast<vtkHigherOrderWedge *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkHigherOrderInterpolation *tempr = op->GetInterpolation();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHigherOrderWedge_Methods[] = {
  {"IsTypeOf", PyvtkHigherOrderWedge_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHigherOrderWedge_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHigherOrderWedge_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHigherOrderWedge\nC++: static vtkHigherOrderWedge *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHigherOrderWedge_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHigherOrderWedge\nC++: vtkHigherOrderWedge *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHigherOrderWedge_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHigherOrderWedge_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCellType", PyvtkHigherOrderWedge_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override = 0;\n\nReturn the type of cell.\n"},
  {"GetCellDimension", PyvtkHigherOrderWedge_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {"RequiresInitialization", PyvtkHigherOrderWedge_RequiresInitialization, METH_VARARGS,
   "RequiresInitialization(self) -> int\nC++: int RequiresInitialization() override;\n\nSome cells require initialization prior to access. For example,\nthey may have to triangulate themselves or set up internal data\nstructures.\n"},
  {"GetNumberOfEdges", PyvtkHigherOrderWedge_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkHigherOrderWedge_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkHigherOrderWedge_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override = 0;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkHigherOrderWedge_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override = 0;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"Initialize", PyvtkHigherOrderWedge_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\n"},
  {"CellBoundary", PyvtkHigherOrderWedge_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"EvaluatePosition", PyvtkHigherOrderWedge_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkHigherOrderWedge_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"Contour", PyvtkHigherOrderWedge_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"Clip", PyvtkHigherOrderWedge_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, polys:vtkCellArray,\n    inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *polys,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell. The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-nullptr,\nthe cell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)\n"},
  {"IntersectWithLine", PyvtkHigherOrderWedge_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition p1[3], p2[3] and tolerance tol. The method returns\nnon-zero value if intersection occurs. A parametric distance t\nbetween 0 and 1 along the ray representing the intersection\npoint, the point coordinates x[3] in data coordinates and also\npcoords[3] in parametric coordinates. subId is the index within\nthe cell if a composed cell like a triangle strip.\n"},
  {"Triangulate", PyvtkHigherOrderWedge_Triangulate, METH_VARARGS,
   "Triangulate(self, index:int, ptIds:vtkIdList, pts:vtkPoints)\n    -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {"Derivatives", PyvtkHigherOrderWedge_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"SetParametricCoords", PyvtkHigherOrderWedge_SetParametricCoords, METH_VARARGS,
   "SetParametricCoords(self) -> None\nC++: void SetParametricCoords()\n\n"},
  {"GetParametricCoords", PyvtkHigherOrderWedge_GetParametricCoords, METH_VARARGS,
   "GetParametricCoords(self) -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nReturn a contiguous array of parametric coordinates of the points\ndefining this cell. In other words, (px,py,pz, px,py,pz, etc..) \nThe coordinates are ordered consistent with the definition of the\npoint ordering for the cell. This method returns a non-nullptr\npointer when the cell is a primary type (i.e., IsPrimaryCell() is\ntrue). Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n"},
  {"GetParametricCenter", PyvtkHigherOrderWedge_GetParametricCenter, METH_VARARGS,
   "GetParametricCenter(self, center:[float, float, float]) -> int\nC++: int GetParametricCenter(double center[3]) override;\n\nReturn center of the cell in parametric coordinates.  Note that\nthe parametric center is not always located at (0.5,0.5,0.5). The\nreturn value is the subId that the center is in (if a composite\ncell). If you want the center in x-y-z space, invoke the\nEvaluateLocation() method.\n"},
  {"GetParametricDistance", PyvtkHigherOrderWedge_GetParametricDistance, METH_VARARGS,
   "GetParametricDistance(self, pcoords:(float, float, float))\n    -> float\nC++: double GetParametricDistance(const double pcoords[3])\n    override;\n\nReturn the distance of the parametric coordinate provided to the\ncell. If inside the cell, a distance of zero is returned. This is\nused during picking to get the correct cell picked. (The\ntolerance will occasionally allow cells to be picked who are not\nreally intersected \"inside\" the cell.)\n"},
  {"SetOrderFromCellData", PyvtkHigherOrderWedge_SetOrderFromCellData, METH_VARARGS,
   "SetOrderFromCellData(self, cell_data:vtkCellData, numPts:int,\n    cell_id:int) -> None\nC++: virtual void SetOrderFromCellData(vtkCellData *cell_data,\n    vtkIdType numPts, vtkIdType cell_id)\n\n"},
  {"SetUniformOrderFromNumPoints", PyvtkHigherOrderWedge_SetUniformOrderFromNumPoints, METH_VARARGS,
   "SetUniformOrderFromNumPoints(self, numPts:int) -> None\nC++: virtual void SetUniformOrderFromNumPoints(vtkIdType numPts)\n\n"},
  {"SetOrder", PyvtkHigherOrderWedge_SetOrder, METH_VARARGS,
   "SetOrder(self, s:int, t:int, u:int, numPts:int) -> None\nC++: virtual void SetOrder(int s, int t, int u, vtkIdType numPts)\n\n"},
  {"GetOrder", PyvtkHigherOrderWedge_GetOrder, METH_VARARGS,
   "GetOrder(self) -> Pointer\nC++: virtual const int *GetOrder()\nGetOrder(self, i:int) -> int\nC++: virtual int GetOrder(int i)\n\n"},
  {"PointCountSupportsUniformOrder", PyvtkHigherOrderWedge_PointCountSupportsUniformOrder, METH_VARARGS,
   "PointCountSupportsUniformOrder(pointsPerCell:int) -> bool\nC++: static bool PointCountSupportsUniformOrder(\n    vtkIdType pointsPerCell)\n\nReturn true if the number of points supports a cell of uniform\ndegree along each axis.\n"},
  {"InterpolateFunctions", PyvtkHigherOrderWedge_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    weights:[float, ...]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *weights) override = 0;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives) No-ops at this level. Typically overridden\nin subclasses.\n"},
  {"InterpolateDerivs", PyvtkHigherOrderWedge_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, ...]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override = 0;\n\n"},
  {"SubCellCoordinatesFromId", PyvtkHigherOrderWedge_SubCellCoordinatesFromId, METH_VARARGS,
   "SubCellCoordinatesFromId(self, ijk:vtkVector3i, subId:int) -> bool\nC++: bool SubCellCoordinatesFromId(vtkVector3i &ijk, int subId)\nSubCellCoordinatesFromId(self, i:int, j:int, k:int, subId:int)\n    -> bool\nC++: bool SubCellCoordinatesFromId(int &i, int &j, int &k,\n    int subId)\n\n"},
  {"PointIndexFromIJK", PyvtkHigherOrderWedge_PointIndexFromIJK, METH_VARARGS,
   "PointIndexFromIJK(i:int, j:int, k:int, order:(int, ...)) -> int\nC++: static int PointIndexFromIJK(int i, int j, int k,\n    const int *order)\nPointIndexFromIJK(self, i:int, j:int, k:int) -> int\nC++: int PointIndexFromIJK(int i, int j, int k)\n\n"},
  {"TransformApproxToCellParams", PyvtkHigherOrderWedge_TransformApproxToCellParams, METH_VARARGS,
   "TransformApproxToCellParams(self, subCell:int, pcoords:[float,\n    ...]) -> bool\nC++: bool TransformApproxToCellParams(int subCell,\n    double *pcoords)\n\n"},
  {"TransformFaceToCellParams", PyvtkHigherOrderWedge_TransformFaceToCellParams, METH_VARARGS,
   "TransformFaceToCellParams(self, bdyFace:int, pcoords:[float, ...])\n     -> bool\nC++: bool TransformFaceToCellParams(int bdyFace, double *pcoords)\n\n"},
  {"GetNumberOfApproximatingWedges", PyvtkHigherOrderWedge_GetNumberOfApproximatingWedges, METH_VARARGS,
   "GetNumberOfApproximatingWedges(order:(int, ...)) -> int\nC++: static int GetNumberOfApproximatingWedges(const int *order)\nGetNumberOfApproximatingWedges(self) -> int\nC++: int GetNumberOfApproximatingWedges()\n\n"},
  {"GetBoundaryQuad", PyvtkHigherOrderWedge_GetBoundaryQuad, METH_VARARGS,
   "GetBoundaryQuad(self) -> vtkHigherOrderQuadrilateral\nC++: virtual vtkHigherOrderQuadrilateral *GetBoundaryQuad()\n\n"},
  {"GetBoundaryTri", PyvtkHigherOrderWedge_GetBoundaryTri, METH_VARARGS,
   "GetBoundaryTri(self) -> vtkHigherOrderTriangle\nC++: virtual vtkHigherOrderTriangle *GetBoundaryTri()\n\n"},
  {"GetEdgeCell", PyvtkHigherOrderWedge_GetEdgeCell, METH_VARARGS,
   "GetEdgeCell(self) -> vtkHigherOrderCurve\nC++: virtual vtkHigherOrderCurve *GetEdgeCell()\n\n"},
  {"GetInterpolation", PyvtkHigherOrderWedge_GetInterpolation, METH_VARARGS,
   "GetInterpolation(self) -> vtkHigherOrderInterpolation\nC++: virtual vtkHigherOrderInterpolation *GetInterpolation()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHigherOrderWedge_Doc =
  "vtkHigherOrderWedge - A 3D cell that represents an arbitrary order\nHigherOrder wedge\n\n"
  "Superclass: vtkNonLinearCell\n\n"
  "vtkHigherOrderWedge is a concrete implementation of vtkCell to\n"
  "represent a 3D wedge using HigherOrder shape functions of user\n"
  "specified order. A wedge consists of two triangular and three\n"
  "quadrilateral faces. The first six points of the wedge (0-5) are the\n"
  "\"corner\" points where the first three points are the base of the\n"
  "wedge. This wedge point ordering is opposite the vtkWedge ordering\n"
  "though in that the base of the wedge defined by the first three\n"
  "points (0,1,2) form a triangle whose normal points inward (toward the\n"
  "triangular face (3,4,5)). While this is opposite the vtkWedge\n"
  "convention it is consistent with every other cell type in VTK. The\n"
  "first 2 parametric coordinates of the HigherOrder wedge or for the\n"
  "triangular base and vary between 0 and 1. The third parametric\n"
  "coordinate is between the two triangular faces and goes from 0 to 1\n"
  "as well.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHigherOrderWedge_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHigherOrderWedge", // tp_name
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
  PyvtkHigherOrderWedge_Doc, // tp_doc
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

PyObject *PyvtkHigherOrderWedge_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHigherOrderWedge_Type, PyvtkHigherOrderWedge_Methods,
    "vtkHigherOrderWedge",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkNonLinearCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHigherOrderWedge(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHigherOrderWedge_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHigherOrderWedge", o) != 0)
  {
    Py_DECREF(o);
  }

}

