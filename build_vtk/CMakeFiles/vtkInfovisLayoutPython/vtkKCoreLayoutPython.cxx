// python wrapper for vtkKCoreLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKCoreLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKCoreLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkKCoreLayout_ClassNew(); }


static PyObject *
PyvtkKCoreLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKCoreLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKCoreLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKCoreLayout *tempr = vtkKCoreLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKCoreLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKCoreLayout::NewInstance());

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
PyvtkKCoreLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKCoreLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKCoreLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetGraphConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraphConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetGraphConnection(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetGraphConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkKCoreLayout::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetKCoreLabelArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKCoreLabelArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKCoreLabelArrayName(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetKCoreLabelArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetPolar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPolar() :
      op->vtkKCoreLayout::GetPolar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetPolar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolar(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetPolar(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_PolarOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarOn();
    }
    else
    {
      op->vtkKCoreLayout::PolarOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_PolarOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolarOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PolarOff();
    }
    else
    {
      op->vtkKCoreLayout::PolarOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetCartesian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCartesian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCartesian() :
      op->vtkKCoreLayout::GetCartesian());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetCartesian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCartesian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCartesian(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetCartesian(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_CartesianOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CartesianOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CartesianOn();
    }
    else
    {
      op->vtkKCoreLayout::CartesianOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_CartesianOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CartesianOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CartesianOff();
    }
    else
    {
      op->vtkKCoreLayout::CartesianOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetPolarCoordsRadiusArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarCoordsRadiusArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarCoordsRadiusArrayName(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetPolarCoordsRadiusArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetPolarCoordsRadiusArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarCoordsRadiusArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPolarCoordsRadiusArrayName() :
      op->vtkKCoreLayout::GetPolarCoordsRadiusArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetPolarCoordsAngleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPolarCoordsAngleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPolarCoordsAngleArrayName(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetPolarCoordsAngleArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetPolarCoordsAngleArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPolarCoordsAngleArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetPolarCoordsAngleArrayName() :
      op->vtkKCoreLayout::GetPolarCoordsAngleArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetCartesianCoordsXArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCartesianCoordsXArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCartesianCoordsXArrayName(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetCartesianCoordsXArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetCartesianCoordsXArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCartesianCoordsXArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCartesianCoordsXArrayName() :
      op->vtkKCoreLayout::GetCartesianCoordsXArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetCartesianCoordsYArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCartesianCoordsYArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCartesianCoordsYArrayName(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetCartesianCoordsYArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetCartesianCoordsYArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCartesianCoordsYArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetCartesianCoordsYArrayName() :
      op->vtkKCoreLayout::GetCartesianCoordsYArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEpsilon(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetEpsilon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetEpsilon() :
      op->vtkKCoreLayout::GetEpsilon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_SetUnitRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUnitRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUnitRadius(temp0);
    }
    else
    {
      op->vtkKCoreLayout::SetUnitRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKCoreLayout_GetUnitRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUnitRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKCoreLayout *op = static_cast<vtkKCoreLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetUnitRadius() :
      op->vtkKCoreLayout::GetUnitRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKCoreLayout_Methods[] = {
  {"IsTypeOf", PyvtkKCoreLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKCoreLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKCoreLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKCoreLayout\nC++: static vtkKCoreLayout *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKCoreLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKCoreLayout\nC++: vtkKCoreLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKCoreLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKCoreLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraphConnection", PyvtkKCoreLayout_SetGraphConnection, METH_VARARGS,
   "SetGraphConnection(self, __a:vtkAlgorithmOutput) -> None\nC++: void SetGraphConnection(vtkAlgorithmOutput *)\n\nConvenience function provided for setting the graph input.\n"},
  {"FillInputPortInformation", PyvtkKCoreLayout_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"SetKCoreLabelArrayName", PyvtkKCoreLayout_SetKCoreLabelArrayName, METH_VARARGS,
   "SetKCoreLabelArrayName(self, _arg:str) -> None\nC++: virtual void SetKCoreLabelArrayName(const char *_arg)\n\nSet the name of the vertex attribute array storing k-core labels.\nDefault: kcore\n"},
  {"GetPolar", PyvtkKCoreLayout_GetPolar, METH_VARARGS,
   "GetPolar(self) -> bool\nC++: virtual bool GetPolar()\n\nOutput polar coordinates for vertices if True.  Default column\nnames are coord_radius, coord_angle. Default: False\n"},
  {"SetPolar", PyvtkKCoreLayout_SetPolar, METH_VARARGS,
   "SetPolar(self, _arg:bool) -> None\nC++: virtual void SetPolar(bool _arg)\n\n"},
  {"PolarOn", PyvtkKCoreLayout_PolarOn, METH_VARARGS,
   "PolarOn(self) -> None\nC++: virtual void PolarOn()\n\n"},
  {"PolarOff", PyvtkKCoreLayout_PolarOff, METH_VARARGS,
   "PolarOff(self) -> None\nC++: virtual void PolarOff()\n\n"},
  {"GetCartesian", PyvtkKCoreLayout_GetCartesian, METH_VARARGS,
   "GetCartesian(self) -> bool\nC++: virtual bool GetCartesian()\n\nSet whether or not to convert output to cartesian coordinates. \nIf false, coordinates will be returned in polar coordinates\n(radius, angle). Default: True\n"},
  {"SetCartesian", PyvtkKCoreLayout_SetCartesian, METH_VARARGS,
   "SetCartesian(self, _arg:bool) -> None\nC++: virtual void SetCartesian(bool _arg)\n\n"},
  {"CartesianOn", PyvtkKCoreLayout_CartesianOn, METH_VARARGS,
   "CartesianOn(self) -> None\nC++: virtual void CartesianOn()\n\n"},
  {"CartesianOff", PyvtkKCoreLayout_CartesianOff, METH_VARARGS,
   "CartesianOff(self) -> None\nC++: virtual void CartesianOff()\n\n"},
  {"SetPolarCoordsRadiusArrayName", PyvtkKCoreLayout_SetPolarCoordsRadiusArrayName, METH_VARARGS,
   "SetPolarCoordsRadiusArrayName(self, _arg:str) -> None\nC++: virtual void SetPolarCoordsRadiusArrayName(const char *_arg)\n\nPolar coordinates array name for radius values. This is only used\nif OutputCartesianCoordinates is False. Default: coord_radius\n"},
  {"GetPolarCoordsRadiusArrayName", PyvtkKCoreLayout_GetPolarCoordsRadiusArrayName, METH_VARARGS,
   "GetPolarCoordsRadiusArrayName(self) -> str\nC++: virtual char *GetPolarCoordsRadiusArrayName()\n\n"},
  {"SetPolarCoordsAngleArrayName", PyvtkKCoreLayout_SetPolarCoordsAngleArrayName, METH_VARARGS,
   "SetPolarCoordsAngleArrayName(self, _arg:str) -> None\nC++: virtual void SetPolarCoordsAngleArrayName(const char *_arg)\n\nPolar coordinates array name for angle values in radians. This is\nonly used if OutputCartesianCoordinates is False. Default:\ncoord_angle\n"},
  {"GetPolarCoordsAngleArrayName", PyvtkKCoreLayout_GetPolarCoordsAngleArrayName, METH_VARARGS,
   "GetPolarCoordsAngleArrayName(self) -> str\nC++: virtual char *GetPolarCoordsAngleArrayName()\n\n"},
  {"SetCartesianCoordsXArrayName", PyvtkKCoreLayout_SetCartesianCoordsXArrayName, METH_VARARGS,
   "SetCartesianCoordsXArrayName(self, _arg:str) -> None\nC++: virtual void SetCartesianCoordsXArrayName(const char *_arg)\n\nCartesian coordinates array name for the X coordinates. This is\nonly used if OutputCartesianCoordinates is True. Default: coord_x\n"},
  {"GetCartesianCoordsXArrayName", PyvtkKCoreLayout_GetCartesianCoordsXArrayName, METH_VARARGS,
   "GetCartesianCoordsXArrayName(self) -> str\nC++: virtual char *GetCartesianCoordsXArrayName()\n\n"},
  {"SetCartesianCoordsYArrayName", PyvtkKCoreLayout_SetCartesianCoordsYArrayName, METH_VARARGS,
   "SetCartesianCoordsYArrayName(self, _arg:str) -> None\nC++: virtual void SetCartesianCoordsYArrayName(const char *_arg)\n\nCartesian coordinates array name for the Y coordinates. This is\nonly used if OutputCartesianCoordinates is True. Default: coord_y\n"},
  {"GetCartesianCoordsYArrayName", PyvtkKCoreLayout_GetCartesianCoordsYArrayName, METH_VARARGS,
   "GetCartesianCoordsYArrayName(self) -> str\nC++: virtual char *GetCartesianCoordsYArrayName()\n\n"},
  {"SetEpsilon", PyvtkKCoreLayout_SetEpsilon, METH_VARARGS,
   "SetEpsilon(self, _arg:float) -> None\nC++: virtual void SetEpsilon(float _arg)\n\nEpsilon value used in the algorithm. Default = 0.2\n"},
  {"GetEpsilon", PyvtkKCoreLayout_GetEpsilon, METH_VARARGS,
   "GetEpsilon(self) -> float\nC++: virtual float GetEpsilon()\n\n"},
  {"SetUnitRadius", PyvtkKCoreLayout_SetUnitRadius, METH_VARARGS,
   "SetUnitRadius(self, _arg:float) -> None\nC++: virtual void SetUnitRadius(float _arg)\n\nUnit Radius value used in the algorithm. Default = 1.0\n"},
  {"GetUnitRadius", PyvtkKCoreLayout_GetUnitRadius, METH_VARARGS,
   "GetUnitRadius(self) -> float\nC++: virtual float GetUnitRadius()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKCoreLayout_Doc =
  "vtkKCoreLayout - Produces a layout for a graph labeled with K-Core\n                       information.\n\n"
  "Superclass: vtkGraphAlgorithm\n\n"
  "vtkKCoreLayout creates coordinates for each vertex that can be used\n"
  "to perform a layout for a k-core view. Prerequisite:  Vertices must\n"
  "have an attribute array containing their\n"
  "               k-core number.  This layout is based on the algorithm\n"
  "               described in the paper: \"k-core decomposition: a tool\n"
  "               for the visualization of large scale networks\", by\n"
  "               Ignacio Alvarez-Hamelin et. al.\n\n\n"
  "               This graph algorithm appends either polar coordinates\n"
  "or cartesian coordinates\n"
  "               as vertex attributes to the graph giving the position\n"
  "of the vertex in a layout.\n"
  "               Input graphs must have the k-core number assigned to\n"
  "each vertex (default\n"
  "               attribute array storing kcore numbers is \"kcore\").\n\n\n"
  "               Epsilon - this factor is used to adjust the amount\n"
  "vertices are 'pulled' out of\n"
  "                         their default ring radius based on the\n"
  "number of neighbors in higher\n"
  "                         cores.  Default=0.2\n"
  "               UnitRadius - Tweaks the base unit radius value. \n"
  "Default=1.0\n\n\n"
  "               Still TODO: Still need to work on the\n"
  "connected-components within each shell and\n"
  "                           associated layout issues with that.\n\n"
  "Input port 0: graph\n\n"
  "@par Thanks: Thanks to William McLendon from Sandia National\n"
  "Laboratories for providing this implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKCoreLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkKCoreLayout", // tp_name
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
  PyvtkKCoreLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKCoreLayout_StaticNew()
{
  return vtkKCoreLayout::New();
}

PyObject *PyvtkKCoreLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKCoreLayout_Type, PyvtkKCoreLayout_Methods,
    "vtkKCoreLayout",
 &PyvtkKCoreLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGraphAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKCoreLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKCoreLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKCoreLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

