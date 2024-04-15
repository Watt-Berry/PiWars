// python wrapper for vtkVolumeOutlineSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVolumeOutlineSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVolumeOutlineSource(PyObject *dict); }
extern "C" { PyObject *PyvtkVolumeOutlineSource_ClassNew(); }


static PyObject *
PyvtkVolumeOutlineSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVolumeOutlineSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVolumeOutlineSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVolumeOutlineSource *tempr = vtkVolumeOutlineSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeOutlineSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVolumeOutlineSource::NewInstance());

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
PyvtkVolumeOutlineSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVolumeOutlineSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVolumeOutlineSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  vtkVolumeMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkVolumeMapper"))
  {
    if (ap.IsBound())
    {
      op->SetVolumeMapper(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetVolumeMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetVolumeMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVolumeMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVolumeMapper *tempr = (ap.IsBound() ?
      op->GetVolumeMapper() :
      op->vtkVolumeOutlineSource::GetVolumeMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalars(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateScalars() :
      op->vtkVolumeOutlineSource::GetGenerateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateOutline(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateOutline(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateOutlineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateOutlineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateOutlineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateOutlineOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateOutlineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateOutline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateOutline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateOutline() :
      op->vtkVolumeOutlineSource::GetGenerateOutline());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateFaces(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetGenerateFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOn();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GenerateFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateFacesOff();
    }
    else
    {
      op->vtkVolumeOutlineSource::GenerateFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetGenerateFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateFaces() :
      op->vtkVolumeOutlineSource::GetGenerateFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetColor(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOutlineSource_SetColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetColor");
  return nullptr;
}


static PyObject *
PyvtkVolumeOutlineSource_GetColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetColor() :
      op->vtkVolumeOutlineSource::GetColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneId(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActivePlaneId() :
      op->vtkVolumeOutlineSource::GetActivePlaneId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

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
      op->SetActivePlaneColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetActivePlaneColor(temp0);
    }
    else
    {
      op->vtkVolumeOutlineSource::SetActivePlaneColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVolumeOutlineSource_SetActivePlaneColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s1(self, args);
    case 1:
      return PyvtkVolumeOutlineSource_SetActivePlaneColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetActivePlaneColor");
  return nullptr;
}


static PyObject *
PyvtkVolumeOutlineSource_GetActivePlaneColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActivePlaneColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVolumeOutlineSource *op = static_cast<vtkVolumeOutlineSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetActivePlaneColor() :
      op->vtkVolumeOutlineSource::GetActivePlaneColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkVolumeOutlineSource_Methods[] = {
  {"IsTypeOf", PyvtkVolumeOutlineSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVolumeOutlineSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVolumeOutlineSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVolumeOutlineSource\nC++: static vtkVolumeOutlineSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVolumeOutlineSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVolumeOutlineSource\nC++: vtkVolumeOutlineSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVolumeOutlineSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVolumeOutlineSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVolumeMapper", PyvtkVolumeOutlineSource_SetVolumeMapper, METH_VARARGS,
   "SetVolumeMapper(self, mapper:vtkVolumeMapper) -> None\nC++: virtual void SetVolumeMapper(vtkVolumeMapper *mapper)\n\nSet the mapper that has the cropping region that the outline will\nbe generated for.  The mapper must have an input, because the\nbounds of the data must be computed in order to generate the\noutline.\n"},
  {"GetVolumeMapper", PyvtkVolumeOutlineSource_GetVolumeMapper, METH_VARARGS,
   "GetVolumeMapper(self) -> vtkVolumeMapper\nC++: vtkVolumeMapper *GetVolumeMapper()\n\n"},
  {"SetGenerateScalars", PyvtkVolumeOutlineSource_SetGenerateScalars, METH_VARARGS,
   "SetGenerateScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateScalars(vtkTypeBool _arg)\n\nSet whether to generate color scalars for the output.  By\ndefault, the output has no scalars and the color must be set in\nthe property of the actor.\n"},
  {"GenerateScalarsOn", PyvtkVolumeOutlineSource_GenerateScalarsOn, METH_VARARGS,
   "GenerateScalarsOn(self) -> None\nC++: virtual void GenerateScalarsOn()\n\n"},
  {"GenerateScalarsOff", PyvtkVolumeOutlineSource_GenerateScalarsOff, METH_VARARGS,
   "GenerateScalarsOff(self) -> None\nC++: virtual void GenerateScalarsOff()\n\n"},
  {"GetGenerateScalars", PyvtkVolumeOutlineSource_GetGenerateScalars, METH_VARARGS,
   "GetGenerateScalars(self) -> int\nC++: virtual vtkTypeBool GetGenerateScalars()\n\n"},
  {"SetGenerateOutline", PyvtkVolumeOutlineSource_SetGenerateOutline, METH_VARARGS,
   "SetGenerateOutline(self, _arg:int) -> None\nC++: virtual void SetGenerateOutline(vtkTypeBool _arg)\n\nSet whether to generate an outline wherever an input face was cut\nby a plane.  This is on by default.\n"},
  {"GenerateOutlineOn", PyvtkVolumeOutlineSource_GenerateOutlineOn, METH_VARARGS,
   "GenerateOutlineOn(self) -> None\nC++: virtual void GenerateOutlineOn()\n\n"},
  {"GenerateOutlineOff", PyvtkVolumeOutlineSource_GenerateOutlineOff, METH_VARARGS,
   "GenerateOutlineOff(self) -> None\nC++: virtual void GenerateOutlineOff()\n\n"},
  {"GetGenerateOutline", PyvtkVolumeOutlineSource_GetGenerateOutline, METH_VARARGS,
   "GetGenerateOutline(self) -> int\nC++: virtual vtkTypeBool GetGenerateOutline()\n\n"},
  {"SetGenerateFaces", PyvtkVolumeOutlineSource_SetGenerateFaces, METH_VARARGS,
   "SetGenerateFaces(self, _arg:int) -> None\nC++: virtual void SetGenerateFaces(vtkTypeBool _arg)\n\nSet whether to generate polygonal faces for the output.  By\ndefault, only lines are generated.  The faces will form a closed,\nwatertight surface.\n"},
  {"GenerateFacesOn", PyvtkVolumeOutlineSource_GenerateFacesOn, METH_VARARGS,
   "GenerateFacesOn(self) -> None\nC++: virtual void GenerateFacesOn()\n\n"},
  {"GenerateFacesOff", PyvtkVolumeOutlineSource_GenerateFacesOff, METH_VARARGS,
   "GenerateFacesOff(self) -> None\nC++: virtual void GenerateFacesOff()\n\n"},
  {"GetGenerateFaces", PyvtkVolumeOutlineSource_GetGenerateFaces, METH_VARARGS,
   "GetGenerateFaces(self) -> int\nC++: virtual vtkTypeBool GetGenerateFaces()\n\n"},
  {"SetColor", PyvtkVolumeOutlineSource_SetColor, METH_VARARGS,
   "SetColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetColor(double _arg1, double _arg2,\n    double _arg3)\nSetColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetColor(const double _arg[3])\n\nSet the color of the outline.  This has no effect unless\nGenerateScalars is On.  The default color is red.\n"},
  {"GetColor", PyvtkVolumeOutlineSource_GetColor, METH_VARARGS,
   "GetColor(self) -> (float, float, float)\nC++: virtual double *GetColor()\n\n"},
  {"SetActivePlaneId", PyvtkVolumeOutlineSource_SetActivePlaneId, METH_VARARGS,
   "SetActivePlaneId(self, _arg:int) -> None\nC++: virtual void SetActivePlaneId(int _arg)\n\nSet the active plane, e.g. to display which plane is currently\nbeing modified by an interaction.  Set this to -1 if there is no\nactive plane. The default value is -1.\n"},
  {"GetActivePlaneId", PyvtkVolumeOutlineSource_GetActivePlaneId, METH_VARARGS,
   "GetActivePlaneId(self) -> int\nC++: virtual int GetActivePlaneId()\n\n"},
  {"SetActivePlaneColor", PyvtkVolumeOutlineSource_SetActivePlaneColor, METH_VARARGS,
   "SetActivePlaneColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetActivePlaneColor(double _arg1, double _arg2,\n    double _arg3)\nSetActivePlaneColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetActivePlaneColor(const double _arg[3])\n\nSet the color of the active cropping plane.  This has no effect\nunless GenerateScalars is On and ActivePlaneId is non-negative. \nThe default color is yellow.\n"},
  {"GetActivePlaneColor", PyvtkVolumeOutlineSource_GetActivePlaneColor, METH_VARARGS,
   "GetActivePlaneColor(self) -> (float, float, float)\nC++: virtual double *GetActivePlaneColor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVolumeOutlineSource_Doc =
  "vtkVolumeOutlineSource - outline of volume cropping region\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVolumeOutlineSource generates a wireframe outline that corresponds\n"
  "to the cropping region of a vtkVolumeMapper.  It requires a\n"
  "vtkVolumeMapper as input.  The GenerateFaces option turns on the\n"
  "solid faces of the outline, and the GenerateScalars option generates\n"
  "color scalars.  When GenerateScalars is on, it is possible to set an\n"
  "\"ActivePlaneId\" value in the range [0..6] to highlight one of the six\n"
  "cropping planes.@par Thanks: Thanks to David Gobbi for contributing\n"
  "this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVolumeOutlineSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolume.vtkVolumeOutlineSource", // tp_name
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
  PyvtkVolumeOutlineSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVolumeOutlineSource_StaticNew()
{
  return vtkVolumeOutlineSource::New();
}

PyObject *PyvtkVolumeOutlineSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVolumeOutlineSource_Type, PyvtkVolumeOutlineSource_Methods,
    "vtkVolumeOutlineSource",
 &PyvtkVolumeOutlineSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVolumeOutlineSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVolumeOutlineSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVolumeOutlineSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

