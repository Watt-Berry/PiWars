// python wrapper for vtkLegendBoxActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLegendBoxActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLegendBoxActor(PyObject *dict); }
extern "C" { PyObject *PyvtkLegendBoxActor_ClassNew(); }


static PyObject *
PyvtkLegendBoxActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLegendBoxActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLegendBoxActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLegendBoxActor *tempr = vtkLegendBoxActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLegendBoxActor::NewInstance());

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
PyvtkLegendBoxActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLegendBoxActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLegendBoxActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfEntries(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetNumberOfEntries(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetNumberOfEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEntries() :
      op->vtkLegendBoxActor::GetNumberOfEntries());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  const char *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->SetEntry(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3);
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
PyvtkLegendBoxActor_SetEntry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  const char *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->SetEntry(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3);
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
PyvtkLegendBoxActor_SetEntry_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  vtkImageData *temp2 = nullptr;
  const char *temp3 = nullptr;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->SetEntry(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntry(temp0, temp1, temp2, temp3, temp4);
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

static PyMethodDef PyvtkLegendBoxActor_SetEntry_Methods[] = {
  {"SetEntry", PyvtkLegendBoxActor_SetEntry_s1, METH_VARARGS,
   "@iVzP *vtkPolyData *d"},
  {"SetEntry", PyvtkLegendBoxActor_SetEntry_s2, METH_VARARGS,
   "@iVzP *vtkImageData *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkLegendBoxActor_SetEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkLegendBoxActor_SetEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkLegendBoxActor_SetEntry_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEntry");
  return nullptr;
}


static PyObject *
PyvtkLegendBoxActor_SetEntrySymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntrySymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetEntrySymbol(temp0, temp1);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntrySymbol(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetEntryIcon(temp0, temp1);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntryIcon(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEntryString(temp0, temp1);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntryString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetEntryColor(temp0, temp1);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntryColor(temp0, temp1);
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
PyvtkLegendBoxActor_SetEntryColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
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
      op->SetEntryColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntryColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetEntryColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLegendBoxActor_SetEntryColor_s1(self, args);
    case 4:
      return PyvtkLegendBoxActor_SetEntryColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEntryColor");
  return nullptr;
}


static PyObject *
PyvtkLegendBoxActor_GetEntrySymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntrySymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetEntrySymbol(temp0) :
      op->vtkLegendBoxActor::GetEntrySymbol(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetEntryIcon(temp0) :
      op->vtkLegendBoxActor::GetEntryIcon(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEntryString(temp0) :
      op->vtkLegendBoxActor::GetEntryString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEntryColor(temp0) :
      op->vtkLegendBoxActor::GetEntryColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetEntryTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEntryTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetEntryTextProperty(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetEntryTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetEntryTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEntryTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetEntryTextProperty() :
      op->vtkLegendBoxActor::GetEntryTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkLegendBoxActor::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOn();
    }
    else
    {
      op->vtkLegendBoxActor::BorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BorderOff();
    }
    else
    {
      op->vtkLegendBoxActor::BorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetLockBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLockBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLockBorder(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetLockBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetLockBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLockBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLockBorder() :
      op->vtkLegendBoxActor::GetLockBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_LockBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockBorderOn();
    }
    else
    {
      op->vtkLegendBoxActor::LockBorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_LockBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockBorderOff();
    }
    else
    {
      op->vtkLegendBoxActor::LockBorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBox(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBox() :
      op->vtkLegendBoxActor::GetBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoxOn();
    }
    else
    {
      op->vtkLegendBoxActor::BoxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_BoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BoxOff();
    }
    else
    {
      op->vtkLegendBoxActor::BoxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBoxProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetBoxProperty() :
      op->vtkLegendBoxActor::GetBoxProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPaddingMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMinValue() :
      op->vtkLegendBoxActor::GetPaddingMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPaddingMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaddingMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPaddingMaxValue() :
      op->vtkLegendBoxActor::GetPaddingMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPadding() :
      op->vtkLegendBoxActor::GetPadding());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

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
      op->vtkLegendBoxActor::SetScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVisibility() :
      op->vtkLegendBoxActor::GetScalarVisibility());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ScalarVisibilityOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOn();
    }
    else
    {
      op->vtkLegendBoxActor::ScalarVisibilityOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ScalarVisibilityOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalarVisibilityOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalarVisibilityOff();
    }
    else
    {
      op->vtkLegendBoxActor::ScalarVisibilityOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseBackground(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetUseBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseBackground() :
      op->vtkLegendBoxActor::GetUseBackground());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_UseBackgroundOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackgroundOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBackgroundOn();
    }
    else
    {
      op->vtkLegendBoxActor::UseBackgroundOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_UseBackgroundOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBackgroundOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBackgroundOff();
    }
    else
    {
      op->vtkLegendBoxActor::UseBackgroundOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

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
      op->SetBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLegendBoxActor::SetBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLegendBoxActor_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLegendBoxActor_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkLegendBoxActor_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkLegendBoxActor::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_SetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundOpacity(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::SetBackgroundOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMinValue() :
      op->vtkLegendBoxActor::GetBackgroundOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacityMaxValue() :
      op->vtkLegendBoxActor::GetBackgroundOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_GetBackgroundOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundOpacity() :
      op->vtkLegendBoxActor::GetBackgroundOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkLegendBoxActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLegendBoxActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkLegendBoxActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkLegendBoxActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLegendBoxActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLegendBoxActor *op = static_cast<vtkLegendBoxActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLegendBoxActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLegendBoxActor_Methods[] = {
  {"IsTypeOf", PyvtkLegendBoxActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLegendBoxActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLegendBoxActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLegendBoxActor\nC++: static vtkLegendBoxActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLegendBoxActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLegendBoxActor\nC++: vtkLegendBoxActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLegendBoxActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLegendBoxActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfEntries", PyvtkLegendBoxActor_SetNumberOfEntries, METH_VARARGS,
   "SetNumberOfEntries(self, num:int) -> None\nC++: void SetNumberOfEntries(int num)\n\nSpecify the number of entries in the legend box.\n"},
  {"GetNumberOfEntries", PyvtkLegendBoxActor_GetNumberOfEntries, METH_VARARGS,
   "GetNumberOfEntries(self) -> int\nC++: int GetNumberOfEntries()\n\n"},
  {"SetEntry", PyvtkLegendBoxActor_SetEntry, METH_VARARGS,
   "SetEntry(self, i:int, symbol:vtkPolyData, string:str,\n    color:[float, float, float]) -> None\nC++: void SetEntry(int i, vtkPolyData *symbol, const char *string,\n     double color[3])\nSetEntry(self, i:int, symbol:vtkImageData, string:str,\n    color:[float, float, float]) -> None\nC++: void SetEntry(int i, vtkImageData *symbol,\n    const char *string, double color[3])\nSetEntry(self, i:int, symbol:vtkPolyData, icon:vtkImageData,\n    string:str, color:[float, float, float]) -> None\nC++: void SetEntry(int i, vtkPolyData *symbol, vtkImageData *icon,\n     const char *string, double color[3])\n\nAdd an entry to the legend box. You must supply a vtkPolyData to\nbe used as a symbol (it can be NULL) and a text string (which\nalso can be NULL). The vtkPolyData is assumed to be defined in\nthe x-y plane, and the text is assumed to be a single line in\nheight. Note that when this method is invoked previous entries\nare deleted. Also supply a text string and optionally a color.\n(If a color is not specified, then the entry color is the same as\nthis actor's color.) (Note: use the set methods when you use\nSetNumberOfEntries().)\n"},
  {"SetEntrySymbol", PyvtkLegendBoxActor_SetEntrySymbol, METH_VARARGS,
   "SetEntrySymbol(self, i:int, symbol:vtkPolyData) -> None\nC++: void SetEntrySymbol(int i, vtkPolyData *symbol)\n\n"},
  {"SetEntryIcon", PyvtkLegendBoxActor_SetEntryIcon, METH_VARARGS,
   "SetEntryIcon(self, i:int, icon:vtkImageData) -> None\nC++: void SetEntryIcon(int i, vtkImageData *icon)\n\n"},
  {"SetEntryString", PyvtkLegendBoxActor_SetEntryString, METH_VARARGS,
   "SetEntryString(self, i:int, string:str) -> None\nC++: void SetEntryString(int i, const char *string)\n\n"},
  {"SetEntryColor", PyvtkLegendBoxActor_SetEntryColor, METH_VARARGS,
   "SetEntryColor(self, i:int, color:[float, float, float]) -> None\nC++: void SetEntryColor(int i, double color[3])\nSetEntryColor(self, i:int, r:float, g:float, b:float) -> None\nC++: void SetEntryColor(int i, double r, double g, double b)\n\n"},
  {"GetEntrySymbol", PyvtkLegendBoxActor_GetEntrySymbol, METH_VARARGS,
   "GetEntrySymbol(self, i:int) -> vtkPolyData\nC++: vtkPolyData *GetEntrySymbol(int i)\n\n"},
  {"GetEntryIcon", PyvtkLegendBoxActor_GetEntryIcon, METH_VARARGS,
   "GetEntryIcon(self, i:int) -> vtkImageData\nC++: vtkImageData *GetEntryIcon(int i)\n\n"},
  {"GetEntryString", PyvtkLegendBoxActor_GetEntryString, METH_VARARGS,
   "GetEntryString(self, i:int) -> str\nC++: const char *GetEntryString(int i)\n\n"},
  {"GetEntryColor", PyvtkLegendBoxActor_GetEntryColor, METH_VARARGS,
   "GetEntryColor(self, i:int) -> (float, float, float)\nC++: double *GetEntryColor(int i)\n\n"},
  {"SetEntryTextProperty", PyvtkLegendBoxActor_SetEntryTextProperty, METH_VARARGS,
   "SetEntryTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetEntryTextProperty(vtkTextProperty *p)\n\nSet/Get the text property.\n"},
  {"GetEntryTextProperty", PyvtkLegendBoxActor_GetEntryTextProperty, METH_VARARGS,
   "GetEntryTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetEntryTextProperty()\n\n"},
  {"SetBorder", PyvtkLegendBoxActor_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:int) -> None\nC++: virtual void SetBorder(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether a border will be drawn\naround the legend box.\n"},
  {"GetBorder", PyvtkLegendBoxActor_GetBorder, METH_VARARGS,
   "GetBorder(self) -> int\nC++: virtual vtkTypeBool GetBorder()\n\n"},
  {"BorderOn", PyvtkLegendBoxActor_BorderOn, METH_VARARGS,
   "BorderOn(self) -> None\nC++: virtual void BorderOn()\n\n"},
  {"BorderOff", PyvtkLegendBoxActor_BorderOff, METH_VARARGS,
   "BorderOff(self) -> None\nC++: virtual void BorderOff()\n\n"},
  {"SetLockBorder", PyvtkLegendBoxActor_SetLockBorder, METH_VARARGS,
   "SetLockBorder(self, _arg:int) -> None\nC++: virtual void SetLockBorder(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether the border and legend\nplacement is locked into the rectangle defined by\n(Position,Position2). If off, then the legend box will adjust its\nsize so that the border fits nicely around the text and symbols.\n(The ivar is off by default.) Note: the legend box is guaranteed\nto lie within the original border definition.\n"},
  {"GetLockBorder", PyvtkLegendBoxActor_GetLockBorder, METH_VARARGS,
   "GetLockBorder(self) -> int\nC++: virtual vtkTypeBool GetLockBorder()\n\n"},
  {"LockBorderOn", PyvtkLegendBoxActor_LockBorderOn, METH_VARARGS,
   "LockBorderOn(self) -> None\nC++: virtual void LockBorderOn()\n\n"},
  {"LockBorderOff", PyvtkLegendBoxActor_LockBorderOff, METH_VARARGS,
   "LockBorderOff(self) -> None\nC++: virtual void LockBorderOff()\n\n"},
  {"SetBox", PyvtkLegendBoxActor_SetBox, METH_VARARGS,
   "SetBox(self, _arg:int) -> None\nC++: virtual void SetBox(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {"GetBox", PyvtkLegendBoxActor_GetBox, METH_VARARGS,
   "GetBox(self) -> int\nC++: virtual vtkTypeBool GetBox()\n\n"},
  {"BoxOn", PyvtkLegendBoxActor_BoxOn, METH_VARARGS,
   "BoxOn(self) -> None\nC++: virtual void BoxOn()\n\n"},
  {"BoxOff", PyvtkLegendBoxActor_BoxOff, METH_VARARGS,
   "BoxOff(self) -> None\nC++: virtual void BoxOff()\n\n"},
  {"GetBoxProperty", PyvtkLegendBoxActor_GetBoxProperty, METH_VARARGS,
   "GetBoxProperty(self) -> vtkProperty2D\nC++: vtkProperty2D *GetBoxProperty()\n\nGet the box vtkProperty2D.\n"},
  {"SetPadding", PyvtkLegendBoxActor_SetPadding, METH_VARARGS,
   "SetPadding(self, _arg:int) -> None\nC++: virtual void SetPadding(int _arg)\n\nSet/Get the padding between the legend entries and the border.\nThe value is specified in pixels.\n"},
  {"GetPaddingMinValue", PyvtkLegendBoxActor_GetPaddingMinValue, METH_VARARGS,
   "GetPaddingMinValue(self) -> int\nC++: virtual int GetPaddingMinValue()\n\n"},
  {"GetPaddingMaxValue", PyvtkLegendBoxActor_GetPaddingMaxValue, METH_VARARGS,
   "GetPaddingMaxValue(self) -> int\nC++: virtual int GetPaddingMaxValue()\n\n"},
  {"GetPadding", PyvtkLegendBoxActor_GetPadding, METH_VARARGS,
   "GetPadding(self) -> int\nC++: virtual int GetPadding()\n\n"},
  {"SetScalarVisibility", PyvtkLegendBoxActor_SetScalarVisibility, METH_VARARGS,
   "SetScalarVisibility(self, _arg:int) -> None\nC++: virtual void SetScalarVisibility(vtkTypeBool _arg)\n\nTurn on/off flag to control whether the symbol's scalar data is\nused to color the symbol. If off, the color of the\nvtkLegendBoxActor is used.\n"},
  {"GetScalarVisibility", PyvtkLegendBoxActor_GetScalarVisibility, METH_VARARGS,
   "GetScalarVisibility(self) -> int\nC++: virtual vtkTypeBool GetScalarVisibility()\n\n"},
  {"ScalarVisibilityOn", PyvtkLegendBoxActor_ScalarVisibilityOn, METH_VARARGS,
   "ScalarVisibilityOn(self) -> None\nC++: virtual void ScalarVisibilityOn()\n\n"},
  {"ScalarVisibilityOff", PyvtkLegendBoxActor_ScalarVisibilityOff, METH_VARARGS,
   "ScalarVisibilityOff(self) -> None\nC++: virtual void ScalarVisibilityOff()\n\n"},
  {"SetUseBackground", PyvtkLegendBoxActor_SetUseBackground, METH_VARARGS,
   "SetUseBackground(self, _arg:int) -> None\nC++: virtual void SetUseBackground(vtkTypeBool _arg)\n\nTurn on/off background.\n"},
  {"GetUseBackground", PyvtkLegendBoxActor_GetUseBackground, METH_VARARGS,
   "GetUseBackground(self) -> int\nC++: virtual vtkTypeBool GetUseBackground()\n\n"},
  {"UseBackgroundOn", PyvtkLegendBoxActor_UseBackgroundOn, METH_VARARGS,
   "UseBackgroundOn(self) -> None\nC++: virtual void UseBackgroundOn()\n\n"},
  {"UseBackgroundOff", PyvtkLegendBoxActor_UseBackgroundOff, METH_VARARGS,
   "UseBackgroundOff(self) -> None\nC++: virtual void UseBackgroundOff()\n\n"},
  {"SetBackgroundColor", PyvtkLegendBoxActor_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackgroundColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackgroundColor(const double _arg[3])\n\nSet/Get background color. Default is: (0.3, 0.3, 0.3).\n"},
  {"GetBackgroundColor", PyvtkLegendBoxActor_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {"SetBackgroundOpacity", PyvtkLegendBoxActor_SetBackgroundOpacity, METH_VARARGS,
   "SetBackgroundOpacity(self, _arg:float) -> None\nC++: virtual void SetBackgroundOpacity(double _arg)\n\nSet/Get background opacity. Default is: 1.0\n"},
  {"GetBackgroundOpacityMinValue", PyvtkLegendBoxActor_GetBackgroundOpacityMinValue, METH_VARARGS,
   "GetBackgroundOpacityMinValue(self) -> float\nC++: virtual double GetBackgroundOpacityMinValue()\n\n"},
  {"GetBackgroundOpacityMaxValue", PyvtkLegendBoxActor_GetBackgroundOpacityMaxValue, METH_VARARGS,
   "GetBackgroundOpacityMaxValue(self) -> float\nC++: virtual double GetBackgroundOpacityMaxValue()\n\n"},
  {"GetBackgroundOpacity", PyvtkLegendBoxActor_GetBackgroundOpacity, METH_VARARGS,
   "GetBackgroundOpacity(self) -> float\nC++: virtual double GetBackgroundOpacity()\n\n"},
  {"ShallowCopy", PyvtkLegendBoxActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of this scaled text actor. Overloads the virtual\nvtkProp method.\n"},
  {"ReleaseGraphicsResources", PyvtkLegendBoxActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Release any\ngraphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {"RenderOpaqueGeometry", PyvtkLegendBoxActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the legend\nbox to the screen.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkLegendBoxActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"RenderOverlay", PyvtkLegendBoxActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, viewport:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkLegendBoxActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLegendBoxActor_Doc =
  "vtkLegendBoxActor - draw symbols with text\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkLegendBoxActor is used to associate a symbol with a text string.\n"
  "The user specifies a vtkPolyData to use as the symbol, and a string\n"
  "associated with the symbol. The actor can then be placed in the scene\n"
  "in the same way that any other vtkActor2D can be used.\n\n"
  "To use this class, you must define the position of the legend box by\n"
  "using the superclasses' vtkActor2D::Position coordinate and Position2\n"
  "coordinate. Then define the set of symbols and text strings that make\n"
  "up the menu box. The font attributes of the entries can be set\n"
  "through the vtkTextProperty associated to this actor. The class will\n"
  "scale the symbols and text to fit in the legend box defined by\n"
  "(Position,Position2). Optional features like turning on a border line\n"
  "and setting the spacing between the border and the symbols/text can\n"
  "also be set.\n\n"
  "@sa\n"
  "vtkXYPlotActor vtkActor2D vtkGlyphSource2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLegendBoxActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkLegendBoxActor", // tp_name
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
  PyvtkLegendBoxActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLegendBoxActor_StaticNew()
{
  return vtkLegendBoxActor::New();
}

PyObject *PyvtkLegendBoxActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLegendBoxActor_Type, PyvtkLegendBoxActor_Methods,
    "vtkLegendBoxActor",
 &PyvtkLegendBoxActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLegendBoxActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLegendBoxActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLegendBoxActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

