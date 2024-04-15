// python wrapper for vtkImplicitImageRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitImageRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitImageRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitImageRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkImplicitPlaneRepresentation_ClassNew
extern "C" { PyObject *PyvtkImplicitPlaneRepresentation_ClassNew(); }
#define DECLARED_PyvtkImplicitPlaneRepresentation_ClassNew
#endif

static PyObject *
PyvtkImplicitImageRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitImageRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitImageRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitImageRepresentation *tempr = vtkImplicitImageRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitImageRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitImageRepresentation::NewInstance());

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
PyvtkImplicitImageRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitImageRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitImageRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_PlaceImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->PlaceImage(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::PlaceImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImplicitImageRepresentation_PlaceImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlaceImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->PlaceImage(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::PlaceImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitImageRepresentation_PlaceImage_Methods[] = {
  {"PlaceImage", PyvtkImplicitImageRepresentation_PlaceImage_s1, METH_VARARGS,
   "@V *vtkImageData"},
  {"PlaceImage", PyvtkImplicitImageRepresentation_PlaceImage_s2, METH_VARARGS,
   "@V *vtkAlgorithmOutput"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImplicitImageRepresentation_PlaceImage(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImplicitImageRepresentation_PlaceImage_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlaceImage");
  return nullptr;
}


static PyObject *
PyvtkImplicitImageRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkImplicitImageRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserControlledLookupTable(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetUserControlledLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetUserControlledLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserControlledLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUserControlledLookupTable() :
      op->vtkImplicitImageRepresentation::GetUserControlledLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_UserControlledLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOn();
    }
    else
    {
      op->vtkImplicitImageRepresentation::UserControlledLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_UserControlledLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserControlledLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserControlledLookupTableOff();
    }
    else
    {
      op->vtkImplicitImageRepresentation::UserControlledLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  vtkLookupTable *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLookupTable"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLookupTable *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImplicitImageRepresentation::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTextureInterpolate(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetTextureInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetTextureInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTextureInterpolate() :
      op->vtkImplicitImageRepresentation::GetTextureInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_TextureInterpolateOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOn();
    }
    else
    {
      op->vtkImplicitImageRepresentation::TextureInterpolateOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_TextureInterpolateOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TextureInterpolateOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TextureInterpolateOff();
    }
    else
    {
      op->vtkImplicitImageRepresentation::TextureInterpolateOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolate(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetResliceInterpolate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetResliceInterpolate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResliceInterpolate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResliceInterpolate() :
      op->vtkImplicitImageRepresentation::GetResliceInterpolate());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetResliceInterpolateToNearestNeighbour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToNearestNeighbour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToNearestNeighbour();
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetResliceInterpolateToNearestNeighbour();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetResliceInterpolateToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToLinear();
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetResliceInterpolateToLinear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetResliceInterpolateToCubic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResliceInterpolateToCubic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetResliceInterpolateToCubic();
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetResliceInterpolateToCubic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  vtkImageMapToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageMapToColors"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageMapToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkImplicitImageRepresentation::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_GetReslice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReslice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageReslice *tempr = (ap.IsBound() ?
      op->GetReslice() :
      op->vtkImplicitImageRepresentation::GetReslice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitImageRepresentation_SetCropPlaneToBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCropPlaneToBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitImageRepresentation *op = static_cast<vtkImplicitImageRepresentation *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCropPlaneToBoundingBox(temp0);
    }
    else
    {
      op->vtkImplicitImageRepresentation::SetCropPlaneToBoundingBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitImageRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkImplicitImageRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitImageRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitImageRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitImageRepresentation\nC++: static vtkImplicitImageRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitImageRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitImageRepresentation\nC++: vtkImplicitImageRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitImageRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitImageRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PlaceImage", PyvtkImplicitImageRepresentation_PlaceImage, METH_VARARGS,
   "PlaceImage(self, img:vtkImageData) -> None\nC++: void PlaceImage(vtkImageData *img)\nPlaceImage(self, aout:vtkAlgorithmOutput) -> None\nC++: void PlaceImage(vtkAlgorithmOutput *aout)\n\nVarious ways to specify the vtkImageData* input for the\nvtkImageReslice; and perform PlaceWidget().\n"},
  {"BuildRepresentation", PyvtkImplicitImageRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nMethods to interface with the vtkImplicitPlaneWidget2. Most of\nthe required methods are implemented by this class's superclass.\n"},
  {"SetUserControlledLookupTable", PyvtkImplicitImageRepresentation_SetUserControlledLookupTable, METH_VARARGS,
   "SetUserControlledLookupTable(self, _arg:bool) -> None\nC++: virtual void SetUserControlledLookupTable(bool _arg)\n\nLet the user control the lookup table. NOTE: apply this method\nBEFORE applying the SetLookupTable method. The default is Off.\n"},
  {"GetUserControlledLookupTable", PyvtkImplicitImageRepresentation_GetUserControlledLookupTable, METH_VARARGS,
   "GetUserControlledLookupTable(self) -> bool\nC++: virtual bool GetUserControlledLookupTable()\n\n"},
  {"UserControlledLookupTableOn", PyvtkImplicitImageRepresentation_UserControlledLookupTableOn, METH_VARARGS,
   "UserControlledLookupTableOn(self) -> None\nC++: virtual void UserControlledLookupTableOn()\n\n"},
  {"UserControlledLookupTableOff", PyvtkImplicitImageRepresentation_UserControlledLookupTableOff, METH_VARARGS,
   "UserControlledLookupTableOff(self) -> None\nC++: virtual void UserControlledLookupTableOff()\n\n"},
  {"SetLookupTable", PyvtkImplicitImageRepresentation_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, __a:vtkLookupTable) -> None\nC++: virtual void SetLookupTable(vtkLookupTable *)\n\nSet/Get the internal lookuptable (lut) to one defined by the\nuser, or, alternatively, to the lut of another representation or\nwidget.  In this way, a set of three orthogonal planes can share\nthe same lut so that window-levelling is performed uniformly\namong planes.  The default internal lut can be re- set/allocated\nby setting to nullptr.\n"},
  {"GetLookupTable", PyvtkImplicitImageRepresentation_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkLookupTable\nC++: virtual vtkLookupTable *GetLookupTable()\n\n"},
  {"SetTextureInterpolate", PyvtkImplicitImageRepresentation_SetTextureInterpolate, METH_VARARGS,
   "SetTextureInterpolate(self, _arg:bool) -> None\nC++: virtual void SetTextureInterpolate(bool _arg)\n\nSpecify whether to interpolate the texture or not. When off, the\nreslice interpolation is nearest neighbour regardless of how the\ninterpolation is set through the API. Set before setting the\nvtkImageData input. Default is On.\n"},
  {"GetTextureInterpolate", PyvtkImplicitImageRepresentation_GetTextureInterpolate, METH_VARARGS,
   "GetTextureInterpolate(self) -> bool\nC++: virtual bool GetTextureInterpolate()\n\n"},
  {"TextureInterpolateOn", PyvtkImplicitImageRepresentation_TextureInterpolateOn, METH_VARARGS,
   "TextureInterpolateOn(self) -> None\nC++: virtual void TextureInterpolateOn()\n\n"},
  {"TextureInterpolateOff", PyvtkImplicitImageRepresentation_TextureInterpolateOff, METH_VARARGS,
   "TextureInterpolateOff(self) -> None\nC++: virtual void TextureInterpolateOff()\n\n"},
  {"SetResliceInterpolate", PyvtkImplicitImageRepresentation_SetResliceInterpolate, METH_VARARGS,
   "SetResliceInterpolate(self, __a:int) -> None\nC++: void SetResliceInterpolate(int)\n\nSet the interpolation to use when texturing the plane.\n"},
  {"GetResliceInterpolate", PyvtkImplicitImageRepresentation_GetResliceInterpolate, METH_VARARGS,
   "GetResliceInterpolate(self) -> int\nC++: virtual int GetResliceInterpolate()\n\n"},
  {"SetResliceInterpolateToNearestNeighbour", PyvtkImplicitImageRepresentation_SetResliceInterpolateToNearestNeighbour, METH_VARARGS,
   "SetResliceInterpolateToNearestNeighbour(self) -> None\nC++: void SetResliceInterpolateToNearestNeighbour()\n\n"},
  {"SetResliceInterpolateToLinear", PyvtkImplicitImageRepresentation_SetResliceInterpolateToLinear, METH_VARARGS,
   "SetResliceInterpolateToLinear(self) -> None\nC++: void SetResliceInterpolateToLinear()\n\n"},
  {"SetResliceInterpolateToCubic", PyvtkImplicitImageRepresentation_SetResliceInterpolateToCubic, METH_VARARGS,
   "SetResliceInterpolateToCubic(self) -> None\nC++: void SetResliceInterpolateToCubic()\n\n"},
  {"SetColorMap", PyvtkImplicitImageRepresentation_SetColorMap, METH_VARARGS,
   "SetColorMap(self, __a:vtkImageMapToColors) -> None\nC++: virtual void SetColorMap(vtkImageMapToColors *)\n\nConvenience method to get the vtkImageMapToColors filter used by\nthis widget.  The user can properly render other transparent\nactors in a scene by calling the filter's SetOutputFormatToRGB\nand PassAlphaToOutputOff.\n"},
  {"GetColorMap", PyvtkImplicitImageRepresentation_GetColorMap, METH_VARARGS,
   "GetColorMap(self) -> vtkImageMapToColors\nC++: virtual vtkImageMapToColors *GetColorMap()\n\n"},
  {"GetReslice", PyvtkImplicitImageRepresentation_GetReslice, METH_VARARGS,
   "GetReslice(self) -> vtkImageReslice\nC++: virtual vtkImageReslice *GetReslice()\n\nConvenience method to get the vtkImageReslice filter used by this\nwidget.\n"},
  {"SetCropPlaneToBoundingBox", PyvtkImplicitImageRepresentation_SetCropPlaneToBoundingBox, METH_VARARGS,
   "SetCropPlaneToBoundingBox(self, __a:bool) -> None\nC++: void SetCropPlaneToBoundingBox(bool) override;\n\nThis method modifies the texture pipeline in order to generate\ntexture coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitImageRepresentation_Doc =
  "vtkImplicitImageRepresentation - a representation for a\nvtkImplicitPlaneWidget2 which reslices a volume\n\n"
  "Superclass: vtkImplicitPlaneRepresentation\n\n"
  "This class is a specialization of the vtkImplicitPlaneRepresentation.\n"
  "It is specialized to resample volumes across a plane. It is similar\n"
  "to vtkImagePlaneWidget, except the combination of\n"
  "vtkImplicitPlaneWidget2 and vtkImplicitImageRepresentation is a\n"
  "second generation widget design, with a much simpler and intuitive\n"
  "plane manipulation.\n\n"
  "See the documentation for vtkImplicitPlaneWidget2 and\n"
  "vtkImplicitPlaneRepresentation for usage information. One notable\n"
  "difference is that the methods PlaceImage() are preferred to the\n"
  "superclasses' PlaceWidget() method.\n\n"
  "@sa\n"
  "vtkImplicitPlaneWidget2 vtkImagePlaneWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitImageRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkImplicitImageRepresentation", // tp_name
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
  PyvtkImplicitImageRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitImageRepresentation_StaticNew()
{
  return vtkImplicitImageRepresentation::New();
}

PyObject *PyvtkImplicitImageRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitImageRepresentation_Type, PyvtkImplicitImageRepresentation_Methods,
    "vtkImplicitImageRepresentation",
 &PyvtkImplicitImageRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImplicitPlaneRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitImageRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitImageRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitImageRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

