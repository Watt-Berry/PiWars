// python wrapper for vtkModifiedBSPTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkModifiedBSPTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkModifiedBSPTree(PyObject *dict); }
extern "C" { PyObject *PyvtkModifiedBSPTree_ClassNew(); }


static PyObject *
PyvtkModifiedBSPTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkModifiedBSPTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkModifiedBSPTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkModifiedBSPTree *tempr = vtkModifiedBSPTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkModifiedBSPTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkModifiedBSPTree::NewInstance());

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
PyvtkModifiedBSPTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkModifiedBSPTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkModifiedBSPTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  long long temp7;
  vtkGenericCell *temp8 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkGenericCell"))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  vtkGenericCell *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList") &&
      ap.GetVTKObject(temp5, "vtkGenericCell"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  long long temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(7, temp7);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  vtkPoints *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkPoints *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkPoints") &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::IntersectWithLine(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_IntersectWithLine(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 9:
      return PyvtkModifiedBSPTree_IntersectWithLine_s1(self, args);
    case 6:
      return PyvtkModifiedBSPTree_IntersectWithLine_s2(self, args);
    case 7:
      return PyvtkModifiedBSPTree_IntersectWithLine_s3(self, args);
    case 8:
      return PyvtkModifiedBSPTree_IntersectWithLine_s4(self, args);
    case 4:
      return PyvtkModifiedBSPTree_IntersectWithLine_s5(self, args);
    case 5:
      return PyvtkModifiedBSPTree_IntersectWithLine_s6(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IntersectWithLine");
  return nullptr;
}


static PyObject *
PyvtkModifiedBSPTree_FindCellsAlongLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCellsAlongLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkModifiedBSPTree::FindCellsAlongLine(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  int temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkModifiedBSPTree::FindCell(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0) :
      op->vtkModifiedBSPTree::FindCell(temp0));

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
PyvtkModifiedBSPTree_FindCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  vtkGenericCell *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    long long tempr = (ap.IsBound() ?
      op->FindCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkModifiedBSPTree::FindCell(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkModifiedBSPTree_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkModifiedBSPTree_FindCell_s1(self, args);
    case 1:
      return PyvtkModifiedBSPTree_FindCell_s2(self, args);
    case 5:
      return PyvtkModifiedBSPTree_FindCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkModifiedBSPTree_GetLeafNodeCellInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafNodeCellInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdListCollection *tempr = (ap.IsBound() ?
      op->GetLeafNodeCellInformation() :
      op->vtkModifiedBSPTree::GetLeafNodeCellInformation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentationLeafs(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentationLeafs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->GenerateRepresentationLeafs(temp0);
    }
    else
    {
      op->vtkModifiedBSPTree::GenerateRepresentationLeafs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_GenerateRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

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
      op->vtkModifiedBSPTree::GenerateRepresentation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_FreeSearchStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeSearchStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FreeSearchStructure();
    }
    else
    {
      op->vtkModifiedBSPTree::FreeSearchStructure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_BuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildLocator();
    }
    else
    {
      op->vtkModifiedBSPTree::BuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_ForceBuildLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceBuildLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceBuildLocator();
    }
    else
    {
      op->vtkModifiedBSPTree::ForceBuildLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkModifiedBSPTree_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkModifiedBSPTree *op = static_cast<vtkModifiedBSPTree *>(vp);

  vtkAbstractCellLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkModifiedBSPTree::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkModifiedBSPTree_Methods[] = {
  {"IsTypeOf", PyvtkModifiedBSPTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkModifiedBSPTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkModifiedBSPTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkModifiedBSPTree\nC++: static vtkModifiedBSPTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkModifiedBSPTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkModifiedBSPTree\nC++: vtkModifiedBSPTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkModifiedBSPTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkModifiedBSPTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IntersectWithLine", PyvtkModifiedBSPTree_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int,\n    cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId, vtkIdType &cellId, vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList,\n     cell:vtkGenericCell) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, vtkPoints *points, vtkIdList *cellIds,\n    vtkGenericCell *cell) override;\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int, cellId:int) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, double &t, double x[3],\n    double pcoords[3], int &subId, vtkIdType &cellId)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), points:vtkPoints, cellIds:vtkIdList) -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], vtkPoints *points, vtkIdList *cellIds)\nIntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, points:vtkPoints, cellIds:vtkIdList)\n     -> int\nC++: virtual int IntersectWithLine(const double p1[3],\n    const double p2[3], double tol, vtkPoints *points,\n    vtkIdList *cellIds)\n\nReturn intersection point (if any) AND the cell which  ...\n [Truncated]\n"},
  {"FindCellsAlongLine", PyvtkModifiedBSPTree_FindCellsAlongLine, METH_VARARGS,
   "FindCellsAlongLine(self, p1:(float, float, float), p2:(float,\n    float, float), tolerance:float, cellsIds:vtkIdList) -> None\nC++: void FindCellsAlongLine(const double p1[3],\n    const double p2[3], double tolerance, vtkIdList *cellsIds)\n    override;\n\nTake the passed line segment and intersect it with the data set.\nFor each intersection with the bounds of a cell, the cellIds have\nthe relevant information added sort by t. If cellIds is nullptr\npointer, then no information is generated for that list.\n\nReimplemented from vtkAbstractCellLocator to showcase that it's a\nsupported function.\n"},
  {"FindCell", PyvtkModifiedBSPTree_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> int\nC++: vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, int &subId, double pcoords[3],\n    double *weights) override;\nFindCell(self, x:[float, float, float]) -> int\nC++: virtual vtkIdType FindCell(double x[3])\nFindCell(self, x:[float, float, float], tol2:float,\n    GenCell:vtkGenericCell, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], double tol2,\n    vtkGenericCell *GenCell, double pcoords[3], double *weights)\n\nFind the cell containing a given point. returns -1 if no cell\nfound the cell parameters are copied into the supplied variables,\na cell must be provided to store the information.\n\nFor other FindCell signatures, see vtkAbstractCellLocator.\n"},
  {"GetLeafNodeCellInformation", PyvtkModifiedBSPTree_GetLeafNodeCellInformation, METH_VARARGS,
   "GetLeafNodeCellInformation(self) -> vtkIdListCollection\nC++: vtkIdListCollection *GetLeafNodeCellInformation()\n\nAfter subdivision has completed, one may wish to query the tree\nto find which cells are in which leaf nodes. This function\nreturns a list which holds a cell Id list for each leaf node.\n"},
  {"GenerateRepresentationLeafs", PyvtkModifiedBSPTree_GenerateRepresentationLeafs, METH_VARARGS,
   "GenerateRepresentationLeafs(self, pd:vtkPolyData) -> None\nC++: virtual void GenerateRepresentationLeafs(vtkPolyData *pd)\n\nGenerate BBox representation of all leaf nodes\n"},
  {"GenerateRepresentation", PyvtkModifiedBSPTree_GenerateRepresentation, METH_VARARGS,
   "GenerateRepresentation(self, level:int, pd:vtkPolyData) -> None\nC++: void GenerateRepresentation(int level, vtkPolyData *pd)\n    override;\n\nSatisfy vtkLocator abstract interface.\n"},
  {"FreeSearchStructure", PyvtkModifiedBSPTree_FreeSearchStructure, METH_VARARGS,
   "FreeSearchStructure(self) -> None\nC++: void FreeSearchStructure() override;\n\nFree the memory required for the spatial data structure.\n"},
  {"BuildLocator", PyvtkModifiedBSPTree_BuildLocator, METH_VARARGS,
   "BuildLocator(self) -> None\nC++: void BuildLocator() override;\n\nBuild the locator from the input dataset. This will NOT do\nanything if UseExistingSearchStructure is on.\n"},
  {"ForceBuildLocator", PyvtkModifiedBSPTree_ForceBuildLocator, METH_VARARGS,
   "ForceBuildLocator(self) -> None\nC++: void ForceBuildLocator() override;\n\nBuild the locator from the input dataset (even if\nUseExistingSearchStructure is on).\n\nThis function is not pure virtual to maintain backwards\ncompatibility.\n"},
  {"ShallowCopy", PyvtkModifiedBSPTree_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, locator:vtkAbstractCellLocator) -> None\nC++: void ShallowCopy(vtkAbstractCellLocator *locator) override;\n\nShallow copy of a vtkModifiedBSPTree.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkModifiedBSPTree_Doc =
  "vtkModifiedBSPTree - Generate axis aligned BBox tree for ray-casting\nand other Locator based searches\n\n"
  "Superclass: vtkAbstractCellLocator\n\n"
  "vtkModifiedBSPTree creates an evenly balanced BSP tree using a top\n"
  "down implementation. Axis aligned split planes are found which evenly\n"
  "divide cells into two buckets. Generally a split plane will intersect\n"
  "some cells and these are usually stored in both child nodes of the\n"
  "current parent. (Or split into separate cells which we cannot\n"
  "consider in this case). Storing cells in multiple buckets creates\n"
  "problems associated with multiple tests against rays and increases\n"
  "the required storage as complex meshes will have many cells\n"
  "straddling a split plane (and further splits may cause multiple\n"
  "copies of these).\n\n"
  "During a discussion with Arno Formella in 1998 he suggested using a\n"
  "third child node to store objects which straddle split planes. I've\n"
  "not seen this published (Yes! - see below), but thought it worth\n"
  "trying. This implementation of the BSP tree creates a third child\n"
  "node for storing cells laying across split planes, the third cell may\n"
  "overlap the other two, but the two 'proper' nodes otherwise conform\n"
  "to usual BSP rules.\n\n"
  "The advantage of this implementation is cells only ever lie in one\n"
  "node and mailbox testing is avoided. All BBoxes are axis aligned and\n"
  "a ray cast uses an efficient search strategy based on near/far nodes\n"
  "and rejects all BBoxes using simple tests.\n\n"
  "For fast raytracing, 6 copies of cell lists are stored in each leaf\n"
  "node each list is in axis sorted order +/- x,y,z and cells are always\n"
  "tested in the direction of the ray dominant axis. Once an\n"
  "intersection is found any cell or BBox with a closest point further\n"
  "than the I-point can be instantly rejected and raytracing stops as\n"
  "soon as no nodes can be closer than the current best intersection\n"
  "point.\n\n"
  "The addition of the 'middle' node upsets the optimal balance of the\n"
  "tree, but is a minor overhead during the raytrace. Each child node is\n"
  "contracted such that it tightly fits all cells inside it, enabling\n"
  "further ray/box rejections.\n\n"
  "This class is intended for persons requiring many ray tests and is\n"
  "optimized for this purpose. As no cell ever lies in more than one\n"
  "leaf node, and parent nodes do not maintain cell lists, the memory\n"
  "overhead of the sorted cell lists is 6*num_cells*4 for 6 lists of\n"
  "ints, each num_cells in length. The memory requirement of the nodes\n"
  "themselves is usually of minor significance.\n\n"
  "Subdivision is controlled by MaxCellsPerNode - any node with more\n"
  "than this number will be subdivided providing a good split plane can\n"
  "be found and the max depth is not exceeded.\n\n"
  "The average cells per leaf will usually be around half the\n"
  "MaxCellsPerNode, though the middle node is usually sparsely populated\n"
  "and lowers the average slightly. The middle node will not be created\n"
  "when not needed. Subdividing down to very small cells per node is not\n"
  "generally suggested as then the 6 stored cell lists are effectively\n"
  "redundant.\n\n"
  "Values of MaxCellsPerNode of around 16->128 depending on dataset size\n"
  "will usually give good results.\n\n"
  "Cells are only sorted into 6 lists once - before tree creation, each\n"
  "node segments the lists and passes them down to the new child nodes\n"
  "whilst maintaining sorted order. This makes for an efficient\n"
  "subdivision strategy.\n\n"
  "@warning\n"
  "vtkModifiedBSPTree utilizes the following parent class parameters:\n"
  "- Level                       (default 8)\n"
  "- MaxLevel                    (default 8)\n"
  "- NumberOfCellsPerNode        (default 32)\n"
  "- UseExistingSearchStructure  (default false)\n"
  "- CacheCellBounds             (default true)\n\n"
  "vtkModifiedBSPTree does NOT utilize the following parameters:\n"
  "- Automatic\n"
  "- Tolerance\n"
  "- RetainCellLists\n\n"
  "NB. The following reference has been sent to\n"
  "me@Article{formella-1995-ray,\n"
  "    author =     \"Arno Formella and Christian Gill\",\n"
  "    title =      \"{Ray Tracing: A Quantitative Analysis and a New\n"
  "                  Practical Algorithm}\",\n"
  "    journal =    \"{The Visual Computer}\",\n"
  "    year =       \"{1995}\",\n"
  "    month =       dec,\n"
  "    pages =      \"{465--476}\",\n"
  "    volume =     \"{11}\",\n"
  "    number =     \"{9}\",\n"
  "    publisher =  \"{Springer}\",\n"
  "    keywords =   \"{ray tracing, space subdivision, plane traversal,\n"
  "                   octree, clustering, benchmark scenes}\",\n"
  "    annote =     \"{We present a new method to accelerate the process\n"
  "of\n"
  "                   finding nearest ray--object intersections in ray\n"
  "                   tracing. The algorithm consumes an amount of\n"
  "memory\n"
  "                   more or less linear in the number of objects. The\n"
  "basic\n"
  "                   ideas can be characterized with a modified\n"
  "BSP--tree\n"
  "                   and plane traversal. Plane traversal is a fast\n"
  "linear\n"
  "                   time algorithm to find the closest intersection\n"
  "point\n"
  "                   in a list of bounding volumes hit by a ray. We use\n"
  "                   plane traversal at every node of the high\n"
  "outdegree\n"
  "                   BSP--tree. Our implementation is competitive to\n"
  "fast\n"
  "                   ray tracing programs. We present a benchmark suite\n"
  "                   which allows for an extensive comparison of ray\n"
  "tracing\n"
  "                   algorithms.}\",\n"
  "  }\n\n"
  "@par Thanks:\n"
  " John Biddiscombe for developing and contributing this class\n\n"
  "@todo\n"
  "------------- Implement intersection heap for testing rays against\n"
  "    transparent objects\n\n"
  "@par Style:\n"
  "-------------- This class is currently maintained by J. Biddiscombe\n"
  "    who has specially requested that the code style not be modified\n"
  "    to the Kitware standard. Please respect the contribution of this\n"
  "    class by keeping the style as close as possible to the author's\n"
  "    original.\n\n"
  "@sa\n"
  "vtkAbstractCellLocator vtkCellLocator vtkStaticCellLocator\n"
  "vtkCellTreeLocator vtkOBBTree\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkModifiedBSPTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkModifiedBSPTree", // tp_name
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
  PyvtkModifiedBSPTree_Doc, // tp_doc
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

static vtkObjectBase *PyvtkModifiedBSPTree_StaticNew()
{
  return vtkModifiedBSPTree::New();
}

PyObject *PyvtkModifiedBSPTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkModifiedBSPTree_Type, PyvtkModifiedBSPTree_Methods,
    "vtkModifiedBSPTree",
 &PyvtkModifiedBSPTree_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractCellLocator");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkModifiedBSPTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkModifiedBSPTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkModifiedBSPTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

