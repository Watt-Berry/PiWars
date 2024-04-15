// python wrapper for vtkAMRInterpolatedVelocityField
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAMRInterpolatedVelocityField.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAMRInterpolatedVelocityField(PyObject *dict); }
extern "C" { PyObject *PyvtkAMRInterpolatedVelocityField_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
extern "C" { PyObject *PyvtkAbstractInterpolatedVelocityField_ClassNew(); }
#define DECLARED_PyvtkAbstractInterpolatedVelocityField_ClassNew
#endif

static PyObject *
PyvtkAMRInterpolatedVelocityField_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAMRInterpolatedVelocityField::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAMRInterpolatedVelocityField::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAMRInterpolatedVelocityField *tempr = vtkAMRInterpolatedVelocityField::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAMRInterpolatedVelocityField *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAMRInterpolatedVelocityField::NewInstance());

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
PyvtkAMRInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAMRInterpolatedVelocityField::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAMRInterpolatedVelocityField::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetAmrDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmrDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->SetAmrDataSet(temp0);
    }
    else
    {
      op->vtkAMRInterpolatedVelocityField::SetAmrDataSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetAmrDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmrDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOverlappingAMR *tempr = (ap.IsBound() ?
      op->GetAmrDataSet() :
      op->vtkAMRInterpolatedVelocityField::GetAmrDataSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetAMRData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAMRData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  vtkOverlappingAMR *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOverlappingAMR"))
  {
    if (ap.IsBound())
    {
      op->SetAMRData(temp0);
    }
    else
    {
      op->vtkAMRInterpolatedVelocityField::SetAMRData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_CopyParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::CopyParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::SetLastCellId(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAMRInterpolatedVelocityField_SetLastCellId(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s1(self, args);
    case 2:
      return PyvtkAMRInterpolatedVelocityField_SetLastCellId_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLastCellId");
  return nullptr;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_FunctionValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::FunctionValues(temp0, temp1));

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
PyvtkAMRInterpolatedVelocityField_FunctionValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

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
      op->vtkAMRInterpolatedVelocityField::FunctionValues(temp0, temp1, temp2));

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
PyvtkAMRInterpolatedVelocityField_FunctionValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkAMRInterpolatedVelocityField_FunctionValues_s1(self, args);
    case 3:
      return PyvtkAMRInterpolatedVelocityField_FunctionValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FunctionValues");
  return nullptr;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_FindGrid(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FindGrid");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkOverlappingAMR *temp1 = nullptr;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkOverlappingAMR") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = vtkAMRInterpolatedVelocityField::FindGrid(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastDataSetLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetLastDataSetLocation(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::GetLastDataSetLocation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
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
PyvtkAMRInterpolatedVelocityField_SetLastDataSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLastDataSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAMRInterpolatedVelocityField *op = static_cast<vtkAMRInterpolatedVelocityField *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->SetLastDataSet(temp0, temp1) :
      op->vtkAMRInterpolatedVelocityField::SetLastDataSet(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAMRInterpolatedVelocityField_Methods[] = {
  {"IsTypeOf", PyvtkAMRInterpolatedVelocityField_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAMRInterpolatedVelocityField_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAMRInterpolatedVelocityField_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAMRInterpolatedVelocityField\nC++: static vtkAMRInterpolatedVelocityField *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAMRInterpolatedVelocityField_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAMRInterpolatedVelocityField\nC++: vtkAMRInterpolatedVelocityField *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAMRInterpolatedVelocityField_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAMRInterpolatedVelocityField_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAmrDataSet", PyvtkAMRInterpolatedVelocityField_SetAmrDataSet, METH_VARARGS,
   "SetAmrDataSet(self, __a:vtkOverlappingAMR) -> None\nC++: virtual void SetAmrDataSet(vtkOverlappingAMR *)\n\nSpecify the AMR dataset to process.\n"},
  {"GetAmrDataSet", PyvtkAMRInterpolatedVelocityField_GetAmrDataSet, METH_VARARGS,
   "GetAmrDataSet(self) -> vtkOverlappingAMR\nC++: virtual vtkOverlappingAMR *GetAmrDataSet()\n\n"},
  {"SetAMRData", PyvtkAMRInterpolatedVelocityField_SetAMRData, METH_VARARGS,
   "SetAMRData(self, amr:vtkOverlappingAMR) -> None\nC++: void SetAMRData(vtkOverlappingAMR *amr)\n\n"},
  {"CopyParameters", PyvtkAMRInterpolatedVelocityField_CopyParameters, METH_VARARGS,
   "CopyParameters(self, from_:vtkAbstractInterpolatedVelocityField)\n    -> None\nC++: void CopyParameters(\n    vtkAbstractInterpolatedVelocityField *from) override;\n\nCopy essential parameters between instances of this class. This\ngenerally is used to copy from instance prototype to another, or\nto copy interpolators between thread instances.  Sub-classes can\ncontribute to the parameter copying process via chaining.\n"},
  {"SetLastCellId", PyvtkAMRInterpolatedVelocityField_SetLastCellId, METH_VARARGS,
   "SetLastCellId(self, c:int) -> None\nC++: void SetLastCellId(vtkIdType c) override;\nSetLastCellId(self, c:int, dataindex:int) -> None\nC++: void SetLastCellId(vtkIdType c, int dataindex) override;\n\nSet the cell id cached by the last evaluation.\n"},
  {"FunctionValues", PyvtkAMRInterpolatedVelocityField_FunctionValues, METH_VARARGS,
   "FunctionValues(self, x:[float, ...], f:[float, ...]) -> int\nC++: int FunctionValues(double *x, double *f) override;\nFunctionValues(self, x:[float, ...], f:[float, ...],\n    userData:Pointer) -> int\nC++: virtual int FunctionValues(double *x, double *f,\n    void *userData)\n\nEvaluate the velocity field f at point p. If it succeeds, then\nboth the last data set (this->LastDataSet) and the last data set\nlocation (this->LastLevel, this->LastId) will be set according to\nwhere p is found.  If it fails, either p is out of bound, in\nwhich case both the last data set and the last location will be\ninvalid or, in a multi-process setting, p is inbound but not on\nthe processor.  In the last case, the last data set location is\nstill valid\n"},
  {"FindGrid", PyvtkAMRInterpolatedVelocityField_FindGrid, METH_VARARGS,
   "FindGrid(q:[float, float, float], amrds:vtkOverlappingAMR,\n    level:int, gridId:int) -> bool\nC++: static bool FindGrid(double q[3], vtkOverlappingAMR *amrds,\n    unsigned int &level, unsigned int &gridId)\n\nHelper function to locator the grid within an AMR dataset.\n"},
  {"GetLastDataSetLocation", PyvtkAMRInterpolatedVelocityField_GetLastDataSetLocation, METH_VARARGS,
   "GetLastDataSetLocation(self, level:int, id:int) -> bool\nC++: bool GetLastDataSetLocation(unsigned int &level,\n    unsigned int &id)\n\nMethods to support local caching while searching for AMR\ndatasets.\n"},
  {"SetLastDataSet", PyvtkAMRInterpolatedVelocityField_SetLastDataSet, METH_VARARGS,
   "SetLastDataSet(self, level:int, id:int) -> bool\nC++: bool SetLastDataSet(int level, int id)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAMRInterpolatedVelocityField_Doc =
  "vtkAMRInterpolatedVelocityField - A concrete class for obtaining\n the interpolated velocity values at a point in AMR data.\n\n"
  "Superclass: vtkAbstractInterpolatedVelocityField\n\n"
  "The main functionality supported here is the point location inside\n"
  "vtkOverlappingAMR data set.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAMRInterpolatedVelocityField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkAMRInterpolatedVelocityField", // tp_name
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
  PyvtkAMRInterpolatedVelocityField_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAMRInterpolatedVelocityField_StaticNew()
{
  return vtkAMRInterpolatedVelocityField::New();
}

PyObject *PyvtkAMRInterpolatedVelocityField_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAMRInterpolatedVelocityField_Type, PyvtkAMRInterpolatedVelocityField_Methods,
    "vtkAMRInterpolatedVelocityField",
 &PyvtkAMRInterpolatedVelocityField_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractInterpolatedVelocityField_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAMRInterpolatedVelocityField(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAMRInterpolatedVelocityField_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAMRInterpolatedVelocityField", o) != 0)
  {
    Py_DECREF(o);
  }

}

