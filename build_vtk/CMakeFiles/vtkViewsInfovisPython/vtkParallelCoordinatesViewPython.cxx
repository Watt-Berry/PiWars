// python wrapper for vtkParallelCoordinatesView
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelCoordinatesView.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesView(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelCoordinatesView_ClassNew(); }

#ifndef DECLARED_PyvtkRenderView_ClassNew
extern "C" { PyObject *PyvtkRenderView_ClassNew(); }
#define DECLARED_PyvtkRenderView_ClassNew
#endif

static PyObject *
PyvtkParallelCoordinatesView_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesView::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesView::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesView *tempr = vtkParallelCoordinatesView::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesView *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesView::NewInstance());

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
PyvtkParallelCoordinatesView_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelCoordinatesView::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelCoordinatesView::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBrushMode(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToLasso(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToLasso");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushModeToLasso();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushModeToLasso();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushModeToAngle();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushModeToAngle();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushModeToFunction();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushModeToFunction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushModeToAxisThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushModeToAxisThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushModeToAxisThreshold();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushModeToAxisThreshold();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetBrushMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrushMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBrushMode() :
      op->vtkParallelCoordinatesView::GetBrushMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBrushOperator(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushOperator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToAdd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToAdd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushOperatorToAdd();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushOperatorToAdd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToSubtract(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToSubtract");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushOperatorToSubtract();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushOperatorToSubtract();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToIntersect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToIntersect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushOperatorToIntersect();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushOperatorToIntersect();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetBrushOperatorToReplace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBrushOperatorToReplace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBrushOperatorToReplace();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetBrushOperatorToReplace();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetBrushOperator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBrushOperator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBrushOperator() :
      op->vtkParallelCoordinatesView::GetBrushOperator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInspectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInspectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInspectMode(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::SetInspectMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInspectModeToManipulateAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInspectModeToManipulateAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInspectModeToManipulateAxes();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetInspectModeToManipulateAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetInpsectModeToSelectData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInpsectModeToSelectData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInpsectModeToSelectData();
    }
    else
    {
      op->vtkParallelCoordinatesView::SetInpsectModeToSelectData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetInspectMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInspectMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInspectMode() :
      op->vtkParallelCoordinatesView::GetInspectMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetMaximumNumberOfBrushPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfBrushPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfBrushPoints(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::SetMaximumNumberOfBrushPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetMaximumNumberOfBrushPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfBrushPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfBrushPoints() :
      op->vtkParallelCoordinatesView::GetMaximumNumberOfBrushPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_SetCurrentBrushClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurrentBrushClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurrentBrushClass(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::SetCurrentBrushClass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_GetCurrentBrushClass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentBrushClass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentBrushClass() :
      op->vtkParallelCoordinatesView::GetCurrentBrushClass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesView_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesView *op = static_cast<vtkParallelCoordinatesView *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesView::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesView_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesView_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesView_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesView_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkParallelCoordinatesView\nC++: static vtkParallelCoordinatesView *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesView_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelCoordinatesView\nC++: vtkParallelCoordinatesView *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelCoordinatesView_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelCoordinatesView_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetBrushMode", PyvtkParallelCoordinatesView_SetBrushMode, METH_VARARGS,
   "SetBrushMode(self, __a:int) -> None\nC++: void SetBrushMode(int)\n\n"},
  {"SetBrushModeToLasso", PyvtkParallelCoordinatesView_SetBrushModeToLasso, METH_VARARGS,
   "SetBrushModeToLasso(self) -> None\nC++: void SetBrushModeToLasso()\n\n"},
  {"SetBrushModeToAngle", PyvtkParallelCoordinatesView_SetBrushModeToAngle, METH_VARARGS,
   "SetBrushModeToAngle(self) -> None\nC++: void SetBrushModeToAngle()\n\n"},
  {"SetBrushModeToFunction", PyvtkParallelCoordinatesView_SetBrushModeToFunction, METH_VARARGS,
   "SetBrushModeToFunction(self) -> None\nC++: void SetBrushModeToFunction()\n\n"},
  {"SetBrushModeToAxisThreshold", PyvtkParallelCoordinatesView_SetBrushModeToAxisThreshold, METH_VARARGS,
   "SetBrushModeToAxisThreshold(self) -> None\nC++: void SetBrushModeToAxisThreshold()\n\n"},
  {"GetBrushMode", PyvtkParallelCoordinatesView_GetBrushMode, METH_VARARGS,
   "GetBrushMode(self) -> int\nC++: virtual int GetBrushMode()\n\n"},
  {"SetBrushOperator", PyvtkParallelCoordinatesView_SetBrushOperator, METH_VARARGS,
   "SetBrushOperator(self, __a:int) -> None\nC++: void SetBrushOperator(int)\n\n"},
  {"SetBrushOperatorToAdd", PyvtkParallelCoordinatesView_SetBrushOperatorToAdd, METH_VARARGS,
   "SetBrushOperatorToAdd(self) -> None\nC++: void SetBrushOperatorToAdd()\n\n"},
  {"SetBrushOperatorToSubtract", PyvtkParallelCoordinatesView_SetBrushOperatorToSubtract, METH_VARARGS,
   "SetBrushOperatorToSubtract(self) -> None\nC++: void SetBrushOperatorToSubtract()\n\n"},
  {"SetBrushOperatorToIntersect", PyvtkParallelCoordinatesView_SetBrushOperatorToIntersect, METH_VARARGS,
   "SetBrushOperatorToIntersect(self) -> None\nC++: void SetBrushOperatorToIntersect()\n\n"},
  {"SetBrushOperatorToReplace", PyvtkParallelCoordinatesView_SetBrushOperatorToReplace, METH_VARARGS,
   "SetBrushOperatorToReplace(self) -> None\nC++: void SetBrushOperatorToReplace()\n\n"},
  {"GetBrushOperator", PyvtkParallelCoordinatesView_GetBrushOperator, METH_VARARGS,
   "GetBrushOperator(self) -> int\nC++: virtual int GetBrushOperator()\n\n"},
  {"SetInspectMode", PyvtkParallelCoordinatesView_SetInspectMode, METH_VARARGS,
   "SetInspectMode(self, __a:int) -> None\nC++: void SetInspectMode(int)\n\n"},
  {"SetInspectModeToManipulateAxes", PyvtkParallelCoordinatesView_SetInspectModeToManipulateAxes, METH_VARARGS,
   "SetInspectModeToManipulateAxes(self) -> None\nC++: void SetInspectModeToManipulateAxes()\n\n"},
  {"SetInpsectModeToSelectData", PyvtkParallelCoordinatesView_SetInpsectModeToSelectData, METH_VARARGS,
   "SetInpsectModeToSelectData(self) -> None\nC++: void SetInpsectModeToSelectData()\n\n"},
  {"GetInspectMode", PyvtkParallelCoordinatesView_GetInspectMode, METH_VARARGS,
   "GetInspectMode(self) -> int\nC++: virtual int GetInspectMode()\n\n"},
  {"SetMaximumNumberOfBrushPoints", PyvtkParallelCoordinatesView_SetMaximumNumberOfBrushPoints, METH_VARARGS,
   "SetMaximumNumberOfBrushPoints(self, __a:int) -> None\nC++: void SetMaximumNumberOfBrushPoints(int)\n\n"},
  {"GetMaximumNumberOfBrushPoints", PyvtkParallelCoordinatesView_GetMaximumNumberOfBrushPoints, METH_VARARGS,
   "GetMaximumNumberOfBrushPoints(self) -> int\nC++: virtual int GetMaximumNumberOfBrushPoints()\n\n"},
  {"SetCurrentBrushClass", PyvtkParallelCoordinatesView_SetCurrentBrushClass, METH_VARARGS,
   "SetCurrentBrushClass(self, _arg:int) -> None\nC++: virtual void SetCurrentBrushClass(int _arg)\n\n"},
  {"GetCurrentBrushClass", PyvtkParallelCoordinatesView_GetCurrentBrushClass, METH_VARARGS,
   "GetCurrentBrushClass(self) -> int\nC++: virtual int GetCurrentBrushClass()\n\n"},
  {"ApplyViewTheme", PyvtkParallelCoordinatesView_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApplies a view theme to this view.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelCoordinatesView_Doc =
  "vtkParallelCoordinatesView - view to be used with\nvtkParallelCoordinatesRepresentation\n\n"
  "Superclass: vtkRenderView\n\n"
  "This class manages interaction with the\n"
  "vtkParallelCoordinatesRepresentation.  There are two inspection\n"
  "modes: axis manipulation and line selection.  In axis manipulation\n"
  "mode, PC axes can be dragged and reordered with the LMB, axis ranges\n"
  "can be increased/decreased by dragging up/down with the LMB, and RMB\n"
  "controls zoom and pan.\n\n"
  "In line selection mode, there are three subclasses of selections:\n"
  "lasso, angle, and function selection.  Lasso selection lets the user\n"
  "brush a line and select all PC lines that pass nearby.  Angle\n"
  "selection lets the user draw a representative line between axes and\n"
  "select all lines that have similar orientation.  Function selection\n"
  "lets the user draw two representative lines between a pair of axes\n"
  "and select all lines that match the linear interpolation of those\n"
  "lines.\n\n"
  "There are several self-explanatory operators for combining\n"
  "selections: ADD, SUBTRACT REPLACE, and INTERSECT.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelCoordinatesView_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkParallelCoordinatesView", // tp_name
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
  PyvtkParallelCoordinatesView_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesView_StaticNew()
{
  return vtkParallelCoordinatesView::New();
}

PyObject *PyvtkParallelCoordinatesView_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelCoordinatesView_Type, PyvtkParallelCoordinatesView_Methods,
    "vtkParallelCoordinatesView",
 &PyvtkParallelCoordinatesView_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderView_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 13; c++)
  {
    static const struct { const char *name; int value; }
      constants[13] = {
        { "VTK_BRUSH_LASSO", vtkParallelCoordinatesView::VTK_BRUSH_LASSO },
        { "VTK_BRUSH_ANGLE", vtkParallelCoordinatesView::VTK_BRUSH_ANGLE },
        { "VTK_BRUSH_FUNCTION", vtkParallelCoordinatesView::VTK_BRUSH_FUNCTION },
        { "VTK_BRUSH_AXISTHRESHOLD", vtkParallelCoordinatesView::VTK_BRUSH_AXISTHRESHOLD },
        { "VTK_BRUSH_MODECOUNT", vtkParallelCoordinatesView::VTK_BRUSH_MODECOUNT },
        { "VTK_BRUSHOPERATOR_ADD", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_ADD },
        { "VTK_BRUSHOPERATOR_SUBTRACT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_SUBTRACT },
        { "VTK_BRUSHOPERATOR_INTERSECT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_INTERSECT },
        { "VTK_BRUSHOPERATOR_REPLACE", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_REPLACE },
        { "VTK_BRUSHOPERATOR_MODECOUNT", vtkParallelCoordinatesView::VTK_BRUSHOPERATOR_MODECOUNT },
        { "VTK_INSPECT_MANIPULATE_AXES", vtkParallelCoordinatesView::VTK_INSPECT_MANIPULATE_AXES },
        { "VTK_INSPECT_SELECT_DATA", vtkParallelCoordinatesView::VTK_INSPECT_SELECT_DATA },
        { "VTK_INSPECT_MODECOUNT", vtkParallelCoordinatesView::VTK_INSPECT_MODECOUNT },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelCoordinatesView(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesView_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesView", o) != 0)
  {
    Py_DECREF(o);
  }

}

