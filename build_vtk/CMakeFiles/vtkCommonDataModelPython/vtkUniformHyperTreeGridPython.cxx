// python wrapper for vtkUniformHyperTreeGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUniformHyperTreeGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniformHyperTreeGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkUniformHyperTreeGrid_ClassNew(); }

#ifndef DECLARED_PyvtkHyperTreeGrid_ClassNew
extern "C" { PyObject *PyvtkHyperTreeGrid_ClassNew(); }
#define DECLARED_PyvtkHyperTreeGrid_ClassNew
#endif

static PyObject *
PyvtkUniformHyperTreeGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniformHyperTreeGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniformHyperTreeGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniformHyperTreeGrid *tempr = vtkUniformHyperTreeGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniformHyperTreeGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniformHyperTreeGrid::NewInstance());

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
PyvtkUniformHyperTreeGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUniformHyperTreeGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUniformHyperTreeGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUniformHyperTreeGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkUniformHyperTreeGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformHyperTreeGrid_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformHyperTreeGrid_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUniformHyperTreeGrid_SetOrigin_s1(self, args);
    case 1:
      return PyvtkUniformHyperTreeGrid_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkUniformHyperTreeGrid::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetGridScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetGridScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniformHyperTreeGrid_SetGridScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetGridScale(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetGridScale(temp0);
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
PyvtkUniformHyperTreeGrid_SetGridScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridScale(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetGridScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformHyperTreeGrid_SetGridScale_Methods[] = {
  {"SetGridScale", PyvtkUniformHyperTreeGrid_SetGridScale_s2, METH_VARARGS,
   "@P *d"},
  {"SetGridScale", PyvtkUniformHyperTreeGrid_SetGridScale_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniformHyperTreeGrid_SetGridScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniformHyperTreeGrid_SetGridScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUniformHyperTreeGrid_SetGridScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridScale");
  return nullptr;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetGridScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridScale() :
      op->vtkUniformHyperTreeGrid::GetGridScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkUniformHyperTreeGrid::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetXCoordinates(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetXCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetXCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetXCoordinates() :
      op->vtkUniformHyperTreeGrid::GetXCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetYCoordinates(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetYCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetYCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetYCoordinates() :
      op->vtkUniformHyperTreeGrid::GetYCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->SetZCoordinates(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetZCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetZCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataArray *tempr = (ap.IsBound() ?
      op->GetZCoordinates() :
      op->vtkUniformHyperTreeGrid::GetZCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_CopyCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkHyperTreeGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTreeGrid"))
  {
    if (ap.IsBound())
    {
      op->CopyCoordinates(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::CopyCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_SetFixedCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixedCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  unsigned int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFixedCoordinates(temp0, temp1);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::SetFixedCoordinates(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetLevelZeroOriginAndSizeFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroOriginAndSizeFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->GetLevelZeroOriginAndSizeFromIndex(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::GetLevelZeroOriginAndSizeFromIndex(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

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
PyvtkUniformHyperTreeGrid_GetLevelZeroOriginFromIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLevelZeroOriginFromIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  long long temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetLevelZeroOriginFromIndex(temp0, temp1);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::GetLevelZeroOriginFromIndex(temp0, temp1);
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
PyvtkUniformHyperTreeGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkUniformHyperTreeGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetActualMemorySizeBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySizeBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySizeBytes() :
      op->vtkUniformHyperTreeGrid::GetActualMemorySizeBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniformHyperTreeGrid_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniformHyperTreeGrid *op = static_cast<vtkUniformHyperTreeGrid *>(vp);

  long long temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->GetTree(temp0, temp1) :
      op->vtkUniformHyperTreeGrid::GetTree(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniformHyperTreeGrid_Methods[] = {
  {"IsTypeOf", PyvtkUniformHyperTreeGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniformHyperTreeGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniformHyperTreeGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUniformHyperTreeGrid\nC++: static vtkUniformHyperTreeGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniformHyperTreeGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUniformHyperTreeGrid\nC++: vtkUniformHyperTreeGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUniformHyperTreeGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUniformHyperTreeGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkUniformHyperTreeGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn what type of dataset this is.\n"},
  {"CopyStructure", PyvtkUniformHyperTreeGrid_CopyStructure, METH_VARARGS,
   "CopyStructure(self, __a:vtkDataObject) -> None\nC++: void CopyStructure(vtkDataObject *) override;\n\nCopy the internal geometric and topological structure of a\nvtkUniformHyperTreeGrid object.\n"},
  {"Initialize", PyvtkUniformHyperTreeGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state.\n"},
  {"SetOrigin", PyvtkUniformHyperTreeGrid_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get origin of grid\n"},
  {"GetOrigin", PyvtkUniformHyperTreeGrid_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetGridScale", PyvtkUniformHyperTreeGrid_SetGridScale, METH_VARARGS,
   "SetGridScale(self, __a:float, __b:float, __c:float) -> None\nC++: void SetGridScale(double, double, double)\nSetGridScale(self, __a:[float, ...]) -> None\nC++: void SetGridScale(double *)\nSetGridScale(self, __a:float) -> None\nC++: void SetGridScale(double)\n\nSet/Get scale of root cells along each direction\n"},
  {"GetGridScale", PyvtkUniformHyperTreeGrid_GetGridScale, METH_VARARGS,
   "GetGridScale(self) -> (float, float, float)\nC++: virtual double *GetGridScale()\n\n"},
  {"GetBounds", PyvtkUniformHyperTreeGrid_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"SetXCoordinates", PyvtkUniformHyperTreeGrid_SetXCoordinates, METH_VARARGS,
   "SetXCoordinates(self, XCoordinates:vtkDataArray) -> None\nC++: void SetXCoordinates(vtkDataArray *XCoordinates) override;\n\nSet/Get the grid coordinates in the x-direction. NB: Set method\ndeactivated in the case of uniform grids. Use SetSize() instead.\n"},
  {"GetXCoordinates", PyvtkUniformHyperTreeGrid_GetXCoordinates, METH_VARARGS,
   "GetXCoordinates(self) -> vtkDataArray\nC++: vtkDataArray *GetXCoordinates() override;\n\n"},
  {"SetYCoordinates", PyvtkUniformHyperTreeGrid_SetYCoordinates, METH_VARARGS,
   "SetYCoordinates(self, YCoordinates:vtkDataArray) -> None\nC++: void SetYCoordinates(vtkDataArray *YCoordinates) override;\n\nSet/Get the grid coordinates in the y-direction. NB: Set method\ndeactivated in the case of uniform grids. Use SetSize() instead.\n"},
  {"GetYCoordinates", PyvtkUniformHyperTreeGrid_GetYCoordinates, METH_VARARGS,
   "GetYCoordinates(self) -> vtkDataArray\nC++: vtkDataArray *GetYCoordinates() override;\n\n"},
  {"SetZCoordinates", PyvtkUniformHyperTreeGrid_SetZCoordinates, METH_VARARGS,
   "SetZCoordinates(self, ZCoordinates:vtkDataArray) -> None\nC++: void SetZCoordinates(vtkDataArray *ZCoordinates) override;\n\nSet/Get the grid coordinates in the z-direction. NB: Set method\ndeactivated in the case of uniform grids. Use SetSize() instead.\n"},
  {"GetZCoordinates", PyvtkUniformHyperTreeGrid_GetZCoordinates, METH_VARARGS,
   "GetZCoordinates(self) -> vtkDataArray\nC++: vtkDataArray *GetZCoordinates() override;\n\n"},
  {"CopyCoordinates", PyvtkUniformHyperTreeGrid_CopyCoordinates, METH_VARARGS,
   "CopyCoordinates(self, output:vtkHyperTreeGrid) -> None\nC++: void CopyCoordinates(const vtkHyperTreeGrid *output)\n    override;\n\nJB Augented services on Coordinates.\n"},
  {"SetFixedCoordinates", PyvtkUniformHyperTreeGrid_SetFixedCoordinates, METH_VARARGS,
   "SetFixedCoordinates(self, axis:int, value:float) -> None\nC++: void SetFixedCoordinates(unsigned int axis, double value)\n    override;\n\n"},
  {"GetLevelZeroOriginAndSizeFromIndex", PyvtkUniformHyperTreeGrid_GetLevelZeroOriginAndSizeFromIndex, METH_VARARGS,
   "GetLevelZeroOriginAndSizeFromIndex(self, __a:int, __b:[float,\n    ...], __c:[float, ...]) -> None\nC++: void GetLevelZeroOriginAndSizeFromIndex(vtkIdType, double *,\n    double *) override;\n\nConvert the global index of a root to its Spacial coordinates\norigin and size.\n"},
  {"GetLevelZeroOriginFromIndex", PyvtkUniformHyperTreeGrid_GetLevelZeroOriginFromIndex, METH_VARARGS,
   "GetLevelZeroOriginFromIndex(self, __a:int, __b:[float, ...])\n    -> None\nC++: void GetLevelZeroOriginFromIndex(vtkIdType, double *)\n    override;\n\nConvert the global index of a root to its Spacial coordinates\norigin and size.\n"},
  {"ShallowCopy", PyvtkUniformHyperTreeGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, __a:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *) override;\n\nCreate shallow copy of hyper tree grid.\n"},
  {"DeepCopy", PyvtkUniformHyperTreeGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, __a:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *) override;\n\nCreate deep copy of hyper tree grid.\n"},
  {"GetActualMemorySizeBytes", PyvtkUniformHyperTreeGrid_GetActualMemorySizeBytes, METH_VARARGS,
   "GetActualMemorySizeBytes(self) -> int\nC++: unsigned long GetActualMemorySizeBytes() override;\n\nReturn the actual size of the data bytes\n"},
  {"GetTree", PyvtkUniformHyperTreeGrid_GetTree, METH_VARARGS,
   "GetTree(self, __a:int, create:bool=False) -> vtkHyperTree\nC++: vtkHyperTree *GetTree(vtkIdType, bool create=false) override;\n\nReturn tree located at given index of hyper tree grid NB: This\nwill construct a new HyperTree if grid slot is empty.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUniformHyperTreeGrid_Doc =
  "vtkUniformHyperTreeGrid - A specifalized type of vtkHyperTreeGrid for\nthe case when root cells have uniform sizes in each direction\n\n"
  "Superclass: vtkHyperTreeGrid\n\n"
  "@sa\n"
  "vtkHyperTree vtkHyperTreeGrid vtkRectilinearGrid\n\n"
  "@par Thanks: This class was written by Philippe Pebay, NexGen\n"
  "Analytics 2017 JB modify for introduce Scales by Jacques-Bernard\n"
  "Lekien, CEA 2018. This work was supported by Commissariat a l'Energie\n"
  "Atomique CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniformHyperTreeGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUniformHyperTreeGrid", // tp_name
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
  PyvtkUniformHyperTreeGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniformHyperTreeGrid_StaticNew()
{
  return vtkUniformHyperTreeGrid::New();
}

PyObject *PyvtkUniformHyperTreeGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUniformHyperTreeGrid_Type, PyvtkUniformHyperTreeGrid_Methods,
    "vtkUniformHyperTreeGrid",
 &PyvtkUniformHyperTreeGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHyperTreeGrid_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniformHyperTreeGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniformHyperTreeGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniformHyperTreeGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

