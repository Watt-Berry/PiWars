// python wrapper for vtkPBRPrefilterTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPBRPrefilterTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPBRPrefilterTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkPBRPrefilterTexture_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLTexture_ClassNew
extern "C" { PyObject *PyvtkOpenGLTexture_ClassNew(); }
#define DECLARED_PyvtkOpenGLTexture_ClassNew
#endif

static PyObject *
PyvtkPBRPrefilterTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPBRPrefilterTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPBRPrefilterTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPBRPrefilterTexture *tempr = vtkPBRPrefilterTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRPrefilterTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPBRPrefilterTexture::NewInstance());

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
PyvtkPBRPrefilterTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPBRPrefilterTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPBRPrefilterTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  vtkOpenGLTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLTexture"))
  {
    if (ap.IsBound())
    {
      op->SetInputTexture(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::SetInputTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLTexture *tempr = (ap.IsBound() ?
      op->GetInputTexture() :
      op->vtkPBRPrefilterTexture::GetInputTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Load(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetPrefilterSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefilterSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetPrefilterSize() :
      op->vtkPBRPrefilterTexture::GetPrefilterSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetPrefilterLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefilterLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetPrefilterLevels() :
      op->vtkPBRPrefilterTexture::GetPrefilterLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SetPrefilterLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefilterLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefilterLevels(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::SetPrefilterLevels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetPrefilterMaxSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrefilterMaxSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetPrefilterMaxSamples() :
      op->vtkPBRPrefilterTexture::GetPrefilterMaxSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SetPrefilterMaxSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrefilterMaxSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrefilterMaxSamples(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::SetPrefilterMaxSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetConvertToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertToLinear() :
      op->vtkPBRPrefilterTexture::GetConvertToLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SetConvertToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertToLinear(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::SetConvertToLinear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_ConvertToLinearOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToLinearOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToLinearOn();
    }
    else
    {
      op->vtkPBRPrefilterTexture::ConvertToLinearOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_ConvertToLinearOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToLinearOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToLinearOff();
    }
    else
    {
      op->vtkPBRPrefilterTexture::ConvertToLinearOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_GetHalfPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHalfPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetHalfPrecision() :
      op->vtkPBRPrefilterTexture::GetHalfPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_SetHalfPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHalfPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHalfPrecision(temp0);
    }
    else
    {
      op->vtkPBRPrefilterTexture::SetHalfPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_HalfPrecisionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HalfPrecisionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HalfPrecisionOn();
    }
    else
    {
      op->vtkPBRPrefilterTexture::HalfPrecisionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_HalfPrecisionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HalfPrecisionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->HalfPrecisionOff();
    }
    else
    {
      op->vtkPBRPrefilterTexture::HalfPrecisionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRPrefilterTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRPrefilterTexture *op = static_cast<vtkPBRPrefilterTexture *>(vp);

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
      op->vtkPBRPrefilterTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPBRPrefilterTexture_Methods[] = {
  {"IsTypeOf", PyvtkPBRPrefilterTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPBRPrefilterTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPBRPrefilterTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPBRPrefilterTexture\nC++: static vtkPBRPrefilterTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPBRPrefilterTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPBRPrefilterTexture\nC++: vtkPBRPrefilterTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPBRPrefilterTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPBRPrefilterTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputTexture", PyvtkPBRPrefilterTexture_SetInputTexture, METH_VARARGS,
   "SetInputTexture(self, __a:vtkOpenGLTexture) -> None\nC++: void SetInputTexture(vtkOpenGLTexture *)\n\nGet/Set the input texture.\n"},
  {"GetInputTexture", PyvtkPBRPrefilterTexture_GetInputTexture, METH_VARARGS,
   "GetInputTexture(self) -> vtkOpenGLTexture\nC++: virtual vtkOpenGLTexture *GetInputTexture()\n\n"},
  {"Load", PyvtkPBRPrefilterTexture_Load, METH_VARARGS,
   "Load(self, __a:vtkRenderer) -> None\nC++: void Load(vtkRenderer *) override;\n\nImplement base class method.\n"},
  {"Render", PyvtkPBRPrefilterTexture_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer) -> None\nC++: void Render(vtkRenderer *ren) override;\n\nImplement base class method.\n"},
  {"GetPrefilterSize", PyvtkPBRPrefilterTexture_GetPrefilterSize, METH_VARARGS,
   "GetPrefilterSize(self) -> int\nC++: virtual unsigned int GetPrefilterSize()\n\nGet size of texture (input texture height).\n"},
  {"GetPrefilterLevels", PyvtkPBRPrefilterTexture_GetPrefilterLevels, METH_VARARGS,
   "GetPrefilterLevels(self) -> int\nC++: virtual unsigned int GetPrefilterLevels()\n\nSet/Get the number of mip-map levels. Default is 5.\n"},
  {"SetPrefilterLevels", PyvtkPBRPrefilterTexture_SetPrefilterLevels, METH_VARARGS,
   "SetPrefilterLevels(self, _arg:int) -> None\nC++: virtual void SetPrefilterLevels(unsigned int _arg)\n\n"},
  {"GetPrefilterMaxSamples", PyvtkPBRPrefilterTexture_GetPrefilterMaxSamples, METH_VARARGS,
   "GetPrefilterMaxSamples(self) -> int\nC++: virtual unsigned int GetPrefilterMaxSamples()\n\nSet/Get the maximum number of samples. The number of samples for\neach roughness is between 1 at roughness = 0 and\nPrefilterMaxSamples at roughness = 1 Default is 512.\n"},
  {"SetPrefilterMaxSamples", PyvtkPBRPrefilterTexture_SetPrefilterMaxSamples, METH_VARARGS,
   "SetPrefilterMaxSamples(self, _arg:int) -> None\nC++: virtual void SetPrefilterMaxSamples(unsigned int _arg)\n\n"},
  {"GetConvertToLinear", PyvtkPBRPrefilterTexture_GetConvertToLinear, METH_VARARGS,
   "GetConvertToLinear(self) -> bool\nC++: virtual bool GetConvertToLinear()\n\nSet/Get the conversion to linear color space. If the input\ntexture is in sRGB color space and the conversion is not done by\nOpenGL directly with the texture format, the conversion can be\ndone in the shader with this flag.\n"},
  {"SetConvertToLinear", PyvtkPBRPrefilterTexture_SetConvertToLinear, METH_VARARGS,
   "SetConvertToLinear(self, _arg:bool) -> None\nC++: virtual void SetConvertToLinear(bool _arg)\n\n"},
  {"ConvertToLinearOn", PyvtkPBRPrefilterTexture_ConvertToLinearOn, METH_VARARGS,
   "ConvertToLinearOn(self) -> None\nC++: virtual void ConvertToLinearOn()\n\n"},
  {"ConvertToLinearOff", PyvtkPBRPrefilterTexture_ConvertToLinearOff, METH_VARARGS,
   "ConvertToLinearOff(self) -> None\nC++: virtual void ConvertToLinearOff()\n\n"},
  {"GetHalfPrecision", PyvtkPBRPrefilterTexture_GetHalfPrecision, METH_VARARGS,
   "GetHalfPrecision(self) -> bool\nC++: virtual bool GetHalfPrecision()\n\nSet/Get the precision of the texture. If HalfPrecision is\nenabled, each channel uses 16-bits values instead of 32-bits\nfloating point values. Default is true.\n"},
  {"SetHalfPrecision", PyvtkPBRPrefilterTexture_SetHalfPrecision, METH_VARARGS,
   "SetHalfPrecision(self, _arg:bool) -> None\nC++: virtual void SetHalfPrecision(bool _arg)\n\n"},
  {"HalfPrecisionOn", PyvtkPBRPrefilterTexture_HalfPrecisionOn, METH_VARARGS,
   "HalfPrecisionOn(self) -> None\nC++: virtual void HalfPrecisionOn()\n\n"},
  {"HalfPrecisionOff", PyvtkPBRPrefilterTexture_HalfPrecisionOff, METH_VARARGS,
   "HalfPrecisionOff(self) -> None\nC++: virtual void HalfPrecisionOff()\n\n"},
  {"ReleaseGraphicsResources", PyvtkPBRPrefilterTexture_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPBRPrefilterTexture_Doc =
  "vtkPBRPrefilterTexture - precompute prefilter texture used in\nphysically based rendering\n\n"
  "Superclass: vtkOpenGLTexture\n\n"
  "Prefilter texture is a cubemap result of integration of the input\n"
  "cubemap contribution in BRDF equation. The result depends on\n"
  "roughness coefficient so several levels of mipmap are used to store\n"
  "results of different roughness coefficients. It is used in Image Base\n"
  "Lighting to compute the specular part.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPBRPrefilterTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkPBRPrefilterTexture", // tp_name
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
  PyvtkPBRPrefilterTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPBRPrefilterTexture_StaticNew()
{
  return vtkPBRPrefilterTexture::New();
}

PyObject *PyvtkPBRPrefilterTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPBRPrefilterTexture_Type, PyvtkPBRPrefilterTexture_Methods,
    "vtkPBRPrefilterTexture",
 &PyvtkPBRPrefilterTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLTexture_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPBRPrefilterTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPBRPrefilterTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPBRPrefilterTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

