// python wrapper for vtkAbstractHyperTreeGridMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAbstractHyperTreeGridMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAbstractHyperTreeGridMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkAbstractHyperTreeGridMapper_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractVolumeMapper_ClassNew
extern "C" { PyObject *PyvtkAbstractVolumeMapper_ClassNew(); }
#define DECLARED_PyvtkAbstractVolumeMapper_ClassNew
#endif

static PyObject *
PyvtkAbstractHyperTreeGridMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAbstractHyperTreeGridMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAbstractHyperTreeGridMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAbstractHyperTreeGridMapper *tempr = vtkAbstractHyperTreeGridMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractHyperTreeGridMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAbstractHyperTreeGridMapper::NewInstance());

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
PyvtkAbstractHyperTreeGridMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAbstractHyperTreeGridMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAbstractHyperTreeGridMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  vtkUniformHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkUniformHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0, temp1);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetInputConnection(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnection(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAbstractHyperTreeGridMapper_SetInputConnection_s1(self, args);
    case 1:
      return PyvtkAbstractHyperTreeGridMapper_SetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputConnection");
  return nullptr;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAbstractHyperTreeGridMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkAbstractHyperTreeGridMapper::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetColorMap(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetColorMap(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetColorMap(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorMap");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetColorMap() :
      op->vtkAbstractHyperTreeGridMapper::GetColorMap());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetScalarRange(temp0);
    }
    else
    {
      op->vtkAbstractHyperTreeGridMapper::SetScalarRange(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAbstractHyperTreeGridMapper_SetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAbstractHyperTreeGridMapper_SetScalarRange_s1(self, args);
    case 1:
      return PyvtkAbstractHyperTreeGridMapper_SetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkAbstractHyperTreeGridMapper::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetViewportSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetViewportSize() :
      op->vtkAbstractHyperTreeGridMapper::GetViewportSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkAbstractHyperTreeGridMapper::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

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
      op->vtkAbstractHyperTreeGridMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAbstractHyperTreeGridMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAbstractHyperTreeGridMapper *op = static_cast<vtkAbstractHyperTreeGridMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    op->Render(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAbstractHyperTreeGridMapper_Methods[] = {
  {"IsTypeOf", PyvtkAbstractHyperTreeGridMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAbstractHyperTreeGridMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAbstractHyperTreeGridMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAbstractHyperTreeGridMapper\nC++: static vtkAbstractHyperTreeGridMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAbstractHyperTreeGridMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAbstractHyperTreeGridMapper\nC++: vtkAbstractHyperTreeGridMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAbstractHyperTreeGridMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAbstractHyperTreeGridMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkAbstractHyperTreeGridMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, __a:vtkUniformHyperTreeGrid) -> None\nC++: virtual void SetInputData(vtkUniformHyperTreeGrid *)\n\nSet/Get the input data or connection\n"},
  {"SetInputConnection", PyvtkAbstractHyperTreeGridMapper_SetInputConnection, METH_VARARGS,
   "SetInputConnection(self, __a:int, __b:vtkAlgorithmOutput) -> None\nC++: void SetInputConnection(int, vtkAlgorithmOutput *) override;\nSetInputConnection(self, input:vtkAlgorithmOutput) -> None\nC++: void SetInputConnection(vtkAlgorithmOutput *input) override;\n\nSet the connection for the given input port index.  Each input\nport of a filter has a specific purpose.  A port may have zero or\nmore connections and the required number is specified by each\nfilter.  Setting the connection with this method removes all\nother connections from the port.  To add more than one connection\nuse AddInputConnection().\n\n* The input for the connection is the output port of another\n* filter, which is obtained with GetOutputPort().  Typical usage\n  is\n\n* filter2->SetInputConnection(0, filter1->GetOutputPort(0)).\n"},
  {"GetInput", PyvtkAbstractHyperTreeGridMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkUniformHyperTreeGrid\nC++: vtkUniformHyperTreeGrid *GetInput()\n\n"},
  {"SetRenderer", PyvtkAbstractHyperTreeGridMapper_SetRenderer, METH_VARARGS,
   "SetRenderer(self, __a:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *)\n\nSet/Get the renderer attached to this HyperTreeGrid mapper\n"},
  {"GetRenderer", PyvtkAbstractHyperTreeGridMapper_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetScale", PyvtkAbstractHyperTreeGridMapper_SetScale, METH_VARARGS,
   "SetScale(self, _arg:float) -> None\nC++: virtual void SetScale(double _arg)\n\nSet the scale factor\n"},
  {"SetColorMap", PyvtkAbstractHyperTreeGridMapper_SetColorMap, METH_VARARGS,
   "SetColorMap(self, __a:vtkScalarsToColors) -> None\nC++: void SetColorMap(vtkScalarsToColors *)\n\nSet/Get the color map attached to this HyperTreeGrid mapper A\nlinear lookup table is provided by default\n"},
  {"GetColorMap", PyvtkAbstractHyperTreeGridMapper_GetColorMap, METH_VARARGS,
   "GetColorMap(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetColorMap()\n\n"},
  {"SetScalarRange", PyvtkAbstractHyperTreeGridMapper_SetScalarRange, METH_VARARGS,
   "SetScalarRange(self, __a:float, __b:float) -> None\nC++: void SetScalarRange(double, double)\nSetScalarRange(self, __a:[float, ...]) -> None\nC++: void SetScalarRange(double *)\n\nSpecify range in terms of scalar minimum and maximum. These\nvalues are used to map scalars into lookup table Has no effect\nwhen dimension > 2 Used only when ColorMap is a lookup table\ninstance\n"},
  {"GetScalarRange", PyvtkAbstractHyperTreeGridMapper_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self) -> (float, float)\nC++: virtual double *GetScalarRange()\n\n"},
  {"GetViewportSize", PyvtkAbstractHyperTreeGridMapper_GetViewportSize, METH_VARARGS,
   "GetViewportSize(self) -> (int, int)\nC++: virtual int *GetViewportSize()\n\nGet image size\n"},
  {"GetMTime", PyvtkAbstractHyperTreeGridMapper_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the mtime of this object.\n"},
  {"ReleaseGraphicsResources", PyvtkAbstractHyperTreeGridMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"Render", PyvtkAbstractHyperTreeGridMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkVolume) -> None\nC++: void Render(vtkRenderer *, vtkVolume *) override = 0;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAbstractHyperTreeGridMapper_Doc =
  "vtkAbstractHyperTreeGridMapper - Abstract class for a HyperTreeGrid\nmapper\n\n"
  "Superclass: vtkAbstractVolumeMapper\n\n"
  "vtkAbstractHyperTreeGridMapper is the abstract definition of a\n"
  "HyperTreeGrid mapper. Several  basic types of volume mappers are\n"
  "supported.\n\n"
  "@sa\n"
  "vtkHyperTreeGrid vtkUniformHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Philippe Pebay and Meriadeg\n"
  "Perrinel, NexGen Analytics 2018 This worked was based on an idea of\n"
  "Guenole Harel and Jacques-Bernard Lekien This work was supported by\n"
  "Commissariat a l'Energie Atomique (CEA/DIF) CEA, DAM, DIF, F-91297\n"
  "Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAbstractHyperTreeGridMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkAbstractHyperTreeGridMapper", // tp_name
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
  PyvtkAbstractHyperTreeGridMapper_Doc, // tp_doc
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

PyObject *PyvtkAbstractHyperTreeGridMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAbstractHyperTreeGridMapper_Type, PyvtkAbstractHyperTreeGridMapper_Methods,
    "vtkAbstractHyperTreeGridMapper",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractVolumeMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAbstractHyperTreeGridMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAbstractHyperTreeGridMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAbstractHyperTreeGridMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

