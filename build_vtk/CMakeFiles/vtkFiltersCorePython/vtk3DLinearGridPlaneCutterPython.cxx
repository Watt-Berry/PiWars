// python wrapper for vtk3DLinearGridPlaneCutter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtk3DLinearGridPlaneCutter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DLinearGridPlaneCutter(PyObject *dict); }
extern "C" { PyObject *Pyvtk3DLinearGridPlaneCutter_ClassNew(); }


static PyObject *
Pyvtk3DLinearGridPlaneCutter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtk3DLinearGridPlaneCutter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DLinearGridPlaneCutter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtk3DLinearGridPlaneCutter *tempr = vtk3DLinearGridPlaneCutter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DLinearGridPlaneCutter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DLinearGridPlaneCutter::NewInstance());

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
Pyvtk3DLinearGridPlaneCutter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtk3DLinearGridPlaneCutter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtk3DLinearGridPlaneCutter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  vtkPlane *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlane"))
  {
    if (ap.IsBound())
    {
      op->SetPlane(temp0);
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SetPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPlane *tempr = (ap.IsBound() ?
      op->GetPlane() :
      op->vtk3DLinearGridPlaneCutter::GetPlane());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePoints(temp0);
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SetMergePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetMergePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePoints() :
      op->vtk3DLinearGridPlaneCutter::GetMergePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_MergePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOn();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::MergePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_MergePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePointsOff();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::MergePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolateAttributes(temp0);
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SetInterpolateAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetInterpolateAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInterpolateAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInterpolateAttributes() :
      op->vtk3DLinearGridPlaneCutter::GetInterpolateAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_InterpolateAttributesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOn();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::InterpolateAttributesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_InterpolateAttributesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateAttributesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InterpolateAttributesOff();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::InterpolateAttributesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtk3DLinearGridPlaneCutter::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtk3DLinearGridPlaneCutter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

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
      op->vtk3DLinearGridPlaneCutter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtk3DLinearGridPlaneCutter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSequentialProcessing(temp0);
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SetSequentialProcessing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSequentialProcessing() :
      op->vtk3DLinearGridPlaneCutter::GetSequentialProcessing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SequentialProcessingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOn();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SequentialProcessingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_SequentialProcessingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOff();
    }
    else
    {
      op->vtk3DLinearGridPlaneCutter::SequentialProcessingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetNumberOfThreadsUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsUsed() :
      op->vtk3DLinearGridPlaneCutter::GetNumberOfThreadsUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_GetLargeIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLargeIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridPlaneCutter *op = static_cast<vtk3DLinearGridPlaneCutter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLargeIds() :
      op->vtk3DLinearGridPlaneCutter::GetLargeIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridPlaneCutter_CanFullyProcessDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanFullyProcessDataObject");

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = vtk3DLinearGridPlaneCutter::CanFullyProcessDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef Pyvtk3DLinearGridPlaneCutter_Methods[] = {
  {"IsTypeOf", Pyvtk3DLinearGridPlaneCutter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", Pyvtk3DLinearGridPlaneCutter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", Pyvtk3DLinearGridPlaneCutter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtk3DLinearGridPlaneCutter\nC++: static vtk3DLinearGridPlaneCutter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", Pyvtk3DLinearGridPlaneCutter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtk3DLinearGridPlaneCutter\nC++: vtk3DLinearGridPlaneCutter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", Pyvtk3DLinearGridPlaneCutter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", Pyvtk3DLinearGridPlaneCutter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPlane", Pyvtk3DLinearGridPlaneCutter_SetPlane, METH_VARARGS,
   "SetPlane(self, __a:vtkPlane) -> None\nC++: virtual void SetPlane(vtkPlane *)\n\nSpecify the plane (an implicit function) to perform the cutting.\nThe definition of the plane (its origin and normal) is controlled\nvia this instance of vtkPlane.\n"},
  {"GetPlane", Pyvtk3DLinearGridPlaneCutter_GetPlane, METH_VARARGS,
   "GetPlane(self) -> vtkPlane\nC++: virtual vtkPlane *GetPlane()\n\n"},
  {"SetMergePoints", Pyvtk3DLinearGridPlaneCutter_SetMergePoints, METH_VARARGS,
   "SetMergePoints(self, _arg:bool) -> None\nC++: virtual void SetMergePoints(bool _arg)\n\nIndicate whether to merge coincident points. Merging can take\nextra time and produces fewer output points, creating a\n\"watertight\" output surface. On the other hand, merging reduced\noutput data size and may be just as fast especially for smaller\ndata. By default this is off.\n"},
  {"GetMergePoints", Pyvtk3DLinearGridPlaneCutter_GetMergePoints, METH_VARARGS,
   "GetMergePoints(self) -> bool\nC++: virtual bool GetMergePoints()\n\n"},
  {"MergePointsOn", Pyvtk3DLinearGridPlaneCutter_MergePointsOn, METH_VARARGS,
   "MergePointsOn(self) -> None\nC++: virtual void MergePointsOn()\n\n"},
  {"MergePointsOff", Pyvtk3DLinearGridPlaneCutter_MergePointsOff, METH_VARARGS,
   "MergePointsOff(self) -> None\nC++: virtual void MergePointsOff()\n\n"},
  {"SetInterpolateAttributes", Pyvtk3DLinearGridPlaneCutter_SetInterpolateAttributes, METH_VARARGS,
   "SetInterpolateAttributes(self, _arg:bool) -> None\nC++: virtual void SetInterpolateAttributes(bool _arg)\n\nIndicate whether to interpolate input attributes onto the cut\nplane. By default this option is on.\n"},
  {"GetInterpolateAttributes", Pyvtk3DLinearGridPlaneCutter_GetInterpolateAttributes, METH_VARARGS,
   "GetInterpolateAttributes(self) -> bool\nC++: virtual bool GetInterpolateAttributes()\n\n"},
  {"InterpolateAttributesOn", Pyvtk3DLinearGridPlaneCutter_InterpolateAttributesOn, METH_VARARGS,
   "InterpolateAttributesOn(self) -> None\nC++: virtual void InterpolateAttributesOn()\n\n"},
  {"InterpolateAttributesOff", Pyvtk3DLinearGridPlaneCutter_InterpolateAttributesOff, METH_VARARGS,
   "InterpolateAttributesOff(self) -> None\nC++: virtual void InterpolateAttributesOff()\n\n"},
  {"SetComputeNormals", Pyvtk3DLinearGridPlaneCutter_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:bool) -> None\nC++: virtual void SetComputeNormals(bool _arg)\n\nSet/Get the computation of normals. The normal generated is\nsimply the cut plane normal. The normal, if generated, is defined\nby cell data associated with the output polygons. By default\ncomputing of normals is off.\n"},
  {"GetComputeNormals", Pyvtk3DLinearGridPlaneCutter_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> bool\nC++: virtual bool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", Pyvtk3DLinearGridPlaneCutter_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", Pyvtk3DLinearGridPlaneCutter_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"GetMTime", Pyvtk3DLinearGridPlaneCutter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverloaded GetMTime() because of delegation to the helper\nvtkPlane.\n"},
  {"SetOutputPointsPrecision", Pyvtk3DLinearGridPlaneCutter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, precision:int) -> None\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", Pyvtk3DLinearGridPlaneCutter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: int GetOutputPointsPrecision()\n\n"},
  {"SetSequentialProcessing", Pyvtk3DLinearGridPlaneCutter_SetSequentialProcessing, METH_VARARGS,
   "SetSequentialProcessing(self, _arg:bool) -> None\nC++: virtual void SetSequentialProcessing(bool _arg)\n\nForce sequential processing (i.e. single thread) of the\ncontouring process. By default, sequential processing is off.\nNote this flag only applies if the class has been compiled with\nVTK_SMP_IMPLEMENTATION_TYPE set to something other than\nSequential. (If set to Sequential, then the filter always runs in\nserial mode.) This flag is typically used for benchmarking\npurposes.\n"},
  {"GetSequentialProcessing", Pyvtk3DLinearGridPlaneCutter_GetSequentialProcessing, METH_VARARGS,
   "GetSequentialProcessing(self) -> bool\nC++: virtual bool GetSequentialProcessing()\n\n"},
  {"SequentialProcessingOn", Pyvtk3DLinearGridPlaneCutter_SequentialProcessingOn, METH_VARARGS,
   "SequentialProcessingOn(self) -> None\nC++: virtual void SequentialProcessingOn()\n\n"},
  {"SequentialProcessingOff", Pyvtk3DLinearGridPlaneCutter_SequentialProcessingOff, METH_VARARGS,
   "SequentialProcessingOff(self) -> None\nC++: virtual void SequentialProcessingOff()\n\n"},
  {"GetNumberOfThreadsUsed", Pyvtk3DLinearGridPlaneCutter_GetNumberOfThreadsUsed, METH_VARARGS,
   "GetNumberOfThreadsUsed(self) -> int\nC++: int GetNumberOfThreadsUsed()\n\nReturn the number of threads actually used during execution. This\nis valid only after algorithm execution.\n"},
  {"GetLargeIds", Pyvtk3DLinearGridPlaneCutter_GetLargeIds, METH_VARARGS,
   "GetLargeIds(self) -> bool\nC++: bool GetLargeIds()\n\nInform the user as to whether large ids were used during filter\nexecution. This flag only has meaning after the filter has\nexecuted. Large ids are used when the id of the larges cell or\npoint is greater than signed 32-bit precision. (Smaller ids\nreduce memory usage and speed computation. Note that LargeIds are\nonly available on 64-bit architectures.)\n"},
  {"CanFullyProcessDataObject", Pyvtk3DLinearGridPlaneCutter_CanFullyProcessDataObject, METH_VARARGS,
   "CanFullyProcessDataObject(object:vtkDataObject) -> bool\nC++: static bool CanFullyProcessDataObject(vtkDataObject *object)\n\nReturns true if the data object passed in is fully supported by\nthis filter, i.e., all cell types are linear. For composite\ndatasets, this means all dataset leaves have only linear cell\ntypes that can be processed by this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *Pyvtk3DLinearGridPlaneCutter_Doc =
  "vtk3DLinearGridPlaneCutter - fast plane cutting of\nvtkUnstructuredGrid containing 3D linear cells\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtk3DLinearGridPlaneCutter is a specialized filter that cuts an input\n"
  "vtkUnstructuredGrid consisting of 3D linear cells: tetrahedra,\n"
  "hexahedra, voxels, pyramids, and/or wedges. (The cells are linear in\n"
  "the sense that each cell edge is a straight line.)  The filter is\n"
  "designed for high-speed, specialized operation. All other cell types\n"
  "are skipped and produce no output.\n\n"
  "To use this filter you must specify an input unstructured grid or\n"
  "vtkCompositeDataSet (containing unstructured grids) and a plane to\n"
  "cut with.\n\n"
  "The filter performance varies depending on optional output\n"
  "information. Basically if point merging is required (when\n"
  "PointMerging is set) a sorting process is required to eliminate\n"
  "duplicate output points in the cut surface. Otherwise when point\n"
  "merging is not required, a fast path process produces independent\n"
  "triangles representing the cut surface.\n\n"
  "This algorithm is fast because it is threaded, and may perform\n"
  "operations (in a preprocessing step) to accelerate the plane cutting.\n\n"
  "Because this filter may build an initial data structure during a\n"
  "preprocessing step, the first execution of the filter may take longer\n"
  "than subsequent operations. Typically the first execution is still\n"
  "faster than vtkCutter (especially with threading enabled), but for\n"
  "certain types of data this may not be true. However if you are using\n"
  "the filter to cut a dataset multiple times (as in an exploratory or\n"
  "interactive workflow) this filter works well.\n\n"
  "@warning\n"
  "When the input is of type vtkCompositeDataSet the filter will process\n"
  "the unstructured grid(s) contained in the composite data set. As a\n"
  "result the output of this filter is then a vtkMultiBlockDataSet\n"
  "containing multiple vtkPolyData. When a vtkUnstructuredGrid is\n"
  "provided as input the output is a single vtkPolyData.\n\n"
  "@warning\n"
  "Input cells that are not of 3D linear type (tetrahedron, hexahedron,\n"
  "wedge, pyramid, and voxel) are simply skipped and not processed.\n\n"
  "@warning\n"
  "The filter is templated on types of input and output points, and\n"
  "input scalar type. To reduce object file bloat, only real points\n"
  "(float,double) are processed.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkCutter vtkFlyingEdgesPlaneCutter vtkPlaneCutter vtkPlane\n"
  "vtkContour3DLinearGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DLinearGridPlaneCutter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtk3DLinearGridPlaneCutter", // tp_name
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
  Pyvtk3DLinearGridPlaneCutter_Doc, // tp_doc
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

static vtkObjectBase *Pyvtk3DLinearGridPlaneCutter_StaticNew()
{
  return vtk3DLinearGridPlaneCutter::New();
}

PyObject *Pyvtk3DLinearGridPlaneCutter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &Pyvtk3DLinearGridPlaneCutter_Type, Pyvtk3DLinearGridPlaneCutter_Methods,
    "vtk3DLinearGridPlaneCutter",
 &Pyvtk3DLinearGridPlaneCutter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DLinearGridPlaneCutter(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DLinearGridPlaneCutter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtk3DLinearGridPlaneCutter", o) != 0)
  {
    Py_DECREF(o);
  }

}

