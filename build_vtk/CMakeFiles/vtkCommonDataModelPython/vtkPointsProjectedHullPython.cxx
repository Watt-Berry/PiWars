// python wrapper for vtkPointsProjectedHull
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointsProjectedHull.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointsProjectedHull(PyObject *dict); }
extern "C" { PyObject *PyvtkPointsProjectedHull_ClassNew(); }


static PyObject *
PyvtkPointsProjectedHull_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointsProjectedHull::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointsProjectedHull::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointsProjectedHull *tempr = vtkPointsProjectedHull::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointsProjectedHull *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointsProjectedHull::NewInstance());

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
PyvtkPointsProjectedHull_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointsProjectedHull::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointsProjectedHull::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionX(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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
      op->RectangleIntersectionX(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionX(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionX(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionX_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionX");
  return nullptr;
}


static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionY(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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
      op->RectangleIntersectionY(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionY(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionY(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionY_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionY");
  return nullptr;
}


static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->RectangleIntersectionZ(temp0) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RectangleIntersectionZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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
      op->RectangleIntersectionZ(temp0, temp1, temp2, temp3) :
      op->vtkPointsProjectedHull::RectangleIntersectionZ(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPointsProjectedHull_RectangleIntersectionZ(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s1(self, args);
    case 4:
      return PyvtkPointsProjectedHull_RectangleIntersectionZ_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RectangleIntersectionZ");
  return nullptr;
}


static PyObject *
PyvtkPointsProjectedHull_GetCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->GetCCWHullX(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullX(temp0, temp1));

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
PyvtkPointsProjectedHull_GetCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->GetCCWHullY(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullY(temp0, temp1));

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
PyvtkPointsProjectedHull_GetCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

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

    int tempr = (ap.IsBound() ?
      op->GetCCWHullZ(temp0, temp1) :
      op->vtkPointsProjectedHull::GetCCWHullZ(temp0, temp1));

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
PyvtkPointsProjectedHull_GetSizeCCWHullX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullX() :
      op->vtkPointsProjectedHull::GetSizeCCWHullX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullY() :
      op->vtkPointsProjectedHull::GetSizeCCWHullY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_GetSizeCCWHullZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeCCWHullZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeCCWHullZ() :
      op->vtkPointsProjectedHull::GetSizeCCWHullZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkPointsProjectedHull::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkPointsProjectedHull::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointsProjectedHull_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointsProjectedHull *op = static_cast<vtkPointsProjectedHull *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkPointsProjectedHull::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointsProjectedHull_Methods[] = {
  {"IsTypeOf", PyvtkPointsProjectedHull_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointsProjectedHull_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointsProjectedHull_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointsProjectedHull\nC++: static vtkPointsProjectedHull *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointsProjectedHull_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointsProjectedHull\nC++: vtkPointsProjectedHull *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointsProjectedHull_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointsProjectedHull_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RectangleIntersectionX", PyvtkPointsProjectedHull_RectangleIntersectionX, METH_VARARGS,
   "RectangleIntersectionX(self, R:vtkPoints) -> int\nC++: int RectangleIntersectionX(vtkPoints *R)\nRectangleIntersectionX(self, ymin:float, ymax:float, zmin:float,\n    zmax:float) -> int\nC++: int RectangleIntersectionX(double ymin, double ymax,\n    double zmin, double zmax)\n\ndetermine whether the resulting rectangle intersects the convex\nhull of the projection of the points along that axis.\n"},
  {"RectangleIntersectionY", PyvtkPointsProjectedHull_RectangleIntersectionY, METH_VARARGS,
   "RectangleIntersectionY(self, R:vtkPoints) -> int\nC++: int RectangleIntersectionY(vtkPoints *R)\nRectangleIntersectionY(self, zmin:float, zmax:float, xmin:float,\n    xmax:float) -> int\nC++: int RectangleIntersectionY(double zmin, double zmax,\n    double xmin, double xmax)\n\nof the parallel projection along the Y axis of the points\n"},
  {"RectangleIntersectionZ", PyvtkPointsProjectedHull_RectangleIntersectionZ, METH_VARARGS,
   "RectangleIntersectionZ(self, R:vtkPoints) -> int\nC++: int RectangleIntersectionZ(vtkPoints *R)\nRectangleIntersectionZ(self, xmin:float, xmax:float, ymin:float,\n    ymax:float) -> int\nC++: int RectangleIntersectionZ(double xmin, double xmax,\n    double ymin, double ymax)\n\nof the parallel projection along the Z axis of the points\n"},
  {"GetCCWHullX", PyvtkPointsProjectedHull_GetCCWHullX, METH_VARARGS,
   "GetCCWHullX(self, pts:[float, ...], len:int) -> int\nC++: int GetCCWHullX(double *pts, int len)\n\n"},
  {"GetCCWHullY", PyvtkPointsProjectedHull_GetCCWHullY, METH_VARARGS,
   "GetCCWHullY(self, pts:[float, ...], len:int) -> int\nC++: int GetCCWHullY(double *pts, int len)\n\n"},
  {"GetCCWHullZ", PyvtkPointsProjectedHull_GetCCWHullZ, METH_VARARGS,
   "GetCCWHullZ(self, pts:[float, ...], len:int) -> int\nC++: int GetCCWHullZ(double *pts, int len)\n\n"},
  {"GetSizeCCWHullX", PyvtkPointsProjectedHull_GetSizeCCWHullX, METH_VARARGS,
   "GetSizeCCWHullX(self) -> int\nC++: int GetSizeCCWHullX()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive x-axis\n"},
  {"GetSizeCCWHullY", PyvtkPointsProjectedHull_GetSizeCCWHullY, METH_VARARGS,
   "GetSizeCCWHullY(self) -> int\nC++: int GetSizeCCWHullY()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive y-axis\n"},
  {"GetSizeCCWHullZ", PyvtkPointsProjectedHull_GetSizeCCWHullZ, METH_VARARGS,
   "GetSizeCCWHullZ(self) -> int\nC++: int GetSizeCCWHullZ()\n\nReturns the number of points in the convex hull of the projection\nof the points down the positive z-axis\n"},
  {"Initialize", PyvtkPointsProjectedHull_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nReturn object to instantiated state.\n"},
  {"Reset", PyvtkPointsProjectedHull_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset() override;\n\nMake object look empty but do not delete memory.\n"},
  {"Update", PyvtkPointsProjectedHull_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update()\n\nForces recalculation of convex hulls, use this if you delete/add\npoints\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointsProjectedHull_Doc =
  "vtkPointsProjectedHull - the convex hull of the orthogonal\n   projection of the vtkPoints in the 3 coordinate directions\n\n"
  "Superclass: vtkPoints\n\n"
  "a subclass of vtkPoints, it maintains the counter clockwise\n"
  "   convex hull of the points (projected orthogonally in the\n"
  "   three coordinate directions) and has a method to\n"
  "   test for intersection of that hull with an axis aligned\n"
  "   rectangle.  This is used for intersection tests of 3D volumes.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointsProjectedHull_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPointsProjectedHull", // tp_name
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
  PyvtkPointsProjectedHull_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointsProjectedHull_StaticNew()
{
  return vtkPointsProjectedHull::New();
}

PyObject *PyvtkPointsProjectedHull_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointsProjectedHull_Type, PyvtkPointsProjectedHull_Methods,
    "vtkPointsProjectedHull",
 &PyvtkPointsProjectedHull_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPoints");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointsProjectedHull(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointsProjectedHull_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointsProjectedHull", o) != 0)
  {
    Py_DECREF(o);
  }

}

