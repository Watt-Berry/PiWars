// python wrapper for vtkCompositeDataDisplayAttributes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkColor.h"
#include "vtkVector.h"
#include "vtkSmartPointer.h"
#include "vtkCompositeDataDisplayAttributes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeDataDisplayAttributes(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositeDataDisplayAttributes_ClassNew(); }


static PyObject *
PyvtkCompositeDataDisplayAttributes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeDataDisplayAttributes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeDataDisplayAttributes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeDataDisplayAttributes *tempr = vtkCompositeDataDisplayAttributes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeDataDisplayAttributes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeDataDisplayAttributes::NewInstance());

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
PyvtkCompositeDataDisplayAttributes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeDataDisplayAttributes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockVisibility(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibility(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockVisibilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickabilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockPickabilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockPickability(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockPickability(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockPickability(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockPickability(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockPickability(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickability");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickability(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockPickability(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockPickabilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockPickabilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockPickabilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockPickabilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockScalarVisibility(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockScalarVisibility(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockScalarVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockScalarVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarVisibility(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarVisibility(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarVisibilities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarVisibilities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarVisibility(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarVisibilities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarVisibilities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarVisibilities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarVisibilities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockUseLookupTableScalarRange(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockUseLookupTableScalarRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockUseLookupTableScalarRange(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockUseLookupTableScalarRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockUseLookupTableScalarRange(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockUseLookupTableScalarRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockUseLookupTableScalarRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockUseLookupTableScalarRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockUseLookupTableScalarRanges() :
      op->vtkCompositeDataDisplayAttributes::HasBlockUseLookupTableScalarRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockUseLookupTableScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockUseLookupTableScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockUseLookupTableScalarRange(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockUseLookupTableScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockUseLookupTableScalarRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockUseLookupTableScalarRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockUseLookupTableScalarRanges();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockUseLookupTableScalarRanges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockInterpolateScalarsBeforeMapping(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockInterpolateScalarsBeforeMapping(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetBlockInterpolateScalarsBeforeMapping(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockInterpolateScalarsBeforeMapping(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockInterpolateScalarsBeforeMapping(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockInterpolateScalarsBeforeMapping(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockInterpolateScalarsBeforeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockInterpolateScalarsBeforeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockInterpolateScalarsBeforeMappings() :
      op->vtkCompositeDataDisplayAttributes::HasBlockInterpolateScalarsBeforeMappings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockInterpolateScalarsBeforeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockInterpolateScalarsBeforeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockInterpolateScalarsBeforeMapping(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockInterpolateScalarsBeforeMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockInterpolateScalarsBeforeMappings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockInterpolateScalarsBeforeMappings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockInterpolateScalarsBeforeMappings();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockInterpolateScalarsBeforeMappings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBlockColor(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkColor3d tempr = (ap.IsBound() ?
      op->GetBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkColor3d");
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s1(self, args);
    case 1:
      return PyvtkCompositeDataDisplayAttributes_GetBlockColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBlockColor");
  return nullptr;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColors() :
      op->vtkCompositeDataDisplayAttributes::HasBlockColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColor(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColor(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColors();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockOpacity(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockOpacity(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    double tempr = (ap.IsBound() ?
      op->GetBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacities() :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockOpacity(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockOpacity(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacity(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockOpacities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockOpacities();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockOpacities();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockMaterial(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockMaterial(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    const std::string *tempr = (ap.IsBound() ?
      &op->GetBlockMaterial(temp0) :
      &op->vtkCompositeDataDisplayAttributes::GetBlockMaterial(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockMaterials() :
      op->vtkCompositeDataDisplayAttributes::HasBlockMaterials());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockMaterial(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockMaterial(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockMaterial(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterials(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockMaterials");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockMaterials();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockMaterials();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockColorMode(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockColorMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockColorMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockColorMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColorMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockColorMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockColorModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockColorModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockColorModes() :
      op->vtkCompositeDataDisplayAttributes::HasBlockColorModes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColorMode(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockColorModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockColorModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockColorModes();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockColorModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockScalarMode(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockScalarMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockScalarMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockScalarMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarModes() :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarModes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarMode(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarModes();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayAccessMode(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockArrayAccessMode(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayAccessMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockArrayAccessMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayAccessMode(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayAccessMode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayAccessModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayAccessModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayAccessModes() :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayAccessModes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayAccessMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayAccessMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayAccessMode(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayAccessMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayAccessModes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayAccessModes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayAccessModes();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayAccessModes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayComponent(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayComponent(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayComponents() :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayComponent(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayComponents();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayComponents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayId(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockArrayId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->GetBlockArrayId(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockArrayId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayId(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayIds() :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayId(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayIds();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkVector2d *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2d"))
  {
    if (ap.IsBound())
    {
      op->SetBlockScalarRange(temp0, *temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockScalarRange(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkVector2d tempr = (ap.IsBound() ?
      op->GetBlockScalarRange(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockScalarRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2d");
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarRange(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarRange(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockScalarRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockScalarRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockScalarRanges() :
      op->vtkCompositeDataDisplayAttributes::HasBlockScalarRanges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarRange(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarRanges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockScalarRanges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockScalarRanges();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockScalarRanges();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockArrayName(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetBlockArrayName(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayName(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockArrayNames() :
      op->vtkCompositeDataDisplayAttributes::HasBlockArrayNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayName(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockArrayNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockArrayNames();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockArrayNames();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetBlockFieldDataTupleId(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockFieldDataTupleId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBlockFieldDataTupleId(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockFieldDataTupleId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockFieldDataTupleId(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockFieldDataTupleId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockFieldDataTupleIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockFieldDataTupleIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockFieldDataTupleIds() :
      op->vtkCompositeDataDisplayAttributes::HasBlockFieldDataTupleIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockFieldDataTupleId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockFieldDataTupleId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockFieldDataTupleId(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockFieldDataTupleId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockFieldDataTupleIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockFieldDataTupleIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockFieldDataTupleIds();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockFieldDataTupleIds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_SetBlockLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBlockLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  vtkSmartPointer<vtkScalarsToColors> temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetBlockLookupTable(temp0, temp1);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::SetBlockLookupTable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_GetBlockLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBlockLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkSmartPointer<vtkScalarsToColors> tempr = (ap.IsBound() ?
      op->GetBlockLookupTable(temp0) :
      op->vtkCompositeDataDisplayAttributes::GetBlockLookupTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockLookupTable(temp0) :
      op->vtkCompositeDataDisplayAttributes::HasBlockLookupTable(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_HasBlockLookupTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBlockLookupTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBlockLookupTables() :
      op->vtkCompositeDataDisplayAttributes::HasBlockLookupTables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockLookupTable(temp0);
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_RemoveBlockLookupTables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveBlockLookupTables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeDataDisplayAttributes *op = static_cast<vtkCompositeDataDisplayAttributes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveBlockLookupTables();
    }
    else
    {
      op->vtkCompositeDataDisplayAttributes::RemoveBlockLookupTables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_ComputeVisibleBounds(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeVisibleBounds");

  vtkCompositeDataDisplayAttributes *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkCompositeDataDisplayAttributes") &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkCompositeDataDisplayAttributes::ComputeVisibleBounds(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeDataDisplayAttributes_DataObjectFromIndex(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DataObjectFromIndex");

  unsigned int temp0;
  vtkDataObject *temp1 = nullptr;
  unsigned int temp2 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataObject") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkDataObject *tempr = vtkCompositeDataDisplayAttributes::DataObjectFromIndex(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeDataDisplayAttributes_Methods[] = {
  {"IsTypeOf", PyvtkCompositeDataDisplayAttributes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeDataDisplayAttributes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeDataDisplayAttributes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCompositeDataDisplayAttributes\nC++: static vtkCompositeDataDisplayAttributes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeDataDisplayAttributes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeDataDisplayAttributes\nC++: vtkCompositeDataDisplayAttributes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeDataDisplayAttributes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeDataDisplayAttributes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"HasBlockVisibilities", PyvtkCompositeDataDisplayAttributes_HasBlockVisibilities, METH_VARARGS,
   "HasBlockVisibilities(self) -> bool\nC++: bool HasBlockVisibilities()\n\nReturns true if any block has any block visibility is set.\n"},
  {"SetBlockVisibility", PyvtkCompositeDataDisplayAttributes_SetBlockVisibility, METH_VARARGS,
   "SetBlockVisibility(self, data_object:vtkDataObject, visible:bool)\n    -> None\nC++: void SetBlockVisibility(vtkDataObject *data_object,\n    bool visible)\n\nSet/get the visibility for the block with data_object.\n"},
  {"GetBlockVisibility", PyvtkCompositeDataDisplayAttributes_GetBlockVisibility, METH_VARARGS,
   "GetBlockVisibility(self, data_object:vtkDataObject) -> bool\nC++: bool GetBlockVisibility(vtkDataObject *data_object)\n\n"},
  {"HasBlockVisibility", PyvtkCompositeDataDisplayAttributes_HasBlockVisibility, METH_VARARGS,
   "HasBlockVisibility(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockVisibility(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a\nvisibility set.\n"},
  {"RemoveBlockVisibility", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibility, METH_VARARGS,
   "RemoveBlockVisibility(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockVisibility(vtkDataObject *data_object)\n\nRemoves the block visibility flag for the block with data_object.\n"},
  {"RemoveBlockVisibilities", PyvtkCompositeDataDisplayAttributes_RemoveBlockVisibilities, METH_VARARGS,
   "RemoveBlockVisibilities(self) -> None\nC++: void RemoveBlockVisibilities()\n\nRemoves all block visibility flags. This effectively sets the\nvisibility for all blocks to true.\n"},
  {"HasBlockPickabilities", PyvtkCompositeDataDisplayAttributes_HasBlockPickabilities, METH_VARARGS,
   "HasBlockPickabilities(self) -> bool\nC++: bool HasBlockPickabilities()\n\nReturns true if any block has any block pickability is set.\n"},
  {"SetBlockPickability", PyvtkCompositeDataDisplayAttributes_SetBlockPickability, METH_VARARGS,
   "SetBlockPickability(self, data_object:vtkDataObject, visible:bool)\n     -> None\nC++: void SetBlockPickability(vtkDataObject *data_object,\n    bool visible)\n\nSet/get the pickability for the block with data_object.\n"},
  {"GetBlockPickability", PyvtkCompositeDataDisplayAttributes_GetBlockPickability, METH_VARARGS,
   "GetBlockPickability(self, data_object:vtkDataObject) -> bool\nC++: bool GetBlockPickability(vtkDataObject *data_object)\n\n"},
  {"HasBlockPickability", PyvtkCompositeDataDisplayAttributes_HasBlockPickability, METH_VARARGS,
   "HasBlockPickability(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockPickability(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a\npickability set.\n"},
  {"RemoveBlockPickability", PyvtkCompositeDataDisplayAttributes_RemoveBlockPickability, METH_VARARGS,
   "RemoveBlockPickability(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockPickability(vtkDataObject *data_object)\n\nRemoves the block pickability flag for the block with\ndata_object.\n"},
  {"RemoveBlockPickabilities", PyvtkCompositeDataDisplayAttributes_RemoveBlockPickabilities, METH_VARARGS,
   "RemoveBlockPickabilities(self) -> None\nC++: void RemoveBlockPickabilities()\n\nRemoves all block pickability flags. This effectively sets the\npickability for all blocks to true.\n"},
  {"SetBlockScalarVisibility", PyvtkCompositeDataDisplayAttributes_SetBlockScalarVisibility, METH_VARARGS,
   "SetBlockScalarVisibility(self, data_object:vtkDataObject,\n    value:bool) -> None\nC++: void SetBlockScalarVisibility(vtkDataObject *data_object,\n    bool value)\n\n@see vtkMapper::SetScalarVisibility\n"},
  {"GetBlockScalarVisibility", PyvtkCompositeDataDisplayAttributes_GetBlockScalarVisibility, METH_VARARGS,
   "GetBlockScalarVisibility(self, data_object:vtkDataObject) -> bool\nC++: bool GetBlockScalarVisibility(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarVisibility", PyvtkCompositeDataDisplayAttributes_HasBlockScalarVisibility, METH_VARARGS,
   "HasBlockScalarVisibility(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockScalarVisibility(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarVisibilities", PyvtkCompositeDataDisplayAttributes_HasBlockScalarVisibilities, METH_VARARGS,
   "HasBlockScalarVisibilities(self) -> bool\nC++: bool HasBlockScalarVisibilities()\n\n"},
  {"RemoveBlockScalarVisibility", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarVisibility, METH_VARARGS,
   "RemoveBlockScalarVisibility(self, data_object:vtkDataObject)\n    -> None\nC++: void RemoveBlockScalarVisibility(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockScalarVisibilities", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarVisibilities, METH_VARARGS,
   "RemoveBlockScalarVisibilities(self) -> None\nC++: void RemoveBlockScalarVisibilities()\n\n"},
  {"SetBlockUseLookupTableScalarRange", PyvtkCompositeDataDisplayAttributes_SetBlockUseLookupTableScalarRange, METH_VARARGS,
   "SetBlockUseLookupTableScalarRange(self, data_object:vtkDataObject,\n     value:bool) -> None\nC++: void SetBlockUseLookupTableScalarRange(\n    vtkDataObject *data_object, bool value)\n\n@see vtkMapper::SetUseLookupTableScalarRange\n"},
  {"GetBlockUseLookupTableScalarRange", PyvtkCompositeDataDisplayAttributes_GetBlockUseLookupTableScalarRange, METH_VARARGS,
   "GetBlockUseLookupTableScalarRange(self, data_object:vtkDataObject)\n     -> bool\nC++: bool GetBlockUseLookupTableScalarRange(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockUseLookupTableScalarRange", PyvtkCompositeDataDisplayAttributes_HasBlockUseLookupTableScalarRange, METH_VARARGS,
   "HasBlockUseLookupTableScalarRange(self, data_object:vtkDataObject)\n     -> bool\nC++: bool HasBlockUseLookupTableScalarRange(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockUseLookupTableScalarRanges", PyvtkCompositeDataDisplayAttributes_HasBlockUseLookupTableScalarRanges, METH_VARARGS,
   "HasBlockUseLookupTableScalarRanges(self) -> bool\nC++: bool HasBlockUseLookupTableScalarRanges()\n\n"},
  {"RemoveBlockUseLookupTableScalarRange", PyvtkCompositeDataDisplayAttributes_RemoveBlockUseLookupTableScalarRange, METH_VARARGS,
   "RemoveBlockUseLookupTableScalarRange(self,\n    data_object:vtkDataObject) -> None\nC++: void RemoveBlockUseLookupTableScalarRange(\n    vtkDataObject *data_object)\n\n"},
  {"RemoveBlockUseLookupTableScalarRanges", PyvtkCompositeDataDisplayAttributes_RemoveBlockUseLookupTableScalarRanges, METH_VARARGS,
   "RemoveBlockUseLookupTableScalarRanges(self) -> None\nC++: void RemoveBlockUseLookupTableScalarRanges()\n\n"},
  {"SetBlockInterpolateScalarsBeforeMapping", PyvtkCompositeDataDisplayAttributes_SetBlockInterpolateScalarsBeforeMapping, METH_VARARGS,
   "SetBlockInterpolateScalarsBeforeMapping(self,\n    data_object:vtkDataObject, value:bool) -> None\nC++: void SetBlockInterpolateScalarsBeforeMapping(\n    vtkDataObject *data_object, bool value)\n\n@see vtkMapper::SetInterpolateScalarsBeforeMapping\n"},
  {"GetBlockInterpolateScalarsBeforeMapping", PyvtkCompositeDataDisplayAttributes_GetBlockInterpolateScalarsBeforeMapping, METH_VARARGS,
   "GetBlockInterpolateScalarsBeforeMapping(self,\n    data_object:vtkDataObject) -> bool\nC++: bool GetBlockInterpolateScalarsBeforeMapping(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockInterpolateScalarsBeforeMapping", PyvtkCompositeDataDisplayAttributes_HasBlockInterpolateScalarsBeforeMapping, METH_VARARGS,
   "HasBlockInterpolateScalarsBeforeMapping(self,\n    data_object:vtkDataObject) -> bool\nC++: bool HasBlockInterpolateScalarsBeforeMapping(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockInterpolateScalarsBeforeMappings", PyvtkCompositeDataDisplayAttributes_HasBlockInterpolateScalarsBeforeMappings, METH_VARARGS,
   "HasBlockInterpolateScalarsBeforeMappings(self) -> bool\nC++: bool HasBlockInterpolateScalarsBeforeMappings()\n\n"},
  {"RemoveBlockInterpolateScalarsBeforeMapping", PyvtkCompositeDataDisplayAttributes_RemoveBlockInterpolateScalarsBeforeMapping, METH_VARARGS,
   "RemoveBlockInterpolateScalarsBeforeMapping(self,\n    data_object:vtkDataObject) -> None\nC++: void RemoveBlockInterpolateScalarsBeforeMapping(\n    vtkDataObject *data_object)\n\n"},
  {"RemoveBlockInterpolateScalarsBeforeMappings", PyvtkCompositeDataDisplayAttributes_RemoveBlockInterpolateScalarsBeforeMappings, METH_VARARGS,
   "RemoveBlockInterpolateScalarsBeforeMappings(self) -> None\nC++: void RemoveBlockInterpolateScalarsBeforeMappings()\n\n"},
  {"SetBlockColor", PyvtkCompositeDataDisplayAttributes_SetBlockColor, METH_VARARGS,
   "SetBlockColor(self, data_object:vtkDataObject, color:(float,\n    float, float)) -> None\nC++: void SetBlockColor(vtkDataObject *data_object,\n    const double color[3])\n\nSet/get the color for the block with data_object.\n"},
  {"GetBlockColor", PyvtkCompositeDataDisplayAttributes_GetBlockColor, METH_VARARGS,
   "GetBlockColor(self, data_object:vtkDataObject, color:[float,\n    float, float]) -> None\nC++: void GetBlockColor(vtkDataObject *data_object,\n    double color[3])\nGetBlockColor(self, data_object:vtkDataObject) -> vtkColor3d\nC++: vtkColor3d GetBlockColor(vtkDataObject *data_object)\n\n"},
  {"HasBlockColors", PyvtkCompositeDataDisplayAttributes_HasBlockColors, METH_VARARGS,
   "HasBlockColors(self) -> bool\nC++: bool HasBlockColors()\n\nReturns true if any block has any block color is set.\n"},
  {"HasBlockColor", PyvtkCompositeDataDisplayAttributes_HasBlockColor, METH_VARARGS,
   "HasBlockColor(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockColor(vtkDataObject *data_object)\n\nReturns true if the block with the given data_object has a color.\n"},
  {"RemoveBlockColor", PyvtkCompositeDataDisplayAttributes_RemoveBlockColor, METH_VARARGS,
   "RemoveBlockColor(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockColor(vtkDataObject *data_object)\n\nRemoves the block color for the block with data_object.\n"},
  {"RemoveBlockColors", PyvtkCompositeDataDisplayAttributes_RemoveBlockColors, METH_VARARGS,
   "RemoveBlockColors(self) -> None\nC++: void RemoveBlockColors()\n\nRemoves all block colors.\n"},
  {"SetBlockOpacity", PyvtkCompositeDataDisplayAttributes_SetBlockOpacity, METH_VARARGS,
   "SetBlockOpacity(self, data_object:vtkDataObject, opacity:float)\n    -> None\nC++: void SetBlockOpacity(vtkDataObject *data_object,\n    double opacity)\n\nSet/get the opacity for the block with data_object.\n"},
  {"GetBlockOpacity", PyvtkCompositeDataDisplayAttributes_GetBlockOpacity, METH_VARARGS,
   "GetBlockOpacity(self, data_object:vtkDataObject) -> float\nC++: double GetBlockOpacity(vtkDataObject *data_object)\n\n"},
  {"HasBlockOpacities", PyvtkCompositeDataDisplayAttributes_HasBlockOpacities, METH_VARARGS,
   "HasBlockOpacities(self) -> bool\nC++: bool HasBlockOpacities()\n\nReturns true if any block has an opacity set.\n"},
  {"HasBlockOpacity", PyvtkCompositeDataDisplayAttributes_HasBlockOpacity, METH_VARARGS,
   "HasBlockOpacity(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockOpacity(vtkDataObject *data_object)\n\nReturns true if the block with data_object has an opacity set.\n"},
  {"RemoveBlockOpacity", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacity, METH_VARARGS,
   "RemoveBlockOpacity(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockOpacity(vtkDataObject *data_object)\n\nRemoves the set opacity for the block with data_object.\n"},
  {"RemoveBlockOpacities", PyvtkCompositeDataDisplayAttributes_RemoveBlockOpacities, METH_VARARGS,
   "RemoveBlockOpacities(self) -> None\nC++: void RemoveBlockOpacities()\n\nRemoves all block opacities.\n"},
  {"SetBlockMaterial", PyvtkCompositeDataDisplayAttributes_SetBlockMaterial, METH_VARARGS,
   "SetBlockMaterial(self, data_object:vtkDataObject, material:str)\n    -> None\nC++: void SetBlockMaterial(vtkDataObject *data_object,\n    const std::string &material)\n\nSet/get the material for the block with data_object. Only\nrendering backends that support advanced materials need to\nrespect these.\n"},
  {"GetBlockMaterial", PyvtkCompositeDataDisplayAttributes_GetBlockMaterial, METH_VARARGS,
   "GetBlockMaterial(self, data_object:vtkDataObject) -> str\nC++: const std::string &GetBlockMaterial(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockMaterials", PyvtkCompositeDataDisplayAttributes_HasBlockMaterials, METH_VARARGS,
   "HasBlockMaterials(self) -> bool\nC++: bool HasBlockMaterials()\n\nReturns true if any block has an material set.\n"},
  {"HasBlockMaterial", PyvtkCompositeDataDisplayAttributes_HasBlockMaterial, METH_VARARGS,
   "HasBlockMaterial(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockMaterial(vtkDataObject *data_object)\n\nReturns true if the block with data_object has an material set.\n"},
  {"RemoveBlockMaterial", PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterial, METH_VARARGS,
   "RemoveBlockMaterial(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockMaterial(vtkDataObject *data_object)\n\nRemoves the set material for the block with data_object.\n"},
  {"RemoveBlockMaterials", PyvtkCompositeDataDisplayAttributes_RemoveBlockMaterials, METH_VARARGS,
   "RemoveBlockMaterials(self) -> None\nC++: void RemoveBlockMaterials()\n\nRemoves all block materialss.\n"},
  {"SetBlockColorMode", PyvtkCompositeDataDisplayAttributes_SetBlockColorMode, METH_VARARGS,
   "SetBlockColorMode(self, data_object:vtkDataObject, value:int)\n    -> None\nC++: void SetBlockColorMode(vtkDataObject *data_object, int value)\n\n@see vtkMapper::SetColorMode\n"},
  {"GetBlockColorMode", PyvtkCompositeDataDisplayAttributes_GetBlockColorMode, METH_VARARGS,
   "GetBlockColorMode(self, data_object:vtkDataObject) -> int\nC++: int GetBlockColorMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockColorMode", PyvtkCompositeDataDisplayAttributes_HasBlockColorMode, METH_VARARGS,
   "HasBlockColorMode(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockColorMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockColorModes", PyvtkCompositeDataDisplayAttributes_HasBlockColorModes, METH_VARARGS,
   "HasBlockColorModes(self) -> bool\nC++: bool HasBlockColorModes()\n\n"},
  {"RemoveBlockColorMode", PyvtkCompositeDataDisplayAttributes_RemoveBlockColorMode, METH_VARARGS,
   "RemoveBlockColorMode(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockColorMode(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockColorModes", PyvtkCompositeDataDisplayAttributes_RemoveBlockColorModes, METH_VARARGS,
   "RemoveBlockColorModes(self) -> None\nC++: void RemoveBlockColorModes()\n\n"},
  {"SetBlockScalarMode", PyvtkCompositeDataDisplayAttributes_SetBlockScalarMode, METH_VARARGS,
   "SetBlockScalarMode(self, data_object:vtkDataObject, value:int)\n    -> None\nC++: void SetBlockScalarMode(vtkDataObject *data_object,\n    int value)\n\n@see vtkMapper::SetScalarMode\n"},
  {"GetBlockScalarMode", PyvtkCompositeDataDisplayAttributes_GetBlockScalarMode, METH_VARARGS,
   "GetBlockScalarMode(self, data_object:vtkDataObject) -> int\nC++: int GetBlockScalarMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarMode", PyvtkCompositeDataDisplayAttributes_HasBlockScalarMode, METH_VARARGS,
   "HasBlockScalarMode(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockScalarMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarModes", PyvtkCompositeDataDisplayAttributes_HasBlockScalarModes, METH_VARARGS,
   "HasBlockScalarModes(self) -> bool\nC++: bool HasBlockScalarModes()\n\n"},
  {"RemoveBlockScalarMode", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarMode, METH_VARARGS,
   "RemoveBlockScalarMode(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockScalarMode(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockScalarModes", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarModes, METH_VARARGS,
   "RemoveBlockScalarModes(self) -> None\nC++: void RemoveBlockScalarModes()\n\n"},
  {"SetBlockArrayAccessMode", PyvtkCompositeDataDisplayAttributes_SetBlockArrayAccessMode, METH_VARARGS,
   "SetBlockArrayAccessMode(self, data_object:vtkDataObject,\n    value:int) -> None\nC++: void SetBlockArrayAccessMode(vtkDataObject *data_object,\n    int value)\n\n@see vtkMapper::SetArrayAccessMode\n"},
  {"GetBlockArrayAccessMode", PyvtkCompositeDataDisplayAttributes_GetBlockArrayAccessMode, METH_VARARGS,
   "GetBlockArrayAccessMode(self, data_object:vtkDataObject) -> int\nC++: int GetBlockArrayAccessMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayAccessMode", PyvtkCompositeDataDisplayAttributes_HasBlockArrayAccessMode, METH_VARARGS,
   "HasBlockArrayAccessMode(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockArrayAccessMode(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayAccessModes", PyvtkCompositeDataDisplayAttributes_HasBlockArrayAccessModes, METH_VARARGS,
   "HasBlockArrayAccessModes(self) -> bool\nC++: bool HasBlockArrayAccessModes()\n\n"},
  {"RemoveBlockArrayAccessMode", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayAccessMode, METH_VARARGS,
   "RemoveBlockArrayAccessMode(self, data_object:vtkDataObject)\n    -> None\nC++: void RemoveBlockArrayAccessMode(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockArrayAccessModes", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayAccessModes, METH_VARARGS,
   "RemoveBlockArrayAccessModes(self) -> None\nC++: void RemoveBlockArrayAccessModes()\n\n"},
  {"SetBlockArrayComponent", PyvtkCompositeDataDisplayAttributes_SetBlockArrayComponent, METH_VARARGS,
   "SetBlockArrayComponent(self, data_object:vtkDataObject, value:int)\n     -> None\nC++: void SetBlockArrayComponent(vtkDataObject *data_object,\n    int value)\n\n@see vtkMapper::SetArrayComponent\n"},
  {"GetBlockArrayComponent", PyvtkCompositeDataDisplayAttributes_GetBlockArrayComponent, METH_VARARGS,
   "GetBlockArrayComponent(self, data_object:vtkDataObject) -> int\nC++: int GetBlockArrayComponent(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayComponent", PyvtkCompositeDataDisplayAttributes_HasBlockArrayComponent, METH_VARARGS,
   "HasBlockArrayComponent(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockArrayComponent(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayComponents", PyvtkCompositeDataDisplayAttributes_HasBlockArrayComponents, METH_VARARGS,
   "HasBlockArrayComponents(self) -> bool\nC++: bool HasBlockArrayComponents()\n\n"},
  {"RemoveBlockArrayComponent", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayComponent, METH_VARARGS,
   "RemoveBlockArrayComponent(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockArrayComponent(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockArrayComponents", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayComponents, METH_VARARGS,
   "RemoveBlockArrayComponents(self) -> None\nC++: void RemoveBlockArrayComponents()\n\n"},
  {"SetBlockArrayId", PyvtkCompositeDataDisplayAttributes_SetBlockArrayId, METH_VARARGS,
   "SetBlockArrayId(self, data_object:vtkDataObject, value:int)\n    -> None\nC++: void SetBlockArrayId(vtkDataObject *data_object, int value)\n\n@see vtkMapper::SetArrayId\n"},
  {"GetBlockArrayId", PyvtkCompositeDataDisplayAttributes_GetBlockArrayId, METH_VARARGS,
   "GetBlockArrayId(self, data_object:vtkDataObject) -> int\nC++: int GetBlockArrayId(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayId", PyvtkCompositeDataDisplayAttributes_HasBlockArrayId, METH_VARARGS,
   "HasBlockArrayId(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockArrayId(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayIds", PyvtkCompositeDataDisplayAttributes_HasBlockArrayIds, METH_VARARGS,
   "HasBlockArrayIds(self) -> bool\nC++: bool HasBlockArrayIds()\n\n"},
  {"RemoveBlockArrayId", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayId, METH_VARARGS,
   "RemoveBlockArrayId(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockArrayId(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockArrayIds", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayIds, METH_VARARGS,
   "RemoveBlockArrayIds(self) -> None\nC++: void RemoveBlockArrayIds()\n\n"},
  {"SetBlockScalarRange", PyvtkCompositeDataDisplayAttributes_SetBlockScalarRange, METH_VARARGS,
   "SetBlockScalarRange(self, data_object:vtkDataObject,\n    value:vtkVector2d) -> None\nC++: void SetBlockScalarRange(vtkDataObject *data_object,\n    const vtkVector2d &value)\n\n@see vtkMapper::SetScalarRange\n"},
  {"GetBlockScalarRange", PyvtkCompositeDataDisplayAttributes_GetBlockScalarRange, METH_VARARGS,
   "GetBlockScalarRange(self, data_object:vtkDataObject)\n    -> vtkVector2d\nC++: vtkVector2d GetBlockScalarRange(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarRange", PyvtkCompositeDataDisplayAttributes_HasBlockScalarRange, METH_VARARGS,
   "HasBlockScalarRange(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockScalarRange(vtkDataObject *data_object)\n\n"},
  {"HasBlockScalarRanges", PyvtkCompositeDataDisplayAttributes_HasBlockScalarRanges, METH_VARARGS,
   "HasBlockScalarRanges(self) -> bool\nC++: bool HasBlockScalarRanges()\n\n"},
  {"RemoveBlockScalarRange", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarRange, METH_VARARGS,
   "RemoveBlockScalarRange(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockScalarRange(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockScalarRanges", PyvtkCompositeDataDisplayAttributes_RemoveBlockScalarRanges, METH_VARARGS,
   "RemoveBlockScalarRanges(self) -> None\nC++: void RemoveBlockScalarRanges()\n\n"},
  {"SetBlockArrayName", PyvtkCompositeDataDisplayAttributes_SetBlockArrayName, METH_VARARGS,
   "SetBlockArrayName(self, data_object:vtkDataObject, value:str)\n    -> None\nC++: void SetBlockArrayName(vtkDataObject *data_object,\n    const std::string &value)\n\n@see vtkMapper::SetArrayName\n"},
  {"GetBlockArrayName", PyvtkCompositeDataDisplayAttributes_GetBlockArrayName, METH_VARARGS,
   "GetBlockArrayName(self, data_object:vtkDataObject) -> str\nC++: std::string GetBlockArrayName(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayName", PyvtkCompositeDataDisplayAttributes_HasBlockArrayName, METH_VARARGS,
   "HasBlockArrayName(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockArrayName(vtkDataObject *data_object)\n\n"},
  {"HasBlockArrayNames", PyvtkCompositeDataDisplayAttributes_HasBlockArrayNames, METH_VARARGS,
   "HasBlockArrayNames(self) -> bool\nC++: bool HasBlockArrayNames()\n\n"},
  {"RemoveBlockArrayName", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayName, METH_VARARGS,
   "RemoveBlockArrayName(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockArrayName(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockArrayNames", PyvtkCompositeDataDisplayAttributes_RemoveBlockArrayNames, METH_VARARGS,
   "RemoveBlockArrayNames(self) -> None\nC++: void RemoveBlockArrayNames()\n\n"},
  {"SetBlockFieldDataTupleId", PyvtkCompositeDataDisplayAttributes_SetBlockFieldDataTupleId, METH_VARARGS,
   "SetBlockFieldDataTupleId(self, data_object:vtkDataObject,\n    value:int) -> None\nC++: void SetBlockFieldDataTupleId(vtkDataObject *data_object,\n    vtkIdType value)\n\n@see vtkMapper::SetFieldDataTupleId\n"},
  {"GetBlockFieldDataTupleId", PyvtkCompositeDataDisplayAttributes_GetBlockFieldDataTupleId, METH_VARARGS,
   "GetBlockFieldDataTupleId(self, data_object:vtkDataObject) -> int\nC++: vtkIdType GetBlockFieldDataTupleId(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockFieldDataTupleId", PyvtkCompositeDataDisplayAttributes_HasBlockFieldDataTupleId, METH_VARARGS,
   "HasBlockFieldDataTupleId(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockFieldDataTupleId(vtkDataObject *data_object)\n\n"},
  {"HasBlockFieldDataTupleIds", PyvtkCompositeDataDisplayAttributes_HasBlockFieldDataTupleIds, METH_VARARGS,
   "HasBlockFieldDataTupleIds(self) -> bool\nC++: bool HasBlockFieldDataTupleIds()\n\n"},
  {"RemoveBlockFieldDataTupleId", PyvtkCompositeDataDisplayAttributes_RemoveBlockFieldDataTupleId, METH_VARARGS,
   "RemoveBlockFieldDataTupleId(self, data_object:vtkDataObject)\n    -> None\nC++: void RemoveBlockFieldDataTupleId(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockFieldDataTupleIds", PyvtkCompositeDataDisplayAttributes_RemoveBlockFieldDataTupleIds, METH_VARARGS,
   "RemoveBlockFieldDataTupleIds(self) -> None\nC++: void RemoveBlockFieldDataTupleIds()\n\n"},
  {"SetBlockLookupTable", PyvtkCompositeDataDisplayAttributes_SetBlockLookupTable, METH_VARARGS,
   "SetBlockLookupTable(self, data_object:vtkDataObject,\n    lut:vtkScalarsToColors) -> None\nC++: void SetBlockLookupTable(vtkDataObject *data_object,\n    vtkSmartPointer<vtkScalarsToColors> lut)\n\n@see vtkMapper::SetLookupTable\n"},
  {"GetBlockLookupTable", PyvtkCompositeDataDisplayAttributes_GetBlockLookupTable, METH_VARARGS,
   "GetBlockLookupTable(self, data_object:vtkDataObject)\n    -> vtkScalarsToColors\nC++: vtkSmartPointer<vtkScalarsToColors> GetBlockLookupTable(\n    vtkDataObject *data_object)\n\n"},
  {"HasBlockLookupTable", PyvtkCompositeDataDisplayAttributes_HasBlockLookupTable, METH_VARARGS,
   "HasBlockLookupTable(self, data_object:vtkDataObject) -> bool\nC++: bool HasBlockLookupTable(vtkDataObject *data_object)\n\n"},
  {"HasBlockLookupTables", PyvtkCompositeDataDisplayAttributes_HasBlockLookupTables, METH_VARARGS,
   "HasBlockLookupTables(self) -> bool\nC++: bool HasBlockLookupTables()\n\n"},
  {"RemoveBlockLookupTable", PyvtkCompositeDataDisplayAttributes_RemoveBlockLookupTable, METH_VARARGS,
   "RemoveBlockLookupTable(self, data_object:vtkDataObject) -> None\nC++: void RemoveBlockLookupTable(vtkDataObject *data_object)\n\n"},
  {"RemoveBlockLookupTables", PyvtkCompositeDataDisplayAttributes_RemoveBlockLookupTables, METH_VARARGS,
   "RemoveBlockLookupTables(self) -> None\nC++: void RemoveBlockLookupTables()\n\n"},
  {"ComputeVisibleBounds", PyvtkCompositeDataDisplayAttributes_ComputeVisibleBounds, METH_VARARGS,
   "ComputeVisibleBounds(cda:vtkCompositeDataDisplayAttributes,\n    dobj:vtkDataObject, bounds:[float, float, float, float, float,\n     float]) -> None\nC++: static void ComputeVisibleBounds(\n    vtkCompositeDataDisplayAttributes *cda, vtkDataObject *dobj,\n    double bounds[6])\n\nIf the input dobj is a vtkCompositeDataSet, we will loop over the\nhierarchy recursively starting from initial index 0 and use only\nvisible blocks, which is specified in the\nvtkCompositeDataDisplayAttributes cda, to compute the bounds.\n"},
  {"DataObjectFromIndex", PyvtkCompositeDataDisplayAttributes_DataObjectFromIndex, METH_VARARGS,
   "DataObjectFromIndex(flat_index:int, parent_obj:vtkDataObject,\n    current_flat_index:int=0) -> vtkDataObject\nC++: static vtkDataObject *DataObjectFromIndex(\n    unsigned int flat_index, vtkDataObject *parent_obj,\n    unsigned int current_flat_index=0)\n\nGet the DataObject corresponding to the node with index\nflat_index under parent_obj. Traverses the entire hierarchy\nrecursively.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositeDataDisplayAttributes_Doc =
  "vtkCompositeDataDisplayAttributes - Rendering attributes for a\nmulti-block dataset.\n\n"
  "Superclass: vtkObject\n\n"
  "The vtkCompositeDataDisplayAttributes class stores display attributes\n"
  "for individual blocks in a multi-block dataset. It uses the actual\n"
  "data block's pointer as a key (vtkDataObject*).\n\n"
  "@warning It is considered unsafe to dereference key pointers at any\n"
  "    time,\n"
  "they should only serve as keys to access the internal map.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeDataDisplayAttributes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkCompositeDataDisplayAttributes", // tp_name
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
  PyvtkCompositeDataDisplayAttributes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeDataDisplayAttributes_StaticNew()
{
  return vtkCompositeDataDisplayAttributes::New();
}

PyObject *PyvtkCompositeDataDisplayAttributes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeDataDisplayAttributes_Type, PyvtkCompositeDataDisplayAttributes_Methods,
    "vtkCompositeDataDisplayAttributes",
 &PyvtkCompositeDataDisplayAttributes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeDataDisplayAttributes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeDataDisplayAttributes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeDataDisplayAttributes", o) != 0)
  {
    Py_DECREF(o);
  }

}

