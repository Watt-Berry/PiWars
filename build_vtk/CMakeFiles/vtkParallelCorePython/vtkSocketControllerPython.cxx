// python wrapper for vtkSocketController
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSocketController.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSocketController(PyObject *dict); }
extern "C" { PyObject *PyvtkSocketController_ClassNew(); }

#ifndef DECLARED_PyvtkMultiProcessController_ClassNew
extern "C" { PyObject *PyvtkMultiProcessController_ClassNew(); }
#define DECLARED_PyvtkMultiProcessController_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSocketController_Consts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkSocketController.Consts", // tp_name
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
PyObject *PyvtkSocketController_Consts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSocketController_Consts_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSocketController_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSocketController::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSocketController::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSocketController *tempr = vtkSocketController::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSocketController *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSocketController::NewInstance());

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
PyvtkSocketController_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSocketController::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSocketController::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSocketController::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_Finalize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkSocketController::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Finalize(temp0);
    }
    else
    {
      op->vtkSocketController::Finalize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSocketController_Finalize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSocketController_Finalize_s1(self, args);
    case 1:
      return PyvtkSocketController_Finalize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Finalize");
  return nullptr;
}


static PyObject *
PyvtkSocketController_SingleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleMethodExecute();
    }
    else
    {
      op->vtkSocketController::SingleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_MultipleMethodExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultipleMethodExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MultipleMethodExecute();
    }
    else
    {
      op->vtkSocketController::MultipleMethodExecute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_CreateOutputWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutputWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateOutputWindow();
    }
    else
    {
      op->vtkSocketController::CreateOutputWindow();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_WaitForConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WaitForConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->WaitForConnection(temp0) :
      op->vtkSocketController::WaitForConnection(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_CloseConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CloseConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CloseConnection();
    }
    else
    {
      op->vtkSocketController::CloseConnection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_ConnectTo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConnectTo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->ConnectTo(temp0, temp1) :
      op->vtkSocketController::ConnectTo(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_GetSwapBytesInReceivedData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSwapBytesInReceivedData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSwapBytesInReceivedData() :
      op->vtkSocketController::GetSwapBytesInReceivedData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_SetCommunicator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommunicator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  vtkSocketCommunicator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSocketCommunicator"))
  {
    if (ap.IsBound())
    {
      op->SetCommunicator(temp0);
    }
    else
    {
      op->vtkSocketController::SetCommunicator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSocketController_CreateCompliantController(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCompliantController");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSocketController *op = static_cast<vtkSocketController *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMultiProcessController *tempr = (ap.IsBound() ?
      op->CreateCompliantController() :
      op->vtkSocketController::CreateCompliantController());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSocketController_Methods[] = {
  {"IsTypeOf", PyvtkSocketController_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSocketController_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSocketController_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSocketController\nC++: static vtkSocketController *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSocketController_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSocketController\nC++: vtkSocketController *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSocketController_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSocketController_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkSocketController_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\n"},
  {"Finalize", PyvtkSocketController_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\nFinalize(self, __a:int) -> None\nC++: void Finalize(int) override;\n\nDoes not apply to sockets. Does nothing.\n"},
  {"SingleMethodExecute", PyvtkSocketController_SingleMethodExecute, METH_VARARGS,
   "SingleMethodExecute(self) -> None\nC++: void SingleMethodExecute() override;\n\nDoes not apply to sockets. Does nothing.\n"},
  {"MultipleMethodExecute", PyvtkSocketController_MultipleMethodExecute, METH_VARARGS,
   "MultipleMethodExecute(self) -> None\nC++: void MultipleMethodExecute() override;\n\nDoes not apply to sockets.  Does nothing.\n"},
  {"CreateOutputWindow", PyvtkSocketController_CreateOutputWindow, METH_VARARGS,
   "CreateOutputWindow(self) -> None\nC++: void CreateOutputWindow() override;\n\nDoes not apply to sockets. Does nothing.\n"},
  {"WaitForConnection", PyvtkSocketController_WaitForConnection, METH_VARARGS,
   "WaitForConnection(self, port:int) -> int\nC++: virtual int WaitForConnection(int port)\n\nWait for connection on a given port, forwarded to the\ncommunicator\n"},
  {"CloseConnection", PyvtkSocketController_CloseConnection, METH_VARARGS,
   "CloseConnection(self) -> None\nC++: virtual void CloseConnection()\n\nClose a connection, forwarded to the communicator\n"},
  {"ConnectTo", PyvtkSocketController_ConnectTo, METH_VARARGS,
   "ConnectTo(self, hostName:str, port:int) -> int\nC++: virtual int ConnectTo(const char *hostName, int port)\n\nOpen a connection to a give machine, forwarded to the\ncommunicator\n"},
  {"GetSwapBytesInReceivedData", PyvtkSocketController_GetSwapBytesInReceivedData, METH_VARARGS,
   "GetSwapBytesInReceivedData(self) -> int\nC++: int GetSwapBytesInReceivedData()\n\n"},
  {"SetCommunicator", PyvtkSocketController_SetCommunicator, METH_VARARGS,
   "SetCommunicator(self, comm:vtkSocketCommunicator) -> None\nC++: void SetCommunicator(vtkSocketCommunicator *comm)\n\nSet the communicator used in normal and rmi communications.\n"},
  {"CreateCompliantController", PyvtkSocketController_CreateCompliantController, METH_VARARGS,
   "CreateCompliantController(self) -> vtkMultiProcessController\nC++: vtkMultiProcessController *CreateCompliantController()\n\nFOOLISH MORTALS!  Thou hast forsaken the sacred laws of ad-hoc\npolymorphism when thou broke a critical assumption of the\nsuperclass (namely, each process has thine own id).  The time\nframe to fix thy error has passed. Too much code has come to rely\non this abhorrent behavior.  Instead, we offer this gift: a\nmethod for creating an equivalent communicator with correct\nprocess id semantics.  The calling code is responsible for\ndeleting this controller.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSocketController_Doc =
  "vtkSocketController - Process communication using Sockets\n\n"
  "Superclass: vtkMultiProcessController\n\n"
  "This is a concrete implementation of vtkMultiProcessController. It\n"
  "supports one-to-one communication using sockets. Note that process 0\n"
  "will always correspond to self and process 1 to the remote process.\n"
  "This class is best used with ports.\n\n"
  "@bug Note that because process 0 will always correspond to self, this\n"
  "class breaks assumptions usually implied when using ad-hoc\n"
  "polymorphism.  That is, the vtkSocketController will behave\n"
  "differently than other subclasses of vtkMultiProcessController.  If\n"
  "you upcast vtkSocketController to vtkMultiProcessController and send\n"
  "it to a method that does not know that the object is actually a\n"
  "vtkSocketController, the object may not behave as intended.  For\n"
  "example, if that oblivious class chose to identify a \"root\" based on\n"
  "the local process id, then both sides of the controller will think\n"
  "they are the root (and that will probably lead to deadlock).  If you\n"
  "plan to upcast to vtkMultiProcessController, you should probably use\n"
  "the CreateCompliantController instead.\n\n"
  "@sa\n"
  "vtkMultiProcessController vtkSocketCommunicator vtkInputPort\n"
  "vtkOutputPort\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSocketController_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkParallelCore.vtkSocketController", // tp_name
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
  PyvtkSocketController_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSocketController_StaticNew()
{
  return vtkSocketController::New();
}

PyObject *PyvtkSocketController_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSocketController_Type, PyvtkSocketController_Methods,
    "vtkSocketController",
 &PyvtkSocketController_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMultiProcessController_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSocketController_Consts_Type);
  PyVTKEnum_Add(&PyvtkSocketController_Consts_Type, "vtkSocketController.Consts");

  o = (PyObject *)&PyvtkSocketController_Consts_Type;
  if (PyDict_SetItemString(d, "Consts", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkSocketController::Consts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "ENDIAN_TAG", vtkSocketController::ENDIAN_TAG },
        { "IDTYPESIZE_TAG", vtkSocketController::IDTYPESIZE_TAG },
        { "VERSION_TAG", vtkSocketController::VERSION_TAG },
        { "HASH_TAG", vtkSocketController::HASH_TAG },
      };

    o = PyvtkSocketController_Consts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSocketController(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSocketController_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSocketController", o) != 0)
  {
    Py_DECREF(o);
  }

}

