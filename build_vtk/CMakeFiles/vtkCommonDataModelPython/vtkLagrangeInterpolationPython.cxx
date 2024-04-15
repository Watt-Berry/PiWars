// python wrapper for vtkLagrangeInterpolation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLagrangeInterpolation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLagrangeInterpolation(PyObject *dict); }
extern "C" { PyObject *PyvtkLagrangeInterpolation_ClassNew(); }

#ifndef DECLARED_PyvtkHigherOrderInterpolation_ClassNew
extern "C" { PyObject *PyvtkHigherOrderInterpolation_ClassNew(); }
#define DECLARED_PyvtkHigherOrderInterpolation_ClassNew
#endif

static PyObject *
PyvtkLagrangeInterpolation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLagrangeInterpolation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLagrangeInterpolation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLagrangeInterpolation *tempr = vtkLagrangeInterpolation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLagrangeInterpolation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLagrangeInterpolation::NewInstance());

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
PyvtkLagrangeInterpolation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLagrangeInterpolation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLagrangeInterpolation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_EvaluateShapeFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateShapeFunctions");

  int temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkLagrangeInterpolation::EvaluateShapeFunctions(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_EvaluateShapeAndGradient(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EvaluateShapeAndGradient");

  int temp0;
  double temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkLagrangeInterpolation::EvaluateShapeAndGradient(temp0, temp1, temp2, temp3);

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor1ShapeFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor1ShapeFunctions");

  const size_t size0 = 1;
  int temp0[1];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor1ShapeFunctions(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor1ShapeDerivatives(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor1ShapeDerivatives");

  const size_t size0 = 1;
  int temp0[1];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor1ShapeDerivatives(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor2ShapeFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor2ShapeFunctions");

  const size_t size0 = 2;
  int temp0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor2ShapeFunctions(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor2ShapeDerivatives(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor2ShapeDerivatives");

  const size_t size0 = 2;
  int temp0[2];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor2ShapeDerivatives(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3ShapeFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor3ShapeFunctions");

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor3ShapeFunctions(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3ShapeDerivatives(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Tensor3ShapeDerivatives");

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = vtkLagrangeInterpolation::Tensor3ShapeDerivatives(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_Tensor3EvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tensor3EvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->Tensor3EvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::Tensor3EvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeShapeFunctions(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeShapeFunctions");

  const size_t size0 = 3;
  int temp0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkLagrangeInterpolation::WedgeShapeFunctions(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeShapeDerivatives(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "WedgeShapeDerivatives");

  const size_t size0 = 3;
  int temp0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkLagrangeInterpolation::WedgeShapeDerivatives(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeEvaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->WedgeEvaluate(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::WedgeEvaluate(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLagrangeInterpolation_WedgeEvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLagrangeInterpolation *op = static_cast<vtkLagrangeInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->WedgeEvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkLagrangeInterpolation::WedgeEvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLagrangeInterpolation_Methods[] = {
  {"IsTypeOf", PyvtkLagrangeInterpolation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLagrangeInterpolation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLagrangeInterpolation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLagrangeInterpolation\nC++: static vtkLagrangeInterpolation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLagrangeInterpolation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLagrangeInterpolation\nC++: vtkLagrangeInterpolation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLagrangeInterpolation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLagrangeInterpolation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"EvaluateShapeFunctions", PyvtkLagrangeInterpolation_EvaluateShapeFunctions, METH_VARARGS,
   "EvaluateShapeFunctions(order:int, pcoord:float, shape:[float,\n    ...]) -> None\nC++: static void EvaluateShapeFunctions(int order, double pcoord,\n    double *shape)\n\n"},
  {"EvaluateShapeAndGradient", PyvtkLagrangeInterpolation_EvaluateShapeAndGradient, METH_VARARGS,
   "EvaluateShapeAndGradient(order:int, pcoord:float, shape:[float,\n    ...], grad:[float, ...]) -> None\nC++: static void EvaluateShapeAndGradient(int order,\n    double pcoord, double *shape, double *grad)\n\n"},
  {"Tensor1ShapeFunctions", PyvtkLagrangeInterpolation_Tensor1ShapeFunctions, METH_VARARGS,
   "Tensor1ShapeFunctions(order:(int), pcoords:(float, ...),\n    shape:[float, ...]) -> int\nC++: static int Tensor1ShapeFunctions(const int order[1],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor1ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor1ShapeDerivatives, METH_VARARGS,
   "Tensor1ShapeDerivatives(order:(int), pcoords:(float, ...),\n    derivs:[float, ...]) -> int\nC++: static int Tensor1ShapeDerivatives(const int order[1],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor2ShapeFunctions", PyvtkLagrangeInterpolation_Tensor2ShapeFunctions, METH_VARARGS,
   "Tensor2ShapeFunctions(order:(int, int), pcoords:(float, ...),\n    shape:[float, ...]) -> int\nC++: static int Tensor2ShapeFunctions(const int order[2],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor2ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor2ShapeDerivatives, METH_VARARGS,
   "Tensor2ShapeDerivatives(order:(int, int), pcoords:(float, ...),\n    derivs:[float, ...]) -> int\nC++: static int Tensor2ShapeDerivatives(const int order[2],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor3ShapeFunctions", PyvtkLagrangeInterpolation_Tensor3ShapeFunctions, METH_VARARGS,
   "Tensor3ShapeFunctions(order:(int, int, int), pcoords:(float, ...),\n     shape:[float, ...]) -> int\nC++: static int Tensor3ShapeFunctions(const int order[3],\n    const double *pcoords, double *shape)\n\n"},
  {"Tensor3ShapeDerivatives", PyvtkLagrangeInterpolation_Tensor3ShapeDerivatives, METH_VARARGS,
   "Tensor3ShapeDerivatives(order:(int, int, int), pcoords:(float,\n    ...), derivs:[float, ...]) -> int\nC++: static int Tensor3ShapeDerivatives(const int order[3],\n    const double *pcoords, double *derivs)\n\n"},
  {"Tensor3EvaluateDerivative", PyvtkLagrangeInterpolation_Tensor3EvaluateDerivative, METH_VARARGS,
   "Tensor3EvaluateDerivative(self, order:(int, int, int), pcoords:(\n    float, ...), points:vtkPoints, fieldVals:(float, ...),\n    fieldDim:int, fieldDerivs:[float, ...]) -> None\nC++: void Tensor3EvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n    override;\n\n"},
  {"WedgeShapeFunctions", PyvtkLagrangeInterpolation_WedgeShapeFunctions, METH_VARARGS,
   "WedgeShapeFunctions(order:(int, int, int), numberOfPoints:int,\n    pcoords:(float, ...), shape:[float, ...]) -> None\nC++: static void WedgeShapeFunctions(const int order[3],\n    vtkIdType numberOfPoints, const double *pcoords,\n    double *shape)\n\n"},
  {"WedgeShapeDerivatives", PyvtkLagrangeInterpolation_WedgeShapeDerivatives, METH_VARARGS,
   "WedgeShapeDerivatives(order:(int, int, int), numberOfPoints:int,\n    pcoords:(float, ...), derivs:[float, ...]) -> None\nC++: static void WedgeShapeDerivatives(const int order[3],\n    vtkIdType numberOfPoints, const double *pcoords,\n    double *derivs)\n\n"},
  {"WedgeEvaluate", PyvtkLagrangeInterpolation_WedgeEvaluate, METH_VARARGS,
   "WedgeEvaluate(self, order:(int, int, int), numberOfPoints:int,\n    pcoords:(float, ...), fieldVals:[float, ...], fieldDim:int,\n    fieldAtPCoords:[float, ...]) -> None\nC++: void WedgeEvaluate(const int order[3],\n    vtkIdType numberOfPoints, const double *pcoords,\n    double *fieldVals, int fieldDim, double *fieldAtPCoords)\n    override;\n\n"},
  {"WedgeEvaluateDerivative", PyvtkLagrangeInterpolation_WedgeEvaluateDerivative, METH_VARARGS,
   "WedgeEvaluateDerivative(self, order:(int, int, int), pcoords:(\n    float, ...), points:vtkPoints, fieldVals:(float, ...),\n    fieldDim:int, fieldDerivs:[float, ...]) -> None\nC++: void WedgeEvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n    override;\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLagrangeInterpolation_Doc =
  "vtkLagrangeInterpolation\n\n"
  "Superclass: vtkHigherOrderInterpolation\n\n"
  "See Also:\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLagrangeInterpolation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkLagrangeInterpolation", // tp_name
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
  PyvtkLagrangeInterpolation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLagrangeInterpolation_StaticNew()
{
  return vtkLagrangeInterpolation::New();
}

PyObject *PyvtkLagrangeInterpolation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLagrangeInterpolation_Type, PyvtkLagrangeInterpolation_Methods,
    "vtkLagrangeInterpolation",
 &PyvtkLagrangeInterpolation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkHigherOrderInterpolation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLagrangeInterpolation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLagrangeInterpolation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLagrangeInterpolation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyBool_FromLong((long)(true));
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_21_POINT_WEDGE", o);
    Py_DECREF(o);
  }
}

