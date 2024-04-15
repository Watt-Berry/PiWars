// python wrapper for vtkRungeKutta4
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRungeKutta4.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRungeKutta4(PyObject *dict); }
extern "C" { PyObject *PyvtkRungeKutta4_ClassNew(); }

#ifndef DECLARED_PyvtkInitialValueProblemSolver_ClassNew
extern "C" { PyObject *PyvtkInitialValueProblemSolver_ClassNew(); }
#define DECLARED_PyvtkInitialValueProblemSolver_ClassNew
#endif

static PyObject *
PyvtkRungeKutta4_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRungeKutta4::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRungeKutta4_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRungeKutta4::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRungeKutta4_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRungeKutta4 *tempr = vtkRungeKutta4::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRungeKutta4_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRungeKutta4 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRungeKutta4::NewInstance());

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
PyvtkRungeKutta4_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRungeKutta4::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRungeKutta4_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRungeKutta4::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  void  *temp6 = nullptr;
  Py_buffer pbuf6 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetBuffer(temp6, &pbuf6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf6.obj != nullptr)
  {
    PyBuffer_Release(&pbuf6);
  }
  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  void  *temp7 = nullptr;
  Py_buffer pbuf7 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetBuffer(temp7, &pbuf7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
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

  if (pbuf7.obj != nullptr)
  {
    PyBuffer_Release(&pbuf7);
  }
  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  void  *temp9 = nullptr;
  Py_buffer pbuf9 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetBuffer(temp9, &pbuf9))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(8, temp8);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf9.obj != nullptr)
  {
    PyBuffer_Release(&pbuf9);
  }
  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  void  *temp10 = nullptr;
  Py_buffer pbuf10 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9) &&
      ap.GetBuffer(temp10, &pbuf10))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(9, temp9);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf10.obj != nullptr)
  {
    PyBuffer_Release(&pbuf10);
  }
  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5));

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
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
PyvtkRungeKutta4_ComputeNextStep_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(8, temp8);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRungeKutta4_ComputeNextStep_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRungeKutta4 *op = static_cast<vtkRungeKutta4 *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  double temp7;
  double temp8;
  double temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8) &&
      ap.GetValue(temp9))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkRungeKutta4::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

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

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(9, temp9);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRungeKutta4_ComputeNextStep_Methods[] = {
  {"ComputeNextStep", PyvtkRungeKutta4_ComputeNextStep_s1, METH_VARARGS,
   "@PPddddv *d *d"},
  {"ComputeNextStep", PyvtkRungeKutta4_ComputeNextStep_s3, METH_VARARGS,
   "@PPdddddddv *d *d"},
  {"ComputeNextStep", PyvtkRungeKutta4_ComputeNextStep_s6, METH_VARARGS,
   "@PPPdddd *d *d *d"},
  {"ComputeNextStep", PyvtkRungeKutta4_ComputeNextStep_s8, METH_VARARGS,
   "@PPPddddddd *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRungeKutta4_ComputeNextStep(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRungeKutta4_ComputeNextStep_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 8:
      return PyvtkRungeKutta4_ComputeNextStep_s2(self, args);
    case 11:
      return PyvtkRungeKutta4_ComputeNextStep_s4(self, args);
    case 6:
      return PyvtkRungeKutta4_ComputeNextStep_s5(self, args);
    case 9:
      return PyvtkRungeKutta4_ComputeNextStep_s7(self, args);
    case 7:
    case 10:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNextStep");
  return nullptr;
}

static PyMethodDef PyvtkRungeKutta4_Methods[] = {
  {"IsTypeOf", PyvtkRungeKutta4_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRungeKutta4_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRungeKutta4_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRungeKutta4\nC++: static vtkRungeKutta4 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRungeKutta4_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRungeKutta4\nC++: vtkRungeKutta4 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRungeKutta4_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRungeKutta4_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeNextStep", PyvtkRungeKutta4_ComputeNextStep, METH_VARARGS,
   "ComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, maxError:float, error:float,\n    userData:Pointer) -> int\nC++: int ComputeNextStep(double *xprev, double *xnext, double t,\n    double &delT, double maxError, double &error, void *userData)\n    override;\nComputeNextStep(self, xprev:[float, ...], dxprev:[float, ...],\n    xnext:[float, ...], t:float, delT:float, maxError:float,\n    error:float, userData:Pointer) -> int\nC++: int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double maxError,\n    double &error, void *userData) override;\nComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, delTActual:float, minStep:float,\n    maxStep:float, maxError:float, error:float, userData:Pointer)\n    -> int\nC++: int ComputeNextStep(double *xprev, double *xnext, double t,\n    double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error,\n    void *userData) override;\nComputeNextStep(self, xprev:[float, ...], dxprev:[float, ...],\n    xnext:[float, ...], t:float, delT:float, delTActual:float,\n    minStep:float, maxStep:float, maxError:float, error:float,\n    userData:Pointer) -> int\nC++: int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double &delTActual,\n    double minStep, double maxStep, double maxError,\n    double &error, void *userData) override;\nComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, maxError:float, error:float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double maxError, double &error)\n\nGiven initial values, xprev , initial time, t and a requested\ntime interval, delT calculate values of x at t+delT (xnext).\ndelTActual is always equal to delT. Since this class can not\nprovide an estimate for the error error is set to 0. maxStep,\nminStep and maxError are unused. This metho ...\n [Truncated]\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRungeKutta4_Doc =
  "vtkRungeKutta4 - Integrate an initial value problem using 4th order\nRunge-Kutta method.\n\n"
  "Superclass: vtkInitialValueProblemSolver\n\n"
  "This is a concrete sub-class of vtkInitialValueProblemSolver. It uses\n"
  "a 4th order Runge-Kutta method to obtain the values of a set of\n"
  "functions at the next time step.\n\n"
  "@sa\n"
  "vtkInitialValueProblemSolver vtkRungeKutta45 vtkRungeKutta2\n"
  "vtkFunctionSet\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRungeKutta4_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkRungeKutta4", // tp_name
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
  PyvtkRungeKutta4_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRungeKutta4_StaticNew()
{
  return vtkRungeKutta4::New();
}

PyObject *PyvtkRungeKutta4_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRungeKutta4_Type, PyvtkRungeKutta4_Methods,
    "vtkRungeKutta4",
 &PyvtkRungeKutta4_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInitialValueProblemSolver_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRungeKutta4(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRungeKutta4_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRungeKutta4", o) != 0)
  {
    Py_DECREF(o);
  }

}

