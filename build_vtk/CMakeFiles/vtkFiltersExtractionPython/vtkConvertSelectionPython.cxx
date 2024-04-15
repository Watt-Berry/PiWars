// python wrapper for vtkConvertSelection
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConvertSelection.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvertSelection(PyObject *dict); }
extern "C" { PyObject *PyvtkConvertSelection_ClassNew(); }


static PyObject *
PyvtkConvertSelection_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvertSelection::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvertSelection::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvertSelection *tempr = vtkConvertSelection::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvertSelection *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvertSelection::NewInstance());

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
PyvtkConvertSelection_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConvertSelection::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConvertSelection::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetDataObjectConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectConnection(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetDataObjectConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputFieldType(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetInputFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetInputFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputFieldType() :
      op->vtkConvertSelection::GetInputFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputType(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetOutputType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetOutputType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputType() :
      op->vtkConvertSelection::GetOutputType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkConvertSelection::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetArrayNames(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetArrayNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetArrayNames() :
      op->vtkConvertSelection::GetArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AddArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddArrayName(temp0);
    }
    else
    {
      op->vtkConvertSelection::AddArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ClearArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearArrayNames();
    }
    else
    {
      op->vtkConvertSelection::ClearArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMatchAnyValues(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetMatchAnyValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetMatchAnyValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchAnyValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMatchAnyValues() :
      op->vtkConvertSelection::GetMatchAnyValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatchAnyValuesOn();
    }
    else
    {
      op->vtkConvertSelection::MatchAnyValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_MatchAnyValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MatchAnyValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MatchAnyValuesOff();
    }
    else
    {
      op->vtkConvertSelection::MatchAnyValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetAllowMissingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAllowMissingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAllowMissingArray(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetAllowMissingArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetAllowMissingArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAllowMissingArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAllowMissingArray() :
      op->vtkConvertSelection::GetAllowMissingArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AllowMissingArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMissingArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMissingArrayOn();
    }
    else
    {
      op->vtkConvertSelection::AllowMissingArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_AllowMissingArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllowMissingArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AllowMissingArrayOff();
    }
    else
    {
      op->vtkConvertSelection::AllowMissingArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_SetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  vtkExtractSelection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkExtractSelection"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionExtractor(temp0);
    }
    else
    {
      op->vtkConvertSelection::SetSelectionExtractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectionExtractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionExtractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertSelection *op = static_cast<vtkConvertSelection *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelection *tempr = (ap.IsBound() ?
      op->GetSelectionExtractor() :
      op->vtkConvertSelection::GetSelectionExtractor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToIndexSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToIndexSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToIndexSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToGlobalIdSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToGlobalIdSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToGlobalIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToPedigreeIdSelection(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToPedigreeIdSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToPedigreeIdSelection(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToValueSelection_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2))
  {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkConvertSelection_ToValueSelection_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToValueSelection");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  vtkStringArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetVTKObject(temp2, "vtkStringArray"))
  {
    vtkSelection *tempr = vtkConvertSelection::ToValueSelection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConvertSelection_ToValueSelection_Methods[] = {
  {"ToValueSelection", PyvtkConvertSelection_ToValueSelection_s1, METH_VARARGS | METH_STATIC,
   "VVz *vtkSelection *vtkDataObject"},
  {"ToValueSelection", PyvtkConvertSelection_ToValueSelection_s2, METH_VARARGS | METH_STATIC,
   "VVV *vtkSelection *vtkDataObject *vtkStringArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkConvertSelection_ToValueSelection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkConvertSelection_ToValueSelection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ToValueSelection");
  return nullptr;
}


static PyObject *
PyvtkConvertSelection_GetSelectedItems(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedItems");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  int temp2;
  vtkIdTypeArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedItems(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedVertices(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedVertices");

  vtkSelection *temp0 = nullptr;
  vtkGraph *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedVertices(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedEdges(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedEdges");

  vtkSelection *temp0 = nullptr;
  vtkGraph *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkGraph") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedEdges(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedPoints");

  vtkSelection *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedPoints(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedCells");

  vtkSelection *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedCells(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_GetSelectedRows(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetSelectedRows");

  vtkSelection *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    vtkConvertSelection::GetSelectedRows(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertSelection_ToSelectionType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ToSelectionType");

  vtkSelection *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  int temp2;
  vtkStringArray *temp3 = nullptr;
  int temp4 = -1;
  bool temp5 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3, 6) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp3, "vtkStringArray")) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkSelection *tempr = vtkConvertSelection::ToSelectionType(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkConvertSelection_Methods[] = {
  {"IsTypeOf", PyvtkConvertSelection_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvertSelection_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvertSelection_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConvertSelection\nC++: static vtkConvertSelection *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvertSelection_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConvertSelection\nC++: vtkConvertSelection *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConvertSelection_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConvertSelection_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDataObjectConnection", PyvtkConvertSelection_SetDataObjectConnection, METH_VARARGS,
   "SetDataObjectConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetDataObjectConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the data\nobject).\n"},
  {"SetInputFieldType", PyvtkConvertSelection_SetInputFieldType, METH_VARARGS,
   "SetInputFieldType(self, _arg:int) -> None\nC++: virtual void SetInputFieldType(int _arg)\n\nThe input field type. If this is set to a number other than -1,\nignores the input selection field type and instead assumes that\nall selection nodes have the field type specified. This should be\none of the constants defined in vtkSelectionNode.h. Default is\n-1.\n"},
  {"GetInputFieldType", PyvtkConvertSelection_GetInputFieldType, METH_VARARGS,
   "GetInputFieldType(self) -> int\nC++: virtual int GetInputFieldType()\n\n"},
  {"SetOutputType", PyvtkConvertSelection_SetOutputType, METH_VARARGS,
   "SetOutputType(self, _arg:int) -> None\nC++: virtual void SetOutputType(int _arg)\n\nThe output selection content type. This should be one of the\nconstants defined in vtkSelectionNode.h.\n"},
  {"GetOutputType", PyvtkConvertSelection_GetOutputType, METH_VARARGS,
   "GetOutputType(self) -> int\nC++: virtual int GetOutputType()\n\n"},
  {"SetArrayName", PyvtkConvertSelection_SetArrayName, METH_VARARGS,
   "SetArrayName(self, __a:str) -> None\nC++: virtual void SetArrayName(const char *)\n\nThe output array name for value or threshold selections.\n"},
  {"GetArrayName", PyvtkConvertSelection_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual const char *GetArrayName()\n\n"},
  {"SetArrayNames", PyvtkConvertSelection_SetArrayNames, METH_VARARGS,
   "SetArrayNames(self, __a:vtkStringArray) -> None\nC++: virtual void SetArrayNames(vtkStringArray *)\n\nThe output array names for value selection.\n"},
  {"GetArrayNames", PyvtkConvertSelection_GetArrayNames, METH_VARARGS,
   "GetArrayNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetArrayNames()\n\n"},
  {"AddArrayName", PyvtkConvertSelection_AddArrayName, METH_VARARGS,
   "AddArrayName(self, __a:str) -> None\nC++: void AddArrayName(const char *)\n\nConvenience methods used by UI\n"},
  {"ClearArrayNames", PyvtkConvertSelection_ClearArrayNames, METH_VARARGS,
   "ClearArrayNames(self) -> None\nC++: void ClearArrayNames()\n\n"},
  {"SetMatchAnyValues", PyvtkConvertSelection_SetMatchAnyValues, METH_VARARGS,
   "SetMatchAnyValues(self, _arg:bool) -> None\nC++: virtual void SetMatchAnyValues(bool _arg)\n\nWhen on, creates a separate selection node for each array.\nDefaults to OFF.\n"},
  {"GetMatchAnyValues", PyvtkConvertSelection_GetMatchAnyValues, METH_VARARGS,
   "GetMatchAnyValues(self) -> bool\nC++: virtual bool GetMatchAnyValues()\n\n"},
  {"MatchAnyValuesOn", PyvtkConvertSelection_MatchAnyValuesOn, METH_VARARGS,
   "MatchAnyValuesOn(self) -> None\nC++: virtual void MatchAnyValuesOn()\n\n"},
  {"MatchAnyValuesOff", PyvtkConvertSelection_MatchAnyValuesOff, METH_VARARGS,
   "MatchAnyValuesOff(self) -> None\nC++: virtual void MatchAnyValuesOff()\n\n"},
  {"SetAllowMissingArray", PyvtkConvertSelection_SetAllowMissingArray, METH_VARARGS,
   "SetAllowMissingArray(self, _arg:bool) -> None\nC++: virtual void SetAllowMissingArray(bool _arg)\n\nWhen enabled, not finding expected array will not return an\nerror. Defaults to OFF.\n"},
  {"GetAllowMissingArray", PyvtkConvertSelection_GetAllowMissingArray, METH_VARARGS,
   "GetAllowMissingArray(self) -> bool\nC++: virtual bool GetAllowMissingArray()\n\n"},
  {"AllowMissingArrayOn", PyvtkConvertSelection_AllowMissingArrayOn, METH_VARARGS,
   "AllowMissingArrayOn(self) -> None\nC++: virtual void AllowMissingArrayOn()\n\n"},
  {"AllowMissingArrayOff", PyvtkConvertSelection_AllowMissingArrayOff, METH_VARARGS,
   "AllowMissingArrayOff(self) -> None\nC++: virtual void AllowMissingArrayOff()\n\n"},
  {"SetSelectionExtractor", PyvtkConvertSelection_SetSelectionExtractor, METH_VARARGS,
   "SetSelectionExtractor(self, __a:vtkExtractSelection) -> None\nC++: virtual void SetSelectionExtractor(vtkExtractSelection *)\n\nSet/get a selection extractor used in some conversions to obtain\nIDs.\n"},
  {"GetSelectionExtractor", PyvtkConvertSelection_GetSelectionExtractor, METH_VARARGS,
   "GetSelectionExtractor(self) -> vtkExtractSelection\nC++: virtual vtkExtractSelection *GetSelectionExtractor()\n\n"},
  {"ToIndexSelection", PyvtkConvertSelection_ToIndexSelection, METH_VARARGS,
   "ToIndexSelection(input:vtkSelection, data:vtkDataObject)\n    -> vtkSelection\nC++: static vtkSelection *ToIndexSelection(vtkSelection *input,\n    vtkDataObject *data)\n\nStatic methods for easily converting between selection types.\nNOTE: The returned selection pointer IS reference counted, so be\nsure to Delete() it when you are done with it.\n"},
  {"ToGlobalIdSelection", PyvtkConvertSelection_ToGlobalIdSelection, METH_VARARGS,
   "ToGlobalIdSelection(input:vtkSelection, data:vtkDataObject)\n    -> vtkSelection\nC++: static vtkSelection *ToGlobalIdSelection(vtkSelection *input,\n     vtkDataObject *data)\n\n"},
  {"ToPedigreeIdSelection", PyvtkConvertSelection_ToPedigreeIdSelection, METH_VARARGS,
   "ToPedigreeIdSelection(input:vtkSelection, data:vtkDataObject)\n    -> vtkSelection\nC++: static vtkSelection *ToPedigreeIdSelection(\n    vtkSelection *input, vtkDataObject *data)\n\n"},
  {"ToValueSelection", PyvtkConvertSelection_ToValueSelection, METH_VARARGS,
   "ToValueSelection(input:vtkSelection, data:vtkDataObject,\n    arrayName:str) -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, const char *arrayName)\nToValueSelection(input:vtkSelection, data:vtkDataObject,\n    arrayNames:vtkStringArray) -> vtkSelection\nC++: static vtkSelection *ToValueSelection(vtkSelection *input,\n    vtkDataObject *data, vtkStringArray *arrayNames)\n\n"},
  {"GetSelectedItems", PyvtkConvertSelection_GetSelectedItems, METH_VARARGS,
   "GetSelectedItems(input:vtkSelection, data:vtkDataObject,\n    fieldType:int, indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedItems(vtkSelection *input,\n    vtkDataObject *data, int fieldType, vtkIdTypeArray *indices)\n\nStatic generic method for obtaining selected items from a data\nobject. Other static methods (e.g. GetSelectedVertices) call this\none.\n"},
  {"GetSelectedVertices", PyvtkConvertSelection_GetSelectedVertices, METH_VARARGS,
   "GetSelectedVertices(input:vtkSelection, data:vtkGraph,\n    indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedVertices(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\nStatic methods for easily obtaining selected items from a data\nobject. The array argument will be filled with the selected\nitems.\n"},
  {"GetSelectedEdges", PyvtkConvertSelection_GetSelectedEdges, METH_VARARGS,
   "GetSelectedEdges(input:vtkSelection, data:vtkGraph,\n    indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedEdges(vtkSelection *input,\n    vtkGraph *data, vtkIdTypeArray *indices)\n\n"},
  {"GetSelectedPoints", PyvtkConvertSelection_GetSelectedPoints, METH_VARARGS,
   "GetSelectedPoints(input:vtkSelection, data:vtkDataSet,\n    indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedPoints(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\n"},
  {"GetSelectedCells", PyvtkConvertSelection_GetSelectedCells, METH_VARARGS,
   "GetSelectedCells(input:vtkSelection, data:vtkDataSet,\n    indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedCells(vtkSelection *input,\n    vtkDataSet *data, vtkIdTypeArray *indices)\n\n"},
  {"GetSelectedRows", PyvtkConvertSelection_GetSelectedRows, METH_VARARGS,
   "GetSelectedRows(input:vtkSelection, data:vtkTable,\n    indices:vtkIdTypeArray) -> None\nC++: static void GetSelectedRows(vtkSelection *input,\n    vtkTable *data, vtkIdTypeArray *indices)\n\n"},
  {"ToSelectionType", PyvtkConvertSelection_ToSelectionType, METH_VARARGS,
   "ToSelectionType(input:vtkSelection, data:vtkDataObject, type:int,\n    arrayNames:vtkStringArray=..., inputFieldType:int=-1,\n    allowMissingArray:bool=False) -> vtkSelection\nC++: static vtkSelection *ToSelectionType(vtkSelection *input,\n    vtkDataObject *data, int type,\n    vtkStringArray *arrayNames=nullptr, int inputFieldType=-1,\n    bool allowMissingArray=false)\n\nA generic static method for converting selection types. The type\nshould be an integer constant defined in vtkSelectionNode.h.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConvertSelection_Doc =
  "vtkConvertSelection - Convert a selection from one type to another\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkConvertSelection converts an input selection from one type to\n"
  "another in the context of a data object being selected. The first\n"
  "input is the selection, while the second input is the data object\n"
  "that the selection relates to.\n\n"
  "@sa\n"
  "vtkSelection vtkSelectionNode vtkExtractSelection\n"
  "vtkExtractSelectedGraph\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConvertSelection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkConvertSelection", // tp_name
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
  PyvtkConvertSelection_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvertSelection_StaticNew()
{
  return vtkConvertSelection::New();
}

PyObject *PyvtkConvertSelection_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConvertSelection_Type, PyvtkConvertSelection_Methods,
    "vtkConvertSelection",
 &PyvtkConvertSelection_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvertSelection(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvertSelection_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvertSelection", o) != 0)
  {
    Py_DECREF(o);
  }

}

