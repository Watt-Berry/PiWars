// python wrapper for vtkDataSetToDataObjectFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetToDataObjectFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetToDataObjectFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetToDataObjectFilter_ClassNew(); }


static PyObject *
PyvtkDataSetToDataObjectFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetToDataObjectFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetToDataObjectFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetToDataObjectFilter *tempr = vtkDataSetToDataObjectFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetToDataObjectFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetToDataObjectFilter::NewInstance());

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
PyvtkDataSetToDataObjectFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetToDataObjectFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetToDataObjectFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkDataSetToDataObjectFilter::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeometryOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::GeometryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GeometryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeometryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GeometryOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::GeometryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopology(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTopology() :
      op->vtkDataSetToDataObjectFilter::GetTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopologyOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::TopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_TopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TopologyOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::TopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetLegacyTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegacyTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegacyTopology(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetLegacyTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetLegacyTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegacyTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegacyTopology() :
      op->vtkDataSetToDataObjectFilter::GetLegacyTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_LegacyTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegacyTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegacyTopologyOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::LegacyTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_LegacyTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegacyTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegacyTopologyOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::LegacyTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetModernTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModernTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModernTopology(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetModernTopology(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetModernTopology(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModernTopology");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModernTopology() :
      op->vtkDataSetToDataObjectFilter::GetModernTopology());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_ModernTopologyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModernTopologyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ModernTopologyOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::ModernTopologyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_ModernTopologyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ModernTopologyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ModernTopologyOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::ModernTopologyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetFieldData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldData() :
      op->vtkDataSetToDataObjectFilter::GetFieldData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::FieldDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_FieldDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FieldDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FieldDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::FieldDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointData() :
      op->vtkDataSetToDataObjectFilter::GetPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::PointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_PointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::PointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_SetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellData(temp0);
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::SetCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellData() :
      op->vtkDataSetToDataObjectFilter::GetCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellDataOn();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::CellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetToDataObjectFilter_CellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetToDataObjectFilter *op = static_cast<vtkDataSetToDataObjectFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellDataOff();
    }
    else
    {
      op->vtkDataSetToDataObjectFilter::CellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetToDataObjectFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetToDataObjectFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetToDataObjectFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetToDataObjectFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetToDataObjectFilter\nC++: static vtkDataSetToDataObjectFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetToDataObjectFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetToDataObjectFilter\nC++: vtkDataSetToDataObjectFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetToDataObjectFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetToDataObjectFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGeometry", PyvtkDataSetToDataObjectFilter_SetGeometry, METH_VARARGS,
   "SetGeometry(self, _arg:int) -> None\nC++: virtual void SetGeometry(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset geometry to a data object.\n"},
  {"GetGeometry", PyvtkDataSetToDataObjectFilter_GetGeometry, METH_VARARGS,
   "GetGeometry(self) -> int\nC++: virtual vtkTypeBool GetGeometry()\n\n"},
  {"GeometryOn", PyvtkDataSetToDataObjectFilter_GeometryOn, METH_VARARGS,
   "GeometryOn(self) -> None\nC++: virtual void GeometryOn()\n\n"},
  {"GeometryOff", PyvtkDataSetToDataObjectFilter_GeometryOff, METH_VARARGS,
   "GeometryOff(self) -> None\nC++: virtual void GeometryOff()\n\n"},
  {"SetTopology", PyvtkDataSetToDataObjectFilter_SetTopology, METH_VARARGS,
   "SetTopology(self, _arg:int) -> None\nC++: virtual void SetTopology(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset topology to a data object.\n"},
  {"GetTopology", PyvtkDataSetToDataObjectFilter_GetTopology, METH_VARARGS,
   "GetTopology(self) -> int\nC++: virtual vtkTypeBool GetTopology()\n\n"},
  {"TopologyOn", PyvtkDataSetToDataObjectFilter_TopologyOn, METH_VARARGS,
   "TopologyOn(self) -> None\nC++: virtual void TopologyOn()\n\n"},
  {"TopologyOff", PyvtkDataSetToDataObjectFilter_TopologyOff, METH_VARARGS,
   "TopologyOff(self) -> None\nC++: virtual void TopologyOff()\n\n"},
  {"SetLegacyTopology", PyvtkDataSetToDataObjectFilter_SetLegacyTopology, METH_VARARGS,
   "SetLegacyTopology(self, _arg:int) -> None\nC++: virtual void SetLegacyTopology(vtkTypeBool _arg)\n\nIf LegacyTopology and Topology are both true, print out the\nlegacy topology arrays. Default is true.\n"},
  {"GetLegacyTopology", PyvtkDataSetToDataObjectFilter_GetLegacyTopology, METH_VARARGS,
   "GetLegacyTopology(self) -> int\nC++: virtual vtkTypeBool GetLegacyTopology()\n\n"},
  {"LegacyTopologyOn", PyvtkDataSetToDataObjectFilter_LegacyTopologyOn, METH_VARARGS,
   "LegacyTopologyOn(self) -> None\nC++: virtual void LegacyTopologyOn()\n\n"},
  {"LegacyTopologyOff", PyvtkDataSetToDataObjectFilter_LegacyTopologyOff, METH_VARARGS,
   "LegacyTopologyOff(self) -> None\nC++: virtual void LegacyTopologyOff()\n\n"},
  {"SetModernTopology", PyvtkDataSetToDataObjectFilter_SetModernTopology, METH_VARARGS,
   "SetModernTopology(self, _arg:int) -> None\nC++: virtual void SetModernTopology(vtkTypeBool _arg)\n\nIf ModernTopology and Topology are both true, print out the\nmodern topology arrays. Default is true.\n"},
  {"GetModernTopology", PyvtkDataSetToDataObjectFilter_GetModernTopology, METH_VARARGS,
   "GetModernTopology(self) -> int\nC++: virtual vtkTypeBool GetModernTopology()\n\n"},
  {"ModernTopologyOn", PyvtkDataSetToDataObjectFilter_ModernTopologyOn, METH_VARARGS,
   "ModernTopologyOn(self) -> None\nC++: virtual void ModernTopologyOn()\n\n"},
  {"ModernTopologyOff", PyvtkDataSetToDataObjectFilter_ModernTopologyOff, METH_VARARGS,
   "ModernTopologyOff(self) -> None\nC++: virtual void ModernTopologyOff()\n\n"},
  {"SetFieldData", PyvtkDataSetToDataObjectFilter_SetFieldData, METH_VARARGS,
   "SetFieldData(self, _arg:int) -> None\nC++: virtual void SetFieldData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset field data to a data\nobject.\n"},
  {"GetFieldData", PyvtkDataSetToDataObjectFilter_GetFieldData, METH_VARARGS,
   "GetFieldData(self) -> int\nC++: virtual vtkTypeBool GetFieldData()\n\n"},
  {"FieldDataOn", PyvtkDataSetToDataObjectFilter_FieldDataOn, METH_VARARGS,
   "FieldDataOn(self) -> None\nC++: virtual void FieldDataOn()\n\n"},
  {"FieldDataOff", PyvtkDataSetToDataObjectFilter_FieldDataOff, METH_VARARGS,
   "FieldDataOff(self) -> None\nC++: virtual void FieldDataOff()\n\n"},
  {"SetPointData", PyvtkDataSetToDataObjectFilter_SetPointData, METH_VARARGS,
   "SetPointData(self, _arg:int) -> None\nC++: virtual void SetPointData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset point data to a data\nobject.\n"},
  {"GetPointData", PyvtkDataSetToDataObjectFilter_GetPointData, METH_VARARGS,
   "GetPointData(self) -> int\nC++: virtual vtkTypeBool GetPointData()\n\n"},
  {"PointDataOn", PyvtkDataSetToDataObjectFilter_PointDataOn, METH_VARARGS,
   "PointDataOn(self) -> None\nC++: virtual void PointDataOn()\n\n"},
  {"PointDataOff", PyvtkDataSetToDataObjectFilter_PointDataOff, METH_VARARGS,
   "PointDataOff(self) -> None\nC++: virtual void PointDataOff()\n\n"},
  {"SetCellData", PyvtkDataSetToDataObjectFilter_SetCellData, METH_VARARGS,
   "SetCellData(self, _arg:int) -> None\nC++: virtual void SetCellData(vtkTypeBool _arg)\n\nTurn on/off the conversion of dataset cell data to a data object.\n"},
  {"GetCellData", PyvtkDataSetToDataObjectFilter_GetCellData, METH_VARARGS,
   "GetCellData(self) -> int\nC++: virtual vtkTypeBool GetCellData()\n\n"},
  {"CellDataOn", PyvtkDataSetToDataObjectFilter_CellDataOn, METH_VARARGS,
   "CellDataOn(self) -> None\nC++: virtual void CellDataOn()\n\n"},
  {"CellDataOff", PyvtkDataSetToDataObjectFilter_CellDataOff, METH_VARARGS,
   "CellDataOff(self) -> None\nC++: virtual void CellDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetToDataObjectFilter_Doc =
  "vtkDataSetToDataObjectFilter - map dataset into data object (i.e., a\nfield)\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkDataSetToDataObjectFilter is an class that transforms a dataset\n"
  "into data object (i.e., a field). The field will have labeled data\n"
  "arrays corresponding to the topology, geometry, field data, and point\n"
  "and cell attribute data.\n\n"
  "You can control what portions of the dataset are converted into the\n"
  "output data object's field data. The instance variables Geometry,\n"
  "Topology, FieldData, PointData, and CellData are flags that control\n"
  "whether the dataset's geometry (e.g., points, spacing, origin);\n"
  "topology (e.g., cell connectivity, dimensions); the field data\n"
  "associated with the dataset's superclass data object; the dataset's\n"
  "point data attributes; and the dataset's cell data attributes. (Note:\n"
  "the data attributes include scalars, vectors, tensors, normals,\n"
  "texture coordinates, and field data.)\n\n"
  "The names used to create the field data are as follows. For\n"
  "vtkPolyData, \"Points\", \"Verts\", \"Lines\", \"Polys\", and \"Strips\". For\n"
  "vtkUnstructuredGrid, \"Cells\" and \"CellTypes\". For\n"
  "vtkStructuredPoints, \"Dimensions\", \"Spacing\", and \"Origin\". For\n"
  "vtkStructuredGrid, \"Points\" and \"Dimensions\". For vtkRectilinearGrid,\n"
  "\"XCoordinates\", \"YCoordinates\", and \"ZCoordinates\". for point\n"
  "attribute data, \"PointScalars\", \"PointVectors\", etc. For cell\n"
  "attribute data, \"CellScalars\", \"CellVectors\", etc. Field data arrays\n"
  "retain their original name.\n\n"
  "@sa\n"
  "vtkDataObject vtkFieldData vtkDataObjectToDataSetFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetToDataObjectFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDataSetToDataObjectFilter", // tp_name
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
  PyvtkDataSetToDataObjectFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetToDataObjectFilter_StaticNew()
{
  return vtkDataSetToDataObjectFilter::New();
}

PyObject *PyvtkDataSetToDataObjectFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetToDataObjectFilter_Type, PyvtkDataSetToDataObjectFilter_Methods,
    "vtkDataSetToDataObjectFilter",
 &PyvtkDataSetToDataObjectFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetToDataObjectFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetToDataObjectFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetToDataObjectFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

