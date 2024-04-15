// python wrapper for vtkDataSetEdgeSubdivisionCriterion
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetEdgeSubdivisionCriterion.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetEdgeSubdivisionCriterion_ClassNew(); }

#ifndef DECLARED_PyvtkEdgeSubdivisionCriterion_ClassNew
extern "C" { PyObject *PyvtkEdgeSubdivisionCriterion_ClassNew(); }
#define DECLARED_PyvtkEdgeSubdivisionCriterion_ClassNew
#endif

static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetEdgeSubdivisionCriterion::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetEdgeSubdivisionCriterion *tempr = vtkDataSetEdgeSubdivisionCriterion::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetEdgeSubdivisionCriterion *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetEdgeSubdivisionCriterion::NewInstance());

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
PyvtkDataSetEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetMesh(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetMesh(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetMesh() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetMesh());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellId(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long *tempr = (ap.IsBound() ?
      &op->GetCellId() :
      &op->vtkDataSetEdgeSubdivisionCriterion::GetCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(*tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateLocationAndFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocationAndFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    bool tempr = (ap.IsBound() ?
      op->EvaluateLocationAndFields(temp0, temp1) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateLocationAndFields(temp0, temp1));

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
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateFields");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    double *tempr = (ap.IsBound() ?
      op->EvaluateFields(temp0, temp1, temp2) :
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateFields(temp0, temp1, temp2));

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
PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePointDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluatePointDataField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluatePointDataField(temp0, temp1, temp2);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateCellDataField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EvaluateCellDataField(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::EvaluateCellDataField(temp0, temp1, temp2);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChordError2(temp0);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetChordError2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChordError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetChordError2() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetChordError2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldError2(temp0, temp1);
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::SetFieldError2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFieldError2(temp0) :
      op->vtkDataSetEdgeSubdivisionCriterion::GetFieldError2(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetFieldError2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetFieldError2();
    }
    else
    {
      op->vtkDataSetEdgeSubdivisionCriterion::ResetFieldError2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActiveFieldCriteria");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetEdgeSubdivisionCriterion *op = static_cast<vtkDataSetEdgeSubdivisionCriterion *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActiveFieldCriteria() :
      op->vtkDataSetEdgeSubdivisionCriterion::GetActiveFieldCriteria());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetEdgeSubdivisionCriterion_Methods[] = {
  {"IsTypeOf", PyvtkDataSetEdgeSubdivisionCriterion_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetEdgeSubdivisionCriterion_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetEdgeSubdivisionCriterion_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkDataSetEdgeSubdivisionCriterion\nC++: static vtkDataSetEdgeSubdivisionCriterion *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetEdgeSubdivisionCriterion_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetEdgeSubdivisionCriterion\nC++: vtkDataSetEdgeSubdivisionCriterion *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetEdgeSubdivisionCriterion_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMesh", PyvtkDataSetEdgeSubdivisionCriterion_SetMesh, METH_VARARGS,
   "SetMesh(self, __a:vtkDataSet) -> None\nC++: virtual void SetMesh(vtkDataSet *)\n\n"},
  {"GetMesh", PyvtkDataSetEdgeSubdivisionCriterion_GetMesh, METH_VARARGS,
   "GetMesh(self) -> vtkDataSet\nC++: vtkDataSet *GetMesh()\n\n"},
  {"SetCellId", PyvtkDataSetEdgeSubdivisionCriterion_SetCellId, METH_VARARGS,
   "SetCellId(self, cell:int) -> None\nC++: virtual void SetCellId(vtkIdType cell)\n\n"},
  {"GetCellId", PyvtkDataSetEdgeSubdivisionCriterion_GetCellId, METH_VARARGS,
   "GetCellId(self) -> int\nC++: vtkIdType &GetCellId()\n\n"},
  {"GetCell", PyvtkDataSetEdgeSubdivisionCriterion_GetCell, METH_VARARGS,
   "GetCell(self) -> vtkCell\nC++: vtkCell *GetCell()\n\n"},
  {"EvaluateLocationAndFields", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateLocationAndFields, METH_VARARGS,
   "EvaluateLocationAndFields(self, midpt:[float, ...],\n    field_start:int) -> bool\nC++: bool EvaluateLocationAndFields(double *midpt,\n    int field_start) override;\n\nYou must implement this member function in a subclass. It will be\ncalled by vtkStreamingTessellator for each edge in each primitive\nthat vtkStreamingTessellator generates.\n"},
  {"EvaluateFields", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateFields, METH_VARARGS,
   "EvaluateFields(self, vertex:[float, ...], weights:[float, ...],\n    field_start:int) -> Pointer\nC++: double *EvaluateFields(double *vertex, double *weights,\n    int field_start)\n\nEvaluate all of the fields that should be output with the given\nvertex and store them just past the parametric coordinates of\nvertex, at the offsets given\nbyvtkEdgeSubdivisionCriterion::GetFieldOffsets() plus\nfield_start.field_start contains the number of world-space\ncoordinates (always 3) plus the embedding dimension (the size of\nthe parameter-space in which the cell is embedded). It will range\nbetween 3 and 6, inclusive.\n\n* You must have called SetCellId() before calling this routine or\nthere\n* will not be a mesh over which to evaluate the fields.\n\n* You must have called\n  vtkEdgeSubdivisionCriterion::PassDefaultFields()\n* or vtkEdgeSubdivisionCriterion::PassField() or there will be no\nfields\n* defined for the output vertex.\n\n* This routine is public and returns its input argument so that\n  it\n* may be used as an argument to\n* vtkStreamingTessellator::AdaptivelySamplekFacet():\n* \n * vtkStreamingTessellator* t = vtkStreamingTessellator::New();\n * vtkEdgeSubdivisionCriterion* s;\n * ...\n * t->AdaptivelySample1Facet( s->EvaluateFields( p0 ), s->EvaluateFields( p1 ) );\n * ...\n * \n* Although this will work, using EvaluateFields() in this manner\n* should be avoided. It's much more efficient to fetch the corner\nvalues\n* for each attribute and copy them into p0, p1, ... as opposed to\n* performing shape function evaluations. The only case where you\n  wouldn't\n* want to do this is when the field you are interpolating is\n  discontinuous\n* at cell borders, such as with a discontinuous galerkin method\n  or when\n* all the Gauss points for quadrature are interior to the cell.\n\n* The final argument, weights, is the array of weights to apply\n  to each\n* point's data when interpolating the field. This is returned by\n* vtkCell::EvaluateLocation() when evaluating the geometry.\n"},
  {"EvaluatePointDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluatePointDataField, METH_VARARGS,
   "EvaluatePointDataField(self, result:[float, ...], weights:[float,\n    ...], field:int) -> None\nC++: void EvaluatePointDataField(double *result, double *weights,\n    int field)\n\nEvaluate either a cell or nodal field. This exists because of the\nfunky way that Exodus data will be handled. Sure, it's a hack,\nbut what are ya gonna do?\n"},
  {"EvaluateCellDataField", PyvtkDataSetEdgeSubdivisionCriterion_EvaluateCellDataField, METH_VARARGS,
   "EvaluateCellDataField(self, result:[float, ...], weights:[float,\n    ...], field:int) -> None\nC++: void EvaluateCellDataField(double *result, double *weights,\n    int field)\n\n"},
  {"SetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_SetChordError2, METH_VARARGS,
   "SetChordError2(self, _arg:float) -> None\nC++: virtual void SetChordError2(double _arg)\n\nGet/Set the square of the allowable chord error at any edge's\nmidpoint. This value is used by EvaluateLocationAndFields.\n"},
  {"GetChordError2", PyvtkDataSetEdgeSubdivisionCriterion_GetChordError2, METH_VARARGS,
   "GetChordError2(self) -> float\nC++: virtual double GetChordError2()\n\n"},
  {"SetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_SetFieldError2, METH_VARARGS,
   "SetFieldError2(self, s:int, err:float) -> None\nC++: virtual void SetFieldError2(int s, double err)\n\nGet/Set the square of the allowable error magnitude for the\nscalar field s at any edge's midpoint. A value less than or equal\nto 0 indicates that the field should not be used as a criterion\nfor subdivision.\n"},
  {"GetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_GetFieldError2, METH_VARARGS,
   "GetFieldError2(self, s:int) -> float\nC++: double GetFieldError2(int s)\n\n"},
  {"ResetFieldError2", PyvtkDataSetEdgeSubdivisionCriterion_ResetFieldError2, METH_VARARGS,
   "ResetFieldError2(self) -> None\nC++: virtual void ResetFieldError2()\n\nTell the subdivider not to use any field values as subdivision\ncriteria. Effectively calls SetFieldError2( a, -1. ) for all\nfields.\n"},
  {"GetActiveFieldCriteria", PyvtkDataSetEdgeSubdivisionCriterion_GetActiveFieldCriteria, METH_VARARGS,
   "GetActiveFieldCriteria(self) -> int\nC++: virtual int GetActiveFieldCriteria()\n\nReturn a bitfield specifying which FieldError2 criteria are\npositive (i.e., actively used to decide edge subdivisions). This\nis stored as separate state to make subdivisions go faster.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetEdgeSubdivisionCriterion_Doc =
  "vtkDataSetEdgeSubdivisionCriterion - a subclass of\nvtkEdgeSubdivisionCriterion for vtkDataSet objects.\n\n"
  "Superclass: vtkEdgeSubdivisionCriterion\n\n"
  "This is a subclass of vtkEdgeSubdivisionCriterion that is used for\n"
  "tessellating cells of a vtkDataSet, particularly nonlinear cells.\n\n"
  "It provides functions for setting the current cell being tessellated\n"
  "and a convenience routine, EvaluateFields() to evaluate field values\n"
  "at a point. You should call EvaluateFields() from inside\n"
  "EvaluateLocationAndFields() whenever the result of\n"
  "EvaluateLocationAndFields() will be true. Otherwise, do not call\n"
  "EvaluateFields() as the midpoint is about to be discarded.\n"
  "(Implementor's note</i>: This isn't true if UGLY_ASPECT_RATIO_HACK\n"
  "has been defined. But in that case, we don't want the exact field\n"
  "values; we need the linearly interpolated ones at the midpoint for\n"
  "continuity.)\n\n"
  "@sa\n"
  "vtkEdgeSubdivisionCriterion\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetEdgeSubdivisionCriterion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDataSetEdgeSubdivisionCriterion", // tp_name
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
  PyvtkDataSetEdgeSubdivisionCriterion_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetEdgeSubdivisionCriterion_StaticNew()
{
  return vtkDataSetEdgeSubdivisionCriterion::New();
}

PyObject *PyvtkDataSetEdgeSubdivisionCriterion_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetEdgeSubdivisionCriterion_Type, PyvtkDataSetEdgeSubdivisionCriterion_Methods,
    "vtkDataSetEdgeSubdivisionCriterion",
 &PyvtkDataSetEdgeSubdivisionCriterion_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkEdgeSubdivisionCriterion_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetEdgeSubdivisionCriterion(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetEdgeSubdivisionCriterion_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetEdgeSubdivisionCriterion", o) != 0)
  {
    Py_DECREF(o);
  }

}

