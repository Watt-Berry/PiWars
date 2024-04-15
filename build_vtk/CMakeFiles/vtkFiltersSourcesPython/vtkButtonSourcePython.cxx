// python wrapper for vtkButtonSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkButtonSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkButtonSource(PyObject *dict); }
extern "C" { PyObject *PyvtkButtonSource_ClassNew(); }


static PyObject *
PyvtkButtonSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkButtonSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkButtonSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkButtonSource *tempr = vtkButtonSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkButtonSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkButtonSource::NewInstance());

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
PyvtkButtonSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkButtonSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkButtonSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

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
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkButtonSource::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkButtonSource::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkButtonSource_SetCenter_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkButtonSource_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkButtonSource::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyle(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTextureStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMinValue() :
      op->vtkButtonSource::GetTextureStyleMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyleMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyleMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyleMaxValue() :
      op->vtkButtonSource::GetTextureStyleMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTextureStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTextureStyle() :
      op->vtkButtonSource::GetTextureStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToFitImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToFitImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyleToFitImage();
    }
    else
    {
      op->vtkButtonSource::SetTextureStyleToFitImage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureStyleToProportional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureStyleToProportional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetTextureStyleToProportional();
    }
    else
    {
      op->vtkButtonSource::SetTextureStyleToProportional();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTextureDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0, temp1);
    }
    else
    {
      op->vtkButtonSource::SetTextureDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTextureDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetTextureDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkButtonSource_SetTextureDimensions_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetTextureDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureDimensions");
  return nullptr;
}


static PyObject *
PyvtkButtonSource_GetTextureDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTextureDimensions() :
      op->vtkButtonSource::GetTextureDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetShoulderTextureCoordinate(temp0, temp1);
    }
    else
    {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetShoulderTextureCoordinate(temp0);
    }
    else
    {
      op->vtkButtonSource::SetShoulderTextureCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkButtonSource_SetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s1(self, args);
    case 1:
      return PyvtkButtonSource_SetShoulderTextureCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShoulderTextureCoordinate");
  return nullptr;
}


