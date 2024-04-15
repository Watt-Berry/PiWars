// python wrapper for vtkHyperTreeGridNonOrientedSuperCursorLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridNonOrientedSuperCursorLight.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridNonOrientedSuperCursorLight(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridNonOrientedSuperCursorLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridNonOrientedSuperCursorLight *tempr = vtkHyperTreeGridNonOrientedSuperCursorLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedSuperCursorLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::NewInstance());

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
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedSuperCursorLight *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    op->Initialize(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::HasTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::HasTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasTree");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTree");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetVertexId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetVertexId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVertexId");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetGlobalNodeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetGlobalNodeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalNodeIndex");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  bool temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetInformation(temp0, temp1, temp2, temp3) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetInformation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIndexStart(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::SetGlobalIndexStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlobalIndexFromLocal(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::SetGlobalIndexFromLocal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMask(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::SetMask(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMask");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsMasked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsMasked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsMasked");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

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
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetBounds(temp0);
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
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetPoint(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetPoint(temp0);
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
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsLeaf(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsLeaf");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SubdivideLeaf();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::SubdivideLeaf();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRoot() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::IsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel(temp0) :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLevel");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ToChild(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::ToChild(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToRoot();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::ToRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToParent();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::ToParent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfCursors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCursors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedSuperCursorLight *op = static_cast<vtkHyperTreeGridNonOrientedSuperCursorLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfCursors() :
      op->vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfCursors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridNonOrientedSuperCursorLight_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridNonOrientedSuperCursorLight_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridNonOrientedSuperCursorLight\nC++: static vtkHyperTreeGridNonOrientedSuperCursorLight *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridNonOrientedSuperCursorLight_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridNonOrientedSuperCursorLight\nC++: vtkHyperTreeGridNonOrientedSuperCursorLight *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clone", PyvtkHyperTreeGridNonOrientedSuperCursorLight_Clone, METH_VARARGS,
   "Clone(self) -> vtkHyperTreeGridNonOrientedSuperCursorLight\nC++: virtual vtkHyperTreeGridNonOrientedSuperCursorLight *Clone()\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n"},
  {"Initialize", PyvtkHyperTreeGridNonOrientedSuperCursorLight_Initialize, METH_VARARGS,
   "Initialize(self, grid:vtkHyperTreeGrid, treeIndex:int,\n    create:bool=False) -> None\nC++: virtual void Initialize(vtkHyperTreeGrid *grid,\n    vtkIdType treeIndex, bool create=false)\n\nInitialize cursor at root of given tree index in grid. JB\nAttention : le create ne s'applique que sur le HT central.\n"},
  {"GetGrid", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGrid, METH_VARARGS,
   "GetGrid(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetGrid()\n\nSet the hyper tree grid to which the cursor is pointing.\n"},
  {"HasTree", PyvtkHyperTreeGridNonOrientedSuperCursorLight_HasTree, METH_VARARGS,
   "HasTree(self) -> bool\nC++: bool HasTree()\nHasTree(self, icursor:int) -> bool\nC++: bool HasTree(unsigned int icursor)\n\nReturn if a Tree pointing exist\n"},
  {"GetTree", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkHyperTree\nC++: vtkHyperTree *GetTree()\nGetTree(self, icursor:int) -> vtkHyperTree\nC++: vtkHyperTree *GetTree(unsigned int icursor)\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetVertexId, METH_VARARGS,
   "GetVertexId(self) -> int\nC++: vtkIdType GetVertexId()\nGetVertexId(self, icursor:int) -> int\nC++: vtkIdType GetVertexId(unsigned int icursor)\n\nReturn the index of the current vertex in the tree.\n"},
  {"GetGlobalNodeIndex", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetGlobalNodeIndex, METH_VARARGS,
   "GetGlobalNodeIndex(self) -> int\nC++: vtkIdType GetGlobalNodeIndex()\nGetGlobalNodeIndex(self, icursor:int) -> int\nC++: vtkIdType GetGlobalNodeIndex(unsigned int icursor)\n\nReturn the global index (relative to the grid) of the current\nvertex in the tree.\n"},
  {"GetInformation", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetInformation, METH_VARARGS,
   "GetInformation(self, icursor:int, level:int, leaf:bool, id:int)\n    -> vtkHyperTree\nC++: vtkHyperTree *GetInformation(unsigned int icursor,\n    unsigned int &level, bool &leaf, vtkIdType &id)\n\nJB\n"},
  {"GetDimension", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: unsigned char GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: unsigned char GetNumberOfChildren()\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"SetGlobalIndexStart", PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetGlobalIndexStart, METH_VARARGS,
   "SetGlobalIndexStart(self, index:int) -> None\nC++: void SetGlobalIndexStart(vtkIdType index)\n\nJB\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetGlobalIndexFromLocal, METH_VARARGS,
   "SetGlobalIndexFromLocal(self, index:int) -> None\nC++: void SetGlobalIndexFromLocal(vtkIdType index)\n\nJB\n"},
  {"GetOrigin", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> Pointer\nC++: double *GetOrigin()\n\nJB\n"},
  {"GetSize", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetSize, METH_VARARGS,
   "GetSize(self) -> Pointer\nC++: double *GetSize()\n\n"},
  {"SetMask", PyvtkHyperTreeGridNonOrientedSuperCursorLight_SetMask, METH_VARARGS,
   "SetMask(self, state:bool) -> None\nC++: void SetMask(bool state)\nSetMask(self, icursor:int, state:bool) -> None\nC++: void SetMask(unsigned int icursor, bool state)\n\nSet the blanking mask is empty or not\n\\pre not_tree: tree\n"},
  {"IsMasked", PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsMasked, METH_VARARGS,
   "IsMasked(self) -> bool\nC++: bool IsMasked()\nIsMasked(self, icursor:int) -> bool\nC++: bool IsMasked(unsigned int icursor)\n\nDetermine whether blanking mask is empty or not\n"},
  {"GetBounds", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nJB Coordonnees de la boite englobante En light, information non\ndisponible sur les voisins\n"},
  {"GetPoint", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetPoint, METH_VARARGS,
   "GetPoint(self, point:[float, float, float]) -> None\nC++: void GetPoint(double point[3])\n\nJB Coordonnees du centre de la maille En light, information non\ndisponible sur les voisins\n"},
  {"IsLeaf", PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> bool\nC++: bool IsLeaf()\nIsLeaf(self, icursor:int) -> bool\nC++: bool IsLeaf(unsigned int icursor)\n\nIs the cursor pointing to a leaf?\n"},
  {"SubdivideLeaf", PyvtkHyperTreeGridNonOrientedSuperCursorLight_SubdivideLeaf, METH_VARARGS,
   "SubdivideLeaf(self) -> None\nC++: void SubdivideLeaf()\n\nJB Fait chier normalement on devrait passer par GetEntry\n"},
  {"IsRoot", PyvtkHyperTreeGridNonOrientedSuperCursorLight_IsRoot, METH_VARARGS,
   "IsRoot(self) -> bool\nC++: bool IsRoot()\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: unsigned int GetLevel()\nGetLevel(self, icursor:int) -> int\nC++: unsigned int GetLevel(unsigned int icursor)\n\nGet the level of the tree vertex pointed by the cursor.\n"},
  {"ToChild", PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToChild, METH_VARARGS,
   "ToChild(self, __a:int) -> None\nC++: void ToChild(unsigned char)\n\nMove the cursor to child `child' of the current vertex.\n\\pre Non_leaf: !IsLeaf()\n\\pre valid_child: ichild>=0 && ichild<this->GetNumberOfChildren()\n"},
  {"ToRoot", PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToRoot, METH_VARARGS,
   "ToRoot(self) -> None\nC++: void ToRoot()\n\nMove the cursor to the root vertex.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {"ToParent", PyvtkHyperTreeGridNonOrientedSuperCursorLight_ToParent, METH_VARARGS,
   "ToParent(self) -> None\nC++: void ToParent()\n\nMove the cursor to the parent of the current vertex. Authorized\nif HasHistory return true.\n\\pre Non_root: !IsRoot()\n"},
  {"GetNumberOfCursors", PyvtkHyperTreeGridNonOrientedSuperCursorLight_GetNumberOfCursors, METH_VARARGS,
   "GetNumberOfCursors(self) -> int\nC++: unsigned int GetNumberOfCursors()\n\nJB\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridNonOrientedSuperCursorLight_Doc =
  "vtkHyperTreeGridNonOrientedSuperCursorLight - Objects for traversal a\nHyperTreeGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "JB A REVOIR Objects that can perform depth traversal of a hyper tree\n"
  "grid, take into account more parameters (related to the grid\n"
  "structure) than the compact hyper tree cursor implemented in\n"
  "vtkHyperTree can. This is an abstract class. Cursors are created by\n"
  "the HyperTreeGrid implementation.\n\n"
  "@sa\n"
  "vtkHyperTreeCursor vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien, 2014. This class was re-written by Philippe\n"
  "Pebay, 2016. This class was re-written and optimized by\n"
  "Jacques-Bernard Lekien, Guenole Harel and Jerome Dubois, 2018. This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridNonOrientedSuperCursorLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridNonOrientedSuperCursorLight", // tp_name
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
  PyvtkHyperTreeGridNonOrientedSuperCursorLight_Doc, // tp_doc
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

PyObject *PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridNonOrientedSuperCursorLight_Type, PyvtkHyperTreeGridNonOrientedSuperCursorLight_Methods,
    "vtkHyperTreeGridNonOrientedSuperCursorLight",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridNonOrientedSuperCursorLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridNonOrientedSuperCursorLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridNonOrientedSuperCursorLight", o) != 0)
  {
    Py_DECREF(o);
  }

}

