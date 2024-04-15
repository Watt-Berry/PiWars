// python wrapper for vtk3DLinearGridCrinkleExtractor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtk3DLinearGridCrinkleExtractor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtk3DLinearGridCrinkleExtractor(PyObject *dict); }
extern "C" { PyObject *Pyvtk3DLinearGridCrinkleExtractor_ClassNew(); }


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtk3DLinearGridCrinkleExtractor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtk3DLinearGridCrinkleExtractor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtk3DLinearGridCrinkleExtractor *tempr = vtk3DLinearGridCrinkleExtractor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtk3DLinearGridCrinkleExtractor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtk3DLinearGridCrinkleExtractor::NewInstance());

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
Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtk3DLinearGridCrinkleExtractor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtk3DLinearGridCrinkleExtractor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetImplicitFunction(temp0);
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SetImplicitFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetImplicitFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImplicitFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetImplicitFunction() :
      op->vtk3DLinearGridCrinkleExtractor::GetImplicitFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetCopyPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyPointData(temp0);
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SetCopyPointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetCopyPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyPointData() :
      op->vtk3DLinearGridCrinkleExtractor::GetCopyPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_CopyPointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPointDataOn();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::CopyPointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_CopyPointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyPointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyPointDataOff();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::CopyPointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCopyCellData(temp0);
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SetCopyCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetCopyCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCopyCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCopyCellData() :
      op->vtk3DLinearGridCrinkleExtractor::GetCopyCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_CopyCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellDataOn();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::CopyCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_CopyCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CopyCellDataOff();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::CopyCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveUnusedPoints(temp0);
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SetRemoveUnusedPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetRemoveUnusedPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveUnusedPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveUnusedPoints() :
      op->vtk3DLinearGridCrinkleExtractor::GetRemoveUnusedPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_RemoveUnusedPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOn();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::RemoveUnusedPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_RemoveUnusedPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUnusedPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveUnusedPointsOff();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::RemoveUnusedPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtk3DLinearGridCrinkleExtractor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

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
      op->vtk3DLinearGridCrinkleExtractor::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtk3DLinearGridCrinkleExtractor::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

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
      op->vtk3DLinearGridCrinkleExtractor::SetSequentialProcessing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetSequentialProcessing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequentialProcessing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSequentialProcessing() :
      op->vtk3DLinearGridCrinkleExtractor::GetSequentialProcessing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SequentialProcessingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOn();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SequentialProcessingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_SequentialProcessingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SequentialProcessingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SequentialProcessingOff();
    }
    else
    {
      op->vtk3DLinearGridCrinkleExtractor::SequentialProcessingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfThreadsUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfThreadsUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtk3DLinearGridCrinkleExtractor *op = static_cast<vtk3DLinearGridCrinkleExtractor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfThreadsUsed() :
      op->vtk3DLinearGridCrinkleExtractor::GetNumberOfThreadsUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
Pyvtk3DLinearGridCrinkleExtractor_CanFullyProcessDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CanFullyProcessDataObject");

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = vtk3DLinearGridCrinkleExtractor::CanFullyProcessDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef Pyvtk3DLinearGridCrinkleExtractor_Methods[] = {
  {"IsTypeOf", Pyvtk3DLinearGridCrinkleExtractor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", Pyvtk3DLinearGridCrinkleExtractor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", Pyvtk3DLinearGridCrinkleExtractor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtk3DLinearGridCrinkleExtractor\nC++: static vtk3DLinearGridCrinkleExtractor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", Pyvtk3DLinearGridCrinkleExtractor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtk3DLinearGridCrinkleExtractor\nC++: vtk3DLinearGridCrinkleExtractor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetImplicitFunction", Pyvtk3DLinearGridCrinkleExtractor_SetImplicitFunction, METH_VARARGS,
   "SetImplicitFunction(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetImplicitFunction(vtkImplicitFunction *)\n\nSpecify the implicit function which is used to select the output\ncell faces. Note that the implicit function invocation must be\nthread safe. Also, there is a fast path for vtkPlane implicit\nfunctions.\n"},
  {"GetImplicitFunction", Pyvtk3DLinearGridCrinkleExtractor_GetImplicitFunction, METH_VARARGS,
   "GetImplicitFunction(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetImplicitFunction()\n\n"},
  {"SetCopyPointData", Pyvtk3DLinearGridCrinkleExtractor_SetCopyPointData, METH_VARARGS,
   "SetCopyPointData(self, _arg:bool) -> None\nC++: virtual void SetCopyPointData(bool _arg)\n\nIndicate whether to copy input point data/attributes onto the\noutput points. By default this option is on.\n"},
  {"GetCopyPointData", Pyvtk3DLinearGridCrinkleExtractor_GetCopyPointData, METH_VARARGS,
   "GetCopyPointData(self) -> bool\nC++: virtual bool GetCopyPointData()\n\n"},
  {"CopyPointDataOn", Pyvtk3DLinearGridCrinkleExtractor_CopyPointDataOn, METH_VARARGS,
   "CopyPointDataOn(self) -> None\nC++: virtual void CopyPointDataOn()\n\n"},
  {"CopyPointDataOff", Pyvtk3DLinearGridCrinkleExtractor_CopyPointDataOff, METH_VARARGS,
   "CopyPointDataOff(self) -> None\nC++: virtual void CopyPointDataOff()\n\n"},
  {"SetCopyCellData", Pyvtk3DLinearGridCrinkleExtractor_SetCopyCellData, METH_VARARGS,
   "SetCopyCellData(self, _arg:bool) -> None\nC++: virtual void SetCopyCellData(bool _arg)\n\nIndicate whether to copy input cell data/attributes onto the\noutput cells. By default this option is off.\n"},
  {"GetCopyCellData", Pyvtk3DLinearGridCrinkleExtractor_GetCopyCellData, METH_VARARGS,
   "GetCopyCellData(self) -> bool\nC++: virtual bool GetCopyCellData()\n\n"},
  {"CopyCellDataOn", Pyvtk3DLinearGridCrinkleExtractor_CopyCellDataOn, METH_VARARGS,
   "CopyCellDataOn(self) -> None\nC++: virtual void CopyCellDataOn()\n\n"},
  {"CopyCellDataOff", Pyvtk3DLinearGridCrinkleExtractor_CopyCellDataOff, METH_VARARGS,
   "CopyCellDataOff(self) -> None\nC++: virtual void CopyCellDataOff()\n\n"},
  {"SetRemoveUnusedPoints", Pyvtk3DLinearGridCrinkleExtractor_SetRemoveUnusedPoints, METH_VARARGS,
   "SetRemoveUnusedPoints(self, _arg:bool) -> None\nC++: virtual void SetRemoveUnusedPoints(bool _arg)\n\nIndicate whether to eliminate unused output points. When this\nflag is disabled, the input points and associated point data are\nsimply shallow copied to the output (which improves performance).\n When enabled, any points that are not used by the output cells\nare not sent to the output, nor is associated point data copied.\nBy default this option is disabled. Removing unused points does\nhave a significant performance impact.\n"},
  {"GetRemoveUnusedPoints", Pyvtk3DLinearGridCrinkleExtractor_GetRemoveUnusedPoints, METH_VARARGS,
   "GetRemoveUnusedPoints(self) -> bool\nC++: virtual bool GetRemoveUnusedPoints()\n\n"},
  {"RemoveUnusedPointsOn", Pyvtk3DLinearGridCrinkleExtractor_RemoveUnusedPointsOn, METH_VARARGS,
   "RemoveUnusedPointsOn(self) -> None\nC++: virtual void RemoveUnusedPointsOn()\n\n"},
  {"RemoveUnusedPointsOff", Pyvtk3DLinearGridCrinkleExtractor_RemoveUnusedPointsOff, METH_VARARGS,
   "RemoveUnusedPointsOff(self) -> None\nC++: virtual void RemoveUnusedPointsOff()\n\n"},
  {"GetMTime", Pyvtk3DLinearGridCrinkleExtractor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverloaded GetMTime() because of delegation to the helper\nvtkImplicitFunction.\n"},
  {"SetOutputPointsPrecision", Pyvtk3DLinearGridCrinkleExtractor_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, precision:int) -> None\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output points. See the\ndocumentation for the vtkAlgorithm::Precision enum for an\nexplanation of the available precision settings.\n"},
  {"GetOutputPointsPrecision", Pyvtk3DLinearGridCrinkleExtractor_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: int GetOutputPointsPrecision()\n\n"},
  {"SetSequentialProcessing", Pyvtk3DLinearGridCrinkleExtractor_SetSequentialProcessing, METH_VARARGS,
   "SetSequentialProcessing(self, _arg:bool) -> None\nC++: virtual void SetSequentialProcessing(bool _arg)\n\nForce sequential processing (i.e. single thread) of the crinkle\ncut process. By default, sequential processing is off. Note this\nflag only applies if the class has been compiled with\nVTK_SMP_IMPLEMENTATION_TYPE set to something other than\nSequential. (If set to Sequential, then the filter always runs in\nserial mode.) This flag is typically used for benchmarking\npurposes.\n"},
  {"GetSequentialProcessing", Pyvtk3DLinearGridCrinkleExtractor_GetSequentialProcessing, METH_VARARGS,
   "GetSequentialProcessing(self) -> bool\nC++: virtual bool GetSequentialProcessing()\n\n"},
  {"SequentialProcessingOn", Pyvtk3DLinearGridCrinkleExtractor_SequentialProcessingOn, METH_VARARGS,
   "SequentialProcessingOn(self) -> None\nC++: virtual void SequentialProcessingOn()\n\n"},
  {"SequentialProcessingOff", Pyvtk3DLinearGridCrinkleExtractor_SequentialProcessingOff, METH_VARARGS,
   "SequentialProcessingOff(self) -> None\nC++: virtual void SequentialProcessingOff()\n\n"},
  {"GetNumberOfThreadsUsed", Pyvtk3DLinearGridCrinkleExtractor_GetNumberOfThreadsUsed, METH_VARARGS,
   "GetNumberOfThreadsUsed(self) -> int\nC++: int GetNumberOfThreadsUsed()\n\nReturn the number of threads actually used during execution. This\nis valid only after algorithm execution.\n"},
  {"CanFullyProcessDataObject", Pyvtk3DLinearGridCrinkleExtractor_CanFullyProcessDataObject, METH_VARARGS,
   "CanFullyProcessDataObject(object:vtkDataObject) -> bool\nC++: static bool CanFullyProcessDataObject(vtkDataObject *object)\n\nReturns true if the data object passed in is fully supported by\nthis filter, i.e., all cell types are linear. For composite\ndatasets, this means all dataset leaves have only linear cell\ntypes that can be processed by this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *Pyvtk3DLinearGridCrinkleExtractor_Doc =
  "vtk3DLinearGridCrinkleExtractor - fast extraction of cells\nintersected by a plane\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtk3DLinearGridCrinkleExtractor is a specialized filter that, given a\n"
  "specified implicit function, extracts unstructured grid cells that\n"
  "intersect the implicit function. (Since the surface of these cells\n"
  "roughly follows the implicit function but is \"bumpy\", it is referred\n"
  "to as a \"crinkle\" surface.) This filter operates on\n"
  "vtkUnstructuredGrids consisting of 3D linear cells: tetrahedra,\n"
  "hexahedra, voxels, pyramids, and/or wedges. (The cells are linear in\n"
  "the sense that each cell edge is a straight line.)  The filter is\n"
  "designed for high-speed, specialized operation. All other cell types\n"
  "are skipped and produce no output.\n\n"
  "To use this filter you must specify an input unstructured grid or\n"
  "vtkCompositeDataSet (containing unstructured grids) and an implicit\n"
  "function to cut with.\n\n"
  "The RemoveUnusedPoints data member controls whether the filter remaps\n"
  "the input points to the output. Since the algorithm simply extracts a\n"
  "subset of the original data (points and cells), it is possible simply\n"
  "to pass the input points to the output, which is much faster (factor\n"
  "of ~2X) then mapping the input points to the output. Of course, not\n"
  "removing the unused points means extra points in the output dataset,\n"
  "but because the input points are shallow copied to the output, no\n"
  "additional memory is consumed.\n\n"
  "@warning\n"
  "When the input is of type vtkCompositeDataSet the filter will process\n"
  "the unstructured grid(s) contained in the composite data set. As a\n"
  "result the output of this filter is then a vtkMultiBlockDataSet\n"
  "containing multiple vtkUnstructuredGrids. When a vtkUnstructuredGrid\n"
  "is provided as input the output is a single vtkUnstructuredGrid.\n\n"
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
  "@warning\n"
  "The vtkExtractGeometry filter is similar to this filter when\n"
  "ExtractOnlyBoundaryCells is enabled.\n\n"
  "@sa\n"
  "vtk3DLinearGrid vtk3DLinearGridPlaneCutter vtkExtractGeometry\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject Pyvtk3DLinearGridCrinkleExtractor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtk3DLinearGridCrinkleExtractor", // tp_name
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
  Pyvtk3DLinearGridCrinkleExtractor_Doc, // tp_doc
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

static vtkObjectBase *Pyvtk3DLinearGridCrinkleExtractor_StaticNew()
{
  return vtk3DLinearGridCrinkleExtractor::New();
}

PyObject *Pyvtk3DLinearGridCrinkleExtractor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &Pyvtk3DLinearGridCrinkleExtractor_Type, Pyvtk3DLinearGridCrinkleExtractor_Methods,
    "vtk3DLinearGridCrinkleExtractor",
 &Pyvtk3DLinearGridCrinkleExtractor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtk3DLinearGridCrinkleExtractor(
  PyObject *dict)
{
  PyObject *o;
  o = Pyvtk3DLinearGridCrinkleExtractor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtk3DLinearGridCrinkleExtractor", o) != 0)
  {
    Py_DECREF(o);
  }

}

