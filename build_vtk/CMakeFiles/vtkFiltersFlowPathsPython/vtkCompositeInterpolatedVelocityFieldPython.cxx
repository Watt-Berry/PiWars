// python wrapper for vtkCompositeInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCompositeInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
#endif

static PyObject *
PyvtkCompositeInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCompositeInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCompositeInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCompositeInterpolatedVelocityField *tempr = vtkCompositeInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCompositeInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCompositeInterpolatedVelocityField::NewInstance());

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
PyvtkCompositeInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCompositeInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCompositeInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_AddDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  vtkDataSet *temp0 = nullptr;
  size_t temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->AddDataSet(temp0, temp1);
    }
    else
    {
      op->vtkCompositeInterpolatedVelocityField::AddDataSet(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1) :
      op->vtkCompositeInterpolatedVelocityField::FunctionValues(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkCompositeInterpolatedVelocityField_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->FunctionValues(temp0, temp1, temp2) :
      op->vtkCompositeInterpolatedVelocityField::FunctionValues(temp0, temp1, temp2));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}

static PyObject *
PyvtkCompositeInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeInterpolatedVelocityField_FunctionValues_s1(self, args);
    case 3:
      return PyvtkCompositeInterpolatedVelocityField_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_InsideTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->InsideTest(temp0) :
      op->vtkCompositeInterpolatedVelocityField::InsideTest(temp0));

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
PyvtkCompositeInterpolatedVelocityField_SnapPointOnCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SnapPointOnCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SnapPointOnCell(temp0, temp1) :
      op->vtkCompositeInterpolatedVelocityField::SnapPointOnCell(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

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
PyvtkCompositeInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0, temp1);
    }
    else
    {
      op->vtkCompositeInterpolatedVelocityField::SetLastCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLastCellId(temp0);
    }
    else
    {
      op->vtkCompositeInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCompositeInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCompositeInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 1:
      return PyvtkCompositeInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLastDataSetIndex() :
      op->vtkCompositeInterpolatedVelocityField::GetLastDataSetIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetCacheDataSetHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheDataSetHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheDataSetHit() :
      op->vtkCompositeInterpolatedVelocityField::GetCacheDataSetHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_GetCacheDataSetMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheDataSetMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheDataSetMiss() :
      op->vtkCompositeInterpolatedVelocityField::GetCacheDataSetMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCompositeInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCompositeInterpolatedVelocityField *op = static_cast<vtkCompositeInterpolatedVelocityField *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->CopyParameters(temp0);
    }
    else
    {
      op->vtkCompositeInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCompositeInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCompositeInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCompositeInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCompositeInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkCompositeInterpolatedVelocityField\nC++: static vtkCompositeInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCompositeInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCompositeInterpolatedVelocityField\nC++: vtkCompositeInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCompositeInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCompositeInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDataSet", PyvtkCompositeInterpolatedVelocityField_AddDataSet, METH_VARARGS,
   "AddDataSet(self, dataset:vtkDataSet, maxCellSize:int=0) -> None\nC++: virtual void AddDataSet(vtkDataSet *dataset,\n    size_t maxCellSize=0)\n\nAdd a dataset for implicit velocity function evaluation. If more\nthan one dataset is added, the evaluation point is searched in\nall until a match is found. THIS FUNCTION DOES NOT CHANGE THE\nREFERENCE COUNT OF dataset FOR THREAD SAFETY REASONS. MaxCellSize\ncan be passed to avoid recomputing GetMaxCellSize().\n"},
  {"FunctionValues", PyvtkCompositeInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\nFunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: virtual int FunctionValues(double *x, double *f,\n    void *userData)\n\nEvaluate the velocity field f at point (x, y, z).\n"},
  {"InsideTest", PyvtkCompositeInterpolatedVelocityField_InsideTest, METH_VARARGS,
   "InsideTest(self, x:[float, ...]) -> int\nC++: int InsideTest(double *x)\n\nCheck if point x is inside the dataset.\n"},
  {"SnapPointOnCell", PyvtkCompositeInterpolatedVelocityField_SnapPointOnCell, METH_VARARGS,
   "SnapPointOnCell(self, pOrigin:[float, ...], pProj:[float, ...])\n    -> int\nC++: virtual int SnapPointOnCell(double *pOrigin, double *pProj)\n\nProject the provided point on current cell, current dataset.\n"},
  {"SetLastCellId", PyvtkCompositeInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "SetLastCellId(self, c:int, dataindex:int) -> None\nC++: void SetLastCellId(vtkIdType c, int dataindex) override;\nSetLastCellId(self, c:int) -> None\nC++: void SetLastCellId(vtkIdType c) override;\n\nSet the cell id cached by the last evaluation within a specified\ndataset.\n"},
  {"GetLastDataSetIndex", PyvtkCompositeInterpolatedVelocityField_GetLastDataSetIndex, METH_VARARGS,
   "GetLastDataSetIndex(self) -> int\nC++: virtual int GetLastDataSetIndex()\n\nGet the most recently visited dataset and its id. The dataset is\nused for a guess regarding where the next point will be, without\nsearching through all datasets. When setting the last dataset,\ncare is needed as no reference counting or checks are performed.\nThis feature is intended for custom interpolators only that cache\ndatasets independently.\n"},
  {"GetCacheDataSetHit", PyvtkCompositeInterpolatedVelocityField_GetCacheDataSetHit, METH_VARARGS,
   "GetCacheDataSetHit(self) -> int\nC++: virtual int GetCacheDataSetHit()\n\nGet Cache DataSet hits and misses.\n"},
  {"GetCacheDataSetMiss", PyvtkCompositeInterpolatedVelocityField_GetCacheDataSetMiss, METH_VARARGS,
   "GetCacheDataSetMiss(self) -> int\nC++: virtual int GetCacheDataSetMiss()\n\n"},
  {"CopyParameters", PyvtkCompositeInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkAbstractInterpolatedVelocityField)\n    -> None\nC++: void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from) override;\n\nCopy essential parameters between instances of this class. See\nvtkAbstractInterpolatedVelocityField for more information.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCompositeInterpolatedVelocityField_Doc =
  "vtkCompositeInterpolatedVelocityField - An abstract class for\n obtaining the interpolated velocity values at a point\n\n"
  "Superclass: vtkAbstractInterpolatedVelocityField\n\n"
  "vtkCompositeInterpolatedVelocityField acts as a continuous velocity\n"
  "field\n"
  " by performing cell interpolation on one or more underlying\n"
  "vtkDataSets. That is,\n"
  " composite datasets are combined to create a continuous velocity\n"
  "field. The default\n"
  " strategy is to use the closest point strategy.\n\n"
  "@warning\n"
  " vtkCompositeInterpolatedVelocityField is not thread safe. A new\n"
  "instance\n"
  " should be created by each thread.\n\n"
  "@sa\n"
  " vtkAbstractInterpolatedVelocityField vtkAMRInterpolatedVelocityField\n"
  " vtkGenericInterpolatedVelocityField\n"
  "vtkCachingInterpolatedVelocityField\n"
  " vtkTemporalInterpolatedVelocityField vtkFunctionSet vtkStreamTracer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCompositeInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkCompositeInterpolatedVelocityField", // tp_name
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
  PyvtkCompositeInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCompositeInterpolatedVelocityField_StaticNew()
{
  return vtkCompositeInterpolatedVelocityField::New();
}

PyObject *PyvtkCompositeInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCompositeInterpolatedVelocityField_Type, PyvtkCompositeInterpolatedVelocityField_Methods,
    "vtkCompositeInterpolatedVelocityField",
 &PyvtkCompositeInterpolatedVelocityField_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCompositeInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCompositeInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCompositeInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

