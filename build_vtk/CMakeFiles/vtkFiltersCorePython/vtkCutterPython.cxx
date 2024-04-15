// python wrapper for vtkCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCutter(PyObject *dict); }
extern "C" { PyObject *PyvtkCutter_ClassNew(); }


static PyObject *
PyvtkCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCutter *tempr = vtkCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutter::NewInstance());

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
PyvtkCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
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
      op->vtkCutter::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkCutter::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkCutter::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCutter_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

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
      op->GetValues(temp0);
    }
    else
    {
      op->vtkCutter::GetValues(temp0);
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
PyvtkCutter_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkCutter_GetValues_s1(self, args);
    case 1:
      return PyvtkCutter_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkCutter_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkCutter::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkCutter::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkCutter::GenerateValues(temp0, temp1);
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
PyvtkCutter_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCutter::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutter_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCutter_GenerateValues_s1(self, args);
    case 3:
      return PyvtkCutter_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetCutFunction(temp0);
    }
    else
    {
      op->vtkCutter::SetCutFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetCutFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetCutFunction() :
      op->vtkCutter::GetCutFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateCutScalars(temp0);
    }
    else
    {
      op->vtkCutter::SetGenerateCutScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateCutScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateCutScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateCutScalars() :
      op->vtkCutter::GetGenerateCutScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCutScalarsOn();
    }
    else
    {
      op->vtkCutter::GenerateCutScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateCutScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateCutScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateCutScalarsOff();
    }
    else
    {
      op->vtkCutter::GenerateCutScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTriangles(temp0);
    }
    else
    {
      op->vtkCutter::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkCutter::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOn();
    }
    else
    {
      op->vtkCutter::GenerateTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOff();
    }
    else
    {
      op->vtkCutter::GenerateTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkCutter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkCutter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSortBy(temp0);
    }
    else
    {
      op->vtkCutter::SetSortBy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMinValue() :
      op->vtkCutter::GetSortByMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortByMaxValue() :
      op->vtkCutter::GetSortByMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortBy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortBy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSortBy() :
      op->vtkCutter::GetSortBy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortByToSortByValue();
    }
    else
    {
      op->vtkCutter::SetSortByToSortByValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_SetSortByToSortByCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSortByToSortByCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSortByToSortByCell();
    }
    else
    {
      op->vtkCutter::SetSortByToSortByCell();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetSortByAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSortByAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetSortByAsString() :
      op->vtkCutter::GetSortByAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkCutter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetCellTypeDimensions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetCellTypeDimensions");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(2*size0);
  unsigned char *temp0 = store0.Data();
  unsigned char *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkCutter::GetCellTypeDimensions(temp0);

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
PyvtkCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMinValue() :
      op->vtkCutter::GetOutputPointsPrecisionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecisionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecisionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecisionMaxValue() :
      op->vtkCutter::GetOutputPointsPrecisionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutter *op = static_cast<vtkCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCutter_Methods[] = {
  {"IsTypeOf", PyvtkCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCutter\nC++: static vtkCutter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCutter\nC++: vtkCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetValue", PyvtkCutter_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkCutter_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkCutter_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkCutter_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkCutter_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkCutter_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"GetMTime", PyvtkCutter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to vtkContourValues and\nrefer to vtkImplicitFunction.\n"},
  {"SetCutFunction", PyvtkCutter_SetCutFunction, METH_VARARGS,
   "SetCutFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetCutFunction(vtkImplicitFunction *)\n\nSpecify the implicit function to perform the cutting.\n"},
  {"GetCutFunction", PyvtkCutter_GetCutFunction, METH_VARARGS,
   "GetCutFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetCutFunction()\n\n"},
  {"SetGenerateCutScalars", PyvtkCutter_SetGenerateCutScalars, METH_VARARGS,
   "SetGenerateCutScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateCutScalars(vtkTypeBool _arg)\n\nIf this flag is enabled, then the output scalar values will be\ninterpolated from the implicit function values, and not the input\nscalar data.\n"},
  {"GetGenerateCutScalars", PyvtkCutter_GetGenerateCutScalars, METH_VARARGS,
   "GetGenerateCutScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateCutScalars()\n\n"},
  {"GenerateCutScalarsOn", PyvtkCutter_GenerateCutScalarsOn, METH_VARARGS,
   "GenerateCutScalarsOn(self) -> None\nC++: virtual void GenerateCutScalarsOn()\n\n"},
  {"GenerateCutScalarsOff", PyvtkCutter_GenerateCutScalarsOff, METH_VARARGS,
   "GenerateCutScalarsOff(self) -> None\nC++: virtual void GenerateCutScalarsOff()\n\n"},
  {"SetGenerateTriangles", PyvtkCutter_SetGenerateTriangles, METH_VARARGS,
   "SetGenerateTriangles(self, _arg:int) -> None\nC++: virtual void SetGenerateTriangles(vtkTypeBool _arg)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons WARNING:\nif the cutting function is not a plane, the output will be 3D\npolygons, which might be nice to look at but hard to compute with\ndownstream.\n"},
  {"GetGenerateTriangles", PyvtkCutter_GetGenerateTriangles, METH_VARARGS,
   "GetGenerateTriangles(self) -> int\nC++: virtual vtkTypeBool GetGenerateTriangles()\n\n"},
  {"GenerateTrianglesOn", PyvtkCutter_GenerateTrianglesOn, METH_VARARGS,
   "GenerateTrianglesOn(self) -> None\nC++: virtual void GenerateTrianglesOn()\n\n"},
  {"GenerateTrianglesOff", PyvtkCutter_GenerateTrianglesOff, METH_VARARGS,
   "GenerateTrianglesOff(self) -> None\nC++: virtual void GenerateTrianglesOff()\n\n"},
  {"SetLocator", PyvtkCutter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSpecify a spatial locator for merging points. By default, an\ninstance of vtkMergePoints is used.\n"},
  {"GetLocator", PyvtkCutter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"SetSortBy", PyvtkCutter_SetSortBy, METH_VARARGS,
   "SetSortBy(self, _arg:int) -> None\nC++: virtual void SetSortBy(int _arg)\n\nSet the sorting order for the generated polydata. There are two\npossibilities: Sort by value = 0 - This is the most efficient\nsort. For each cell, all contour values are processed. This is\nthe default. Sort by cell = 1 - For each contour value, all cells\nare processed. This order should be used if the extracted\npolygons must be rendered in a back-to-front or front-to-back\norder. This is very problem dependent. For most applications, the\ndefault order is fine (and faster).\n\n* Sort by cell is going to have a problem if the input has 2D and\n3D cells.\n* Cell data will be scrambled because with\n* vtkPolyData output, verts and lines have lower cell ids than\n  triangles.\n"},
  {"GetSortByMinValue", PyvtkCutter_GetSortByMinValue, METH_VARARGS,
   "GetSortByMinValue(self) -> int\nC++: virtual int GetSortByMinValue()\n\n"},
  {"GetSortByMaxValue", PyvtkCutter_GetSortByMaxValue, METH_VARARGS,
   "GetSortByMaxValue(self) -> int\nC++: virtual int GetSortByMaxValue()\n\n"},
  {"GetSortBy", PyvtkCutter_GetSortBy, METH_VARARGS,
   "GetSortBy(self) -> int\nC++: virtual int GetSortBy()\n\n"},
  {"SetSortByToSortByValue", PyvtkCutter_SetSortByToSortByValue, METH_VARARGS,
   "SetSortByToSortByValue(self) -> None\nC++: void SetSortByToSortByValue()\n\n"},
  {"SetSortByToSortByCell", PyvtkCutter_SetSortByToSortByCell, METH_VARARGS,
   "SetSortByToSortByCell(self) -> None\nC++: void SetSortByToSortByCell()\n\n"},
  {"GetSortByAsString", PyvtkCutter_GetSortByAsString, METH_VARARGS,
   "GetSortByAsString(self) -> str\nC++: const char *GetSortByAsString()\n\n"},
  {"CreateDefaultLocator", PyvtkCutter_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. The locator is used to merge coincident points.\n"},
  {"GetCellTypeDimensions", PyvtkCutter_GetCellTypeDimensions, METH_VARARGS,
   "GetCellTypeDimensions(cellTypeDimensions:[int, ...]) -> None\nC++: static void GetCellTypeDimensions(\n    unsigned char *cellTypeDimensions)\n\nNormally I would put this in a different class, but since This is\na temporary fix until we convert this class and contour filter to\ngenerate unstructured grid output instead of poly data, I am\nleaving it here.\n"},
  {"SetOutputPointsPrecision", PyvtkCutter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings.\n"},
  {"GetOutputPointsPrecisionMinValue", PyvtkCutter_GetOutputPointsPrecisionMinValue, METH_VARARGS,
   "GetOutputPointsPrecisionMinValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMinValue()\n\n"},
  {"GetOutputPointsPrecisionMaxValue", PyvtkCutter_GetOutputPointsPrecisionMaxValue, METH_VARARGS,
   "GetOutputPointsPrecisionMaxValue(self) -> int\nC++: virtual int GetOutputPointsPrecisionMaxValue()\n\n"},
  {"GetOutputPointsPrecision", PyvtkCutter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCutter_Doc =
  "vtkCutter - Cut vtkDataSet with user-specified implicit function\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCutter is a filter to cut through data using any subclass of\n"
  "vtkImplicitFunction. That is, a polygonal surface is created\n"
  "corresponding to the implicit function F(x,y,z) = value(s), where you\n"
  "can specify one or more values used to cut with.\n\n"
  "In VTK, cutting means reducing a cell of dimension N to a cut surface\n"
  "of dimension N-1. For example, a tetrahedron when cut by a plane\n"
  "(i.e., vtkPlane implicit function) will generate triangles. (In\n"
  "comparison, clipping takes a N dimensional cell and creates N\n"
  "dimension primitives.)\n\n"
  "vtkCutter is generally used to \"slice-through\" a dataset, generating\n"
  "a surface that can be visualized. It is also possible to use\n"
  "vtkCutter to do a form of volume rendering. vtkCutter does this by\n"
  "generating multiple cut surfaces (usually planes) which are ordered\n"
  "(and rendered) from back-to-front. The surfaces are set translucent\n"
  "to give a volumetric rendering effect.\n\n"
  "Note that data can be cut using either 1) the scalar values\n"
  "associated with the dataset or 2) an implicit function associated\n"
  "with this class. By default, if an implicit function is set it is\n"
  "used to clip the data set, otherwise the dataset scalars are used to\n"
  "perform the clipping.\n\n"
  "Note that this class delegates to vtkPlaneCutter whenever possible\n"
  "since it's specialized for planes and it's faster because it's\n"
  "multithreaded, and in some cases also algorithmically faster.\n\n"
  "@sa\n"
  "vtkImplicitFunction vtkClipPolyData vtkPlaneCutter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkCutter", // tp_name
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
  PyvtkCutter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCutter_StaticNew()
{
  return vtkCutter::New();
}

PyObject *PyvtkCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCutter_Type, PyvtkCutter_Methods,
    "vtkCutter",
 &PyvtkCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCutter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCutter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_SORT_BY_VALUE", 0 },
        { "VTK_SORT_BY_CELL", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

