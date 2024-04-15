// python wrapper for vtkMedicalImageProperties
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMedicalImageProperties.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMedicalImageProperties(PyObject *dict); }
extern "C" { PyObject *PyvtkMedicalImageProperties_ClassNew(); }


static PyObject *
PyvtkMedicalImageProperties_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMedicalImageProperties::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMedicalImageProperties::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMedicalImageProperties *tempr = vtkMedicalImageProperties::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMedicalImageProperties *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMedicalImageProperties::NewInstance());

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
PyvtkMedicalImageProperties_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMedicalImageProperties::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMedicalImageProperties::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkMedicalImageProperties::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientName(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetPatientName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientName() :
      op->vtkMedicalImageProperties::GetPatientName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientID(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetPatientID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientID() :
      op->vtkMedicalImageProperties::GetPatientID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientAge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientAge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientAge(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetPatientAge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientAge() :
      op->vtkMedicalImageProperties::GetPatientAge());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAgeAsFields(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetAgeAsFields");

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = vtkMedicalImageProperties::GetAgeAsFields(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientAgeYear() :
      op->vtkMedicalImageProperties::GetPatientAgeYear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientAgeMonth() :
      op->vtkMedicalImageProperties::GetPatientAgeMonth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeWeek(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeWeek");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientAgeWeek() :
      op->vtkMedicalImageProperties::GetPatientAgeWeek());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientAgeDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientAgeDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientAgeDay() :
      op->vtkMedicalImageProperties::GetPatientAgeDay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientSex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientSex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientSex(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetPatientSex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientSex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientSex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientSex() :
      op->vtkMedicalImageProperties::GetPatientSex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetPatientBirthDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPatientBirthDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPatientBirthDate(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetPatientBirthDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPatientBirthDate() :
      op->vtkMedicalImageProperties::GetPatientBirthDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientBirthDateYear() :
      op->vtkMedicalImageProperties::GetPatientBirthDateYear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientBirthDateMonth() :
      op->vtkMedicalImageProperties::GetPatientBirthDateMonth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetPatientBirthDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPatientBirthDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPatientBirthDateDay() :
      op->vtkMedicalImageProperties::GetPatientBirthDateDay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudyDate(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetStudyDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyDate() :
      op->vtkMedicalImageProperties::GetStudyDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetAcquisitionDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAcquisitionDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAcquisitionDate(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetAcquisitionDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAcquisitionDate() :
      op->vtkMedicalImageProperties::GetAcquisitionDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAcquisitionDateYear() :
      op->vtkMedicalImageProperties::GetAcquisitionDateYear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAcquisitionDateMonth() :
      op->vtkMedicalImageProperties::GetAcquisitionDateMonth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAcquisitionDateDay() :
      op->vtkMedicalImageProperties::GetAcquisitionDateDay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudyTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetStudyTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyTime() :
      op->vtkMedicalImageProperties::GetStudyTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetAcquisitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAcquisitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAcquisitionTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetAcquisitionTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetAcquisitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAcquisitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAcquisitionTime() :
      op->vtkMedicalImageProperties::GetAcquisitionTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetImageDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageDate(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetImageDate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetImageDate() :
      op->vtkMedicalImageProperties::GetImageDate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateYear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateYear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageDateYear() :
      op->vtkMedicalImageProperties::GetImageDateYear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateMonth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateMonth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageDateMonth() :
      op->vtkMedicalImageProperties::GetImageDateMonth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageDateDay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageDateDay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageDateDay() :
      op->vtkMedicalImageProperties::GetImageDateDay());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetDateAsFields(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateAsFields");

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkMedicalImageProperties::GetDateAsFields(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetTimeAsFields(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTimeAsFields");

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = vtkMedicalImageProperties::GetTimeAsFields(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetDateAsLocale(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDateAsLocale");

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = vtkMedicalImageProperties::GetDateAsLocale(temp0, temp1);

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
PyvtkMedicalImageProperties_SetImageTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetImageTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetImageTime() :
      op->vtkMedicalImageProperties::GetImageTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageNumber(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetImageNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetImageNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetImageNumber() :
      op->vtkMedicalImageProperties::GetImageNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSeriesNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeriesNumber(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetSeriesNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSeriesNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeriesNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSeriesNumber() :
      op->vtkMedicalImageProperties::GetSeriesNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSeriesDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSeriesDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSeriesDescription(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetSeriesDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSeriesDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSeriesDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSeriesDescription() :
      op->vtkMedicalImageProperties::GetSeriesDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudyID(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetStudyID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyID() :
      op->vtkMedicalImageProperties::GetStudyID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStudyDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStudyDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStudyDescription(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetStudyDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStudyDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStudyDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStudyDescription() :
      op->vtkMedicalImageProperties::GetStudyDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModality(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetModality(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetModality(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModality");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetModality() :
      op->vtkMedicalImageProperties::GetModality());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetManufacturer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManufacturer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManufacturer(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetManufacturer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetManufacturer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManufacturer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetManufacturer() :
      op->vtkMedicalImageProperties::GetManufacturer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetManufacturerModelName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetManufacturerModelName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetManufacturerModelName(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetManufacturerModelName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetManufacturerModelName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetManufacturerModelName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetManufacturerModelName() :
      op->vtkMedicalImageProperties::GetManufacturerModelName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetStationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStationName(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetStationName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStationName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStationName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetStationName() :
      op->vtkMedicalImageProperties::GetStationName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetInstitutionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInstitutionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInstitutionName(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetInstitutionName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetInstitutionName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInstitutionName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInstitutionName() :
      op->vtkMedicalImageProperties::GetInstitutionName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetConvolutionKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvolutionKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvolutionKernel(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetConvolutionKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetConvolutionKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvolutionKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetConvolutionKernel() :
      op->vtkMedicalImageProperties::GetConvolutionKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetSliceThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceThickness(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetSliceThickness(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceThickness(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceThickness");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSliceThickness() :
      op->vtkMedicalImageProperties::GetSliceThickness());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceThicknessAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceThicknessAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSliceThicknessAsDouble() :
      op->vtkMedicalImageProperties::GetSliceThicknessAsDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetKVP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKVP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKVP(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetKVP(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetKVP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKVP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKVP() :
      op->vtkMedicalImageProperties::GetKVP());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetGantryTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGantryTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGantryTilt(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetGantryTilt(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetGantryTilt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryTilt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGantryTilt() :
      op->vtkMedicalImageProperties::GetGantryTilt());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetGantryTiltAsDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGantryTiltAsDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGantryTiltAsDouble() :
      op->vtkMedicalImageProperties::GetGantryTiltAsDouble());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetEchoTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEchoTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEchoTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetEchoTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetEchoTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEchoTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEchoTime() :
      op->vtkMedicalImageProperties::GetEchoTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetEchoTrainLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEchoTrainLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEchoTrainLength(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetEchoTrainLength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetEchoTrainLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEchoTrainLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetEchoTrainLength() :
      op->vtkMedicalImageProperties::GetEchoTrainLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetRepetitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepetitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepetitionTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetRepetitionTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetRepetitionTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepetitionTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetRepetitionTime() :
      op->vtkMedicalImageProperties::GetRepetitionTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetExposureTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposureTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExposureTime(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetExposureTime(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetExposureTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposureTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExposureTime() :
      op->vtkMedicalImageProperties::GetExposureTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetXRayTubeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRayTubeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXRayTubeCurrent(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetXRayTubeCurrent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetXRayTubeCurrent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRayTubeCurrent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXRayTubeCurrent() :
      op->vtkMedicalImageProperties::GetXRayTubeCurrent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExposure(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetExposure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetExposure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExposure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetExposure() :
      op->vtkMedicalImageProperties::GetExposure());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->SetDirectionCosine(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkMedicalImageProperties::SetDirectionCosine(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionCosine(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::SetDirectionCosine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_SetDirectionCosine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkMedicalImageProperties_SetDirectionCosine_s1(self, args);
    case 1:
      return PyvtkMedicalImageProperties_SetDirectionCosine_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirectionCosine");
  return nullptr;
}


static PyObject *
PyvtkMedicalImageProperties_GetDirectionCosine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectionCosine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDirectionCosine() :
      op->vtkMedicalImageProperties::GetDirectionCosine());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_AddUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddUserDefinedValue(temp0, temp1);
    }
    else
    {
      op->vtkMedicalImageProperties::AddUserDefinedValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUserDefinedValue(temp0) :
      op->vtkMedicalImageProperties::GetUserDefinedValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNumberOfUserDefinedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUserDefinedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfUserDefinedValues() :
      op->vtkMedicalImageProperties::GetNumberOfUserDefinedValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedNameByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedNameByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUserDefinedNameByIndex(temp0) :
      op->vtkMedicalImageProperties::GetUserDefinedNameByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetUserDefinedValueByIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserDefinedValueByIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetUserDefinedValueByIndex(temp0) :
      op->vtkMedicalImageProperties::GetUserDefinedValueByIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveAllUserDefinedValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUserDefinedValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllUserDefinedValues();
    }
    else
    {
      op->vtkMedicalImageProperties::RemoveAllUserDefinedValues();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_AddWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->AddWindowLevelPreset(temp0, temp1) :
      op->vtkMedicalImageProperties::AddWindowLevelPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->RemoveWindowLevelPreset(temp0, temp1);
    }
    else
    {
      op->vtkMedicalImageProperties::RemoveWindowLevelPreset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_RemoveAllWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllWindowLevelPresets();
    }
    else
    {
      op->vtkMedicalImageProperties::RemoveAllWindowLevelPresets();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNumberOfWindowLevelPresets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfWindowLevelPresets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfWindowLevelPresets() :
      op->vtkMedicalImageProperties::GetNumberOfWindowLevelPresets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_HasWindowLevelPreset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->HasWindowLevelPreset(temp0, temp1) :
      op->vtkMedicalImageProperties::HasWindowLevelPreset(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetWindowLevelPresetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindowLevelPresetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetWindowLevelPresetIndex(temp0, temp1) :
      op->vtkMedicalImageProperties::GetWindowLevelPresetIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPreset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->GetNthWindowLevelPreset(temp0, temp1, temp2) :
      op->vtkMedicalImageProperties::GetNthWindowLevelPreset(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPreset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWindowLevelPreset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNthWindowLevelPreset(temp0) :
      op->vtkMedicalImageProperties::GetNthWindowLevelPreset(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPreset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMedicalImageProperties_GetNthWindowLevelPreset_s1(self, args);
    case 1:
      return PyvtkMedicalImageProperties_GetNthWindowLevelPreset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNthWindowLevelPreset");
  return nullptr;
}


static PyObject *
PyvtkMedicalImageProperties_SetNthWindowLevelPresetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNthWindowLevelPresetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNthWindowLevelPresetComment(temp0, temp1);
    }
    else
    {
      op->vtkMedicalImageProperties::SetNthWindowLevelPresetComment(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetNthWindowLevelPresetComment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthWindowLevelPresetComment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthWindowLevelPresetComment(temp0) :
      op->vtkMedicalImageProperties::GetNthWindowLevelPresetComment(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetInstanceUIDFromSliceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInstanceUIDFromSliceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInstanceUIDFromSliceID(temp0, temp1) :
      op->vtkMedicalImageProperties::GetInstanceUIDFromSliceID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetInstanceUIDFromSliceID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInstanceUIDFromSliceID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetInstanceUIDFromSliceID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMedicalImageProperties::SetInstanceUIDFromSliceID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetSliceIDFromInstanceUID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceIDFromInstanceUID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceIDFromInstanceUID(temp0, temp1) :
      op->vtkMedicalImageProperties::GetSliceIDFromInstanceUID(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientationType(temp0) :
      op->vtkMedicalImageProperties::GetOrientationType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_SetOrientationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetOrientationType(temp0, temp1);
    }
    else
    {
      op->vtkMedicalImageProperties::SetOrientationType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_GetStringFromOrientationType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromOrientationType");

  unsigned int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkMedicalImageProperties::GetStringFromOrientationType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMedicalImageProperties_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMedicalImageProperties *op = static_cast<vtkMedicalImageProperties *>(vp);

  vtkMedicalImageProperties *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMedicalImageProperties"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkMedicalImageProperties::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMedicalImageProperties_Methods[] = {
  {"IsTypeOf", PyvtkMedicalImageProperties_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMedicalImageProperties_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMedicalImageProperties_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMedicalImageProperties\nC++: static vtkMedicalImageProperties *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMedicalImageProperties_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMedicalImageProperties\nC++: vtkMedicalImageProperties *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMedicalImageProperties_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMedicalImageProperties_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clear", PyvtkMedicalImageProperties_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: virtual void Clear()\n\nConvenience method to reset all fields to an empty string/value\n"},
  {"SetPatientName", PyvtkMedicalImageProperties_SetPatientName, METH_VARARGS,
   "SetPatientName(self, _arg:str) -> None\nC++: virtual void SetPatientName(const char *_arg)\n\nPatient name For ex: DICOM (0010,0010) = DOE,JOHN\n"},
  {"GetPatientName", PyvtkMedicalImageProperties_GetPatientName, METH_VARARGS,
   "GetPatientName(self) -> str\nC++: virtual char *GetPatientName()\n\n"},
  {"SetPatientID", PyvtkMedicalImageProperties_SetPatientID, METH_VARARGS,
   "SetPatientID(self, _arg:str) -> None\nC++: virtual void SetPatientID(const char *_arg)\n\nPatient ID For ex: DICOM (0010,0020) = 1933197\n"},
  {"GetPatientID", PyvtkMedicalImageProperties_GetPatientID, METH_VARARGS,
   "GetPatientID(self) -> str\nC++: virtual char *GetPatientID()\n\n"},
  {"SetPatientAge", PyvtkMedicalImageProperties_SetPatientAge, METH_VARARGS,
   "SetPatientAge(self, _arg:str) -> None\nC++: virtual void SetPatientAge(const char *_arg)\n\nPatient age Format: nnnD, nnW, nnnM or nnnY (eventually nnD, nnW,\nnnY) with D (day), M (month), W (week), Y (year) For ex: DICOM\n(0010,1010) = 031Y\n"},
  {"GetPatientAge", PyvtkMedicalImageProperties_GetPatientAge, METH_VARARGS,
   "GetPatientAge(self) -> str\nC++: virtual char *GetPatientAge()\n\n"},
  {"GetAgeAsFields", PyvtkMedicalImageProperties_GetAgeAsFields, METH_VARARGS,
   "GetAgeAsFields(age:str, year:int, month:int, week:int, day:int)\n    -> int\nC++: static int GetAgeAsFields(const char *age, int &year,\n    int &month, int &week, int &day)\n\nTake as input a string in VR=AS (DICOM PS3.5) and extract either\ndifferent fields namely: year month week day Return 0 on error, 1\non success One can test fields if they are different from -1 upon\nsuccess\n"},
  {"GetPatientAgeYear", PyvtkMedicalImageProperties_GetPatientAgeYear, METH_VARARGS,
   "GetPatientAgeYear(self) -> int\nC++: int GetPatientAgeYear()\n\n"},
  {"GetPatientAgeMonth", PyvtkMedicalImageProperties_GetPatientAgeMonth, METH_VARARGS,
   "GetPatientAgeMonth(self) -> int\nC++: int GetPatientAgeMonth()\n\n"},
  {"GetPatientAgeWeek", PyvtkMedicalImageProperties_GetPatientAgeWeek, METH_VARARGS,
   "GetPatientAgeWeek(self) -> int\nC++: int GetPatientAgeWeek()\n\n"},
  {"GetPatientAgeDay", PyvtkMedicalImageProperties_GetPatientAgeDay, METH_VARARGS,
   "GetPatientAgeDay(self) -> int\nC++: int GetPatientAgeDay()\n\n"},
  {"SetPatientSex", PyvtkMedicalImageProperties_SetPatientSex, METH_VARARGS,
   "SetPatientSex(self, _arg:str) -> None\nC++: virtual void SetPatientSex(const char *_arg)\n\nPatient sex For ex: DICOM (0010,0040) = M\n"},
  {"GetPatientSex", PyvtkMedicalImageProperties_GetPatientSex, METH_VARARGS,
   "GetPatientSex(self) -> str\nC++: virtual char *GetPatientSex()\n\n"},
  {"SetPatientBirthDate", PyvtkMedicalImageProperties_SetPatientBirthDate, METH_VARARGS,
   "SetPatientBirthDate(self, _arg:str) -> None\nC++: virtual void SetPatientBirthDate(const char *_arg)\n\nPatient birth date Format: yyyymmdd For ex: DICOM (0010,0030) =\n19680427\n"},
  {"GetPatientBirthDate", PyvtkMedicalImageProperties_GetPatientBirthDate, METH_VARARGS,
   "GetPatientBirthDate(self) -> str\nC++: virtual char *GetPatientBirthDate()\n\n"},
  {"GetPatientBirthDateYear", PyvtkMedicalImageProperties_GetPatientBirthDateYear, METH_VARARGS,
   "GetPatientBirthDateYear(self) -> int\nC++: int GetPatientBirthDateYear()\n\n"},
  {"GetPatientBirthDateMonth", PyvtkMedicalImageProperties_GetPatientBirthDateMonth, METH_VARARGS,
   "GetPatientBirthDateMonth(self) -> int\nC++: int GetPatientBirthDateMonth()\n\n"},
  {"GetPatientBirthDateDay", PyvtkMedicalImageProperties_GetPatientBirthDateDay, METH_VARARGS,
   "GetPatientBirthDateDay(self) -> int\nC++: int GetPatientBirthDateDay()\n\n"},
  {"SetStudyDate", PyvtkMedicalImageProperties_SetStudyDate, METH_VARARGS,
   "SetStudyDate(self, _arg:str) -> None\nC++: virtual void SetStudyDate(const char *_arg)\n\nStudy Date Format: yyyymmdd For ex: DICOM (0008,0020) = 20030617\n"},
  {"GetStudyDate", PyvtkMedicalImageProperties_GetStudyDate, METH_VARARGS,
   "GetStudyDate(self) -> str\nC++: virtual char *GetStudyDate()\n\n"},
  {"SetAcquisitionDate", PyvtkMedicalImageProperties_SetAcquisitionDate, METH_VARARGS,
   "SetAcquisitionDate(self, _arg:str) -> None\nC++: virtual void SetAcquisitionDate(const char *_arg)\n\nAcquisition Date Format: yyyymmdd For ex: DICOM (0008,0022) =\n20030617\n"},
  {"GetAcquisitionDate", PyvtkMedicalImageProperties_GetAcquisitionDate, METH_VARARGS,
   "GetAcquisitionDate(self) -> str\nC++: virtual char *GetAcquisitionDate()\n\n"},
  {"GetAcquisitionDateYear", PyvtkMedicalImageProperties_GetAcquisitionDateYear, METH_VARARGS,
   "GetAcquisitionDateYear(self) -> int\nC++: int GetAcquisitionDateYear()\n\n"},
  {"GetAcquisitionDateMonth", PyvtkMedicalImageProperties_GetAcquisitionDateMonth, METH_VARARGS,
   "GetAcquisitionDateMonth(self) -> int\nC++: int GetAcquisitionDateMonth()\n\n"},
  {"GetAcquisitionDateDay", PyvtkMedicalImageProperties_GetAcquisitionDateDay, METH_VARARGS,
   "GetAcquisitionDateDay(self) -> int\nC++: int GetAcquisitionDateDay()\n\n"},
  {"SetStudyTime", PyvtkMedicalImageProperties_SetStudyTime, METH_VARARGS,
   "SetStudyTime(self, _arg:str) -> None\nC++: virtual void SetStudyTime(const char *_arg)\n\nStudy Time Format: hhmmss.frac (any trailing component(s) can be\nomitted) For ex: DICOM (0008,0030) = 162552.0705 or 230012, or\n0012\n"},
  {"GetStudyTime", PyvtkMedicalImageProperties_GetStudyTime, METH_VARARGS,
   "GetStudyTime(self) -> str\nC++: virtual char *GetStudyTime()\n\n"},
  {"SetAcquisitionTime", PyvtkMedicalImageProperties_SetAcquisitionTime, METH_VARARGS,
   "SetAcquisitionTime(self, _arg:str) -> None\nC++: virtual void SetAcquisitionTime(const char *_arg)\n\nAcquisition time Format: hhmmss.frac (any trailing component(s)\ncan be omitted) For ex: DICOM (0008,0032) = 162552.0705 or\n230012, or 0012\n"},
  {"GetAcquisitionTime", PyvtkMedicalImageProperties_GetAcquisitionTime, METH_VARARGS,
   "GetAcquisitionTime(self) -> str\nC++: virtual char *GetAcquisitionTime()\n\n"},
  {"SetImageDate", PyvtkMedicalImageProperties_SetImageDate, METH_VARARGS,
   "SetImageDate(self, _arg:str) -> None\nC++: virtual void SetImageDate(const char *_arg)\n\nImage Date aka Content Date Format: yyyymmdd For ex: DICOM\n(0008,0023) = 20030617\n"},
  {"GetImageDate", PyvtkMedicalImageProperties_GetImageDate, METH_VARARGS,
   "GetImageDate(self) -> str\nC++: virtual char *GetImageDate()\n\n"},
  {"GetImageDateYear", PyvtkMedicalImageProperties_GetImageDateYear, METH_VARARGS,
   "GetImageDateYear(self) -> int\nC++: int GetImageDateYear()\n\n"},
  {"GetImageDateMonth", PyvtkMedicalImageProperties_GetImageDateMonth, METH_VARARGS,
   "GetImageDateMonth(self) -> int\nC++: int GetImageDateMonth()\n\n"},
  {"GetImageDateDay", PyvtkMedicalImageProperties_GetImageDateDay, METH_VARARGS,
   "GetImageDateDay(self) -> int\nC++: int GetImageDateDay()\n\n"},
  {"GetDateAsFields", PyvtkMedicalImageProperties_GetDateAsFields, METH_VARARGS,
   "GetDateAsFields(date:str, year:int, month:int, day:int) -> int\nC++: static int GetDateAsFields(const char *date, int &year,\n    int &month, int &day)\n\nTake as input a string in ISO 8601 date (YYYY/MM/DD) and extract\nthe different fields namely: year month day Return 0 on error, 1\non success\n"},
  {"GetTimeAsFields", PyvtkMedicalImageProperties_GetTimeAsFields, METH_VARARGS,
   "GetTimeAsFields(time:str, hour:int, minute:int, second:int) -> int\nC++: static int GetTimeAsFields(const char *time, int &hour,\n    int &minute, int &second)\n\nTake as input a string in VR:TM format (HHMMSS) and extract the\ndifferent fields namely: hour, minute and second Return 0 on\nerror, 1 on success\n"},
  {"GetDateAsLocale", PyvtkMedicalImageProperties_GetDateAsLocale, METH_VARARGS,
   "GetDateAsLocale(date:str, locale:str) -> int\nC++: static int GetDateAsLocale(const char *date, char *locale)\n\nTake as input a string in ISO 8601 date (YYYY/MM/DD) and\nconstruct a locale date based on the different fields (see\nGetDateAsFields to extract different fields) Return 0 on error, 1\non success\n"},
  {"SetImageTime", PyvtkMedicalImageProperties_SetImageTime, METH_VARARGS,
   "SetImageTime(self, _arg:str) -> None\nC++: virtual void SetImageTime(const char *_arg)\n\nImage Time Format: hhmmss.frac (any trailing component(s) can be\nomitted) For ex: DICOM (0008,0033) = 162552.0705 or 230012, or\n0012\n"},
  {"GetImageTime", PyvtkMedicalImageProperties_GetImageTime, METH_VARARGS,
   "GetImageTime(self) -> str\nC++: virtual char *GetImageTime()\n\n"},
  {"SetImageNumber", PyvtkMedicalImageProperties_SetImageNumber, METH_VARARGS,
   "SetImageNumber(self, _arg:str) -> None\nC++: virtual void SetImageNumber(const char *_arg)\n\nImage number For ex: DICOM (0020,0013) = 1\n"},
  {"GetImageNumber", PyvtkMedicalImageProperties_GetImageNumber, METH_VARARGS,
   "GetImageNumber(self) -> str\nC++: virtual char *GetImageNumber()\n\n"},
  {"SetSeriesNumber", PyvtkMedicalImageProperties_SetSeriesNumber, METH_VARARGS,
   "SetSeriesNumber(self, _arg:str) -> None\nC++: virtual void SetSeriesNumber(const char *_arg)\n\nSeries number For ex: DICOM (0020,0011) = 902\n"},
  {"GetSeriesNumber", PyvtkMedicalImageProperties_GetSeriesNumber, METH_VARARGS,
   "GetSeriesNumber(self) -> str\nC++: virtual char *GetSeriesNumber()\n\n"},
  {"SetSeriesDescription", PyvtkMedicalImageProperties_SetSeriesDescription, METH_VARARGS,
   "SetSeriesDescription(self, _arg:str) -> None\nC++: virtual void SetSeriesDescription(const char *_arg)\n\nSeries Description User provided description of the Series For\nex: DICOM (0008,103e) = SCOUT\n"},
  {"GetSeriesDescription", PyvtkMedicalImageProperties_GetSeriesDescription, METH_VARARGS,
   "GetSeriesDescription(self) -> str\nC++: virtual char *GetSeriesDescription()\n\n"},
  {"SetStudyID", PyvtkMedicalImageProperties_SetStudyID, METH_VARARGS,
   "SetStudyID(self, _arg:str) -> None\nC++: virtual void SetStudyID(const char *_arg)\n\nStudy ID For ex: DICOM (0020,0010) = 37481\n"},
  {"GetStudyID", PyvtkMedicalImageProperties_GetStudyID, METH_VARARGS,
   "GetStudyID(self) -> str\nC++: virtual char *GetStudyID()\n\n"},
  {"SetStudyDescription", PyvtkMedicalImageProperties_SetStudyDescription, METH_VARARGS,
   "SetStudyDescription(self, _arg:str) -> None\nC++: virtual void SetStudyDescription(const char *_arg)\n\nStudy description For ex: DICOM (0008,1030) = BRAIN/C-SP/FACIAL\n"},
  {"GetStudyDescription", PyvtkMedicalImageProperties_GetStudyDescription, METH_VARARGS,
   "GetStudyDescription(self) -> str\nC++: virtual char *GetStudyDescription()\n\n"},
  {"SetModality", PyvtkMedicalImageProperties_SetModality, METH_VARARGS,
   "SetModality(self, _arg:str) -> None\nC++: virtual void SetModality(const char *_arg)\n\nModality For ex: DICOM (0008,0060)= CT\n"},
  {"GetModality", PyvtkMedicalImageProperties_GetModality, METH_VARARGS,
   "GetModality(self) -> str\nC++: virtual char *GetModality()\n\n"},
  {"SetManufacturer", PyvtkMedicalImageProperties_SetManufacturer, METH_VARARGS,
   "SetManufacturer(self, _arg:str) -> None\nC++: virtual void SetManufacturer(const char *_arg)\n\nManufacturer For ex: DICOM (0008,0070) = Siemens\n"},
  {"GetManufacturer", PyvtkMedicalImageProperties_GetManufacturer, METH_VARARGS,
   "GetManufacturer(self) -> str\nC++: virtual char *GetManufacturer()\n\n"},
  {"SetManufacturerModelName", PyvtkMedicalImageProperties_SetManufacturerModelName, METH_VARARGS,
   "SetManufacturerModelName(self, _arg:str) -> None\nC++: virtual void SetManufacturerModelName(const char *_arg)\n\nManufacturer's Model Name For ex: DICOM (0008,1090) = LightSpeed\nQX/i\n"},
  {"GetManufacturerModelName", PyvtkMedicalImageProperties_GetManufacturerModelName, METH_VARARGS,
   "GetManufacturerModelName(self) -> str\nC++: virtual char *GetManufacturerModelName()\n\n"},
  {"SetStationName", PyvtkMedicalImageProperties_SetStationName, METH_VARARGS,
   "SetStationName(self, _arg:str) -> None\nC++: virtual void SetStationName(const char *_arg)\n\nStation Name For ex: DICOM (0008,1010) = LSPD_OC8\n"},
  {"GetStationName", PyvtkMedicalImageProperties_GetStationName, METH_VARARGS,
   "GetStationName(self) -> str\nC++: virtual char *GetStationName()\n\n"},
  {"SetInstitutionName", PyvtkMedicalImageProperties_SetInstitutionName, METH_VARARGS,
   "SetInstitutionName(self, _arg:str) -> None\nC++: virtual void SetInstitutionName(const char *_arg)\n\nInstitution Name For ex: DICOM (0008,0080) = FooCity Medical\nCenter\n"},
  {"GetInstitutionName", PyvtkMedicalImageProperties_GetInstitutionName, METH_VARARGS,
   "GetInstitutionName(self) -> str\nC++: virtual char *GetInstitutionName()\n\n"},
  {"SetConvolutionKernel", PyvtkMedicalImageProperties_SetConvolutionKernel, METH_VARARGS,
   "SetConvolutionKernel(self, _arg:str) -> None\nC++: virtual void SetConvolutionKernel(const char *_arg)\n\nConvolution Kernel (or algorithm used to reconstruct the data)\nFor ex: DICOM (0018,1210) = Bone\n"},
  {"GetConvolutionKernel", PyvtkMedicalImageProperties_GetConvolutionKernel, METH_VARARGS,
   "GetConvolutionKernel(self) -> str\nC++: virtual char *GetConvolutionKernel()\n\n"},
  {"SetSliceThickness", PyvtkMedicalImageProperties_SetSliceThickness, METH_VARARGS,
   "SetSliceThickness(self, _arg:str) -> None\nC++: virtual void SetSliceThickness(const char *_arg)\n\nSlice Thickness (Nominal reconstructed slice thickness, in mm)\nFor ex: DICOM (0018,0050) = 0.273438\n"},
  {"GetSliceThickness", PyvtkMedicalImageProperties_GetSliceThickness, METH_VARARGS,
   "GetSliceThickness(self) -> str\nC++: virtual char *GetSliceThickness()\n\n"},
  {"GetSliceThicknessAsDouble", PyvtkMedicalImageProperties_GetSliceThicknessAsDouble, METH_VARARGS,
   "GetSliceThicknessAsDouble(self) -> float\nC++: virtual double GetSliceThicknessAsDouble()\n\n"},
  {"SetKVP", PyvtkMedicalImageProperties_SetKVP, METH_VARARGS,
   "SetKVP(self, _arg:str) -> None\nC++: virtual void SetKVP(const char *_arg)\n\nPeak kilo voltage output of the (x-ray) generator used For ex:\nDICOM (0018,0060) = 120\n"},
  {"GetKVP", PyvtkMedicalImageProperties_GetKVP, METH_VARARGS,
   "GetKVP(self) -> str\nC++: virtual char *GetKVP()\n\n"},
  {"SetGantryTilt", PyvtkMedicalImageProperties_SetGantryTilt, METH_VARARGS,
   "SetGantryTilt(self, _arg:str) -> None\nC++: virtual void SetGantryTilt(const char *_arg)\n\nGantry/Detector tilt (Nominal angle of tilt in degrees of the\nscanning gantry.) For ex: DICOM (0018,1120) = 15\n"},
  {"GetGantryTilt", PyvtkMedicalImageProperties_GetGantryTilt, METH_VARARGS,
   "GetGantryTilt(self) -> str\nC++: virtual char *GetGantryTilt()\n\n"},
  {"GetGantryTiltAsDouble", PyvtkMedicalImageProperties_GetGantryTiltAsDouble, METH_VARARGS,
   "GetGantryTiltAsDouble(self) -> float\nC++: virtual double GetGantryTiltAsDouble()\n\n"},
  {"SetEchoTime", PyvtkMedicalImageProperties_SetEchoTime, METH_VARARGS,
   "SetEchoTime(self, _arg:str) -> None\nC++: virtual void SetEchoTime(const char *_arg)\n\nEcho Time (Time in ms between the middle of the excitation pulse\nand the peak of the echo produced) For ex: DICOM (0018,0081) =\n105\n"},
  {"GetEchoTime", PyvtkMedicalImageProperties_GetEchoTime, METH_VARARGS,
   "GetEchoTime(self) -> str\nC++: virtual char *GetEchoTime()\n\n"},
  {"SetEchoTrainLength", PyvtkMedicalImageProperties_SetEchoTrainLength, METH_VARARGS,
   "SetEchoTrainLength(self, _arg:str) -> None\nC++: virtual void SetEchoTrainLength(const char *_arg)\n\nEcho Train Length (Number of lines in k-space acquired per\nexcitation per image) For ex: DICOM (0018,0091) = 35\n"},
  {"GetEchoTrainLength", PyvtkMedicalImageProperties_GetEchoTrainLength, METH_VARARGS,
   "GetEchoTrainLength(self) -> str\nC++: virtual char *GetEchoTrainLength()\n\n"},
  {"SetRepetitionTime", PyvtkMedicalImageProperties_SetRepetitionTime, METH_VARARGS,
   "SetRepetitionTime(self, _arg:str) -> None\nC++: virtual void SetRepetitionTime(const char *_arg)\n\nRepetition Time The period of time in msec between the beginning\nof a pulse sequence and the beginning of the succeeding\n(essentially identical) pulse sequence. For ex: DICOM (0018,0080)\n= 2040\n"},
  {"GetRepetitionTime", PyvtkMedicalImageProperties_GetRepetitionTime, METH_VARARGS,
   "GetRepetitionTime(self) -> str\nC++: virtual char *GetRepetitionTime()\n\n"},
  {"SetExposureTime", PyvtkMedicalImageProperties_SetExposureTime, METH_VARARGS,
   "SetExposureTime(self, _arg:str) -> None\nC++: virtual void SetExposureTime(const char *_arg)\n\nExposure time (time of x-ray exposure in msec) For ex: DICOM\n(0018,1150) = 5\n"},
  {"GetExposureTime", PyvtkMedicalImageProperties_GetExposureTime, METH_VARARGS,
   "GetExposureTime(self) -> str\nC++: virtual char *GetExposureTime()\n\n"},
  {"SetXRayTubeCurrent", PyvtkMedicalImageProperties_SetXRayTubeCurrent, METH_VARARGS,
   "SetXRayTubeCurrent(self, _arg:str) -> None\nC++: virtual void SetXRayTubeCurrent(const char *_arg)\n\nX-ray tube current (in mA) For ex: DICOM (0018,1151) = 400\n"},
  {"GetXRayTubeCurrent", PyvtkMedicalImageProperties_GetXRayTubeCurrent, METH_VARARGS,
   "GetXRayTubeCurrent(self) -> str\nC++: virtual char *GetXRayTubeCurrent()\n\n"},
  {"SetExposure", PyvtkMedicalImageProperties_SetExposure, METH_VARARGS,
   "SetExposure(self, _arg:str) -> None\nC++: virtual void SetExposure(const char *_arg)\n\nExposure (The exposure expressed in mAs, for example calculated\nfrom Exposure Time and X-ray Tube Current) For ex: DICOM\n(0018,1152) = 114\n"},
  {"GetExposure", PyvtkMedicalImageProperties_GetExposure, METH_VARARGS,
   "GetExposure(self) -> str\nC++: virtual char *GetExposure()\n\n"},
  {"SetDirectionCosine", PyvtkMedicalImageProperties_SetDirectionCosine, METH_VARARGS,
   "SetDirectionCosine(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetDirectionCosine(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetDirectionCosine(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetDirectionCosine(const double _arg[6])\n\nGet the direction cosine (default to 1,0,0,0,1,0)\n"},
  {"GetDirectionCosine", PyvtkMedicalImageProperties_GetDirectionCosine, METH_VARARGS,
   "GetDirectionCosine(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetDirectionCosine()\n\n"},
  {"AddUserDefinedValue", PyvtkMedicalImageProperties_AddUserDefinedValue, METH_VARARGS,
   "AddUserDefinedValue(self, name:str, value:str) -> None\nC++: virtual void AddUserDefinedValue(const char *name,\n    const char *value)\n\n"},
  {"GetUserDefinedValue", PyvtkMedicalImageProperties_GetUserDefinedValue, METH_VARARGS,
   "GetUserDefinedValue(self, name:str) -> str\nC++: virtual const char *GetUserDefinedValue(const char *name)\n\n"},
  {"GetNumberOfUserDefinedValues", PyvtkMedicalImageProperties_GetNumberOfUserDefinedValues, METH_VARARGS,
   "GetNumberOfUserDefinedValues(self) -> int\nC++: virtual unsigned int GetNumberOfUserDefinedValues()\n\n"},
  {"GetUserDefinedNameByIndex", PyvtkMedicalImageProperties_GetUserDefinedNameByIndex, METH_VARARGS,
   "GetUserDefinedNameByIndex(self, idx:int) -> str\nC++: virtual const char *GetUserDefinedNameByIndex(\n    unsigned int idx)\n\n"},
  {"GetUserDefinedValueByIndex", PyvtkMedicalImageProperties_GetUserDefinedValueByIndex, METH_VARARGS,
   "GetUserDefinedValueByIndex(self, idx:int) -> str\nC++: virtual const char *GetUserDefinedValueByIndex(\n    unsigned int idx)\n\n"},
  {"RemoveAllUserDefinedValues", PyvtkMedicalImageProperties_RemoveAllUserDefinedValues, METH_VARARGS,
   "RemoveAllUserDefinedValues(self) -> None\nC++: virtual void RemoveAllUserDefinedValues()\n\n"},
  {"AddWindowLevelPreset", PyvtkMedicalImageProperties_AddWindowLevelPreset, METH_VARARGS,
   "AddWindowLevelPreset(self, w:float, l:float) -> int\nC++: virtual int AddWindowLevelPreset(double w, double l)\n\nAdd/Remove/Query the window/level presets that may have been\nassociated to a medical image. Window is also known as 'width',\nlevel is also known as 'center'. The same window/level pair can\nnot be added twice. As a convenience, a comment (aka Explanation)\ncan be associated to a preset. For ex:\n DICOM Window Center (0028,1050) = 00045\\000470\n DICOM Window Width  (0028,1051) = 0106\\03412\n DICOM Window Center Width Explanation (0028,1055) = WINDOW1\\WINDOW2\n \n"},
  {"RemoveWindowLevelPreset", PyvtkMedicalImageProperties_RemoveWindowLevelPreset, METH_VARARGS,
   "RemoveWindowLevelPreset(self, w:float, l:float) -> None\nC++: virtual void RemoveWindowLevelPreset(double w, double l)\n\n"},
  {"RemoveAllWindowLevelPresets", PyvtkMedicalImageProperties_RemoveAllWindowLevelPresets, METH_VARARGS,
   "RemoveAllWindowLevelPresets(self) -> None\nC++: virtual void RemoveAllWindowLevelPresets()\n\n"},
  {"GetNumberOfWindowLevelPresets", PyvtkMedicalImageProperties_GetNumberOfWindowLevelPresets, METH_VARARGS,
   "GetNumberOfWindowLevelPresets(self) -> int\nC++: virtual int GetNumberOfWindowLevelPresets()\n\n"},
  {"HasWindowLevelPreset", PyvtkMedicalImageProperties_HasWindowLevelPreset, METH_VARARGS,
   "HasWindowLevelPreset(self, w:float, l:float) -> int\nC++: virtual vtkTypeBool HasWindowLevelPreset(double w, double l)\n\n"},
  {"GetWindowLevelPresetIndex", PyvtkMedicalImageProperties_GetWindowLevelPresetIndex, METH_VARARGS,
   "GetWindowLevelPresetIndex(self, w:float, l:float) -> int\nC++: virtual int GetWindowLevelPresetIndex(double w, double l)\n\n"},
  {"GetNthWindowLevelPreset", PyvtkMedicalImageProperties_GetNthWindowLevelPreset, METH_VARARGS,
   "GetNthWindowLevelPreset(self, idx:int, w:[float, ...], l:[float,\n    ...]) -> int\nC++: virtual int GetNthWindowLevelPreset(int idx, double *w,\n    double *l)\nGetNthWindowLevelPreset(self, idx:int) -> (float, float)\nC++: virtual double *GetNthWindowLevelPreset(int idx)\n\n"},
  {"SetNthWindowLevelPresetComment", PyvtkMedicalImageProperties_SetNthWindowLevelPresetComment, METH_VARARGS,
   "SetNthWindowLevelPresetComment(self, idx:int, comment:str) -> None\nC++: virtual void SetNthWindowLevelPresetComment(int idx,\n    const char *comment)\n\n"},
  {"GetNthWindowLevelPresetComment", PyvtkMedicalImageProperties_GetNthWindowLevelPresetComment, METH_VARARGS,
   "GetNthWindowLevelPresetComment(self, idx:int) -> str\nC++: virtual const char *GetNthWindowLevelPresetComment(int idx)\n\n"},
  {"GetInstanceUIDFromSliceID", PyvtkMedicalImageProperties_GetInstanceUIDFromSliceID, METH_VARARGS,
   "GetInstanceUIDFromSliceID(self, volumeidx:int, sliceid:int) -> str\nC++: const char *GetInstanceUIDFromSliceID(int volumeidx,\n    int sliceid)\n\nMapping from a sliceidx within a volumeidx into a DICOM Instance\nUID Some DICOM reader can populate this structure so that later\non from a slice index in a vtkImageData volume we can backtrack\nand find out which 2d slice it was coming from\n"},
  {"SetInstanceUIDFromSliceID", PyvtkMedicalImageProperties_SetInstanceUIDFromSliceID, METH_VARARGS,
   "SetInstanceUIDFromSliceID(self, volumeidx:int, sliceid:int,\n    uid:str) -> None\nC++: void SetInstanceUIDFromSliceID(int volumeidx, int sliceid,\n    const char *uid)\n\n"},
  {"GetSliceIDFromInstanceUID", PyvtkMedicalImageProperties_GetSliceIDFromInstanceUID, METH_VARARGS,
   "GetSliceIDFromInstanceUID(self, volumeidx:int, uid:str) -> int\nC++: int GetSliceIDFromInstanceUID(int &volumeidx,\n    const char *uid)\n\nProvides the inverse mapping. Returns -1 if a slice for this uid\nis not found.\n"},
  {"GetOrientationType", PyvtkMedicalImageProperties_GetOrientationType, METH_VARARGS,
   "GetOrientationType(self, volumeidx:int) -> int\nC++: int GetOrientationType(int volumeidx)\n\n"},
  {"SetOrientationType", PyvtkMedicalImageProperties_SetOrientationType, METH_VARARGS,
   "SetOrientationType(self, volumeidx:int, orientation:int) -> None\nC++: void SetOrientationType(int volumeidx, int orientation)\n\n"},
  {"GetStringFromOrientationType", PyvtkMedicalImageProperties_GetStringFromOrientationType, METH_VARARGS,
   "GetStringFromOrientationType(type:int) -> str\nC++: static const char *GetStringFromOrientationType(\n    unsigned int type)\n\n"},
  {"DeepCopy", PyvtkMedicalImageProperties_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkMedicalImageProperties) -> None\nC++: virtual void DeepCopy(vtkMedicalImageProperties *p)\n\nCopy the contents of p to this instance.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMedicalImageProperties_Doc =
  "vtkMedicalImageProperties - some medical image properties.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkMedicalImageProperties is a helper class that can be used by\n"
  "medical image readers and applications to encapsulate medical\n"
  "image/acquisition properties. Later on, this should probably be\n"
  "extended to add any user-defined property.\n"
  "@sa\n"
  "vtkMedicalImageReader2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMedicalImageProperties_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkMedicalImageProperties", // tp_name
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
  PyvtkMedicalImageProperties_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMedicalImageProperties_StaticNew()
{
  return vtkMedicalImageProperties::New();
}

PyObject *PyvtkMedicalImageProperties_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMedicalImageProperties_Type, PyvtkMedicalImageProperties_Methods,
    "vtkMedicalImageProperties",
 &PyvtkMedicalImageProperties_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "AXIAL", vtkMedicalImageProperties::AXIAL },
        { "CORONAL", vtkMedicalImageProperties::CORONAL },
        { "SAGITTAL", vtkMedicalImageProperties::SAGITTAL },
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

void PyVTKAddFile_vtkMedicalImageProperties(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMedicalImageProperties_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMedicalImageProperties", o) != 0)
  {
    Py_DECREF(o);
  }

}

