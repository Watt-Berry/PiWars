// python wrapper for vtkNIFTIImageWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkNIFTIImageWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkNIFTIImageWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkNIFTIImageWriter_ClassNew(); }

#ifndef DECLARED_PyvtkImageWriter_ClassNew
extern "C" { PyObject *PyvtkImageWriter_ClassNew(); }
#define DECLARED_PyvtkImageWriter_ClassNew
#endif

static PyObject *
PyvtkNIFTIImageWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkNIFTIImageWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkNIFTIImageWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkNIFTIImageWriter *tempr = vtkNIFTIImageWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNIFTIImageWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkNIFTIImageWriter::NewInstance());

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
PyvtkNIFTIImageWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkNIFTIImageWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkNIFTIImageWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetNIFTIVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNIFTIVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNIFTIVersion(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetNIFTIVersion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetNIFTIVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNIFTIVersion() :
      op->vtkNIFTIImageWriter::GetNIFTIVersion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescription(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetDescription(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDescription() :
      op->vtkNIFTIImageWriter::GetDescription());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTimeDimension() :
      op->vtkNIFTIImageWriter::GetTimeDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetTimeDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeDimension(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetTimeDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeSpacing() :
      op->vtkNIFTIImageWriter::GetTimeSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetTimeSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeSpacing(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetTimeSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleSlope(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetRescaleSlope(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetRescaleSlope(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleSlope");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleSlope() :
      op->vtkNIFTIImageWriter::GetRescaleSlope());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRescaleIntercept(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetRescaleIntercept(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetRescaleIntercept(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRescaleIntercept");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRescaleIntercept() :
      op->vtkNIFTIImageWriter::GetRescaleIntercept());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetPlanarRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlanarRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPlanarRGB() :
      op->vtkNIFTIImageWriter::GetPlanarRGB());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetPlanarRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanarRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlanarRGB(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetPlanarRGB(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_PlanarRGBOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlanarRGBOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlanarRGBOn();
    }
    else
    {
      op->vtkNIFTIImageWriter::PlanarRGBOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_PlanarRGBOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlanarRGBOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlanarRGBOff();
    }
    else
    {
      op->vtkNIFTIImageWriter::PlanarRGBOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQFac(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetQFac(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetQFac(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFac");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFac() :
      op->vtkNIFTIImageWriter::GetQFac());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetQFormMatrix(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetQFormMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetQFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetQFormMatrix() :
      op->vtkNIFTIImageWriter::GetQFormMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetSFormMatrix(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetSFormMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetSFormMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSFormMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetSFormMatrix() :
      op->vtkNIFTIImageWriter::GetSFormMatrix());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_SetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  vtkNIFTIImageHeader *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkNIFTIImageHeader"))
  {
    if (ap.IsBound())
    {
      op->SetNIFTIHeader(temp0);
    }
    else
    {
      op->vtkNIFTIImageWriter::SetNIFTIHeader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkNIFTIImageWriter_GetNIFTIHeader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNIFTIHeader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkNIFTIImageWriter *op = static_cast<vtkNIFTIImageWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkNIFTIImageHeader *tempr = (ap.IsBound() ?
      op->GetNIFTIHeader() :
      op->vtkNIFTIImageWriter::GetNIFTIHeader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkNIFTIImageWriter_Methods[] = {
  {"IsTypeOf", PyvtkNIFTIImageWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkNIFTIImageWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkNIFTIImageWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkNIFTIImageWriter\nC++: static vtkNIFTIImageWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkNIFTIImageWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkNIFTIImageWriter\nC++: vtkNIFTIImageWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkNIFTIImageWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkNIFTIImageWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNIFTIVersion", PyvtkNIFTIImageWriter_SetNIFTIVersion, METH_VARARGS,
   "SetNIFTIVersion(self, _arg:int) -> None\nC++: virtual void SetNIFTIVersion(int _arg)\n\nSet the version number for the NIfTI file format to use. This can\nbe 1, 2, or 0 (the default).  If set to zero, then it will save\nas NIfTI version 1 unless SetNIFTIHeader() provided header\ninformation from a NIfTI version 2 file.\n"},
  {"GetNIFTIVersion", PyvtkNIFTIImageWriter_GetNIFTIVersion, METH_VARARGS,
   "GetNIFTIVersion(self) -> int\nC++: virtual int GetNIFTIVersion()\n\n"},
  {"SetDescription", PyvtkNIFTIImageWriter_SetDescription, METH_VARARGS,
   "SetDescription(self, _arg:str) -> None\nC++: virtual void SetDescription(const char *_arg)\n\nSet a short description (max 80 chars) of how the file was\nproduced. The default description is \"VTKX.Y\" where X.Y is the\nVTK version.\n"},
  {"GetDescription", PyvtkNIFTIImageWriter_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: virtual char *GetDescription()\n\n"},
  {"GetTimeDimension", PyvtkNIFTIImageWriter_GetTimeDimension, METH_VARARGS,
   "GetTimeDimension(self) -> int\nC++: virtual int GetTimeDimension()\n\nSet the time dimension to use in the NIFTI file (or zero if\nnone). The number of components of the input data must be\ndivisible by the time dimension if the time dimension is not set\nto zero.  The vector dimension will be set to the number of\ncomponents divided by the time dimension.\n"},
  {"SetTimeDimension", PyvtkNIFTIImageWriter_SetTimeDimension, METH_VARARGS,
   "SetTimeDimension(self, _arg:int) -> None\nC++: virtual void SetTimeDimension(int _arg)\n\n"},
  {"GetTimeSpacing", PyvtkNIFTIImageWriter_GetTimeSpacing, METH_VARARGS,
   "GetTimeSpacing(self) -> float\nC++: virtual double GetTimeSpacing()\n\n"},
  {"SetTimeSpacing", PyvtkNIFTIImageWriter_SetTimeSpacing, METH_VARARGS,
   "SetTimeSpacing(self, _arg:float) -> None\nC++: virtual void SetTimeSpacing(double _arg)\n\n"},
  {"SetRescaleSlope", PyvtkNIFTIImageWriter_SetRescaleSlope, METH_VARARGS,
   "SetRescaleSlope(self, _arg:float) -> None\nC++: virtual void SetRescaleSlope(double _arg)\n\nSet the slope and intercept for calibrating the scalar values.\nOther programs that read the NIFTI file can use the equation v =\nu*RescaleSlope + RescaleIntercept to rescale the data to real\nvalues.  If both the slope and the intercept are zero, then the\nSclSlope and SclIntercept in the header info provided via\nSetNIFTIHeader() are used instead.\n"},
  {"GetRescaleSlope", PyvtkNIFTIImageWriter_GetRescaleSlope, METH_VARARGS,
   "GetRescaleSlope(self) -> float\nC++: virtual double GetRescaleSlope()\n\n"},
  {"SetRescaleIntercept", PyvtkNIFTIImageWriter_SetRescaleIntercept, METH_VARARGS,
   "SetRescaleIntercept(self, _arg:float) -> None\nC++: virtual void SetRescaleIntercept(double _arg)\n\n"},
  {"GetRescaleIntercept", PyvtkNIFTIImageWriter_GetRescaleIntercept, METH_VARARGS,
   "GetRescaleIntercept(self) -> float\nC++: virtual double GetRescaleIntercept()\n\n"},
  {"GetPlanarRGB", PyvtkNIFTIImageWriter_GetPlanarRGB, METH_VARARGS,
   "GetPlanarRGB(self) -> bool\nC++: virtual bool GetPlanarRGB()\n\nWrite planar RGB (separate R, G, and B planes), rather than\npacked RGB. Use this option with extreme caution: the NIFTI\nstandard requires RGB pixels to be packed.  The Analyze format,\nhowever, was used to store both planar RGB and packed RGB\ndepending on the software, without any indication in the header\nabout which convention was being used.\n"},
  {"SetPlanarRGB", PyvtkNIFTIImageWriter_SetPlanarRGB, METH_VARARGS,
   "SetPlanarRGB(self, _arg:bool) -> None\nC++: virtual void SetPlanarRGB(bool _arg)\n\n"},
  {"PlanarRGBOn", PyvtkNIFTIImageWriter_PlanarRGBOn, METH_VARARGS,
   "PlanarRGBOn(self) -> None\nC++: virtual void PlanarRGBOn()\n\n"},
  {"PlanarRGBOff", PyvtkNIFTIImageWriter_PlanarRGBOff, METH_VARARGS,
   "PlanarRGBOff(self) -> None\nC++: virtual void PlanarRGBOff()\n\n"},
  {"SetQFac", PyvtkNIFTIImageWriter_SetQFac, METH_VARARGS,
   "SetQFac(self, _arg:float) -> None\nC++: virtual void SetQFac(double _arg)\n\nThe QFac sets the ordering of the slices in the NIFTI file. If\nQFac is -1, then the slice ordering in the file will be reversed\nas compared to VTK. Use with caution.\n"},
  {"GetQFac", PyvtkNIFTIImageWriter_GetQFac, METH_VARARGS,
   "GetQFac(self) -> float\nC++: virtual double GetQFac()\n\n"},
  {"SetQFormMatrix", PyvtkNIFTIImageWriter_SetQFormMatrix, METH_VARARGS,
   "SetQFormMatrix(self, __a:vtkMatrix4x4) -> None\nC++: void SetQFormMatrix(vtkMatrix4x4 *)\n\nSet the \"qform\" orientation and offset for the image data. The\n3x3 portion of the matrix must be orthonormal and have a positive\ndeterminant, it will be used to compute the quaternion. The last\ncolumn of the matrix will be used for the offset. In the NIFTI\nheader, the qform_code will be set to 1.\n"},
  {"GetQFormMatrix", PyvtkNIFTIImageWriter_GetQFormMatrix, METH_VARARGS,
   "GetQFormMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetQFormMatrix()\n\n"},
  {"SetSFormMatrix", PyvtkNIFTIImageWriter_SetSFormMatrix, METH_VARARGS,
   "SetSFormMatrix(self, __a:vtkMatrix4x4) -> None\nC++: void SetSFormMatrix(vtkMatrix4x4 *)\n\nSet a matrix for the \"sform\" transformation stored in the file.\nUnlike the qform matrix, the sform matrix can contain scaling\ninformation.  Before being stored in the NIFTI header, the first\nthree columns of the matrix will be multiplied by the voxel\nspacing. In the NIFTI header, the sform_code will be set to 2.\n"},
  {"GetSFormMatrix", PyvtkNIFTIImageWriter_GetSFormMatrix, METH_VARARGS,
   "GetSFormMatrix(self) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetSFormMatrix()\n\n"},
  {"SetNIFTIHeader", PyvtkNIFTIImageWriter_SetNIFTIHeader, METH_VARARGS,
   "SetNIFTIHeader(self, hdr:vtkNIFTIImageHeader) -> None\nC++: void SetNIFTIHeader(vtkNIFTIImageHeader *hdr)\n\nSet the NIFTI header information to use when writing the file.\nThe data dimensions and pixdim from the supplied header will be\nignored.  Likewise, the QForm and SForm information in the\nsupplied header will be ignored if you have called\nSetQFormMatrix() or SetSFormMatrix() to provide the orientation\ninformation for the file.\n"},
  {"GetNIFTIHeader", PyvtkNIFTIImageWriter_GetNIFTIHeader, METH_VARARGS,
   "GetNIFTIHeader(self) -> vtkNIFTIImageHeader\nC++: vtkNIFTIImageHeader *GetNIFTIHeader()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkNIFTIImageWriter_Doc =
  "vtkNIFTIImageWriter - Write NIfTI-1 and NIfTI-2 medical image files\n\n"
  "Superclass: vtkImageWriter\n\n"
  "This class writes NIFTI files, either in .nii format or as separate\n"
  ".img and .hdr files.  If told to write a file that ends in \".gz\",\n"
  "then the writer will automatically compress the file with zlib.\n"
  "Images of type unsigned char that have 3 or 4 scalar components will\n"
  "automatically be written as RGB or RGBA respectively.  Images of type\n"
  "float or double that have 2 components will automatically be written\n"
  "as complex values.@par Thanks: This class was contributed to VTK by\n"
  "the Calgary Image Processing and Analysis Centre (CIPAC).\n"
  "@sa\n"
  "vtkNIFTIImageReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkNIFTIImageWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkNIFTIImageWriter", // tp_name
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
  PyvtkNIFTIImageWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkNIFTIImageWriter_StaticNew()
{
  return vtkNIFTIImageWriter::New();
}

PyObject *PyvtkNIFTIImageWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkNIFTIImageWriter_Type, PyvtkNIFTIImageWriter_Methods,
    "vtkNIFTIImageWriter",
 &PyvtkNIFTIImageWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageWriter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkNIFTIImageWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkNIFTIImageWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkNIFTIImageWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

