// python wrapper for vtkSocketCommunicator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSocketCommunicator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSocketCommunicator(PyObject *dict); }
extern "C" { PyObject *PyvtkSocketCommunicator_ClassNew(); }

#ifndef DECLARED_PyvtkCommunicator_ClassNew
extern "C" { PyObject *PyvtkCommunicator_ClassNew(); }
#define DECLARED_PyvtkCommunicator_ClassNew
#endif

static PyObject *
PyvtkSocketCommunicator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSocketCommunicator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketCommunicator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSocketCommunicator *tempr = vtkSocketCommunicator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketCommunicator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketCommunicator::NewInstance());

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
PyvtkSocketCommunicator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSocketCommunicator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSocketCommunicator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkSocketCommunicator::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_WaitForConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkServerSocket *temp0 = nullptr;
  unsigned long temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkServerSocket") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0, temp1) :
      op->vtkSocketCommunicator::WaitForConnection(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_WaitForConnection_Methods[] = {
  {"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection_s1, METH_VARARGS,
   "@i"},
  {"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection_s2, METH_VARARGS,
   "@V|L *vtkServerSocket"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSocketCommunicator_WaitForConnection(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSocketCommunicator_WaitForConnection_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSocketCommunicator_WaitForConnection_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "WaitForConnection");
  return nullptr;
}


static PyObject *
PyvtkSocketCommunicator_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseConnection();
    }
    else
    {
      op->vtkSocketCommunicator::CloseConnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ConnectTo(temp0, temp1) :
      op->vtkSocketCommunicator::ConnectTo(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytesInReceivedData() :
      op->vtkSocketCommunicator::GetSwapBytesInReceivedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsConnected(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsConnected");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsConnected() :
      op->vtkSocketCommunicator::GetIsConnected());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetNumberOfProcesses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfProcesses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::SetNumberOfProcesses(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SendVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SendVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->SendVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::SendVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_ReceiveVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReceiveVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp1;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4) :
      op->vtkSocketCommunicator::ReceiveVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_Barrier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Barrier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Barrier();
    }
    else
    {
      op->vtkSocketCommunicator::Barrier();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BroadcastVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BroadcastVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::BroadcastVoidArray(temp0, temp1, temp2, temp3));

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
PyvtkSocketCommunicator_GatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::GatherVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_GatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::GatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkSocketCommunicator_ScatterVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ScatterVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_ScatterVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScatterVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ScatterVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

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
PyvtkSocketCommunicator_AllGatherVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllGatherVoidArray(temp0, temp1, temp2, temp3));

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
PyvtkSocketCommunicator_AllGatherVVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllGatherVVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllGatherVVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkSocketCommunicator_ReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::ReduceVoidArray(temp0, temp1, temp2, temp3, temp4, temp5));

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
PyvtkSocketCommunicator_AllReduceVoidArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllReduceVoidArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

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
      op->vtkSocketCommunicator::AllReduceVoidArray(temp0, temp1, temp2, temp3, temp4));

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
PyvtkSocketCommunicator_SetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPerformHandshake(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetPerformHandshake(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMinValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshakeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshakeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshakeMaxValue() :
      op->vtkSocketCommunicator::GetPerformHandshakeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PerformHandshakeOn();
    }
    else
    {
      op->vtkSocketCommunicator::PerformHandshakeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_PerformHandshakeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerformHandshakeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PerformHandshakeOff();
    }
    else
    {
      op->vtkSocketCommunicator::PerformHandshakeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetPerformHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPerformHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPerformHandshake() :
      op->vtkSocketCommunicator::GetPerformHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_LogToFile_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0) :
      op->vtkSocketCommunicator::LogToFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogToFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->LogToFile(temp0, temp1) :
      op->vtkSocketCommunicator::LogToFile(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSocketCommunicator_LogToFile(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSocketCommunicator_LogToFile_s1(self, args);
    case 2:
      return PyvtkSocketCommunicator_LogToFile_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LogToFile");
  return nullptr;
}


static PyObject *
PyvtkSocketCommunicator_SetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReportErrors(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetReportErrors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetReportErrors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReportErrors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReportErrors() :
      op->vtkSocketCommunicator::GetReportErrors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkClientSocket *tempr = (ap.IsBound() ?
      op->GetSocket() :
      op->vtkSocketCommunicator::GetSocket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_SetSocket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSocket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  vtkClientSocket *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkClientSocket"))
  {
    if (ap.IsBound())
    {
      op->SetSocket(temp0);
    }
    else
    {
      op->vtkSocketCommunicator::SetSocket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_Handshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Handshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Handshake() :
      op->vtkSocketCommunicator::Handshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ServerSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ServerSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ServerSideHandshake() :
      op->vtkSocketCommunicator::ServerSideHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_ClientSideHandshake(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClientSideHandshake");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->ClientSideHandshake() :
      op->vtkSocketCommunicator::ClientSideHandshake());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetIsServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIsServer() :
      op->vtkSocketCommunicator::GetIsServer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_GetVersion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVersion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkSocketCommunicator::GetVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_BufferCurrentMessage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BufferCurrentMessage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BufferCurrentMessage();
    }
    else
    {
      op->vtkSocketCommunicator::BufferCurrentMessage();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketCommunicator_HasBufferredMessages(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasBufferredMessages");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketCommunicator *op = static_cast<vtkSocketCommunicator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasBufferredMessages() :
      op->vtkSocketCommunicator::HasBufferredMessages());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketCommunicator_Methods[] = {
  {"IsTypeOf", PyvtkSocketCommunicator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSocketCommunicator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSocketCommunicator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSocketCommunicator\nC++: static vtkSocketCommunicator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSocketCommunicator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSocketCommunicator\nC++: vtkSocketCommunicator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSocketCommunicator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSocketCommunicator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"WaitForConnection", PyvtkSocketCommunicator_WaitForConnection, METH_VARARGS,
   "WaitForConnection(self, port:int) -> int\nC++: virtual int WaitForConnection(int port)\nWaitForConnection(self, socket:vtkServerSocket, msec:int=0) -> int\nC++: virtual int WaitForConnection(vtkServerSocket *socket,\n    unsigned long msec=0)\n\nWait for connection on a given port. These methods return 1 on\nsuccess, 0 on error.\n"},
  {"CloseConnection", PyvtkSocketCommunicator_CloseConnection, METH_VARARGS,
   "CloseConnection(self) -> None\nC++: virtual void CloseConnection()\n\nClose a connection.\n"},
  {"ConnectTo", PyvtkSocketCommunicator_ConnectTo, METH_VARARGS,
   "ConnectTo(self, hostName:str, port:int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to host.\n"},
  {"GetSwapBytesInReceivedData", PyvtkSocketCommunicator_GetSwapBytesInReceivedData, METH_VARARGS,
   "GetSwapBytesInReceivedData(self) -> int\nC++: virtual int GetSwapBytesInReceivedData()\n\nReturns 1 if bytes must be swapped in received ints, floats, etc\n"},
  {"GetIsConnected", PyvtkSocketCommunicator_GetIsConnected, METH_VARARGS,
   "GetIsConnected(self) -> int\nC++: int GetIsConnected()\n\nIs the communicator connected?.\n"},
  {"SetNumberOfProcesses", PyvtkSocketCommunicator_SetNumberOfProcesses, METH_VARARGS,
   "SetNumberOfProcesses(self, num:int) -> None\nC++: void SetNumberOfProcesses(int num) override;\n\nSet the number of processes you will be using.\n"},
  {"SendVoidArray", PyvtkSocketCommunicator_SendVoidArray, METH_VARARGS,
   "SendVoidArray(self, data:Pointer, length:int, type:int,\n    remoteHandle:int, tag:int) -> int\nC++: int SendVoidArray(const void *data, vtkIdType length,\n    int type, int remoteHandle, int tag) override;\n\nPerforms the actual communication.  You will usually use the\nconvenience Send functions defined in the superclass.\n"},
  {"ReceiveVoidArray", PyvtkSocketCommunicator_ReceiveVoidArray, METH_VARARGS,
   "ReceiveVoidArray(self, data:Pointer, length:int, type:int,\n    remoteHandle:int, tag:int) -> int\nC++: int ReceiveVoidArray(void *data, vtkIdType length, int type,\n    int remoteHandle, int tag) override;\n\nSubclasses have to supply this method to receive various arrays\nof data. The type arg is one of the VTK type constants recognized\nby the vtkTemplateMacro (VTK_FLOAT, VTK_INT, etc.).  maxlength is\nmeasured in number of values (as opposed to number of bytes) and\nis the maxmum length of the data to receive.  If the maxlength is\nless than the length of the message sent by the sender, an error\nwill be flagged. Once a message is received, use the GetCount()\nmethod to determine the actual size of the data received.\n"},
  {"Barrier", PyvtkSocketCommunicator_Barrier, METH_VARARGS,
   "Barrier(self) -> None\nC++: void Barrier() override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthis overload fixes the method.\n"},
  {"BroadcastVoidArray", PyvtkSocketCommunicator_BroadcastVoidArray, METH_VARARGS,
   "BroadcastVoidArray(self, data:Pointer, length:int, type:int,\n    srcProcessId:int) -> int\nC++: int BroadcastVoidArray(void *data, vtkIdType length,\n    int type, int srcProcessId) override;\n\nThis class foolishly breaks the conventions of the superclass, so\nthe default implementations of these methods do not work.  These\njust give errors instead.\n"},
  {"GatherVoidArray", PyvtkSocketCommunicator_GatherVoidArray, METH_VARARGS,
   "GatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, destProcessId:int) -> int\nC++: int GatherVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int destProcessId) override;\n\n"},
  {"GatherVVoidArray", PyvtkSocketCommunicator_GatherVVoidArray, METH_VARARGS,
   "GatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int, destProcessId:int) -> int\nC++: int GatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type,\n    int destProcessId) override;\n\n"},
  {"ScatterVoidArray", PyvtkSocketCommunicator_ScatterVoidArray, METH_VARARGS,
   "ScatterVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, srcProcessId:int) -> int\nC++: int ScatterVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type,\n    int srcProcessId) override;\n\n"},
  {"ScatterVVoidArray", PyvtkSocketCommunicator_ScatterVVoidArray, METH_VARARGS,
   "ScatterVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLengths:[int, ...], offsets:[int, ...], recvLength:int,\n    type:int, srcProcessId:int) -> int\nC++: int ScatterVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType *sendLengths, vtkIdType *offsets,\n    vtkIdType recvLength, int type, int srcProcessId) override;\n\n"},
  {"AllGatherVoidArray", PyvtkSocketCommunicator_AllGatherVoidArray, METH_VARARGS,
   "AllGatherVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int) -> int\nC++: int AllGatherVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type) override;\n\n"},
  {"AllGatherVVoidArray", PyvtkSocketCommunicator_AllGatherVVoidArray, METH_VARARGS,
   "AllGatherVVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    sendLength:int, recvLengths:[int, ...], offsets:[int, ...],\n    type:int) -> int\nC++: int AllGatherVVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType sendLength,\n    vtkIdType *recvLengths, vtkIdType *offsets, int type)\n    override;\n\n"},
  {"ReduceVoidArray", PyvtkSocketCommunicator_ReduceVoidArray, METH_VARARGS,
   "ReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int, destProcessId:int) -> int\nC++: int ReduceVoidArray(const void *sendBuffer, void *recvBuffer,\n     vtkIdType length, int type, int operation, int destProcessId)\n     override;\n\n"},
  {"AllReduceVoidArray", PyvtkSocketCommunicator_AllReduceVoidArray, METH_VARARGS,
   "AllReduceVoidArray(self, sendBuffer:Pointer, recvBuffer:Pointer,\n    length:int, type:int, operation:int) -> int\nC++: int AllReduceVoidArray(const void *sendBuffer,\n    void *recvBuffer, vtkIdType length, int type, int operation)\n    override;\n\n"},
  {"SetPerformHandshake", PyvtkSocketCommunicator_SetPerformHandshake, METH_VARARGS,
   "SetPerformHandshake(self, _arg:int) -> None\nC++: virtual void SetPerformHandshake(vtkTypeBool _arg)\n\nSet or get the PerformHandshake ivar. If it is on, the\ncommunicator will try to perform a handshake when connected. It\nis on by default.\n"},
  {"GetPerformHandshakeMinValue", PyvtkSocketCommunicator_GetPerformHandshakeMinValue, METH_VARARGS,
   "GetPerformHandshakeMinValue(self) -> int\nC++: virtual vtkTypeBool GetPerformHandshakeMinValue()\n\n"},
  {"GetPerformHandshakeMaxValue", PyvtkSocketCommunicator_GetPerformHandshakeMaxValue, METH_VARARGS,
   "GetPerformHandshakeMaxValue(self) -> int\nC++: virtual vtkTypeBool GetPerformHandshakeMaxValue()\n\n"},
  {"PerformHandshakeOn", PyvtkSocketCommunicator_PerformHandshakeOn, METH_VARARGS,
   "PerformHandshakeOn(self) -> None\nC++: virtual void PerformHandshakeOn()\n\n"},
  {"PerformHandshakeOff", PyvtkSocketCommunicator_PerformHandshakeOff, METH_VARARGS,
   "PerformHandshakeOff(self) -> None\nC++: virtual void PerformHandshakeOff()\n\n"},
  {"GetPerformHandshake", PyvtkSocketCommunicator_GetPerformHandshake, METH_VARARGS,
   "GetPerformHandshake(self) -> int\nC++: virtual vtkTypeBool GetPerformHandshake()\n\n"},
  {"LogToFile", PyvtkSocketCommunicator_LogToFile, METH_VARARGS,
   "LogToFile(self, name:str) -> int\nC++: virtual int LogToFile(const char *name)\nLogToFile(self, name:str, append:int) -> int\nC++: virtual int LogToFile(const char *name, int append)\n\nLog messages to the given file.  The file is truncated unless the\nsecond argument is non-zero (default is to truncate).  If the\nfile name is empty or nullptr, logging is disabled.  Returns 0 if\nthe file failed to open, and 1 otherwise.\n"},
  {"SetReportErrors", PyvtkSocketCommunicator_SetReportErrors, METH_VARARGS,
   "SetReportErrors(self, _arg:int) -> None\nC++: virtual void SetReportErrors(int _arg)\n\nIf ReportErrors if false, all vtkErrorMacros are suppressed.\n"},
  {"GetReportErrors", PyvtkSocketCommunicator_GetReportErrors, METH_VARARGS,
   "GetReportErrors(self) -> int\nC++: virtual int GetReportErrors()\n\n"},
  {"GetSocket", PyvtkSocketCommunicator_GetSocket, METH_VARARGS,
   "GetSocket(self) -> vtkClientSocket\nC++: virtual vtkClientSocket *GetSocket()\n\nGet/Set the actual socket used for communication.\n"},
  {"SetSocket", PyvtkSocketCommunicator_SetSocket, METH_VARARGS,
   "SetSocket(self, __a:vtkClientSocket) -> None\nC++: void SetSocket(vtkClientSocket *)\n\n"},
  {"Handshake", PyvtkSocketCommunicator_Handshake, METH_VARARGS,
   "Handshake(self) -> int\nC++: int Handshake()\n\nPerforms handshake. This uses vtkClientSocket::ConnectingSide to\ndecide whether to perform ServerSideHandshake or\nClientSideHandshake.\n"},
  {"ServerSideHandshake", PyvtkSocketCommunicator_ServerSideHandshake, METH_VARARGS,
   "ServerSideHandshake(self) -> int\nC++: int ServerSideHandshake()\n\nPerforms ServerSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {"ClientSideHandshake", PyvtkSocketCommunicator_ClientSideHandshake, METH_VARARGS,
   "ClientSideHandshake(self) -> int\nC++: int ClientSideHandshake()\n\nPerforms ClientSide handshake. One should preferably use\nHandshake() which calls ServerSideHandshake or\nClientSideHandshake as required.\n"},
  {"GetIsServer", PyvtkSocketCommunicator_GetIsServer, METH_VARARGS,
   "GetIsServer(self) -> int\nC++: virtual int GetIsServer()\n\nReturns true if this side of the socket is the server.  The\nresult is invalid if the socket is not connected.\n"},
  {"GetVersion", PyvtkSocketCommunicator_GetVersion, METH_VARARGS,
   "GetVersion() -> int\nC++: static int GetVersion()\n\nUniquely identifies the version of this class.  If the versions\nmatch, then the socket communicators should be compatible.\n"},
  {"BufferCurrentMessage", PyvtkSocketCommunicator_BufferCurrentMessage, METH_VARARGS,
   "BufferCurrentMessage(self) -> None\nC++: void BufferCurrentMessage()\n\nThis flag is cleared before vtkCommand::WrongTagEvent is fired\nwhen ever a message with mismatched tag is received. If the\nhandler wants the message to be buffered for later use, it should\nset this flag to true. In which case the vtkSocketCommunicator\nwill buffer the message and it will be automatically processed\nthe next time one does a ReceiveTagged() with a matching tag.\n"},
  {"HasBufferredMessages", PyvtkSocketCommunicator_HasBufferredMessages, METH_VARARGS,
   "HasBufferredMessages(self) -> bool\nC++: bool HasBufferredMessages()\n\nReturns true if there are any messages in the receive buffer.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSocketCommunicator_Doc =
  "vtkSocketCommunicator - Process communication using Sockets\n\n"
  "Superclass: vtkCommunicator\n\n"
  "This is a concrete implementation of vtkCommunicator which supports\n"
  "interprocess communication using BSD style sockets. It supports byte\n"
  "swapping for the communication of machines with different endianness.\n\n"
  "@warning\n"
  "Communication between 32 bit and 64 bit systems is not fully\n"
  "supported. If a type does not have the same length on both systems,\n"
  "this communicator can not be used to transfer data of that type.\n\n"
  "@sa\n"
  "vtkCommunicator vtkSocketController\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSocketCommunicator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkSocketCommunicator", // tp_name
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
  PyvtkSocketCommunicator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSocketCommunicator_StaticNew()
{
  return vtkSocketCommunicator::New();
}

PyObject *PyvtkSocketCommunicator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSocketCommunicator_Type, PyvtkSocketCommunicator_Methods,
    "vtkSocketCommunicator",
 &PyvtkSocketCommunicator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCommunicator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSocketCommunicator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSocketCommunicator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSocketCommunicator", o) != 0)
  {
    Py_DECREF(o);
  }

}

