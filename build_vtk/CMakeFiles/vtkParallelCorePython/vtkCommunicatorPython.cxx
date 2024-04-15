// python wrapper for vtkCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCommunicator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCommunicator(PyObject *dict); }
extern "C" { PyObject *PyvtkCommunicator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCommunicator_Tags_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkCommunicator.Tags", // tp_name
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
PyObject *PyvtkCommunicator_Tags_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCommunicator_Tags_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCommunicator_StandardOperations_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkCommunicator.StandardOperations", // tp_name
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
PyObject *PyvtkCommunicator_StandardOperations_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCommunicator_StandardOperations_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCommunicator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCommunicator *tempr = vtkCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCommunicator::NewInstance());

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
PyvtkCommunicator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCommunicator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCommunicator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfProcesses(temp0);
    }
    else
    {
      op->vtkCommunicator::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfProcesses() :
      op->vtkCommunicator::GetNumberOfProcesses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLocalProcessId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLocalProcessId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLocalProcessId() :
      op->vtkCommunicator::GetLocalProcessId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Send_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2) :
      op->vtkCommunicator::Send(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Send(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Send(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Send_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Send");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Send(*temp0, temp1, temp2) :
      op->vtkCommunicator::Send(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCommunicator_Send_Methods[] = {
  {"Send", PyvtkCommunicator_Send_s1, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {"Send", PyvtkCommunicator_Send_s2, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {"Send", PyvtkCommunicator_Send_s3, METH_VARARGS,
   "@Pkii *i"},
  {"Send", PyvtkCommunicator_Send_s4, METH_VARARGS,
   "@Pkii *l"},
  {"Send", PyvtkCommunicator_Send_s5, METH_VARARGS,
   "@zkii"},
  {"Send", PyvtkCommunicator_Send_s6, METH_VARARGS,
   "@Pkii *d"},
  {"Send", PyvtkCommunicator_Send_s7, METH_VARARGS,
   "@Pkii *k"},
  {"Send", PyvtkCommunicator_Send_s8, METH_VARARGS,
   "@Wii vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Send(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Send_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Send");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = op->SendVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_Receive_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Receive_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Receive(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Receive(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Receive_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Receive");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Receive(*temp0, temp1, temp2) :
      op->vtkCommunicator::Receive(*temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Receive_Methods[] = {
  {"Receive", PyvtkCommunicator_Receive_s1, METH_VARARGS,
   "@Vii *vtkDataObject"},
  {"Receive", PyvtkCommunicator_Receive_s2, METH_VARARGS,
   "@Vii *vtkDataArray"},
  {"Receive", PyvtkCommunicator_Receive_s3, METH_VARARGS,
   "@Pkii *i"},
  {"Receive", PyvtkCommunicator_Receive_s4, METH_VARARGS,
   "@Pkii *l"},
  {"Receive", PyvtkCommunicator_Receive_s5, METH_VARARGS,
   "@zkii"},
  {"Receive", PyvtkCommunicator_Receive_s6, METH_VARARGS,
   "@Pkii *d"},
  {"Receive", PyvtkCommunicator_Receive_s7, METH_VARARGS,
   "@Pkii *k"},
  {"Receive", PyvtkCommunicator_Receive_s8, METH_VARARGS,
   "@Wii &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Receive(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Receive_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Receive");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_ReceiveDataObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveDataObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->ReceiveDataObject(temp0, temp1) :
      op->vtkCommunicator::ReceiveDataObject(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_GetCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCount() :
      op->vtkCommunicator::GetCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkCommunicator::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Broadcast_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(2*size0);
  long *temp0 = store0.Data();
  long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetStringSize(0);
  vtkPythonArgs::Array<char> store0(2*size0 + 1);
  char *temp0 = store0.Data();
  char *save0 = temp0 + size0 + 1;
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1, temp2) :
      op->vtkCommunicator::Broadcast(temp0, temp1, temp2));

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
PyvtkCommunicator_Broadcast_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(temp0, temp1) :
      op->vtkCommunicator::Broadcast(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Broadcast_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Broadcast");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkMultiProcessStream *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkMultiProcessStream") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Broadcast(*temp0, temp1) :
      op->vtkCommunicator::Broadcast(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Broadcast_Methods[] = {
  {"Broadcast", PyvtkCommunicator_Broadcast_s1, METH_VARARGS,
   "@Pki *i"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s2, METH_VARARGS,
   "@Pki *l"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s3, METH_VARARGS,
   "@zki"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s4, METH_VARARGS,
   "@Pki *d"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s5, METH_VARARGS,
   "@Pki *k"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s6, METH_VARARGS,
   "@Vi *vtkDataObject"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s7, METH_VARARGS,
   "@Vi *vtkDataArray"},
  {"Broadcast", PyvtkCommunicator_Broadcast_s8, METH_VARARGS,
   "@Wi &vtkMultiProcessStream"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Broadcast(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Broadcast_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Broadcast");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_Gather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Gather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Gather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Gather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Gather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Gather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_Gather_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Gather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::vector<vtkSmartPointer<vtkDataObject>> temp1(ap.GetArgSize(1));
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1.data(), temp1.size(), "vtkDataObject") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Gather(temp0, temp1, temp2) :
      op->vtkCommunicator::Gather(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Gather_Methods[] = {
  {"Gather", PyvtkCommunicator_Gather_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"Gather", PyvtkCommunicator_Gather_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"Gather", PyvtkCommunicator_Gather_s3, METH_VARARGS,
   "@zzki"},
  {"Gather", PyvtkCommunicator_Gather_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"Gather", PyvtkCommunicator_Gather_s5, METH_VARARGS,
   "@PPki *k *k"},
  {"Gather", PyvtkCommunicator_Gather_s6, METH_VARARGS,
   "@VVi *vtkDataArray *vtkDataArray"},
  {"Gather", PyvtkCommunicator_Gather_s7, METH_VARARGS,
   "@VTi *vtkDataObject *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Gather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Gather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Gather");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_GatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_GatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_GatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_GatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_GatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_GatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_GatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  vtkIdTypeArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp3, "vtkIdTypeArray") &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_GatherV_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GatherV(temp0, temp1, temp2) :
      op->vtkCommunicator::GatherV(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_GatherV_Methods[] = {
  {"GatherV", PyvtkCommunicator_GatherV_s1, METH_VARARGS,
   "@PPkPPi *i *i *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s2, METH_VARARGS,
   "@PPkPPi *l *l *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s3, METH_VARARGS,
   "@zzkPPi *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s4, METH_VARARGS,
   "@PPkPPi *d *d *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s5, METH_VARARGS,
   "@PPkPPi *k *k *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s6, METH_VARARGS,
   "@VVPPi *vtkDataArray *vtkDataArray *k *k"},
  {"GatherV", PyvtkCommunicator_GatherV_s7, METH_VARARGS,
   "@VVVVi *vtkDataArray *vtkDataArray *vtkIdTypeArray *vtkIdTypeArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_GatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_GatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_GatherV_s8(self, args);
    case 5:
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GatherV");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_Scatter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Scatter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Scatter_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Scatter_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Scatter_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_Scatter_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Scatter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Scatter(temp0, temp1, temp2) :
      op->vtkCommunicator::Scatter(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Scatter_Methods[] = {
  {"Scatter", PyvtkCommunicator_Scatter_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"Scatter", PyvtkCommunicator_Scatter_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"Scatter", PyvtkCommunicator_Scatter_s3, METH_VARARGS,
   "@zzki"},
  {"Scatter", PyvtkCommunicator_Scatter_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"Scatter", PyvtkCommunicator_Scatter_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Scatter(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Scatter_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_Scatter_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Scatter");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_ScatterV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ScatterV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ScatterV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ScatterV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkCommunicator_ScatterV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterV(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ScatterV(temp0, temp1, temp2, temp3, temp4, temp5));

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

static PyMethodDef PyvtkCommunicator_ScatterV_Methods[] = {
  {"ScatterV", PyvtkCommunicator_ScatterV_s1, METH_VARARGS,
   "@PPPPki *i *i *k *k"},
  {"ScatterV", PyvtkCommunicator_ScatterV_s2, METH_VARARGS,
   "@PPPPki *l *l *k *k"},
  {"ScatterV", PyvtkCommunicator_ScatterV_s3, METH_VARARGS,
   "@zzPPki *k *k"},
  {"ScatterV", PyvtkCommunicator_ScatterV_s4, METH_VARARGS,
   "@PPPPki *d *d *k *k"},
  {"ScatterV", PyvtkCommunicator_ScatterV_s5, METH_VARARGS,
   "@PPPPki *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_ScatterV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_ScatterV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ScatterV");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_AllGather_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

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
PyvtkCommunicator_AllGather_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

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
PyvtkCommunicator_AllGather_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

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
PyvtkCommunicator_AllGather_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

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
PyvtkCommunicator_AllGather_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1, temp2) :
      op->vtkCommunicator::AllGather(temp0, temp1, temp2));

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
PyvtkCommunicator_AllGather_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkCommunicator::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_AllGather_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGather");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataObject *temp0 = nullptr;
  std::vector<vtkSmartPointer<vtkDataObject>> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetArray(temp1.data(), temp1.size(), "vtkDataObject"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGather(temp0, temp1) :
      op->vtkCommunicator::AllGather(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGather_Methods[] = {
  {"AllGather", PyvtkCommunicator_AllGather_s1, METH_VARARGS,
   "@PPk *i *i"},
  {"AllGather", PyvtkCommunicator_AllGather_s2, METH_VARARGS,
   "@PPk *l *l"},
  {"AllGather", PyvtkCommunicator_AllGather_s3, METH_VARARGS,
   "@zzk"},
  {"AllGather", PyvtkCommunicator_AllGather_s4, METH_VARARGS,
   "@PPk *d *d"},
  {"AllGather", PyvtkCommunicator_AllGather_s5, METH_VARARGS,
   "@PPk *k *k"},
  {"AllGather", PyvtkCommunicator_AllGather_s6, METH_VARARGS,
   "@VV *vtkDataArray *vtkDataArray"},
  {"AllGather", PyvtkCommunicator_AllGather_s7, METH_VARARGS,
   "@VT *vtkDataObject *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllGather(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGather_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGather");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_AllGatherV_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_AllGatherV_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_AllGatherV_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_AllGatherV_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_AllGatherV_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkCommunicator_AllGatherV_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllGatherV(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllGatherV_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherV");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray"))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherV(temp0, temp1) :
      op->vtkCommunicator::AllGatherV(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllGatherV_Methods[] = {
  {"AllGatherV", PyvtkCommunicator_AllGatherV_s1, METH_VARARGS,
   "@PPkPP *i *i *k *k"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV_s2, METH_VARARGS,
   "@PPkPP *l *l *k *k"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV_s3, METH_VARARGS,
   "@zzkPP *k *k"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV_s4, METH_VARARGS,
   "@PPkPP *d *d *k *k"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV_s5, METH_VARARGS,
   "@PPkPP *k *k *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllGatherV(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllGatherV_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkCommunicator_AllGatherV_s6(self, args);
    case 2:
      return PyvtkCommunicator_AllGatherV_s7(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllGatherV");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_Reduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_Reduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_Reduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_Reduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_Reduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3, temp4));

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
PyvtkCommunicator_Reduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Reduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::Reduce(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_Reduce_Methods[] = {
  {"Reduce", PyvtkCommunicator_Reduce_s1, METH_VARARGS,
   "@PPkii *i *i"},
  {"Reduce", PyvtkCommunicator_Reduce_s2, METH_VARARGS,
   "@PPkii *l *l"},
  {"Reduce", PyvtkCommunicator_Reduce_s3, METH_VARARGS,
   "@zzkii"},
  {"Reduce", PyvtkCommunicator_Reduce_s4, METH_VARARGS,
   "@PPkii *d *d"},
  {"Reduce", PyvtkCommunicator_Reduce_s5, METH_VARARGS,
   "@PPkii *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_Reduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_Reduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkCommunicator_Reduce_s6(self, args);
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Reduce");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_AllReduce_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(size0);
  int *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllReduce_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long> store0(size0);
  long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long> store1(2*size1);
  long *temp1 = store1.Data();
  long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllReduce_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetStringSize(1);
  vtkPythonArgs::Array<char> store1(2*size1 + 1);
  char *temp1 = store1.Data();
  char *save1 = temp1 + size1 + 1;
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllReduce_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(size0);
  double *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllReduce_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(size0);
  long long *temp0 = store0.Data();
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<long long> store1(2*size1);
  long long *temp1 = store1.Data();
  long long *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2, temp3));

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
PyvtkCommunicator_AllReduce_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduce");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  vtkDataArray *temp0 = nullptr;
  vtkDataArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduce(temp0, temp1, temp2) :
      op->vtkCommunicator::AllReduce(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCommunicator_AllReduce_Methods[] = {
  {"AllReduce", PyvtkCommunicator_AllReduce_s1, METH_VARARGS,
   "@PPki *i *i"},
  {"AllReduce", PyvtkCommunicator_AllReduce_s2, METH_VARARGS,
   "@PPki *l *l"},
  {"AllReduce", PyvtkCommunicator_AllReduce_s3, METH_VARARGS,
   "@zzki"},
  {"AllReduce", PyvtkCommunicator_AllReduce_s4, METH_VARARGS,
   "@PPki *d *d"},
  {"AllReduce", PyvtkCommunicator_AllReduce_s5, METH_VARARGS,
   "@PPki *k *k"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCommunicator_AllReduce(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCommunicator_AllReduce_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCommunicator_AllReduce_s6(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AllReduce");
  return nullptr;
}


static PyObject *
PyvtkCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->BroadcastVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->GatherVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ScatterVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  long long temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AllGatherVoidArray(temp0, temp1, temp2, temp3) :
      op->vtkCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(2*size4);
  long long *temp4 = store4.Data();
  long long *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetValue(temp5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    int tempr = (ap.IsBound() ?
      op->ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkCommunicator_CanProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CanProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->CanProbe() :
      op->vtkCommunicator::CanProbe());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_Probe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Probe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCommunicator *op = static_cast<vtkCommunicator *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    int tempr = (ap.IsBound() ?
      op->Probe(temp0, temp1, temp2) :
      op->vtkCommunicator::Probe(temp0, temp1, temp2));

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
PyvtkCommunicator_SetUseCopy(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetUseCopy");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCommunicator::SetUseCopy(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetParentProcessor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParentProcessor");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::GetParentProcessor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_GetLeftChildProcessor(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetLeftChildProcessor");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCommunicator::GetLeftChildProcessor(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_MarshalDataObject(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MarshalDataObject");

  vtkDataObject *temp0 = nullptr;
  vtkCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataObject") &&
      ap.GetVTKObject(temp1, "vtkCharArray"))
  {
    int tempr = vtkCommunicator::MarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCommunicator_UnMarshalDataObject_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnMarshalDataObject");

  vtkCharArray *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCharArray") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    int tempr = vtkCommunicator::UnMarshalDataObject(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_UnMarshalDataObject_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnMarshalDataObject");

  vtkCharArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCharArray"))
  {
    vtkSmartPointer<vtkDataObject> tempr = vtkCommunicator::UnMarshalDataObject(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCommunicator_UnMarshalDataObject(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkCommunicator_UnMarshalDataObject_s1(self, args);
    case 1:
      return PyvtkCommunicator_UnMarshalDataObject_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnMarshalDataObject");
  return nullptr;
}

static PyMethodDef PyvtkCommunicator_Methods[] = {
  {"IsTypeOf", PyvtkCommunicator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCommunicator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCommunicator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCommunicator\nC++: static vtkCommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCommunicator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCommunicator\nC++: vtkCommunicator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCommunicator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCommunicator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfProcesses", PyvtkCommunicator_SetNumberOfProcesses, METH_VARARGS,
   "SetNumberOfProcesses(self, num:int) -> None\nC++: virtual void SetNumberOfProcesses(int num)\n\nSet the number of processes you will be using.  This defaults to\nthe maximum number available.  If you set this to a value higher\nthan the default, you will get an error.\n"},
  {"GetNumberOfProcesses", PyvtkCommunicator_GetNumberOfProcesses, METH_VARARGS,
   "GetNumberOfProcesses(self) -> int\nC++: virtual int GetNumberOfProcesses()\n\n"},
  {"GetLocalProcessId", PyvtkCommunicator_GetLocalProcessId, METH_VARARGS,
   "GetLocalProcessId(self) -> int\nC++: virtual int GetLocalProcessId()\n\nTells you which process [0, NumProcess) you are in.\n"},
  {"Send", PyvtkCommunicator_Send, METH_VARARGS,
   "Send(self, data:vtkDataObject, remoteHandle:int, tag:int) -> int\nC++: int Send(vtkDataObject *data, int remoteHandle, int tag)\nSend(self, data:vtkDataArray, remoteHandle:int, tag:int) -> int\nC++: int Send(vtkDataArray *data, int remoteHandle, int tag)\nSend(self, data:(int, ...), length:int, remoteHandle:int, tag:int)\n     -> int\nC++: int Send(const int *data, vtkIdType length, int remoteHandle,\n     int tag)\nSend(self, data:(int, ...), length:int, remoteHandle:int, tag:int)\n     -> int\nC++: int Send(const long *data, vtkIdType length,\n    int remoteHandle, int tag)\nSend(self, data:str, length:int, remoteHandle:int, tag:int) -> int\nC++: int Send(const char *data, vtkIdType length,\n    int remoteHandle, int tag)\nSend(self, data:(float, ...), length:int, remoteHandle:int,\n    tag:int) -> int\nC++: int Send(const double *data, vtkIdType length,\n    int remoteHandle, int tag)\nSend(self, data:(int, ...), length:int, remoteHandle:int, tag:int)\n     -> int\nC++: int Send(const long long *data, vtkIdType length,\n    int remoteHandle, int tag)\nSend(self, stream:vtkMultiProcessStream, remoteId:int, tag:int)\n    -> int\nC++: int Send(const vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method sends a data object to a destination. Tag eliminates\nambiguity and is used to match sends to receives.\n"},
  {"SendVoidArray", PyvtkCommunicator_SendVoidArray, METH_VARARGS,
   "SendVoidArray(self, data:Pointer, length:int, type:int,\n    remoteHandle:int, tag:int) -> int\nC++: virtual int SendVoidArray(const void *data, vtkIdType length,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to send various arrays of\ndata. The type arg is one of the VTK type constants recognized by\nthe vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  length is\nmeasured in number of values (as opposed to number of bytes).\n"},
  {"Receive", PyvtkCommunicator_Receive, METH_VARARGS,
   "Receive(self, data:vtkDataObject, remoteHandle:int, tag:int)\n    -> int\nC++: int Receive(vtkDataObject *data, int remoteHandle, int tag)\nReceive(self, data:vtkDataArray, remoteHandle:int, tag:int) -> int\nC++: int Receive(vtkDataArray *data, int remoteHandle, int tag)\nReceive(self, data:[int, ...], maxlength:int, remoteHandle:int,\n    tag:int) -> int\nC++: int Receive(int *data, vtkIdType maxlength, int remoteHandle,\n     int tag)\nReceive(self, data:[int, ...], maxlength:int, remoteHandle:int,\n    tag:int) -> int\nC++: int Receive(long *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nReceive(self, data:str, maxlength:int, remoteHandle:int, tag:int)\n    -> int\nC++: int Receive(char *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nReceive(self, data:[float, ...], maxlength:int, remoteHandle:int,\n    tag:int) -> int\nC++: int Receive(double *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nReceive(self, data:[int, ...], maxlength:int, remoteHandle:int,\n    tag:int) -> int\nC++: int Receive(long long *data, vtkIdType maxlength,\n    int remoteHandle, int tag)\nReceive(self, stream:vtkMultiProcessStream, remoteId:int, tag:int)\n     -> int\nC++: int Receive(vtkMultiProcessStream &stream, int remoteId,\n    int tag)\n\nThis method receives a data object from a corresponding send. It\nblocks until the receive is finished.\n"},
  {"ReceiveDataObject", PyvtkCommunicator_ReceiveDataObject, METH_VARARGS,
   "ReceiveDataObject(self, remoteHandle:int, tag:int)\n    -> vtkDataObject\nC++: vtkDataObject *ReceiveDataObject(int remoteHandle, int tag)\n\nThe caller does not have to know the data type before this call\nis made. It returns the newly created object.\n"},
  {"ReceiveVoidArray", PyvtkCommunicator_ReceiveVoidArray, METH_VARARGS,
   "ReceiveVoidArray(self, data:Pointer, maxlength:int, type:int,\n    remoteHandle:int, tag:int) -> int\nC++: virtual int ReceiveVoidArray(void *data, vtkIdType maxlength,\n     int type, int remoteHandle, int tag)\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {"GetCount", PyvtkCommunicator_GetCount, METH_VARARGS,
   "GetCount(self) -> int\nC++: virtual vtkIdType GetCount()\n\nReturns the number of words received by the most recent\nReceive(). Note that this is not the number of bytes received,\nbut the number of items of the data-type received by the most\nrecent Receive() eg. if Receive(int*,..) was used, then this\nreturns the number of ints received; if Receive(double*,..) was\nused, then this returns the number of doubles received etc. The\nreturn value is valid only after a successful Receive().\n"},
  {"Barrier", PyvtkCommunicator_Barrier, METH_VARARGS,
   "Barrier(self) -> None\nC++: virtual void Barrier()\n\nWill block the processes until all other processes reach the\nBarrier function.\n"},
  {"Broadcast", PyvtkCommunicator_Broadcast, METH_VARARGS,
   "Broadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(int *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(long *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:str, length:int, srcProcessId:int) -> int\nC++: int Broadcast(char *data, vtkIdType length, int srcProcessId)\nBroadcast(self, data:[float, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(double *data, vtkIdType length,\n    int srcProcessId)\nBroadcast(self, data:[int, ...], length:int, srcProcessId:int)\n    -> int\nC++: int Broadcast(long long *data, vtkIdType length,\n    int srcProcessId)\nBroadcast(self, data:vtkDataObject, srcProcessId:int) -> int\nC++: int Broadcast(vtkDataObject *data, int srcProcessId)\nBroadcast(self, data:vtkDataArray, srcProcessId:int) -> int\nC++: int Broadcast(vtkDataArray *data, int srcProcessId)\nBroadcast(self, stream:vtkMultiProcessStream, srcProcessId:int)\n    -> int\nC++: int Broadcast(vtkMultiProcessStream &stream,\n    int srcProcessId)\n\nBroadcast sends the array in the process with id srcProcessId to\nall of the other processes.  All processes must call these method\nwith the same arguments in order for it to complete.\n"},
  {"Gather", PyvtkCommunicator_Gather, METH_VARARGS,
   "Gather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:str, recvBuffer:str, length:int,\n    destProcessId:int) -> int\nC++: int Gather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int destProcessId)\nGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, destProcessId:int) -> int\nC++: int Gather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int destProcessId)\nGather(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    destProcessId:int) -> int\nC++: int Gather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int destProcessId)\nGather(self, sendBuffer:vtkDataObject, recvBuffer:[vtkDataObject,\n    ...], destProcessId:int) -> int\nC++: int Gather(vtkDataObject *sendBuffer,\n    std::vector<vtkSmartPointer<vtkDataObject> > &recvBuffer,\n    int destProcessId)\n\nGather collects arrays in the process with id destProcessId. \nEach process (including the destination) sends the contents of\nits send buffer to the destination process.  The destination\nprocess receives the messages and stores them in rank order.  The\nlength argument (which must be the same on all processes) is the\nlength of the sendBuffers.  The recvBuffer (on the destination\nprocess) must be of length length*numProcesses.  Gather is the\ninverse operation of Scatter.\n"},
  {"GatherV", PyvtkCommunicator_GatherV, METH_VARARGS,
   "GatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:str, recvBuffer:str, sendLength:int,\n    recvLengths:[int, ...], offsets:[int, ...], destProcessId:int)\n     -> int\nC++: int GatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    destProcessId:int) -> int\nC++: int GatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int destProcessId)\nGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    recvLengths:[int, ...], offsets:[int, ...], destProcessId:int)\n     -> int\nC++: int GatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets, int destProcessId)\n\nGatherV is the vector variant of Gather.  It extends the\nfunctionality of Gather by allowing a varying count of data from\neach process. GatherV collects arrays in the  ...\n [Truncated]\n"},
  {"Scatter", PyvtkCommunicator_Scatter, METH_VARARGS,
   "Scatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:str, recvBuffer:str, length:int,\n    srcProcessId:int) -> int\nC++: int Scatter(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, srcProcessId:int) -> int\nC++: int Scatter(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int srcProcessId)\nScatter(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    srcProcessId:int) -> int\nC++: int Scatter(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int srcProcessId)\n\nScatter takes an array in the process with id srcProcessId and\ndistributes it.  Each process (including the source) receives a\nportion of the send buffer.  Process 0 receives the first length\nvalues, process 1 receives the second length values, and so on. \nScatter is the inverse operation of Gather.\n"},
  {"ScatterV", PyvtkCommunicator_ScatterV, METH_VARARGS,
   "ScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:str, recvBuffer:str, sendLengths:[int,\n    ...], offsets:[int, ...], recvLength:int, srcProcessId:int)\n    -> int\nC++: int ScatterV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int srcProcessId)\nScatterV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    srcProcessId:int) -> int\nC++: int ScatterV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType *sendLengths,\n    vtkIdType *offsets, vtkIdType recvLength, int srcProcessId)\n\nScatterV is the vector variant of Scatter.  It extends the\nfunctionality of Scatter by allowing a varying count of data to\neach process. ScatterV takes an array in the process with id\nsrcProcessId and distributes it.  Each process (including the\nsource) receives a portion of the send buffer defined by the\nsendLengths and offsets arrays.\n"},
  {"AllGather", PyvtkCommunicator_AllGather, METH_VARARGS,
   "AllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:str, recvBuffer:str, length:int) -> int\nC++: int AllGather(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int) -> int\nC++: int AllGather(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length)\nAllGather(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int) -> int\nC++: int AllGather(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length)\nAllGather(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray)\n    -> int\nC++: int AllGather(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\nAllGather(self, sendBuffer:vtkDataObject,\n    recvBuffer:[vtkDataObject, ...]) -> int\nC++: int AllGather(vtkDataObject *sendBuffer,\n    std::vector<vtkSmartPointer<vtkDataObject> > &recvBuffer)\n\nSame as gather except that the result ends up on all processes.\n"},
  {"AllGatherV", PyvtkCommunicator_AllGatherV, METH_VARARGS,
   "AllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const int *sendBuffer, int *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const long *sendBuffer, long *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:str, recvBuffer:str, sendLength:int,\n    recvLengths:[int, ...], offsets:[int, ...]) -> int\nC++: int AllGatherV(const char *sendBuffer, char *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n     sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const double *sendBuffer, double *recvBuffer,\n    vtkIdType sendLength, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...])\n    -> int\nC++: int AllGatherV(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets)\nAllGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n     recvLengths:[int, ...], offsets:[int, ...]) -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, vtkIdType *recvLengths,\n    vtkIdType *offsets)\nAllGatherV(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray)\n     -> int\nC++: int AllGatherV(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer)\n\nSame as GatherV except that the result is placed in all\nprocesses.\n"},
  {"Reduce", PyvtkCommunicator_Reduce, METH_VARARGS,
   "Reduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:str, recvBuffer:str, length:int,\n    operation:int, destProcessId:int) -> int\nC++: int Reduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation, int destProcessId)\nReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int, destProcessId:int) -> int\nC++: int Reduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation,\n    int destProcessId)\nReduce(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    operation:int, destProcessId:int) -> int\nC++: int Reduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation, int destProcessId)\n\nReduce an array to the given destination process.  This version\nof Reduce takes an identifier defined in the\nvtkCommunicator::StandardOperations enum to define the operation.\n"},
  {"AllReduce", PyvtkCommunicator_AllReduce, METH_VARARGS,
   "AllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const int *sendBuffer, int *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const long *sendBuffer, long *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:str, recvBuffer:str, length:int,\n    operation:int) -> int\nC++: int AllReduce(const char *sendBuffer, char *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(float, ...), recvBuffer:[float, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const double *sendBuffer, double *recvBuffer,\n    vtkIdType length, int operation)\nAllReduce(self, sendBuffer:(int, ...), recvBuffer:[int, ...],\n    length:int, operation:int) -> int\nC++: int AllReduce(const long long *sendBuffer,\n    long long *recvBuffer, vtkIdType length, int operation)\nAllReduce(self, sendBuffer:vtkDataArray, recvBuffer:vtkDataArray,\n    operation:int) -> int\nC++: int AllReduce(vtkDataArray *sendBuffer,\n    vtkDataArray *recvBuffer, int operation)\n\nSame as Reduce except that the result is placed in all of the\nprocesses.\n"},
  {"BroadcastVoidArray", PyvtkCommunicator_BroadcastVoidArray, METH_VARARGS,
   "BroadcastVoidArray(self, data:Pointer, length:int, type:int,\n    srcProcessId:int) -> int\nC++: virtual int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId)\n\nSubclasses should reimplement these if they have a more efficient\nimplementation.\n"},
  {"GatherVoidArray", PyvtkCommunicator_GatherVoidArray, METH_VARARGS,
   "GatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, destProcessId:int) -> int\nC++: virtual int GatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int destProcessId)\n\n"},
  {"GatherVVoidArray", PyvtkCommunicator_GatherVVoidArray, METH_VARARGS,
   "GatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int, destProcessId:int) -> int\nC++: virtual int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId)\n\n"},
  {"ScatterVoidArray", PyvtkCommunicator_ScatterVoidArray, METH_VARARGS,
   "ScatterVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, srcProcessId:int) -> int\nC++: virtual int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId)\n\n"},
  {"ScatterVVoidArray", PyvtkCommunicator_ScatterVVoidArray, METH_VARARGS,
   "ScatterVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    type:int, srcProcessId:int) -> int\nC++: virtual int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId)\n\n"},
  {"AllGatherVoidArray", PyvtkCommunicator_AllGatherVoidArray, METH_VARARGS,
   "AllGatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int) -> int\nC++: virtual int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type)\n\n"},
  {"AllGatherVVoidArray", PyvtkCommunicator_AllGatherVVoidArray, METH_VARARGS,
   "AllGatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int) -> int\nC++: virtual int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n\n"},
  {"ReduceVoidArray", PyvtkCommunicator_ReduceVoidArray, METH_VARARGS,
   "ReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int, destProcessId:int) -> int\nC++: virtual int ReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation,\n    int destProcessId)\n\n"},
  {"AllReduceVoidArray", PyvtkCommunicator_AllReduceVoidArray, METH_VARARGS,
   "AllReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int) -> int\nC++: virtual int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n\n"},
  {"CanProbe", PyvtkCommunicator_CanProbe, METH_VARARGS,
   "CanProbe(self) -> bool\nC++: virtual bool CanProbe()\n\nCheck if this communicator implements a probe operation\n\nThis method is implemented for the probing operation for now so\nas to not have to implement it for all the subclasses of\nvtkCommunicator. In the future, one could imagine making the\nProbe methode a pure virtual method and having it implemented\neverwhere so as to no longer need the CanProbe method.\n"},
  {"Probe", PyvtkCommunicator_Probe, METH_VARARGS,
   "Probe(self, source:int, tag:int, actualSource:[int, ...]) -> int\nC++: virtual int Probe(int source, int tag, int *actualSource)\n\nBlocking test for checking for a message tagged with tag from\nsource process (if source == ANY_SOURCE check for any message).\nRank in actualSource is rank sending a message.\n\nCheck if implemented in this communicator using the CanProbe\nmethod before using.\n\nReturns 1 on success and 0 on failure.\n"},
  {"SetUseCopy", PyvtkCommunicator_SetUseCopy, METH_VARARGS,
   "SetUseCopy(useCopy:int) -> None\nC++: static void SetUseCopy(int useCopy)\n\n"},
  {"GetParentProcessor", PyvtkCommunicator_GetParentProcessor, METH_VARARGS,
   "GetParentProcessor(pid:int) -> int\nC++: static int GetParentProcessor(int pid)\n\nSome helper functions when dealing with heap tree - based\nalgorithms - we don't need a function for getting the right\nprocessor since it is 1 + theLeftProcessor\n"},
  {"GetLeftChildProcessor", PyvtkCommunicator_GetLeftChildProcessor, METH_VARARGS,
   "GetLeftChildProcessor(pid:int) -> int\nC++: static int GetLeftChildProcessor(int pid)\n\n"},
  {"MarshalDataObject", PyvtkCommunicator_MarshalDataObject, METH_VARARGS,
   "MarshalDataObject(object:vtkDataObject, buffer:vtkCharArray)\n    -> int\nC++: static int MarshalDataObject(vtkDataObject *object,\n    vtkCharArray *buffer)\n\nConvert a data object into a string that can be transmitted and\nvice versa. Returns 1 for success and 0 for failure. WARNING:\nThis will only work for types that have a vtkDataWriter class.\n"},
  {"UnMarshalDataObject", PyvtkCommunicator_UnMarshalDataObject, METH_VARARGS,
   "UnMarshalDataObject(buffer:vtkCharArray, object:vtkDataObject)\n    -> int\nC++: static int UnMarshalDataObject(vtkCharArray *buffer,\n    vtkDataObject *object)\nUnMarshalDataObject(buffer:vtkCharArray) -> vtkDataObject\nC++: static vtkSmartPointer<vtkDataObject> UnMarshalDataObject(\n    vtkCharArray *buffer)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCommunicator_Doc =
  "vtkCommunicator - Used to send/receive messages in a multiprocess\nenvironment.\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class which contains functionality for sending\n"
  "and receiving inter-process messages. It contains methods for\n"
  "marshaling an object into a string (currently used by the MPI\n"
  "communicator but not the shared memory communicator).\n\n"
  "@warning\n"
  "Communication between systems with different vtkIdTypes is not\n"
  "supported. All machines have to have the same vtkIdType.\n\n"
  "@sa\n"
  "vtkMPICommunicator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkCommunicator", // tp_name
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
  PyvtkCommunicator_Doc, // tp_doc
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

PyObject *PyvtkCommunicator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCommunicator_Type, PyvtkCommunicator_Methods,
    "vtkCommunicator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCommunicator_Tags_Type);
  PyVTKEnum_Add(&PyvtkCommunicator_Tags_Type, "vtkCommunicator.Tags");

  o = (PyObject *)&PyvtkCommunicator_Tags_Type;
  if (PyDict_SetItemString(d, "Tags", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkCommunicator_StandardOperations_Type);
  PyVTKEnum_Add(&PyvtkCommunicator_StandardOperations_Type, "vtkCommunicator.StandardOperations");

  o = (PyObject *)&PyvtkCommunicator_StandardOperations_Type;
  if (PyDict_SetItemString(d, "StandardOperations", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkCommunicator::Tags cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "BROADCAST_TAG", vtkCommunicator::BROADCAST_TAG },
        { "GATHER_TAG", vtkCommunicator::GATHER_TAG },
        { "GATHERV_TAG", vtkCommunicator::GATHERV_TAG },
        { "SCATTER_TAG", vtkCommunicator::SCATTER_TAG },
        { "SCATTERV_TAG", vtkCommunicator::SCATTERV_TAG },
        { "REDUCE_TAG", vtkCommunicator::REDUCE_TAG },
        { "BARRIER_TAG", vtkCommunicator::BARRIER_TAG },
      };

    o = PyvtkCommunicator_Tags_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 10; c++)
  {
    typedef vtkCommunicator::StandardOperations cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[10] = {
        { "MAX_OP", vtkCommunicator::MAX_OP },
        { "MIN_OP", vtkCommunicator::MIN_OP },
        { "SUM_OP", vtkCommunicator::SUM_OP },
        { "PRODUCT_OP", vtkCommunicator::PRODUCT_OP },
        { "LOGICAL_AND_OP", vtkCommunicator::LOGICAL_AND_OP },
        { "BITWISE_AND_OP", vtkCommunicator::BITWISE_AND_OP },
        { "LOGICAL_OR_OP", vtkCommunicator::LOGICAL_OR_OP },
        { "BITWISE_OR_OP", vtkCommunicator::BITWISE_OR_OP },
        { "LOGICAL_XOR_OP", vtkCommunicator::LOGICAL_XOR_OP },
        { "BITWISE_XOR_OP", vtkCommunicator::BITWISE_XOR_OP },
      };

    o = PyvtkCommunicator_StandardOperations_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

