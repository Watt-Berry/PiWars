// python wrapper for vtkCell3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCell3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCell3D(PyObject *dict); }
extern "C" { PyObject *PyvtkCell3D_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif

static PyObject *
PyvtkCell3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCell3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCell3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCell3D *tempr = vtkCell3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCell3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCell3D::NewInstance());

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
PyvtkCell3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCell3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCell3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetEdgePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfEdges()),
                      "0 <= edgeId && edgeId < GetNumberOfEdges()"))
  {
    op->GetEdgePoints(temp0, temp1c);

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
PyvtkCell3D_GetFacePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFacePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfFaces()),
                      "0 <= faceId && faceId < GetNumberOfFaces()"))
  {
    long long tempr = op->GetFacePoints(temp0, temp1c);

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
PyvtkCell3D_GetEdgeToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfEdges()),
                      "0 <= edgeId && edgeId < GetNumberOfEdges()"))
  {
    op->GetEdgeToAdjacentFaces(temp0, temp1c);

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
PyvtkCell3D_GetFaceToAdjacentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFaceToAdjacentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfFaces()),
                      "0 <= faceId && faceId < GetNumberOfFaces()"))
  {
    long long tempr = op->GetFaceToAdjacentFaces(temp0, temp1c);

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
PyvtkCell3D_GetPointToIncidentEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = op->GetPointToIncidentEdges(temp0, temp1c);

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
PyvtkCell3D_GetPointToIncidentFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToIncidentFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = op->GetPointToIncidentFaces(temp0, temp1c);

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
PyvtkCell3D_GetPointToOneRingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointToOneRingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(size1);
  long long *temp1 = store1.Data();
  const long long *temp1c = temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.CheckPrecond((0 <= temp0 && temp0 < op->GetNumberOfPoints()),
                      "0 <= pointId && pointId < GetNumberOfPoints()"))
  {
    long long tempr = op->GetPointToOneRingPoints(temp0, temp1c);

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
PyvtkCell3D_IsInsideOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsideOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInsideOut() :
      op->vtkCell3D::IsInsideOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetCentroid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCentroid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = op->GetCentroid(temp0);

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
PyvtkCell3D_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

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
      op->vtkCell3D::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

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
      op->vtkCell3D::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkCell3D::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_Inflate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inflate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Inflate(temp0) :
      op->vtkCell3D::Inflate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_SetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergeTolerance(temp0);
    }
    else
    {
      op->vtkCell3D::SetMergeTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetMergeToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMinValue() :
      op->vtkCell3D::GetMergeToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetMergeToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeToleranceMaxValue() :
      op->vtkCell3D::GetMergeToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCell3D_GetMergeTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergeTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCell3D *op = static_cast<vtkCell3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMergeTolerance() :
      op->vtkCell3D::GetMergeTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCell3D_Methods[] = {
  {"IsTypeOf", PyvtkCell3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCell3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCell3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCell3D\nC++: static vtkCell3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCell3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCell3D\nC++: vtkCell3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCell3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCell3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEdgePoints", PyvtkCell3D_GetEdgePoints, METH_VARARGS,
   "GetEdgePoints(self, edgeId:int, pts:(int, int)) -> None\nC++: virtual void GetEdgePoints(vtkIdType edgeId,\n    const vtkIdType *&pts)\n\nGet the pair of vertices that define an edge. The method returns\nthe number of vertices, along with an array of vertices. Note\nthat the vertices are 0-offset; that is, they refer to the ids of\nthe cell, not the point ids of the mesh that the cell belongs to.\nThe edgeId must range between 0<=edgeId<this->GetNumberOfEdges().\n"},
  {"GetFacePoints", PyvtkCell3D_GetFacePoints, METH_VARARGS,
   "GetFacePoints(self, faceId:int, pts:(int, ...)) -> int\nC++: virtual vtkIdType GetFacePoints(vtkIdType faceId,\n    const vtkIdType *&pts)\n\nGet the list of vertices that define a face. The list is\nterminated with a negative number. Note that the vertices are\n0-offset; that is, they refer to the ids of the cell, not the\npoint ids of the mesh that the cell belongs to. The faceId must\nrange between 0<=faceId<this->GetNumberOfFaces().\n\n@return The number of points in face faceId\n"},
  {"GetEdgeToAdjacentFaces", PyvtkCell3D_GetEdgeToAdjacentFaces, METH_VARARGS,
   "GetEdgeToAdjacentFaces(self, edgeId:int, faceIds:(int, int))\n    -> None\nC++: virtual void GetEdgeToAdjacentFaces(vtkIdType edgeId,\n    const vtkIdType *&faceIds)\n\nGet the ids of the two adjacent faces to edge of id edgeId. The\noutput face ids are sorted from id of lowest rank to highest.\nNote that the faces are 0-offset; that is, they refer to the ids\nof the cells, not the face ids of the mesh that the cell belongs\nto. The edgeId must range between\n0<=edgeId<this->GetNumberOfEdges().\n"},
  {"GetFaceToAdjacentFaces", PyvtkCell3D_GetFaceToAdjacentFaces, METH_VARARGS,
   "GetFaceToAdjacentFaces(self, faceId:int, faceIds:(int, ...))\n    -> int\nC++: virtual vtkIdType GetFaceToAdjacentFaces(vtkIdType faceId,\n    const vtkIdType *&faceIds)\n\nGet the ids of the adjacent faces to face of id faceId. The order\nof faces is consistent. They are always ordered in counter\nclockwise w.r.t. normal orientation. The first id faces[0]\ncorresponds to the face sharing point of id pts[0] where pts is\nobtained from this->GetFacePoints(faceId, pts), being the \"most counter\nclockwise\" oriented w.r.t. face faceId. Note that the faces are\n0-offset; that is, they refer to the ids of the cell, not the\nface ids of the mesh that the cell belongs to. The faceId must be\nbetween 0<=faceId<this->GetNumberOfFaces();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The number of adjacent faces to faceId.\n"},
  {"GetPointToIncidentEdges", PyvtkCell3D_GetPointToIncidentEdges, METH_VARARGS,
   "GetPointToIncidentEdges(self, pointId:int, edgeIds:(int, ...))\n    -> int\nC++: virtual vtkIdType GetPointToIncidentEdges(vtkIdType pointId,\n    const vtkIdType *&edgeIds)\n\nGet the ids of the incident edges to point of id pointId. Edges\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first edge\ncorresponds to the edge containing point of id pts[0], where pts\nis obtained from this->GetPointToOnRingVertices(pointId, pts).\nNote that the edges are 0-offset; that is, they refer to the ids\nof the cell, not the edge ids of the mesh that the cell belongs\nto. The edgeId must be between\n0<=edgeId<this->GetNumberOfEdges();\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToIncidentFaces", PyvtkCell3D_GetPointToIncidentFaces, METH_VARARGS,
   "GetPointToIncidentFaces(self, pointId:int, faceIds:(int, ...))\n    -> int\nC++: virtual vtkIdType GetPointToIncidentFaces(vtkIdType pointId,\n    const vtkIdType *&faceIds)\n\nGet the ids of the incident faces point of id pointId. Faces are\nsorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first face\ncorresponds to the face containing edge of id edges[0], where\nedges is obtained from this->GetPointToIncidentEdges(pointId,\nedges), such that face faces[0] is the \"most counterclockwise\"\nface incident to point pointId containing edges[0]. Note that the\nfaces are 0-offset; that is, they refer to the ids of the cell,\nnot the face ids of the mesh that the cell belongs to. The\npointId must be between 0<=pointId<this->GetNumberOfPoints().\n\n@warning If the vtkCell3D is \"inside out\", i.e. normals point\n    inside the cell, the order is\ninverted.\n@return The valence of point pointId.\n"},
  {"GetPointToOneRingPoints", PyvtkCell3D_GetPointToOneRingPoints, METH_VARARGS,
   "GetPointToOneRingPoints(self, pointId:int, pts:(int, ...)) -> int\nC++: virtual vtkIdType GetPointToOneRingPoints(vtkIdType pointId,\n    const vtkIdType *&pts)\n\nGet the ids of a one-ring surrounding point of id pointId. Points\nare sorted in counter clockwise order w.r.t. bisectrix pointing\noutside the cell at point of id pointId. The first point\ncorresponds to the point contained in edges[0], where edges is\nobtained from this->GetPointToIncidentEdges(pointId, edges). Note\nthat the points are 0-offset; that is, they refer to the ids of\nthe cell, not the point ids of the mesh that the cell belongs to.\nThe pointId must be between 0<pointId<this->GetNumberOfPoints().\n@return The valence of point pointId.\n"},
  {"IsInsideOut", PyvtkCell3D_IsInsideOut, METH_VARARGS,
   "IsInsideOut(self) -> bool\nC++: virtual bool IsInsideOut()\n\nReturns true if the normals of the vtkCell3D point inside the\ncell.\n\n@warning This flag is not precomputed. It is advised for the\n    return result of\nthis method to be stored in a local boolean by the user if needed\nmultiple times.\n"},
  {"GetCentroid", PyvtkCell3D_GetCentroid, METH_VARARGS,
   "GetCentroid(self, centroid:[float, float, float]) -> bool\nC++: virtual bool GetCentroid(double centroid[3])\n\nComputes the centroid of the cell.\n"},
  {"Contour", PyvtkCell3D_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"Clip", PyvtkCell3D_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, connectivity:vtkCellArray,\n     inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator,\n    vtkCellArray *connectivity, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd, int insideOut) override;\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell.  The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-nullptr,\nthe cell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)  (Satisfies\nvtkCell API.)\n"},
  {"GetCellDimension", PyvtkCell3D_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nThe topological dimension of the cell. (Satisfies vtkCell API.)\n"},
  {"Inflate", PyvtkCell3D_Inflate, METH_VARARGS,
   "Inflate(self, dist:float) -> int\nC++: int Inflate(double dist) override;\n\nInflates the cell. Each face is displaced following its normal by\na distance of value `dist`. If dist is negative, then the cell\nshrinks. The resulting cell edges / faces are colinear / coplanar\nto their previous self.\n\nDegenerate parts of the 3D cell are unchanged. This happens a\npoints to which incident faces are homogeneous to a plane, to a\nline, or to a point.\n\n\\return 1 if inflation was successful, 0 if no inflation was\n    performed\n"},
  {"SetMergeTolerance", PyvtkCell3D_SetMergeTolerance, METH_VARARGS,
   "SetMergeTolerance(self, _arg:float) -> None\nC++: virtual void SetMergeTolerance(double _arg)\n\nSet the tolerance for merging clip intersection points that are\nnear the vertices of cells. This tolerance is used to prevent the\ngeneration of degenerate tetrahedra during clipping.\n"},
  {"GetMergeToleranceMinValue", PyvtkCell3D_GetMergeToleranceMinValue, METH_VARARGS,
   "GetMergeToleranceMinValue(self) -> float\nC++: virtual double GetMergeToleranceMinValue()\n\n"},
  {"GetMergeToleranceMaxValue", PyvtkCell3D_GetMergeToleranceMaxValue, METH_VARARGS,
   "GetMergeToleranceMaxValue(self) -> float\nC++: virtual double GetMergeToleranceMaxValue()\n\n"},
  {"GetMergeTolerance", PyvtkCell3D_GetMergeTolerance, METH_VARARGS,
   "GetMergeTolerance(self) -> float\nC++: virtual double GetMergeTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCell3D_Doc =
  "vtkCell3D - abstract class to specify 3D cell interface\n\n"
  "Superclass: vtkCell\n\n"
  "vtkCell3D is an abstract class that extends the interfaces for 3D\n"
  "data cells, and implements methods needed to satisfy the vtkCell API.\n"
  "The 3D cells include hexehedra, tetrahedra, wedge, pyramid, and\n"
  "voxel.\n\n"
  "@sa\n"
  "vtkTetra vtkHexahedron vtkVoxel vtkWedge vtkPyramid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCell3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCell3D", // tp_name
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
  PyvtkCell3D_Doc, // tp_doc
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

PyObject *PyvtkCell3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCell3D_Type, PyvtkCell3D_Methods,
    "vtkCell3D",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCell3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCell3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCell3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

