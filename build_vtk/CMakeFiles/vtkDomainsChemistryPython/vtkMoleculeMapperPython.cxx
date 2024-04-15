// python wrapper for vtkMoleculeMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMoleculeMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkMoleculeMapper_ClassNew(); }


static PyObject *
PyvtkMoleculeMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeMapper *tempr = vtkMoleculeMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeMapper::NewInstance());

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
PyvtkMoleculeMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMoleculeMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMoleculeMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkMolecule *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMolecule"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMolecule *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkMoleculeMapper::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseBallAndStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseBallAndStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseBallAndStickSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseBallAndStickSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseVDWSpheresSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseVDWSpheresSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseVDWSpheresSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseVDWSpheresSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseLiquoriceStickSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLiquoriceStickSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLiquoriceStickSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseLiquoriceStickSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseFastSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFastSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFastSettings();
    }
    else
    {
      op->vtkMoleculeMapper::UseFastSettings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderAtoms() :
      op->vtkMoleculeMapper::GetRenderAtoms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderAtoms(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderAtoms(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderAtomsOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderAtomsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderAtomsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderAtomsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderAtomsOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderAtomsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderBonds() :
      op->vtkMoleculeMapper::GetRenderBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderBonds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderBonds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderBondsOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderBondsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderBondsOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderBondsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetRenderLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderLattice() :
      op->vtkMoleculeMapper::GetRenderLattice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetRenderLattice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderLattice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderLattice(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetRenderLattice(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderLatticeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLatticeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLatticeOn();
    }
    else
    {
      op->vtkMoleculeMapper::RenderLatticeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_RenderLatticeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderLatticeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RenderLatticeOff();
    }
    else
    {
      op->vtkMoleculeMapper::RenderLatticeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAtomicRadiusType() :
      op->vtkMoleculeMapper::GetAtomicRadiusType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusType(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAtomicRadiusTypeAsString() :
      op->vtkMoleculeMapper::GetAtomicRadiusTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToCovalentRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToCovalentRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToCovalentRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToVDWRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToVDWRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToVDWRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToUnitRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToUnitRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToUnitRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusTypeToCustomArrayRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusTypeToCustomArrayRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusTypeToCustomArrayRadius();
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusTypeToCustomArrayRadius();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAtomicRadiusScaleFactor() :
      op->vtkMoleculeMapper::GetAtomicRadiusScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusScaleFactor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMultiCylindersForBonds() :
      op->vtkMoleculeMapper::GetUseMultiCylindersForBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetUseMultiCylindersForBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMultiCylindersForBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMultiCylindersForBonds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetUseMultiCylindersForBonds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMultiCylindersForBondsOn();
    }
    else
    {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_UseMultiCylindersForBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMultiCylindersForBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMultiCylindersForBondsOff();
    }
    else
    {
      op->vtkMoleculeMapper::UseMultiCylindersForBondsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBondColorMode() :
      op->vtkMoleculeMapper::GetBondColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorMode(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBondColorModeMinValue() :
      op->vtkMoleculeMapper::GetBondColorModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBondColorModeMaxValue() :
      op->vtkMoleculeMapper::GetBondColorModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToSingleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToSingleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorModeToSingleColor();
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorModeToSingleColor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColorModeToDiscreteByAtom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetBondColorModeToDiscreteByAtom();
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColorModeToDiscreteByAtom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColorModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColorModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetBondColorModeAsString() :
      op->vtkMoleculeMapper::GetBondColorModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAtomColorMode() :
      op->vtkMoleculeMapper::GetAtomColorMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomColorMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomColorMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomColorMode(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomColorMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomColorModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomColorModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAtomColorModeMinValue() :
      op->vtkMoleculeMapper::GetAtomColorModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomColorModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomColorModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAtomColorModeMaxValue() :
      op->vtkMoleculeMapper::GetAtomColorModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetAtomColor() :
      op->vtkMoleculeMapper::GetAtomColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAtomColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetAtomColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAtomColor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetAtomColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMoleculeMapper_SetAtomColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetAtomColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAtomColor");
  return nullptr;
}


static PyObject *
PyvtkMoleculeMapper_GetBondColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBondColor() :
      op->vtkMoleculeMapper::GetBondColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetBondColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBondColor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetBondColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMoleculeMapper_SetBondColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetBondColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBondColor");
  return nullptr;
}


static PyObject *
PyvtkMoleculeMapper_GetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBondRadius() :
      op->vtkMoleculeMapper::GetBondRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetBondRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBondRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBondRadius(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetBondRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetLatticeColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetLatticeColor() :
      op->vtkMoleculeMapper::GetLatticeColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetLatticeColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLatticeColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::SetLatticeColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetLatticeColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLatticeColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 3;
  unsigned char temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLatticeColor(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetLatticeColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_SetLatticeColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkMoleculeMapper_SetLatticeColor_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_SetLatticeColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLatticeColor");
  return nullptr;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedAtomsAndBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtomsAndBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedAtomsAndBonds(temp0, temp1, temp2);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedAtomsAndBonds(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedAtoms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedAtoms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedAtoms(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedAtoms(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSelectedBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkSelection *temp0 = nullptr;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkSelection") &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->GetSelectedBonds(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::GetSelectedBonds(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkMoleculeMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

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
      op->vtkMoleculeMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkMoleculeMapper::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkMoleculeMapper_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::GetBounds(temp0);
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
PyvtkMoleculeMapper_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkMoleculeMapper_GetBounds_s1(self, args);
    case 1:
      return PyvtkMoleculeMapper_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkMoleculeMapper_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkMoleculeMapper::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetSupportsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSupportsSelection() :
      op->vtkMoleculeMapper::GetSupportsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetAtomicRadiusArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAtomicRadiusArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetAtomicRadiusArrayName() :
      op->vtkMoleculeMapper::GetAtomicRadiusArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetAtomicRadiusArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAtomicRadiusArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAtomicRadiusArrayName(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetAtomicRadiusArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_SetMapScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMapScalars(temp0);
    }
    else
    {
      op->vtkMoleculeMapper::SetMapScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeMapper_GetPeriodicTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodicTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeMapper *op = static_cast<vtkMoleculeMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPeriodicTable *tempr = (ap.IsBound() ?
      op->GetPeriodicTable() :
      op->vtkMoleculeMapper::GetPeriodicTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeMapper_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMoleculeMapper\nC++: static vtkMoleculeMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMoleculeMapper\nC++: vtkMoleculeMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMoleculeMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMoleculeMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputData", PyvtkMoleculeMapper_SetInputData, METH_VARARGS,
   "SetInputData(self, in_:vtkMolecule) -> None\nC++: void SetInputData(vtkMolecule *in)\n\nGet/Set the input vtkMolecule.\n"},
  {"GetInput", PyvtkMoleculeMapper_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkMolecule\nC++: vtkMolecule *GetInput()\n\nGet the input as a vtkDataSet.  This method is overridden in the\nspecialized mapper classes to return more specific data types.\n"},
  {"UseBallAndStickSettings", PyvtkMoleculeMapper_UseBallAndStickSettings, METH_VARARGS,
   "UseBallAndStickSettings(self) -> None\nC++: void UseBallAndStickSettings()\n\nSet ivars to default ball-and-stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 0.3 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {"UseVDWSpheresSettings", PyvtkMoleculeMapper_UseVDWSpheresSettings, METH_VARARGS,
   "UseVDWSpheresSettings(self) -> None\nC++: void UseVDWSpheresSettings()\n\nSet ivars to default van der Waals spheres settings. This is\nequivalent to the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( VDWRadius )\n- SetAtomicRadiusScaleFactor( 1.0 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( true )\n- SetBondRadius( 0.075 )\n"},
  {"UseLiquoriceStickSettings", PyvtkMoleculeMapper_UseLiquoriceStickSettings, METH_VARARGS,
   "UseLiquoriceStickSettings(self) -> None\nC++: void UseLiquoriceStickSettings()\n\nSet ivars to default liquorice stick settings. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.1 )\n- SetBondColorMode( DiscreteByAtom )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.1 )\n"},
  {"UseFastSettings", PyvtkMoleculeMapper_UseFastSettings, METH_VARARGS,
   "UseFastSettings(self) -> None\nC++: void UseFastSettings()\n\nSet ivars to use fast settings that may be useful for rendering\nextremely large molecules where the overall shape is more\nimportant than the details of the atoms/bond. This is equivalent\nto the following:\n- SetRenderAtoms( true )\n- SetRenderBonds( true )\n- SetAtomicRadiusType( UnitRadius )\n- SetAtomicRadiusScaleFactor( 0.60 )\n- SetBondColorMode( SingleColor )\n- SetBondColor( 50, 50, 50 )\n- SetUseMultiCylindersForBonds( false )\n- SetBondRadius( 0.075 )\n"},
  {"GetRenderAtoms", PyvtkMoleculeMapper_GetRenderAtoms, METH_VARARGS,
   "GetRenderAtoms(self) -> bool\nC++: virtual bool GetRenderAtoms()\n\nGet/Set whether or not to render atoms. Default: On.\n"},
  {"SetRenderAtoms", PyvtkMoleculeMapper_SetRenderAtoms, METH_VARARGS,
   "SetRenderAtoms(self, _arg:bool) -> None\nC++: virtual void SetRenderAtoms(bool _arg)\n\n"},
  {"RenderAtomsOn", PyvtkMoleculeMapper_RenderAtomsOn, METH_VARARGS,
   "RenderAtomsOn(self) -> None\nC++: virtual void RenderAtomsOn()\n\n"},
  {"RenderAtomsOff", PyvtkMoleculeMapper_RenderAtomsOff, METH_VARARGS,
   "RenderAtomsOff(self) -> None\nC++: virtual void RenderAtomsOff()\n\n"},
  {"GetRenderBonds", PyvtkMoleculeMapper_GetRenderBonds, METH_VARARGS,
   "GetRenderBonds(self) -> bool\nC++: virtual bool GetRenderBonds()\n\nGet/Set whether or not to render bonds. Default: On.\n"},
  {"SetRenderBonds", PyvtkMoleculeMapper_SetRenderBonds, METH_VARARGS,
   "SetRenderBonds(self, _arg:bool) -> None\nC++: virtual void SetRenderBonds(bool _arg)\n\n"},
  {"RenderBondsOn", PyvtkMoleculeMapper_RenderBondsOn, METH_VARARGS,
   "RenderBondsOn(self) -> None\nC++: virtual void RenderBondsOn()\n\n"},
  {"RenderBondsOff", PyvtkMoleculeMapper_RenderBondsOff, METH_VARARGS,
   "RenderBondsOff(self) -> None\nC++: virtual void RenderBondsOff()\n\n"},
  {"GetRenderLattice", PyvtkMoleculeMapper_GetRenderLattice, METH_VARARGS,
   "GetRenderLattice(self) -> bool\nC++: virtual bool GetRenderLattice()\n\nGet/Set whether or not to render the unit cell lattice, if\npresent. Default: On.\n"},
  {"SetRenderLattice", PyvtkMoleculeMapper_SetRenderLattice, METH_VARARGS,
   "SetRenderLattice(self, _arg:bool) -> None\nC++: virtual void SetRenderLattice(bool _arg)\n\n"},
  {"RenderLatticeOn", PyvtkMoleculeMapper_RenderLatticeOn, METH_VARARGS,
   "RenderLatticeOn(self) -> None\nC++: virtual void RenderLatticeOn()\n\n"},
  {"RenderLatticeOff", PyvtkMoleculeMapper_RenderLatticeOff, METH_VARARGS,
   "RenderLatticeOff(self) -> None\nC++: virtual void RenderLatticeOff()\n\n"},
  {"GetAtomicRadiusType", PyvtkMoleculeMapper_GetAtomicRadiusType, METH_VARARGS,
   "GetAtomicRadiusType(self) -> int\nC++: virtual int GetAtomicRadiusType()\n\nGet/Set the type of radius used to generate the atoms. Default:\nVDWRadius. If CustomArrayRadius is used, the VertexData array\nnamed 'radii' is used for per-atom radii.\n"},
  {"SetAtomicRadiusType", PyvtkMoleculeMapper_SetAtomicRadiusType, METH_VARARGS,
   "SetAtomicRadiusType(self, _arg:int) -> None\nC++: virtual void SetAtomicRadiusType(int _arg)\n\n"},
  {"GetAtomicRadiusTypeAsString", PyvtkMoleculeMapper_GetAtomicRadiusTypeAsString, METH_VARARGS,
   "GetAtomicRadiusTypeAsString(self) -> str\nC++: const char *GetAtomicRadiusTypeAsString()\n\n"},
  {"SetAtomicRadiusTypeToCovalentRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToCovalentRadius, METH_VARARGS,
   "SetAtomicRadiusTypeToCovalentRadius(self) -> None\nC++: void SetAtomicRadiusTypeToCovalentRadius()\n\n"},
  {"SetAtomicRadiusTypeToVDWRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToVDWRadius, METH_VARARGS,
   "SetAtomicRadiusTypeToVDWRadius(self) -> None\nC++: void SetAtomicRadiusTypeToVDWRadius()\n\n"},
  {"SetAtomicRadiusTypeToUnitRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToUnitRadius, METH_VARARGS,
   "SetAtomicRadiusTypeToUnitRadius(self) -> None\nC++: void SetAtomicRadiusTypeToUnitRadius()\n\n"},
  {"SetAtomicRadiusTypeToCustomArrayRadius", PyvtkMoleculeMapper_SetAtomicRadiusTypeToCustomArrayRadius, METH_VARARGS,
   "SetAtomicRadiusTypeToCustomArrayRadius(self) -> None\nC++: void SetAtomicRadiusTypeToCustomArrayRadius()\n\n"},
  {"GetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_GetAtomicRadiusScaleFactor, METH_VARARGS,
   "GetAtomicRadiusScaleFactor(self) -> float\nC++: virtual float GetAtomicRadiusScaleFactor()\n\nGet/Set the uniform scaling factor applied to the atoms. This is\nignored when AtomicRadiusType == CustomArrayRadius. Default: 0.3.\n"},
  {"SetAtomicRadiusScaleFactor", PyvtkMoleculeMapper_SetAtomicRadiusScaleFactor, METH_VARARGS,
   "SetAtomicRadiusScaleFactor(self, _arg:float) -> None\nC++: virtual void SetAtomicRadiusScaleFactor(float _arg)\n\n"},
  {"GetUseMultiCylindersForBonds", PyvtkMoleculeMapper_GetUseMultiCylindersForBonds, METH_VARARGS,
   "GetUseMultiCylindersForBonds(self) -> bool\nC++: virtual bool GetUseMultiCylindersForBonds()\n\nGet/Set whether multicylinders will be used to represent multiple\nbonds. Default: On.\n"},
  {"SetUseMultiCylindersForBonds", PyvtkMoleculeMapper_SetUseMultiCylindersForBonds, METH_VARARGS,
   "SetUseMultiCylindersForBonds(self, _arg:bool) -> None\nC++: virtual void SetUseMultiCylindersForBonds(bool _arg)\n\n"},
  {"UseMultiCylindersForBondsOn", PyvtkMoleculeMapper_UseMultiCylindersForBondsOn, METH_VARARGS,
   "UseMultiCylindersForBondsOn(self) -> None\nC++: virtual void UseMultiCylindersForBondsOn()\n\n"},
  {"UseMultiCylindersForBondsOff", PyvtkMoleculeMapper_UseMultiCylindersForBondsOff, METH_VARARGS,
   "UseMultiCylindersForBondsOff(self) -> None\nC++: virtual void UseMultiCylindersForBondsOff()\n\n"},
  {"GetBondColorMode", PyvtkMoleculeMapper_GetBondColorMode, METH_VARARGS,
   "GetBondColorMode(self) -> int\nC++: virtual int GetBondColorMode()\n\nGet/Set the method by which bonds are colored.\n\n* If 'SingleColor' is used, all bonds will be the same color. Use\n* SetBondColor to set the rgb values used.\n\n* If 'DiscreteByAtom' is selected, each bond is colored using the\n* same lookup table as the atoms at each end, with a sharp color\n* boundary at the bond center.\n"},
  {"SetBondColorMode", PyvtkMoleculeMapper_SetBondColorMode, METH_VARARGS,
   "SetBondColorMode(self, _arg:int) -> None\nC++: virtual void SetBondColorMode(int _arg)\n\n"},
  {"GetBondColorModeMinValue", PyvtkMoleculeMapper_GetBondColorModeMinValue, METH_VARARGS,
   "GetBondColorModeMinValue(self) -> int\nC++: virtual int GetBondColorModeMinValue()\n\n"},
  {"GetBondColorModeMaxValue", PyvtkMoleculeMapper_GetBondColorModeMaxValue, METH_VARARGS,
   "GetBondColorModeMaxValue(self) -> int\nC++: virtual int GetBondColorModeMaxValue()\n\n"},
  {"SetBondColorModeToSingleColor", PyvtkMoleculeMapper_SetBondColorModeToSingleColor, METH_VARARGS,
   "SetBondColorModeToSingleColor(self) -> None\nC++: void SetBondColorModeToSingleColor()\n\n"},
  {"SetBondColorModeToDiscreteByAtom", PyvtkMoleculeMapper_SetBondColorModeToDiscreteByAtom, METH_VARARGS,
   "SetBondColorModeToDiscreteByAtom(self) -> None\nC++: void SetBondColorModeToDiscreteByAtom()\n\n"},
  {"GetBondColorModeAsString", PyvtkMoleculeMapper_GetBondColorModeAsString, METH_VARARGS,
   "GetBondColorModeAsString(self) -> str\nC++: const char *GetBondColorModeAsString()\n\n"},
  {"GetAtomColorMode", PyvtkMoleculeMapper_GetAtomColorMode, METH_VARARGS,
   "GetAtomColorMode(self) -> int\nC++: virtual int GetAtomColorMode()\n\nGet/Set the method by which atoms are colored.\n\nIf 'SingleColor' is used, all atoms will have the same color. Use\nSetAtomColor to set the rgb values to be used.\n\nIf 'DiscreteByAtom' is selected, each atom is colored using the\ninternal lookup table.\n"},
  {"SetAtomColorMode", PyvtkMoleculeMapper_SetAtomColorMode, METH_VARARGS,
   "SetAtomColorMode(self, _arg:int) -> None\nC++: virtual void SetAtomColorMode(int _arg)\n\n"},
  {"GetAtomColorModeMinValue", PyvtkMoleculeMapper_GetAtomColorModeMinValue, METH_VARARGS,
   "GetAtomColorModeMinValue(self) -> int\nC++: virtual int GetAtomColorModeMinValue()\n\n"},
  {"GetAtomColorModeMaxValue", PyvtkMoleculeMapper_GetAtomColorModeMaxValue, METH_VARARGS,
   "GetAtomColorModeMaxValue(self) -> int\nC++: virtual int GetAtomColorModeMaxValue()\n\n"},
  {"GetAtomColor", PyvtkMoleculeMapper_GetAtomColor, METH_VARARGS,
   "GetAtomColor(self) -> (int, int, int)\nC++: virtual unsigned char *GetAtomColor()\n\nGet/Set the color of the atoms as an rgb tuple. Default: {150,\n150, 150} (grey)\n"},
  {"SetAtomColor", PyvtkMoleculeMapper_SetAtomColor, METH_VARARGS,
   "SetAtomColor(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetAtomColor(unsigned char _arg1,\n    unsigned char _arg2, unsigned char _arg3)\nSetAtomColor(self, _arg:(int, int, int)) -> None\nC++: virtual void SetAtomColor(const unsigned char _arg[3])\n\n"},
  {"GetBondColor", PyvtkMoleculeMapper_GetBondColor, METH_VARARGS,
   "GetBondColor(self) -> (int, int, int)\nC++: virtual unsigned char *GetBondColor()\n\nGet/Set the color of the bonds as an rgb tuple. Default: {50, 50,\n50} (dark grey)\n"},
  {"SetBondColor", PyvtkMoleculeMapper_SetBondColor, METH_VARARGS,
   "SetBondColor(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetBondColor(unsigned char _arg1,\n    unsigned char _arg2, unsigned char _arg3)\nSetBondColor(self, _arg:(int, int, int)) -> None\nC++: virtual void SetBondColor(const unsigned char _arg[3])\n\n"},
  {"GetBondRadius", PyvtkMoleculeMapper_GetBondRadius, METH_VARARGS,
   "GetBondRadius(self) -> float\nC++: virtual float GetBondRadius()\n\nGet/Set the radius of the bond cylinders. Default: 0.075\n"},
  {"SetBondRadius", PyvtkMoleculeMapper_SetBondRadius, METH_VARARGS,
   "SetBondRadius(self, _arg:float) -> None\nC++: virtual void SetBondRadius(float _arg)\n\n"},
  {"GetLatticeColor", PyvtkMoleculeMapper_GetLatticeColor, METH_VARARGS,
   "GetLatticeColor(self) -> (int, int, int)\nC++: virtual unsigned char *GetLatticeColor()\n\nGet/Set the color of the bonds as an rgb tuple. Default: {255,\n255, 255} (white)\n"},
  {"SetLatticeColor", PyvtkMoleculeMapper_SetLatticeColor, METH_VARARGS,
   "SetLatticeColor(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetLatticeColor(unsigned char _arg1,\n    unsigned char _arg2, unsigned char _arg3)\nSetLatticeColor(self, _arg:(int, int, int)) -> None\nC++: virtual void SetLatticeColor(const unsigned char _arg[3])\n\n"},
  {"GetSelectedAtomsAndBonds", PyvtkMoleculeMapper_GetSelectedAtomsAndBonds, METH_VARARGS,
   "GetSelectedAtomsAndBonds(self, selection:vtkSelection,\n    atomIds:vtkIdTypeArray, bondIds:vtkIdTypeArray) -> None\nC++: virtual void GetSelectedAtomsAndBonds(\n    vtkSelection *selection, vtkIdTypeArray *atomIds,\n    vtkIdTypeArray *bondIds)\n\nExtract the ids atoms and/or bonds rendered by this molecule from\na vtkSelection object. The vtkIdTypeArray\n"},
  {"GetSelectedAtoms", PyvtkMoleculeMapper_GetSelectedAtoms, METH_VARARGS,
   "GetSelectedAtoms(self, selection:vtkSelection,\n    atomIds:vtkIdTypeArray) -> None\nC++: virtual void GetSelectedAtoms(vtkSelection *selection,\n    vtkIdTypeArray *atomIds)\n\n"},
  {"GetSelectedBonds", PyvtkMoleculeMapper_GetSelectedBonds, METH_VARARGS,
   "GetSelectedBonds(self, selection:vtkSelection,\n    bondIds:vtkIdTypeArray) -> None\nC++: virtual void GetSelectedBonds(vtkSelection *selection,\n    vtkIdTypeArray *bondIds)\n\n"},
  {"Render", PyvtkMoleculeMapper_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkActor) -> None\nC++: void Render(vtkRenderer *, vtkActor *) override;\n\nReimplemented from base class\n"},
  {"ReleaseGraphicsResources", PyvtkMoleculeMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkMoleculeMapper_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6]) override;\n\nReturn bounding box (array of six doubles) of data expressed as\n(xmin,xmax, ymin,ymax, zmin,zmax).\n"},
  {"FillInputPortInformation", PyvtkMoleculeMapper_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nFill the input port information objects for this algorithm.  This\nis invoked by the first call to GetInputPortInformation for each\nport so subclasses can specify what they can handle.\n"},
  {"GetSupportsSelection", PyvtkMoleculeMapper_GetSupportsSelection, METH_VARARGS,
   "GetSupportsSelection(self) -> bool\nC++: bool GetSupportsSelection() override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Used by\nvtkHardwareSelector to determine if the prop supports hardware\nselection.\n"},
  {"GetAtomicRadiusArrayName", PyvtkMoleculeMapper_GetAtomicRadiusArrayName, METH_VARARGS,
   "GetAtomicRadiusArrayName(self) -> str\nC++: virtual char *GetAtomicRadiusArrayName()\n\nGet/Set the atomic radius array name. Default: \"radii\" It is only\nused when AtomicRadiusType is set to CustomArrayRadius.\n"},
  {"SetAtomicRadiusArrayName", PyvtkMoleculeMapper_SetAtomicRadiusArrayName, METH_VARARGS,
   "SetAtomicRadiusArrayName(self, _arg:str) -> None\nC++: virtual void SetAtomicRadiusArrayName(const char *_arg)\n\n"},
  {"SetMapScalars", PyvtkMoleculeMapper_SetMapScalars, METH_VARARGS,
   "SetMapScalars(self, map:bool) -> None\nC++: virtual void SetMapScalars(bool map)\n\nHelper method to set ScalarMode on both AtomGlyphMapper and\nBondGlyphMapper. true means VTK_COLOR_MODE_MAP_SCALARS, false\nVTK_COLOR_MODE_DIRECT_SCALARS.\n"},
  {"GetPeriodicTable", PyvtkMoleculeMapper_GetPeriodicTable, METH_VARARGS,
   "GetPeriodicTable(self) -> vtkPeriodicTable\nC++: vtkPeriodicTable *GetPeriodicTable()\n\nAccessor to internal structure. This is exposed to make it\navailable for ray tracers.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMoleculeMapper_Doc =
  "vtkMoleculeMapper - Mapper that draws vtkMolecule objects\n\n"
  "Superclass: vtkMapper\n\n"
  "vtkMoleculeMapper uses glyphs (display lists) to quickly render a\n"
  "molecule.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMoleculeMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkMoleculeMapper", // tp_name
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
  PyvtkMoleculeMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeMapper_StaticNew()
{
  return vtkMoleculeMapper::New();
}

PyObject *PyvtkMoleculeMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMoleculeMapper_Type, PyvtkMoleculeMapper_Methods,
    "vtkMoleculeMapper",
 &PyvtkMoleculeMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "CovalentRadius", vtkMoleculeMapper::CovalentRadius },
        { "VDWRadius", vtkMoleculeMapper::VDWRadius },
        { "UnitRadius", vtkMoleculeMapper::UnitRadius },
        { "CustomArrayRadius", vtkMoleculeMapper::CustomArrayRadius },
        { "SingleColor", vtkMoleculeMapper::SingleColor },
        { "DiscreteByAtom", vtkMoleculeMapper::DiscreteByAtom },
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

void PyVTKAddFile_vtkMoleculeMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

