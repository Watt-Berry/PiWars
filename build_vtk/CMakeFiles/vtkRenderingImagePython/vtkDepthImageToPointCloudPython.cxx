// python wrapper for vtkDepthImageToPointCloud
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDepthImageToPointCloud.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDepthImageToPointCloud(PyObject *dict); }
extern "C" { PyObject *PyvtkDepthImageToPointCloud_ClassNew(); }


static PyObject *
PyvtkDepthImageToPointCloud_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDepthImageToPointCloud::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDepthImageToPointCloud::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDepthImageToPointCloud *tempr = vtkDepthImageToPointCloud::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDepthImageToPointCloud *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDepthImageToPointCloud::NewInstance());

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
PyvtkDepthImageToPointCloud_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDepthImageToPointCloud::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDepthImageToPointCloud::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDepthImageToPointCloud::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkDepthImageToPointCloud::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkDepthImageToPointCloud::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetCullNearPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCullNearPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCullNearPoints(temp0);
    }
    else
    {
      op->vtkDepthImageToPointCloud::SetCullNearPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetCullNearPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCullNearPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCullNearPoints() :
      op->vtkDepthImageToPointCloud::GetCullNearPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_CullNearPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CullNearPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CullNearPointsOn();
    }
    else
    {
      op->vtkDepthImageToPointCloud::CullNearPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_CullNearPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CullNearPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CullNearPointsOff();
    }
    else
    {
      op->vtkDepthImageToPointCloud::CullNearPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetCullFarPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCullFarPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCullFarPoints(temp0);
    }
    else
    {
      op->vtkDepthImageToPointCloud::SetCullFarPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetCullFarPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCullFarPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCullFarPoints() :
      op->vtkDepthImageToPointCloud::GetCullFarPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_CullFarPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CullFarPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CullFarPointsOn();
    }
    else
    {
      op->vtkDepthImageToPointCloud::CullFarPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_CullFarPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CullFarPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CullFarPointsOff();
    }
    else
    {
      op->vtkDepthImageToPointCloud::CullFarPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetProduceColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceColorScalars(temp0);
    }
    else
    {
      op->vtkDepthImageToPointCloud::SetProduceColorScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetProduceColorScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceColorScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceColorScalars() :
      op->vtkDepthImageToPointCloud::GetProduceColorScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_ProduceColorScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceColorScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceColorScalarsOn();
    }
    else
    {
      op->vtkDepthImageToPointCloud::ProduceColorScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_ProduceColorScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceColorScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceColorScalarsOff();
    }
    else
    {
      op->vtkDepthImageToPointCloud::ProduceColorScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetProduceVertexCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProduceVertexCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProduceVertexCellArray(temp0);
    }
    else
    {
      op->vtkDepthImageToPointCloud::SetProduceVertexCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetProduceVertexCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProduceVertexCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetProduceVertexCellArray() :
      op->vtkDepthImageToPointCloud::GetProduceVertexCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_ProduceVertexCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceVertexCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceVertexCellArrayOn();
    }
    else
    {
      op->vtkDepthImageToPointCloud::ProduceVertexCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_ProduceVertexCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProduceVertexCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProduceVertexCellArrayOff();
    }
    else
    {
      op->vtkDepthImageToPointCloud::ProduceVertexCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

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
      op->vtkDepthImageToPointCloud::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDepthImageToPointCloud_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDepthImageToPointCloud *op = static_cast<vtkDepthImageToPointCloud *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkDepthImageToPointCloud::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDepthImageToPointCloud_Methods[] = {
  {"IsTypeOf", PyvtkDepthImageToPointCloud_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDepthImageToPointCloud_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDepthImageToPointCloud_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDepthImageToPointCloud\nC++: static vtkDepthImageToPointCloud *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDepthImageToPointCloud_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDepthImageToPointCloud\nC++: vtkDepthImageToPointCloud *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDepthImageToPointCloud_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDepthImageToPointCloud_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkDepthImageToPointCloud_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the camera.\n"},
  {"SetCamera", PyvtkDepthImageToPointCloud_SetCamera, METH_VARARGS,
   "SetCamera(self, __a:vtkCamera) -> None\nC++: void SetCamera(vtkCamera *)\n\nIndicates what camera was used to generate the depth image. The\ncamera parameters define a transformation which is used to\nperform coordinate conversion into the 3D x-y-z space of the\npoint cloud.\n"},
  {"GetCamera", PyvtkDepthImageToPointCloud_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\nReturns the camera being used to generate the point cloud from\nthe depth image.\n"},
  {"SetCullNearPoints", PyvtkDepthImageToPointCloud_SetCullNearPoints, METH_VARARGS,
   "SetCullNearPoints(self, _arg:bool) -> None\nC++: virtual void SetCullNearPoints(bool _arg)\n\nIndicate whether to cull points that are located on the near\nclipping plane. These typically are points that are part of the\nclipped foreground. By default this is disabled.\n"},
  {"GetCullNearPoints", PyvtkDepthImageToPointCloud_GetCullNearPoints, METH_VARARGS,
   "GetCullNearPoints(self) -> bool\nC++: virtual bool GetCullNearPoints()\n\n"},
  {"CullNearPointsOn", PyvtkDepthImageToPointCloud_CullNearPointsOn, METH_VARARGS,
   "CullNearPointsOn(self) -> None\nC++: virtual void CullNearPointsOn()\n\n"},
  {"CullNearPointsOff", PyvtkDepthImageToPointCloud_CullNearPointsOff, METH_VARARGS,
   "CullNearPointsOff(self) -> None\nC++: virtual void CullNearPointsOff()\n\n"},
  {"SetCullFarPoints", PyvtkDepthImageToPointCloud_SetCullFarPoints, METH_VARARGS,
   "SetCullFarPoints(self, _arg:bool) -> None\nC++: virtual void SetCullFarPoints(bool _arg)\n\nIndicate whether to cull points that are located on the far\nclipping plane. These typically are points that are part of the\nbackground. By default this is enabled.\n"},
  {"GetCullFarPoints", PyvtkDepthImageToPointCloud_GetCullFarPoints, METH_VARARGS,
   "GetCullFarPoints(self) -> bool\nC++: virtual bool GetCullFarPoints()\n\n"},
  {"CullFarPointsOn", PyvtkDepthImageToPointCloud_CullFarPointsOn, METH_VARARGS,
   "CullFarPointsOn(self) -> None\nC++: virtual void CullFarPointsOn()\n\n"},
  {"CullFarPointsOff", PyvtkDepthImageToPointCloud_CullFarPointsOff, METH_VARARGS,
   "CullFarPointsOff(self) -> None\nC++: virtual void CullFarPointsOff()\n\n"},
  {"SetProduceColorScalars", PyvtkDepthImageToPointCloud_SetProduceColorScalars, METH_VARARGS,
   "SetProduceColorScalars(self, _arg:bool) -> None\nC++: virtual void SetProduceColorScalars(bool _arg)\n\nIndicate whether to output color scalar values along with the\npoint cloud (assuming that the scalar values are available on\ninput). By default this is enabled.\n"},
  {"GetProduceColorScalars", PyvtkDepthImageToPointCloud_GetProduceColorScalars, METH_VARARGS,
   "GetProduceColorScalars(self) -> bool\nC++: virtual bool GetProduceColorScalars()\n\n"},
  {"ProduceColorScalarsOn", PyvtkDepthImageToPointCloud_ProduceColorScalarsOn, METH_VARARGS,
   "ProduceColorScalarsOn(self) -> None\nC++: virtual void ProduceColorScalarsOn()\n\n"},
  {"ProduceColorScalarsOff", PyvtkDepthImageToPointCloud_ProduceColorScalarsOff, METH_VARARGS,
   "ProduceColorScalarsOff(self) -> None\nC++: virtual void ProduceColorScalarsOff()\n\n"},
  {"SetProduceVertexCellArray", PyvtkDepthImageToPointCloud_SetProduceVertexCellArray, METH_VARARGS,
   "SetProduceVertexCellArray(self, _arg:bool) -> None\nC++: virtual void SetProduceVertexCellArray(bool _arg)\n\nIndicate whether to output a vertex cell array (i.e., Verts) in\nthe output point cloud. Some filters require this vertex cells to\nbe defined in order to execute properly. For example some mappers\nwill only render points if the vertex cells are defined.\n"},
  {"GetProduceVertexCellArray", PyvtkDepthImageToPointCloud_GetProduceVertexCellArray, METH_VARARGS,
   "GetProduceVertexCellArray(self) -> bool\nC++: virtual bool GetProduceVertexCellArray()\n\n"},
  {"ProduceVertexCellArrayOn", PyvtkDepthImageToPointCloud_ProduceVertexCellArrayOn, METH_VARARGS,
   "ProduceVertexCellArrayOn(self) -> None\nC++: virtual void ProduceVertexCellArrayOn()\n\n"},
  {"ProduceVertexCellArrayOff", PyvtkDepthImageToPointCloud_ProduceVertexCellArrayOff, METH_VARARGS,
   "ProduceVertexCellArrayOff(self) -> None\nC++: virtual void ProduceVertexCellArrayOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkDepthImageToPointCloud_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, _arg:int) -> None\nC++: virtual void SetOutputPointsPrecision(int _arg)\n\nSet the desired precision for the output points. See\nvtkAlgorithm::DesiredOutputPrecision for the available choices.\nThe default is double precision.\n"},
  {"GetOutputPointsPrecision", PyvtkDepthImageToPointCloud_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: virtual int GetOutputPointsPrecision()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDepthImageToPointCloud_Doc =
  "vtkDepthImageToPointCloud - convert a depth image into a point cloud\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDepthImageToPointCloud is a filter that acquires its input from a\n"
  "depth image and converts it to point cloud represented as a\n"
  "vtkPolyData. This can then be used in a visualization pipeline.\n\n"
  "The filter takes two input images, one of which is optional. The\n"
  "first image is a (required) depth image containing z-buffer values.\n"
  "The second image is an (optional) scalar image. The information in\n"
  "the z-buffer image, plus a specified camera, is used to generate\n"
  "x-y-z coordinates of the output point cloud (i.e., the points in a\n"
  "vtkPolyData). The second scalar image is (optionally) output as\n"
  "scalars to the output point cloud. Note that the depth image must be\n"
  "a single component image, with values ranging between the near and\n"
  "far clipping range [-1,1].\n\n"
  "Note that if only a single input is provided, then the input is\n"
  "interpreted in one of two ways. First, if the \"ZBuffer\" point data is\n"
  "provided, then the input image is assumed to be color scalars with\n"
  "the depth data provided in the \"ZBuffer\" data array. (This is\n"
  "consistent with the vtkRendererSource filter with DepthValues\n"
  "enabled.) Otherwise, the input image is assumed to be a depth image.\n\n"
  "It is (optionally) possible to cull points located on the near and\n"
  "far clipping planes. This may better simulate the generation of a\n"
  "scanned object point cloud.\n\n"
  "@warning\n"
  "For the camera to transform the image depths into a point cloud, this\n"
  "filter makes assumptions about the origin of the depth image (and\n"
  "associated color scalar image). This class performs point by point\n"
  "transformation. The view matrix is used to transform each pixel.\n"
  "IMPORTANT NOTE: The transformation occurs by normalizing the image\n"
  "pixels into the (-1,1) view space (depth values are passed through).\n"
  "The process follows the vtkCoordinate class which is the standard for\n"
  "VTK rendering transformations. Subtle differences in whether the\n"
  "lower left pixel origin are at the center of the pixel versus the\n"
  "lower-left corner of the pixel will make slight differences in how\n"
  "pixels are transformed. (Similarly for the upper right pixel as\n"
  "well). This half pixel difference can cause transformation issues.\n"
  "(The code is commented appropriately.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkRendererSource vtkWindowToImageFilter vtkCamera vtkPolyData\n"
  "vtkCoordinate\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDepthImageToPointCloud_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingImage.vtkDepthImageToPointCloud", // tp_name
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
  PyvtkDepthImageToPointCloud_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDepthImageToPointCloud_StaticNew()
{
  return vtkDepthImageToPointCloud::New();
}

PyObject *PyvtkDepthImageToPointCloud_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDepthImageToPointCloud_Type, PyvtkDepthImageToPointCloud_Methods,
    "vtkDepthImageToPointCloud",
 &PyvtkDepthImageToPointCloud_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDepthImageToPointCloud(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDepthImageToPointCloud_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDepthImageToPointCloud", o) != 0)
  {
    Py_DECREF(o);
  }

}

