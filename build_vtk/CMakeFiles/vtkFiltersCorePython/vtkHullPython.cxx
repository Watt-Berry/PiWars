// python wrapper for vtkHull
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHull.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHull(PyObject *dict); }
extern "C" { PyObject *PyvtkHull_ClassNew(); }


static PyObject *
PyvtkHull_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHull::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHull::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHull *tempr = vtkHull::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHull *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHull::NewInstance());

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
PyvtkHull_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHull::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHull::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_RemoveAllPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllPlanes();
    }
    else
    {
      op->vtkHull::RemoveAllPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_AddPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

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
      op->AddPlane(temp0, temp1, temp2) :
      op->vtkHull::AddPlane(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHull_AddPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0) :
      op->vtkHull::AddPlane(temp0));

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
PyvtkHull_AddPlane_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

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
    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0, temp1, temp2, temp3) :
      op->vtkHull::AddPlane(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHull_AddPlane_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->AddPlane(temp0, temp1) :
      op->vtkHull::AddPlane(temp0, temp1));

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
PyvtkHull_AddPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkHull_AddPlane_s1(self, args);
    case 1:
      return PyvtkHull_AddPlane_s2(self, args);
    case 4:
      return PyvtkHull_AddPlane_s3(self, args);
    case 2:
      return PyvtkHull_AddPlane_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPlane");
  return nullptr;
}


