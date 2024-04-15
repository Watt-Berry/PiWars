// python wrapper for vtkConvexPointSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConvexPointSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvexPointSet(PyObject *dict); }
extern "C" { PyObject *PyvtkConvexPointSet_ClassNew(); }

#ifndef DECLARED_PyvtkCell3D_ClassNew
extern "C" { PyObject *PyvtkCell3D_ClassNew(); }
#define DECLARED_PyvtkCell3D_ClassNew
#endif

static PyObject *
PyvtkConvexPointSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvexPointSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvexPointSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvexPointSet *tempr = vtkConvexPointSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvexPointSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvexPointSet::NewInstance());

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
PyvtkConvexPointSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConvexPointSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConvexPointSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_HasFixedTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasFixedTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasFixedTopology() :
      op->vtkConvexPointSet::HasFixedTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetEdgePoints(temp0, temp1c);
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
PyvtkConvexPointSet_GetFacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetFacePoints(temp0, temp1c));

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
PyvtkConvexPointSet_GetEdgeToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetEdgeToAdjacentFaces(temp0, temp1c);
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
PyvtkConvexPointSet_GetFaceToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetFaceToAdjacentFaces(temp0, temp1c));

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
PyvtkConvexPointSet_GetPointToIncidentEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetPointToIncidentEdges(temp0, temp1c));

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
PyvtkConvexPointSet_GetPointToIncidentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetPointToIncidentFaces(temp0, temp1c));

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
PyvtkConvexPointSet_GetPointToOneRingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToOneRingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetPointToOneRingPoints(temp0, temp1c));

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
PyvtkConvexPointSet_GetCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetCentroid(temp0));

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
PyvtkConvexPointSet_GetParametricCoords(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCoords");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t sizer = 3 * op->GetNumberOfPoints();
    double *tempr = (ap.IsBound() ?
      op->GetParametricCoords() :
      op->vtkConvexPointSet::GetParametricCoords());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkConvexPointSet::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_RequiresInitialization(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RequiresInitialization");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->RequiresInitialization() :
      op->vtkConvexPointSet::RequiresInitialization());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkConvexPointSet::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkConvexPointSet::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkConvexPointSet::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkConvexPointSet::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkConvexPointSet::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkConvexPointSet_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::EvaluateLocation(temp0, temp1, temp2, temp3);
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
PyvtkConvexPointSet_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkConvexPointSet_Triangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::Derivatives(temp0, temp1, temp2, temp3, temp4);
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
PyvtkConvexPointSet_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_GetParametricCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParametricCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::GetParametricCenter(temp0));

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
PyvtkConvexPointSet_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkConvexPointSet::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvexPointSet_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::InterpolateFunctions(temp0, temp1);
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
PyvtkConvexPointSet_InterpolateDerivs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateDerivs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvexPointSet *op = static_cast<vtkConvexPointSet *>(vp);

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
      op->vtkConvexPointSet::InterpolateDerivs(temp0, temp1);
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

