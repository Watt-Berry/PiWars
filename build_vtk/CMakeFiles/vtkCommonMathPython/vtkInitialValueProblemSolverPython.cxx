// python wrapper for vtkInitialValueProblemSolver
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInitialValueProblemSolver.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInitialValueProblemSolver(PyObject *dict); }
extern "C" { PyObject *PyvtkInitialValueProblemSolver_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInitialValueProblemSolver_ErrorCodes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkInitialValueProblemSolver.ErrorCodes", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkInitialValueProblemSolver_ErrorCodes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkInitialValueProblemSolver_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInitialValueProblemSolver::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInitialValueProblemSolver::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInitialValueProblemSolver *tempr = vtkInitialValueProblemSolver::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInitialValueProblemSolver::NewInstance());

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
PyvtkInitialValueProblemSolver_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInitialValueProblemSolver::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInitialValueProblemSolver::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

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
PyvtkInitialValueProblemSolver_ComputeNextStep_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

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

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNextStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

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
      op->vtkInitialValueProblemSolver::ComputeNextStep(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10));

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

static PyMethodDef PyvtkInitialValueProblemSolver_ComputeNextStep_Methods[] = {
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep_s2, METH_VARARGS,
   "@PPddddv *d *d"},
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep_s3, METH_VARARGS,
   "@PPPdddd *d *d *d"},
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep_s6, METH_VARARGS,
   "@PPdddddddv *d *d"},
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep_s7, METH_VARARGS,
   "@PPPddddddd *d *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInitialValueProblemSolver_ComputeNextStep(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInitialValueProblemSolver_ComputeNextStep_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s1(self, args);
    case 8:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s4(self, args);
    case 9:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s5(self, args);
    case 11:
      return PyvtkInitialValueProblemSolver_ComputeNextStep_s8(self, args);
    case 7:
    case 10:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNextStep");
  return nullptr;
}


static PyObject *
PyvtkInitialValueProblemSolver_SetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  vtkFunctionSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkFunctionSet"))
  {
    if (ap.IsBound())
    {
      op->SetFunctionSet(temp0);
    }
    else
    {
      op->vtkInitialValueProblemSolver::SetFunctionSet(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_GetFunctionSet(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionSet");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionSet *tempr = (ap.IsBound() ?
      op->GetFunctionSet() :
      op->vtkInitialValueProblemSolver::GetFunctionSet());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInitialValueProblemSolver_IsAdaptive(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsAdaptive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInitialValueProblemSolver *op = static_cast<vtkInitialValueProblemSolver *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsAdaptive() :
      op->vtkInitialValueProblemSolver::IsAdaptive());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInitialValueProblemSolver_Methods[] = {
  {"IsTypeOf", PyvtkInitialValueProblemSolver_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInitialValueProblemSolver_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInitialValueProblemSolver_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInitialValueProblemSolver\nC++: static vtkInitialValueProblemSolver *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInitialValueProblemSolver_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInitialValueProblemSolver\nC++: vtkInitialValueProblemSolver *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInitialValueProblemSolver_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInitialValueProblemSolver_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ComputeNextStep", PyvtkInitialValueProblemSolver_ComputeNextStep, METH_VARARGS,
   "ComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, maxError:float, error:float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double maxError, double &error)\nComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, maxError:float, error:float,\n    userData:Pointer) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double maxError, double &error,\n    void *userData)\nComputeNextStep(self, xprev:[float, ...], dxprev:[float, ...],\n    xnext:[float, ...], t:float, delT:float, maxError:float,\n    error:float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double maxError,\n    double &error)\nComputeNextStep(self, xprev:[float, ...], dxprev:[float, ...],\n    xnext:[float, ...], t:float, delT:float, maxError:float,\n    error:float, userData:Pointer) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *dxprev,\n    double *xnext, double t, double &delT, double maxError,\n    double &error, void *userData)\nComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, delTActual:float, minStep:float,\n    maxStep:float, maxError:float, error:float) -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error)\nComputeNextStep(self, xprev:[float, ...], xnext:[float, ...],\n    t:float, delT:float, delTActual:float, minStep:float,\n    maxStep:float, maxError:float, error:float, userData:Pointer)\n    -> int\nC++: virtual int ComputeNextStep(double *xprev, double *xnext,\n    double t, double &delT, double &delTActual, double minStep,\n    double maxStep, double maxError, double &error,\n    void *userData)\n\nGiven initial values, xprev , initial time, t and a requested\ntime interval, delT ca ...\n [Truncated]\n"},
  {"SetFunctionSet", PyvtkInitialValueProblemSolver_SetFunctionSet, METH_VARARGS,
   "SetFunctionSet(self, fset:vtkFunctionSet) -> None\nC++: virtual void SetFunctionSet(vtkFunctionSet *fset)\n\nSet / get the dataset used for the implicit function evaluation.\n"},
  {"GetFunctionSet", PyvtkInitialValueProblemSolver_GetFunctionSet, METH_VARARGS,
   "GetFunctionSet(self) -> vtkFunctionSet\nC++: virtual vtkFunctionSet *GetFunctionSet()\n\n"},
  {"IsAdaptive", PyvtkInitialValueProblemSolver_IsAdaptive, METH_VARARGS,
   "IsAdaptive(self) -> int\nC++: virtual vtkTypeBool IsAdaptive()\n\nReturns 1 if the solver uses adaptive stepsize control, 0\notherwise\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInitialValueProblemSolver_Doc =
  "vtkInitialValueProblemSolver - Integrate a set of ordinary\ndifferential equations (initial value problem) in time.\n\n"
  "Superclass: vtkObject\n\n"
  "Given a vtkFunctionSet which returns dF_i(x_j, t)/dt given x_j and t,\n"
  "vtkInitialValueProblemSolver computes the value of F_i at t+deltat.\n\n"
  "@warning\n"
  "vtkInitialValueProblemSolver and it's subclasses are not thread-safe.\n"
  "You should create a new integrator for each thread.\n\n"
  "@sa\n"
  "vtkRungeKutta2 vtkRungeKutta4\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInitialValueProblemSolver_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMath.vtkInitialValueProblemSolver", // tp_name
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
  PyvtkInitialValueProblemSolver_Doc, // tp_doc
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

PyObject *PyvtkInitialValueProblemSolver_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInitialValueProblemSolver_Type, PyvtkInitialValueProblemSolver_Methods,
    "vtkInitialValueProblemSolver",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkInitialValueProblemSolver_ErrorCodes_Type);
  PyVTKEnum_Add(&PyvtkInitialValueProblemSolver_ErrorCodes_Type, "vtkInitialValueProblemSolver.ErrorCodes");

  o = (PyObject *)&PyvtkInitialValueProblemSolver_ErrorCodes_Type;
  if (PyDict_SetItemString(d, "ErrorCodes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkInitialValueProblemSolver::ErrorCodes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "OUT_OF_DOMAIN", vtkInitialValueProblemSolver::OUT_OF_DOMAIN },
        { "NOT_INITIALIZED", vtkInitialValueProblemSolver::NOT_INITIALIZED },
        { "UNEXPECTED_VALUE", vtkInitialValueProblemSolver::UNEXPECTED_VALUE },
      };

    o = PyvtkInitialValueProblemSolver_ErrorCodes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInitialValueProblemSolver(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInitialValueProblemSolver_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInitialValueProblemSolver", o) != 0)
  {
    Py_DECREF(o);
  }

}

