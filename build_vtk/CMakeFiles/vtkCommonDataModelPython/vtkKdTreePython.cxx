// python wrapper for vtkKdTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKdTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKdTree(PyObject *dict); }
extern "C" { PyObject *PyvtkKdTree_ClassNew(); }

#ifndef DECLARED_PyvtkLocator_ClassNew
extern "C" { PyObject *PyvtkLocator_ClassNew(); }
#define DECLARED_PyvtkLocator_ClassNew
#endif

static PyObject *
PyvtkKdTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKdTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKdTree *tempr = vtkKdTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTree::NewInstance());

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
PyvtkKdTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKdTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKdTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_TimingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimingOn();
    }
    else
    {
      op->vtkKdTree::TimingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_TimingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TimingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TimingOff();
    }
    else
    {
      op->vtkKdTree::TimingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTiming(temp0);
    }
    else
    {
      op->vtkKdTree::SetTiming(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetTiming(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTiming");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTiming() :
      op->vtkKdTree::GetTiming());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetMinCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinCells(temp0);
    }
    else
    {
      op->vtkKdTree::SetMinCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetMinCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMinCells() :
      op->vtkKdTree::GetMinCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfRegionsOrLess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionsOrLess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionsOrLess() :
      op->vtkKdTree::GetNumberOfRegionsOrLess());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetNumberOfRegionsOrLess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRegionsOrLess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRegionsOrLess(temp0);
    }
    else
    {
      op->vtkKdTree::SetNumberOfRegionsOrLess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfRegionsOrMore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegionsOrMore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegionsOrMore() :
      op->vtkKdTree::GetNumberOfRegionsOrMore());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetNumberOfRegionsOrMore(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfRegionsOrMore");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfRegionsOrMore(temp0);
    }
    else
    {
      op->vtkKdTree::SetNumberOfRegionsOrMore(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFudgeFactor() :
      op->vtkKdTree::GetFudgeFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetFudgeFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFudgeFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFudgeFactor(temp0);
    }
    else
    {
      op->vtkKdTree::SetFudgeFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBSPCuts *tempr = (ap.IsBound() ?
      op->GetCuts() :
      op->vtkKdTree::GetCuts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetCuts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCuts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkBSPCuts *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBSPCuts"))
  {
    if (ap.IsBound())
    {
      op->SetCuts(temp0);
    }
    else
    {
      op->vtkKdTree::SetCuts(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitXPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitXPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitXPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitXPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitYPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitYPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitYPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitYPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitZPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitZPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitZPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitZPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitXYPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitXYPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitXYPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitXYPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitYZPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitYZPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitYZPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitYZPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitZXPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitZXPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitZXPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitZXPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_OmitNoPartitioning(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OmitNoPartitioning");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OmitNoPartitioning();
    }
    else
    {
      op->vtkKdTree::OmitNoPartitioning();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0);
    }
    else
    {
      op->vtkKdTree::SetDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0);
    }
    else
    {
      op->vtkKdTree::AddDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_RemoveDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSet(temp0);
    }
    else
    {
      op->vtkKdTree::RemoveDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_RemoveDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSet(temp0);
    }
    else
    {
      op->vtkKdTree::RemoveDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTree_RemoveDataSet_Methods[] = {
  {"RemoveDataSet", PyvtkKdTree_RemoveDataSet_s1, METH_VARARGS,
   "@i"},
  {"RemoveDataSet", PyvtkKdTree_RemoveDataSet_s2, METH_VARARGS,
   "@V *vtkDataSet"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkKdTree_RemoveDataSet(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_RemoveDataSet_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSet");
  return nullptr;
}


static PyObject *
PyvtkKdTree_RemoveAllDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDataSets();
    }
    else
    {
      op->vtkKdTree::RemoveAllDataSets();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetNumberOfDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfDataSets() :
      op->vtkKdTree::GetNumberOfDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetDataSet_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet(temp0) :
      op->vtkKdTree::GetDataSet(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetDataSet_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetDataSet() :
      op->vtkKdTree::GetDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetDataSet(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkKdTree_GetDataSet_s1(self, args);
    case 0:
      return PyvtkKdTree_GetDataSet_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSet");
  return nullptr;
}


static PyObject *
PyvtkKdTree_GetDataSets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetCollection *tempr = (ap.IsBound() ?
      op->GetDataSets() :
      op->vtkKdTree::GetDataSets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataSetIndex(temp0) :
      op->vtkKdTree::GetDataSetIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

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
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkKdTree::GetBounds(temp0);
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
PyvtkKdTree_SetNewBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNewBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

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
      op->SetNewBounds(temp0);
    }
    else
    {
      op->vtkKdTree::SetNewBounds(temp0);
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
PyvtkKdTree_GetNumberOfRegions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRegions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRegions() :
      op->vtkKdTree::GetNumberOfRegions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetRegionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
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
      op->GetRegionBounds(temp0, temp1);
    }
    else
    {
      op->vtkKdTree::GetRegionBounds(temp0, temp1);
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
PyvtkKdTree_GetRegionDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
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
      op->GetRegionDataBounds(temp0, temp1);
    }
    else
    {
      op->vtkKdTree::GetRegionDataBounds(temp0, temp1);
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
PyvtkKdTree_PrintTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintTree();
    }
    else
    {
      op->vtkKdTree::PrintTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_PrintVerboseTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintVerboseTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PrintVerboseTree();
    }
    else
    {
      op->vtkKdTree::PrintVerboseTree();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_PrintRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrintRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PrintRegion(temp0);
    }
    else
    {
      op->vtkKdTree::PrintRegion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_CreateCellLists_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CreateCellLists(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::CreateCellLists(temp0, temp1, temp2);
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
PyvtkKdTree_CreateCellLists_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->CreateCellLists(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::CreateCellLists(temp0, temp1, temp2);
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
PyvtkKdTree_CreateCellLists_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->CreateCellLists(temp0, temp1);
    }
    else
    {
      op->vtkKdTree::CreateCellLists(temp0, temp1);
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
PyvtkKdTree_CreateCellLists_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateCellLists();
    }
    else
    {
      op->vtkKdTree::CreateCellLists();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTree_CreateCellLists_Methods[] = {
  {"CreateCellLists", PyvtkKdTree_CreateCellLists_s1, METH_VARARGS,
   "@iPi *i"},
  {"CreateCellLists", PyvtkKdTree_CreateCellLists_s2, METH_VARARGS,
   "@VPi *vtkDataSet *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkKdTree_CreateCellLists(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_CreateCellLists_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkKdTree_CreateCellLists_s3(self, args);
    case 0:
      return PyvtkKdTree_CreateCellLists_s4(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CreateCellLists");
  return nullptr;
}


static PyObject *
PyvtkKdTree_SetIncludeRegionBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeRegionBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeRegionBoundaryCells(temp0);
    }
    else
    {
      op->vtkKdTree::SetIncludeRegionBoundaryCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetIncludeRegionBoundaryCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeRegionBoundaryCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeRegionBoundaryCells() :
      op->vtkKdTree::GetIncludeRegionBoundaryCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_IncludeRegionBoundaryCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeRegionBoundaryCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeRegionBoundaryCellsOn();
    }
    else
    {
      op->vtkKdTree::IncludeRegionBoundaryCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_IncludeRegionBoundaryCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeRegionBoundaryCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeRegionBoundaryCellsOff();
    }
    else
    {
      op->vtkKdTree::IncludeRegionBoundaryCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_DeleteCellLists(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteCellLists();
    }
    else
    {
      op->vtkKdTree::DeleteCellLists();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetCellList(temp0) :
      op->vtkKdTree::GetCellList(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetBoundaryCellList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryCellList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetBoundaryCellList(temp0) :
      op->vtkKdTree::GetBoundaryCellList(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetCellLists_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = nullptr;
  int temp1;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetCellLists_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = nullptr;
  vtkDataSet *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetCellLists_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLists");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellLists(temp0, temp1, temp2) :
      op->vtkKdTree::GetCellLists(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTree_GetCellLists_Methods[] = {
  {"GetCellLists", PyvtkKdTree_GetCellLists_s1, METH_VARARGS,
   "@ViVV *vtkIntArray *vtkIdList *vtkIdList"},
  {"GetCellLists", PyvtkKdTree_GetCellLists_s2, METH_VARARGS,
   "@VVVV *vtkIntArray *vtkDataSet *vtkIdList *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkKdTree_GetCellLists(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_GetCellLists_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkKdTree_GetCellLists_s3(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellLists");
  return nullptr;
}


static PyObject *
PyvtkKdTree_GetRegionContainingCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkDataSet *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0, temp1) :
      op->vtkKdTree::GetRegionContainingCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetRegionContainingCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0, temp1) :
      op->vtkKdTree::GetRegionContainingCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GetRegionContainingCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingCell(temp0) :
      op->vtkKdTree::GetRegionContainingCell(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTree_GetRegionContainingCell_Methods[] = {
  {"GetRegionContainingCell", PyvtkKdTree_GetRegionContainingCell_s1, METH_VARARGS,
   "@Vk *vtkDataSet"},
  {"GetRegionContainingCell", PyvtkKdTree_GetRegionContainingCell_s2, METH_VARARGS,
   "@ik"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkKdTree_GetRegionContainingCell(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_GetRegionContainingCell_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkKdTree_GetRegionContainingCell_s3(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRegionContainingCell");
  return nullptr;
}


static PyObject *
PyvtkKdTree_AllGetRegionContainingCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGetRegionContainingCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->AllGetRegionContainingCell() :
      op->vtkKdTree::AllGetRegionContainingCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetRegionContainingPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRegionContainingPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetRegionContainingPoint(temp0, temp1, temp2) :
      op->vtkKdTree::GetRegionContainingPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkKdTree::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_ForceBuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuildLocator();
    }
    else
    {
      op->vtkKdTree::ForceBuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderAllRegionsInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllRegionsInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllRegionsInDirection(temp0, temp1) :
      op->vtkKdTree::ViewOrderAllRegionsInDirection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderRegionsInDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderRegionsInDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  vtkIntArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderRegionsInDirection(temp0, temp1, temp2) :
      op->vtkKdTree::ViewOrderRegionsInDirection(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderAllRegionsFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderAllRegionsFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIntArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderAllRegionsFromPosition(temp0, temp1) :
      op->vtkKdTree::ViewOrderAllRegionsFromPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_ViewOrderRegionsFromPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewOrderRegionsFromPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkIntArray *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  vtkIntArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIntArray") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
  {
    int tempr = (ap.IsBound() ?
      op->ViewOrderRegionsFromPosition(temp0, temp1, temp2) :
      op->vtkKdTree::ViewOrderRegionsFromPosition(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_BuildLocatorFromPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorFromPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkPointSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPointSet"))
  {
    if (ap.IsBound())
    {
      op->BuildLocatorFromPoints(temp0);
    }
    else
    {
      op->vtkKdTree::BuildLocatorFromPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_BuildLocatorFromPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocatorFromPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->BuildLocatorFromPoints(temp0);
    }
    else
    {
      op->vtkKdTree::BuildLocatorFromPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTree_BuildLocatorFromPoints_Methods[] = {
  {"BuildLocatorFromPoints", PyvtkKdTree_BuildLocatorFromPoints_s1, METH_VARARGS,
   "@V *vtkPointSet"},
  {"BuildLocatorFromPoints", PyvtkKdTree_BuildLocatorFromPoints_s2, METH_VARARGS,
   "@V *vtkPoints"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkKdTree_BuildLocatorFromPoints(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkKdTree_BuildLocatorFromPoints_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BuildLocatorFromPoints");
  return nullptr;
}


static PyObject *
PyvtkKdTree_BuildMapForDuplicatePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildMapForDuplicatePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->BuildMapForDuplicatePoints(temp0) :
      op->vtkKdTree::BuildMapForDuplicatePoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0) :
      op->vtkKdTree::FindPoint(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0, temp1, temp2) :
      op->vtkKdTree::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkKdTree_FindPoint_s1(self, args);
    case 3:
      return PyvtkKdTree_FindPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return nullptr;
}


static PyObject *
PyvtkKdTree_FindClosestPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1) :
      op->vtkKdTree::FindClosestPoint(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
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
    long long tempr = (ap.IsBound() ?
      op->FindClosestPoint(temp0, temp1, temp2, temp3) :
      op->vtkKdTree::FindClosestPoint(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkKdTree_FindClosestPoint_s1(self, args);
    case 4:
      return PyvtkKdTree_FindClosestPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPoint");
  return nullptr;
}


static PyObject *
PyvtkKdTree_FindClosestPointWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->FindClosestPointWithinRadius(temp0, temp1, temp2) :
      op->vtkKdTree::FindClosestPointWithinRadius(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_FindClosestPointInRegion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    long long tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2) :
      op->vtkKdTree::FindClosestPointInRegion(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPointInRegion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestPointInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    long long tempr = (ap.IsBound() ?
      op->FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4) :
      op->vtkKdTree::FindClosestPointInRegion(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_FindClosestPointInRegion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkKdTree_FindClosestPointInRegion_s1(self, args);
    case 5:
      return PyvtkKdTree_FindClosestPointInRegion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindClosestPointInRegion");
  return nullptr;
}


static PyObject *
PyvtkKdTree_FindPointsWithinRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsWithinRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  double temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindPointsWithinRadius(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::FindPointsWithinRadius(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_FindClosestNPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestNPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindClosestNPoints(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::FindClosestNPoints(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetPointsInRegion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointsInRegion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetPointsInRegion(temp0) :
      op->vtkKdTree::GetPointsInRegion(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkKdTree::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GenerateRepresentation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentation(temp0, temp1);
    }
    else
    {
      op->vtkKdTree::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdTree_GenerateRepresentation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  vtkPolyData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateRepresentation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::GenerateRepresentation(temp0, temp1, temp2);
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
PyvtkKdTree_GenerateRepresentation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkKdTree_GenerateRepresentation_s1(self, args);
    case 3:
      return PyvtkKdTree_GenerateRepresentation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateRepresentation");
  return nullptr;
}


static PyObject *
PyvtkKdTree_GenerateRepresentationUsingDataBoundsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationUsingDataBoundsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentationUsingDataBoundsOn();
    }
    else
    {
      op->vtkKdTree::GenerateRepresentationUsingDataBoundsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GenerateRepresentationUsingDataBoundsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationUsingDataBoundsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentationUsingDataBoundsOff();
    }
    else
    {
      op->vtkKdTree::GenerateRepresentationUsingDataBoundsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_SetGenerateRepresentationUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateRepresentationUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateRepresentationUsingDataBounds(temp0);
    }
    else
    {
      op->vtkKdTree::SetGenerateRepresentationUsingDataBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_GetGenerateRepresentationUsingDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateRepresentationUsingDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateRepresentationUsingDataBounds() :
      op->vtkKdTree::GetGenerateRepresentationUsingDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_NewGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->NewGeometry() :
      op->vtkKdTree::NewGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_InvalidateGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateGeometry();
    }
    else
    {
      op->vtkKdTree::InvalidateGeometry();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_CopyTree(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyTree");

  vtkKdNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdNode"))
  {
    vtkKdNode *tempr = vtkKdTree::CopyTree(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTree_FindPointsInArea(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPointsInArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTree *op = static_cast<vtkKdTree *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdTypeArray *temp1 = nullptr;
  bool temp2 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->FindPointsInArea(temp0, temp1, temp2);
    }
    else
    {
      op->vtkKdTree::FindPointsInArea(temp0, temp1, temp2);
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

static PyMethodDef PyvtkKdTree_Methods[] = {
  {"IsTypeOf", PyvtkKdTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKdTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKdTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKdTree\nC++: static vtkKdTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKdTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKdTree\nC++: vtkKdTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKdTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKdTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"TimingOn", PyvtkKdTree_TimingOn, METH_VARARGS,
   "TimingOn(self) -> None\nC++: virtual void TimingOn()\n\nTurn on timing of the k-d tree build\n"},
  {"TimingOff", PyvtkKdTree_TimingOff, METH_VARARGS,
   "TimingOff(self) -> None\nC++: virtual void TimingOff()\n\n"},
  {"SetTiming", PyvtkKdTree_SetTiming, METH_VARARGS,
   "SetTiming(self, _arg:int) -> None\nC++: virtual void SetTiming(vtkTypeBool _arg)\n\n"},
  {"GetTiming", PyvtkKdTree_GetTiming, METH_VARARGS,
   "GetTiming(self) -> int\nC++: virtual vtkTypeBool GetTiming()\n\n"},
  {"SetMinCells", PyvtkKdTree_SetMinCells, METH_VARARGS,
   "SetMinCells(self, _arg:int) -> None\nC++: virtual void SetMinCells(int _arg)\n\nMinimum number of cells per spatial region.  Default is 100.\n"},
  {"GetMinCells", PyvtkKdTree_GetMinCells, METH_VARARGS,
   "GetMinCells(self) -> int\nC++: virtual int GetMinCells()\n\n"},
  {"GetNumberOfRegionsOrLess", PyvtkKdTree_GetNumberOfRegionsOrLess, METH_VARARGS,
   "GetNumberOfRegionsOrLess(self) -> int\nC++: virtual int GetNumberOfRegionsOrLess()\n\nSet/Get the number of spatial regions you want to get close to\nwithout going over.  (The number of spatial regions is normally a\npower of two.)  Call this before BuildLocator().  Default is\nunset (0).\n"},
  {"SetNumberOfRegionsOrLess", PyvtkKdTree_SetNumberOfRegionsOrLess, METH_VARARGS,
   "SetNumberOfRegionsOrLess(self, _arg:int) -> None\nC++: virtual void SetNumberOfRegionsOrLess(int _arg)\n\n"},
  {"GetNumberOfRegionsOrMore", PyvtkKdTree_GetNumberOfRegionsOrMore, METH_VARARGS,
   "GetNumberOfRegionsOrMore(self) -> int\nC++: virtual int GetNumberOfRegionsOrMore()\n\nSet/Get the number of spatial regions you want to get close to\nwhile having at least this many regions.  (The number of spatial\nregions is normally a power of two.)   Default is unset (0).\n"},
  {"SetNumberOfRegionsOrMore", PyvtkKdTree_SetNumberOfRegionsOrMore, METH_VARARGS,
   "SetNumberOfRegionsOrMore(self, _arg:int) -> None\nC++: virtual void SetNumberOfRegionsOrMore(int _arg)\n\n"},
  {"GetFudgeFactor", PyvtkKdTree_GetFudgeFactor, METH_VARARGS,
   "GetFudgeFactor(self) -> float\nC++: virtual double GetFudgeFactor()\n\nSome algorithms on k-d trees require a value that is a very small\ndistance relative to the diameter of the entire space divided by\nthe k-d tree.  This factor is the maximum axis-aligned width of\nthe space multiplied by 10e-6.\n"},
  {"SetFudgeFactor", PyvtkKdTree_SetFudgeFactor, METH_VARARGS,
   "SetFudgeFactor(self, _arg:float) -> None\nC++: virtual void SetFudgeFactor(double _arg)\n\n"},
  {"GetCuts", PyvtkKdTree_GetCuts, METH_VARARGS,
   "GetCuts(self) -> vtkBSPCuts\nC++: virtual vtkBSPCuts *GetCuts()\n\nGet a vtkBSPCuts object, a general object representing an axis-\naligned spatial partitioning.  Used by vtkBSPIntersections.\n"},
  {"SetCuts", PyvtkKdTree_SetCuts, METH_VARARGS,
   "SetCuts(self, cuts:vtkBSPCuts) -> None\nC++: void SetCuts(vtkBSPCuts *cuts)\n\nNormally the k-d tree is computed from the dataset(s) provided in\nSetDataSet.  Alternatively, you can provide the cuts that will be\napplied by calling SetCuts.\n"},
  {"OmitXPartitioning", PyvtkKdTree_OmitXPartitioning, METH_VARARGS,
   "OmitXPartitioning(self) -> None\nC++: void OmitXPartitioning()\n\nOmit partitions along the X axis, yielding shafts in the X\ndirection\n"},
  {"OmitYPartitioning", PyvtkKdTree_OmitYPartitioning, METH_VARARGS,
   "OmitYPartitioning(self) -> None\nC++: void OmitYPartitioning()\n\nOmit partitions along the Y axis, yielding shafts in the Y\ndirection\n"},
  {"OmitZPartitioning", PyvtkKdTree_OmitZPartitioning, METH_VARARGS,
   "OmitZPartitioning(self) -> None\nC++: void OmitZPartitioning()\n\nOmit partitions along the Z axis, yielding shafts in the Z\ndirection\n"},
  {"OmitXYPartitioning", PyvtkKdTree_OmitXYPartitioning, METH_VARARGS,
   "OmitXYPartitioning(self) -> None\nC++: void OmitXYPartitioning()\n\nOmit partitions along the X and Y axes, yielding slabs along Z\n"},
  {"OmitYZPartitioning", PyvtkKdTree_OmitYZPartitioning, METH_VARARGS,
   "OmitYZPartitioning(self) -> None\nC++: void OmitYZPartitioning()\n\nOmit partitions along the Y and Z axes, yielding slabs along X\n"},
  {"OmitZXPartitioning", PyvtkKdTree_OmitZXPartitioning, METH_VARARGS,
   "OmitZXPartitioning(self) -> None\nC++: void OmitZXPartitioning()\n\nOmit partitions along the Z and X axes, yielding slabs along Y\n"},
  {"OmitNoPartitioning", PyvtkKdTree_OmitNoPartitioning, METH_VARARGS,
   "OmitNoPartitioning(self) -> None\nC++: void OmitNoPartitioning()\n\nPartition along all three axes - this is the default\n"},
  {"SetDataSet", PyvtkKdTree_SetDataSet, METH_VARARGS,
   "SetDataSet(self, set:vtkDataSet) -> None\nC++: void SetDataSet(vtkDataSet *set) override;\n\nThis class can compute a spatial decomposition based on the cells\nin a list of one or more input data sets. SetDataSet sets the\nfirst data set in the list to the named set. SetNthDataSet sets\nthe data set at index N to the data set named. RemoveData set\ntakes either the data set itself or an index and removes that\ndata set from the list of data sets. AddDataSet adds a data set\nto the list of data sets.\n\nClear out all data sets and replace with single data set.  For\nbackward compatibility with superclass.\n"},
  {"AddDataSet", PyvtkKdTree_AddDataSet, METH_VARARGS,
   "AddDataSet(self, set:vtkDataSet) -> None\nC++: virtual void AddDataSet(vtkDataSet *set)\n\nThis class can compute a spatial decomposition based on the cells\nin a list of one or more input data sets.  Add them one at a time\nwith this method.\n"},
  {"RemoveDataSet", PyvtkKdTree_RemoveDataSet, METH_VARARGS,
   "RemoveDataSet(self, index:int) -> None\nC++: virtual void RemoveDataSet(int index)\nRemoveDataSet(self, set:vtkDataSet) -> None\nC++: virtual void RemoveDataSet(vtkDataSet *set)\n\nRemove the given data set.\n"},
  {"RemoveAllDataSets", PyvtkKdTree_RemoveAllDataSets, METH_VARARGS,
   "RemoveAllDataSets(self) -> None\nC++: virtual void RemoveAllDataSets()\n\n"},
  {"GetNumberOfDataSets", PyvtkKdTree_GetNumberOfDataSets, METH_VARARGS,
   "GetNumberOfDataSets(self) -> int\nC++: int GetNumberOfDataSets()\n\nGet the number of data sets included in spatial partitioning\n"},
  {"GetDataSet", PyvtkKdTree_GetDataSet, METH_VARARGS,
   "GetDataSet(self, n:int) -> vtkDataSet\nC++: vtkDataSet *GetDataSet(int n)\nGetDataSet(self) -> vtkDataSet\nC++: vtkDataSet *GetDataSet() override;\n\nGet the nth defined data set in the spatial partitioning. (If you\nused SetNthDataSet to define 0,1 and 3 and ask for data set 2,\nyou get 3.)\n\nReturn the n'th data set.\n"},
  {"GetDataSets", PyvtkKdTree_GetDataSets, METH_VARARGS,
   "GetDataSets(self) -> vtkDataSetCollection\nC++: virtual vtkDataSetCollection *GetDataSets()\n\nReturn a collection of all the data sets.\n"},
  {"GetDataSetIndex", PyvtkKdTree_GetDataSetIndex, METH_VARARGS,
   "GetDataSetIndex(self, set:vtkDataSet) -> int\nC++: int GetDataSetIndex(vtkDataSet *set)\n\nReturn the index of the given data set.  Returns -1 if that data\nset does not exist.\n"},
  {"GetBounds", PyvtkKdTree_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, ...]) -> None\nC++: void GetBounds(double *bounds)\n\nGet the spatial bounds of the entire k-d tree space. Sets bounds\narray to xmin, xmax, ymin, ymax, zmin, zmax.\n"},
  {"SetNewBounds", PyvtkKdTree_SetNewBounds, METH_VARARGS,
   "SetNewBounds(self, bounds:[float, ...]) -> None\nC++: void SetNewBounds(double *bounds)\n\nThere are certain applications where you want the bounds of the\nk-d tree space to be at least as large as a specified box.  If\nthe k-d tree has been built, you can expand it's bounds with this\nmethod.  If the bounds supplied are smaller than those computed,\nthey will be ignored.\n"},
  {"GetNumberOfRegions", PyvtkKdTree_GetNumberOfRegions, METH_VARARGS,
   "GetNumberOfRegions(self) -> int\nC++: virtual int GetNumberOfRegions()\n\nThe number of leaf nodes of the tree, the spatial regions\n"},
  {"GetRegionBounds", PyvtkKdTree_GetRegionBounds, METH_VARARGS,
   "GetRegionBounds(self, regionID:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: void GetRegionBounds(int regionID, double bounds[6])\n\nGet the spatial bounds of k-d tree region\n"},
  {"GetRegionDataBounds", PyvtkKdTree_GetRegionDataBounds, METH_VARARGS,
   "GetRegionDataBounds(self, regionID:int, bounds:[float, float,\n    float, float, float, float]) -> None\nC++: void GetRegionDataBounds(int regionID, double bounds[6])\n\nGet the bounds of the data within the k-d tree region\n"},
  {"PrintTree", PyvtkKdTree_PrintTree, METH_VARARGS,
   "PrintTree(self) -> None\nC++: void PrintTree()\n\nPrint out nodes of kd tree\n"},
  {"PrintVerboseTree", PyvtkKdTree_PrintVerboseTree, METH_VARARGS,
   "PrintVerboseTree(self) -> None\nC++: void PrintVerboseTree()\n\n"},
  {"PrintRegion", PyvtkKdTree_PrintRegion, METH_VARARGS,
   "PrintRegion(self, id:int) -> None\nC++: void PrintRegion(int id)\n\nPrint out leaf node data for given id\n"},
  {"CreateCellLists", PyvtkKdTree_CreateCellLists, METH_VARARGS,
   "CreateCellLists(self, dataSetIndex:int, regionReqList:[int, ...],\n    reqListSize:int) -> None\nC++: void CreateCellLists(int dataSetIndex, int *regionReqList,\n    int reqListSize)\nCreateCellLists(self, set:vtkDataSet, regionReqList:[int, ...],\n    reqListSize:int) -> None\nC++: void CreateCellLists(vtkDataSet *set, int *regionReqList,\n    int reqListSize)\nCreateCellLists(self, regionReqList:[int, ...], listSize:int)\n    -> None\nC++: void CreateCellLists(int *regionReqList, int listSize)\nCreateCellLists(self) -> None\nC++: void CreateCellLists()\n\nCreate a list for each of the requested regions, listing the IDs\nof all cells whose centroid falls in the region. These lists are\nobtained with GetCellList(). If no DataSet is specified, the cell\nlist is created for DataSet 0.  If no list of requested regions\nis provided, the cell lists for all regions are created.\n\n* When CreateCellLists is called again, the lists created\n* on the previous call are deleted.\n"},
  {"SetIncludeRegionBoundaryCells", PyvtkKdTree_SetIncludeRegionBoundaryCells, METH_VARARGS,
   "SetIncludeRegionBoundaryCells(self, _arg:int) -> None\nC++: virtual void SetIncludeRegionBoundaryCells(vtkTypeBool _arg)\n\nIf IncludeRegionBoundaryCells is ON, CreateCellLists() will also\ncreate a list of cells which intersect a given region, but are\nnot assigned to the region.  These lists are obtained with\nGetBoundaryCellList().  Default is OFF.\n"},
  {"GetIncludeRegionBoundaryCells", PyvtkKdTree_GetIncludeRegionBoundaryCells, METH_VARARGS,
   "GetIncludeRegionBoundaryCells(self) -> int\nC++: virtual vtkTypeBool GetIncludeRegionBoundaryCells()\n\n"},
  {"IncludeRegionBoundaryCellsOn", PyvtkKdTree_IncludeRegionBoundaryCellsOn, METH_VARARGS,
   "IncludeRegionBoundaryCellsOn(self) -> None\nC++: virtual void IncludeRegionBoundaryCellsOn()\n\n"},
  {"IncludeRegionBoundaryCellsOff", PyvtkKdTree_IncludeRegionBoundaryCellsOff, METH_VARARGS,
   "IncludeRegionBoundaryCellsOff(self) -> None\nC++: virtual void IncludeRegionBoundaryCellsOff()\n\n"},
  {"DeleteCellLists", PyvtkKdTree_DeleteCellLists, METH_VARARGS,
   "DeleteCellLists(self) -> None\nC++: void DeleteCellLists()\n\nFree the memory used by the cell lists.\n"},
  {"GetCellList", PyvtkKdTree_GetCellList, METH_VARARGS,
   "GetCellList(self, regionID:int) -> vtkIdList\nC++: vtkIdList *GetCellList(int regionID)\n\nGet the cell list for a region.  This returns a pointer to\nvtkKdTree's memory, so don't free it.\n"},
  {"GetBoundaryCellList", PyvtkKdTree_GetBoundaryCellList, METH_VARARGS,
   "GetBoundaryCellList(self, regionID:int) -> vtkIdList\nC++: vtkIdList *GetBoundaryCellList(int regionID)\n\nThe cell list obtained with GetCellList is the list of all cells\nsuch that their centroid is contained in the spatial region.  It\nmay also be desirable to get a list of all cells intersecting a\nspatial region, but with centroid in some other region.  This is\nthat list.  This list is computed in CreateCellLists() if and\nonly if IncludeRegionBoundaryCells is ON.  This returns a pointer\nto KdTree's memory, so don't free it.\n"},
  {"GetCellLists", PyvtkKdTree_GetCellLists, METH_VARARGS,
   "GetCellLists(self, regions:vtkIntArray, set:int,\n    inRegionCells:vtkIdList, onBoundaryCells:vtkIdList) -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions, int set,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nGetCellLists(self, regions:vtkIntArray, set:vtkDataSet,\n    inRegionCells:vtkIdList, onBoundaryCells:vtkIdList) -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions, vtkDataSet *set,\n     vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\nGetCellLists(self, regions:vtkIntArray, inRegionCells:vtkIdList,\n    onBoundaryCells:vtkIdList) -> int\nC++: vtkIdType GetCellLists(vtkIntArray *regions,\n    vtkIdList *inRegionCells, vtkIdList *onBoundaryCells)\n\n* For a list of regions, get two cell lists.  The first lists\n* the IDs all cells whose centroids lie in one of the regions.\n* The second lists the IDs of all cells that intersect the\n  regions,\n* but whose centroid lies in a region not on the list.\n\n* The total number of cell IDs written to both lists is returned.\n* Either list pointer passed in can be nullptr, and it will be\n  ignored.\n* If there are multiple data sets, you must specify which data\n  set\n* you wish cell IDs for.\n\n* The caller should delete these two lists when done.  This\n  method\n* uses the cell lists created in CreateCellLists().\n* If the cell list for any of the requested regions does not\n* exist, then this method will call CreateCellLists() to create\n* cell lists for *every* region of the k-d tree.  You must\n  remember\n* to DeleteCellLists() when done with all calls to this method,\n  as\n* cell lists can require a great deal of memory.\n"},
  {"GetRegionContainingCell", PyvtkKdTree_GetRegionContainingCell, METH_VARARGS,
   "GetRegionContainingCell(self, set:vtkDataSet, cellID:int) -> int\nC++: int GetRegionContainingCell(vtkDataSet *set,\n    vtkIdType cellID)\nGetRegionContainingCell(self, set:int, cellID:int) -> int\nC++: int GetRegionContainingCell(int set, vtkIdType cellID)\nGetRegionContainingCell(self, cellID:int) -> int\nC++: int GetRegionContainingCell(vtkIdType cellID)\n\nGet the id of the region containing the cell centroid.  If no\nDataSet is specified, assume DataSet 0.  If you need the region\nID for every cell, use AllGetRegionContainingCell instead.  It is\nmore efficient.\n"},
  {"AllGetRegionContainingCell", PyvtkKdTree_AllGetRegionContainingCell, METH_VARARGS,
   "AllGetRegionContainingCell(self) -> Pointer\nC++: int *AllGetRegionContainingCell()\n\nGet a list (in order by data set by cell id) of the region IDs of\nthe region containing the centroid for each cell. This is faster\nthan calling GetRegionContainingCell for each cell in the\nDataSet. vtkKdTree uses this list, so don't delete it.\n"},
  {"GetRegionContainingPoint", PyvtkKdTree_GetRegionContainingPoint, METH_VARARGS,
   "GetRegionContainingPoint(self, x:float, y:float, z:float) -> int\nC++: int GetRegionContainingPoint(double x, double y, double z)\n\nGet the id of the region containing the specified location.\n"},
  {"BuildLocator", PyvtkKdTree_BuildLocator, METH_VARARGS,
   "BuildLocator(self) -> None\nC++: void BuildLocator() override;\n\nCreate the k-d tree decomposition of the cells of the data set or\ndata sets.  Cells are assigned to k-d tree spatial regions based\non the location of their centroids.\n"},
  {"ForceBuildLocator", PyvtkKdTree_ForceBuildLocator, METH_VARARGS,
   "ForceBuildLocator(self) -> None\nC++: void ForceBuildLocator() override;\n\nBuild the locator from the input dataset (even if\nUseExistingSearchStructure is on).\n"},
  {"ViewOrderAllRegionsInDirection", PyvtkKdTree_ViewOrderAllRegionsInDirection, METH_VARARGS,
   "ViewOrderAllRegionsInDirection(self, directionOfProjection:(float,\n     float, float), orderedList:vtkIntArray) -> int\nC++: int ViewOrderAllRegionsInDirection(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a direction of projection (typically obtained with\nvtkCamera::GetDirectionOfProjection()), this method, creates a\nlist of the k-d tree region IDs in order from front to back with\nrespect to that direction.  The number of ordered regions is\nreturned.  Use this method to view order regions for cameras that\nuse parallel projection.\n"},
  {"ViewOrderRegionsInDirection", PyvtkKdTree_ViewOrderRegionsInDirection, METH_VARARGS,
   "ViewOrderRegionsInDirection(self, regionIds:vtkIntArray,\n    directionOfProjection:(float, float, float),\n    orderedList:vtkIntArray) -> int\nC++: int ViewOrderRegionsInDirection(vtkIntArray *regionIds,\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a direction of projection and a list of k-d tree region\nIDs, this method, creates a list of the k-d tree region IDs in\norder from front to back with respect to that direction.  The\nnumber of ordered regions is returned.  Use this method to view\norder regions for cameras that use parallel projection.\n"},
  {"ViewOrderAllRegionsFromPosition", PyvtkKdTree_ViewOrderAllRegionsFromPosition, METH_VARARGS,
   "ViewOrderAllRegionsFromPosition(self, directionOfProjection:(\n    float, float, float), orderedList:vtkIntArray) -> int\nC++: int ViewOrderAllRegionsFromPosition(\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a camera position (typically obtained with\nvtkCamera::GetPosition()), this method, creates a list of the k-d\ntree region IDs in order from front to back with respect to that\ndirection.  The number of ordered regions is returned.  Use this\nmethod to view order regions for cameras that use perspective\nprojection.\n"},
  {"ViewOrderRegionsFromPosition", PyvtkKdTree_ViewOrderRegionsFromPosition, METH_VARARGS,
   "ViewOrderRegionsFromPosition(self, regionIds:vtkIntArray,\n    directionOfProjection:(float, float, float),\n    orderedList:vtkIntArray) -> int\nC++: int ViewOrderRegionsFromPosition(vtkIntArray *regionIds,\n    const double directionOfProjection[3],\n    vtkIntArray *orderedList)\n\nGiven a camera position and a list of k-d tree region IDs, this\nmethod, creates a list of the k-d tree region IDs in order from\nfront to back with respect to that direction.  The number of\nordered regions is returned.  Use this method to view order\nregions for cameras that use perspective projection.\n"},
  {"BuildLocatorFromPoints", PyvtkKdTree_BuildLocatorFromPoints, METH_VARARGS,
   "BuildLocatorFromPoints(self, pointset:vtkPointSet) -> None\nC++: void BuildLocatorFromPoints(vtkPointSet *pointset)\nBuildLocatorFromPoints(self, ptArray:vtkPoints) -> None\nC++: void BuildLocatorFromPoints(vtkPoints *ptArray)\n\nThis is a special purpose locator that builds a k-d tree to find\nduplicate and near-by points.  It builds the tree from one or\nmore vtkPoints objects instead of from the cells of a vtkDataSet.\n This build would normally be followed by\nBuildMapForDuplicatePoints, FindPoint, or FindClosestPoint. Since\nthis will build a normal k-d tree, all the region intersection\nqueries will still work, as will most other calls except those\nthat have \"Cell\" in the name.\n\n* This method works most efficiently when the point arrays are\n* float arrays.\n"},
  {"BuildMapForDuplicatePoints", PyvtkKdTree_BuildMapForDuplicatePoints, METH_VARARGS,
   "BuildMapForDuplicatePoints(self, tolerance:float)\n    -> vtkIdTypeArray\nC++: vtkIdTypeArray *BuildMapForDuplicatePoints(float tolerance)\n\nThis call returns a mapping from the original point IDs supplied\nto BuildLocatorFromPoints to a subset of those IDs that is unique\nwithin the specified tolerance. If points 2, 5, and 12 are the\nsame, then IdMap[2] = IdMap[5] = IdMap[12] = 2 (or 5 or 12).\n\n* \"original point IDs\" - For point IDs we start at 0 for the\n  first\n* point in the first vtkPoints object, and increase by 1 for\n  subsequent\n* points and subsequent vtkPoints objects.\n\n* You must have called BuildLocatorFromPoints() before calling\n  this.\n* You are responsible for deleting the returned array.\n"},
  {"FindPoint", PyvtkKdTree_FindPoint, METH_VARARGS,
   "FindPoint(self, x:[float, ...]) -> int\nC++: vtkIdType FindPoint(double *x)\nFindPoint(self, x:float, y:float, z:float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\n\nFind the Id of the point that was previously supplied to\nBuildLocatorFromPoints().  Returns -1 if the point was not in the\noriginal array.\n"},
  {"FindClosestPoint", PyvtkKdTree_FindClosestPoint, METH_VARARGS,
   "FindClosestPoint(self, x:[float, ...], dist2:float) -> int\nC++: vtkIdType FindClosestPoint(double *x, double &dist2)\nFindClosestPoint(self, x:float, y:float, z:float, dist2:float)\n    -> int\nC++: vtkIdType FindClosestPoint(double x, double y, double z,\n    double &dist2)\n\nFind the Id of the point that was previously supplied to\nBuildLocatorFromPoints() which is closest to the given point. Set\nthe square of the distance between the two points.\n"},
  {"FindClosestPointWithinRadius", PyvtkKdTree_FindClosestPointWithinRadius, METH_VARARGS,
   "FindClosestPointWithinRadius(self, radius:float, x:(float, float,\n    float), dist2:float) -> int\nC++: vtkIdType FindClosestPointWithinRadius(double radius,\n    const double x[3], double &dist2)\n\nGiven a position x and a radius r, return the id of the point\nclosest to the point in that radius. dist2 returns the squared\ndistance to the point.\n"},
  {"FindClosestPointInRegion", PyvtkKdTree_FindClosestPointInRegion, METH_VARARGS,
   "FindClosestPointInRegion(self, regionId:int, x:[float, ...],\n    dist2:float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double *x,\n    double &dist2)\nFindClosestPointInRegion(self, regionId:int, x:float, y:float,\n    z:float, dist2:float) -> int\nC++: vtkIdType FindClosestPointInRegion(int regionId, double x,\n    double y, double z, double &dist2)\n\nFind the Id of the point in the given region which is closest to\nthe given point.  Return the ID of the point, and set the square\nof the distance of between the points.\n"},
  {"FindPointsWithinRadius", PyvtkKdTree_FindPointsWithinRadius, METH_VARARGS,
   "FindPointsWithinRadius(self, R:float, x:(float, float, float),\n    result:vtkIdList) -> None\nC++: void FindPointsWithinRadius(double R, const double x[3],\n    vtkIdList *result)\n\nFind all points within a specified radius R of position x. The\nresult is not sorted in any specific manner. These methods are\nthread safe if BuildLocator() is directly or indirectly called\nfrom a single thread first.\n"},
  {"FindClosestNPoints", PyvtkKdTree_FindClosestNPoints, METH_VARARGS,
   "FindClosestNPoints(self, N:int, x:(float, float, float),\n    result:vtkIdList) -> None\nC++: void FindClosestNPoints(int N, const double x[3],\n    vtkIdList *result)\n\nFind the closest N points to a position. This returns the closest\nN points to a position. A faster method could be created that\nreturned N close points to a position, but necessarily the exact\nN closest. The returned points are sorted from closest to\nfarthest. These methods are thread safe if BuildLocator() is\ndirectly or indirectly called from a single thread first.\n"},
  {"GetPointsInRegion", PyvtkKdTree_GetPointsInRegion, METH_VARARGS,
   "GetPointsInRegion(self, regionId:int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetPointsInRegion(int regionId)\n\nGet a list of the original IDs of all points in a region.  You\nmust have called BuildLocatorFromPoints before calling this.\n"},
  {"FreeSearchStructure", PyvtkKdTree_FreeSearchStructure, METH_VARARGS,
   "FreeSearchStructure(self) -> None\nC++: void FreeSearchStructure() override;\n\nDelete the k-d tree data structure. Also delete any cell lists\nthat were computed with CreateCellLists().\n"},
  {"GenerateRepresentation", PyvtkKdTree_GenerateRepresentation, METH_VARARGS,
   "GenerateRepresentation(self, level:int, pd:vtkPolyData) -> None\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\nGenerateRepresentation(self, regionList:[int, ...], len:int,\n    pd:vtkPolyData) -> None\nC++: void GenerateRepresentation(int *regionList, int len,\n    vtkPolyData *pd)\n\nCreate a polydata representation of the boundaries of the k-d\ntree regions.  If level equals GetLevel(), the leaf nodes are\nrepresented.\n"},
  {"GenerateRepresentationUsingDataBoundsOn", PyvtkKdTree_GenerateRepresentationUsingDataBoundsOn, METH_VARARGS,
   "GenerateRepresentationUsingDataBoundsOn(self) -> None\nC++: virtual void GenerateRepresentationUsingDataBoundsOn()\n\nThe polydata representation of the k-d tree shows the boundaries\nof the k-d tree decomposition spatial regions.  The data inside\nthe regions may not occupy the entire space.  To draw just the\nbounds of the data in the regions, set this variable ON.\n"},
  {"GenerateRepresentationUsingDataBoundsOff", PyvtkKdTree_GenerateRepresentationUsingDataBoundsOff, METH_VARARGS,
   "GenerateRepresentationUsingDataBoundsOff(self) -> None\nC++: virtual void GenerateRepresentationUsingDataBoundsOff()\n\n"},
  {"SetGenerateRepresentationUsingDataBounds", PyvtkKdTree_SetGenerateRepresentationUsingDataBounds, METH_VARARGS,
   "SetGenerateRepresentationUsingDataBounds(self, _arg:int) -> None\nC++: virtual void SetGenerateRepresentationUsingDataBounds(\n    vtkTypeBool _arg)\n\n"},
  {"GetGenerateRepresentationUsingDataBounds", PyvtkKdTree_GetGenerateRepresentationUsingDataBounds, METH_VARARGS,
   "GetGenerateRepresentationUsingDataBounds(self) -> int\nC++: virtual vtkTypeBool GetGenerateRepresentationUsingDataBounds(\n    )\n\n"},
  {"NewGeometry", PyvtkKdTree_NewGeometry, METH_VARARGS,
   "NewGeometry(self) -> int\nC++: virtual int NewGeometry()\n\nReturn 1 if the geometry of the input data sets has changed since\nthe last time the k-d tree was built.\n"},
  {"InvalidateGeometry", PyvtkKdTree_InvalidateGeometry, METH_VARARGS,
   "InvalidateGeometry(self) -> None\nC++: virtual void InvalidateGeometry()\n\nForget about the last geometry used.  The next call to\nNewGeometry will return 1.  A new k-d tree will be built the next\ntime BuildLocator is called.\n"},
  {"CopyTree", PyvtkKdTree_CopyTree, METH_VARARGS,
   "CopyTree(kd:vtkKdNode) -> vtkKdNode\nC++: static vtkKdNode *CopyTree(vtkKdNode *kd)\n\nCreate a copy of the binary tree representation of the k-d tree\nspatial partitioning provided.\n"},
  {"FindPointsInArea", PyvtkKdTree_FindPointsInArea, METH_VARARGS,
   "FindPointsInArea(self, area:[float, ...], ids:vtkIdTypeArray,\n    clearArray:bool=True) -> None\nC++: void FindPointsInArea(double *area, vtkIdTypeArray *ids,\n    bool clearArray=true)\n\nFill ids with points found in area.  The area is a 6-tuple\ncontaining (xmin, xmax, ymin, ymax, zmin, zmax). This method will\nclear the array by default.  To append ids to an array, set\nclearArray to false.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKdTree_Doc =
  "vtkKdTree - a Kd-tree spatial decomposition of a set of points\n\n"
  "Superclass: vtkLocator\n\n"
  "Given one or more vtkDataSets, create a load balancing\n"
  "    k-d tree decomposition of the points at the center of the cells.\n"
  "    Or, create a k-d tree point locator from a list of points.\n\n\n"
  "    This class can also generate a PolyData representation of\n"
  "    the boundaries of the spatial regions in the decomposition.\n\n\n"
  "    It can sort the regions with respect to a viewing direction,\n"
  "    and it can decompose a list of regions into subsets, each\n"
  "    of which represent a convex spatial region (since many algorithms\n"
  "    require a convex region).\n\n\n"
  "    If the points were derived from cells, vtkKdTree\n"
  "    can create a list of cell Ids for each region for each data set.\n"
  "    Two lists are available - all cells with centroid in the region,\n"
  "    and all cells that intersect the region but whose centroid lies\n"
  "    in another region.\n\n\n"
  "    For the purpose of removing duplicate points quickly from large\n"
  "    data sets, or for finding nearby points, we added another mode\n"
  "for\n"
  "    building the locator.  BuildLocatorFromPoints will build a k-d\n"
  "tree\n"
  "    from one or more vtkPoints objects.  This can be followed by\n"
  "    BuildMapForDuplicatePoints which returns a mapping from the\n"
  "original\n"
  "    ids to a subset of the ids that is unique within a supplied\n"
  "    tolerance, or you can use FindPoint and FindClosestPoint to\n"
  "    locate points in the original set that the tree was built from.\n\n"
  "@sa\n"
  "     vtkLocator vtkCellLocator vtkPKdTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKdTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkKdTree", // tp_name
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
  PyvtkKdTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKdTree_StaticNew()
{
  return vtkKdTree::New();
}

PyObject *PyvtkKdTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKdTree_Type, PyvtkKdTree_Methods,
    "vtkKdTree",
 &PyvtkKdTree_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKdTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKdTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKdTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

