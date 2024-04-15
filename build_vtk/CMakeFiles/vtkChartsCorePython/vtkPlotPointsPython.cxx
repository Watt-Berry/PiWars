// python wrapper for vtkPlotPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPlotPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPlotPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkPlotPoints_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static PyObject *
PyvtkPlotPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPlotPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPlotPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPlotPoints *tempr = vtkPlotPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlotPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPlotPoints::NewInstance());

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
PyvtkPlotPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPlotPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPlotPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkPlotPoints::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_PaintLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PaintLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContext2D *temp0 = nullptr;
  vtkRectf *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkContext2D") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkRectf") &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->PaintLegend(temp0, *temp1, temp2) :
      op->vtkPlotPoints::PaintLegend(temp0, *temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkPlotPoints::GetBounds(temp0);
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
PyvtkPlotPoints_GetUnscaledInputBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnscaledInputBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetUnscaledInputBounds(temp0);
    }
    else
    {
      op->vtkPlotPoints::GetUnscaledInputBounds(temp0);
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
PyvtkPlotPoints_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkPlotPoints::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_CreateDefaultLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLookupTable();
    }
    else
    {
      op->vtkPlotPoints::CreateDefaultLookupTable();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarVisibility(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkPlotPoints::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkPlotPoints::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkPlotPoints::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectColorArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkPlotPoints::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPlotPoints_SelectColorArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectColorArray(temp0);
    }
    else
    {
      op->vtkPlotPoints::SelectColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotPoints_SelectColorArray_Methods[] = {
  {"SelectColorArray", PyvtkPlotPoints_SelectColorArray_s1, METH_VARARGS,
   "@k"},
  {"SelectColorArray", PyvtkPlotPoints_SelectColorArray_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPlotPoints_SelectColorArray(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPlotPoints_SelectColorArray_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectColorArray");
  return nullptr;
}


static PyObject *
PyvtkPlotPoints_GetColorArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetColorArrayName() :
      op->vtkPlotPoints::GetColorArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPoints(*temp0, *temp1) :
      op->vtkPlotPoints::SelectPoints(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkPlotPoints_SelectPointsInPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPointsInPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkContextPolygon *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextPolygon"))
  {
    bool tempr = (ap.IsBound() ?
      op->SelectPointsInPolygon(*temp0) :
      op->vtkPlotPoints::SelectPointsInPolygon(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMarkerStyle() :
      op->vtkPlotPoints::GetMarkerStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerStyle(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetMarkerStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetMarkerSize() :
      op->vtkPlotPoints::GetMarkerSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetMarkerSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMarkerSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMarkerSize(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetMarkerSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_GetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetValidPointMaskName() :
      op->vtkPlotPoints::GetValidPointMaskName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_SetValidPointMaskName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidPointMaskName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetValidPointMaskName(temp0);
    }
    else
    {
      op->vtkPlotPoints::SetValidPointMaskName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_UpdateCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UpdateCache() :
      op->vtkPlotPoints::UpdateCache());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPlotPoints_ReleaseGraphicsCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPlotPoints *op = static_cast<vtkPlotPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsCache();
    }
    else
    {
      op->vtkPlotPoints::ReleaseGraphicsCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPlotPoints_Methods[] = {
  {"IsTypeOf", PyvtkPlotPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPlotPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPlotPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPlotPoints\nC++: static vtkPlotPoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPlotPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPlotPoints\nC++: vtkPlotPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPlotPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPlotPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkPlotPoints_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the XY plot, called whenever the chart needs to\nbe drawn\n"},
  {"PaintLegend", PyvtkPlotPoints_PaintLegend, METH_VARARGS,
   "PaintLegend(self, painter:vtkContext2D, rect:vtkRectf,\n    legendIndex:int) -> bool\nC++: bool PaintLegend(vtkContext2D *painter, const vtkRectf &rect,\n     int legendIndex) override;\n\nPaint legend event for the XY plot, called whenever the legend\nneeds the plot items symbol/mark/line drawn. A rect is supplied\nwith the lower left corner of the rect (elements 0 and 1) and\nwith width x height (elements 2 and 3). The plot can choose how\nto fill the space supplied.\n"},
  {"GetBounds", PyvtkPlotPoints_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nGet the bounds for this plot as (Xmin, Xmax, Ymin, Ymax).\n"},
  {"GetUnscaledInputBounds", PyvtkPlotPoints_GetUnscaledInputBounds, METH_VARARGS,
   "GetUnscaledInputBounds(self, bounds:[float, float, float, float])\n    -> None\nC++: void GetUnscaledInputBounds(double bounds[4]) override;\n\nGet the non-log-scaled bounds on chart inputs for this plot as\n(Xmin, Xmax, Ymin, Ymax).\n"},
  {"SetLookupTable", PyvtkPlotPoints_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the mapper to use.\n"},
  {"GetLookupTable", PyvtkPlotPoints_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetLookupTable()\n\n"},
  {"CreateDefaultLookupTable", PyvtkPlotPoints_CreateDefaultLookupTable, METH_VARARGS,
   "CreateDefaultLookupTable(self) -> None\nC++: virtual void CreateDefaultLookupTable()\n\nCreate default lookup table. Generally used to create one when\nnone is available with the scalar data.\n"},
  {"SetScalarVisibility", PyvtkPlotPoints_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether scalar data is used to color\nobjects.\n"},
  {"GetScalarVisibility", PyvtkPlotPoints_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkPlotPoints_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkPlotPoints_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SelectColorArray", PyvtkPlotPoints_SelectColorArray, METH_VARARGS,
   "SelectColorArray(self, arrayNum:int) -> None\nC++: void SelectColorArray(vtkIdType arrayNum)\nSelectColorArray(self, arrayName:str) -> None\nC++: void SelectColorArray(const vtkStdString &arrayName)\n\nWhen ScalarMode is set to UsePointFieldData or UseCellFieldData,\nyou can specify which array to use for coloring using these\nmethods. The lookup table will decide how to convert vectors to\ncolors.\n"},
  {"GetColorArrayName", PyvtkPlotPoints_GetColorArrayName, METH_VARARGS,
   "GetColorArrayName(self) -> str\nC++: vtkStdString GetColorArrayName()\n\nGet the array name to color by.\n"},
  {"SelectPoints", PyvtkPlotPoints_SelectPoints, METH_VARARGS,
   "SelectPoints(self, min:vtkVector2f, max:vtkVector2f) -> bool\nC++: bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max) override;\n\nSelect all points in the specified rectangle.\n"},
  {"SelectPointsInPolygon", PyvtkPlotPoints_SelectPointsInPolygon, METH_VARARGS,
   "SelectPointsInPolygon(self, polygon:vtkContextPolygon) -> bool\nC++: bool SelectPointsInPolygon(const vtkContextPolygon &polygon)\n    override;\n\nSelect all points in the specified polygon.\n"},
  {"GetMarkerStyle", PyvtkPlotPoints_GetMarkerStyle, METH_VARARGS,
   "GetMarkerStyle(self) -> int\nC++: virtual int GetMarkerStyle()\n\nGet/set the marker style that should be used. The default is\nnone, the enum in this class is used as a parameter.\n"},
  {"SetMarkerStyle", PyvtkPlotPoints_SetMarkerStyle, METH_VARARGS,
   "SetMarkerStyle(self, _arg:int) -> None\nC++: virtual void SetMarkerStyle(int _arg)\n\n"},
  {"GetMarkerSize", PyvtkPlotPoints_GetMarkerSize, METH_VARARGS,
   "GetMarkerSize(self) -> float\nC++: virtual float GetMarkerSize()\n\nGet/set the marker size that should be used. The default is\nnegative, and in that case it is 2.3 times the pen width, if less\nthan 8 will be used.\n"},
  {"SetMarkerSize", PyvtkPlotPoints_SetMarkerSize, METH_VARARGS,
   "SetMarkerSize(self, _arg:float) -> None\nC++: virtual void SetMarkerSize(float _arg)\n\n"},
  {"GetValidPointMaskName", PyvtkPlotPoints_GetValidPointMaskName, METH_VARARGS,
   "GetValidPointMaskName(self) -> str\nC++: virtual vtkStdString GetValidPointMaskName()\n\nGet/set the valid point mask array name.\n"},
  {"SetValidPointMaskName", PyvtkPlotPoints_SetValidPointMaskName, METH_VARARGS,
   "SetValidPointMaskName(self, _arg:str) -> None\nC++: virtual void SetValidPointMaskName(vtkStdString _arg)\n\n"},
  {"UpdateCache", PyvtkPlotPoints_UpdateCache, METH_VARARGS,
   "UpdateCache(self) -> bool\nC++: bool UpdateCache() override;\n\nUpdate the internal cache. Returns true if cache was successfully\nupdated. Default does nothing. This method is called by Update()\nwhen either the plot's data has changed or CacheRequiresUpdate()\nreturns true. It is not necessary to call this method explicitly.\n"},
  {"ReleaseGraphicsCache", PyvtkPlotPoints_ReleaseGraphicsCache, METH_VARARGS,
   "ReleaseGraphicsCache(self) -> None\nC++: void ReleaseGraphicsCache() override;\n\nRelease cache entries created by this context item.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPlotPoints_Doc =
  "vtkPlotPoints - Class for drawing an points given two columns from a\nvtkTable.\n\n"
  "Superclass: vtkPlot\n\n"
  "This class draws points in a plot given two columns from a table. If\n"
  "you need a line as well you should use vtkPlotLine which derives from\n"
  "vtkPlotPoints and is capable of drawing both points and a line.\n\n"
  "@sa\n"
  "vtkPlotLine\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPlotPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkPlotPoints", // tp_name
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
  PyvtkPlotPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPlotPoints_StaticNew()
{
  return vtkPlotPoints::New();
}

PyObject *PyvtkPlotPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPlotPoints_Type, PyvtkPlotPoints_Methods,
    "vtkPlotPoints",
 &PyvtkPlotPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "NONE", vtkPlotPoints::NONE },
        { "CROSS", vtkPlotPoints::CROSS },
        { "PLUS", vtkPlotPoints::PLUS },
        { "SQUARE", vtkPlotPoints::SQUARE },
        { "CIRCLE", vtkPlotPoints::CIRCLE },
        { "DIAMOND", vtkPlotPoints::DIAMOND },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPlotPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPlotPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPlotPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

