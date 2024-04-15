// python wrapper for vtkCachingInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCachingInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCachingInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkCachingInterpolatedVelocityField_ClassNew(); }


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCachingInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCachingInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCachingInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCachingInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCachingInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCachingInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCachingInterpolatedVelocityField *tempr = vtkCachingInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCachingInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCachingInterpolatedVelocityField::NewInstance());

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
PyvtkCachingInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCachingInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCachingInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCachingInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCachingInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->vtkCachingInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkCachingInterpolatedVelocityField_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->vtkCachingInterpolatedVelocityField::FunctionValues(temp0, temp1, temp2));

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
PyvtkCachingInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCachingInterpolatedVelocityField_FunctionValues_s1(self, args);
    case 3:
      return PyvtkCachingInterpolatedVelocityField_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_InsideTest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsideTest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->vtkCachingInterpolatedVelocityField::InsideTest(temp0));

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
PyvtkCachingInterpolatedVelocityField_SetDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  int temp0;
  vtkDataSet *temp1 = nullptr;
  bool temp2 = false;
  vtkAbstractCellLocator *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataSet") &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkAbstractCellLocator"))
  {
    if (ap.IsBound())
    {
      op->SetDataSet(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SetDataSet(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetVectorsSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorsSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVectorsSelection() :
      op->vtkCachingInterpolatedVelocityField::GetVectorsSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SelectVectors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectVectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SelectVectors(temp0);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SelectVectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_SetLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLastCellInfo(temp0, temp1);
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::SetLastCellInfo(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearLastCellInfo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearLastCellInfo();
    }
    else
    {
      op->vtkCachingInterpolatedVelocityField::ClearLastCellInfo();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetLastWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

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
      op->GetLastWeights(temp0) :
      op->vtkCachingInterpolatedVelocityField::GetLastWeights(temp0));

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
PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastLocalCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->GetLastLocalCoordinates(temp0) :
      op->vtkCachingInterpolatedVelocityField::GetLastLocalCoordinates(temp0));

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
PyvtkCachingInterpolatedVelocityField_GetCellCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetCellCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetCacheHit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataSetCacheHit() :
      op->vtkCachingInterpolatedVelocityField::GetDataSetCacheHit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCachingInterpolatedVelocityField_GetCacheMiss(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCacheMiss");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCachingInterpolatedVelocityField *op = static_cast<vtkCachingInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCacheMiss() :
      op->vtkCachingInterpolatedVelocityField::GetCacheMiss());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCachingInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkCachingInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCachingInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCachingInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkCachingInterpolatedVelocityField\nC++: static vtkCachingInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCachingInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCachingInterpolatedVelocityField\nC++: vtkCachingInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCachingInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCachingInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FunctionValues", PyvtkCachingInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\nFunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: virtual int FunctionValues(double *x, double *f,\n    void *userData)\n\nEvaluate the velocity field, f={u,v,w}, at {x, y, z}. returns 1\nif valid, 0 if test failed\n"},
  {"InsideTest", PyvtkCachingInterpolatedVelocityField_InsideTest, METH_VARARGS,
   "InsideTest(self, x:[float, ...]) -> int\nC++: virtual int InsideTest(double *x)\n\n"},
  {"SetDataSet", PyvtkCachingInterpolatedVelocityField_SetDataSet, METH_VARARGS,
   "SetDataSet(self, I:int, dataset:vtkDataSet, staticdataset:bool,\n    locator:vtkAbstractCellLocator) -> None\nC++: virtual void SetDataSet(int I, vtkDataSet *dataset,\n    bool staticdataset, vtkAbstractCellLocator *locator)\n\nAdd a dataset used by the interpolation function evaluation.\n"},
  {"GetVectorsSelection", PyvtkCachingInterpolatedVelocityField_GetVectorsSelection, METH_VARARGS,
   "GetVectorsSelection(self) -> str\nC++: virtual char *GetVectorsSelection()\n\nIf you want to work with an arbitrary vector array, then set its\nname here. By default this in nullptr and the filter will use the\nactive vector array.\n"},
  {"SelectVectors", PyvtkCachingInterpolatedVelocityField_SelectVectors, METH_VARARGS,
   "SelectVectors(self, fieldName:str) -> None\nC++: void SelectVectors(const char *fieldName)\n\n"},
  {"SetLastCellInfo", PyvtkCachingInterpolatedVelocityField_SetLastCellInfo, METH_VARARGS,
   "SetLastCellInfo(self, c:int, datasetindex:int) -> None\nC++: void SetLastCellInfo(vtkIdType c, int datasetindex)\n\nSet LastCellId to c and LastCacheIndex datasetindex, cached from\nlast evaluation. If c isn't -1 then the corresponding cell is\nstored in Cache->Cell. These values should be valid or an\nassertion will be triggered.\n"},
  {"ClearLastCellInfo", PyvtkCachingInterpolatedVelocityField_ClearLastCellInfo, METH_VARARGS,
   "ClearLastCellInfo(self) -> None\nC++: void ClearLastCellInfo()\n\nSet LastCellId to -1 and Cache to nullptr so that the next search\ndoes not start from the previous cell.\n"},
  {"GetLastWeights", PyvtkCachingInterpolatedVelocityField_GetLastWeights, METH_VARARGS,
   "GetLastWeights(self, w:[float, ...]) -> int\nC++: int GetLastWeights(double *w)\n\nReturns the interpolation weights/pcoords cached from last\nevaluation if the cached cell is valid (returns 1). Otherwise, it\ndoes not change w and returns 0.\n"},
  {"GetLastLocalCoordinates", PyvtkCachingInterpolatedVelocityField_GetLastLocalCoordinates, METH_VARARGS,
   "GetLastLocalCoordinates(self, pcoords:[float, float, float])\n    -> int\nC++: int GetLastLocalCoordinates(double pcoords[3])\n\n"},
  {"GetCellCacheHit", PyvtkCachingInterpolatedVelocityField_GetCellCacheHit, METH_VARARGS,
   "GetCellCacheHit(self) -> int\nC++: virtual int GetCellCacheHit()\n\nCaching statistics.\n"},
  {"GetDataSetCacheHit", PyvtkCachingInterpolatedVelocityField_GetDataSetCacheHit, METH_VARARGS,
   "GetDataSetCacheHit(self) -> int\nC++: virtual int GetDataSetCacheHit()\n\n"},
  {"GetCacheMiss", PyvtkCachingInterpolatedVelocityField_GetCacheMiss, METH_VARARGS,
   "GetCacheMiss(self) -> int\nC++: virtual int GetCacheMiss()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCachingInterpolatedVelocityField_Doc =
  "vtkCachingInterpolatedVelocityField - Interface for obtaining\ninterpolated velocity values\n\n"
  "Superclass: vtkFunctionSet\n\n"
  "vtkCachingInterpolatedVelocityField acts as a continuous velocity\n"
  "field by performing cell interpolation on the underlying vtkDataSet.\n"
  "This is a concrete sub-class of vtkFunctionSet with\n"
  "NumberOfIndependentVariables = 4 (x,y,z,t) and NumberOfFunctions = 3\n"
  "(u,v,w). Normally, every time an evaluation is performed, the cell\n"
  "which contains the point (x,y,z) has to be found by calling FindCell.\n"
  "This is a computationally expensive operation. In certain cases, the\n"
  "cell search can be avoided or shortened by providing a guess for the\n"
  "cell id. For example, in streamline integration, the next evaluation\n"
  "is usually in the same or a neighbour cell. For this reason,\n"
  "vtkCachingInterpolatedVelocityField stores the last cell id. If\n"
  "caching is turned on, it uses this id as the starting point.\n\n"
  "@warning\n"
  "vtkCachingInterpolatedVelocityField is not thread safe. A new\n"
  "instance should be created by each thread.\n\n"
  "@sa\n"
  "vtkFunctionSet vtkStreamTracer\n\n"
  "@todo Need to clean up style to match vtk/Kitware standards. Please\n"
  "help.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCachingInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkCachingInterpolatedVelocityField", // tp_name
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
  PyvtkCachingInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCachingInterpolatedVelocityField_StaticNew()
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated class vtkCachingInterpolatedVelocityField."
    " (" "Use vtkCompositeInterpolatedVelocityField instead of vtkCachingInterpolatedVelocityField and set the desired strategy." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  return vtkCachingInterpolatedVelocityField::New();
}

PyObject *PyvtkCachingInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCachingInterpolatedVelocityField_Type, PyvtkCachingInterpolatedVelocityField_Methods,
    "vtkCachingInterpolatedVelocityField",
 &PyvtkCachingInterpolatedVelocityField_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkFunctionSet");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCachingInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCachingInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCachingInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

