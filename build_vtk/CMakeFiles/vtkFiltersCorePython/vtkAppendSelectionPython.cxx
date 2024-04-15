// python wrapper for vtkAppendSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAppendSelection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAppendSelection(PyObject *dict); }
extern "C" { PyObject *PyvtkAppendSelection_ClassNew(); }


static PyObject *
PyvtkAppendSelection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAppendSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAppendSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAppendSelection *tempr = vtkAppendSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAppendSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAppendSelection::NewInstance());

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
PyvtkAppendSelection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAppendSelection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAppendSelection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpression(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkAppendSelection::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_InverseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseOn();
    }
    else
    {
      op->vtkAppendSelection::InverseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_InverseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InverseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InverseOff();
    }
    else
    {
      op->vtkAppendSelection::InverseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkAppendSelection::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInputName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputName(temp0, temp1);
    }
    else
    {
      op->vtkAppendSelection::SetInputName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInputName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputName(temp0) :
      op->vtkAppendSelection::GetInputName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_RemoveAllInputNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllInputNames();
    }
    else
    {
      op->vtkAppendSelection::RemoveAllInputNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInputColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetInputColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkAppendSelection::SetInputColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInputColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetInputColor(temp0) :
      op->vtkAppendSelection::GetInputColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_RemoveAllInputColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllInputColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllInputColors();
    }
    else
    {
      op->vtkAppendSelection::RemoveAllInputColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUserManagedInputs(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetUserManagedInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetUserManagedInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserManagedInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUserManagedInputs() :
      op->vtkAppendSelection::GetUserManagedInputs());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOn();
    }
    else
    {
      op->vtkAppendSelection::UserManagedInputsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_UserManagedInputsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UserManagedInputsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UserManagedInputsOff();
    }
    else
    {
      op->vtkAppendSelection::UserManagedInputsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AddInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->AddInputData(temp0);
    }
    else
    {
      op->vtkAppendSelection::AddInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_RemoveInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  vtkSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelection"))
  {
    if (ap.IsBound())
    {
      op->RemoveInputData(temp0);
    }
    else
    {
      op->vtkAppendSelection::RemoveInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetInput(temp0) :
      op->vtkAppendSelection::GetInput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelection *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkAppendSelection::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkAppendSelection_GetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAppendSelection_GetInput_s1(self, args);
    case 0:
      return PyvtkAppendSelection_GetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInput");
  return nullptr;
}


static PyObject *
PyvtkAppendSelection_SetNumberOfInputs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfInputs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfInputs(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetNumberOfInputs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetInputConnectionByNumber(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputConnectionByNumber");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  vtkAlgorithmOutput *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetInputConnectionByNumber(temp0, temp1);
    }
    else
    {
      op->vtkAppendSelection::SetInputConnectionByNumber(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_SetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAppendByUnion(temp0);
    }
    else
    {
      op->vtkAppendSelection::SetAppendByUnion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetAppendByUnion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAppendByUnion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAppendByUnion() :
      op->vtkAppendSelection::GetAppendByUnion());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendByUnionOn();
    }
    else
    {
      op->vtkAppendSelection::AppendByUnionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_AppendByUnionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendByUnionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAppendSelection *op = static_cast<vtkAppendSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AppendByUnionOff();
    }
    else
    {
      op->vtkAppendSelection::AppendByUnionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAppendSelection_GetColorArrayName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetColorArrayName");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    const char *tempr = vtkAppendSelection::GetColorArrayName();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAppendSelection_Methods[] = {
  {"IsTypeOf", PyvtkAppendSelection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAppendSelection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAppendSelection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAppendSelection\nC++: static vtkAppendSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAppendSelection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAppendSelection\nC++: vtkAppendSelection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAppendSelection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAppendSelection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExpression", PyvtkAppendSelection_SetExpression, METH_VARARGS,
   "SetExpression(self, arg:str) -> None\nC++: virtual void SetExpression(const char *arg)\n\nSet/Get the expression that defines the boolean expression to\ncombine the selections. Expression consists of node name\nidentifiers, `|` for boolean-or, '^' for boolean-xor, '&' for\nboolean and, '!' for boolean not, and parenthesis `(` and `)`. If\nyou want to set the expression, be sure to define the node names.\nIf no expression is specified and there are multiple selections,\nthen the default expression simply combines all the selection\nnodes using an `or` operator.\n\n`SetExpression` does not validate the expression. It will be\nvalidated `internally.\n\nNOTE: If you want to use the expression, AppendByUnion MUST be\nset to false, and the input selection names MUST be defined.\n"},
  {"GetExpression", PyvtkAppendSelection_GetExpression, METH_VARARGS,
   "GetExpression(self) -> str\nC++: virtual const char *GetExpression()\n\n"},
  {"SetInverse", PyvtkAppendSelection_SetInverse, METH_VARARGS,
   "SetInverse(self, _arg:bool) -> None\nC++: virtual void SetInverse(bool _arg)\n\nDetermines whether the selection describes what to include or\nexclude.\n\nThe default is false, meaning include.\n\nNOTE: If you want to use Inverse, AppendByUnion MUST be set to\nfalse. If Expression is set, then the inverse flag inverses it\n(internally) without modifying it.\n"},
  {"InverseOn", PyvtkAppendSelection_InverseOn, METH_VARARGS,
   "InverseOn(self) -> None\nC++: virtual void InverseOn()\n\n"},
  {"InverseOff", PyvtkAppendSelection_InverseOff, METH_VARARGS,
   "InverseOff(self) -> None\nC++: virtual void InverseOff()\n\n"},
  {"GetInverse", PyvtkAppendSelection_GetInverse, METH_VARARGS,
   "GetInverse(self) -> bool\nC++: virtual bool GetInverse()\n\n"},
  {"SetInputName", PyvtkAppendSelection_SetInputName, METH_VARARGS,
   "SetInputName(self, index:int, name:str) -> None\nC++: void SetInputName(int index, const char *name)\n\nSet/Get names for inputs selections.\n\nNOTE: Input selection names are useful only if you have set the\nExpression, and AppendByUnion is set to false.\n"},
  {"GetInputName", PyvtkAppendSelection_GetInputName, METH_VARARGS,
   "GetInputName(self, index:int) -> str\nC++: const char *GetInputName(int index)\n\n"},
  {"RemoveAllInputNames", PyvtkAppendSelection_RemoveAllInputNames, METH_VARARGS,
   "RemoveAllInputNames(self) -> None\nC++: void RemoveAllInputNames()\n\nRemove all assigned input selection names.\n"},
  {"SetInputColor", PyvtkAppendSelection_SetInputColor, METH_VARARGS,
   "SetInputColor(self, index:int, r:float, g:float, b:float) -> None\nC++: void SetInputColor(int index, double r, double g, double b)\n\nSet/Get colors for inputs selections.\n\nAssign a color to a selection specified by its index. If defined,\nthe given color will be used to display this selection.\n"},
  {"GetInputColor", PyvtkAppendSelection_GetInputColor, METH_VARARGS,
   "GetInputColor(self, index:int) -> Pointer\nC++: double *GetInputColor(int index)\n\n"},
  {"RemoveAllInputColors", PyvtkAppendSelection_RemoveAllInputColors, METH_VARARGS,
   "RemoveAllInputColors(self) -> None\nC++: void RemoveAllInputColors()\n\nRemove all assigned input selection colors.\n"},
  {"SetUserManagedInputs", PyvtkAppendSelection_SetUserManagedInputs, METH_VARARGS,
   "SetUserManagedInputs(self, _arg:int) -> None\nC++: virtual void SetUserManagedInputs(vtkTypeBool _arg)\n\nUserManagedInputs allows the user to set inputs by number instead\nof using the AddInput/RemoveInput functions. Calls to\nSetNumberOfInputs/SetInputByNumber should not be mixed with calls\nto AddInput/RemoveInput.\n\nThe default is false.\n"},
  {"GetUserManagedInputs", PyvtkAppendSelection_GetUserManagedInputs, METH_VARARGS,
   "GetUserManagedInputs(self) -> int\nC++: virtual vtkTypeBool GetUserManagedInputs()\n\n"},
  {"UserManagedInputsOn", PyvtkAppendSelection_UserManagedInputsOn, METH_VARARGS,
   "UserManagedInputsOn(self) -> None\nC++: virtual void UserManagedInputsOn()\n\n"},
  {"UserManagedInputsOff", PyvtkAppendSelection_UserManagedInputsOff, METH_VARARGS,
   "UserManagedInputsOff(self) -> None\nC++: virtual void UserManagedInputsOff()\n\n"},
  {"AddInputData", PyvtkAppendSelection_AddInputData, METH_VARARGS,
   "AddInputData(self, __a:vtkSelection) -> None\nC++: void AddInputData(vtkSelection *)\n\nAdd a dataset to the list of data to append. Should not be used\nwhen UserManagedInputs is true, use SetInputByNumber instead.\n"},
  {"RemoveInputData", PyvtkAppendSelection_RemoveInputData, METH_VARARGS,
   "RemoveInputData(self, __a:vtkSelection) -> None\nC++: void RemoveInputData(vtkSelection *)\n\nRemove a dataset from the list of data to append. Should not be\nused when UserManagedInputs is true, use SetInputByNumber\n(nullptr) instead.\n"},
  {"GetInput", PyvtkAppendSelection_GetInput, METH_VARARGS,
   "GetInput(self, idx:int) -> vtkSelection\nC++: vtkSelection *GetInput(int idx)\nGetInput(self) -> vtkSelection\nC++: vtkSelection *GetInput()\n\nGet any input of this filter.\n"},
  {"SetNumberOfInputs", PyvtkAppendSelection_SetNumberOfInputs, METH_VARARGS,
   "SetNumberOfInputs(self, num:int) -> None\nC++: void SetNumberOfInputs(int num)\n\nDirectly set(allocate) number of inputs, should only be used when\nUserManagedInputs is true.\n"},
  {"SetInputConnectionByNumber", PyvtkAppendSelection_SetInputConnectionByNumber, METH_VARARGS,
   "SetInputConnectionByNumber(self, num:int,\n    input:vtkAlgorithmOutput) -> None\nC++: void SetInputConnectionByNumber(int num,\n    vtkAlgorithmOutput *input)\n\n"},
  {"SetAppendByUnion", PyvtkAppendSelection_SetAppendByUnion, METH_VARARGS,
   "SetAppendByUnion(self, _arg:int) -> None\nC++: virtual void SetAppendByUnion(vtkTypeBool _arg)\n\nWhen set to true, all the selections are combined together to\nform a single vtkSelection output. When set to false, the output\nis a composite selection with input selections as the children of\nthe composite selection. This allows for selections with\ndifferent content types and properties.\n\nThe default is true.\n"},
  {"GetAppendByUnion", PyvtkAppendSelection_GetAppendByUnion, METH_VARARGS,
   "GetAppendByUnion(self) -> int\nC++: virtual vtkTypeBool GetAppendByUnion()\n\n"},
  {"AppendByUnionOn", PyvtkAppendSelection_AppendByUnionOn, METH_VARARGS,
   "AppendByUnionOn(self) -> None\nC++: virtual void AppendByUnionOn()\n\n"},
  {"AppendByUnionOff", PyvtkAppendSelection_AppendByUnionOff, METH_VARARGS,
   "AppendByUnionOff(self) -> None\nC++: virtual void AppendByUnionOff()\n\n"},
  {"GetColorArrayName", PyvtkAppendSelection_GetColorArrayName, METH_VARARGS,
   "GetColorArrayName() -> str\nC++: static const char *GetColorArrayName()\n\nReturn the specific name used for the selection color array.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAppendSelection_Doc =
  "vtkAppendSelection - appends one or more selections together\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkAppendSelection is a filter that appends one of more selections\n"
  "into a single selection.\n\n"
  "If AppendByUnion is true, all selections must have the same content\n"
  "type and they are combined together to form a single vtkSelection\n"
  "output.\n\n"
  "If AppendByUnion is false, the output is a composite selection with\n"
  "input selections as the children of the composite selection. This\n"
  "allows for selections with different content types and properties.\n\n"
  "If AppendByUnion is true, an Expression can be defined which uses the\n"
  "input selection names to define the relation between the selections.\n"
  "If the Expression is not defined, all the selection are combined\n"
  "using the '| 'boolean operator.\n\n"
  "@warning It should be noted that this filter is not responsible for\n"
  "    checking if\n"
  "the field type is the same across all selections nodes of all\n"
  "selections.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAppendSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAppendSelection", // tp_name
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
  PyvtkAppendSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAppendSelection_StaticNew()
{
  return vtkAppendSelection::New();
}

PyObject *PyvtkAppendSelection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAppendSelection_Type, PyvtkAppendSelection_Methods,
    "vtkAppendSelection",
 &PyvtkAppendSelection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAppendSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAppendSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAppendSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

