// python wrapper for vtkWarpTransform
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWarpTransform.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWarpTransform(PyObject *dict); }
extern "C" { PyObject *PyvtkWarpTransform_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractTransform_ClassNew
extern "C" { PyObject *PyvtkAbstractTransform_ClassNew(); }
#define DECLARED_PyvtkAbstractTransform_ClassNew
#endif

static PyObject *
PyvtkWarpTransform_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWarpTransform::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWarpTransform::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWarpTransform *tempr = vtkWarpTransform::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWarpTransform *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWarpTransform::NewInstance());

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
PyvtkWarpTransform_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWarpTransform::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWarpTransform::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_Inverse(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Inverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Inverse();
    }
    else
    {
      op->vtkWarpTransform::Inverse();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseFlag() :
      op->vtkWarpTransform::GetInverseFlag());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_SetInverseTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverseTolerance(temp0);
    }
    else
    {
      op->vtkWarpTransform::SetInverseTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInverseTolerance() :
      op->vtkWarpTransform::GetInverseTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_SetInverseIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverseIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverseIterations(temp0);
    }
    else
    {
      op->vtkWarpTransform::SetInverseIterations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_GetInverseIterations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseIterations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverseIterations() :
      op->vtkWarpTransform::GetInverseIterations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_InternalTransformPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InternalTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkWarpTransform::InternalTransformPoint(temp0, temp1);
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
PyvtkWarpTransform_InternalTransformDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InternalTransformDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->InternalTransformDerivative(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWarpTransform::InternalTransformDerivative(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWarpTransform_TemplateTransformPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TemplateTransformPoint(temp0, temp1);
    }
    else
    {
      op->vtkWarpTransform::TemplateTransformPoint(temp0, temp1);
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
PyvtkWarpTransform_TemplateTransformPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->TemplateTransformPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWarpTransform::TemplateTransformPoint(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpTransform_TemplateTransformPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWarpTransform_TemplateTransformPoint_s1(self, args);
    case 3:
      return PyvtkWarpTransform_TemplateTransformPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TemplateTransformPoint");
  return nullptr;
}


static PyObject *
PyvtkWarpTransform_TemplateTransformInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->TemplateTransformInverse(temp0, temp1);
    }
    else
    {
      op->vtkWarpTransform::TemplateTransformInverse(temp0, temp1);
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
PyvtkWarpTransform_TemplateTransformInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TemplateTransformInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWarpTransform *op = static_cast<vtkWarpTransform *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  static size_t size2[2] = { 3, 3 };
  double temp2[3][3];
  double save2[3][3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetNArray(*temp2, 2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(*temp2, *save2, size2[0]*size2[1]);

    if (ap.IsBound())
    {
      op->TemplateTransformInverse(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWarpTransform::TemplateTransformInverse(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(*temp2, *save2, size2[0]*size2[1]) &&
        !ap.ErrorOccurred())
    {
      ap.SetNArray(2, *temp2, 2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWarpTransform_TemplateTransformInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWarpTransform_TemplateTransformInverse_s1(self, args);
    case 3:
      return PyvtkWarpTransform_TemplateTransformInverse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "TemplateTransformInverse");
  return nullptr;
}

static PyMethodDef PyvtkWarpTransform_Methods[] = {
  {"IsTypeOf", PyvtkWarpTransform_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWarpTransform_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWarpTransform_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWarpTransform\nC++: static vtkWarpTransform *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWarpTransform_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWarpTransform\nC++: vtkWarpTransform *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWarpTransform_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWarpTransform_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Inverse", PyvtkWarpTransform_Inverse, METH_VARARGS,
   "Inverse(self) -> None\nC++: void Inverse() override;\n\nInvert the transformation.  Warp transformations are usually\ninverted using an iterative technique such as Newton's method.\nThe inverse transform is usually around five or six times as\ncomputationally expensive as the forward transform.\n"},
  {"GetInverseFlag", PyvtkWarpTransform_GetInverseFlag, METH_VARARGS,
   "GetInverseFlag(self) -> int\nC++: virtual vtkTypeBool GetInverseFlag()\n\nGet the inverse flag of the transformation.  This flag is set to\nzero when the transformation is first created, and is flipped\neach time Inverse() is called.\n"},
  {"SetInverseTolerance", PyvtkWarpTransform_SetInverseTolerance, METH_VARARGS,
   "SetInverseTolerance(self, _arg:float) -> None\nC++: virtual void SetInverseTolerance(double _arg)\n\nSet the tolerance for inverse transformation. The default is\n0.001.\n"},
  {"GetInverseTolerance", PyvtkWarpTransform_GetInverseTolerance, METH_VARARGS,
   "GetInverseTolerance(self) -> float\nC++: virtual double GetInverseTolerance()\n\n"},
  {"SetInverseIterations", PyvtkWarpTransform_SetInverseIterations, METH_VARARGS,
   "SetInverseIterations(self, _arg:int) -> None\nC++: virtual void SetInverseIterations(int _arg)\n\nSet the maximum number of iterations for the inverse\ntransformation.  The default is 500, but usually only 2 to 5\niterations are used.  The inversion method is fairly robust, and\nit should converge for nearly all smooth transformations that do\nnot fold back on themselves.\n"},
  {"GetInverseIterations", PyvtkWarpTransform_GetInverseIterations, METH_VARARGS,
   "GetInverseIterations(self) -> int\nC++: virtual int GetInverseIterations()\n\n"},
  {"InternalTransformPoint", PyvtkWarpTransform_InternalTransformPoint, METH_VARARGS,
   "InternalTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void InternalTransformPoint(const double in[3],\n    double out[3]) override;\n\n"},
  {"InternalTransformDerivative", PyvtkWarpTransform_InternalTransformDerivative, METH_VARARGS,
   "InternalTransformDerivative(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void InternalTransformDerivative(const double in[3],\n    double out[3], double derivative[3][3]) override;\n\n"},
  {"TemplateTransformPoint", PyvtkWarpTransform_TemplateTransformPoint, METH_VARARGS,
   "TemplateTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void TemplateTransformPoint(const double in[3],\n    double out[3])\nTemplateTransformPoint(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void TemplateTransformPoint(const double in[3],\n    double out[3], double derivative[3][3])\n\n"},
  {"TemplateTransformInverse", PyvtkWarpTransform_TemplateTransformInverse, METH_VARARGS,
   "TemplateTransformInverse(self, in_:(float, float, float),\n    out:[float, float, float]) -> None\nC++: void TemplateTransformInverse(const double in[3],\n    double out[3])\nTemplateTransformInverse(self, in_:(float, float, float),\n    out:[float, float, float], derivative:[[float, float, float],\n    [float, float, float], [float, float, float]]) -> None\nC++: void TemplateTransformInverse(const double in[3],\n    double out[3], double derivative[3][3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWarpTransform_Doc =
  "vtkWarpTransform - superclass for nonlinear geometric transformations\n\n"
  "Superclass: vtkAbstractTransform\n\n"
  "vtkWarpTransform provides a generic interface for nonlinear warp\n"
  "transformations.\n"
  "@sa\n"
  "vtkThinPlateSplineTransform vtkGridTransform vtkGeneralTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWarpTransform_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonTransforms.vtkWarpTransform", // tp_name
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
  PyvtkWarpTransform_Doc, // tp_doc
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

PyObject *PyvtkWarpTransform_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWarpTransform_Type, PyvtkWarpTransform_Methods,
    "vtkWarpTransform",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractTransform_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWarpTransform(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWarpTransform_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWarpTransform", o) != 0)
  {
    Py_DECREF(o);
  }

}

