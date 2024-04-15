// python wrapper for vtkHyperTreeGridSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTreeGridSource(PyObject *dict); }
extern "C" { PyObject *PyvtkHyperTreeGridSource_ClassNew(); }


static PyObject *
PyvtkHyperTreeGridSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTreeGridSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTreeGridSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTreeGridSource *tempr = vtkHyperTreeGridSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTreeGridSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTreeGridSource::NewInstance());

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
PyvtkHyperTreeGridSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTreeGridSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTreeGridSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetMaxDepth() :
      op->vtkHyperTreeGridSource::GetMaxDepth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaxDepth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxDepth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxDepth(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetMaxDepth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridSource_SetOrigin_s1(self, args);
    case 1:
      return PyvtkHyperTreeGridSource_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridSource_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkHyperTreeGridSource::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetGridScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridScale(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGridScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

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
      op->vtkHyperTreeGridSource::SetGridScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridSource_SetGridScale_Methods[] = {
  {"SetGridScale", PyvtkHyperTreeGridSource_SetGridScale_s2, METH_VARARGS,
   "@P *d"},
  {"SetGridScale", PyvtkHyperTreeGridSource_SetGridScale_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTreeGridSource_SetGridScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTreeGridSource_SetGridScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHyperTreeGridSource_SetGridScale_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridScale");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridSource_GetGridScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridScale() :
      op->vtkHyperTreeGridSource::GetGridScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned int> store0(size0);
  unsigned int *temp0 = store0.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDimensions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDimensions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_SetDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridSource_SetDimensions_s1(self, args);
    case 3:
      return PyvtkHyperTreeGridSource_SetDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDimensions");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int *tempr = (ap.IsBound() ?
      op->GetDimensions() :
      op->vtkHyperTreeGridSource::GetDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTransposedRootIndexing(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetTransposedRootIndexing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetTransposedRootIndexing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransposedRootIndexing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTransposedRootIndexing() :
      op->vtkHyperTreeGridSource::GetTransposedRootIndexing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToKJI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToKJI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToKJI();
    }
    else
    {
      op->vtkHyperTreeGridSource::SetIndexingModeToKJI();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetIndexingModeToIJK(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIndexingModeToIJK");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIndexingModeToIJK();
    }
    else
    {
      op->vtkHyperTreeGridSource::SetIndexingModeToIJK();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkHyperTreeGridSource::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBranchFactor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetBranchFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMinValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactorMaxValue() :
      op->vtkHyperTreeGridSource::GetBranchFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTreeGridSource::GetBranchFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseDescriptor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetUseDescriptor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseDescriptor() :
      op->vtkHyperTreeGridSource::GetUseDescriptor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDescriptorOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseDescriptorOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseDescriptorOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseDescriptorOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseDescriptorOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseDescriptorOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetUseMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMask(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetUseMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetUseMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMask() :
      op->vtkHyperTreeGridSource::GetUseMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaskOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaskOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaskOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseMaskOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_UseMaskOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseMaskOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseMaskOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::UseMaskOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetGenerateInterfaceFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateInterfaceFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateInterfaceFields(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetGenerateInterfaceFields(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetGenerateInterfaceFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateInterfaceFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateInterfaceFields() :
      op->vtkHyperTreeGridSource::GetGenerateInterfaceFields());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInterfaceFieldsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInterfaceFieldsOn();
    }
    else
    {
      op->vtkHyperTreeGridSource::GenerateInterfaceFieldsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateInterfaceFieldsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateInterfaceFieldsOff();
    }
    else
    {
      op->vtkHyperTreeGridSource::GenerateInterfaceFieldsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDescriptor(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDescriptor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDescriptor() :
      op->vtkHyperTreeGridSource::GetDescriptor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const char *temp0 = nullptr;
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
      op->vtkHyperTreeGridSource::SetMask(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMask(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMask");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMask() :
      op->vtkHyperTreeGridSource::GetMask());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetDescriptorBits(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetDescriptorBits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetDescriptorBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptorBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetDescriptorBits() :
      op->vtkHyperTreeGridSource::GetDescriptorBits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLevelZeroMaterialIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkIdTypeArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetLevelZeroMaterialIndex(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetLevelZeroMaterialIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkBitArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBitArray"))
  {
    if (ap.IsBound())
    {
      op->SetMaskBits(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetMaskBits(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMaskBits(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaskBits");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->GetMaskBits() :
      op->vtkHyperTreeGridSource::GetMaskBits());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  vtkQuadric *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkQuadric"))
  {
    if (ap.IsBound())
    {
      op->SetQuadric(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetQuadric(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_GetQuadric(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadric");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuadric *tempr = (ap.IsBound() ?
      op->GetQuadric() :
      op->vtkHyperTreeGridSource::GetQuadric());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_SetQuadricCoefficients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::SetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  const size_t size0 = 10;
  double temp0[10];
  double save0[10];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetQuadricCoefficients(temp0);
    }
    else
    {
      op->vtkHyperTreeGridSource::GetQuadricCoefficients(temp0);
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
PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQuadricCoefficients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetQuadricCoefficients() :
      op->vtkHyperTreeGridSource::GetQuadricCoefficients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTreeGridSource_GetQuadricCoefficients(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s1(self, args);
    case 0:
      return PyvtkHyperTreeGridSource_GetQuadricCoefficients_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetQuadricCoefficients");
  return nullptr;
}


static PyObject *
PyvtkHyperTreeGridSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkHyperTreeGridSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertDescriptorStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertDescriptorStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertDescriptorStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTreeGridSource_ConvertMaskStringToBitArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertMaskStringToBitArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTreeGridSource *op = static_cast<vtkHyperTreeGridSource *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkBitArray *tempr = (ap.IsBound() ?
      op->ConvertMaskStringToBitArray(temp0) :
      op->vtkHyperTreeGridSource::ConvertMaskStringToBitArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTreeGridSource_Methods[] = {
  {"IsTypeOf", PyvtkHyperTreeGridSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTreeGridSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTreeGridSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTreeGridSource\nC++: static vtkHyperTreeGridSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTreeGridSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTreeGridSource\nC++: vtkHyperTreeGridSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTreeGridSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTreeGridSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMaxDepth", PyvtkHyperTreeGridSource_GetMaxDepth, METH_VARARGS,
   "GetMaxDepth(self) -> int\nC++: unsigned int GetMaxDepth()\n\nReturn the maximum number of levels of the hypertree.\n\\post positive_result: result>=1\n"},
  {"SetMaxDepth", PyvtkHyperTreeGridSource_SetMaxDepth, METH_VARARGS,
   "SetMaxDepth(self, levels:int) -> None\nC++: void SetMaxDepth(unsigned int levels)\n\nSet the maximum number of levels of the hypertrees.\n\\pre positive_levels: levels>=1\n\\post is_set: this->GetLevels()==levels\n\\post min_is_valid: this->GetMinLevels()<this->GetLevels()\n"},
  {"SetOrigin", PyvtkHyperTreeGridSource_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get the origin of the grid\n"},
  {"GetOrigin", PyvtkHyperTreeGridSource_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetGridScale", PyvtkHyperTreeGridSource_SetGridScale, METH_VARARGS,
   "SetGridScale(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetGridScale(double _arg1, double _arg2,\n    double _arg3)\nSetGridScale(self, _arg:(float, float, float)) -> None\nC++: virtual void SetGridScale(const double _arg[3])\nSetGridScale(self, scale:float) -> None\nC++: void SetGridScale(double scale)\n\nSet/Get the scale to be applied to root cells in each dimension\nof the grid\n"},
  {"GetGridScale", PyvtkHyperTreeGridSource_GetGridScale, METH_VARARGS,
   "GetGridScale(self) -> (float, float, float)\nC++: virtual double *GetGridScale()\n\n"},
  {"SetDimensions", PyvtkHyperTreeGridSource_SetDimensions, METH_VARARGS,
   "SetDimensions(self, dims:(int, ...)) -> None\nC++: void SetDimensions(const unsigned int *dims)\nSetDimensions(self, __a:int, __b:int, __c:int) -> None\nC++: void SetDimensions(unsigned int, unsigned int, unsigned int)\n\nSet/Get the number of root cells + 1 in each dimension of the\ngrid\n"},
  {"GetDimensions", PyvtkHyperTreeGridSource_GetDimensions, METH_VARARGS,
   "GetDimensions(self) -> (int, int, int)\nC++: virtual unsigned int *GetDimensions()\n\n"},
  {"SetTransposedRootIndexing", PyvtkHyperTreeGridSource_SetTransposedRootIndexing, METH_VARARGS,
   "SetTransposedRootIndexing(self, _arg:bool) -> None\nC++: virtual void SetTransposedRootIndexing(bool _arg)\n\nSpecify whether indexing mode of grid root cells must be\ntransposed to x-axis first, z-axis last, instead of the default\nz-axis first, k-axis last\n"},
  {"GetTransposedRootIndexing", PyvtkHyperTreeGridSource_GetTransposedRootIndexing, METH_VARARGS,
   "GetTransposedRootIndexing(self) -> bool\nC++: virtual bool GetTransposedRootIndexing()\n\n"},
  {"SetIndexingModeToKJI", PyvtkHyperTreeGridSource_SetIndexingModeToKJI, METH_VARARGS,
   "SetIndexingModeToKJI(self) -> None\nC++: void SetIndexingModeToKJI()\n\n"},
  {"SetIndexingModeToIJK", PyvtkHyperTreeGridSource_SetIndexingModeToIJK, METH_VARARGS,
   "SetIndexingModeToIJK(self) -> None\nC++: void SetIndexingModeToIJK()\n\n"},
  {"GetOrientation", PyvtkHyperTreeGridSource_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: virtual unsigned int GetOrientation()\n\nSet/Get the orientation of the grid (in 1D and 2D)\n"},
  {"SetBranchFactor", PyvtkHyperTreeGridSource_SetBranchFactor, METH_VARARGS,
   "SetBranchFactor(self, _arg:int) -> None\nC++: virtual void SetBranchFactor(unsigned int _arg)\n\nSet/Get the subdivision factor in the grid refinement scheme\n"},
  {"GetBranchFactorMinValue", PyvtkHyperTreeGridSource_GetBranchFactorMinValue, METH_VARARGS,
   "GetBranchFactorMinValue(self) -> int\nC++: virtual unsigned int GetBranchFactorMinValue()\n\n"},
  {"GetBranchFactorMaxValue", PyvtkHyperTreeGridSource_GetBranchFactorMaxValue, METH_VARARGS,
   "GetBranchFactorMaxValue(self) -> int\nC++: virtual unsigned int GetBranchFactorMaxValue()\n\n"},
  {"GetBranchFactor", PyvtkHyperTreeGridSource_GetBranchFactor, METH_VARARGS,
   "GetBranchFactor(self) -> int\nC++: virtual unsigned int GetBranchFactor()\n\n"},
  {"SetUseDescriptor", PyvtkHyperTreeGridSource_SetUseDescriptor, METH_VARARGS,
   "SetUseDescriptor(self, _arg:bool) -> None\nC++: virtual void SetUseDescriptor(bool _arg)\n\nSet/get whether the descriptor string should be used. NB:\nOtherwise a quadric definition is expected. Default: true\n"},
  {"GetUseDescriptor", PyvtkHyperTreeGridSource_GetUseDescriptor, METH_VARARGS,
   "GetUseDescriptor(self) -> bool\nC++: virtual bool GetUseDescriptor()\n\n"},
  {"UseDescriptorOn", PyvtkHyperTreeGridSource_UseDescriptorOn, METH_VARARGS,
   "UseDescriptorOn(self) -> None\nC++: virtual void UseDescriptorOn()\n\n"},
  {"UseDescriptorOff", PyvtkHyperTreeGridSource_UseDescriptorOff, METH_VARARGS,
   "UseDescriptorOff(self) -> None\nC++: virtual void UseDescriptorOff()\n\n"},
  {"SetUseMask", PyvtkHyperTreeGridSource_SetUseMask, METH_VARARGS,
   "SetUseMask(self, _arg:bool) -> None\nC++: virtual void SetUseMask(bool _arg)\n\nSet/get whether the material mask should be used. NB: This is\nonly used when UseDescriptor is ON Default: false\n"},
  {"GetUseMask", PyvtkHyperTreeGridSource_GetUseMask, METH_VARARGS,
   "GetUseMask(self) -> bool\nC++: virtual bool GetUseMask()\n\n"},
  {"UseMaskOn", PyvtkHyperTreeGridSource_UseMaskOn, METH_VARARGS,
   "UseMaskOn(self) -> None\nC++: virtual void UseMaskOn()\n\n"},
  {"UseMaskOff", PyvtkHyperTreeGridSource_UseMaskOff, METH_VARARGS,
   "UseMaskOff(self) -> None\nC++: virtual void UseMaskOff()\n\n"},
  {"SetGenerateInterfaceFields", PyvtkHyperTreeGridSource_SetGenerateInterfaceFields, METH_VARARGS,
   "SetGenerateInterfaceFields(self, _arg:bool) -> None\nC++: virtual void SetGenerateInterfaceFields(bool _arg)\n\nSet/get whether cell-centered interface fields should be\ngenerated. Default: false\n"},
  {"GetGenerateInterfaceFields", PyvtkHyperTreeGridSource_GetGenerateInterfaceFields, METH_VARARGS,
   "GetGenerateInterfaceFields(self) -> bool\nC++: virtual bool GetGenerateInterfaceFields()\n\n"},
  {"GenerateInterfaceFieldsOn", PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOn, METH_VARARGS,
   "GenerateInterfaceFieldsOn(self) -> None\nC++: virtual void GenerateInterfaceFieldsOn()\n\n"},
  {"GenerateInterfaceFieldsOff", PyvtkHyperTreeGridSource_GenerateInterfaceFieldsOff, METH_VARARGS,
   "GenerateInterfaceFieldsOff(self) -> None\nC++: virtual void GenerateInterfaceFieldsOff()\n\n"},
  {"SetDescriptor", PyvtkHyperTreeGridSource_SetDescriptor, METH_VARARGS,
   "SetDescriptor(self, _arg:str) -> None\nC++: virtual void SetDescriptor(const char *_arg)\n\nSet/Get the string used to describe the grid.\n"},
  {"GetDescriptor", PyvtkHyperTreeGridSource_GetDescriptor, METH_VARARGS,
   "GetDescriptor(self) -> str\nC++: virtual char *GetDescriptor()\n\n"},
  {"SetMask", PyvtkHyperTreeGridSource_SetMask, METH_VARARGS,
   "SetMask(self, _arg:str) -> None\nC++: virtual void SetMask(const char *_arg)\n\nSet/Get the string used to as a material mask.\n"},
  {"GetMask", PyvtkHyperTreeGridSource_GetMask, METH_VARARGS,
   "GetMask(self) -> str\nC++: virtual char *GetMask()\n\n"},
  {"SetDescriptorBits", PyvtkHyperTreeGridSource_SetDescriptorBits, METH_VARARGS,
   "SetDescriptorBits(self, __a:vtkBitArray) -> None\nC++: virtual void SetDescriptorBits(vtkBitArray *)\n\nSet/Get the bitarray used to describe the grid.\n"},
  {"GetDescriptorBits", PyvtkHyperTreeGridSource_GetDescriptorBits, METH_VARARGS,
   "GetDescriptorBits(self) -> vtkBitArray\nC++: virtual vtkBitArray *GetDescriptorBits()\n\n"},
  {"SetLevelZeroMaterialIndex", PyvtkHyperTreeGridSource_SetLevelZeroMaterialIndex, METH_VARARGS,
   "SetLevelZeroMaterialIndex(self, __a:vtkIdTypeArray) -> None\nC++: virtual void SetLevelZeroMaterialIndex(vtkIdTypeArray *)\n\nSet the index array used to as a material mask.\n"},
  {"SetMaskBits", PyvtkHyperTreeGridSource_SetMaskBits, METH_VARARGS,
   "SetMaskBits(self, __a:vtkBitArray) -> None\nC++: virtual void SetMaskBits(vtkBitArray *)\n\nSet/Get the bitarray used as a material mask.\n"},
  {"GetMaskBits", PyvtkHyperTreeGridSource_GetMaskBits, METH_VARARGS,
   "GetMaskBits(self) -> vtkBitArray\nC++: virtual vtkBitArray *GetMaskBits()\n\n"},
  {"SetQuadric", PyvtkHyperTreeGridSource_SetQuadric, METH_VARARGS,
   "SetQuadric(self, __a:vtkQuadric) -> None\nC++: virtual void SetQuadric(vtkQuadric *)\n\nSet/Get the quadric function.\n"},
  {"GetQuadric", PyvtkHyperTreeGridSource_GetQuadric, METH_VARARGS,
   "GetQuadric(self) -> vtkQuadric\nC++: virtual vtkQuadric *GetQuadric()\n\n"},
  {"SetQuadricCoefficients", PyvtkHyperTreeGridSource_SetQuadricCoefficients, METH_VARARGS,
   "SetQuadricCoefficients(self, __a:[float, float, float, float,\n    float, float, float, float, float, float]) -> None\nC++: void SetQuadricCoefficients(double[10])\n\nHelpers to set/get the 10 coefficients of the quadric function\n"},
  {"GetQuadricCoefficients", PyvtkHyperTreeGridSource_GetQuadricCoefficients, METH_VARARGS,
   "GetQuadricCoefficients(self, __a:[float, float, float, float,\n    float, float, float, float, float, float]) -> None\nC++: void GetQuadricCoefficients(double[10])\nGetQuadricCoefficients(self) -> Pointer\nC++: double *GetQuadricCoefficients()\n\n"},
  {"GetMTime", PyvtkHyperTreeGridSource_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime because we delegate to a vtkQuadric.\n"},
  {"ConvertDescriptorStringToBitArray", PyvtkHyperTreeGridSource_ConvertDescriptorStringToBitArray, METH_VARARGS,
   "ConvertDescriptorStringToBitArray(self, __a:str) -> vtkBitArray\nC++: vtkBitArray *ConvertDescriptorStringToBitArray(\n    const std::string &)\n\nHelpers to convert string descriptors & mask to bit arrays\n"},
  {"ConvertMaskStringToBitArray", PyvtkHyperTreeGridSource_ConvertMaskStringToBitArray, METH_VARARGS,
   "ConvertMaskStringToBitArray(self, __a:str) -> vtkBitArray\nC++: vtkBitArray *ConvertMaskStringToBitArray(const std::string &)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTreeGridSource_Doc =
  "vtkHyperTreeGridSource - Create a synthetic grid of hypertrees.\n\n"
  "Superclass: vtkHyperTreeGridAlgorithm\n\n"
  "This class uses input parameters, most notably a string descriptor,\n"
  "to generate a vtkHyperTreeGrid instance representing the\n"
  "corresponding tree-based AMR grid. This descriptor uses the following\n"
  "conventions, e.g., to describe a 1-D ternary subdivision with 2 root\n"
  "cells L0    L1        L2 RR  | .R. ... | ... For this tree:\n"
  " HTG:       .\n"
  "          /   \\\n"
  " L0:     .     .\n"
  "        /|\\   /|\\\n"
  " L1:   c . c c c c\n"
  "        /|\\\n"
  " L2:   c c c The top level of the tree is not considered a grid level\n"
  "NB: For ease of legibility, white spaces are allowed and ignored.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was modified\n"
  "by Philippe Pebay, 2016 This work was supported by Commissariat a\n"
  "l'Energie Atomique (CEA/DIF) CEA, DAM, DIF, F-91297 Arpajon, France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeGridSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkHyperTreeGridSource", // tp_name
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
  PyvtkHyperTreeGridSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHyperTreeGridSource_StaticNew()
{
  return vtkHyperTreeGridSource::New();
}

PyObject *PyvtkHyperTreeGridSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTreeGridSource_Type, PyvtkHyperTreeGridSource_Methods,
    "vtkHyperTreeGridSource",
 &PyvtkHyperTreeGridSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkHyperTreeGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTreeGridSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeGridSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeGridSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

