// python wrapper for vtkWedge
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWedge.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWedge(PyObject *dict); }
extern "C" { PyObject *PyvtkWedge_ClassNew(); }

#ifndef DECLARED_PyvtkCell3D_ClassNew
extern "C" { PyObject *PyvtkCell3D_ClassNew(); }
#define DECLARED_PyvtkCell3D_ClassNew
#endif

static PyObject *
PyvtkWedge_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWedge::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWedge::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWedge *tempr = vtkWedge::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWedge *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWedge::NewInstance());

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
PyvtkWedge_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWedge::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWedge::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfEdges()),
                      "0 <= edgeId && edgeId < GetNumberOfEdges()"))
  {
    if (ap.IsBound())
    {
      op->GetEdgePoints(temp0, temp1c);
    }
    else
    {
      op->vtkWedge::GetEdgePoints(temp0, temp1c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, 2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetFacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfFaces()),
                      "0 <= faceId && faceId < GetNumberOfFaces()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFacePoints(temp0, temp1c) :
      op->vtkWedge::GetFacePoints(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, tempr);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetEdgeToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfEdges()),
                      "0 <= edgeId && edgeId < GetNumberOfEdges()"))
  {
    if (ap.IsBound())
    {
      op->GetEdgeToAdjacentFaces(temp0, temp1c);
    }
    else
    {
      op->vtkWedge::GetEdgeToAdjacentFaces(temp0, temp1c);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, 2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetFaceToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfFaces()),
                      "0 <= faceId && faceId < GetNumberOfFaces()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFaceToAdjacentFaces(temp0, temp1c) :
      op->vtkWedge::GetFaceToAdjacentFaces(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, tempr);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToIncidentEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointToIncidentEdges(temp0, temp1c) :
      op->vtkWedge::GetPointToIncidentEdges(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, tempr);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToIncidentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointToIncidentFaces(temp0, temp1c) :
      op->vtkWedge::GetPointToIncidentFaces(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, tempr);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToOneRingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToOneRingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointToOneRingPoints(temp0, temp1c) :
      op->vtkWedge::GetPointToOneRingPoints(temp0, temp1c));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1c, tempr);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->GetCentroid(temp0) :
      op->vtkWedge::GetCentroid(temp0));

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
PyvtkWedge_IsInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInsideOut() :
      op->vtkWedge::IsInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkWedge::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkWedge::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkWedge::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkWedge::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkWedge::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkWedge::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkWedge_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkWedge_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkWedge_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkWedge_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkWedge::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetTriangleCases(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTriangleCases");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int *tempr = vtkWedge::GetTriangleCases(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

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
      op->vtkWedge::GetParametricCenter(temp0));

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
PyvtkWedge_InterpolationFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationFunctions");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkWedge::InterpolationFunctions(temp0, temp1);

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
PyvtkWedge_InterpolationDerivs(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InterpolationDerivs");

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 18;
  double temp1[18];
  double save1[18];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkWedge::InterpolationDerivs(temp0, temp1);

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
PyvtkWedge_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
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
      op->vtkWedge::InterpolateFunctions(temp0, temp1);
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
PyvtkWedge_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWedge *op = static_cast<vtkWedge *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 18;
  double temp1[18];
  double save1[18];
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
      op->vtkWedge::InterpolateDerivs(temp0, temp1);
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
PyvtkWedge_GetEdgeArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeArray");

  long long temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetEdgeArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetFaceArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceArray");

  long long temp0;
  size_t sizer = 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetFaceArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetEdgeToAdjacentFacesArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeToAdjacentFacesArray");

  long long temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetEdgeToAdjacentFacesArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetFaceToAdjacentFacesArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFaceToAdjacentFacesArray");

  long long temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetFaceToAdjacentFacesArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToIncidentEdgesArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointToIncidentEdgesArray");

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetPointToIncidentEdgesArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToIncidentFacesArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointToIncidentFacesArray");

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetPointToIncidentFacesArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_GetPointToOneRingPointsArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointToOneRingPointsArray");

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const long long *tempr = vtkWedge::GetPointToOneRingPointsArray(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkWedge_ComputeCentroid(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkPoints *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkWedge::ComputeCentroid(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWedge_Methods[] = {
  {"IsTypeOf", PyvtkWedge_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWedge_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWedge_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWedge\nC++: static vtkWedge *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWedge_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWedge\nC++: vtkWedge *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWedge_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWedge_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEdgePoints", PyvtkWedge_GetEdgePoints, METH_VARARGS,
   "GetEdgePoints(self, edgeId:int, pts:(int, int)) -> None\nC++: void GetEdgePoints(vtkIdType edgeId, const vtkIdType *&pts)\n    override;\n\nSee vtkCell3D API for description of these methods.\n"},
  {"GetFacePoints", PyvtkWedge_GetFacePoints, METH_VARARGS,
   "GetFacePoints(self, faceId:int, pts:(int, ...)) -> int\nC++: vtkIdType GetFacePoints(vtkIdType faceId,\n    const vtkIdType *&pts) override;\n\nGet the list of vertices that define a face. The list is\nterminated with a negative number. Note that the vertices are\n0-offset; that is, they refer to the ids of the cell, not the\npoint ids of the mesh that the cell belongs to. The faceId must\nrange between 0<=faceId<this->GetNumberOfFaces().\n\n@return The number of points in face faceId\n"},
  {"GetEdgeToAdjacentFaces", PyvtkWedge_GetEdgeToAdjacentFaces, METH_VARARGS,
   "GetEdgeToAdjacentFaces(self, edgeId:int, pts:(int, int)) -> None\nC++: void GetEdgeToAdjacentFaces(vtkIdType edgeId,\n    const vtkIdType *&pts) override;\n\nGet the ids of the two adjacent faces to edge of id edgeId. The\noutput face ids are sorted from id of lowest rank to highest.\nNote that the faces are 0-offset; that is, they refer to the ids\nof the cells, not the face ids of the mesh that the cell belongs\nto. The edgeId must range between\n0<=edgeId<this->GetNumberOfEdges().\n"},
  {"GetFaceToAdjacentFaces", PyvtkWedge_GetFaceToAdjacentFaces, METH_VARARGS,
   "GetFaceToAdjacentFaces(self, faceId:int, faceIds:(int, ...))\n    -> int\nC++: vtkIdType GetFaceToAdjacentFaces(vtkIdType faceId,\n    const vtkIdType *&faceIds) override;\n\nGet the ids of the adjacent faces to face of id faceId. The order\nof faces is consistent. They are always ordered in counter\nclockwise w.r.t. normal orientation. The first id faces[0]\ncorresponds to the face sharing point of id pts[0] where pts is\nobtained from this->GetFacePoints(faceId, pts), being the \"most counter\nclockwise\" oriented w.r.t. face faceId. Note that the faces are\n0-offset; that is, they refer to the ids of the cell, not the\nface ids of the mesh that the cell belongs to. The faceId must be\nbetween 0<=faceId<this->GetNumberOfFaces();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The number of adjacent faces to faceId.\n"},
  {"GetPointToIncidentEdges", PyvtkWedge_GetPointToIncidentEdges, METH_VARARGS,
   "GetPointToIncidentEdges(self, pointId:int, edgeIds:(int, ...))\n    -> int\nC++: vtkIdType GetPointToIncidentEdges(vtkIdType pointId,\n    const vtkIdType *&edgeIds) override;\n\nGet the ids of the incident edges to point of id pointId. Edges\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first edge\ncorresponds to the edge containing point of id pts[0], where pts\nis obtained from this->GetPointToOnRingVertices(pointId, pts).\nNote that the edges are 0-offset; that is, they refer to the ids\nof the cell, not the edge ids of the mesh that the cell belongs\nto. The edgeId must be between\n0<=edgeId<this->GetNumberOfEdges();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToIncidentFaces", PyvtkWedge_GetPointToIncidentFaces, METH_VARARGS,
   "GetPointToIncidentFaces(self, pointId:int, faceIds:(int, ...))\n    -> int\nC++: vtkIdType GetPointToIncidentFaces(vtkIdType pointId,\n    const vtkIdType *&faceIds) override;\n\nGet the ids of the incident faces point of id pointId. Faces are\nsorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first face\ncorresponds to the face containing edge of id edges[0], where\nedges is obtained from this->GetPointToIncidentEdges(pointId,\nedges), such that face faces[0] is the \"most counterclockwise\"\nface incident to point pointId containing edges[0]. Note that the\nfaces are 0-offset; that is, they refer to the ids of the cell,\nnot the face ids of the mesh that the cell belongs to. The\npointId must be between 0<=pointId<this->GetNumberOfPoints().\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToOneRingPoints", PyvtkWedge_GetPointToOneRingPoints, METH_VARARGS,
   "GetPointToOneRingPoints(self, pointId:int, pts:(int, ...)) -> int\nC++: vtkIdType GetPointToOneRingPoints(vtkIdType pointId,\n    const vtkIdType *&pts) override;\n\nGet the ids of a one-ring surrounding point of id pointId. Points\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first point\ncorresponds to the point contained in edges[0], where edges is\nobtained from this->GetPointToIncidentEdges(pointId, edges). Note\nthat the points are 0-offset; that is, they refer to the ids of\nthe cell, not the point ids of the mesh that the cell belongs to.\nThe pointId must be between 0<pointId<this->GetNumberOfPoints().\n@return The valence of point pointId.\n"},
  {"GetCentroid", PyvtkWedge_GetCentroid, METH_VARARGS,
   "GetCentroid(self, centroid:[float, float, float]) -> bool\nC++: bool GetCentroid(double centroid[3]) override;\n\nComputes the centroid of the cell.\n"},
  {"IsInsideOut", PyvtkWedge_IsInsideOut, METH_VARARGS,
   "IsInsideOut(self) -> bool\nC++: bool IsInsideOut() override;\n\nReturns true if the normals of the vtkCell3D point inside the\ncell.\n\n@warning This flag is not precomputed. It is advised for the\n    return result of\nthis method to be stored in a local boolean by the user if needed\nmultiple times.\n"},
  {"GetCellType", PyvtkWedge_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellDimension", PyvtkWedge_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nThe topological dimension of the cell. (Satisfies vtkCell API.)\n"},
  {"GetNumberOfEdges", PyvtkWedge_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkWedge_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkWedge_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkWedge_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"CellBoundary", PyvtkWedge_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"Contour", PyvtkWedge_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"EvaluatePosition", PyvtkWedge_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkWedge_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"IntersectWithLine", PyvtkWedge_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition p1[3], p2[3] and tolerance tol. The method returns\nnon-zero value if intersection occurs. A parametric distance t\nbetween 0 and 1 along the ray representing the intersection\npoint, the point coordinates x[3] in data coordinates and also\npcoords[3] in parametric coordinates. subId is the index within\nthe cell if a composed cell like a triangle strip.\n"},
  {"Triangulate", PyvtkWedge_Triangulate, METH_VARARGS,
   "Triangulate(self, index:int, ptIds:vtkIdList, pts:vtkPoints)\n    -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {"Derivatives", PyvtkWedge_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"GetParametricCoords", PyvtkWedge_GetParametricCoords, METH_VARARGS,
   "GetParametricCoords(self) -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nReturn a contiguous array of parametric coordinates of the points\ndefining this cell. In other words, (px,py,pz, px,py,pz, etc..) \nThe coordinates are ordered consistent with the definition of the\npoint ordering for the cell. This method returns a non-nullptr\npointer when the cell is a primary type (i.e., IsPrimaryCell() is\ntrue). Note that 3D parametric coordinates are returned no matter\nwhat the topological dimension of the cell.\n"},
  {"GetTriangleCases", PyvtkWedge_GetTriangleCases, METH_VARARGS,
   "GetTriangleCases(caseId:int) -> Pointer\nC++: static int *GetTriangleCases(int caseId)\n\nReturn the case table for table-based isocontouring (aka marching\ncubes style implementations). A linear 3D cell with N vertices\nwill have 2**N cases. The returned case array lists three edges\nin order to produce one output triangle which may be repeated to\ngenerate multiple triangles. The list of cases terminates with a\n-1 entry.\n"},
  {"GetParametricCenter", PyvtkWedge_GetParametricCenter, METH_VARARGS,
   "GetParametricCenter(self, pcoords:[float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn the center of the wedge in parametric coordinates.\n"},
  {"InterpolationFunctions", PyvtkWedge_InterpolationFunctions, METH_VARARGS,
   "InterpolationFunctions(pcoords:(float, float, float),\n    weights:[float, float, float, float, float, float]) -> None\nC++: static void InterpolationFunctions(const double pcoords[3],\n    double weights[6])\n\n"},
  {"InterpolationDerivs", PyvtkWedge_InterpolationDerivs, METH_VARARGS,
   "InterpolationDerivs(pcoords:(float, float, float), derivs:[float,\n    float, float, float, float, float, float, float, float, float,\n     float, float, float, float, float, float, float, float])\n    -> None\nC++: static void InterpolationDerivs(const double pcoords[3],\n    double derivs[18])\n\n"},
  {"InterpolateFunctions", PyvtkWedge_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    weights:[float, float, float, float, float, float]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double weights[6]) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"InterpolateDerivs", PyvtkWedge_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, float, float, float, float, float, float,\n    float, float, float, float, float, float, float, float, float,\n     float, float]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double derivs[18]) override;\n\n"},
  {"GetEdgeArray", PyvtkWedge_GetEdgeArray, METH_VARARGS,
   "GetEdgeArray(edgeId:int) -> (int, int)\nC++: static const vtkIdType *GetEdgeArray(vtkIdType edgeId)\n\nReturn the ids of the vertices defining edge/face\n(`edgeId`/`faceId'). Ids are related to the cell, not to the\ndataset.\n\note The return type changed. It used to be int*, it is now const\nvtkIdType*. This is so ids are unified between vtkCell and\nvtkPoints, and so vtkCell ids can be used as inputs in algorithms\nsuch as vtkPolygon::ComputeNormal.\n"},
  {"GetFaceArray", PyvtkWedge_GetFaceArray, METH_VARARGS,
   "GetFaceArray(faceId:int) -> (int)\nC++: static const vtkIdType *GetFaceArray(vtkIdType faceId)\n\n"},
  {"GetEdgeToAdjacentFacesArray", PyvtkWedge_GetEdgeToAdjacentFacesArray, METH_VARARGS,
   "GetEdgeToAdjacentFacesArray(edgeId:int) -> (int, int)\nC++: static const vtkIdType *GetEdgeToAdjacentFacesArray(\n    vtkIdType edgeId)\n\nStatic method version of GetEdgeToAdjacentFaces.\n"},
  {"GetFaceToAdjacentFacesArray", PyvtkWedge_GetFaceToAdjacentFacesArray, METH_VARARGS,
   "GetFaceToAdjacentFacesArray(faceId:int) -> (int, int, int, int)\nC++: static const vtkIdType *GetFaceToAdjacentFacesArray(\n    vtkIdType faceId)\n\nStatic method version of GetFaceToAdjacentFaces.\n"},
  {"GetPointToIncidentEdgesArray", PyvtkWedge_GetPointToIncidentEdgesArray, METH_VARARGS,
   "GetPointToIncidentEdgesArray(pointId:int) -> (int, int, int)\nC++: static const vtkIdType *GetPointToIncidentEdgesArray(\n    vtkIdType pointId)\n\nStatic method version of GetPointToIncidentEdgesArray.\n"},
  {"GetPointToIncidentFacesArray", PyvtkWedge_GetPointToIncidentFacesArray, METH_VARARGS,
   "GetPointToIncidentFacesArray(pointId:int) -> (int, int, int)\nC++: static const vtkIdType *GetPointToIncidentFacesArray(\n    vtkIdType pointId)\n\nStatic method version of GetPointToIncidentFacesArray.\n"},
  {"GetPointToOneRingPointsArray", PyvtkWedge_GetPointToOneRingPointsArray, METH_VARARGS,
   "GetPointToOneRingPointsArray(pointId:int) -> (int, int, int)\nC++: static const vtkIdType *GetPointToOneRingPointsArray(\n    vtkIdType pointId)\n\nStatic method version of GetPointToOneRingPoints.\n"},
  {"ComputeCentroid", PyvtkWedge_ComputeCentroid, METH_VARARGS,
   "ComputeCentroid(points:vtkPoints, pointIds:(int, ...),\n    centroid:[float, float, float]) -> bool\nC++: static bool ComputeCentroid(vtkPoints *points,\n    const vtkIdType *pointIds, double centroid[3])\n\nStatic method version of GetCentroid.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWedge_Doc =
  "vtkWedge - a 3D cell that represents a linear wedge\n\n"
  "Superclass: vtkCell3D\n\n"
  "vtkWedge is a concrete implementation of vtkCell to represent a\n"
  "linear 3D wedge. A wedge consists of two triangular and three\n"
  "quadrilateral faces and is defined by the six points (0-5). vtkWedge\n"
  "uses the standard isoparametric shape functions for a linear wedge.\n"
  "The wedge is defined by the six points (0-5) where (0,1,2) is the\n"
  "base of the wedge which, using the right hand rule, forms a triangle\n"
  "whose normal points outward (away from the triangular face (3,4,5)).\n\n"
  "@sa\n"
  "vtkConvexPointSet vtkHexahedron vtkPyramid vtkTetra vtkVoxel\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWedge_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkWedge", // tp_name
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
  PyvtkWedge_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWedge_StaticNew()
{
  return vtkWedge::New();
}

PyObject *PyvtkWedge_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWedge_Type, PyvtkWedge_Methods,
    "vtkWedge",
 &PyvtkWedge_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWedge(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWedge_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWedge", o) != 0)
  {
    Py_DECREF(o);
  }

}

