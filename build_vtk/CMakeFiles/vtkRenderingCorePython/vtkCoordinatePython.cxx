// python wrapper for vtkCoordinate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCoordinate.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCoordinate(PyObject *dict); }
extern "C" { PyObject *PyvtkCoordinate_ClassNew(); }


static PyObject *
PyvtkCoordinate_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCoordinate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCoordinate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCoordinate *tempr = vtkCoordinate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCoordinate::NewInstance());

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
PyvtkCoordinate_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCoordinate::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCoordinate::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystem(temp0);
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordinateSystem() :
      op->vtkCoordinate::GetCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToNormalizedDisplay();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToViewport();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToNormalizedViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToNormalizedViewport();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToNormalizedViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToView(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToView");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToView();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToView();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToPose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToPose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToPose();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToPose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCoordinateSystemToWorld();
    }
    else
    {
      op->vtkCoordinate::SetCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetCoordinateSystemAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordinateSystemAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCoordinateSystemAsString() :
      op->vtkCoordinate::GetCoordinateSystemAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

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
      op->SetValue(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkCoordinate::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCoordinate_SetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCoordinate_SetValue_s1(self, args);
    case 1:
      return PyvtkCoordinate_SetValue_s2(self, args);
    case 2:
      return PyvtkCoordinate_SetValue_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetValue");
  return nullptr;
}


static PyObject *
PyvtkCoordinate_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValue() :
      op->vtkCoordinate::GetValue());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkCoordinate *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCoordinate"))
  {
    if (ap.IsBound())
    {
      op->SetReferenceCoordinate(temp0);
    }
    else
    {
      op->vtkCoordinate::SetReferenceCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetReferenceCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCoordinate *tempr = (ap.IsBound() ?
      op->GetReferenceCoordinate() :
      op->vtkCoordinate::GetReferenceCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkCoordinate::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkCoordinate::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedWorldValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedWorldValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedWorldValue(temp0) :
      op->vtkCoordinate::GetComputedWorldValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedViewportValue(temp0) :
      op->vtkCoordinate::GetComputedViewportValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedLocalDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedLocalDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int *tempr = (ap.IsBound() ?
      op->GetComputedLocalDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedLocalDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleViewportValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleViewportValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleViewportValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleViewportValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedDoubleDisplayValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedDoubleDisplayValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedDoubleDisplayValue(temp0) :
      op->vtkCoordinate::GetComputedDoubleDisplayValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedValue(temp0) :
      op->vtkCoordinate::GetComputedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCoordinate_GetComputedUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputedUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCoordinate *op = static_cast<vtkCoordinate *>(vp);

  vtkViewport *temp0 = nullptr;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    double *tempr = (ap.IsBound() ?
      op->GetComputedUserDefinedValue(temp0) :
      op->vtkCoordinate::GetComputedUserDefinedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCoordinate_Methods[] = {
  {"IsTypeOf", PyvtkCoordinate_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCoordinate_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCoordinate_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCoordinate\nC++: static vtkCoordinate *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCoordinate_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCoordinate\nC++: vtkCoordinate *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCoordinate_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCoordinate_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCoordinateSystem", PyvtkCoordinate_SetCoordinateSystem, METH_VARARGS,
   "SetCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetCoordinateSystem(int _arg)\n\nSet/get the coordinate system which this coordinate is defined\nin. The options are Display, Normalized Display, Viewport,\nNormalized Viewport, View, and World.\n"},
  {"GetCoordinateSystem", PyvtkCoordinate_GetCoordinateSystem, METH_VARARGS,
   "GetCoordinateSystem(self) -> int\nC++: virtual int GetCoordinateSystem()\n\n"},
  {"SetCoordinateSystemToDisplay", PyvtkCoordinate_SetCoordinateSystemToDisplay, METH_VARARGS,
   "SetCoordinateSystemToDisplay(self) -> None\nC++: void SetCoordinateSystemToDisplay()\n\n"},
  {"SetCoordinateSystemToNormalizedDisplay", PyvtkCoordinate_SetCoordinateSystemToNormalizedDisplay, METH_VARARGS,
   "SetCoordinateSystemToNormalizedDisplay(self) -> None\nC++: void SetCoordinateSystemToNormalizedDisplay()\n\n"},
  {"SetCoordinateSystemToViewport", PyvtkCoordinate_SetCoordinateSystemToViewport, METH_VARARGS,
   "SetCoordinateSystemToViewport(self) -> None\nC++: void SetCoordinateSystemToViewport()\n\n"},
  {"SetCoordinateSystemToNormalizedViewport", PyvtkCoordinate_SetCoordinateSystemToNormalizedViewport, METH_VARARGS,
   "SetCoordinateSystemToNormalizedViewport(self) -> None\nC++: void SetCoordinateSystemToNormalizedViewport()\n\n"},
  {"SetCoordinateSystemToView", PyvtkCoordinate_SetCoordinateSystemToView, METH_VARARGS,
   "SetCoordinateSystemToView(self) -> None\nC++: void SetCoordinateSystemToView()\n\n"},
  {"SetCoordinateSystemToPose", PyvtkCoordinate_SetCoordinateSystemToPose, METH_VARARGS,
   "SetCoordinateSystemToPose(self) -> None\nC++: void SetCoordinateSystemToPose()\n\n"},
  {"SetCoordinateSystemToWorld", PyvtkCoordinate_SetCoordinateSystemToWorld, METH_VARARGS,
   "SetCoordinateSystemToWorld(self) -> None\nC++: void SetCoordinateSystemToWorld()\n\n"},
  {"GetCoordinateSystemAsString", PyvtkCoordinate_GetCoordinateSystemAsString, METH_VARARGS,
   "GetCoordinateSystemAsString(self) -> str\nC++: const char *GetCoordinateSystemAsString()\n\n"},
  {"SetValue", PyvtkCoordinate_SetValue, METH_VARARGS,
   "SetValue(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetValue(double _arg1, double _arg2,\n    double _arg3)\nSetValue(self, _arg:(float, float, float)) -> None\nC++: virtual void SetValue(const double _arg[3])\nSetValue(self, a:float, b:float) -> None\nC++: void SetValue(double a, double b)\n\nSet/get the value of this coordinate. This can be thought of as\nthe position of this coordinate in its coordinate system.\n"},
  {"GetValue", PyvtkCoordinate_GetValue, METH_VARARGS,
   "GetValue(self) -> (float, float, float)\nC++: virtual double *GetValue()\n\n"},
  {"SetReferenceCoordinate", PyvtkCoordinate_SetReferenceCoordinate, METH_VARARGS,
   "SetReferenceCoordinate(self, __a:vtkCoordinate) -> None\nC++: virtual void SetReferenceCoordinate(vtkCoordinate *)\n\nIf this coordinate is relative to another coordinate, then\nspecify that coordinate as the ReferenceCoordinate. If this is\nNULL the coordinate is assumed to be absolute.\n"},
  {"GetReferenceCoordinate", PyvtkCoordinate_GetReferenceCoordinate, METH_VARARGS,
   "GetReferenceCoordinate(self) -> vtkCoordinate\nC++: virtual vtkCoordinate *GetReferenceCoordinate()\n\n"},
  {"SetViewport", PyvtkCoordinate_SetViewport, METH_VARARGS,
   "SetViewport(self, viewport:vtkViewport) -> None\nC++: void SetViewport(vtkViewport *viewport)\n\nIf you want this coordinate to be relative to a specific\nvtkViewport (vtkRenderer) then you can specify that here. NOTE:\nthis is a raw pointer, not a weak pointer nor a reference counted\nobject, to avoid reference cycle loop between rendering classes\nand filter classes.\n"},
  {"GetViewport", PyvtkCoordinate_GetViewport, METH_VARARGS,
   "GetViewport(self) -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\n"},
  {"GetComputedWorldValue", PyvtkCoordinate_GetComputedWorldValue, METH_VARARGS,
   "GetComputedWorldValue(self, __a:vtkViewport) -> (float, float,\n    float)\nC++: double *GetComputedWorldValue(vtkViewport *)\n\nReturn the computed value in a specified coordinate system.\n"},
  {"GetComputedViewportValue", PyvtkCoordinate_GetComputedViewportValue, METH_VARARGS,
   "GetComputedViewportValue(self, __a:vtkViewport) -> (int, int)\nC++: int *GetComputedViewportValue(vtkViewport *)\n\n"},
  {"GetComputedDisplayValue", PyvtkCoordinate_GetComputedDisplayValue, METH_VARARGS,
   "GetComputedDisplayValue(self, __a:vtkViewport) -> (int, int)\nC++: int *GetComputedDisplayValue(vtkViewport *)\n\n"},
  {"GetComputedLocalDisplayValue", PyvtkCoordinate_GetComputedLocalDisplayValue, METH_VARARGS,
   "GetComputedLocalDisplayValue(self, __a:vtkViewport) -> (int, int)\nC++: int *GetComputedLocalDisplayValue(vtkViewport *)\n\n"},
  {"GetComputedDoubleViewportValue", PyvtkCoordinate_GetComputedDoubleViewportValue, METH_VARARGS,
   "GetComputedDoubleViewportValue(self, __a:vtkViewport) -> (float,\n    float)\nC++: double *GetComputedDoubleViewportValue(vtkViewport *)\n\n"},
  {"GetComputedDoubleDisplayValue", PyvtkCoordinate_GetComputedDoubleDisplayValue, METH_VARARGS,
   "GetComputedDoubleDisplayValue(self, __a:vtkViewport) -> (float,\n    float)\nC++: double *GetComputedDoubleDisplayValue(vtkViewport *)\n\n"},
  {"GetComputedValue", PyvtkCoordinate_GetComputedValue, METH_VARARGS,
   "GetComputedValue(self, __a:vtkViewport) -> (float, float, float)\nC++: double *GetComputedValue(vtkViewport *)\n\nGetComputedValue() will return either World, Viewport or Display\nbased on what has been set as the coordinate system. This is good\nfor objects like vtkLineSource, where the user might want to use\nthem as World or Viewport coordinates.\n"},
  {"GetComputedUserDefinedValue", PyvtkCoordinate_GetComputedUserDefinedValue, METH_VARARGS,
   "GetComputedUserDefinedValue(self, __a:vtkViewport) -> (float,\n    float, float)\nC++: virtual double *GetComputedUserDefinedValue(vtkViewport *)\n\nGetComputedUserDefinedValue() is to be used only when the\ncoordinate system is VTK_USERDEFINED. The user must subclass\nvtkCoordinate and override this function, when set as the\nTransformCoordinate in 2D-Mappers, the user can customize display\nof 2D polygons\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCoordinate_Doc =
  "vtkCoordinate - perform coordinate transformation, and represent\nposition, in a variety of vtk coordinate systems\n\n"
  "Superclass: vtkObject\n\n"
  "vtkCoordinate represents position in a variety of coordinate systems,\n"
  "and converts position to other coordinate systems. It also supports\n"
  "relative positioning, so you can create a cascade of vtkCoordinate\n"
  "objects (no loops please!) that refer to each other. The typical\n"
  "usage of this object is to set the coordinate system in which to\n"
  "represent a position (e.g.,\n"
  "SetCoordinateSystemToNormalizedDisplay()), set the value of the\n"
  "coordinate (e.g., SetValue()), and then invoke the appropriate method\n"
  "to convert to another coordinate system (e.g.,\n"
  "GetComputedWorldValue()).\n\n"
  "The coordinate systems in vtk are as follows:\n\n\n"
  "  DISPLAY -             x-y pixel values in window\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     size, size is the upper right of the last pixel\n"
  "  NORMALIZED DISPLAY -  x-y (0,1) normalized values\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     1, 1 is the upper right of the last pixel\n"
  "  VIEWPORT -            x-y pixel values in viewport\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     size, size is the upper right of the last pixel\n"
  "  NORMALIZED VIEWPORT - x-y (0,1) normalized value in viewport\n"
  "     0, 0 is the lower left of the first pixel,\n"
  "     1, 1 is the upper right of the last pixel\n"
  "  VIEW -                x-y-z (-1,1) values in pose coordinates. (z\n"
  "is depth)\n"
  "  POSE -                world coords translated and rotated to the\n"
  "camera\n"
  "                        position and view direction\n"
  "  WORLD -               x-y-z global coordinate values\n"
  "  USERDEFINED -         x-y-z in User defined space \n\n"
  "If you cascade vtkCoordinate objects, you refer to another\n"
  "vtkCoordinate object which in turn can refer to others, and so on.\n"
  "This allows you to create composite groups of things like vtkActor2D\n"
  "that are positioned relative to one another. Note that in cascaded\n"
  "sequences, each vtkCoordinate object may be specified in different\n"
  "coordinate systems!\n\n"
  "@sa\n"
  "vtkActor2D vtkScalarBarActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCoordinate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCoordinate", // tp_name
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
  PyvtkCoordinate_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCoordinate_StaticNew()
{
  return vtkCoordinate::New();
}

PyObject *PyvtkCoordinate_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCoordinate_Type, PyvtkCoordinate_Methods,
    "vtkCoordinate",
 &PyvtkCoordinate_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCoordinate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCoordinate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCoordinate", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "VTK_DISPLAY", 0 },
        { "VTK_NORMALIZED_DISPLAY", 1 },
        { "VTK_VIEWPORT", 2 },
        { "VTK_NORMALIZED_VIEWPORT", 3 },
        { "VTK_VIEW", 4 },
        { "VTK_POSE", 5 },
        { "VTK_WORLD", 6 },
        { "VTK_USERDEFINED", 7 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

