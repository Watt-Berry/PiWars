// python wrapper for vtkDataObjectToDataSetFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObjectToDataSetFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectToDataSetFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObjectToDataSetFilter_ClassNew(); }


static PyObject *
PyvtkDataObjectToDataSetFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectToDataSetFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectToDataSetFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectToDataSetFilter *tempr = vtkDataObjectToDataSetFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectToDataSetFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectToDataSetFilter::NewInstance());

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
PyvtkDataObjectToDataSetFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectToDataSetFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectToDataSetFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkDataObjectToDataSetFilter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetType(temp0);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetDataSetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataSetType() :
      op->vtkDataObjectToDataSetFilter::GetDataSetType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetTypeToPolyData();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToPolyData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToStructuredPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetTypeToStructuredPoints();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetTypeToStructuredGrid();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToStructuredGrid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToRectilinearGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToRectilinearGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetTypeToRectilinearGrid();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToRectilinearGrid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDataSetTypeToUnstructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSetTypeToUnstructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataSetTypeToUnstructuredGrid();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDataSetTypeToUnstructuredGrid();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkDataObjectToDataSetFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetOutput(temp0) :
      op->vtkDataObjectToDataSetFilter::GetOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_GetOutput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataObjectToDataSetFilter_GetOutput_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_GetOutput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutput");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolyDataOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolyDataOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPolyDataOutput() :
      op->vtkDataObjectToDataSetFilter::GetPolyDataOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStructuredPointsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredPointsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredPoints *tempr = (ap.IsBound() ?
      op->GetStructuredPointsOutput() :
      op->vtkDataObjectToDataSetFilter::GetStructuredPointsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStructuredGrid *tempr = (ap.IsBound() ?
      op->GetStructuredGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetStructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetUnstructuredGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnstructuredGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGrid *tempr = (ap.IsBound() ?
      op->GetUnstructuredGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetUnstructuredGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetRectilinearGridOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRectilinearGridOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGrid *tempr = (ap.IsBound() ?
      op->GetRectilinearGridOutput() :
      op->vtkDataObjectToDataSetFilter::GetRectilinearGridOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
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
      op->SetPointComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetPointComponent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPointComponent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetPointComponent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPointComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkDataObjectToDataSetFilter_SetPointComponent_s1(self, args);
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetPointComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointComponentArrayName(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentArrayComponent(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentMinRange(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentMinRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentMaxRange(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentMaxRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPointComponentNormailzeFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponentNormailzeFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointComponentNormailzeFlag(temp0) :
      op->vtkDataObjectToDataSetFilter::GetPointComponentNormailzeFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetVertsComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetVertsComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVertsComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetVertsComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetVertsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetVertsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetVertsComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertsComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertsComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetVertsComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertsComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVertsComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetVertsComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetLinesComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetLinesComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLinesComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLinesComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetLinesComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetLinesComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetLinesComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetLinesComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLinesComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLinesComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetLinesComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLinesComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLinesComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetLinesComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolysComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetPolysComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetPolysComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolysComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPolysComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetPolysComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetPolysComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetPolysComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetPolysComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPolysComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPolysComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetPolysComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolysComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPolysComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetPolysComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetStripsComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetStripsComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStripsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetStripsComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetStripsComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetStripsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetStripsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetStripsComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStripsComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStripsComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetStripsComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStripsComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStripsComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetStripsComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetCellTypeComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetCellTypeComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypeComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellTypeComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetCellTypeComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellTypeComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetCellTypeComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellTypeComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellTypeComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypeComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellTypeComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetCellTypeComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellConnectivityComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetCellConnectivityComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellConnectivityComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellConnectivityComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetCellConnectivityComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellConnectivityComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentArrayName() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentArrayComponent() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMinRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentMinRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentMinRange() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMinRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMaxRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellConnectivityComponentMaxRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellConnectivityComponentMaxRange() :
      op->vtkDataObjectToDataSetFilter::GetCellConnectivityComponentMaxRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultNormalize(temp0);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDefaultNormalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetDefaultNormalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultNormalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultNormalize() :
      op->vtkDataObjectToDataSetFilter::GetDefaultNormalize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_DefaultNormalizeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOn();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::DefaultNormalizeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_DefaultNormalizeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DefaultNormalizeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DefaultNormalizeOff();
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::DefaultNormalizeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetDimensions_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkDataObjectToDataSetFilter::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetOrigin_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkDataObjectToDataSetFilter::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

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
      op->vtkDataObjectToDataSetFilter::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataObjectToDataSetFilter_SetSpacing_s1(self, args);
    case 1:
      return PyvtkDataObjectToDataSetFilter_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkDataObjectToDataSetFilter::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetDimensionsComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDimensionsComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensionsComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDimensionsComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetDimensionsComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetDimensionsComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetDimensionsComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensionsComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetSpacingComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetSpacingComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacingComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSpacingComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetSpacingComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetSpacingComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetSpacingComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacingComponent");
  return nullptr;
}


static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
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
      op->SetOriginComponent(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetOriginComponent(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectToDataSetFilter *op = static_cast<vtkDataObjectToDataSetFilter *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOriginComponent(temp0, temp1);
    }
    else
    {
      op->vtkDataObjectToDataSetFilter::SetOriginComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataObjectToDataSetFilter_SetOriginComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkDataObjectToDataSetFilter_SetOriginComponent_s1(self, args);
    case 2:
      return PyvtkDataObjectToDataSetFilter_SetOriginComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOriginComponent");
  return nullptr;
}

static PyMethodDef PyvtkDataObjectToDataSetFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectToDataSetFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectToDataSetFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectToDataSetFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectToDataSetFilter\nC++: static vtkDataObjectToDataSetFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectToDataSetFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectToDataSetFilter\nC++: vtkDataObjectToDataSetFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectToDataSetFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectToDataSetFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInput", PyvtkDataObjectToDataSetFilter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataObject\nC++: vtkDataObject *GetInput()\n\nGet the input to the filter.\n"},
  {"SetDataSetType", PyvtkDataObjectToDataSetFilter_SetDataSetType, METH_VARARGS,
   "SetDataSetType(self, __a:int) -> None\nC++: void SetDataSetType(int)\n\nControl what type of data is generated for output.\n"},
  {"GetDataSetType", PyvtkDataObjectToDataSetFilter_GetDataSetType, METH_VARARGS,
   "GetDataSetType(self) -> int\nC++: virtual int GetDataSetType()\n\n"},
  {"SetDataSetTypeToPolyData", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToPolyData, METH_VARARGS,
   "SetDataSetTypeToPolyData(self) -> None\nC++: void SetDataSetTypeToPolyData()\n\n"},
  {"SetDataSetTypeToStructuredPoints", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredPoints, METH_VARARGS,
   "SetDataSetTypeToStructuredPoints(self) -> None\nC++: void SetDataSetTypeToStructuredPoints()\n\n"},
  {"SetDataSetTypeToStructuredGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToStructuredGrid, METH_VARARGS,
   "SetDataSetTypeToStructuredGrid(self) -> None\nC++: void SetDataSetTypeToStructuredGrid()\n\n"},
  {"SetDataSetTypeToRectilinearGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToRectilinearGrid, METH_VARARGS,
   "SetDataSetTypeToRectilinearGrid(self) -> None\nC++: void SetDataSetTypeToRectilinearGrid()\n\n"},
  {"SetDataSetTypeToUnstructuredGrid", PyvtkDataObjectToDataSetFilter_SetDataSetTypeToUnstructuredGrid, METH_VARARGS,
   "SetDataSetTypeToUnstructuredGrid(self) -> None\nC++: void SetDataSetTypeToUnstructuredGrid()\n\n"},
  {"GetOutput", PyvtkDataObjectToDataSetFilter_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkDataSet\nC++: vtkDataSet *GetOutput()\nGetOutput(self, idx:int) -> vtkDataSet\nC++: vtkDataSet *GetOutput(int idx)\n\nGet the output in different forms. The particular method invoked\nshould be consistent with the SetDataSetType() method. (Note:\nGetOutput() will always return a type consistent with\nSetDataSetType(). Also, GetOutput() will return nullptr if the\nfilter aborted due to inconsistent data.)\n"},
  {"GetPolyDataOutput", PyvtkDataObjectToDataSetFilter_GetPolyDataOutput, METH_VARARGS,
   "GetPolyDataOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetPolyDataOutput()\n\nGet the output as vtkPolyData.\n"},
  {"GetStructuredPointsOutput", PyvtkDataObjectToDataSetFilter_GetStructuredPointsOutput, METH_VARARGS,
   "GetStructuredPointsOutput(self) -> vtkStructuredPoints\nC++: vtkStructuredPoints *GetStructuredPointsOutput()\n\nGet the output as vtkStructuredPoints.\n"},
  {"GetStructuredGridOutput", PyvtkDataObjectToDataSetFilter_GetStructuredGridOutput, METH_VARARGS,
   "GetStructuredGridOutput(self) -> vtkStructuredGrid\nC++: vtkStructuredGrid *GetStructuredGridOutput()\n\nGet the output as vtkStructuredGrid.\n"},
  {"GetUnstructuredGridOutput", PyvtkDataObjectToDataSetFilter_GetUnstructuredGridOutput, METH_VARARGS,
   "GetUnstructuredGridOutput(self) -> vtkUnstructuredGrid\nC++: vtkUnstructuredGrid *GetUnstructuredGridOutput()\n\nGet the output as vtkUnstructuredGrid.\n"},
  {"GetRectilinearGridOutput", PyvtkDataObjectToDataSetFilter_GetRectilinearGridOutput, METH_VARARGS,
   "GetRectilinearGridOutput(self) -> vtkRectilinearGrid\nC++: vtkRectilinearGrid *GetRectilinearGridOutput()\n\nGet the output as vtkRectilinearGrid.\n"},
  {"SetPointComponent", PyvtkDataObjectToDataSetFilter_SetPointComponent, METH_VARARGS,
   "SetPointComponent(self, comp:int, arrayName:str, arrayComp:int,\n    min:int, max:int, normalize:int) -> None\nC++: void SetPointComponent(int comp, const char *arrayName,\n    int arrayComp, int min, int max, int normalize)\nSetPointComponent(self, comp:int, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetPointComponent(int comp, const char *arrayName,\n    int arrayComp)\n\nDefine the component of the field to be used for the x, y, and z\nvalues of the points. Note that the parameter comp must lie\nbetween (0,2) and refers to the x-y-z (i.e., 0,1,2) components of\nthe points. To define the field component to use you can specify\nan array name and the component in that array. The (min,max)\nvalues are the range of data in the component you wish to\nextract. (This method should be used for vtkPolyData,\nvtkUnstructuredGrid, vtkStructuredGrid, and vtkRectilinearGrid.)\nA convenience method, SetPointComponent(),is also provided which\ndoes not require setting the (min,max) component range or the\nnormalize flag (normalize is set to DefaulatNormalize value).\n"},
  {"GetPointComponentArrayName", PyvtkDataObjectToDataSetFilter_GetPointComponentArrayName, METH_VARARGS,
   "GetPointComponentArrayName(self, comp:int) -> str\nC++: const char *GetPointComponentArrayName(int comp)\n\n"},
  {"GetPointComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetPointComponentArrayComponent, METH_VARARGS,
   "GetPointComponentArrayComponent(self, comp:int) -> int\nC++: int GetPointComponentArrayComponent(int comp)\n\n"},
  {"GetPointComponentMinRange", PyvtkDataObjectToDataSetFilter_GetPointComponentMinRange, METH_VARARGS,
   "GetPointComponentMinRange(self, comp:int) -> int\nC++: int GetPointComponentMinRange(int comp)\n\n"},
  {"GetPointComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetPointComponentMaxRange, METH_VARARGS,
   "GetPointComponentMaxRange(self, comp:int) -> int\nC++: int GetPointComponentMaxRange(int comp)\n\n"},
  {"GetPointComponentNormailzeFlag", PyvtkDataObjectToDataSetFilter_GetPointComponentNormailzeFlag, METH_VARARGS,
   "GetPointComponentNormailzeFlag(self, comp:int) -> int\nC++: int GetPointComponentNormailzeFlag(int comp)\n\n"},
  {"SetVertsComponent", PyvtkDataObjectToDataSetFilter_SetVertsComponent, METH_VARARGS,
   "SetVertsComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetVertsComponent(const char *arrayName, int arrayComp,\n    int min, int max)\nSetVertsComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetVertsComponent(const char *arrayName, int arrayComp)\n\nDefine cell connectivity when creating vtkPolyData. You can\ndefine vertices, lines, polygons, and/or triangle strips via\nthese methods. These methods are similar to those for defining\npoints, except that no normalization of the data is possible.\nBasically, you need to define an array of values that (for each\ncell) includes the number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in the\ntextbook or User's Guide.)\n"},
  {"GetVertsComponentArrayName", PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayName, METH_VARARGS,
   "GetVertsComponentArrayName(self) -> str\nC++: const char *GetVertsComponentArrayName()\n\n"},
  {"GetVertsComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetVertsComponentArrayComponent, METH_VARARGS,
   "GetVertsComponentArrayComponent(self) -> int\nC++: int GetVertsComponentArrayComponent()\n\n"},
  {"GetVertsComponentMinRange", PyvtkDataObjectToDataSetFilter_GetVertsComponentMinRange, METH_VARARGS,
   "GetVertsComponentMinRange(self) -> int\nC++: int GetVertsComponentMinRange()\n\n"},
  {"GetVertsComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetVertsComponentMaxRange, METH_VARARGS,
   "GetVertsComponentMaxRange(self) -> int\nC++: int GetVertsComponentMaxRange()\n\n"},
  {"SetLinesComponent", PyvtkDataObjectToDataSetFilter_SetLinesComponent, METH_VARARGS,
   "SetLinesComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetLinesComponent(const char *arrayName, int arrayComp,\n    int min, int max)\nSetLinesComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetLinesComponent(const char *arrayName, int arrayComp)\n\n"},
  {"GetLinesComponentArrayName", PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayName, METH_VARARGS,
   "GetLinesComponentArrayName(self) -> str\nC++: const char *GetLinesComponentArrayName()\n\n"},
  {"GetLinesComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetLinesComponentArrayComponent, METH_VARARGS,
   "GetLinesComponentArrayComponent(self) -> int\nC++: int GetLinesComponentArrayComponent()\n\n"},
  {"GetLinesComponentMinRange", PyvtkDataObjectToDataSetFilter_GetLinesComponentMinRange, METH_VARARGS,
   "GetLinesComponentMinRange(self) -> int\nC++: int GetLinesComponentMinRange()\n\n"},
  {"GetLinesComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetLinesComponentMaxRange, METH_VARARGS,
   "GetLinesComponentMaxRange(self) -> int\nC++: int GetLinesComponentMaxRange()\n\n"},
  {"SetPolysComponent", PyvtkDataObjectToDataSetFilter_SetPolysComponent, METH_VARARGS,
   "SetPolysComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetPolysComponent(const char *arrayName, int arrayComp,\n    int min, int max)\nSetPolysComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetPolysComponent(const char *arrayName, int arrayComp)\n\n"},
  {"GetPolysComponentArrayName", PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayName, METH_VARARGS,
   "GetPolysComponentArrayName(self) -> str\nC++: const char *GetPolysComponentArrayName()\n\n"},
  {"GetPolysComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetPolysComponentArrayComponent, METH_VARARGS,
   "GetPolysComponentArrayComponent(self) -> int\nC++: int GetPolysComponentArrayComponent()\n\n"},
  {"GetPolysComponentMinRange", PyvtkDataObjectToDataSetFilter_GetPolysComponentMinRange, METH_VARARGS,
   "GetPolysComponentMinRange(self) -> int\nC++: int GetPolysComponentMinRange()\n\n"},
  {"GetPolysComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetPolysComponentMaxRange, METH_VARARGS,
   "GetPolysComponentMaxRange(self) -> int\nC++: int GetPolysComponentMaxRange()\n\n"},
  {"SetStripsComponent", PyvtkDataObjectToDataSetFilter_SetStripsComponent, METH_VARARGS,
   "SetStripsComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetStripsComponent(const char *arrayName, int arrayComp,\n     int min, int max)\nSetStripsComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetStripsComponent(const char *arrayName, int arrayComp)\n\n"},
  {"GetStripsComponentArrayName", PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayName, METH_VARARGS,
   "GetStripsComponentArrayName(self) -> str\nC++: const char *GetStripsComponentArrayName()\n\n"},
  {"GetStripsComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetStripsComponentArrayComponent, METH_VARARGS,
   "GetStripsComponentArrayComponent(self) -> int\nC++: int GetStripsComponentArrayComponent()\n\n"},
  {"GetStripsComponentMinRange", PyvtkDataObjectToDataSetFilter_GetStripsComponentMinRange, METH_VARARGS,
   "GetStripsComponentMinRange(self) -> int\nC++: int GetStripsComponentMinRange()\n\n"},
  {"GetStripsComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetStripsComponentMaxRange, METH_VARARGS,
   "GetStripsComponentMaxRange(self) -> int\nC++: int GetStripsComponentMaxRange()\n\n"},
  {"SetCellTypeComponent", PyvtkDataObjectToDataSetFilter_SetCellTypeComponent, METH_VARARGS,
   "SetCellTypeComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetCellTypeComponent(const char *arrayName,\n    int arrayComp, int min, int max)\nSetCellTypeComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetCellTypeComponent(const char *arrayName,\n    int arrayComp)\n\nDefine cell types and cell connectivity when creating\nunstructured grid data.  These methods are similar to those for\ndefining points, except that no normalization of the data is\npossible. Basically, you need to define an array of cell types\n(an integer value per cell), and another array consisting (for\neach cell) of a number of points per cell, and then the cell\nconnectivity. (This is the vtk file format described in in the\ntextbook or User's Guide.)\n"},
  {"GetCellTypeComponentArrayName", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayName, METH_VARARGS,
   "GetCellTypeComponentArrayName(self) -> str\nC++: const char *GetCellTypeComponentArrayName()\n\n"},
  {"GetCellTypeComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentArrayComponent, METH_VARARGS,
   "GetCellTypeComponentArrayComponent(self) -> int\nC++: int GetCellTypeComponentArrayComponent()\n\n"},
  {"GetCellTypeComponentMinRange", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMinRange, METH_VARARGS,
   "GetCellTypeComponentMinRange(self) -> int\nC++: int GetCellTypeComponentMinRange()\n\n"},
  {"GetCellTypeComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetCellTypeComponentMaxRange, METH_VARARGS,
   "GetCellTypeComponentMaxRange(self) -> int\nC++: int GetCellTypeComponentMaxRange()\n\n"},
  {"SetCellConnectivityComponent", PyvtkDataObjectToDataSetFilter_SetCellConnectivityComponent, METH_VARARGS,
   "SetCellConnectivityComponent(self, arrayName:str, arrayComp:int,\n    min:int, max:int) -> None\nC++: void SetCellConnectivityComponent(const char *arrayName,\n    int arrayComp, int min, int max)\nSetCellConnectivityComponent(self, arrayName:str, arrayComp:int)\n    -> None\nC++: void SetCellConnectivityComponent(const char *arrayName,\n    int arrayComp)\n\n"},
  {"GetCellConnectivityComponentArrayName", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayName, METH_VARARGS,
   "GetCellConnectivityComponentArrayName(self) -> str\nC++: const char *GetCellConnectivityComponentArrayName()\n\n"},
  {"GetCellConnectivityComponentArrayComponent", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentArrayComponent, METH_VARARGS,
   "GetCellConnectivityComponentArrayComponent(self) -> int\nC++: int GetCellConnectivityComponentArrayComponent()\n\n"},
  {"GetCellConnectivityComponentMinRange", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMinRange, METH_VARARGS,
   "GetCellConnectivityComponentMinRange(self) -> int\nC++: int GetCellConnectivityComponentMinRange()\n\n"},
  {"GetCellConnectivityComponentMaxRange", PyvtkDataObjectToDataSetFilter_GetCellConnectivityComponentMaxRange, METH_VARARGS,
   "GetCellConnectivityComponentMaxRange(self) -> int\nC++: int GetCellConnectivityComponentMaxRange()\n\n"},
  {"SetDefaultNormalize", PyvtkDataObjectToDataSetFilter_SetDefaultNormalize, METH_VARARGS,
   "SetDefaultNormalize(self, _arg:int) -> None\nC++: virtual void SetDefaultNormalize(vtkTypeBool _arg)\n\nSet the default Normalize() flag for those methods setting a\ndefault Normalize value (e.g., SetPointComponent).\n"},
  {"GetDefaultNormalize", PyvtkDataObjectToDataSetFilter_GetDefaultNormalize, METH_VARARGS,
   "GetDefaultNormalize(self) -> int\nC++: virtual vtkTypeBool GetDefaultNormalize()\n\n"},
  {"DefaultNormalizeOn", PyvtkDataObjectToDataSetFilter_DefaultNormalizeOn, METH_VARARGS,
   "DefaultNormalizeOn(self) -> None\nC++: virtual void DefaultNormalizeOn()\n\n"},
  {"DefaultNormalizeOff", PyvtkDataObjectToDataSetFilter_DefaultNormalizeOff, METH_VARARGS,
   "DefaultNormalizeOff(self) -> None\nC++: virtual void DefaultNormalizeOff()\n\n"},
  {"SetDimensions", PyvtkDataObjectToDataSetFilter_SetDimensions, METH_VARARGS,
   "SetDimensions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDimensions(int _arg1, int _arg2, int _arg3)\nSetDimensions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDimensions(const int _arg[3])\n\nSpecify the dimensions to use if generating a dataset that\nrequires dimensions specification (vtkStructuredPoints,\nvtkStructuredGrid, vtkRectilinearGrid).\n"},
  {"GetDimensions", PyvtkDataObjectToDataSetFilter_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual int *GetDimensions()\n\n"},
  {"SetOrigin", PyvtkDataObjectToDataSetFilter_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSpecify the origin to use if generating a dataset whose origin\ncan be set (i.e., a vtkStructuredPoints dataset).\n"},
  {"GetOrigin", PyvtkDataObjectToDataSetFilter_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetSpacing", PyvtkDataObjectToDataSetFilter_SetSpacing, METH_VARARGS,
   "SetSpacing(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpacing(const double _arg[3])\n\nSpecify the spacing to use if generating a dataset whose spacing\ncan be set (i.e., a vtkStructuredPoints dataset).\n"},
  {"GetSpacing", PyvtkDataObjectToDataSetFilter_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\n"},
  {"SetDimensionsComponent", PyvtkDataObjectToDataSetFilter_SetDimensionsComponent, METH_VARARGS,
   "SetDimensionsComponent(self, arrayName:str, arrayComp:int,\n    min:int, max:int) -> None\nC++: void SetDimensionsComponent(const char *arrayName,\n    int arrayComp, int min, int max)\nSetDimensionsComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetDimensionsComponent(const char *arrayName,\n    int arrayComp)\n\nAlternative methods to specify the dimensions, spacing, and\norigin for those datasets requiring this information. You need to\nspecify the name of an array; the component of the array, and the\nrange of the array (min,max). These methods will override the\ninformation given by the previous methods.\n"},
  {"SetSpacingComponent", PyvtkDataObjectToDataSetFilter_SetSpacingComponent, METH_VARARGS,
   "SetSpacingComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetSpacingComponent(const char *arrayName,\n    int arrayComp, int min, int max)\nSetSpacingComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetSpacingComponent(const char *arrayName,\n    int arrayComp)\n\n"},
  {"SetOriginComponent", PyvtkDataObjectToDataSetFilter_SetOriginComponent, METH_VARARGS,
   "SetOriginComponent(self, arrayName:str, arrayComp:int, min:int,\n    max:int) -> None\nC++: void SetOriginComponent(const char *arrayName, int arrayComp,\n     int min, int max)\nSetOriginComponent(self, arrayName:str, arrayComp:int) -> None\nC++: void SetOriginComponent(const char *arrayName, int arrayComp)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObjectToDataSetFilter_Doc =
  "vtkDataObjectToDataSetFilter - map field data to concrete dataset\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkDataObjectToDataSetFilter is an class that maps a data object\n"
  "(i.e., a field) into a concrete dataset, i.e., gives structure to the\n"
  "field by defining a geometry and topology.\n\n"
  "To use this filter you associate components in the input field data\n"
  "with portions of the output dataset. (A component is an array of\n"
  "values from the field.) For example, you would specify x-y-z points\n"
  "by assigning components from the field for the x, then y, then z\n"
  "values of the points. You may also have to specify component ranges\n"
  "(for each z-y-z) to make sure that the number of x, y, and z values\n"
  "is the same. Also, you may want to normalize the components which\n"
  "helps distribute the data uniformly. Once you've setup the filter to\n"
  "combine all the pieces of data into a specified dataset (the\n"
  "geometry, topology, point and cell data attributes), the various\n"
  "output methods (e.g., GetPolyData()) are used to retrieve the final\n"
  "product.\n\n"
  "This filter is often used in conjunction with\n"
  "vtkFieldDataToAttributeDataFilter.  vtkFieldDataToAttributeDataFilter\n"
  "takes field data and transforms it into attribute data (e.g., point\n"
  "and cell data attributes such as scalars and vectors).  To do this,\n"
  "use this filter which constructs a concrete dataset and passes the\n"
  "input data object field data to its output. and then use\n"
  "vtkFieldDataToAttributeDataFilter to generate the attribute data\n"
  "associated with the dataset.\n\n"
  "@warning\n"
  "Make sure that the data you extract is consistent. That is, if you\n"
  "have N points, extract N x, y, and z components. Also, all the\n"
  "information necessary to define a dataset must be given. For example,\n"
  "vtkPolyData requires points at a minimum; vtkStructuredPoints\n"
  "requires setting the dimensions; vtkStructuredGrid requires defining\n"
  "points and dimensions; vtkUnstructuredGrid requires setting points;\n"
  "and vtkRectilinearGrid requires that you define the x, y, and\n"
  "z-coordinate arrays (by specifying points) as well as the dimensions.\n\n"
  "@warning\n"
  "If you wish to create a dataset of just points (i.e., unstructured\n"
  "points dataset), create vtkPolyData consisting of points. There will\n"
  "be no cells in such a dataset.\n\n"
  "@sa\n"
  "vtkDataObject vtkFieldData vtkDataSet vtkPolyData vtkStructuredPoints\n"
  "vtkStructuredGrid vtkUnstructuredGrid vtkRectilinearGrid\n"
  "vtkDataSetAttributes vtkDataArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectToDataSetFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDataObjectToDataSetFilter", // tp_name
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
  PyvtkDataObjectToDataSetFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectToDataSetFilter_StaticNew()
{
  return vtkDataObjectToDataSetFilter::New();
}

PyObject *PyvtkDataObjectToDataSetFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectToDataSetFilter_Type, PyvtkDataObjectToDataSetFilter_Methods,
    "vtkDataObjectToDataSetFilter",
 &PyvtkDataObjectToDataSetFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectToDataSetFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectToDataSetFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectToDataSetFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

