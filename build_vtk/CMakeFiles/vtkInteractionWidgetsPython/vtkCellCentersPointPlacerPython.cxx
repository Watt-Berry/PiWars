// python wrapper for vtkCellCentersPointPlacer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellCentersPointPlacer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellCentersPointPlacer(PyObject *dict); }
extern "C" { PyObject *PyvtkCellCentersPointPlacer_ClassNew(); }

#ifndef DECLARED_PyvtkPointPlacer_ClassNew
extern "C" { PyObject *PyvtkPointPlacer_ClassNew(); }
#define DECLARED_PyvtkPointPlacer_ClassNew
#endif

static PyObject *
PyvtkCellCentersPointPlacer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellCentersPointPlacer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellCentersPointPlacer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellCentersPointPlacer *tempr = vtkCellCentersPointPlacer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellCentersPointPlacer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellCentersPointPlacer::NewInstance());

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
PyvtkCellCentersPointPlacer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellCentersPointPlacer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellCentersPointPlacer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_AddProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->AddProp(temp0);
    }
    else
    {
      op->vtkCellCentersPointPlacer::AddProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_RemoveViewProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveViewProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->RemoveViewProp(temp0);
    }
    else
    {
      op->vtkCellCentersPointPlacer::RemoveViewProp(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_RemoveAllProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllProps();
    }
    else
    {
      op->vtkCellCentersPointPlacer::RemoveAllProps();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_HasProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    int tempr = (ap.IsBound() ?
      op->HasProp(temp0) :
      op->vtkCellCentersPointPlacer::HasProp(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetNumberOfProps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProps() :
      op->vtkCellCentersPointPlacer::GetNumberOfProps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_ComputeWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 9;
  double temp3[9];
  double save3[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3) :
      op->vtkCellCentersPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3));

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

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellCentersPointPlacer_ComputeWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 9;
  double temp4[9];
  double save4[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCellCentersPointPlacer::ComputeWorldPosition(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCellCentersPointPlacer_ComputeWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkCellCentersPointPlacer_ComputeWorldPosition_s1(self, args);
    case 5:
      return PyvtkCellCentersPointPlacer_ComputeWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkCellCentersPointPlacer_ValidateWorldPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0) :
      op->vtkCellCentersPointPlacer::ValidateWorldPosition(temp0));

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
PyvtkCellCentersPointPlacer_ValidateWorldPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateWorldPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 9;
  double temp1[9];
  double save1[9];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateWorldPosition(temp0, temp1) :
      op->vtkCellCentersPointPlacer::ValidateWorldPosition(temp0, temp1));

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
PyvtkCellCentersPointPlacer_ValidateWorldPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkCellCentersPointPlacer_ValidateWorldPosition_s1(self, args);
    case 2:
      return PyvtkCellCentersPointPlacer_ValidateWorldPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ValidateWorldPosition");
  return nullptr;
}


