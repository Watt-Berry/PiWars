// python wrapper for vtkImageProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkImageProperty_ClassNew(); }


static PyObject *
PyvtkImageProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageProperty *tempr = vtkImageProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageProperty::NewInstance());

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
PyvtkImageProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  vtkImageProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkImageProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorWindow(temp0);
    }
    else
    {
      op->vtkImageProperty::SetColorWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetColorWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorWindow() :
      op->vtkImageProperty::GetColorWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorLevel(temp0);
    }
    else
    {
      op->vtkImageProperty::SetColorLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetColorLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetColorLevel() :
      op->vtkImageProperty::GetColorLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->vtkImageProperty::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageProperty::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLookupTableScalarRange(temp0);
    }
    else
    {
      op->vtkImageProperty::SetUseLookupTableScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseLookupTableScalarRange() :
      op->vtkImageProperty::GetUseLookupTableScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_UseLookupTableScalarRangeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOn();
    }
    else
    {
      op->vtkImageProperty::UseLookupTableScalarRangeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_UseLookupTableScalarRangeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableScalarRangeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableScalarRangeOff();
    }
    else
    {
      op->vtkImageProperty::UseLookupTableScalarRangeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkImageProperty::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkImageProperty::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkImageProperty::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkImageProperty::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmbient(temp0);
    }
    else
    {
      op->vtkImageProperty::SetAmbient(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbientMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMinValue() :
      op->vtkImageProperty::GetAmbientMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbientMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbientMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbientMaxValue() :
      op->vtkImageProperty::GetAmbientMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetAmbient(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmbient");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmbient() :
      op->vtkImageProperty::GetAmbient());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiffuse(temp0);
    }
    else
    {
      op->vtkImageProperty::SetDiffuse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuseMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMinValue() :
      op->vtkImageProperty::GetDiffuseMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuseMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuseMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuseMaxValue() :
      op->vtkImageProperty::GetDiffuseMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetDiffuse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiffuse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDiffuse() :
      op->vtkImageProperty::GetDiffuse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationType(temp0);
    }
    else
    {
      op->vtkImageProperty::SetInterpolationType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMinValue() :
      op->vtkImageProperty::GetInterpolationTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationTypeMaxValue() :
      op->vtkImageProperty::GetInterpolationTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInterpolationType() :
      op->vtkImageProperty::GetInterpolationType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToNearest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToNearest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToNearest();
    }
    else
    {
      op->vtkImageProperty::SetInterpolationTypeToNearest();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToLinear();
    }
    else
    {
      op->vtkImageProperty::SetInterpolationTypeToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetInterpolationTypeToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolationTypeToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolationTypeToCubic();
    }
    else
    {
      op->vtkImageProperty::SetInterpolationTypeToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetInterpolationTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolationTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInterpolationTypeAsString() :
      op->vtkImageProperty::GetInterpolationTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayerNumber(temp0);
    }
    else
    {
      op->vtkImageProperty::SetLayerNumber(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetLayerNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayerNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayerNumber() :
      op->vtkImageProperty::GetLayerNumber());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboard(temp0);
    }
    else
    {
      op->vtkImageProperty::SetCheckerboard(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_CheckerboardOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckerboardOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckerboardOn();
    }
    else
    {
      op->vtkImageProperty::CheckerboardOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_CheckerboardOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckerboardOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CheckerboardOff();
    }
    else
    {
      op->vtkImageProperty::CheckerboardOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetCheckerboard(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboard");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCheckerboard() :
      op->vtkImageProperty::GetCheckerboard());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboardSpacing(temp0, temp1);
    }
    else
    {
      op->vtkImageProperty::SetCheckerboardSpacing(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboardSpacing(temp0);
    }
    else
    {
      op->vtkImageProperty::SetCheckerboardSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageProperty_SetCheckerboardSpacing_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetCheckerboardSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckerboardSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageProperty_GetCheckerboardSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCheckerboardSpacing() :
      op->vtkImageProperty::GetCheckerboardSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetCheckerboardOffset_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboardOffset(temp0, temp1);
    }
    else
    {
      op->vtkImageProperty::SetCheckerboardOffset(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardOffset_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCheckerboardOffset(temp0);
    }
    else
    {
      op->vtkImageProperty::SetCheckerboardOffset(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetCheckerboardOffset(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageProperty_SetCheckerboardOffset_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetCheckerboardOffset_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCheckerboardOffset");
  return nullptr;
}


static PyObject *
PyvtkImageProperty_GetCheckerboardOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCheckerboardOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCheckerboardOffset() :
      op->vtkImageProperty::GetCheckerboardOffset());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBacking(temp0);
    }
    else
    {
      op->vtkImageProperty::SetBacking(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_BackingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackingOn();
    }
    else
    {
      op->vtkImageProperty::BackingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_BackingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BackingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BackingOff();
    }
    else
    {
      op->vtkImageProperty::BackingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetBacking(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBacking");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBacking() :
      op->vtkImageProperty::GetBacking());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_SetBackingColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

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
      op->SetBackingColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageProperty::SetBackingColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetBackingColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackingColor(temp0);
    }
    else
    {
      op->vtkImageProperty::SetBackingColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageProperty_SetBackingColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageProperty_SetBackingColor_s1(self, args);
    case 1:
      return PyvtkImageProperty_SetBackingColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackingColor");
  return nullptr;
}


static PyObject *
PyvtkImageProperty_GetBackingColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackingColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackingColor() :
      op->vtkImageProperty::GetBackingColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageProperty_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageProperty *op = static_cast<vtkImageProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageProperty::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageProperty_Methods[] = {
  {"IsTypeOf", PyvtkImageProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageProperty\nC++: static vtkImageProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageProperty\nC++: vtkImageProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkImageProperty_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkImageProperty) -> None\nC++: void DeepCopy(vtkImageProperty *p)\n\nAssign one property to another.\n"},
  {"SetColorWindow", PyvtkImageProperty_SetColorWindow, METH_VARARGS,
   "SetColorWindow(self, _arg:float) -> None\nC++: virtual void SetColorWindow(double _arg)\n\nThe window value for window/level.\n"},
  {"GetColorWindow", PyvtkImageProperty_GetColorWindow, METH_VARARGS,
   "GetColorWindow(self) -> float\nC++: virtual double GetColorWindow()\n\n"},
  {"SetColorLevel", PyvtkImageProperty_SetColorLevel, METH_VARARGS,
   "SetColorLevel(self, _arg:float) -> None\nC++: virtual void SetColorLevel(double _arg)\n\nThe level value for window/level.\n"},
  {"GetColorLevel", PyvtkImageProperty_GetColorLevel, METH_VARARGS,
   "GetColorLevel(self) -> float\nC++: virtual double GetColorLevel()\n\n"},
  {"SetLookupTable", PyvtkImageProperty_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, lut:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *lut)\n\nSpecify a lookup table for the data.  If the data is to be\ndisplayed as greyscale, or if the input data is already RGB,\nthere is no need to set a lookup table.\n"},
  {"GetLookupTable", PyvtkImageProperty_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetUseLookupTableScalarRange", PyvtkImageProperty_SetUseLookupTableScalarRange, METH_VARARGS,
   "SetUseLookupTableScalarRange(self, _arg:int) -> None\nC++: virtual void SetUseLookupTableScalarRange(vtkTypeBool _arg)\n\nUse the range that is set in the lookup table, instead of setting\nthe range from the Window/Level settings. This is off by default.\n"},
  {"GetUseLookupTableScalarRange", PyvtkImageProperty_GetUseLookupTableScalarRange, METH_VARARGS,
   "GetUseLookupTableScalarRange(self) -> int\nC++: virtual vtkTypeBool GetUseLookupTableScalarRange()\n\n"},
  {"UseLookupTableScalarRangeOn", PyvtkImageProperty_UseLookupTableScalarRangeOn, METH_VARARGS,
   "UseLookupTableScalarRangeOn(self) -> None\nC++: virtual void UseLookupTableScalarRangeOn()\n\n"},
  {"UseLookupTableScalarRangeOff", PyvtkImageProperty_UseLookupTableScalarRangeOff, METH_VARARGS,
   "UseLookupTableScalarRangeOff(self) -> None\nC++: virtual void UseLookupTableScalarRangeOff()\n\n"},
  {"SetOpacity", PyvtkImageProperty_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(double _arg)\n\nThe opacity of the image, where 1.0 is opaque and 0.0 is\ntransparent.  If the image has an alpha component, then the alpha\ncomponent will be multiplied by this value. The default is 1.0.\n"},
  {"GetOpacityMinValue", PyvtkImageProperty_GetOpacityMinValue, METH_VARARGS,
   "GetOpacityMinValue(self) -> float\nC++: virtual double GetOpacityMinValue()\n\n"},
  {"GetOpacityMaxValue", PyvtkImageProperty_GetOpacityMaxValue, METH_VARARGS,
   "GetOpacityMaxValue(self) -> float\nC++: virtual double GetOpacityMaxValue()\n\n"},
  {"GetOpacity", PyvtkImageProperty_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual double GetOpacity()\n\n"},
  {"SetAmbient", PyvtkImageProperty_SetAmbient, METH_VARARGS,
   "SetAmbient(self, _arg:float) -> None\nC++: virtual void SetAmbient(double _arg)\n\nThe ambient lighting coefficient.  The default is 1.0.\n"},
  {"GetAmbientMinValue", PyvtkImageProperty_GetAmbientMinValue, METH_VARARGS,
   "GetAmbientMinValue(self) -> float\nC++: virtual double GetAmbientMinValue()\n\n"},
  {"GetAmbientMaxValue", PyvtkImageProperty_GetAmbientMaxValue, METH_VARARGS,
   "GetAmbientMaxValue(self) -> float\nC++: virtual double GetAmbientMaxValue()\n\n"},
  {"GetAmbient", PyvtkImageProperty_GetAmbient, METH_VARARGS,
   "GetAmbient(self) -> float\nC++: virtual double GetAmbient()\n\n"},
  {"SetDiffuse", PyvtkImageProperty_SetDiffuse, METH_VARARGS,
   "SetDiffuse(self, _arg:float) -> None\nC++: virtual void SetDiffuse(double _arg)\n\nThe diffuse lighting coefficient.  The default is 0.0.\n"},
  {"GetDiffuseMinValue", PyvtkImageProperty_GetDiffuseMinValue, METH_VARARGS,
   "GetDiffuseMinValue(self) -> float\nC++: virtual double GetDiffuseMinValue()\n\n"},
  {"GetDiffuseMaxValue", PyvtkImageProperty_GetDiffuseMaxValue, METH_VARARGS,
   "GetDiffuseMaxValue(self) -> float\nC++: virtual double GetDiffuseMaxValue()\n\n"},
  {"GetDiffuse", PyvtkImageProperty_GetDiffuse, METH_VARARGS,
   "GetDiffuse(self) -> float\nC++: virtual double GetDiffuse()\n\n"},
  {"SetInterpolationType", PyvtkImageProperty_SetInterpolationType, METH_VARARGS,
   "SetInterpolationType(self, _arg:int) -> None\nC++: virtual void SetInterpolationType(int _arg)\n\nThe interpolation type (default: VTK_LINEAR_INTERPOLATION).\n"},
  {"GetInterpolationTypeMinValue", PyvtkImageProperty_GetInterpolationTypeMinValue, METH_VARARGS,
   "GetInterpolationTypeMinValue(self) -> int\nC++: virtual int GetInterpolationTypeMinValue()\n\n"},
  {"GetInterpolationTypeMaxValue", PyvtkImageProperty_GetInterpolationTypeMaxValue, METH_VARARGS,
   "GetInterpolationTypeMaxValue(self) -> int\nC++: virtual int GetInterpolationTypeMaxValue()\n\n"},
  {"GetInterpolationType", PyvtkImageProperty_GetInterpolationType, METH_VARARGS,
   "GetInterpolationType(self) -> int\nC++: virtual int GetInterpolationType()\n\n"},
  {"SetInterpolationTypeToNearest", PyvtkImageProperty_SetInterpolationTypeToNearest, METH_VARARGS,
   "SetInterpolationTypeToNearest(self) -> None\nC++: void SetInterpolationTypeToNearest()\n\n"},
  {"SetInterpolationTypeToLinear", PyvtkImageProperty_SetInterpolationTypeToLinear, METH_VARARGS,
   "SetInterpolationTypeToLinear(self) -> None\nC++: void SetInterpolationTypeToLinear()\n\n"},
  {"SetInterpolationTypeToCubic", PyvtkImageProperty_SetInterpolationTypeToCubic, METH_VARARGS,
   "SetInterpolationTypeToCubic(self) -> None\nC++: void SetInterpolationTypeToCubic()\n\n"},
  {"GetInterpolationTypeAsString", PyvtkImageProperty_GetInterpolationTypeAsString, METH_VARARGS,
   "GetInterpolationTypeAsString(self) -> str\nC++: virtual const char *GetInterpolationTypeAsString()\n\n"},
  {"SetLayerNumber", PyvtkImageProperty_SetLayerNumber, METH_VARARGS,
   "SetLayerNumber(self, _arg:int) -> None\nC++: virtual void SetLayerNumber(int _arg)\n\nSet the layer number.  This is ignored unless the image is part\nof a vtkImageStack.  The default layer number is zero.\n"},
  {"GetLayerNumber", PyvtkImageProperty_GetLayerNumber, METH_VARARGS,
   "GetLayerNumber(self) -> int\nC++: int GetLayerNumber()\n\n"},
  {"SetCheckerboard", PyvtkImageProperty_SetCheckerboard, METH_VARARGS,
   "SetCheckerboard(self, _arg:int) -> None\nC++: virtual void SetCheckerboard(vtkTypeBool _arg)\n\nMake a checkerboard pattern where the black squares are\ntransparent. The pattern is aligned with the camera, and centered\nby default.\n"},
  {"CheckerboardOn", PyvtkImageProperty_CheckerboardOn, METH_VARARGS,
   "CheckerboardOn(self) -> None\nC++: virtual void CheckerboardOn()\n\n"},
  {"CheckerboardOff", PyvtkImageProperty_CheckerboardOff, METH_VARARGS,
   "CheckerboardOff(self) -> None\nC++: virtual void CheckerboardOff()\n\n"},
  {"GetCheckerboard", PyvtkImageProperty_GetCheckerboard, METH_VARARGS,
   "GetCheckerboard(self) -> int\nC++: virtual vtkTypeBool GetCheckerboard()\n\n"},
  {"SetCheckerboardSpacing", PyvtkImageProperty_SetCheckerboardSpacing, METH_VARARGS,
   "SetCheckerboardSpacing(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetCheckerboardSpacing(double _arg1,\n    double _arg2)\nSetCheckerboardSpacing(self, _arg:(float, float)) -> None\nC++: void SetCheckerboardSpacing(const double _arg[2])\n\nThe spacing for checkerboarding.  This is in real units, not\npixels.\n"},
  {"GetCheckerboardSpacing", PyvtkImageProperty_GetCheckerboardSpacing, METH_VARARGS,
   "GetCheckerboardSpacing(self) -> (float, float)\nC++: virtual double *GetCheckerboardSpacing()\n\n"},
  {"SetCheckerboardOffset", PyvtkImageProperty_SetCheckerboardOffset, METH_VARARGS,
   "SetCheckerboardOffset(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetCheckerboardOffset(double _arg1,\n    double _arg2)\nSetCheckerboardOffset(self, _arg:(float, float)) -> None\nC++: void SetCheckerboardOffset(const double _arg[2])\n\nThe phase offset for checkerboarding, in units of spacing.  Use a\nvalue between -1 and +1, where 1 is an offset of one squares.\n"},
  {"GetCheckerboardOffset", PyvtkImageProperty_GetCheckerboardOffset, METH_VARARGS,
   "GetCheckerboardOffset(self) -> (float, float)\nC++: virtual double *GetCheckerboardOffset()\n\n"},
  {"SetBacking", PyvtkImageProperty_SetBacking, METH_VARARGS,
   "SetBacking(self, _arg:int) -> None\nC++: virtual void SetBacking(vtkTypeBool _arg)\n\nUse an opaque backing polygon, which will be visible where the\nimage is translucent.  When images are in a stack, the backing\npolygons for all images will be drawn before any of the images in\nthe stack, in order to allow the images in the stack to be\ncomposited.\n"},
  {"BackingOn", PyvtkImageProperty_BackingOn, METH_VARARGS,
   "BackingOn(self) -> None\nC++: virtual void BackingOn()\n\n"},
  {"BackingOff", PyvtkImageProperty_BackingOff, METH_VARARGS,
   "BackingOff(self) -> None\nC++: virtual void BackingOff()\n\n"},
  {"GetBacking", PyvtkImageProperty_GetBacking, METH_VARARGS,
   "GetBacking(self) -> int\nC++: virtual vtkTypeBool GetBacking()\n\n"},
  {"SetBackingColor", PyvtkImageProperty_SetBackingColor, METH_VARARGS,
   "SetBackingColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetBackingColor(double _arg1, double _arg2,\n    double _arg3)\nSetBackingColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetBackingColor(const double _arg[3])\n\nSet the color of the backing polygon.  The default color is\nblack.\n"},
  {"GetBackingColor", PyvtkImageProperty_GetBackingColor, METH_VARARGS,
   "GetBackingColor(self) -> (float, float, float)\nC++: virtual double *GetBackingColor()\n\n"},
  {"GetMTime", PyvtkImageProperty_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the MTime for this property.  If the lookup table is set, the\nmtime will include the mtime of the lookup table.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageProperty_Doc =
  "vtkImageProperty - image display properties\n\n"
  "Superclass: vtkObject\n\n"
  "vtkImageProperty is an object that allows control of the display of\n"
  "an image slice.@par Thanks: Thanks to David Gobbi at the Seaman\n"
  "Family MR Centre and Dept. of Clinical Neurosciences, Foothills\n"
  "Medical Centre, Calgary, for providing this class.\n"
  "@sa\n"
  "vtkImage vtkImageMapper3D vtkImageSliceMapper vtkImageResliceMapper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkImageProperty", // tp_name
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
  PyvtkImageProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageProperty_StaticNew()
{
  return vtkImageProperty::New();
}

PyObject *PyvtkImageProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageProperty_Type, PyvtkImageProperty_Methods,
    "vtkImageProperty",
 &PyvtkImageProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

