// python wrapper for vtkDendrogramItem
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkStdString.h"
#include "vtkDendrogramItem.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDendrogramItem(PyObject *dict); }
extern "C" { PyObject *PyvtkDendrogramItem_ClassNew(); }


static PyObject *
PyvtkDendrogramItem_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDendrogramItem::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDendrogramItem::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDendrogramItem *tempr = vtkDendrogramItem::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDendrogramItem *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDendrogramItem::NewInstance());

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
PyvtkDendrogramItem_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDendrogramItem::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDendrogramItem::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTree"))
  {
    if (ap.IsBound())
    {
      op->SetTree(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetTree() :
      op->vtkDendrogramItem::GetTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_CollapseToNumberOfLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CollapseToNumberOfLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->CollapseToNumberOfLeafNodes(temp0);
    }
    else
    {
      op->vtkDendrogramItem::CollapseToNumberOfLeafNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetPrunedTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrunedTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTree *tempr = (ap.IsBound() ?
      op->GetPrunedTree() :
      op->vtkDendrogramItem::GetPrunedTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetColorArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorArray(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetColorArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetExtendLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtendLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtendLeafNodes(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetExtendLeafNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetExtendLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtendLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtendLeafNodes() :
      op->vtkDendrogramItem::GetExtendLeafNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_ExtendLeafNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendLeafNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtendLeafNodesOn();
    }
    else
    {
      op->vtkDendrogramItem::ExtendLeafNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_ExtendLeafNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtendLeafNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtendLeafNodesOff();
    }
    else
    {
      op->vtkDendrogramItem::ExtendLeafNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrientation(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrientation() :
      op->vtkDendrogramItem::GetOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetAngleForOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleForOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleForOrientation(temp0) :
      op->vtkDendrogramItem::GetAngleForOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetTextAngleForOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextAngleForOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTextAngleForOrientation(temp0) :
      op->vtkDendrogramItem::GetTextAngleForOrientation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetDrawLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawLabels(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetDrawLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetDrawLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawLabels() :
      op->vtkDendrogramItem::GetDrawLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_DrawLabelsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLabelsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawLabelsOn();
    }
    else
    {
      op->vtkDendrogramItem::DrawLabelsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_DrawLabelsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLabelsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DrawLabelsOff();
    }
    else
    {
      op->vtkDendrogramItem::DrawLabelsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0, temp1);
    }
    else
    {
      op->vtkDendrogramItem::SetPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDendrogramItem_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDendrogramItem_SetPosition_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetPosition(*temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetPosition(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDendrogramItem_SetPosition_Methods[] = {
  {"SetPosition", PyvtkDendrogramItem_SetPosition_s2, METH_VARARGS,
   "@P *f"},
  {"SetPosition", PyvtkDendrogramItem_SetPosition_s3, METH_VARARGS,
   "@W vtkVector2f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDendrogramItem_SetPosition(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDendrogramItem_SetPosition_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDendrogramItem_SetPosition_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkDendrogramItem_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkDendrogramItem::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetPositionVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetPositionVector() :
      op->vtkDendrogramItem::GetPositionVector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLeafSpacing() :
      op->vtkDendrogramItem::GetLeafSpacing());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetLeafSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeafSpacing(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetLeafSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_PrepareToPaint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PrepareToPaint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    if (ap.IsBound())
    {
      op->PrepareToPaint(temp0);
    }
    else
    {
      op->vtkDendrogramItem::PrepareToPaint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  double save0[4];
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
      op->vtkDendrogramItem::GetBounds(temp0);
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
PyvtkDendrogramItem_ComputeLabelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeLabelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    if (ap.IsBound())
    {
      op->ComputeLabelWidth(temp0);
    }
    else
    {
      op->vtkDendrogramItem::ComputeLabelWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetLabelWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLabelWidth() :
      op->vtkDendrogramItem::GetLabelWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetPositionOfVertex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionOfVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  std::string temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetPositionOfVertex(temp0, temp1) :
      op->vtkDendrogramItem::GetPositionOfVertex(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkDendrogramItem::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetLineWidth() :
      op->vtkDendrogramItem::GetLineWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetDisplayNumberOfCollapsedLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplayNumberOfCollapsedLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplayNumberOfCollapsedLeafNodes(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetDisplayNumberOfCollapsedLeafNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetDisplayNumberOfCollapsedLeafNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplayNumberOfCollapsedLeafNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplayNumberOfCollapsedLeafNodes() :
      op->vtkDendrogramItem::GetDisplayNumberOfCollapsedLeafNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_DisplayNumberOfCollapsedLeafNodesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayNumberOfCollapsedLeafNodesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayNumberOfCollapsedLeafNodesOn();
    }
    else
    {
      op->vtkDendrogramItem::DisplayNumberOfCollapsedLeafNodesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_DisplayNumberOfCollapsedLeafNodesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplayNumberOfCollapsedLeafNodesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplayNumberOfCollapsedLeafNodesOff();
    }
    else
    {
      op->vtkDendrogramItem::DisplayNumberOfCollapsedLeafNodesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetDistanceArrayName() :
      op->vtkDendrogramItem::GetDistanceArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetDistanceArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistanceArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistanceArrayName(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetDistanceArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_GetVertexNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetVertexNameArrayName() :
      op->vtkDendrogramItem::GetVertexNameArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_SetVertexNameArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexNameArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexNameArrayName(temp0);
    }
    else
    {
      op->vtkDendrogramItem::SetVertexNameArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDendrogramItem_Hit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Hit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->Hit(*temp0) :
      op->vtkDendrogramItem::Hit(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDendrogramItem_MouseDoubleClickEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MouseDoubleClickEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDendrogramItem *op = static_cast<vtkDendrogramItem *>(vp);

  vtkContextMouseEvent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkContextMouseEvent"))
  {
    bool tempr = (ap.IsBound() ?
      op->MouseDoubleClickEvent(*temp0) :
      op->vtkDendrogramItem::MouseDoubleClickEvent(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkDendrogramItem_Methods[] = {
  {"IsTypeOf", PyvtkDendrogramItem_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDendrogramItem_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDendrogramItem_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDendrogramItem\nC++: static vtkDendrogramItem *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDendrogramItem_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDendrogramItem\nC++: vtkDendrogramItem *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDendrogramItem_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDendrogramItem_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTree", PyvtkDendrogramItem_SetTree, METH_VARARGS,
   "SetTree(self, tree:vtkTree) -> None\nC++: virtual void SetTree(vtkTree *tree)\n\nSet the tree that this item draws.  Note that this tree's vertex\ndata must contain a vtkStringArray called \"node name\".  The\nvtkNewickTreeReader automatically creates this required array for\nyou.\n"},
  {"GetTree", PyvtkDendrogramItem_GetTree, METH_VARARGS,
   "GetTree(self) -> vtkTree\nC++: vtkTree *GetTree()\n\nGet the tree that this item draws.\n"},
  {"CollapseToNumberOfLeafNodes", PyvtkDendrogramItem_CollapseToNumberOfLeafNodes, METH_VARARGS,
   "CollapseToNumberOfLeafNodes(self, n:int) -> None\nC++: void CollapseToNumberOfLeafNodes(unsigned int n)\n\nCollapse subtrees until there are only n leaf nodes left in the\ntree. The leaf nodes that remain are those that are closest to\nthe root. Any subtrees that were collapsed prior to this function\nbeing called may be re-expanded.\n"},
  {"GetPrunedTree", PyvtkDendrogramItem_GetPrunedTree, METH_VARARGS,
   "GetPrunedTree(self) -> vtkTree\nC++: vtkTree *GetPrunedTree()\n\nGet the collapsed tree\n"},
  {"SetColorArray", PyvtkDendrogramItem_SetColorArray, METH_VARARGS,
   "SetColorArray(self, arrayName:str) -> None\nC++: void SetColorArray(const char *arrayName)\n\nIndicate which array within the Tree's VertexData should be used\nto color the tree.  The specified array must be a vtkDoubleArray.\nBy default, the tree will be drawn in black.\n"},
  {"SetExtendLeafNodes", PyvtkDendrogramItem_SetExtendLeafNodes, METH_VARARGS,
   "SetExtendLeafNodes(self, _arg:bool) -> None\nC++: virtual void SetExtendLeafNodes(bool _arg)\n\nGet/set whether or not leaf nodes should be extended so that they\nall line up vertically.  The default is to NOT extend leaf nodes.\n When extending leaf nodes, the extra length is drawn in grey so\nas to distinguish it from the actual length of the leaf node.\n"},
  {"GetExtendLeafNodes", PyvtkDendrogramItem_GetExtendLeafNodes, METH_VARARGS,
   "GetExtendLeafNodes(self) -> bool\nC++: virtual bool GetExtendLeafNodes()\n\n"},
  {"ExtendLeafNodesOn", PyvtkDendrogramItem_ExtendLeafNodesOn, METH_VARARGS,
   "ExtendLeafNodesOn(self) -> None\nC++: virtual void ExtendLeafNodesOn()\n\n"},
  {"ExtendLeafNodesOff", PyvtkDendrogramItem_ExtendLeafNodesOff, METH_VARARGS,
   "ExtendLeafNodesOff(self) -> None\nC++: virtual void ExtendLeafNodesOff()\n\n"},
  {"SetOrientation", PyvtkDendrogramItem_SetOrientation, METH_VARARGS,
   "SetOrientation(self, orientation:int) -> None\nC++: void SetOrientation(int orientation)\n\nSet which way the tree should face within the visualization.  The\ndefault is for the tree to be drawn left to right.\n"},
  {"GetOrientation", PyvtkDendrogramItem_GetOrientation, METH_VARARGS,
   "GetOrientation(self) -> int\nC++: int GetOrientation()\n\nGet the current tree orientation.\n"},
  {"GetAngleForOrientation", PyvtkDendrogramItem_GetAngleForOrientation, METH_VARARGS,
   "GetAngleForOrientation(self, orientation:int) -> float\nC++: double GetAngleForOrientation(int orientation)\n\nGet the rotation angle (in degrees) that corresponds to the given\ntree orientation.  For the default orientation (LEFT_TO_RIGHT),\nthis is 90 degrees.\n"},
  {"GetTextAngleForOrientation", PyvtkDendrogramItem_GetTextAngleForOrientation, METH_VARARGS,
   "GetTextAngleForOrientation(self, orientation:int) -> float\nC++: double GetTextAngleForOrientation(int orientation)\n\nGet the angle that vertex labels should be rotated for the\ncorresponding tree orientation.  For the default orientation\n(LEFT_TO_RIGHT), this is 0 degrees.\n"},
  {"SetDrawLabels", PyvtkDendrogramItem_SetDrawLabels, METH_VARARGS,
   "SetDrawLabels(self, _arg:bool) -> None\nC++: virtual void SetDrawLabels(bool _arg)\n\nGet/Set whether or not leaf nodes should be labeled by this\nclass. Default is true.\n"},
  {"GetDrawLabels", PyvtkDendrogramItem_GetDrawLabels, METH_VARARGS,
   "GetDrawLabels(self) -> bool\nC++: virtual bool GetDrawLabels()\n\n"},
  {"DrawLabelsOn", PyvtkDendrogramItem_DrawLabelsOn, METH_VARARGS,
   "DrawLabelsOn(self) -> None\nC++: virtual void DrawLabelsOn()\n\n"},
  {"DrawLabelsOff", PyvtkDendrogramItem_DrawLabelsOff, METH_VARARGS,
   "DrawLabelsOff(self) -> None\nC++: virtual void DrawLabelsOff()\n\n"},
  {"SetPosition", PyvtkDendrogramItem_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPosition(float _arg1, float _arg2)\nSetPosition(self, _arg:(float, float)) -> None\nC++: void SetPosition(const float _arg[2])\nSetPosition(self, pos:vtkVector2f) -> None\nC++: void SetPosition(const vtkVector2f &pos)\n\nSet the position of the dendrogram.\n"},
  {"GetPosition", PyvtkDendrogramItem_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float)\nC++: virtual float *GetPosition()\n\nGet position of the dendrogram.\n"},
  {"GetPositionVector", PyvtkDendrogramItem_GetPositionVector, METH_VARARGS,
   "GetPositionVector(self) -> vtkVector2f\nC++: vtkVector2f GetPositionVector()\n\n"},
  {"GetLeafSpacing", PyvtkDendrogramItem_GetLeafSpacing, METH_VARARGS,
   "GetLeafSpacing(self) -> float\nC++: virtual double GetLeafSpacing()\n\nGet/Set the spacing between the leaf nodes in our dendrogram.\nDefault is 18 pixels.\n"},
  {"SetLeafSpacing", PyvtkDendrogramItem_SetLeafSpacing, METH_VARARGS,
   "SetLeafSpacing(self, _arg:float) -> None\nC++: virtual void SetLeafSpacing(double _arg)\n\n"},
  {"PrepareToPaint", PyvtkDendrogramItem_PrepareToPaint, METH_VARARGS,
   "PrepareToPaint(self, painter:vtkContext2D) -> None\nC++: void PrepareToPaint(vtkContext2D *painter)\n\nThis function calls RebuildBuffers() if necessary. Once\nPrepareToPaint() has been called, GetBounds() is guaranteed to\nprovide useful information.\n"},
  {"GetBounds", PyvtkDendrogramItem_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float]) -> None\nC++: virtual void GetBounds(double bounds[4])\n\nGet the bounds for this item as (Xmin,Xmax,Ymin,Ymax). These\nbounds are only guaranteed to be accurate after Paint() or\nPrepareToPaint() has been called.\n"},
  {"ComputeLabelWidth", PyvtkDendrogramItem_ComputeLabelWidth, METH_VARARGS,
   "ComputeLabelWidth(self, painter:vtkContext2D) -> None\nC++: void ComputeLabelWidth(vtkContext2D *painter)\n\nCompute the width of the longest leaf node label.\n"},
  {"GetLabelWidth", PyvtkDendrogramItem_GetLabelWidth, METH_VARARGS,
   "GetLabelWidth(self) -> float\nC++: float GetLabelWidth()\n\nGet the width of the longest leaf node label.\n"},
  {"GetPositionOfVertex", PyvtkDendrogramItem_GetPositionOfVertex, METH_VARARGS,
   "GetPositionOfVertex(self, vertexName:str, position:[float, float])\n     -> bool\nC++: bool GetPositionOfVertex(const std::string &vertexName,\n    double position[2])\n\nFind the position of the vertex with the specified name.  Store\nthis information in the passed array.  Returns true if the vertex\nwas found, false otherwise.\n"},
  {"Paint", PyvtkDendrogramItem_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaints the input tree as a dendrogram.\n"},
  {"GetLineWidth", PyvtkDendrogramItem_GetLineWidth, METH_VARARGS,
   "GetLineWidth(self) -> float\nC++: virtual float GetLineWidth()\n\nGet/Set how wide the edges of this dendrogram should be.  Default\nis one pixel.\n"},
  {"SetLineWidth", PyvtkDendrogramItem_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, _arg:float) -> None\nC++: virtual void SetLineWidth(float _arg)\n\n"},
  {"SetDisplayNumberOfCollapsedLeafNodes", PyvtkDendrogramItem_SetDisplayNumberOfCollapsedLeafNodes, METH_VARARGS,
   "SetDisplayNumberOfCollapsedLeafNodes(self, _arg:bool) -> None\nC++: virtual void SetDisplayNumberOfCollapsedLeafNodes(bool _arg)\n\nGet/set whether or not the number of collapsed leaf nodes should\nbe written inside the triangle representing a collapsed subtree. \nDefault is true.\n"},
  {"GetDisplayNumberOfCollapsedLeafNodes", PyvtkDendrogramItem_GetDisplayNumberOfCollapsedLeafNodes, METH_VARARGS,
   "GetDisplayNumberOfCollapsedLeafNodes(self) -> bool\nC++: virtual bool GetDisplayNumberOfCollapsedLeafNodes()\n\n"},
  {"DisplayNumberOfCollapsedLeafNodesOn", PyvtkDendrogramItem_DisplayNumberOfCollapsedLeafNodesOn, METH_VARARGS,
   "DisplayNumberOfCollapsedLeafNodesOn(self) -> None\nC++: virtual void DisplayNumberOfCollapsedLeafNodesOn()\n\n"},
  {"DisplayNumberOfCollapsedLeafNodesOff", PyvtkDendrogramItem_DisplayNumberOfCollapsedLeafNodesOff, METH_VARARGS,
   "DisplayNumberOfCollapsedLeafNodesOff(self) -> None\nC++: virtual void DisplayNumberOfCollapsedLeafNodesOff()\n\n"},
  {"GetDistanceArrayName", PyvtkDendrogramItem_GetDistanceArrayName, METH_VARARGS,
   "GetDistanceArrayName(self) -> str\nC++: virtual vtkStdString GetDistanceArrayName()\n\nGet/Set the name of the array that specifies the distance of each\nvertex from the root (NOT the vertex's parent).  This array\nshould be a part of the input tree's VertexData.  By default,\nthis value is \"node weight\", which is the name of the array\ncreated by vtkNewickTreeReader.\n"},
  {"SetDistanceArrayName", PyvtkDendrogramItem_SetDistanceArrayName, METH_VARARGS,
   "SetDistanceArrayName(self, _arg:str) -> None\nC++: virtual void SetDistanceArrayName(vtkStdString _arg)\n\n"},
  {"GetVertexNameArrayName", PyvtkDendrogramItem_GetVertexNameArrayName, METH_VARARGS,
   "GetVertexNameArrayName(self) -> str\nC++: virtual vtkStdString GetVertexNameArrayName()\n\nGet/Set the name of a vtkStringArray that specifies the names of\nthe vertices of the input tree.  This array should be a part of\nthe input tree's VertexData.  By default, this value is \"node\nname\", which is the name of the array created by\nvtkNewickTreeReader.\n"},
  {"SetVertexNameArrayName", PyvtkDendrogramItem_SetVertexNameArrayName, METH_VARARGS,
   "SetVertexNameArrayName(self, _arg:str) -> None\nC++: virtual void SetVertexNameArrayName(vtkStdString _arg)\n\n"},
  {"Hit", PyvtkDendrogramItem_Hit, METH_VARARGS,
   "Hit(self, mouse:vtkContextMouseEvent) -> bool\nC++: bool Hit(const vtkContextMouseEvent &mouse) override;\n\nReturns true if the transform is interactive, false otherwise.\n"},
  {"MouseDoubleClickEvent", PyvtkDendrogramItem_MouseDoubleClickEvent, METH_VARARGS,
   "MouseDoubleClickEvent(self, event:vtkContextMouseEvent) -> bool\nC++: bool MouseDoubleClickEvent(const vtkContextMouseEvent &event)\n     override;\n\nCollapse or expand a subtree when the user double clicks on an\ninternal node.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDendrogramItem_Doc =
  "vtkDendrogramItem - A 2D graphics item for rendering a tree as a\ndendrogram\n\n"
  "Superclass: vtkContextItem\n\n"
  "Draw a tree as a dendrogram The input tree's vertex data must contain\n"
  "at least two arrays. The first required array is a vtkStringArray\n"
  "called \"node name\". This array is used to label the leaf nodes of the\n"
  "tree. The second required array is a scalar array called \"node\n"
  "weight\". This array is used by vtkTreeLayoutStrategy to set any\n"
  "particular node's distance from the root of the tree.\n\n"
  "The vtkNewickTreeReader automatically initializes both of these\n"
  "required arrays in its output tree.\n\n"
  ".SEE ALSO vtkTree vtkNewickTreeReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDendrogramItem_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkDendrogramItem", // tp_name
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
  PyvtkDendrogramItem_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDendrogramItem_StaticNew()
{
  return vtkDendrogramItem::New();
}

PyObject *PyvtkDendrogramItem_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDendrogramItem_Type, PyvtkDendrogramItem_Methods,
    "vtkDendrogramItem",
 &PyvtkDendrogramItem_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "LEFT_TO_RIGHT", vtkDendrogramItem::LEFT_TO_RIGHT },
        { "UP_TO_DOWN", vtkDendrogramItem::UP_TO_DOWN },
        { "RIGHT_TO_LEFT", vtkDendrogramItem::RIGHT_TO_LEFT },
        { "DOWN_TO_UP", vtkDendrogramItem::DOWN_TO_UP },
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

void PyVTKAddFile_vtkDendrogramItem(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDendrogramItem_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDendrogramItem", o) != 0)
  {
    Py_DECREF(o);
  }

}