static PyObject *
PyvtkCellCentersPointPlacer_ValidateDisplayPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ValidateDisplayPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  vtkRenderer *temp0 = nullptr;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ValidateDisplayPosition(temp0, temp1) :
      op->vtkCellCentersPointPlacer::ValidateDisplayPosition(temp0, temp1));

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
PyvtkCellCentersPointPlacer_GetCellPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellPicker *tempr = (ap.IsBound() ?
      op->GetCellPicker() :
      op->vtkCellCentersPointPlacer::GetCellPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_SetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMode(temp0);
    }
    else
    {
      op->vtkCellCentersPointPlacer::SetMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellCentersPointPlacer_GetMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellCentersPointPlacer *op = static_cast<vtkCellCentersPointPlacer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMode() :
      op->vtkCellCentersPointPlacer::GetMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellCentersPointPlacer_Methods[] = {
  {"IsTypeOf", PyvtkCellCentersPointPlacer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellCentersPointPlacer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellCentersPointPlacer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellCentersPointPlacer\nC++: static vtkCellCentersPointPlacer *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellCentersPointPlacer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellCentersPointPlacer\nC++: vtkCellCentersPointPlacer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellCentersPointPlacer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellCentersPointPlacer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddProp", PyvtkCellCentersPointPlacer_AddProp, METH_VARARGS,
   "AddProp(self, __a:vtkProp) -> None\nC++: virtual void AddProp(vtkProp *)\n\nAdd an actor (that represents a terrain in a rendered scene) to\nthe list. Only props in this list are considered by the\nPointPlacer\n"},
  {"RemoveViewProp", PyvtkCellCentersPointPlacer_RemoveViewProp, METH_VARARGS,
   "RemoveViewProp(self, prop:vtkProp) -> None\nC++: virtual void RemoveViewProp(vtkProp *prop)\n\nAdd an actor (that represents a terrain in a rendered scene) to\nthe list. Only props in this list are considered by the\nPointPlacer\n"},
  {"RemoveAllProps", PyvtkCellCentersPointPlacer_RemoveAllProps, METH_VARARGS,
   "RemoveAllProps(self) -> None\nC++: virtual void RemoveAllProps()\n\nAdd an actor (that represents a terrain in a rendered scene) to\nthe list. Only props in this list are considered by the\nPointPlacer\n"},
  {"HasProp", PyvtkCellCentersPointPlacer_HasProp, METH_VARARGS,
   "HasProp(self, __a:vtkProp) -> int\nC++: vtkTypeBool HasProp(vtkProp *)\n\nAdd an actor (that represents a terrain in a rendered scene) to\nthe list. Only props in this list are considered by the\nPointPlacer\n"},
  {"GetNumberOfProps", PyvtkCellCentersPointPlacer_GetNumberOfProps, METH_VARARGS,
   "GetNumberOfProps(self) -> int\nC++: int GetNumberOfProps()\n\nAdd an actor (that represents a terrain in a rendered scene) to\nthe list. Only props in this list are considered by the\nPointPlacer\n"},
  {"ComputeWorldPosition", PyvtkCellCentersPointPlacer_ComputeWorldPosition, METH_VARARGS,
   "ComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], worldPos:[float, float, float], worldOrient:[float,\n    float, float, float, float, float, float, float, float])\n    -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double worldPos[3],\n    double worldOrient[9]) override;\nComputeWorldPosition(self, ren:vtkRenderer, displayPos:[float,\n    float], refWorldPos:[float, float, float], worldPos:[float,\n    float, float], worldOrient:[float, float, float, float, float,\n     float, float, float, float]) -> int\nC++: int ComputeWorldPosition(vtkRenderer *ren,\n    double displayPos[2], double refWorldPos[3],\n    double worldPos[3], double worldOrient[9]) override;\n\nGiven a renderer and a display position in pixel coordinates,\ncompute the world position and orientation where this point will\nbe placed. This method is typically used by the representation to\nplace the point initially. For the Terrain point placer this\ncomputes world points that lie at the specified height above the\nterrain.\n"},
  {"ValidateWorldPosition", PyvtkCellCentersPointPlacer_ValidateWorldPosition, METH_VARARGS,
   "ValidateWorldPosition(self, worldPos:[float, float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3]) override;\nValidateWorldPosition(self, worldPos:[float, float, float],\n    worldOrient:[float, float, float, float, float, float, float,\n    float, float]) -> int\nC++: int ValidateWorldPosition(double worldPos[3],\n    double worldOrient[9]) override;\n\nGiven a world position check the validity of this position\naccording to the constraints of the placer\n"},
  {"ValidateDisplayPosition", PyvtkCellCentersPointPlacer_ValidateDisplayPosition, METH_VARARGS,
   "ValidateDisplayPosition(self, __a:vtkRenderer, displayPos:[float,\n    float]) -> int\nC++: int ValidateDisplayPosition(vtkRenderer *,\n    double displayPos[2]) override;\n\nGiven a display position, check the validity of this position.\n"},
  {"GetCellPicker", PyvtkCellCentersPointPlacer_GetCellPicker, METH_VARARGS,
   "GetCellPicker(self) -> vtkCellPicker\nC++: virtual vtkCellPicker *GetCellPicker()\n\nGet the Prop picker.\n"},
  {"SetMode", PyvtkCellCentersPointPlacer_SetMode, METH_VARARGS,
   "SetMode(self, _arg:int) -> None\nC++: virtual void SetMode(int _arg)\n\nModes to change the point placement. Parametric center picks the\nparametric center within the cell. CellPointsMean picks the\naverage of all points in the cell. When the mode is None, the\ninput point is passed through unmodified. Default is\nCellPointsMean.\n"},
  {"GetMode", PyvtkCellCentersPointPlacer_GetMode, METH_VARARGS,
   "GetMode(self) -> int\nC++: virtual int GetMode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellCentersPointPlacer_Doc =
  "vtkCellCentersPointPlacer - Snaps points at the center of a cell\n\n"
  "Superclass: vtkPointPlacer\n\n"
  "vtkCellCentersPointPlacer is a class to snap points on the center of\n"
  "cells. The class has 3 modes. In the ParametricCenter mode, it snaps\n"
  "points to the parametric center of the cell (see vtkCell). In\n"
  "CellPointsMean mode, points are snapped to the mean of the points in\n"
  "the cell. In 'None' mode, no snapping is performed. The computed\n"
  "world position is the picked position within the cell.\n\n"
  "@par Usage: The actors that render data and wish to be considered for\n"
  "placement by this placer are added to the list asplacer->AddProp(\n"
  "actor );\n\n"
  "@sa\n"
  "vtkPointPlacer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellCentersPointPlacer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkCellCentersPointPlacer", // tp_name
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
  PyvtkCellCentersPointPlacer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellCentersPointPlacer_StaticNew()
{
  return vtkCellCentersPointPlacer::New();
}

PyObject *PyvtkCellCentersPointPlacer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellCentersPointPlacer_Type, PyvtkCellCentersPointPlacer_Methods,
    "vtkCellCentersPointPlacer",
 &PyvtkCellCentersPointPlacer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointPlacer_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "ParametricCenter", vtkCellCentersPointPlacer::ParametricCenter },
        { "CellPointsMean", vtkCellCentersPointPlacer::CellPointsMean },
        { "None_", vtkCellCentersPointPlacer::None },
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

void PyVTKAddFile_vtkCellCentersPointPlacer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellCentersPointPlacer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellCentersPointPlacer", o) != 0)
  {
    Py_DECREF(o);
  }

}

