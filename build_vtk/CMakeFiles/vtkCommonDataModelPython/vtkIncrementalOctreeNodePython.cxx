// python wrapper for vtkIncrementalOctreeNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIncrementalOctreeNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalOctreeNode(PyObject *dict); }
extern "C" { PyObject *PyvtkIncrementalOctreeNode_ClassNew(); }


static PyObject *
PyvtkIncrementalOctreeNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalOctreeNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalOctreeNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalOctreeNode *tempr = vtkIncrementalOctreeNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalOctreeNode::NewInstance());

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
PyvtkIncrementalOctreeNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIncrementalOctreeNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIncrementalOctreeNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPoints() :
      op->vtkIncrementalOctreeNode::GetNumberOfPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetPointIdSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIdSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIdSet() :
      op->vtkIncrementalOctreeNode::GetPointIdSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_DeleteChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DeleteChildNodes();
    }
    else
    {
      op->vtkIncrementalOctreeNode::DeleteChildNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_SetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkIncrementalOctreeNode::SetBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

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
      op->vtkIncrementalOctreeNode::GetBounds(temp0);
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
PyvtkIncrementalOctreeNode_GetMinBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinBounds() :
      op->vtkIncrementalOctreeNode::GetMinBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxBounds() :
      op->vtkIncrementalOctreeNode::GetMaxBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMinDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMinDataBounds() :
      op->vtkIncrementalOctreeNode::GetMinDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetMaxDataBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxDataBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaxDataBounds() :
      op->vtkIncrementalOctreeNode::GetMaxDataBounds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsLeaf() :
      op->vtkIncrementalOctreeNode::IsLeaf());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChildIndex(temp0) :
      op->vtkIncrementalOctreeNode::GetChildIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIncrementalOctreeNode *tempr = (ap.IsBound() ?
      op->GetChild(temp0) :
      op->vtkIncrementalOctreeNode::GetChild(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsPoint(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPoint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ContainsPointByData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ContainsPointByData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    int tempr = (ap.IsBound() ?
      op->ContainsPointByData(temp0) :
      op->vtkIncrementalOctreeNode::ContainsPointByData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkIncrementalOctreeNode::InsertPoint(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToInnerBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIncrementalOctreeNode *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode"))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToInnerBoundary(temp0, temp1) :
      op->vtkIncrementalOctreeNode::GetDistance2ToInnerBoundary(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  vtkIncrementalOctreeNode *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp2))
  {
    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance2ToBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkIncrementalOctreeNode *temp2 = nullptr;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIncrementalOctreeNode") &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    double tempr = (ap.IsBound() ?
      op->GetDistance2ToBoundary(temp0, temp1, temp2, temp3) :
      op->vtkIncrementalOctreeNode::GetDistance2ToBoundary(temp0, temp1, temp2, temp3));

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
PyvtkIncrementalOctreeNode_GetDistance2ToBoundary(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s1(self, args);
    case 4:
      return PyvtkIncrementalOctreeNode_GetDistance2ToBoundary_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDistance2ToBoundary");
  return nullptr;
}


static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->ExportAllPointIdsByInsertion(temp0);
    }
    else
    {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByInsertion(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExportAllPointIdsByDirectSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->ExportAllPointIdsByDirectSet(temp0, temp1);
    }
    else
    {
      op->vtkIncrementalOctreeNode::ExportAllPointIdsByDirectSet(temp0, temp1);
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
PyvtkIncrementalOctreeNode_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkIncrementalOctreeNode::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetID() :
      op->vtkIncrementalOctreeNode::GetID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalOctreeNode_GetPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalOctreeNode *op = static_cast<vtkIncrementalOctreeNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdList *tempr = (ap.IsBound() ?
      op->GetPointIds() :
      op->vtkIncrementalOctreeNode::GetPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIncrementalOctreeNode_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalOctreeNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIncrementalOctreeNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIncrementalOctreeNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIncrementalOctreeNode\nC++: static vtkIncrementalOctreeNode *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIncrementalOctreeNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIncrementalOctreeNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIncrementalOctreeNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfPoints", PyvtkIncrementalOctreeNode_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual int GetNumberOfPoints()\n\nGet the number of points inside or under this node.\n"},
  {"GetPointIdSet", PyvtkIncrementalOctreeNode_GetPointIdSet, METH_VARARGS,
   "GetPointIdSet(self) -> vtkIdList\nC++: virtual vtkIdList *GetPointIdSet()\n\nGet the list of point indices, nullptr for a non-leaf node.\n"},
  {"DeleteChildNodes", PyvtkIncrementalOctreeNode_DeleteChildNodes, METH_VARARGS,
   "DeleteChildNodes(self) -> None\nC++: void DeleteChildNodes()\n\nDelete the eight child nodes.\n"},
  {"SetBounds", PyvtkIncrementalOctreeNode_SetBounds, METH_VARARGS,
   "SetBounds(self, x1:float, x2:float, y1:float, y2:float, z1:float,\n    z2:float) -> None\nC++: void SetBounds(double x1, double x2, double y1, double y2,\n    double z1, double z2)\n\nSet the spatial bounding box of the node. This function sets a\ndefault data bounding box.\n"},
  {"GetBounds", PyvtkIncrementalOctreeNode_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the spatial bounding box of the node. The values are returned\nvia an array in order of: x_min, x_max, y_min, y_max, z_min,\nz_max.\n"},
  {"GetMinBounds", PyvtkIncrementalOctreeNode_GetMinBounds, METH_VARARGS,
   "GetMinBounds(self) -> (float, float, float)\nC++: virtual double *GetMinBounds()\n\nGet access to MinBounds. Do not free this pointer.\n"},
  {"GetMaxBounds", PyvtkIncrementalOctreeNode_GetMaxBounds, METH_VARARGS,
   "GetMaxBounds(self) -> (float, float, float)\nC++: virtual double *GetMaxBounds()\n\nGet access to MaxBounds. Do not free this pointer.\n"},
  {"GetMinDataBounds", PyvtkIncrementalOctreeNode_GetMinDataBounds, METH_VARARGS,
   "GetMinDataBounds(self) -> Pointer\nC++: double *GetMinDataBounds()\n\nGet access to MinDataBounds. Note that MinDataBounds is not valid\nuntil point insertion.\n"},
  {"GetMaxDataBounds", PyvtkIncrementalOctreeNode_GetMaxDataBounds, METH_VARARGS,
   "GetMaxDataBounds(self) -> Pointer\nC++: double *GetMaxDataBounds()\n\nGet access to MaxDataBounds. Note that MaxDataBounds is not valid\nuntil point insertion.\n"},
  {"IsLeaf", PyvtkIncrementalOctreeNode_IsLeaf, METH_VARARGS,
   "IsLeaf(self) -> int\nC++: int IsLeaf()\n\nDetermine whether or not this node is a leaf.\n"},
  {"GetChildIndex", PyvtkIncrementalOctreeNode_GetChildIndex, METH_VARARGS,
   "GetChildIndex(self, point:(float, float, float)) -> int\nC++: int GetChildIndex(const double point[3])\n\nDetermine which specific child / octant contains a given point.\nNote that the point is assumed to be inside this node and no\nchecking is performed on the inside issue.\n"},
  {"GetChild", PyvtkIncrementalOctreeNode_GetChild, METH_VARARGS,
   "GetChild(self, i:int) -> vtkIncrementalOctreeNode\nC++: vtkIncrementalOctreeNode *GetChild(int i)\n\nGet quick access to a child of this node. Note that this node is\nassumed to be a non-leaf one and no checking is performed on the\nnode type.\n"},
  {"ContainsPoint", PyvtkIncrementalOctreeNode_ContainsPoint, METH_VARARGS,
   "ContainsPoint(self, pnt:(float, float, float)) -> int\nC++: vtkTypeBool ContainsPoint(const double pnt[3])\n\nA point is in a node if and only if MinBounds[i] < p[i] <=\nMaxBounds[i], which allows a node to be divided into eight\nnon-overlapping children.\n"},
  {"ContainsPointByData", PyvtkIncrementalOctreeNode_ContainsPointByData, METH_VARARGS,
   "ContainsPointByData(self, pnt:(float, float, float)) -> int\nC++: vtkTypeBool ContainsPointByData(const double pnt[3])\n\nA point is in a node, in terms of data, if and only if\nMinDataBounds[i] <= p[i] <= MaxDataBounds[i].\n"},
  {"InsertPoint", PyvtkIncrementalOctreeNode_InsertPoint, METH_VARARGS,
   "InsertPoint(self, points:vtkPoints, newPnt:(float, float, float),\n    maxPts:int, pntId:[int, ...], ptMode:int, numberOfNodes:int)\n    -> int\nC++: int InsertPoint(vtkPoints *points, const double newPnt[3],\n    int maxPts, vtkIdType *pntId, int ptMode, int &numberOfNodes)\n\nThis function is called after a successful point-insertion check\nand only applies to a leaf node. Prior to a call to this\nfunction, the octree should have been retrieved top-down to find\nthe specific leaf node in which this new point (newPt) will be\ninserted. The actual index of the new point (to be inserted to\npoints) is stored in pntId. Argument ptMode specifies whether the\npoint is not inserted at all but instead only the point index is\nprovided upon 0, the point is inserted via vtkPoints::\nInsertPoint() upon 1, or it is inserted via\nvtkPoints::InsertNextPoint() upon 2. For case 0, pntId needs to\nbe specified. For cases 1 and 2, the actual point index is\nreturned via pntId. Note that this function always returns 1 to\nindicate the success of point insertion. numberOfNodes is the\nnumber of nodes present in the tree at this time. it is used to\nassign an ID to each node which can be used to associate\napplication specific information with each node. It is updated if\nnew nodes are added to the tree.\n"},
  {"GetDistance2ToInnerBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToInnerBoundary, METH_VARARGS,
   "GetDistance2ToInnerBoundary(self, point:(float, float, float),\n    rootNode:vtkIncrementalOctreeNode) -> float\nC++: double GetDistance2ToInnerBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode)\n\nGiven a point inside this node, get the minimum squared distance\nto all inner boundaries. An inner boundary is a node's face that\nis shared by another non-root node.\n"},
  {"GetDistance2ToBoundary", PyvtkIncrementalOctreeNode_GetDistance2ToBoundary, METH_VARARGS,
   "GetDistance2ToBoundary(self, point:(float, float, float),\n    rootNode:vtkIncrementalOctreeNode, checkData:int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    vtkIncrementalOctreeNode *rootNode, int checkData)\nGetDistance2ToBoundary(self, point:(float, float, float),\n    closest:[float, float, float],\n    rootNode:vtkIncrementalOctreeNode, checkData:int) -> float\nC++: double GetDistance2ToBoundary(const double point[3],\n    double closest[3], vtkIncrementalOctreeNode *rootNode,\n    int checkData)\n\nCompute the minimum squared distance from a point to this node,\nwith all six boundaries considered. The data bounding box is\nchecked if checkData is non-zero.\n"},
  {"ExportAllPointIdsByInsertion", PyvtkIncrementalOctreeNode_ExportAllPointIdsByInsertion, METH_VARARGS,
   "ExportAllPointIdsByInsertion(self, idList:vtkIdList) -> None\nC++: void ExportAllPointIdsByInsertion(vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by inserting them to an allocated vtkIdList via\nvtkIdList::InsertNextId().\n"},
  {"ExportAllPointIdsByDirectSet", PyvtkIncrementalOctreeNode_ExportAllPointIdsByDirectSet, METH_VARARGS,
   "ExportAllPointIdsByDirectSet(self, pntIdx:[int, ...],\n    idList:vtkIdList) -> None\nC++: void ExportAllPointIdsByDirectSet(vtkIdType *pntIdx,\n    vtkIdList *idList)\n\nExport all the indices of the points (contained in or under this\nnode) by directly setting them in an allocated vtkIdList object.\npntIdx indicates the starting location (in terms of vtkIdList)\nfrom which new point indices are added to vtkIdList by\nvtkIdList::SetId().\n"},
  {"GetNumberOfLevels", PyvtkIncrementalOctreeNode_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: int GetNumberOfLevels()\n\nComputes and returns the maximum level of the tree. If a tree has\none node it returns 1 else it returns the maximum level of its\nchildren plus 1.\n"},
  {"GetID", PyvtkIncrementalOctreeNode_GetID, METH_VARARGS,
   "GetID(self) -> int\nC++: int GetID()\n\nReturns the ID of this node which is the index of the node in the\noctree. The index of the node enables users of this class to\nassociate additional information with each node.\n"},
  {"GetPointIds", PyvtkIncrementalOctreeNode_GetPointIds, METH_VARARGS,
   "GetPointIds(self) -> vtkIdList\nC++: vtkIdList *GetPointIds()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIncrementalOctreeNode_Doc =
  "vtkIncrementalOctreeNode - Octree node constituting incremental\n octree (in support of both point location and point insertion)\n\n"
  "Superclass: vtkObject\n\n"
  "Octree nodes serve as spatial sub-division primitives to build the\n"
  "search\n"
  " structure of an incremental octree in a recursive top-down manner.\n"
  "The\n"
  " hierarchy takes the form of a tree-like representation by which a\n"
  "parent\n"
  " node contains eight mutually non-overlapping child nodes. Each child\n"
  "is\n"
  " assigned with an axis-aligned rectangular volume (Spatial Bounding\n"
  "Box)\n"
  " and the eight children together cover exactly the same region as\n"
  "governed\n"
  " by their parent. The eight child nodes / octants are ordered as\n\n\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMin, zBBoxMid]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMin, yBBoxMid] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMin, xBBoxMid] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n"
  "},\n"
  " { (xBBoxMid, xBBoxMax] & (yBBoxMid, yBBoxMax] & (zBBoxMid, zBBoxMax]\n"
  "},\n\n\n"
  " where { xrange & yRange & zRange } defines the region of each 3D\n"
  "octant.\n"
  " In addition, the points falling within and registered, by means of\n"
  "point\n"
  " indices, in the parent node are distributed to the child nodes for\n"
  "delegated\n"
  " maintenance. In fact, only leaf nodes, i.e., those without any\n"
  "descendants,\n"
  " actually store point indices while each node, regardless of a leaf\n"
  "or non-\n"
  " leaf node, keeps a dynamically updated Data Bounding Box of the\n"
  "inhabitant\n"
  " points, if any. Given a maximum number of points per leaf node, an\n"
  "octree\n"
  " is initialized with an empty leaf node that is then recursively\n"
  "sub-divided,\n"
  " but only on demand as points are incrementally inserted, to\n"
  "construct a\n"
  " populated tree.\n\n\n"
  " Please note that this octree node class is able to handle a large\n"
  "number\n"
  " of EXACTLY duplicate points that is greater than the specified\n"
  "maximum\n"
  " number of points per leaf node. In other words, as an exception, a\n"
  "leaf\n"
  " node may maintain an arbitrary number of exactly duplicate points to\n"
  "deal\n"
  " with possible extreme cases.\n\n"
  "@sa\n"
  " vtkIncrementalOctreePointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIncrementalOctreeNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkIncrementalOctreeNode", // tp_name
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
  PyvtkIncrementalOctreeNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIncrementalOctreeNode_StaticNew()
{
  return vtkIncrementalOctreeNode::New();
}

PyObject *PyvtkIncrementalOctreeNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIncrementalOctreeNode_Type, PyvtkIncrementalOctreeNode_Methods,
    "vtkIncrementalOctreeNode",
 &PyvtkIncrementalOctreeNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIncrementalOctreeNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalOctreeNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalOctreeNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

