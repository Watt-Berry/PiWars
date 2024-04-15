// python wrapper for vtkControlPointsItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkControlPointsItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkControlPointsItem(PyObject *dict); }
extern "C" { PyObject *PyvtkControlPointsItem_ClassNew(); }

#ifndef DECLARED_PyvtkPlot_ClassNew
extern "C" { PyObject *PyvtkPlot_ClassNew(); }
#define DECLARED_PyvtkPlot_ClassNew
#endif

static PyObject *
PyvtkControlPointsItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkControlPointsItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkControlPointsItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkControlPointsItem *tempr = vtkControlPointsItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkControlPointsItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkControlPointsItem::NewInstance());

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
PyvtkControlPointsItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkControlPointsItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkControlPointsItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->vtkControlPointsItem::GetBounds(temp0);
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
PyvtkControlPointsItem_SetUserBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetUserBounds(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkControlPointsItem::SetUserBounds(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserBounds(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetUserBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetUserBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkControlPointsItem_SetUserBounds_s1(self, args);
    case 1:
      return PyvtkControlPointsItem_SetUserBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUserBounds");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_GetUserBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUserBounds() :
      op->vtkControlPointsItem::GetUserBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetValidBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetValidBounds(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkControlPointsItem::SetValidBounds(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetValidBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetValidBounds(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetValidBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SetValidBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkControlPointsItem_SetValidBounds_s1(self, args);
    case 1:
      return PyvtkControlPointsItem_SetValidBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValidBounds");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_GetValidBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValidBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValidBounds() :
      op->vtkControlPointsItem::GetValidBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetScreenPointRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenPointRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetScreenPointRadius() :
      op->vtkControlPointsItem::GetScreenPointRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetScreenPointRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenPointRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenPointRadius(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetScreenPointRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetDrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawPoints() :
      op->vtkControlPointsItem::GetDrawPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetDrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawPoints(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetDrawPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DrawPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPointsOn();
    }
    else
    {
      op->vtkControlPointsItem::DrawPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DrawPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawPointsOff();
    }
    else
    {
      op->vtkControlPointsItem::DrawPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkControlPointsItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SelectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SelectPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SelectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SelectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SelectPoint(temp0);
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

static PyMethodDef PyvtkControlPointsItem_SelectPoint_Methods[] = {
  {"SelectPoint", PyvtkControlPointsItem_SelectPoint_s1, METH_VARARGS,
   "@k"},
  {"SelectPoint", PyvtkControlPointsItem_SelectPoint_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_SelectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_SelectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SelectPoint");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_SelectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SelectAllPoints();
    }
    else
    {
      op->vtkControlPointsItem::SelectAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_DeselectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeselectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::DeselectPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_DeselectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DeselectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::DeselectPoint(temp0);
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

static PyMethodDef PyvtkControlPointsItem_DeselectPoint_Methods[] = {
  {"DeselectPoint", PyvtkControlPointsItem_DeselectPoint_s1, METH_VARARGS,
   "@k"},
  {"DeselectPoint", PyvtkControlPointsItem_DeselectPoint_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_DeselectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_DeselectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DeselectPoint");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_DeselectAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeselectAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeselectAllPoints();
    }
    else
    {
      op->vtkControlPointsItem::DeselectAllPoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleSelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ToggleSelectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::ToggleSelectPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToggleSelectPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ToggleSelectPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::ToggleSelectPoint(temp0);
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

static PyMethodDef PyvtkControlPointsItem_ToggleSelectPoint_Methods[] = {
  {"ToggleSelectPoint", PyvtkControlPointsItem_ToggleSelectPoint_s1, METH_VARARGS,
   "@k"},
  {"ToggleSelectPoint", PyvtkControlPointsItem_ToggleSelectPoint_s2, METH_VARARGS,
   "@P *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_ToggleSelectPoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_ToggleSelectPoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToggleSelectPoint");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_SelectPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

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
      op->vtkControlPointsItem::SelectPoints(*temp0, *temp1));

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
PyvtkControlPointsItem_GetNumberOfSelectedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSelectedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfSelectedPoints() :
      op->vtkControlPointsItem::GetNumberOfSelectedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_FindPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkControlPointsItem::FindPoint(temp0));

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
PyvtkControlPointsItem_IsOverPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsOverPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->IsOverPoint(temp0, temp1) :
      op->vtkControlPointsItem::IsOverPoint(temp0, temp1));

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
PyvtkControlPointsItem_GetControlPointId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->GetControlPointId(temp0) :
      op->vtkControlPointsItem::GetControlPointId(temp0));

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
PyvtkControlPointsItem_GetControlPointsIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPointsIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->GetControlPointsIds(temp0, temp1);
    }
    else
    {
      op->vtkControlPointsItem::GetControlPointsIds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrokeMode(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetStrokeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetStrokeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrokeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetStrokeMode() :
      op->vtkControlPointsItem::GetStrokeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSwitchPointsMode(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetSwitchPointsMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSwitchPointsMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwitchPointsMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSwitchPointsMode() :
      op->vtkControlPointsItem::GetSwitchPointsMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsXMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsXMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPointsXMovable(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetEndPointsXMovable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsXMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsXMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsXMovable() :
      op->vtkControlPointsItem::GetEndPointsXMovable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsYMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsYMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPointsYMovable(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetEndPointsYMovable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsYMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsYMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsYMovable() :
      op->vtkControlPointsItem::GetEndPointsYMovable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsMovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsMovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsMovable() :
      op->vtkControlPointsItem::GetEndPointsMovable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetEndPointsRemovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPointsRemovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEndPointsRemovable(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetEndPointsRemovable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetEndPointsRemovable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPointsRemovable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetEndPointsRemovable() :
      op->vtkControlPointsItem::GetEndPointsRemovable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetShowLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLabels(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetShowLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetShowLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowLabels() :
      op->vtkControlPointsItem::GetShowLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkControlPointsItem::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_AddPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = op->AddPoint(temp0);

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
PyvtkControlPointsItem_RemovePoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = op->RemovePoint(temp0);

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
PyvtkControlPointsItem_RemovePoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->RemovePoint(temp0) :
      op->vtkControlPointsItem::RemovePoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_RemovePoint_Methods[] = {
  {"RemovePoint", PyvtkControlPointsItem_RemovePoint_s1, METH_VARARGS,
   "@P *d"},
  {"RemovePoint", PyvtkControlPointsItem_RemovePoint_s2, METH_VARARGS,
   "@k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_RemovePoint(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_RemovePoint_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemovePoint");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_RemoveCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveCurrentPoint();
    }
    else
    {
      op->vtkControlPointsItem::RemoveCurrentPoint();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->GetControlPoint(temp0, temp1);

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
PyvtkControlPointsItem_SetControlPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetControlPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->SetControlPoint(temp0, temp1);

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
PyvtkControlPointsItem_MovePoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->MovePoints(*temp0, temp1);
    }
    else
    {
      op->vtkControlPointsItem::MovePoints(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkControlPointsItem_MovePoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MovePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->MovePoints(*temp0, temp1);
    }
    else
    {
      op->vtkControlPointsItem::MovePoints(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkControlPointsItem_MovePoints_Methods[] = {
  {"MovePoints", PyvtkControlPointsItem_MovePoints_s1, METH_VARARGS,
   "@WV vtkVector2f *vtkIdTypeArray"},
  {"MovePoints", PyvtkControlPointsItem_MovePoints_s2, METH_VARARGS,
   "@W|q vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_MovePoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_MovePoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkControlPointsItem_MovePoints_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "MovePoints");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_SpreadPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpreadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SpreadPoints(temp0, temp1);
    }
    else
    {
      op->vtkControlPointsItem::SpreadPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkControlPointsItem_SpreadPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SpreadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  float temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SpreadPoints(temp0, temp1);
    }
    else
    {
      op->vtkControlPointsItem::SpreadPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkControlPointsItem_SpreadPoints_Methods[] = {
  {"SpreadPoints", PyvtkControlPointsItem_SpreadPoints_s1, METH_VARARGS,
   "@fV *vtkIdTypeArray"},
  {"SpreadPoints", PyvtkControlPointsItem_SpreadPoints_s2, METH_VARARGS,
   "@f|q"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkControlPointsItem_SpreadPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkControlPointsItem_SpreadPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkControlPointsItem_SpreadPoints_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SpreadPoints");
  return nullptr;
}


static PyObject *
PyvtkControlPointsItem_GetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCurrentPoint() :
      op->vtkControlPointsItem::GetCurrentPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetCurrentPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentPoint(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetCurrentPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSelectedPointPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPen *tempr = (ap.IsBound() ?
      op->GetSelectedPointPen() :
      op->vtkControlPointsItem::GetSelectedPointPen());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetSelectedPointBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedPointBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetSelectedPointBrush() :
      op->vtkControlPointsItem::GetSelectedPointBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetUseAddPointItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseAddPointItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseAddPointItem() :
      op->vtkControlPointsItem::GetUseAddPointItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_SetUseAddPointItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseAddPointItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseAddPointItem(temp0);
    }
    else
    {
      op->vtkControlPointsItem::SetUseAddPointItem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_UseAddPointItemOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAddPointItemOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAddPointItemOn();
    }
    else
    {
      op->vtkControlPointsItem::UseAddPointItemOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_UseAddPointItemOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseAddPointItemOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseAddPointItemOff();
    }
    else
    {
      op->vtkControlPointsItem::UseAddPointItemOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_GetAddPointItem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddPointItem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetAddPointItem() :
      op->vtkControlPointsItem::GetAddPointItem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_ResetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetBounds();
    }
    else
    {
      op->vtkControlPointsItem::ResetBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkControlPointsItem_MouseButtonPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonPressEvent(*temp0) :
      op->vtkControlPointsItem::MouseButtonPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkControlPointsItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkControlPointsItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkControlPointsItem_MouseButtonReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseButtonReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseButtonReleaseEvent(*temp0) :
      op->vtkControlPointsItem::MouseButtonReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkControlPointsItem_MouseMoveEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseMoveEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseMoveEvent(*temp0) :
      op->vtkControlPointsItem::MouseMoveEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkControlPointsItem_KeyPressEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyPressEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyPressEvent(*temp0) :
      op->vtkControlPointsItem::KeyPressEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkControlPointsItem_KeyReleaseEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeyReleaseEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkControlPointsItem *op = static_cast<vtkControlPointsItem *>(vp);

  vtkContextKeyEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextKeyEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->KeyReleaseEvent(*temp0) :
      op->vtkControlPointsItem::KeyReleaseEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkControlPointsItem_Methods[] = {
  {"IsTypeOf", PyvtkControlPointsItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkControlPointsItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkControlPointsItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkControlPointsItem\nC++: static vtkControlPointsItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkControlPointsItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkControlPointsItem\nC++: vtkControlPointsItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkControlPointsItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkControlPointsItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkControlPointsItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: void GetBounds(double bounds[4]) override;\n\nBounds of the item, typically the bound of all the control points\nexcept if custom bounds have been set \\sa SetUserBounds.\n"},
  {"SetUserBounds", PyvtkControlPointsItem_SetUserBounds, METH_VARARGS,
   "SetUserBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetUserBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetUserBounds(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetUserBounds(const double _arg[4])\n\nSet custom bounds, except if bounds are invalid, bounds will be\nautomatically computed based on the range of the control points\nInvalid bounds by default.\n"},
  {"GetUserBounds", PyvtkControlPointsItem_GetUserBounds, METH_VARARGS,
   "GetUserBounds(self) -> (float, float, float, float)\nC++: virtual double *GetUserBounds()\n\n"},
  {"SetValidBounds", PyvtkControlPointsItem_SetValidBounds, METH_VARARGS,
   "SetValidBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetValidBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetValidBounds(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetValidBounds(const double _arg[4])\n\nControls the valid range for the values. An invalid value (0, -1,\n0., -1, 0, -1.) indicates that the valid range is the current\nbounds. It is the default behavior.\n"},
  {"GetValidBounds", PyvtkControlPointsItem_GetValidBounds, METH_VARARGS,
   "GetValidBounds(self) -> (float, float, float, float)\nC++: virtual double *GetValidBounds()\n\n"},
  {"GetScreenPointRadius", PyvtkControlPointsItem_GetScreenPointRadius, METH_VARARGS,
   "GetScreenPointRadius(self) -> float\nC++: virtual float GetScreenPointRadius()\n\nGet/set the radius for screen points. Default is 6.f\n"},
  {"SetScreenPointRadius", PyvtkControlPointsItem_SetScreenPointRadius, METH_VARARGS,
   "SetScreenPointRadius(self, _arg:float) -> None\nC++: virtual void SetScreenPointRadius(float _arg)\n\n"},
  {"GetDrawPoints", PyvtkControlPointsItem_GetDrawPoints, METH_VARARGS,
   "GetDrawPoints(self) -> bool\nC++: virtual bool GetDrawPoints()\n\nGet/Set the flag to draw points. Default is true.\n"},
  {"SetDrawPoints", PyvtkControlPointsItem_SetDrawPoints, METH_VARARGS,
   "SetDrawPoints(self, _arg:bool) -> None\nC++: virtual void SetDrawPoints(bool _arg)\n\n"},
  {"DrawPointsOn", PyvtkControlPointsItem_DrawPointsOn, METH_VARARGS,
   "DrawPointsOn(self) -> None\nC++: virtual void DrawPointsOn()\n\n"},
  {"DrawPointsOff", PyvtkControlPointsItem_DrawPointsOff, METH_VARARGS,
   "DrawPointsOff(self) -> None\nC++: virtual void DrawPointsOff()\n\n"},
  {"Paint", PyvtkControlPointsItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint the points with a fixed size (cosmetic) which doesn't\ndepend on the scene zoom factor. Selected and unselected points\nare drawn with a different color.\n"},
  {"SelectPoint", PyvtkControlPointsItem_SelectPoint, METH_VARARGS,
   "SelectPoint(self, pointId:int) -> None\nC++: void SelectPoint(vtkIdType pointId)\nSelectPoint(self, currentPoint:[float, ...]) -> None\nC++: void SelectPoint(double *currentPoint)\n\nSelect a point by its ID\n"},
  {"SelectAllPoints", PyvtkControlPointsItem_SelectAllPoints, METH_VARARGS,
   "SelectAllPoints(self) -> None\nC++: void SelectAllPoints()\n\nSelect all the points\n"},
  {"DeselectPoint", PyvtkControlPointsItem_DeselectPoint, METH_VARARGS,
   "DeselectPoint(self, pointId:int) -> None\nC++: void DeselectPoint(vtkIdType pointId)\nDeselectPoint(self, currentPoint:[float, ...]) -> None\nC++: void DeselectPoint(double *currentPoint)\n\nUnselect a point by its ID\n"},
  {"DeselectAllPoints", PyvtkControlPointsItem_DeselectAllPoints, METH_VARARGS,
   "DeselectAllPoints(self) -> None\nC++: void DeselectAllPoints()\n\nUnselect all the previously selected points\n"},
  {"ToggleSelectPoint", PyvtkControlPointsItem_ToggleSelectPoint, METH_VARARGS,
   "ToggleSelectPoint(self, pointId:int) -> None\nC++: void ToggleSelectPoint(vtkIdType pointId)\nToggleSelectPoint(self, currentPoint:[float, ...]) -> None\nC++: void ToggleSelectPoint(double *currentPoint)\n\nToggle the selection of a point by its ID. If the point was\nselected then unselect it, otherwise select it.\n"},
  {"SelectPoints", PyvtkControlPointsItem_SelectPoints, METH_VARARGS,
   "SelectPoints(self, min:vtkVector2f, max:vtkVector2f) -> bool\nC++: bool SelectPoints(const vtkVector2f &min,\n    const vtkVector2f &max) override;\n\nSelect all points in the specified rectangle.\n"},
  {"GetNumberOfSelectedPoints", PyvtkControlPointsItem_GetNumberOfSelectedPoints, METH_VARARGS,
   "GetNumberOfSelectedPoints(self) -> int\nC++: vtkIdType GetNumberOfSelectedPoints()\n\nReturn the number of selected points.\n"},
  {"FindPoint", PyvtkControlPointsItem_FindPoint, METH_VARARGS,
   "FindPoint(self, pos:[float, ...]) -> int\nC++: vtkIdType FindPoint(double *pos)\n\nReturns the vtkIdType of the point given its coordinates and a\ntolerance based on the screen point size.\n"},
  {"IsOverPoint", PyvtkControlPointsItem_IsOverPoint, METH_VARARGS,
   "IsOverPoint(self, pos:[float, ...], pointId:int) -> bool\nC++: bool IsOverPoint(double *pos, vtkIdType pointId)\n\nReturns true if pos is above the pointId point, false otherwise.\nIt uses the size of the drawn point. To search what point is\nunder the pos, use the more efficient \\sa FindPoint() instead.\n"},
  {"GetControlPointId", PyvtkControlPointsItem_GetControlPointId, METH_VARARGS,
   "GetControlPointId(self, pos:[float, ...]) -> int\nC++: vtkIdType GetControlPointId(double *pos)\n\nReturns the id of the control point exactly matching pos, -1 if\nnot found.\n"},
  {"GetControlPointsIds", PyvtkControlPointsItem_GetControlPointsIds, METH_VARARGS,
   "GetControlPointsIds(self, ids:vtkIdTypeArray,\n    excludeFirstAndLast:bool=False) -> None\nC++: void GetControlPointsIds(vtkIdTypeArray *ids,\n    bool excludeFirstAndLast=false)\n\nUtility function that returns an array of all the control points\nIDs Typically: [0, 1, 2, ... n -1] where n is the point count Can\nexclude the first and last point ids from the array.\n"},
  {"SetStrokeMode", PyvtkControlPointsItem_SetStrokeMode, METH_VARARGS,
   "SetStrokeMode(self, _arg:bool) -> None\nC++: virtual void SetStrokeMode(bool _arg)\n\nControls whether or not control points are drawn (true) or\nclicked and moved (false). False by default.\n"},
  {"GetStrokeMode", PyvtkControlPointsItem_GetStrokeMode, METH_VARARGS,
   "GetStrokeMode(self) -> bool\nC++: virtual bool GetStrokeMode()\n\n"},
  {"SetSwitchPointsMode", PyvtkControlPointsItem_SetSwitchPointsMode, METH_VARARGS,
   "SetSwitchPointsMode(self, _arg:bool) -> None\nC++: virtual void SetSwitchPointsMode(bool _arg)\n\nIf DrawPoints is false, SwitchPoints controls the behavior when a\ncontrol point is dragged past another point. The crossed point\nbecomes current (true) or the current point is blocked/stopped\n(false). False by default.\n"},
  {"GetSwitchPointsMode", PyvtkControlPointsItem_GetSwitchPointsMode, METH_VARARGS,
   "GetSwitchPointsMode(self) -> bool\nC++: virtual bool GetSwitchPointsMode()\n\n"},
  {"SetEndPointsXMovable", PyvtkControlPointsItem_SetEndPointsXMovable, METH_VARARGS,
   "SetEndPointsXMovable(self, _arg:bool) -> None\nC++: virtual void SetEndPointsXMovable(bool _arg)\n\nIf EndPointsMovable is false, the two end points will not be\nmoved. True by default.\n"},
  {"GetEndPointsXMovable", PyvtkControlPointsItem_GetEndPointsXMovable, METH_VARARGS,
   "GetEndPointsXMovable(self) -> bool\nC++: virtual bool GetEndPointsXMovable()\n\n"},
  {"SetEndPointsYMovable", PyvtkControlPointsItem_SetEndPointsYMovable, METH_VARARGS,
   "SetEndPointsYMovable(self, _arg:bool) -> None\nC++: virtual void SetEndPointsYMovable(bool _arg)\n\n"},
  {"GetEndPointsYMovable", PyvtkControlPointsItem_GetEndPointsYMovable, METH_VARARGS,
   "GetEndPointsYMovable(self) -> bool\nC++: virtual bool GetEndPointsYMovable()\n\n"},
  {"GetEndPointsMovable", PyvtkControlPointsItem_GetEndPointsMovable, METH_VARARGS,
   "GetEndPointsMovable(self) -> bool\nC++: virtual bool GetEndPointsMovable()\n\n"},
  {"SetEndPointsRemovable", PyvtkControlPointsItem_SetEndPointsRemovable, METH_VARARGS,
   "SetEndPointsRemovable(self, _arg:bool) -> None\nC++: virtual void SetEndPointsRemovable(bool _arg)\n\nIf EndPointsRemovable is false, the two end points will not be\nremoved. True by default.\n"},
  {"GetEndPointsRemovable", PyvtkControlPointsItem_GetEndPointsRemovable, METH_VARARGS,
   "GetEndPointsRemovable(self) -> bool\nC++: virtual bool GetEndPointsRemovable()\n\n"},
  {"SetShowLabels", PyvtkControlPointsItem_SetShowLabels, METH_VARARGS,
   "SetShowLabels(self, _arg:bool) -> None\nC++: virtual void SetShowLabels(bool _arg)\n\nWhen set to true, labels are shown on the current control point\nand the end points. Default is false.\n"},
  {"GetShowLabels", PyvtkControlPointsItem_GetShowLabels, METH_VARARGS,
   "GetShowLabels(self) -> bool\nC++: virtual bool GetShowLabels()\n\n"},
  {"SetLabelFormat", PyvtkControlPointsItem_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, _arg:str) -> None\nC++: virtual void SetLabelFormat(const char *_arg)\n\nGet/Set the label format. Default is \"%.4f, %.4f\".\n"},
  {"GetLabelFormat", PyvtkControlPointsItem_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: virtual char *GetLabelFormat()\n\n"},
  {"AddPoint", PyvtkControlPointsItem_AddPoint, METH_VARARGS,
   "AddPoint(self, newPos:[float, ...]) -> int\nC++: virtual vtkIdType AddPoint(double *newPos)\n\nAdd a point to the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemovePoint", PyvtkControlPointsItem_RemovePoint, METH_VARARGS,
   "RemovePoint(self, pos:[float, ...]) -> int\nC++: virtual vtkIdType RemovePoint(double *pos)\nRemovePoint(self, pointId:int) -> int\nC++: vtkIdType RemovePoint(vtkIdType pointId)\n\nRemove a point of the function. Returns the index of the point (0\nbased), or -1 on error. Subclasses should reimplement this\nfunction to do the actual work.\n"},
  {"RemoveCurrentPoint", PyvtkControlPointsItem_RemoveCurrentPoint, METH_VARARGS,
   "RemoveCurrentPoint(self) -> None\nC++: void RemoveCurrentPoint()\n\nRemove the current point.\n"},
  {"GetNumberOfPoints", PyvtkControlPointsItem_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nReturns the total number of points\n"},
  {"GetControlPoint", PyvtkControlPointsItem_GetControlPoint, METH_VARARGS,
   "GetControlPoint(self, index:int, point:[float, ...]) -> None\nC++: virtual void GetControlPoint(vtkIdType index, double *point)\n\nReturns the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index. point\nmust be a double array of size 4.\n"},
  {"SetControlPoint", PyvtkControlPointsItem_SetControlPoint, METH_VARARGS,
   "SetControlPoint(self, index:int, point:[float, ...]) -> None\nC++: virtual void SetControlPoint(vtkIdType index, double *point)\n\nSets the x and y coordinates as well as the midpoint and\nsharpness of the control point corresponding to the index.\n"},
  {"MovePoints", PyvtkControlPointsItem_MovePoints, METH_VARARGS,
   "MovePoints(self, translation:vtkVector2f, pointIds:vtkIdTypeArray)\n     -> None\nC++: void MovePoints(const vtkVector2f &translation,\n    vtkIdTypeArray *pointIds)\nMovePoints(self, translation:vtkVector2f,\n    dontMoveFirstAndLast:bool=False) -> None\nC++: void MovePoints(const vtkVector2f &translation,\n    bool dontMoveFirstAndLast=false)\n\nMove the points referred by pointIds by a given translation. The\nnew positions won't be outside the bounds. MovePoints is\ntypically called with GetControlPointsIds() or GetSelection().\nWarning: if you pass this->GetSelection(), the array is deleted\nafter each individual point move. Increase the reference count of\nthe array. See also MoveAllPoints()\n"},
  {"SpreadPoints", PyvtkControlPointsItem_SpreadPoints, METH_VARARGS,
   "SpreadPoints(self, factor:float, pointIds:vtkIdTypeArray) -> None\nC++: void SpreadPoints(float factor, vtkIdTypeArray *pointIds)\nSpreadPoints(self, factor:float,\n    dontSpreadFirstAndLast:bool=False) -> None\nC++: void SpreadPoints(float factor,\n    bool dontSpreadFirstAndLast=false)\n\nSpread the points referred by pointIds If factor > 0, points are\nmoved away from each other. If factor < 0, points are moved\ncloser to each other SpreadPoints is typically called with\nGetControlPointsIds() or GetSelection(). Warning: if you pass\nthis->GetSelection(), the array is deleted after each individual\npoint move. Increase the reference count of the array.\n"},
  {"GetCurrentPoint", PyvtkControlPointsItem_GetCurrentPoint, METH_VARARGS,
   "GetCurrentPoint(self) -> int\nC++: vtkIdType GetCurrentPoint()\n\nReturns the current point ID selected or -1 if there is no point\ncurrent. No current point by default.\n"},
  {"SetCurrentPoint", PyvtkControlPointsItem_SetCurrentPoint, METH_VARARGS,
   "SetCurrentPoint(self, index:int) -> None\nC++: void SetCurrentPoint(vtkIdType index)\n\nSets the current point selected.\n"},
  {"GetSelectedPointPen", PyvtkControlPointsItem_GetSelectedPointPen, METH_VARARGS,
   "GetSelectedPointPen(self) -> vtkPen\nC++: virtual vtkPen *GetSelectedPointPen()\n\nGets the selected point pen and brush.\n"},
  {"GetSelectedPointBrush", PyvtkControlPointsItem_GetSelectedPointBrush, METH_VARARGS,
   "GetSelectedPointBrush(self) -> vtkBrush\nC++: virtual vtkBrush *GetSelectedPointBrush()\n\nDepending on the control points item, the brush might not be\ntaken into account.\n"},
  {"GetUseAddPointItem", PyvtkControlPointsItem_GetUseAddPointItem, METH_VARARGS,
   "GetUseAddPointItem(self) -> bool\nC++: virtual bool GetUseAddPointItem()\n\nWhen enabled, a dedicated item is used to determine if a point\nshould be added when clicking anywhere. This item can be\nrecovered with GetAddPointItem and can this be placed below all\nother items. False by default.\n"},
  {"SetUseAddPointItem", PyvtkControlPointsItem_SetUseAddPointItem, METH_VARARGS,
   "SetUseAddPointItem(self, _arg:bool) -> None\nC++: virtual void SetUseAddPointItem(bool _arg)\n\n"},
  {"UseAddPointItemOn", PyvtkControlPointsItem_UseAddPointItemOn, METH_VARARGS,
   "UseAddPointItemOn(self) -> None\nC++: virtual void UseAddPointItemOn()\n\n"},
  {"UseAddPointItemOff", PyvtkControlPointsItem_UseAddPointItemOff, METH_VARARGS,
   "UseAddPointItemOff(self) -> None\nC++: virtual void UseAddPointItemOff()\n\n"},
  {"GetAddPointItem", PyvtkControlPointsItem_GetAddPointItem, METH_VARARGS,
   "GetAddPointItem(self) -> vtkPlot\nC++: vtkPlot *GetAddPointItem()\n\nItem dedicated to add point, to be added below all other items.\nUsed only if UseAddPointItem is set to true.\n"},
  {"ResetBounds", PyvtkControlPointsItem_ResetBounds, METH_VARARGS,
   "ResetBounds(self) -> None\nC++: void ResetBounds()\n\nRecompute the bounds next time they are requested. You shouldn't\nhave to call it but it is provided for rare cases.\n"},
  {"MouseButtonPressEvent", PyvtkControlPointsItem_MouseButtonPressEvent, METH_VARARGS,
   "MouseButtonPressEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonPressEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse and key events.\n"},
  {"MouseDoubleClickEvent", PyvtkControlPointsItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &mouse)\n     override;\n\nMouse button double click event. Return true if the item holds\nthe event, false if the event can be propagated to other items.\n"},
  {"MouseButtonReleaseEvent", PyvtkControlPointsItem_MouseButtonReleaseEvent, METH_VARARGS,
   "MouseButtonReleaseEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseButtonReleaseEvent(\n    const vtkContextMouseEvent &mouse) override;\n\nMouse button release event. Return true if the item holds the\nevent, false if the event can be propagated to other items.\n"},
  {"MouseMoveEvent", PyvtkControlPointsItem_MouseMoveEvent, METH_VARARGS,
   "MouseMoveEvent(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool MouseMoveEvent(const vtkContextMouseEvent &mouse)\n    override;\n\nMouse move event. Return true if the item holds the event, false\nif the event can be propagated to other items.\n"},
  {"KeyPressEvent", PyvtkControlPointsItem_KeyPressEvent, METH_VARARGS,
   "KeyPressEvent(self, key:vtkContextKeyEvent) -> bool\nC++: bool KeyPressEvent(const vtkContextKeyEvent &key) override;\n\nKey press event.\n"},
  {"KeyReleaseEvent", PyvtkControlPointsItem_KeyReleaseEvent, METH_VARARGS,
   "KeyReleaseEvent(self, key:vtkContextKeyEvent) -> bool\nC++: bool KeyReleaseEvent(const vtkContextKeyEvent &key) override;\n\nKey release event.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkControlPointsItem_Doc =
  "vtkControlPointsItem - Abstract class for control points items.\n\n"
  "Superclass: vtkPlot\n\n"
  "vtkControlPointsItem provides control point painting and management\n"
  "for subclasses that provide points (typically control points of a\n"
  "transfer function)\n"
  "@sa\n"
  "vtkScalarsToColorsItem vtkPiecewiseControlPointsItem\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkControlPointsItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkControlPointsItem", // tp_name
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
  PyvtkControlPointsItem_Doc, // tp_doc
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

PyObject *PyvtkControlPointsItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkControlPointsItem_Type, PyvtkControlPointsItem_Methods,
    "vtkControlPointsItem",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPlot_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "CurrentPointChangedEvent", vtkControlPointsItem::CurrentPointChangedEvent },
        { "CurrentPointEditEvent", vtkControlPointsItem::CurrentPointEditEvent },
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

void PyVTKAddFile_vtkControlPointsItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkControlPointsItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkControlPointsItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

