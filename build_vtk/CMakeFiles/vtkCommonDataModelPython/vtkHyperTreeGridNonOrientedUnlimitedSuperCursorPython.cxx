// python wrapper for vtkHyperTreeGridNonOrientedUnlimitedSuperCursor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkHyperTreeGridNonOrientedUnlimitedSuperCursor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridNonOrientedUnlimitedSuperCursor(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *tempr = vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::NewInstance());

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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGrid *tempr = (ap.IsBound() ?
      op->GetGrid() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::HasTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::HasTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasTree");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetTree(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTree");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetVertexId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetVertexId(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVertexId");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetGlobalNodeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetGlobalNodeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetGlobalNodeIndex");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetInformation(temp0, temp1, temp2, temp3));

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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetGlobalIndexStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetGlobalIndexFromLocal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::SetMask(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMask");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsMasked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsMasked(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsMasked");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetBounds(temp0);
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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetBounds(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetBounds(temp0, temp1);
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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetPoint(temp0);
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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetPoint(temp0, temp1);
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
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint_s1(self, args);
    case 2:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsLeaf(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsLeaf");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRealLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRealLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsRealLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRealLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRealLeaf(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsRealLeaf(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsRealLeaf");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVirtualLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsVirtualLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsVirtualLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVirtualLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsVirtualLeaf(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsVirtualLeaf(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsVirtualLeaf");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensivePropertyRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExtensivePropertyRatio() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetExtensivePropertyRatio());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtensivePropertyRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetExtensivePropertyRatio(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetExtensivePropertyRatio(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetExtensivePropertyRatio");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRoot() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::IsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLevel");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRealLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLastRealLevel() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetLastRealLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRealLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLastRealLevel(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetLastRealLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetLastRealLevel");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToChild(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToRoot();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToParent();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::ToParent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfCursors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCursors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfCursors() :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNumberOfCursors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor> tempr = (ap.IsBound() ?
      op->GetOrientedGeometryCursor(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetOrientedGeometryCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNonOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor> tempr = (ap.IsBound() ?
      op->GetNonOrientedGeometryCursor(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedSuperCursor::GetNonOrientedGeometryCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridNonOrientedUnlimitedSuperCursor\nC++: static vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkHyperTreeGridNonOrientedUnlimitedSuperCursor\nC++: vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clone", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Clone, METH_VARARGS,
   "Clone(self) -> vtkHyperTreeGridNonOrientedUnlimitedSuperCursor\nC++: virtual vtkHyperTreeGridNonOrientedUnlimitedSuperCursor *Clone(\n    )\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n"},
  {"Initialize", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Initialize, METH_VARARGS,
   "Initialize(self, grid:vtkHyperTreeGrid, treeIndex:int,\n    create:bool=False) -> None\nC++: virtual void Initialize(vtkHyperTreeGrid *grid,\n    vtkIdType treeIndex, bool create=false)\n\nInitialize cursor at root of given tree index in grid. JB Le\ncreate ne s'applique que sur le HT central.\n"},
  {"GetGrid", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGrid, METH_VARARGS,
   "GetGrid(self) -> vtkHyperTreeGrid\nC++: vtkHyperTreeGrid *GetGrid()\n\nSet the hyper tree grid to which the cursor is pointing.\n"},
  {"HasTree", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_HasTree, METH_VARARGS,
   "HasTree(self) -> bool\nC++: bool HasTree()\nHasTree(self, icursor:int) -> bool\nC++: bool HasTree(unsigned int icursor)\n\nReturn if a Tree pointing exist\n"},
  {"GetTree", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkHyperTree\nC++: vtkHyperTree *GetTree()\nGetTree(self, icursor:int) -> vtkHyperTree\nC++: vtkHyperTree *GetTree(unsigned int icursor)\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetVertexId, METH_VARARGS,
   "GetVertexId(self) -> int\nC++: vtkIdType GetVertexId()\nGetVertexId(self, icursor:int) -> int\nC++: vtkIdType GetVertexId(unsigned int icursor)\n\nReturn the index of the current vertex in the tree.\n"},
  {"GetGlobalNodeIndex", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetGlobalNodeIndex, METH_VARARGS,
   "GetGlobalNodeIndex(self) -> int\nC++: vtkIdType GetGlobalNodeIndex()\nGetGlobalNodeIndex(self, icursor:int) -> int\nC++: vtkIdType GetGlobalNodeIndex(unsigned int icursor)\n\nReturn the global index (relative to the grid) of the current\nvertex in the tree.\n"},
  {"GetInformation", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetInformation, METH_VARARGS,
   "GetInformation(self, icursor:int, level:int, leaf:bool, id:int)\n    -> vtkHyperTree\nC++: vtkHyperTree *GetInformation(unsigned int icursor,\n    unsigned int &level, bool &leaf, vtkIdType &id)\n\nJB\n"},
  {"GetDimension", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: unsigned char GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: unsigned char GetNumberOfChildren()\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"SetGlobalIndexStart", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetGlobalIndexStart, METH_VARARGS,
   "SetGlobalIndexStart(self, index:int) -> None\nC++: void SetGlobalIndexStart(vtkIdType index)\n\nJB\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetGlobalIndexFromLocal, METH_VARARGS,
   "SetGlobalIndexFromLocal(self, index:int) -> None\nC++: void SetGlobalIndexFromLocal(vtkIdType index)\n\nJB\n"},
  {"GetOrigin", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> Pointer\nC++: double *GetOrigin()\n\nJB\n"},
  {"GetSize", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetSize, METH_VARARGS,
   "GetSize(self) -> Pointer\nC++: double *GetSize()\n\n"},
  {"SetMask", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_SetMask, METH_VARARGS,
   "SetMask(self, state:bool) -> None\nC++: void SetMask(bool state)\nSetMask(self, icursor:int, state:bool) -> None\nC++: void SetMask(unsigned int icursor, bool state)\n\nSet the blanking mask is empty or not\n\\pre not_tree: tree\n"},
  {"IsMasked", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsMasked, METH_VARARGS,
   "IsMasked(self) -> bool\nC++: bool IsMasked()\nIsMasked(self, icursor:int) -> bool\nC++: bool IsMasked(unsigned int icursor)\n\nDetermine whether blanking mask is empty or not\n"},
  {"GetBounds", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\nGetBounds(self, icursor:int, bounds:[float, float, float, float,\n    float, float]) -> None\nC++: void GetBounds(unsigned int icursor, double bounds[6])\n\nJB Coordonnees de la boite englobante\n"},
  {"GetPoint", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetPoint, METH_VARARGS,
   "GetPoint(self, point:[float, float, float]) -> None\nC++: void GetPoint(double point[3])\nGetPoint(self, icursor:int, point:[float, float, float]) -> None\nC++: void GetPoint(unsigned int icursor, double point[3])\n\nJB Coordonnees du centre de la maille\n"},
  {"IsLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> bool\nC++: bool IsLeaf()\nIsLeaf(self, icursor:int) -> bool\nC++: bool IsLeaf(unsigned int icursor)\n\nIs the cursor pointing to a leaf?\n"},
  {"IsRealLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRealLeaf, METH_VARARGS,
   "IsRealLeaf(self) -> bool\nC++: bool IsRealLeaf()\nIsRealLeaf(self, icursor:int) -> bool\nC++: bool IsRealLeaf(unsigned int icursor)\n\n"},
  {"IsVirtualLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsVirtualLeaf, METH_VARARGS,
   "IsVirtualLeaf(self) -> bool\nC++: bool IsVirtualLeaf()\nIsVirtualLeaf(self, icursor:int) -> bool\nC++: bool IsVirtualLeaf(unsigned int icursor)\n\nIs the cursor pointing to a real node in the tree\n"},
  {"GetExtensivePropertyRatio", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetExtensivePropertyRatio, METH_VARARGS,
   "GetExtensivePropertyRatio(self) -> float\nC++: double GetExtensivePropertyRatio()\nGetExtensivePropertyRatio(self, index:int) -> float\nC++: double GetExtensivePropertyRatio(vtkIdType index)\n\nreturns the value of the ratio to be applied to extensive value\nfor the current cursor, related to the last real value of the\ncell. Return 1 for real cells, otherwise return the portion of\nthe area covered by the subdivieded cell. For intensive valued\nfields this ratio should not be used.\n"},
  {"IsRoot", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_IsRoot, METH_VARARGS,
   "IsRoot(self) -> bool\nC++: bool IsRoot()\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: unsigned int GetLevel()\nGetLevel(self, icursor:int) -> int\nC++: unsigned int GetLevel(unsigned int icursor)\n\nGet the level of the tree vertex pointed by the cursor.\n"},
  {"GetLastRealLevel", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetLastRealLevel, METH_VARARGS,
   "GetLastRealLevel(self) -> int\nC++: unsigned int GetLastRealLevel()\nGetLastRealLevel(self, icursor:int) -> int\nC++: unsigned int GetLastRealLevel(unsigned int icursor)\n\n"},
  {"ToChild", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToChild, METH_VARARGS,
   "ToChild(self, ichild:int) -> None\nC++: void ToChild(unsigned char ichild)\n\nMove the cursor to child `child' of the current vertex.\n\\pre not_tree: HasTree()\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: ichild>=0 && ichild<GetNumberOfChildren()\n\\pre depth_limiter: GetLevel() <= GetDepthLimiter()\n"},
  {"ToRoot", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToRoot, METH_VARARGS,
   "ToRoot(self) -> None\nC++: void ToRoot()\n\nMove the cursor to the root vertex.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {"ToParent", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ToParent, METH_VARARGS,
   "ToParent(self) -> None\nC++: void ToParent()\n\nMove the cursor to the parent of the current vertex. Authorized\nif HasHistory return true.\n\\pre Non_root: !IsRoot()\n"},
  {"GetNumberOfCursors", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNumberOfCursors, METH_VARARGS,
   "GetNumberOfCursors(self) -> int\nC++: unsigned int GetNumberOfCursors()\n\nJB\n"},
  {"GetOrientedGeometryCursor", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetOrientedGeometryCursor, METH_VARARGS,
   "GetOrientedGeometryCursor(self, icursor:int)\n    -> vtkHyperTreeGridOrientedGeometryCursor\nC++: vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor> GetOrientedGeometryCursor(\n    unsigned int icursor)\n\nReturn the cursor pointing into i-th neighbor. The neighborhood\ndefinition depends on the type of cursor. NB: Only super cursors\nkeep track of neighborhoods.\n"},
  {"GetNonOrientedGeometryCursor", PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_GetNonOrientedGeometryCursor, METH_VARARGS,
   "GetNonOrientedGeometryCursor(self, icursor:int)\n    -> vtkHyperTreeGridNonOrientedGeometryCursor\nC++: vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor> GetNonOrientedGeometryCursor(\n    unsigned int icursor)\n\nReturn the cursor pointing into i-th neighbor. The neighborhood\ndefinition depends on the type of cursor. NB: Only super cursors\nkeep track of neighborhoods.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Doc =
  "vtkHyperTreeGridNonOrientedUnlimitedSuperCursor - Objects for\ntraversal a HyperTreeGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "@sa\n"
  "vtkHyperTreeGridNonOrientedSuperCursor vtkHyperTreeCursor\n"
  "vtkHyperTree vtkHyperTreeGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridNonOrientedUnlimitedSuperCursor", // tp_name
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
  PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Doc, // tp_doc
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

PyObject *PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Type, PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_Methods,
    "vtkHyperTreeGridNonOrientedUnlimitedSuperCursor",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridNonOrientedUnlimitedSuperCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridNonOrientedUnlimitedSuperCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridNonOrientedUnlimitedSuperCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

