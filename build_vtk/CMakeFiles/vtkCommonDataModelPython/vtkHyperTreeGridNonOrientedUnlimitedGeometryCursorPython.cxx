// python wrapper for vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor
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
#include "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *tempr = vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::NewInstance());

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
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *tempr = (ap.IsBound() ?
      op->Clone() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::Clone());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  vtkHyperTree *temp1 = nullptr;
  unsigned int temp2;
  long long temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid") &&
      ap.GetVTKObject(temp1, "vtkHyperTree") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::Initialize(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor"))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0);
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::Initialize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s1(self, args);
    case 5:
      return PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s2(self, args);
    case 1:
      return PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Initialize");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_HasTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTree() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::HasTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetVertexId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexId() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetVertexId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetGlobalNodeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalNodeIndex() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetGlobalNodeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetGlobalIndexStart(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetGlobalIndexFromLocal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetBounds(temp0);
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
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetPoint(temp0);
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
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsMasked(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsMasked");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsMasked() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsMasked());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsRealLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRealLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRealLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsRealLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsVirtualLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVirtualLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsVirtualLeaf() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsVirtualLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsRoot() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::IsRoot());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLevel() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetLastRealLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastRealLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLastRealLevel() :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetLastRealLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

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
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToChild(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToRoot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToRoot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToRoot();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToRoot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ToParent();
    }
    else
    {
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::ToParent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetHyperTreeGridOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor> tempr = (ap.IsBound() ?
      op->GetHyperTreeGridOrientedGeometryCursor(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetHyperTreeGridOrientedGeometryCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetHyperTreeGridNonOrientedGeometryCursor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHyperTreeGridNonOrientedGeometryCursor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *op = static_cast<vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor> tempr = (ap.IsBound() ?
      op->GetHyperTreeGridNonOrientedGeometryCursor(temp0) :
      op->vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::GetHyperTreeGridNonOrientedGeometryCursor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor\nC++: static vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_NewInstance, METH_VARARGS,
   "NewInstance(self)\n    -> vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor\nC++: vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *NewInstance(\n    )\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Clone", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Clone, METH_VARARGS,
   "Clone(self) -> vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor\nC++: virtual vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *Clone(\n    )\n\nCreate a copy of `this'.\n\\post results_exists:result!=0\n"},
  {"Initialize", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Initialize, METH_VARARGS,
   "Initialize(self, grid:vtkHyperTreeGrid, treeIndex:int,\n    create:bool=False) -> None\nC++: void Initialize(vtkHyperTreeGrid *grid, vtkIdType treeIndex,\n    bool create=false)\nInitialize(self, grid:vtkHyperTreeGrid, tree:vtkHyperTree,\n    level:int, index:int, origin:[float, ...]) -> None\nC++: void Initialize(vtkHyperTreeGrid *grid, vtkHyperTree *tree,\n    unsigned int level, vtkIdType index, double *origin)\nInitialize(self,\n    cursor:vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor)\n    -> None\nC++: void Initialize(\n    vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor *cursor)\n\nInitialize cursor at root of given tree index in grid.\n"},
  {"HasTree", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_HasTree, METH_VARARGS,
   "HasTree(self) -> bool\nC++: bool HasTree()\n\nReturn if a Tree pointing exist\n"},
  {"GetTree", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkHyperTree\nC++: vtkHyperTree *GetTree()\n\nSet the hyper tree to which the cursor is pointing.\n"},
  {"GetVertexId", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetVertexId, METH_VARARGS,
   "GetVertexId(self) -> int\nC++: vtkIdType GetVertexId()\n\nReturn the index of the current vertex in the tree.\n"},
  {"GetGlobalNodeIndex", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetGlobalNodeIndex, METH_VARARGS,
   "GetGlobalNodeIndex(self) -> int\nC++: vtkIdType GetGlobalNodeIndex()\n\nReturn the global index (relative to the grid) of the current\nvertex in the tree.\n"},
  {"GetDimension", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: unsigned char GetDimension()\n\nReturn the dimension of the tree.\n\\post positive_result: result>0\n"},
  {"GetNumberOfChildren", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: unsigned char GetNumberOfChildren()\n\nReturn the number of children for each node (non-vertex leaf) of\nthe tree.\n\\post positive_number: result>0\n"},
  {"SetGlobalIndexStart", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetGlobalIndexStart, METH_VARARGS,
   "SetGlobalIndexStart(self, index:int) -> None\nC++: void SetGlobalIndexStart(vtkIdType index)\n\nJB\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetGlobalIndexFromLocal, METH_VARARGS,
   "SetGlobalIndexFromLocal(self, index:int) -> None\nC++: void SetGlobalIndexFromLocal(vtkIdType index)\n\nJB\n"},
  {"GetOrigin", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> Pointer\nC++: double *GetOrigin()\n\nJB\n"},
  {"GetSize", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetSize, METH_VARARGS,
   "GetSize(self) -> Pointer\nC++: double *GetSize()\n\n"},
  {"GetBounds", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nJB\n"},
  {"GetPoint", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetPoint, METH_VARARGS,
   "GetPoint(self, point:[float, float, float]) -> None\nC++: void GetPoint(double point[3])\n\n"},
  {"SetMask", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_SetMask, METH_VARARGS,
   "SetMask(self, state:bool) -> None\nC++: void SetMask(bool state)\n\nSet the blanking mask is empty or not\n\\pre not_tree: tree\n"},
  {"IsMasked", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsMasked, METH_VARARGS,
   "IsMasked(self) -> bool\nC++: bool IsMasked()\n\nDetermine whether blanking mask is empty or not\n"},
  {"IsLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> bool\nC++: bool IsLeaf()\n\nIs the cursor pointing to a leaf? only respect depth limited,\notherwise return false\n"},
  {"IsRealLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsRealLeaf, METH_VARARGS,
   "IsRealLeaf(self) -> bool\nC++: bool IsRealLeaf()\n\nIs the cursor pointing to a leaf in the original tree ? Return\nfalse if the leaf is virtual.\n"},
  {"IsVirtualLeaf", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsVirtualLeaf, METH_VARARGS,
   "IsVirtualLeaf(self) -> bool\nC++: bool IsVirtualLeaf()\n\nIs the cursor pointing to a subdivided leaf ? Return false if the\nleaf is a real one.\n"},
  {"IsRoot", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_IsRoot, METH_VARARGS,
   "IsRoot(self) -> bool\nC++: bool IsRoot()\n\nIs the cursor at tree root?\n"},
  {"GetLevel", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetLevel, METH_VARARGS,
   "GetLevel(self) -> int\nC++: unsigned int GetLevel()\n\nGet the level of the tree vertex pointed by the cursor.\n"},
  {"GetLastRealLevel", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetLastRealLevel, METH_VARARGS,
   "GetLastRealLevel(self) -> int\nC++: unsigned int GetLastRealLevel()\n\n"},
  {"ToChild", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToChild, METH_VARARGS,
   "ToChild(self, ichild:int) -> None\nC++: void ToChild(unsigned char ichild)\n\nMove the cursor to child `child' of the current vertex.\n\\pre not_tree: HasTree()\n\\pre not_leaf: !IsLeaf()\n\\pre valid_child: ichild>=0 && ichild<GetNumberOfChildren()\n\\pre depth_limiter: GetLevel() <= GetDepthLimiter()\n"},
  {"ToRoot", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToRoot, METH_VARARGS,
   "ToRoot(self) -> None\nC++: void ToRoot()\n\nMove the cursor to the root vertex.\n\\pre can be root\n\\post is_root: IsRoot()\n"},
  {"ToParent", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ToParent, METH_VARARGS,
   "ToParent(self) -> None\nC++: void ToParent()\n\nMove the cursor to the parent of the current vertex. Authorized\nif HasHistory return true.\n\\pre Non_root: !IsRoot()\n"},
  {"GetHyperTreeGridOrientedGeometryCursor", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetHyperTreeGridOrientedGeometryCursor, METH_VARARGS,
   "GetHyperTreeGridOrientedGeometryCursor(self,\n    grid:vtkHyperTreeGrid)\n    -> vtkHyperTreeGridOrientedGeometryCursor\nC++: vtkSmartPointer<vtkHyperTreeGridOrientedGeometryCursor> GetHyperTreeGridOrientedGeometryCursor(\n    vtkHyperTreeGrid *grid)\n\nCreate a vtkHyperTreeGridOrientedGeometryCursor from input grid\nand current entry data\n"},
  {"GetHyperTreeGridNonOrientedGeometryCursor", PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_GetHyperTreeGridNonOrientedGeometryCursor, METH_VARARGS,
   "GetHyperTreeGridNonOrientedGeometryCursor(self,\n    grid:vtkHyperTreeGrid)\n    -> vtkHyperTreeGridNonOrientedGeometryCursor\nC++: vtkSmartPointer<vtkHyperTreeGridNonOrientedGeometryCursor> GetHyperTreeGridNonOrientedGeometryCursor(\n    vtkHyperTreeGrid *grid)\n\nCreate a vtkHyperTreeGridNonOrientedGeometryCursor from input\ngrid and current entry data\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Doc =
  "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor - Objects for\ntraversal a HyperTreeGrid.\n\n"
  "Superclass: vtkObject\n\n"
  "JB A REVOIR NonOriented ne peut pas remonter plus haut qu'a sa\n"
  "creation. Objects that can perform depth traversal of a hyper tree\n"
  "grid, take into account more parameters (related to the grid\n"
  "structure) than the compact hyper tree cursor implemented in\n"
  "vtkHyperTree can. This is an abstract class. Cursors are created by\n"
  "the HyperTreeGrid implementation.\n\n"
  "Geometry cursors allow to retrieve origin, size, bounds and central\n"
  "points\n\n"
  "@sa\n"
  "vtkHyperTreeCursor vtkHyperTree vtkHyperTreeGrid\n\n"
  "@par Thanks: This class was written by Guenole Harel and\n"
  "Jacques-Bernard Lekien, 2014. This class was re-written by Philippe\n"
  "Pebay, 2016. JB This class was re-written for more optimisation by\n"
  "Jacques-Bernard Lekien, Guenole Harel and Jerome Dubois, 2018. This\n"
  "work was supported by Commissariat a l'Energie Atomique CEA, DAM,\n"
  "DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor", // tp_name
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
  PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_StaticNew()
{
  return vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor::New();
}

PyObject *PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Type, PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_Methods,
    "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor",
 &PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridNonOrientedUnlimitedGeometryCursor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridNonOrientedUnlimitedGeometryCursor", o) != 0)
  {
    Py_DECREF(o);
  }

}

