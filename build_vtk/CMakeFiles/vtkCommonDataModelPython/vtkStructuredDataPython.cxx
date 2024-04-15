// python wrapper for vtkStructuredData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStructuredData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStructuredData(PyObject *dict); }
extern "C" { PyObject *PyvtkStructuredData_ClassNew(); }


static PyObject *
PyvtkStructuredData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStructuredData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStructuredData *tempr = vtkStructuredData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStructuredData::NewInstance());

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
PyvtkStructuredData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStructuredData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStructuredData *op = static_cast<vtkStructuredData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStructuredData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_SetDimensions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetDimensions");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkStructuredData::SetDimensions(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkStructuredData_SetExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkStructuredData::SetExtent(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkStructuredData_GetDataDescription(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescription");

  const size_t size0 = 3;
  int temp0[3];
  int save0[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescription(temp0);

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
PyvtkStructuredData_GetDataDescriptionFromExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDescriptionFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDescriptionFromExtent(temp0);

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
PyvtkStructuredData_GetDataDimension_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStructuredData::GetDataDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkStructuredData_GetDataDimension_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDataDimension");

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = vtkStructuredData::GetDataDimension(temp0);

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

static PyMethodDef PyvtkStructuredData_GetDataDimension_Methods[] = {
  {"GetDataDimension", PyvtkStructuredData_GetDataDimension_s1, METH_VARARGS | METH_STATIC,
   "i"},
  {"GetDataDimension", PyvtkStructuredData_GetDataDimension_s2, METH_VARARGS | METH_STATIC,
   "P *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkStructuredData_GetDataDimension(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkStructuredData_GetDataDimension_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimension");
  return nullptr;
}


static PyObject *
PyvtkStructuredData_GetNumberOfPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfPoints");

  const size_t size0 = 6;
  int temp0[6];
  int temp1 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    long long tempr = vtkStructuredData::GetNumberOfPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetNumberOfCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfCells");

  const size_t size0 = 6;
  int temp0[6];
  int temp1 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    long long tempr = vtkStructuredData::GetNumberOfCells(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_GetCellExtentFromPointExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellExtentFromPointExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 6;
  int temp1[6];
  int save1[6];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredData::GetCellExtentFromPointExtent(temp0, temp1, temp2);

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
PyvtkStructuredData_GetDimensionsFromExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimensionsFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredData::GetDimensionsFromExtent(temp0, temp1, temp2);

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
PyvtkStructuredData_IsPointVisible(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsPointVisible");

  long long temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
  {
    bool tempr = vtkStructuredData::IsPointVisible(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_IsCellVisible(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsCellVisible");

  long long temp0;
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2;
  vtkUnsignedCharArray *temp3 = nullptr;
  vtkUnsignedCharArray *temp4 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4, 5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp4, "vtkUnsignedCharArray")))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = vtkStructuredData::IsCellVisible(temp0, temp1, temp2, temp3, temp4);

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
PyvtkStructuredData_GetCellDimensionsFromExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromExtent(temp0, temp1, temp2);

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
PyvtkStructuredData_GetCellDimensionsFromPointDimensions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellDimensionsFromPointDimensions");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkStructuredData::GetCellDimensionsFromPointDimensions(temp0, temp1);

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
PyvtkStructuredData_GetLocalStructuredCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLocalStructuredCoordinates");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::GetLocalStructuredCoordinates(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetGlobalStructuredCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalStructuredCoordinates");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::GetGlobalStructuredCoordinates(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetCellPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellPoints");

  long long temp0;
  vtkIdList *temp1 = nullptr;
  int temp2;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkStructuredData::GetCellPoints(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetPointCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointCells");

  long long temp0;
  vtkIdList *temp1 = nullptr;
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::GetPointCells(temp0, temp1, temp2);

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
PyvtkStructuredData_GetCellNeighbors_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_GetCellNeighbors_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellNeighbors");

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  const size_t size3 = 3;
  int temp3[3];
  int save3[3];
  const size_t size4 = 3;
  int temp4[3];
  int save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    vtkStructuredData::GetCellNeighbors(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
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
PyvtkStructuredData_GetCellNeighbors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkStructuredData_GetCellNeighbors_s1(self, args);
    case 5:
      return PyvtkStructuredData_GetCellNeighbors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellNeighbors");
  return nullptr;
}


static PyObject *
PyvtkStructuredData_ComputePointIdForExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointIdForExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = vtkStructuredData::ComputePointIdForExtent(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellIdForExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellIdForExtent");

  const size_t size0 = 6;
  int temp0[6];
  const size_t size1 = 3;
  int temp1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = vtkStructuredData::ComputeCellIdForExtent(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputePointId(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointId");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = vtkStructuredData::ComputePointId(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellId(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellId");

  const size_t size0 = 3;
  int temp0[3];
  const size_t size1 = 3;
  int temp1[3];
  int temp2 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    long long tempr = vtkStructuredData::ComputeCellId(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStructuredData_ComputeCellStructuredCoordsForExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoordsForExtent");

  long long temp0;
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputeCellStructuredCoords(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCellStructuredCoords");

  long long temp0;
  const size_t size1 = 3;
  int temp1[3];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::ComputeCellStructuredCoords(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputePointStructuredCoordsForExtent(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoordsForExtent");

  long long temp0;
  const size_t size1 = 6;
  int temp1[6];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoordsForExtent(temp0, temp1, temp2, temp3);

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
PyvtkStructuredData_ComputePointStructuredCoords(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputePointStructuredCoords");

  long long temp0;
  const size_t size1 = 3;
  int temp1[3];
  const size_t size2 = 3;
  int temp2[3];
  int save2[3];
  int temp3 = VTK_EMPTY;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkStructuredData::ComputePointStructuredCoords(temp0, temp1, temp2, temp3);

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

static PyMethodDef PyvtkStructuredData_Methods[] = {
  {"IsTypeOf", PyvtkStructuredData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStructuredData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStructuredData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStructuredData\nC++: static vtkStructuredData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStructuredData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStructuredData\nC++: vtkStructuredData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStructuredData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStructuredData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDimensions", PyvtkStructuredData_SetDimensions, METH_VARARGS,
   "SetDimensions(inDim:[int, int, int], dim:[int, int, int]) -> int\nC++: static int SetDimensions(int inDim[3], int dim[3])\n\nSpecify the dimensions of a regular, rectangular dataset. The\ninput is the new dimensions (inDim) and the current dimensions\n(dim). The function returns the dimension of the dataset (0-3D).\nIf the dimensions are improperly specified a -1 is returned. If\nthe dimensions are unchanged, a value of 100 is returned.\n"},
  {"SetExtent", PyvtkStructuredData_SetExtent, METH_VARARGS,
   "SetExtent(inExt:[int, int, int, int, int, int], ext:[int, int,\n    int, int, int, int]) -> int\nC++: static int SetExtent(int inExt[6], int ext[6])\n\n"},
  {"GetDataDescription", PyvtkStructuredData_GetDataDescription, METH_VARARGS,
   "GetDataDescription(dims:[int, int, int]) -> int\nC++: static int GetDataDescription(int dims[3])\n\nReturns the data description given the dimensions (eg.\nVTK_SINGLE_POINT, VTK_X_LINE, VTK_XY_PLANE etc.)\n"},
  {"GetDataDescriptionFromExtent", PyvtkStructuredData_GetDataDescriptionFromExtent, METH_VARARGS,
   "GetDataDescriptionFromExtent(ext:[int, int, int, int, int, int])\n    -> int\nC++: static int GetDataDescriptionFromExtent(int ext[6])\n\n"},
  {"GetDataDimension", PyvtkStructuredData_GetDataDimension, METH_VARARGS,
   "GetDataDimension(dataDescription:int) -> int\nC++: static int GetDataDimension(int dataDescription)\nGetDataDimension(ext:[int, int, int, int, int, int]) -> int\nC++: static int GetDataDimension(int ext[6])\n\nReturn the topological dimension of the data (e.g., 0, 1, 2, or\n3D).\n"},
  {"GetNumberOfPoints", PyvtkStructuredData_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(ext:(int, int, int, int, int, int),\n    dataDescription:int=...) -> int\nC++: static vtkIdType GetNumberOfPoints(const int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\npoints within the extent. The dataDescription field is not used.\n"},
  {"GetNumberOfCells", PyvtkStructuredData_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(ext:(int, int, int, int, int, int),\n    dataDescription:int=...) -> int\nC++: static vtkIdType GetNumberOfCells(const int ext[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the grid extent, this method returns the total number of\ncells within the extent. The dataDescription field is not used.\n"},
  {"GetCellExtentFromPointExtent", PyvtkStructuredData_GetCellExtentFromPointExtent, METH_VARARGS,
   "GetCellExtentFromPointExtent(pntExtent:(int, int, int, int, int,\n    int), cellExtent:[int, int, int, int, int, int],\n    dataDescription:int=...) -> None\nC++: static void GetCellExtentFromPointExtent(\n    const int pntExtent[6], int cellExtent[6],\n    int dataDescription=VTK_EMPTY)\n\nGiven the point extent of a grid, this method computes the\ncorresponding cell extent for the grid. The dataDescription field\nis not used.\n"},
  {"GetDimensionsFromExtent", PyvtkStructuredData_GetDimensionsFromExtent, METH_VARARGS,
   "GetDimensionsFromExtent(ext:(int, int, int, int, int, int),\n    dims:[int, int, int], dataDescription:int=...) -> None\nC++: static void GetDimensionsFromExtent(const int ext[6],\n    int dims[3], int dataDescription=VTK_EMPTY)\n\nComputes the structured grid dimensions based on the given\nextent. The dataDescription field is not used.\n"},
  {"IsPointVisible", PyvtkStructuredData_IsPointVisible, METH_VARARGS,
   "IsPointVisible(cellId:int, ghosts:vtkUnsignedCharArray) -> bool\nC++: static bool IsPointVisible(vtkIdType cellId,\n    vtkUnsignedCharArray *ghosts)\n\nReturn non-zero value if specified point is visible.\n"},
  {"IsCellVisible", PyvtkStructuredData_IsCellVisible, METH_VARARGS,
   "IsCellVisible(cellId:int, dimensions:[int, int, int],\n    dataDescription:int, cellGhostArray:vtkUnsignedCharArray,\n    pointGhostArray:vtkUnsignedCharArray=...) -> bool\nC++: static bool IsCellVisible(vtkIdType cellId,\n    int dimensions[3], int dataDescription,\n    vtkUnsignedCharArray *cellGhostArray,\n    vtkUnsignedCharArray *pointGhostArray=nullptr)\n\nReturn non-zero value if specified cell is visible.\n"},
  {"GetCellDimensionsFromExtent", PyvtkStructuredData_GetCellDimensionsFromExtent, METH_VARARGS,
   "GetCellDimensionsFromExtent(ext:(int, int, int, int, int, int),\n    celldims:[int, int, int], dataDescription:int=...) -> None\nC++: static void GetCellDimensionsFromExtent(const int ext[6],\n    int celldims[3], int dataDescription=VTK_EMPTY)\n\nReturns the cell dimensions, i.e., the number of cells along the\ni,j,k for the grid with the given grid extent. Note, the grid\nextent is the number of points. The dataDescription field is not\nused.\n"},
  {"GetCellDimensionsFromPointDimensions", PyvtkStructuredData_GetCellDimensionsFromPointDimensions, METH_VARARGS,
   "GetCellDimensionsFromPointDimensions(pntdims:(int, int, int),\n    cellDims:[int, int, int]) -> None\nC++: static void GetCellDimensionsFromPointDimensions(\n    const int pntdims[3], int cellDims[3])\n\nGiven the dimensions of the grid, in pntdims, this method returns\nthe corresponding cell dimensions for the given grid. The\ndataDescription field is not used.\n"},
  {"GetLocalStructuredCoordinates", PyvtkStructuredData_GetLocalStructuredCoordinates, METH_VARARGS,
   "GetLocalStructuredCoordinates(ijk:(int, int, int), ext:(int, int,\n    int, int, int, int), lijk:[int, int, int],\n    dataDescription:int=...) -> None\nC++: static void GetLocalStructuredCoordinates(const int ijk[3],\n    const int ext[6], int lijk[3], int dataDescription=VTK_EMPTY)\n\nGiven the global structured coordinates for a point or cell, ijk,\nw.r.t. as well as, the global sub-grid cell or point extent, this\nmethod computes the corresponding local structured coordinates,\nlijk, starting from 0. The dataDescription argument is not used.\n"},
  {"GetGlobalStructuredCoordinates", PyvtkStructuredData_GetGlobalStructuredCoordinates, METH_VARARGS,
   "GetGlobalStructuredCoordinates(lijk:(int, int, int), ext:(int,\n    int, int, int, int, int), ijk:[int, int, int],\n    dataDescription:int=...) -> None\nC++: static void GetGlobalStructuredCoordinates(const int lijk[3],\n     const int ext[6], int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven local structured coordinates, and the corresponding global\nsub-grid extent, this method computes the global ijk coordinates.\nThe dataDescription parameter is not used.\n"},
  {"GetCellPoints", PyvtkStructuredData_GetCellPoints, METH_VARARGS,
   "GetCellPoints(cellId:int, ptIds:vtkIdList, dataDescription:int,\n    dim:[int, int, int]) -> None\nC++: static void GetCellPoints(vtkIdType cellId, vtkIdList *ptIds,\n     int dataDescription, int dim[3])\n\nGet the points defining a cell. (See vtkDataSet for more info.)\n"},
  {"GetPointCells", PyvtkStructuredData_GetPointCells, METH_VARARGS,
   "GetPointCells(ptId:int, cellIds:vtkIdList, dim:[int, int, int])\n    -> None\nC++: static void GetPointCells(vtkIdType ptId, vtkIdList *cellIds,\n     int dim[3])\n\nGet the cells using a point. (See vtkDataSet for more info.)\n"},
  {"GetCellNeighbors", PyvtkStructuredData_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(cellId:int, ptIds:vtkIdList, cellIds:vtkIdList,\n    dim:[int, int, int]) -> None\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3])\nGetCellNeighbors(cellId:int, ptIds:vtkIdList, cellIds:vtkIdList,\n    dim:[int, int, int], seedLoc:[int, int, int]) -> None\nC++: static void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds, int dim[3],\n    int seedLoc[3])\n\nGet the cells using the points ptIds, exclusive of the cell\ncellId. (See vtkDataSet for more info.)\n"},
  {"ComputePointIdForExtent", PyvtkStructuredData_ComputePointIdForExtent, METH_VARARGS,
   "ComputePointIdForExtent(extent:(int, int, int, int, int, int),\n    ijk:(int, int, int), dataDescription:int=...) -> int\nC++: static vtkIdType ComputePointIdForExtent(const int extent[6],\n     const int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {"ComputeCellIdForExtent", PyvtkStructuredData_ComputeCellIdForExtent, METH_VARARGS,
   "ComputeCellIdForExtent(extent:(int, int, int, int, int, int),\n    ijk:(int, int, int), dataDescription:int=...) -> int\nC++: static vtkIdType ComputeCellIdForExtent(const int extent[6],\n    const int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\nextent of the structured dataset, return the point id. The\ndataDescription argument is not used.\n"},
  {"ComputePointId", PyvtkStructuredData_ComputePointId, METH_VARARGS,
   "ComputePointId(dim:(int, int, int), ijk:(int, int, int),\n    dataDescription:int=...) -> int\nC++: static vtkIdType ComputePointId(const int dim[3],\n    const int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the point id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {"ComputeCellId", PyvtkStructuredData_ComputeCellId, METH_VARARGS,
   "ComputeCellId(dim:(int, int, int), ijk:(int, int, int),\n    dataDescription:int=...) -> int\nC++: static vtkIdType ComputeCellId(const int dim[3],\n    const int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a location in structured coordinates (i-j-k), and the\ndimensions of the structured dataset, return the cell id.  This\nmethod does not adjust for the beginning of the extent. The\ndataDescription argument is not used.\n"},
  {"ComputeCellStructuredCoordsForExtent", PyvtkStructuredData_ComputeCellStructuredCoordsForExtent, METH_VARARGS,
   "ComputeCellStructuredCoordsForExtent(cellIdx:int, ext:(int, int,\n    int, int, int, int), ijk:[int, int, int],\n    dataDescription:int=...) -> None\nC++: static void ComputeCellStructuredCoordsForExtent(\n    vtkIdType cellIdx, const int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven the global grid extent and the linear index of a cell\nwithin the grid extent, this method computes the corresponding\nstructured coordinates of the given cell. This method adjusts for\nthe beginning of the extent. The dataDescription argument is not\nused.\n"},
  {"ComputeCellStructuredCoords", PyvtkStructuredData_ComputeCellStructuredCoords, METH_VARARGS,
   "ComputeCellStructuredCoords(cellId:int, dim:(int, int, int),\n    ijk:[int, int, int], dataDescription:int=...) -> None\nC++: static void ComputeCellStructuredCoords(vtkIdType cellId,\n    const int dim[3], int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a cellId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {"ComputePointStructuredCoordsForExtent", PyvtkStructuredData_ComputePointStructuredCoordsForExtent, METH_VARARGS,
   "ComputePointStructuredCoordsForExtent(ptId:int, ext:(int, int,\n    int, int, int, int), ijk:[int, int, int],\n    dataDescription:int=...) -> None\nC++: static void ComputePointStructuredCoordsForExtent(\n    vtkIdType ptId, const int ext[6], int ijk[3],\n    int dataDescription=VTK_EMPTY)\n\nGiven a pointId and the grid extent ext, get the structured\ncoordinates (i-j-k). This method adjusts for the beginning of the\nextent. The dataDescription argument is not used.\n"},
  {"ComputePointStructuredCoords", PyvtkStructuredData_ComputePointStructuredCoords, METH_VARARGS,
   "ComputePointStructuredCoords(ptId:int, dim:(int, int, int),\n    ijk:[int, int, int], dataDescription:int=...) -> None\nC++: static void ComputePointStructuredCoords(vtkIdType ptId,\n    const int dim[3], int ijk[3], int dataDescription=VTK_EMPTY)\n\nGiven a pointId and grid dimensions 'dim', get the structured\ncoordinates (i-j-k). This method does not adjust for the\nbeginning of the extent. The dataDescription argument is not\nused.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStructuredData_Doc =
  "vtkStructuredData - Singleton class for topologically regular data\n\n"
  "Superclass: vtkObject\n\n"
  "vtkStructuredData is a singleton class that provides an interface for\n"
  "topologically regular data. Regular data is data that can be accessed\n"
  "in rectangular fashion using an i-j-k index. A finite difference\n"
  "grid, a volume, or a pixmap are all considered regular.\n\n"
  "@sa\n"
  "vtkStructuredGrid vtkUniformGrid vtkRectilinearGrid\n"
  "vtkRectilinearGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStructuredData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkStructuredData", // tp_name
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
  PyvtkStructuredData_Doc, // tp_doc
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

PyObject *PyvtkStructuredData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStructuredData_Type, PyvtkStructuredData_Methods,
    "vtkStructuredData",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkStructuredData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkStructuredData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStructuredData", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 10; c++)
  {
    static const struct { const char *name; int value; }
      constants[10] = {
        { "VTK_UNCHANGED", 0 },
        { "VTK_SINGLE_POINT", 1 },
        { "VTK_X_LINE", 2 },
        { "VTK_Y_LINE", 3 },
        { "VTK_Z_LINE", 4 },
        { "VTK_XY_PLANE", 5 },
        { "VTK_YZ_PLANE", 6 },
        { "VTK_XZ_PLANE", 7 },
        { "VTK_XYZ_GRID", 8 },
        { "VTK_EMPTY", 9 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