static PyObject *
PyvtkButtonSource_GetShoulderTextureCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShoulderTextureCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetShoulderTextureCoordinate() :
      op->vtkButtonSource::GetShoulderTextureCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_SetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTwoSided(temp0);
    }
    else
    {
      op->vtkButtonSource::SetTwoSided(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_GetTwoSided(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTwoSided");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTwoSided() :
      op->vtkButtonSource::GetTwoSided());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedOn();
    }
    else
    {
      op->vtkButtonSource::TwoSidedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkButtonSource_TwoSidedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TwoSidedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkButtonSource *op = static_cast<vtkButtonSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TwoSidedOff();
    }
    else
    {
      op->vtkButtonSource::TwoSidedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkButtonSource_Methods[] = {
  {"IsTypeOf", PyvtkButtonSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkButtonSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkButtonSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkButtonSource\nC++: static vtkButtonSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkButtonSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkButtonSource\nC++: vtkButtonSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkButtonSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkButtonSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkButtonSource_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSpecify a point defining the origin (center) of the button.\n"},
  {"GetCenter", PyvtkButtonSource_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"SetTextureStyle", PyvtkButtonSource_SetTextureStyle, METH_VARARGS,
   "SetTextureStyle(self, _arg:int) -> None\nC++: virtual void SetTextureStyle(int _arg)\n\nSet/Get the style of the texture region: whether to size it\naccording to the x-y dimensions of the texture, or whether to\nmake the texture region proportional to the width/height of the\nbutton.\n"},
  {"GetTextureStyleMinValue", PyvtkButtonSource_GetTextureStyleMinValue, METH_VARARGS,
   "GetTextureStyleMinValue(self) -> int\nC++: virtual int GetTextureStyleMinValue()\n\n"},
  {"GetTextureStyleMaxValue", PyvtkButtonSource_GetTextureStyleMaxValue, METH_VARARGS,
   "GetTextureStyleMaxValue(self) -> int\nC++: virtual int GetTextureStyleMaxValue()\n\n"},
  {"GetTextureStyle", PyvtkButtonSource_GetTextureStyle, METH_VARARGS,
   "GetTextureStyle(self) -> int\nC++: virtual int GetTextureStyle()\n\n"},
  {"SetTextureStyleToFitImage", PyvtkButtonSource_SetTextureStyleToFitImage, METH_VARARGS,
   "SetTextureStyleToFitImage(self) -> None\nC++: void SetTextureStyleToFitImage()\n\n"},
  {"SetTextureStyleToProportional", PyvtkButtonSource_SetTextureStyleToProportional, METH_VARARGS,
   "SetTextureStyleToProportional(self) -> None\nC++: void SetTextureStyleToProportional()\n\n"},
  {"SetTextureDimensions", PyvtkButtonSource_SetTextureDimensions, METH_VARARGS,
   "SetTextureDimensions(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTextureDimensions(int _arg1, int _arg2)\nSetTextureDimensions(self, _arg:(int, int)) -> None\nC++: void SetTextureDimensions(const int _arg[2])\n\nSet/get the texture dimension. This needs to be set if the\ntexture style is set to fit the image.\n"},
  {"GetTextureDimensions", PyvtkButtonSource_GetTextureDimensions, METH_VARARGS,
   "GetTextureDimensions(self) -> (int, int)\nC++: virtual int *GetTextureDimensions()\n\n"},
  {"SetShoulderTextureCoordinate", PyvtkButtonSource_SetShoulderTextureCoordinate, METH_VARARGS,
   "SetShoulderTextureCoordinate(self, _arg1:float, _arg2:float)\n    -> None\nC++: virtual void SetShoulderTextureCoordinate(double _arg1,\n    double _arg2)\nSetShoulderTextureCoordinate(self, _arg:(float, float)) -> None\nC++: void SetShoulderTextureCoordinate(const double _arg[2])\n\nSet/Get the default texture coordinate to set the shoulder region\nto.\n"},
  {"GetShoulderTextureCoordinate", PyvtkButtonSource_GetShoulderTextureCoordinate, METH_VARARGS,
   "GetShoulderTextureCoordinate(self) -> (float, float)\nC++: virtual double *GetShoulderTextureCoordinate()\n\n"},
  {"SetTwoSided", PyvtkButtonSource_SetTwoSided, METH_VARARGS,
   "SetTwoSided(self, _arg:int) -> None\nC++: virtual void SetTwoSided(vtkTypeBool _arg)\n\nIndicate whether the button is single or double sided. A double\nsided button can be viewed from two sides...it looks sort of like\na \"pill.\" A single-sided button is meant to viewed from a single\nside; it looks like a \"clam-shell.\"\n"},
  {"GetTwoSided", PyvtkButtonSource_GetTwoSided, METH_VARARGS,
   "GetTwoSided(self) -> int\nC++: virtual vtkTypeBool GetTwoSided()\n\n"},
  {"TwoSidedOn", PyvtkButtonSource_TwoSidedOn, METH_VARARGS,
   "TwoSidedOn(self) -> None\nC++: virtual void TwoSidedOn()\n\n"},
  {"TwoSidedOff", PyvtkButtonSource_TwoSidedOff, METH_VARARGS,
   "TwoSidedOff(self) -> None\nC++: virtual void TwoSidedOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkButtonSource_Doc =
  "vtkButtonSource - abstract class for creating various button types\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkButtonSource is an abstract class that defines an API for creating\n"
  "\"button-like\" objects in VTK. A button is a geometry with a\n"
  "rectangular region that can be textured. The button is divided into\n"
  "two regions: the texture region and the shoulder region. The points\n"
  "in both regions are assigned texture coordinates. The texture region\n"
  "has texture coordinates consistent with the image to be placed on it.\n"
  " All points in the shoulder regions are assigned a texture coordinate\n"
  "specified by the user.  In this way the shoulder region can be\n"
  "colored by the texture.\n\n"
  "Creating a vtkButtonSource requires specifying its center point.\n"
  "(Subclasses have other attributes that must be set to control the\n"
  "shape of the button.) You must also specify how to control the shape\n"
  "of the texture region; i.e., whether to size the texture region\n"
  "proportional to the texture dimensions or whether to size the texture\n"
  "region proportional to the button. Also, buttons can be created\n"
  "single sided are mirrored to create two-sided buttons.\n\n"
  "@sa\n"
  "vtkEllipticalButtonSource vtkRectangularButtonSource\n\n"
  "@warning\n"
  "The button is defined in the x-y plane. Use\n"
  "vtkTransformPolyDataFilter or vtkGlyph3D to orient the button in a\n"
  "different direction.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkButtonSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkButtonSource", // tp_name
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
  PyvtkButtonSource_Doc, // tp_doc
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

PyObject *PyvtkButtonSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkButtonSource_Type, PyvtkButtonSource_Methods,
    "vtkButtonSource",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkButtonSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkButtonSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkButtonSource", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "VTK_TEXTURE_STYLE_FIT_IMAGE", 0 },
        { "VTK_TEXTURE_STYLE_PROPORTIONAL", 1 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