static PyMethodDef PyvtkConvexPointSet_Methods[] = {
  {"IsTypeOf", PyvtkConvexPointSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvexPointSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvexPointSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConvexPointSet\nC++: static vtkConvexPointSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvexPointSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConvexPointSet\nC++: vtkConvexPointSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConvexPointSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConvexPointSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"HasFixedTopology", PyvtkConvexPointSet_HasFixedTopology, METH_VARARGS,
   "HasFixedTopology(self) -> int\nC++: virtual vtkTypeBool HasFixedTopology()\n\nSee vtkCell3D API for description of this method.\n"},
  {"GetEdgePoints", PyvtkConvexPointSet_GetEdgePoints, METH_VARARGS,
   "GetEdgePoints(self, edgeId:int, pts:(int, int)) -> None\nC++: void GetEdgePoints(vtkIdType edgeId, const vtkIdType *&pts)\n    override;\n\nSee vtkCell3D API for description of these methods.\n@warning These method are unimplemented in vtkConvexPointSet\n"},
  {"GetFacePoints", PyvtkConvexPointSet_GetFacePoints, METH_VARARGS,
   "GetFacePoints(self, faceId:int, pts:(int, ...)) -> int\nC++: vtkIdType GetFacePoints(vtkIdType faceId,\n    const vtkIdType *&pts) override;\n\nGet the list of vertices that define a face. The list is\nterminated with a negative number. Note that the vertices are\n0-offset; that is, they refer to the ids of the cell, not the\npoint ids of the mesh that the cell belongs to. The faceId must\nrange between 0<=faceId<this->GetNumberOfFaces().\n\n@return The number of points in face faceId\n"},
  {"GetEdgeToAdjacentFaces", PyvtkConvexPointSet_GetEdgeToAdjacentFaces, METH_VARARGS,
   "GetEdgeToAdjacentFaces(self, edgeId:int, pts:(int, int)) -> None\nC++: void GetEdgeToAdjacentFaces(vtkIdType edgeId,\n    const vtkIdType *&pts) override;\n\nGet the ids of the two adjacent faces to edge of id edgeId. The\noutput face ids are sorted from id of lowest rank to highest.\nNote that the faces are 0-offset; that is, they refer to the ids\nof the cells, not the face ids of the mesh that the cell belongs\nto. The edgeId must range between\n0<=edgeId<this->GetNumberOfEdges().\n"},
  {"GetFaceToAdjacentFaces", PyvtkConvexPointSet_GetFaceToAdjacentFaces, METH_VARARGS,
   "GetFaceToAdjacentFaces(self, faceId:int, faceIds:(int, ...))\n    -> int\nC++: vtkIdType GetFaceToAdjacentFaces(vtkIdType faceId,\n    const vtkIdType *&faceIds) override;\n\nGet the ids of the adjacent faces to face of id faceId. The order\nof faces is consistent. They are always ordered in counter\nclockwise w.r.t. normal orientation. The first id faces[0]\ncorresponds to the face sharing point of id pts[0] where pts is\nobtained from this->GetFacePoints(faceId, pts), being the \"most counter\nclockwise\" oriented w.r.t. face faceId. Note that the faces are\n0-offset; that is, they refer to the ids of the cell, not the\nface ids of the mesh that the cell belongs to. The faceId must be\nbetween 0<=faceId<this->GetNumberOfFaces();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The number of adjacent faces to faceId.\n"},
  {"GetPointToIncidentEdges", PyvtkConvexPointSet_GetPointToIncidentEdges, METH_VARARGS,
   "GetPointToIncidentEdges(self, pointId:int, edgeIds:(int, ...))\n    -> int\nC++: vtkIdType GetPointToIncidentEdges(vtkIdType pointId,\n    const vtkIdType *&edgeIds) override;\n\nGet the ids of the incident edges to point of id pointId. Edges\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first edge\ncorresponds to the edge containing point of id pts[0], where pts\nis obtained from this->GetPointToOnRingVertices(pointId, pts).\nNote that the edges are 0-offset; that is, they refer to the ids\nof the cell, not the edge ids of the mesh that the cell belongs\nto. The edgeId must be between\n0<=edgeId<this->GetNumberOfEdges();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToIncidentFaces", PyvtkConvexPointSet_GetPointToIncidentFaces, METH_VARARGS,
   "GetPointToIncidentFaces(self, pointId:int, faceIds:(int, ...))\n    -> int\nC++: vtkIdType GetPointToIncidentFaces(vtkIdType pointId,\n    const vtkIdType *&faceIds) override;\n\nGet the ids of the incident faces point of id pointId. Faces are\nsorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first face\ncorresponds to the face containing edge of id edges[0], where\nedges is obtained from this->GetPointToIncidentEdges(pointId,\nedges), such that face faces[0] is the \"most counterclockwise\"\nface incident to point pointId containing edges[0]. Note that the\nfaces are 0-offset; that is, they refer to the ids of the cell,\nnot the face ids of the mesh that the cell belongs to. The\npointId must be between 0<=pointId<this->GetNumberOfPoints().\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToOneRingPoints", PyvtkConvexPointSet_GetPointToOneRingPoints, METH_VARARGS,
   "GetPointToOneRingPoints(self, pointId:int, pts:(int, ...)) -> int\nC++: vtkIdType GetPointToOneRingPoints(vtkIdType pointId,\n    const vtkIdType *&pts) override;\n\nGet the ids of a one-ring surrounding point of id pointId. Points\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first point\ncorresponds to the point contained in edges[0], where edges is\nobtained from this->GetPointToIncidentEdges(pointId, edges). Note\nthat the points are 0-offset; that is, they refer to the ids of\nthe cell, not the point ids of the mesh that the cell belongs to.\nThe pointId must be between 0<pointId<this->GetNumberOfPoints().\n@return The valence of point pointId.\n"},
  {"GetCentroid", PyvtkConvexPointSet_GetCentroid, METH_VARARGS,
   "GetCentroid(self, centroid:[float, float, float]) -> bool\nC++: bool GetCentroid(double centroid[3]) override;\n\nComputes the centroid of the cell.\n"},
  {"GetParametricCoords", PyvtkConvexPointSet_GetParametricCoords, METH_VARARGS,
   "GetParametricCoords(self) -> (float, ...)\nC++: double *GetParametricCoords() override;\n\nSee vtkCell3D API for description of this method.\n"},
  {"GetCellType", PyvtkConvexPointSet_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"RequiresInitialization", PyvtkConvexPointSet_RequiresInitialization, METH_VARARGS,
   "RequiresInitialization(self) -> int\nC++: int RequiresInitialization() override;\n\nThis cell requires that it be initialized prior to access.\n"},
  {"Initialize", PyvtkConvexPointSet_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\n"},
  {"GetNumberOfEdges", PyvtkConvexPointSet_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nA convex point set has no explicit cell edge or faces; however\nimplicitly (after triangulation) it does. Currently the method\nGetNumberOfEdges() always returns 0 while the GetNumberOfFaces()\nreturns the number of boundary triangles of the triangulation of\nthe convex point set. The method GetNumberOfFaces() triggers a\ntriangulation of the convex point set; repeated calls to\nGetFace() then return the boundary faces. (Note:\nGetNumberOfEdges() currently returns 0 because it is a rarely\nused method and hard to implement. It can be changed in the\nfuture.\n"},
  {"GetEdge", PyvtkConvexPointSet_GetEdge, METH_VARARGS,
   "GetEdge(self, __a:int) -> vtkCell\nC++: vtkCell *GetEdge(int) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetNumberOfFaces", PyvtkConvexPointSet_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetFace", PyvtkConvexPointSet_GetFace, METH_VARARGS,
   "GetFace(self, faceId:int) -> vtkCell\nC++: vtkCell *GetFace(int faceId) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"Contour", PyvtkConvexPointSet_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nSatisfy the vtkCell API. This method contours by triangulating\nthe cell and then contouring the resulting tetrahedra.\n"},
  {"Clip", PyvtkConvexPointSet_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, connectivity:vtkCellArray,\n     inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut) override;\n\nSatisfy the vtkCell API. This method contours by triangulating\nthe cell and then adding clip-edge intersection points into the\ntriangulation; extracting the clipped region.\n"},
  {"EvaluatePosition", PyvtkConvexPointSet_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nSatisfy the vtkCell API. This method determines the subId,\npcoords, and weights by triangulating the convex point set, and\nthen determining which tetrahedron the point lies in.\n"},
  {"EvaluateLocation", PyvtkConvexPointSet_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nThe inverse of EvaluatePosition.\n"},
  {"IntersectWithLine", PyvtkConvexPointSet_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nTriangulates the cells and then intersects them to determine the\nintersection point.\n"},
  {"Triangulate", PyvtkConvexPointSet_Triangulate, METH_VARARGS,
   "Triangulate(self, index:int, ptIds:vtkIdList, pts:vtkPoints)\n    -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\n\nTriangulate using methods of vtkOrderedTriangulator.\n"},
  {"Derivatives", PyvtkConvexPointSet_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nComputes derivatives by triangulating and from subId and pcoords,\nevaluating derivatives on the resulting tetrahedron.\n"},
  {"CellBoundary", PyvtkConvexPointSet_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nReturns the set of points forming a face of the triangulation of\nthese points that are on the boundary of the cell that are\nclosest parametrically to the point specified.\n"},
  {"GetParametricCenter", PyvtkConvexPointSet_GetParametricCenter, METH_VARARGS,
   "GetParametricCenter(self, pcoords:[float, float, float]) -> int\nC++: int GetParametricCenter(double pcoords[3]) override;\n\nReturn the center of the cell in parametric coordinates.\n"},
  {"IsPrimaryCell", PyvtkConvexPointSet_IsPrimaryCell, METH_VARARGS,
   "IsPrimaryCell(self) -> int\nC++: int IsPrimaryCell() override;\n\nA convex point set is triangulated prior to any operations on it\nso it is not a primary cell, it is a composite cell.\n"},
  {"InterpolateFunctions", PyvtkConvexPointSet_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, pcoords:(float, float, float),\n    sf:[float, ...]) -> None\nC++: void InterpolateFunctions(const double pcoords[3],\n    double *sf) override;\n\nCompute the interpolation functions/derivatives (aka shape\nfunctions/derivatives)\n"},
  {"InterpolateDerivs", PyvtkConvexPointSet_InterpolateDerivs, METH_VARARGS,
   "InterpolateDerivs(self, pcoords:(float, float, float),\n    derivs:[float, ...]) -> None\nC++: void InterpolateDerivs(const double pcoords[3],\n    double *derivs) override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConvexPointSet_Doc =
  "vtkConvexPointSet - a 3D cell defined by a set of convex points\n\n"
  "Superclass: vtkCell3D\n\n"
  "vtkConvexPointSet is a concrete implementation that represents a 3D\n"
  "cell defined by a convex set of points. An example of such a cell is\n"
  "an octant (from an octree). vtkConvexPointSet uses the ordered\n"
  "triangulations approach (vtkOrderedTriangulator) to create\n"
  "triangulations guaranteed to be compatible across shared faces. This\n"
  "allows a general approach to processing complex, convex cell types.\n\n"
  "@sa\n"
  "vtkHexahedron vtkPyramid vtkTetra vtkVoxel vtkWedge\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConvexPointSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkConvexPointSet", // tp_name
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
  PyvtkConvexPointSet_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvexPointSet_StaticNew()
{
  return vtkConvexPointSet::New();
}

PyObject *PyvtkConvexPointSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConvexPointSet_Type, PyvtkConvexPointSet_Methods,
    "vtkConvexPointSet",
 &PyvtkConvexPointSet_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvexPointSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvexPointSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvexPointSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

