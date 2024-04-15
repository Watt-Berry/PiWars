// python wrapper for vtkWebGLPolyData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWebGLPolyData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLPolyData(PyObject *dict); }
extern "C" { PyObject *PyvtkWebGLPolyData_ClassNew(); }

#ifndef DECLARED_PyvtkWebGLObject_ClassNew
extern "C" { PyObject *PyvtkWebGLObject_ClassNew(); }
#define DECLARED_PyvtkWebGLObject_ClassNew
#endif

static PyObject *
PyvtkWebGLPolyData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLPolyData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLPolyData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLPolyData *tempr = vtkWebGLPolyData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLPolyData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLPolyData::NewInstance());

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
PyvtkWebGLPolyData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWebGLPolyData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWebGLPolyData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBinaryData();
    }
    else
    {
      op->vtkWebGLPolyData::GenerateBinaryData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLPolyData::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLPolyData::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLPolyData::GetNumberOfParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetLinesFromPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesFromPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMapper *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkMapper") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->GetLinesFromPolygon(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::GetLinesFromPolygon(temp0, temp1, temp2, temp3);
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
PyvtkWebGLPolyData_GetLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetLines(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetLines(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkPolyData *temp1 = nullptr;
  vtkActor *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkActor"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorsFromPolyData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetColorsFromPolyData(temp0, temp1, temp2);
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
PyvtkWebGLPolyData_GetPolygonsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPolygonsFromPointData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPolygonsFromPointData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetPolygonsFromCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolygonsFromCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkTriangleFilter *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkTriangleFilter") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GetPolygonsFromCellData(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLPolyData::GetPolygonsFromCellData(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_GetColorsFromPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorsFromPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkPointData *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  vtkActor *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkPointData") &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkActor"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetColorsFromPointData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::GetColorsFromPointData(temp0, temp1, temp2, temp3);
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
PyvtkWebGLPolyData_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<float> store4(2*size4);
  float *temp4 = store4.Data();
  float *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<unsigned char> store5(2*size5);
  unsigned char *temp5 = store5.Data();
  unsigned char *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<float> store6(2*size6);
  float *temp6 = store6.Data();
  float *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  int temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetValue(temp7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    if (ap.IsBound())
    {
      op->SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkWebGLPolyData::SetMesh(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
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

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLPolyData_SetLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWebGLPolyData::SetLine(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
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
PyvtkWebGLPolyData_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->SetPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLPolyData::SetPoints(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkWebGLPolyData_SetTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLPolyData *op = static_cast<vtkWebGLPolyData *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTransformationMatrix(temp0);
    }
    else
    {
      op->vtkWebGLPolyData::SetTransformationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLPolyData_Methods[] = {
  {"IsTypeOf", PyvtkWebGLPolyData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLPolyData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLPolyData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWebGLPolyData\nC++: static vtkWebGLPolyData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLPolyData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWebGLPolyData\nC++: vtkWebGLPolyData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWebGLPolyData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWebGLPolyData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateBinaryData", PyvtkWebGLPolyData_GenerateBinaryData, METH_VARARGS,
   "GenerateBinaryData(self) -> None\nC++: void GenerateBinaryData() override;\n\n"},
  {"GetBinaryData", PyvtkWebGLPolyData_GetBinaryData, METH_VARARGS,
   "GetBinaryData(self, part:int) -> Pointer\nC++: unsigned char *GetBinaryData(int part) override;\n\n"},
  {"GetBinarySize", PyvtkWebGLPolyData_GetBinarySize, METH_VARARGS,
   "GetBinarySize(self, part:int) -> int\nC++: int GetBinarySize(int part) override;\n\n"},
  {"GetNumberOfParts", PyvtkWebGLPolyData_GetNumberOfParts, METH_VARARGS,
   "GetNumberOfParts(self) -> int\nC++: int GetNumberOfParts() override;\n\n"},
  {"GetPoints", PyvtkWebGLPolyData_GetPoints, METH_VARARGS,
   "GetPoints(self, polydata:vtkTriangleFilter, actor:vtkActor,\n    maxSize:int) -> None\nC++: void GetPoints(vtkTriangleFilter *polydata, vtkActor *actor,\n    int maxSize)\n\n"},
  {"GetLinesFromPolygon", PyvtkWebGLPolyData_GetLinesFromPolygon, METH_VARARGS,
   "GetLinesFromPolygon(self, mapper:vtkMapper, actor:vtkActor,\n    lineMaxSize:int, edgeColor:[float, ...]) -> None\nC++: void GetLinesFromPolygon(vtkMapper *mapper, vtkActor *actor,\n    int lineMaxSize, double *edgeColor)\n\n"},
  {"GetLines", PyvtkWebGLPolyData_GetLines, METH_VARARGS,
   "GetLines(self, polydata:vtkTriangleFilter, actor:vtkActor,\n    lineMaxSize:int) -> None\nC++: void GetLines(vtkTriangleFilter *polydata, vtkActor *actor,\n    int lineMaxSize)\n\n"},
  {"GetColorsFromPolyData", PyvtkWebGLPolyData_GetColorsFromPolyData, METH_VARARGS,
   "GetColorsFromPolyData(self, color:[int, ...],\n    polydata:vtkPolyData, actor:vtkActor) -> None\nC++: void GetColorsFromPolyData(unsigned char *color,\n    vtkPolyData *polydata, vtkActor *actor)\n\n"},
  {"GetPolygonsFromPointData", PyvtkWebGLPolyData_GetPolygonsFromPointData, METH_VARARGS,
   "GetPolygonsFromPointData(self, polydata:vtkTriangleFilter,\n    actor:vtkActor, maxSize:int) -> None\nC++: void GetPolygonsFromPointData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {"GetPolygonsFromCellData", PyvtkWebGLPolyData_GetPolygonsFromCellData, METH_VARARGS,
   "GetPolygonsFromCellData(self, polydata:vtkTriangleFilter,\n    actor:vtkActor, maxSize:int) -> None\nC++: void GetPolygonsFromCellData(vtkTriangleFilter *polydata,\n    vtkActor *actor, int maxSize)\n\n"},
  {"GetColorsFromPointData", PyvtkWebGLPolyData_GetColorsFromPointData, METH_VARARGS,
   "GetColorsFromPointData(self, color:[int, ...],\n    pointdata:vtkPointData, polydata:vtkPolyData, actor:vtkActor)\n    -> None\nC++: void GetColorsFromPointData(unsigned char *color,\n    vtkPointData *pointdata, vtkPolyData *polydata,\n    vtkActor *actor)\n\n"},
  {"SetMesh", PyvtkWebGLPolyData_SetMesh, METH_VARARGS,
   "SetMesh(self, _vertices:[float, ...], _numberOfVertices:int,\n    _index:[int, ...], _numberOfIndexes:int, _normals:[float,\n    ...], _colors:[int, ...], _tcoords:[float, ...], maxSize:int)\n    -> None\nC++: void SetMesh(float *_vertices, int _numberOfVertices,\n    int *_index, int _numberOfIndexes, float *_normals,\n    unsigned char *_colors, float *_tcoords, int maxSize)\n\n"},
  {"SetLine", PyvtkWebGLPolyData_SetLine, METH_VARARGS,
   "SetLine(self, _points:[float, ...], _numberOfPoints:int,\n    _index:[int, ...], _numberOfIndex:int, _colors:[int, ...],\n    maxSize:int) -> None\nC++: void SetLine(float *_points, int _numberOfPoints,\n    int *_index, int _numberOfIndex, unsigned char *_colors,\n    int maxSize)\n\n"},
  {"SetPoints", PyvtkWebGLPolyData_SetPoints, METH_VARARGS,
   "SetPoints(self, points:[float, ...], numberOfPoints:int,\n    colors:[int, ...], maxSize:int) -> None\nC++: void SetPoints(float *points, int numberOfPoints,\n    unsigned char *colors, int maxSize)\n\n"},
  {"SetTransformationMatrix", PyvtkWebGLPolyData_SetTransformationMatrix, METH_VARARGS,
   "SetTransformationMatrix(self, m:vtkMatrix4x4) -> None\nC++: void SetTransformationMatrix(vtkMatrix4x4 *m)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWebGLPolyData_Doc =
  "vtkWebGLPolyData - PolyData representation for WebGL.\n\n"
  "Superclass: vtkWebGLObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWebGLPolyData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.vtkWebGLPolyData", // tp_name
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
  PyvtkWebGLPolyData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLPolyData_StaticNew()
{
  return vtkWebGLPolyData::New();
}

PyObject *PyvtkWebGLPolyData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWebGLPolyData_Type, PyvtkWebGLPolyData_Methods,
    "vtkWebGLPolyData",
 &PyvtkWebGLPolyData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWebGLObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLPolyData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLPolyData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLPolyData", o) != 0)
  {
    Py_DECREF(o);
  }

}