static PyObject *
PyvtkHull_SetPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
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
    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkHull::SetPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHull_SetPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1);
    }
    else
    {
      op->vtkHull::SetPlane(temp0, temp1);
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
PyvtkHull_SetPlane_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

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
    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkHull::SetPlane(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHull_SetPlane_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetPlane(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHull::SetPlane(temp0, temp1, temp2);
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
PyvtkHull_SetPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkHull_SetPlane_s1(self, args);
    case 2:
      return PyvtkHull_SetPlane_s2(self, args);
    case 5:
      return PyvtkHull_SetPlane_s3(self, args);
    case 3:
      return PyvtkHull_SetPlane_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlane");
  return nullptr;
}


static PyObject *
PyvtkHull_SetPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPlanes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlanes"))
  {
    if (ap.IsBound())
    {
      op->SetPlanes(temp0);
    }
    else
    {
      op->vtkHull::SetPlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_GetNumberOfPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPlanes() :
      op->vtkHull::GetNumberOfPlanes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHull_AddCubeVertexPlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeVertexPlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddCubeVertexPlanes();
    }
    else
    {
      op->vtkHull::AddCubeVertexPlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_AddCubeEdgePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeEdgePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddCubeEdgePlanes();
    }
    else
    {
      op->vtkHull::AddCubeEdgePlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_AddCubeFacePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCubeFacePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddCubeFacePlanes();
    }
    else
    {
      op->vtkHull::AddCubeFacePlanes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_AddRecursiveSpherePlanes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddRecursiveSpherePlanes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddRecursiveSpherePlanes(temp0);
    }
    else
    {
      op->vtkHull::AddRecursiveSpherePlanes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHull_GenerateHull_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPolyData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateHull(temp0, temp1);
    }
    else
    {
      op->vtkHull::GenerateHull(temp0, temp1);
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
PyvtkHull_GenerateHull_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateHull");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHull *op = static_cast<vtkHull *>(vp);

  vtkPolyData *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->GenerateHull(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkHull::GenerateHull(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHull_GenerateHull(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkHull_GenerateHull_s1(self, args);
    case 7:
      return PyvtkHull_GenerateHull_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateHull");
  return nullptr;
}

static PyMethodDef PyvtkHull_Methods[] = {
  {"IsTypeOf", PyvtkHull_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHull_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHull_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHull\nC++: static vtkHull *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHull_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHull\nC++: vtkHull *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHull_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHull_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RemoveAllPlanes", PyvtkHull_RemoveAllPlanes, METH_VARARGS,
   "RemoveAllPlanes(self) -> None\nC++: void RemoveAllPlanes()\n\nRemove all planes from the current set of planes.\n"},
  {"AddPlane", PyvtkHull_AddPlane, METH_VARARGS,
   "AddPlane(self, A:float, B:float, C:float) -> int\nC++: int AddPlane(double A, double B, double C)\nAddPlane(self, plane:[float, float, float]) -> int\nC++: int AddPlane(double plane[3])\nAddPlane(self, A:float, B:float, C:float, D:float) -> int\nC++: int AddPlane(double A, double B, double C, double D)\nAddPlane(self, plane:[float, float, float], D:float) -> int\nC++: int AddPlane(double plane[3], double D)\n\nAdd a plane to the current set of planes. It will be added at the\nend of the list, and an index that can later be used to set this\nplane's normal will be returned. The values A, B, C are from the\nplane equation Ax + By + Cz + D = 0. This vector does not have to\nhave unit length (but it must have a non-zero length!). If a\nvalue 0 > i >= -NumberOfPlanes is returned, then the plane is\nparallel with a previously inserted plane, and |-i-1| is the\nindex of the plane that was previously inserted. If a value i <\n-NumberOfPlanes is returned, then the plane normal is zero\nlength.\n"},
  {"SetPlane", PyvtkHull_SetPlane, METH_VARARGS,
   "SetPlane(self, i:int, A:float, B:float, C:float) -> None\nC++: void SetPlane(int i, double A, double B, double C)\nSetPlane(self, i:int, plane:[float, float, float]) -> None\nC++: void SetPlane(int i, double plane[3])\nSetPlane(self, i:int, A:float, B:float, C:float, D:float) -> None\nC++: void SetPlane(int i, double A, double B, double C, double D)\nSetPlane(self, i:int, plane:[float, float, float], D:float)\n    -> None\nC++: void SetPlane(int i, double plane[3], double D)\n\nSet the normal values for plane i. This is a plane that was\nalready added to the current set of planes with AddPlane(), and\nis now being modified. The values A, B, C are from the plane\nequation Ax + By + Cz + D = 0. This vector does not have to have\nunit length. Note that D is set to zero, except in the case of\nthe method taking a vtkPlanes* argument, where it is set to the D\nvalue defined there.\n"},
  {"SetPlanes", PyvtkHull_SetPlanes, METH_VARARGS,
   "SetPlanes(self, planes:vtkPlanes) -> None\nC++: void SetPlanes(vtkPlanes *planes)\n\nSet all the planes at once using a vtkPlanes implicit function.\nThis also sets the D value, so it can be used with\nGenerateHull().\n"},
  {"GetNumberOfPlanes", PyvtkHull_GetNumberOfPlanes, METH_VARARGS,
   "GetNumberOfPlanes(self) -> int\nC++: int GetNumberOfPlanes()\n\nGet the number of planes in the current set of planes.\n"},
  {"AddCubeVertexPlanes", PyvtkHull_AddCubeVertexPlanes, METH_VARARGS,
   "AddCubeVertexPlanes(self) -> None\nC++: void AddCubeVertexPlanes()\n\nAdd the 8 planes that represent the vertices of a cube - the\ncombination of the three face planes connecting to a vertex -\n(1,1,1), (1,1,-1), (1,-1,1), (1,-1,1), (-1,1,1), (-1,1,-1),\n(-1,-1,1), (-1,-1-1).\n"},
  {"AddCubeEdgePlanes", PyvtkHull_AddCubeEdgePlanes, METH_VARARGS,
   "AddCubeEdgePlanes(self) -> None\nC++: void AddCubeEdgePlanes()\n\nAdd the 12 planes that represent the edges of a cube - halfway\nbetween the two connecting face planes - (1,1,0), (-1,-1,0),\n(-1,1,0), (1,-1,0), (0,1,1), (0,-1,-1), (0,1,-1), (0,-1,1),\n(1,0,1), (-1,0,-1), (1,0,-1), (-1,0,1)\n"},
  {"AddCubeFacePlanes", PyvtkHull_AddCubeFacePlanes, METH_VARARGS,
   "AddCubeFacePlanes(self) -> None\nC++: void AddCubeFacePlanes()\n\nAdd the six planes that make up the faces of a cube - (1,0,0),\n(-1, 0, 0), (0,1,0), (0,-1,0), (0,0,1), (0,0,-1)\n"},
  {"AddRecursiveSpherePlanes", PyvtkHull_AddRecursiveSpherePlanes, METH_VARARGS,
   "AddRecursiveSpherePlanes(self, level:int) -> None\nC++: void AddRecursiveSpherePlanes(int level)\n\nAdd the planes that represent the normals of the vertices of a\npolygonal sphere formed by recursively subdividing the triangles\nin an octahedron.  Each triangle is subdivided by connecting the\nmidpoints of the edges thus forming 4 smaller triangles. The\nlevel indicates how many subdivisions to do with a level of 0\nused to add the 6 planes from the original octahedron, level 1\nwill add 18 planes, and so on.\n"},
  {"GenerateHull", PyvtkHull_GenerateHull, METH_VARARGS,
   "GenerateHull(self, pd:vtkPolyData, bounds:[float, ...]) -> None\nC++: void GenerateHull(vtkPolyData *pd, double *bounds)\nGenerateHull(self, pd:vtkPolyData, xmin:float, xmax:float,\n    ymin:float, ymax:float, zmin:float, zmax:float) -> None\nC++: void GenerateHull(vtkPolyData *pd, double xmin, double xmax,\n    double ymin, double ymax, double zmin, double zmax)\n\nA special method that is used to generate a polyhedron directly\nfrom a set of n planes. The planes that are supplied by the user\nare not squeezed towards the input data (in fact the user need\nnot specify an input). To use this method, you must provide an\ninstance of vtkPolyData into which the points and cells defining\nthe polyhedron are placed. You must also provide a bounding box\nwhere you expect the resulting polyhedron to lie. This can be a\nvery generous fit, it's only used to create the initial polygons\nthat are eventually clipped.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHull_Doc =
  "vtkHull - produce an n-sided convex hull\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "vtkHull is a filter which will produce an n-sided convex hull given a\n"
  "set of n planes. (The convex hull bounds the input vtkPointSet data.)\n"
  "The hull is generated by squeezing the planes towards the input\n"
  "vtkPointSet, until the planes just touch the points. Then, the\n"
  "resulting planes are used to generate a polyhedron (i.e., hull) that\n"
  "is represented by triangles.\n\n"
  "The n planes can be defined in a number of ways including 1) manually\n"
  "specifying each plane; 2) choosing the six face planes of the input's\n"
  "bounding box; 3) choosing the eight vertex planes of the input's\n"
  "bounding box; 4) choosing the twelve edge planes of the input's\n"
  "bounding box; and/or 5) using a recursively subdivided octahedron.\n"
  "Note that when specifying planes, the plane normals should point\n"
  "outside of the convex region.\n\n"
  "The output of this filter can be used in combination with vtkLODActor\n"
  "to represent a levels-of-detail in the LOD hierarchy. Another use of\n"
  "this class is to manually specify the planes, and then generate the\n"
  "polyhedron from the planes (without squeezing the planes towards the\n"
  "input). The method GenerateHull() is used to do this.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHull_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkHull", // tp_name
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
  PyvtkHull_Doc, // tp_doc
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

static vtkObjectBase *PyvtkHull_StaticNew()
{
  return vtkHull::New();
}

PyObject *PyvtkHull_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHull_Type, PyvtkHull_Methods,
    "vtkHull",
 &PyvtkHull_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHull(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHull_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHull", o) != 0)
  {
    Py_DECREF(o);
  }

}

