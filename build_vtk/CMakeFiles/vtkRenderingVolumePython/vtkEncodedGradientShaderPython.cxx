// python wrapper for vtkEncodedGradientShader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEncodedGradientShader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEncodedGradientShader(PyObject *dict); }
extern "C" { PyObject *PyvtkEncodedGradientShader_ClassNew(); }


static PyObject *
PyvtkEncodedGradientShader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEncodedGradientShader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEncodedGradientShader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEncodedGradientShader *tempr = vtkEncodedGradientShader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEncodedGradientShader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEncodedGradientShader::NewInstance());

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
PyvtkEncodedGradientShader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEncodedGradientShader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEncodedGradientShader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalDiffuseIntensity(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetZeroNormalDiffuseIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalDiffuseIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalDiffuseIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalDiffuseIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZeroNormalSpecularIntensity(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetZeroNormalSpecularIntensity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMinValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensityMaxValue() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZeroNormalSpecularIntensity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetZeroNormalSpecularIntensity() :
      op->vtkEncodedGradientShader::GetZeroNormalSpecularIntensity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_UpdateShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  vtkEncodedGradientEstimator *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume") &&
      ap.GetVTKObject(temp2, "vtkEncodedGradientEstimator"))
  {
    if (ap.IsBound())
    {
      op->UpdateShadingTable(temp0, temp1, temp2);
    }
    else
    {
      op->vtkEncodedGradientShader::UpdateShadingTable(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRedDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGreenDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueDiffuseShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBlueDiffuseShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueDiffuseShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetRedSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRedSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetRedSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetRedSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetGreenSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGreenSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetGreenSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetGreenSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetBlueSpecularShadingTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlueSpecularShadingTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  vtkVolume *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolume"))
  {
    float *tempr = (ap.IsBound() ?
      op->GetBlueSpecularShadingTable(temp0) :
      op->vtkEncodedGradientShader::GetBlueSpecularShadingTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_SetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActiveComponent(temp0);
    }
    else
    {
      op->vtkEncodedGradientShader::SetActiveComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMinValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponentMaxValue() :
      op->vtkEncodedGradientShader::GetActiveComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEncodedGradientShader_GetActiveComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEncodedGradientShader *op = static_cast<vtkEncodedGradientShader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveComponent() :
      op->vtkEncodedGradientShader::GetActiveComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEncodedGradientShader_Methods[] = {
  {"IsTypeOf", PyvtkEncodedGradientShader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEncodedGradientShader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEncodedGradientShader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEncodedGradientShader\nC++: static vtkEncodedGradientShader *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEncodedGradientShader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEncodedGradientShader\nC++: vtkEncodedGradientShader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEncodedGradientShader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEncodedGradientShader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_SetZeroNormalDiffuseIntensity, METH_VARARGS,
   "SetZeroNormalDiffuseIntensity(self, _arg:float) -> None\nC++: virtual void SetZeroNormalDiffuseIntensity(float _arg)\n\nSet / Get the intensity diffuse / specular light used for the\nzero normals.\n"},
  {"GetZeroNormalDiffuseIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMinValue, METH_VARARGS,
   "GetZeroNormalDiffuseIntensityMinValue(self) -> float\nC++: virtual float GetZeroNormalDiffuseIntensityMinValue()\n\n"},
  {"GetZeroNormalDiffuseIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensityMaxValue, METH_VARARGS,
   "GetZeroNormalDiffuseIntensityMaxValue(self) -> float\nC++: virtual float GetZeroNormalDiffuseIntensityMaxValue()\n\n"},
  {"GetZeroNormalDiffuseIntensity", PyvtkEncodedGradientShader_GetZeroNormalDiffuseIntensity, METH_VARARGS,
   "GetZeroNormalDiffuseIntensity(self) -> float\nC++: virtual float GetZeroNormalDiffuseIntensity()\n\n"},
  {"SetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_SetZeroNormalSpecularIntensity, METH_VARARGS,
   "SetZeroNormalSpecularIntensity(self, _arg:float) -> None\nC++: virtual void SetZeroNormalSpecularIntensity(float _arg)\n\n"},
  {"GetZeroNormalSpecularIntensityMinValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMinValue, METH_VARARGS,
   "GetZeroNormalSpecularIntensityMinValue(self) -> float\nC++: virtual float GetZeroNormalSpecularIntensityMinValue()\n\n"},
  {"GetZeroNormalSpecularIntensityMaxValue", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensityMaxValue, METH_VARARGS,
   "GetZeroNormalSpecularIntensityMaxValue(self) -> float\nC++: virtual float GetZeroNormalSpecularIntensityMaxValue()\n\n"},
  {"GetZeroNormalSpecularIntensity", PyvtkEncodedGradientShader_GetZeroNormalSpecularIntensity, METH_VARARGS,
   "GetZeroNormalSpecularIntensity(self) -> float\nC++: virtual float GetZeroNormalSpecularIntensity()\n\n"},
  {"UpdateShadingTable", PyvtkEncodedGradientShader_UpdateShadingTable, METH_VARARGS,
   "UpdateShadingTable(self, ren:vtkRenderer, vol:vtkVolume,\n    gradest:vtkEncodedGradientEstimator) -> None\nC++: void UpdateShadingTable(vtkRenderer *ren, vtkVolume *vol,\n    vtkEncodedGradientEstimator *gradest)\n\nCause the shading table to be updated\n"},
  {"GetRedDiffuseShadingTable", PyvtkEncodedGradientShader_GetRedDiffuseShadingTable, METH_VARARGS,
   "GetRedDiffuseShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetRedDiffuseShadingTable(vtkVolume *vol)\n\nGet the red/green/blue shading table.\n"},
  {"GetGreenDiffuseShadingTable", PyvtkEncodedGradientShader_GetGreenDiffuseShadingTable, METH_VARARGS,
   "GetGreenDiffuseShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetGreenDiffuseShadingTable(vtkVolume *vol)\n\n"},
  {"GetBlueDiffuseShadingTable", PyvtkEncodedGradientShader_GetBlueDiffuseShadingTable, METH_VARARGS,
   "GetBlueDiffuseShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetBlueDiffuseShadingTable(vtkVolume *vol)\n\n"},
  {"GetRedSpecularShadingTable", PyvtkEncodedGradientShader_GetRedSpecularShadingTable, METH_VARARGS,
   "GetRedSpecularShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetRedSpecularShadingTable(vtkVolume *vol)\n\n"},
  {"GetGreenSpecularShadingTable", PyvtkEncodedGradientShader_GetGreenSpecularShadingTable, METH_VARARGS,
   "GetGreenSpecularShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetGreenSpecularShadingTable(vtkVolume *vol)\n\n"},
  {"GetBlueSpecularShadingTable", PyvtkEncodedGradientShader_GetBlueSpecularShadingTable, METH_VARARGS,
   "GetBlueSpecularShadingTable(self, vol:vtkVolume) -> Pointer\nC++: float *GetBlueSpecularShadingTable(vtkVolume *vol)\n\n"},
  {"SetActiveComponent", PyvtkEncodedGradientShader_SetActiveComponent, METH_VARARGS,
   "SetActiveComponent(self, _arg:int) -> None\nC++: virtual void SetActiveComponent(int _arg)\n\nSet the active component for shading. This component's ambient /\ndiffuse / specular / specular power values will be used to create\nthe shading table. The default is 1.0\n"},
  {"GetActiveComponentMinValue", PyvtkEncodedGradientShader_GetActiveComponentMinValue, METH_VARARGS,
   "GetActiveComponentMinValue(self) -> int\nC++: virtual int GetActiveComponentMinValue()\n\n"},
  {"GetActiveComponentMaxValue", PyvtkEncodedGradientShader_GetActiveComponentMaxValue, METH_VARARGS,
   "GetActiveComponentMaxValue(self) -> int\nC++: virtual int GetActiveComponentMaxValue()\n\n"},
  {"GetActiveComponent", PyvtkEncodedGradientShader_GetActiveComponent, METH_VARARGS,
   "GetActiveComponent(self) -> int\nC++: virtual int GetActiveComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEncodedGradientShader_Doc =
  "vtkEncodedGradientShader - Compute shading tables for encoded normals.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEncodedGradientShader computes shading tables for encoded normals\n"
  "that indicates the amount of diffuse and specular illumination that\n"
  "is received from all light sources at a surface location with that\n"
  "normal. For diffuse illumination this is accurate, but for specular\n"
  "illumination it is approximate for perspective projections since the\n"
  "center view direction is always used as the view direction. Since the\n"
  "shading table is dependent on the volume (for the transformation that\n"
  "must be applied to the normals to put them into world coordinates)\n"
  "there is a shading table per volume. This is necessary because\n"
  "multiple volumes can share a volume mapper.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEncodedGradientShader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkEncodedGradientShader", // tp_name
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
  PyvtkEncodedGradientShader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEncodedGradientShader_StaticNew()
{
  return vtkEncodedGradientShader::New();
}

PyObject *PyvtkEncodedGradientShader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEncodedGradientShader_Type, PyvtkEncodedGradientShader_Methods,
    "vtkEncodedGradientShader",
 &PyvtkEncodedGradientShader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEncodedGradientShader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEncodedGradientShader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEncodedGradientShader", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(100);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_MAX_SHADING_TABLES", o);
    Py_DECREF(o);
  }
}

