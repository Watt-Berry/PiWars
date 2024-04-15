// python wrapper for vtkDataAssembly
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataAssembly.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataAssembly(PyObject *dict); }
extern "C" { PyObject *PyvtkDataAssembly_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataAssembly_TraversalOrder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataAssembly.TraversalOrder", // tp_name
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
PyObject *PyvtkDataAssembly_TraversalOrder_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataAssembly_TraversalOrder_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataAssembly_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataAssembly::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataAssembly::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataAssembly *tempr = vtkDataAssembly::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataAssembly *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataAssembly::NewInstance());

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
PyvtkDataAssembly_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataAssembly::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataAssembly::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataAssembly::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_InitializeFromXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeFromXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->InitializeFromXML(temp0) :
      op->vtkDataAssembly::InitializeFromXML(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SerializeToXML(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SerializeToXML");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  vtkIndent *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkIndent"))
  {
    std::string tempr = (ap.IsBound() ?
      op->SerializeToXML(*temp0) :
      op->vtkDataAssembly::SerializeToXML(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDataAssembly_GetRootNode(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRootNode");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkDataAssembly::GetRootNode();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SetRootNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRootNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRootNodeName(temp0);
    }
    else
    {
      op->vtkDataAssembly::SetRootNodeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetRootNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRootNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRootNodeName() :
      op->vtkDataAssembly::GetRootNodeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->AddNode(temp0, temp1) :
      op->vtkDataAssembly::AddNode(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->AddNodes(temp0, temp1) :
      op->vtkDataAssembly::AddNodes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddSubtree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSubtree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  vtkDataAssembly *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataAssembly") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->AddSubtree(temp0, temp1, temp2) :
      op->vtkDataAssembly::AddSubtree(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_RemoveNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveNode(temp0) :
      op->vtkDataAssembly::RemoveNode(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SetNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNodeName(temp0, temp1);
    }
    else
    {
      op->vtkDataAssembly::SetNodeName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetNodeName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeName(temp0) :
      op->vtkDataAssembly::GetNodeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetNodePath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodePath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNodePath(temp0) :
      op->vtkDataAssembly::GetNodePath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetFirstNodeByPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstNodeByPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstNodeByPath(temp0) :
      op->vtkDataAssembly::GetFirstNodeByPath(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->AddDataSetIndex(temp0, temp1) :
      op->vtkDataAssembly::AddDataSetIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  std::vector<unsigned int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->AddDataSetIndices(temp0, temp1) :
      op->vtkDataAssembly::AddDataSetIndices(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_AddDataSetIndexRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetIndexRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  unsigned int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->AddDataSetIndexRange(temp0, temp1, temp2) :
      op->vtkDataAssembly::AddDataSetIndexRange(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_RemoveDataSetIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveDataSetIndex(temp0, temp1) :
      op->vtkDataAssembly::RemoveDataSetIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_RemoveAllDataSetIndices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->RemoveAllDataSetIndices(temp0, temp1) :
      op->vtkDataAssembly::RemoveAllDataSetIndices(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_FindFirstNodeWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindFirstNodeWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  int temp1 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->FindFirstNodeWithName(temp0, temp1) :
      op->vtkDataAssembly::FindFirstNodeWithName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_FindNodesWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindNodesWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  const char *temp0 = nullptr;
  int temp1 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->FindNodesWithName(temp0, temp1) :
      op->vtkDataAssembly::FindNodesWithName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetChildNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  bool temp1 = true;
  int temp2 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->GetChildNodes(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetChildNodes(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfChildren(temp0) :
      op->vtkDataAssembly::GetNumberOfChildren(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetChild(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChild");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetChild(temp0, temp1) :
      op->vtkDataAssembly::GetChild(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetChildIndex(temp0, temp1) :
      op->vtkDataAssembly::GetChildIndex(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_GetParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetParent(temp0) :
      op->vtkDataAssembly::GetParent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_HasAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAttribute(temp0, temp1) :
      op->vtkDataAssembly::HasAttribute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SetAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataAssembly::SetAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_SetAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataAssembly::SetAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_SetAttribute_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetAttribute(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataAssembly::SetAttribute(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_SetAttribute_Methods[] = {
  {"SetAttribute", PyvtkDataAssembly_SetAttribute_s1, METH_VARARGS,
   "@izz"},
  {"SetAttribute", PyvtkDataAssembly_SetAttribute_s2, METH_VARARGS,
   "@izi"},
  {"SetAttribute", PyvtkDataAssembly_SetAttribute_s3, METH_VARARGS,
   "@izk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataAssembly_SetAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataAssembly_SetAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAttribute");
  return nullptr;
}


static PyObject *
PyvtkDataAssembly_GetAttribute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAttribute(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetAttribute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_GetAttribute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAttribute(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetAttribute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_GetAttribute_Methods[] = {
  {"GetAttribute", PyvtkDataAssembly_GetAttribute_s1, METH_VARARGS,
   "@izi"},
  {"GetAttribute", PyvtkDataAssembly_GetAttribute_s2, METH_VARARGS,
   "@izk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataAssembly_GetAttribute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataAssembly_GetAttribute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttribute");
  return nullptr;
}


static PyObject *
PyvtkDataAssembly_GetAttributeOrDefault_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAttributeOrDefault(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetAttributeOrDefault(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_GetAttributeOrDefault_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeOrDefault(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetAttributeOrDefault(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_GetAttributeOrDefault_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeOrDefault");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->GetAttributeOrDefault(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetAttributeOrDefault(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_GetAttributeOrDefault_Methods[] = {
  {"GetAttributeOrDefault", PyvtkDataAssembly_GetAttributeOrDefault_s1, METH_VARARGS,
   "@izz"},
  {"GetAttributeOrDefault", PyvtkDataAssembly_GetAttributeOrDefault_s2, METH_VARARGS,
   "@izi"},
  {"GetAttributeOrDefault", PyvtkDataAssembly_GetAttributeOrDefault_s3, METH_VARARGS,
   "@izk"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataAssembly_GetAttributeOrDefault(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataAssembly_GetAttributeOrDefault_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributeOrDefault");
  return nullptr;
}


static PyObject *
PyvtkDataAssembly_Visit_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  vtkDataAssemblyVisitor *temp0 = nullptr;
  int temp1 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkDataAssemblyVisitor") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Visit(temp0, temp1);
    }
    else
    {
      op->vtkDataAssembly::Visit(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_Visit_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Visit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  vtkDataAssemblyVisitor *temp1 = nullptr;
  int temp2 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataAssemblyVisitor") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Visit(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataAssembly::Visit(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_Visit_Methods[] = {
  {"Visit", PyvtkDataAssembly_Visit_s1, METH_VARARGS,
   "@V|i *vtkDataAssemblyVisitor"},
  {"Visit", PyvtkDataAssembly_Visit_s2, METH_VARARGS,
   "@iV|i *vtkDataAssemblyVisitor"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataAssembly_Visit(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataAssembly_Visit_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataAssembly_Visit_s1(self, args);
    case 3:
      return PyvtkDataAssembly_Visit_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Visit");
  return nullptr;
}


static PyObject *
PyvtkDataAssembly_GetDataSetIndices_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  int temp0;
  bool temp1 = true;
  int temp2 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::vector<unsigned int> tempr = (ap.IsBound() ?
      op->GetDataSetIndices(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetDataSetIndices(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyObject *
PyvtkDataAssembly_GetDataSetIndices_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSetIndices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  std::vector<int> temp0(ap.GetArgSize(0));
  bool temp1 = true;
  int temp2 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    std::vector<unsigned int> tempr = (ap.IsBound() ?
      op->GetDataSetIndices(temp0, temp1, temp2) :
      op->vtkDataAssembly::GetDataSetIndices(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_GetDataSetIndices_Methods[] = {
  {"GetDataSetIndices", PyvtkDataAssembly_GetDataSetIndices_s1, METH_VARARGS,
   "@i|qi"},
  {"GetDataSetIndices", PyvtkDataAssembly_GetDataSetIndices_s2, METH_VARARGS,
   "@T|qi i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataAssembly_GetDataSetIndices(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataAssembly_GetDataSetIndices_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSetIndices");
  return nullptr;
}


static PyObject *
PyvtkDataAssembly_SelectNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  std::vector<std::string> temp0(ap.GetArgSize(0));
  int temp1 = vtkDataAssembly::TraversalOrder::DepthFirst;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0.data(), temp0.size()) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    std::vector<int> tempr = (ap.IsBound() ?
      op->SelectNodes(temp0, temp1) :
      op->vtkDataAssembly::SelectNodes(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      if (tempr.empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr.data(), tempr.size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_SubsetCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubsetCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  vtkDataAssembly *temp0 = nullptr;
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataAssembly") &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    if (ap.IsBound())
    {
      op->SubsetCopy(temp0, temp1);
    }
    else
    {
      op->vtkDataAssembly::SubsetCopy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataAssembly *op = static_cast<vtkDataAssembly *>(vp);

  vtkDataAssembly *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataAssembly"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataAssembly::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_IsNodeNameValid(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNodeNameValid");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkDataAssembly::IsNodeNameValid(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_MakeValidNodeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "MakeValidNodeName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkDataAssembly::MakeValidNodeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataAssembly_IsNodeNameReserved(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsNodeNameReserved");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = vtkDataAssembly::IsNodeNameReserved(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataAssembly_Methods[] = {
  {"IsTypeOf", PyvtkDataAssembly_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataAssembly_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataAssembly_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataAssembly\nC++: static vtkDataAssembly *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataAssembly_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataAssembly\nC++: vtkDataAssembly *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataAssembly_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataAssembly_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkDataAssembly_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nInitializes the data-assembly. When a new vtkDataAssembly\ninstance is created, it is in initialized form and it is not\nrequired to call this method to initialize it.\n"},
  {"InitializeFromXML", PyvtkDataAssembly_InitializeFromXML, METH_VARARGS,
   "InitializeFromXML(self, xmlcontents:str) -> bool\nC++: bool InitializeFromXML(const char *xmlcontents)\n\nInitializes a data-assembly using an XML representation of the\nassembly. Returns true if the initialization was successful,\notherwise the assembly is set a clean state and returns false.\n"},
  {"SerializeToXML", PyvtkDataAssembly_SerializeToXML, METH_VARARGS,
   "SerializeToXML(self, indent:vtkIndent) -> str\nC++: std::string SerializeToXML(vtkIndent indent)\n\nSaves the data-assembly as a XML.\n"},
  {"GetRootNode", PyvtkDataAssembly_GetRootNode, METH_VARARGS,
   "GetRootNode() -> int\nC++: static int GetRootNode()\n\nReturns the ID for the root node. This always returns 0.\n"},
  {"SetRootNodeName", PyvtkDataAssembly_SetRootNodeName, METH_VARARGS,
   "SetRootNodeName(self, name:str) -> None\nC++: void SetRootNodeName(const char *name)\n\nGet/Set root node name. Defaults to DataAssembly.\n"},
  {"GetRootNodeName", PyvtkDataAssembly_GetRootNodeName, METH_VARARGS,
   "GetRootNodeName(self) -> str\nC++: const char *GetRootNodeName()\n\n"},
  {"AddNode", PyvtkDataAssembly_AddNode, METH_VARARGS,
   "AddNode(self, name:str, parent:int=0) -> int\nC++: int AddNode(const char *name, int parent=0)\n\nAdds a node to the assembly with the given name and returns its\nid. `parent` is the id for the parent node which defaults to the\nroot node id (i.e. `GetRootNode`).\n\nIf `parent` is invalid, the add will fail.\n\n@returns id of the newly added node on success, else -1.\n"},
  {"AddNodes", PyvtkDataAssembly_AddNodes, METH_VARARGS,
   "AddNodes(self, names:(str, ...), parent:int=0) -> (int, ...)\nC++: std::vector<int> AddNodes(\n    const std::vector<std::string> &names, int parent=0)\n\nSame as `AddNode` except allows adding multiple nodes in one go.\n\nIf `parent` is invalid, the add will fail.\n\n@returns vectors of corresponding indices for each of the `names`\nadded.\n"},
  {"AddSubtree", PyvtkDataAssembly_AddSubtree, METH_VARARGS,
   "AddSubtree(self, parent:int, other:vtkDataAssembly,\n    otherParent:int=0) -> int\nC++: int AddSubtree(int parent, vtkDataAssembly *other,\n    int otherParent=0)\n\nAdd a subtree by copy the nodes from another tree starting with\nthe specified parent index.\n"},
  {"RemoveNode", PyvtkDataAssembly_RemoveNode, METH_VARARGS,
   "RemoveNode(self, id:int) -> bool\nC++: bool RemoveNode(int id)\n\nRemoves a node from the assembly. The node identified by the id\nand all its children are removed.\n\nRoot node cannot be removed.\n\n@returns true if removal was successful, false if the id is\n    invalid or root\nnode id.\n"},
  {"SetNodeName", PyvtkDataAssembly_SetNodeName, METH_VARARGS,
   "SetNodeName(self, id:int, name:str) -> None\nC++: void SetNodeName(int id, const char *name)\n\nGet/Set a node's name. If node id is invalid, `SetNodeName` will\nraise an error; `GetNodeName` will also raise an error and return\nnullptr.\n\n`SetNodeName` will raise an error if the name is not valid. Name\ncannot be empty or nullptr.\n"},
  {"GetNodeName", PyvtkDataAssembly_GetNodeName, METH_VARARGS,
   "GetNodeName(self, id:int) -> str\nC++: const char *GetNodeName(int id)\n\n"},
  {"GetNodePath", PyvtkDataAssembly_GetNodePath, METH_VARARGS,
   "GetNodePath(self, id:int) -> str\nC++: std::string GetNodePath(int id)\n\nReturns the path for a node.\n"},
  {"GetFirstNodeByPath", PyvtkDataAssembly_GetFirstNodeByPath, METH_VARARGS,
   "GetFirstNodeByPath(self, path:str) -> int\nC++: int GetFirstNodeByPath(const char *path)\n\nReturn a node id given the path. Returns `-1` if path is not\nvalid.\n"},
  {"AddDataSetIndex", PyvtkDataAssembly_AddDataSetIndex, METH_VARARGS,
   "AddDataSetIndex(self, id:int, dataset_index:int) -> bool\nC++: bool AddDataSetIndex(int id, unsigned int dataset_index)\n\nAdd a dataset index to a node. The node id can refer to any valid\nnode in the assembly, including the root.\n\nWhile the same dataset can be added multiple times in the\nassembly, it cannot be added multiple times to the same node.\nAdditional adds will fail.\n\n@returns true if addition succeeded else false.\n"},
  {"AddDataSetIndices", PyvtkDataAssembly_AddDataSetIndices, METH_VARARGS,
   "AddDataSetIndices(self, id:int, dataset_indices:(int, ...))\n    -> bool\nC++: bool AddDataSetIndices(int id,\n    const std::vector<unsigned int> &dataset_indices)\n\nSame as `AddDataSetIndex` except supports adding multiple dataset\nindices in one go. Note, a dataset index only gets added once.\n\n@returns true if any dataset index was successfully added.\n"},
  {"AddDataSetIndexRange", PyvtkDataAssembly_AddDataSetIndexRange, METH_VARARGS,
   "AddDataSetIndexRange(self, id:int, index_start:int, count:int)\n    -> bool\nC++: bool AddDataSetIndexRange(int id, unsigned int index_start,\n    int count)\n\nSame as `AddDataSetIndices` except this supports adding a\ncontiguous range of dataset indices in one go.\n\n@ returns true if any dataset index was successfully added.\n"},
  {"RemoveDataSetIndex", PyvtkDataAssembly_RemoveDataSetIndex, METH_VARARGS,
   "RemoveDataSetIndex(self, id:int, dataset_index:int) -> bool\nC++: bool RemoveDataSetIndex(int id, unsigned int dataset_index)\n\nRemoves a dataset index from a node.\n\n@returns true if the removal was successful, else returns false.\n"},
  {"RemoveAllDataSetIndices", PyvtkDataAssembly_RemoveAllDataSetIndices, METH_VARARGS,
   "RemoveAllDataSetIndices(self, id:int, traverse_subtree:bool=True)\n    -> bool\nC++: bool RemoveAllDataSetIndices(int id,\n    bool traverse_subtree=true)\n\nClears all dataset indices from the node.\n\nIf `traverse_subtree` is true (default), recursively removes all\ndataset indices from all the child nodes.\n\n@returns true on success, else returns false.\n"},
  {"FindFirstNodeWithName", PyvtkDataAssembly_FindFirstNodeWithName, METH_VARARGS,
   "FindFirstNodeWithName(self, name:str, traversal_order:int=...)\n    -> int\nC++: int FindFirstNodeWithName(const char *name,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nFinds first node that is encountered in a breadth first traversal\nof the assembly with the given name.\n\n@returns the if of the node if found, else -1.\n"},
  {"FindNodesWithName", PyvtkDataAssembly_FindNodesWithName, METH_VARARGS,
   "FindNodesWithName(self, name:str, sort_order:int=...) -> (int,\n    ...)\nC++: std::vector<int> FindNodesWithName(const char *name,\n    int sort_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nFinds all nodes with the given name. The nodes can be ordered\ndepth first or breadth first, based on the `sort_order` flag.\n"},
  {"GetChildNodes", PyvtkDataAssembly_GetChildNodes, METH_VARARGS,
   "GetChildNodes(self, parent:int, traverse_subtree:bool=True,\n    traversal_order:int=...) -> (int, ...)\nC++: std::vector<int> GetChildNodes(int parent,\n    bool traverse_subtree=true,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nReturns ids for all child nodes.\n\nIf `traverse_subtree` is true (default), recursively builds the\nchild node list. The traversal order can be specified using\n`traversal_order` flag; defaults to depth-first.\n\n@sa vtkDataAssembly::Visit, vtkDataAssemblyVisitor\n"},
  {"GetNumberOfChildren", PyvtkDataAssembly_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self, parent:int) -> int\nC++: int GetNumberOfChildren(int parent)\n\nReturns the number of child nodes.\n\n@returns the number of child nodes for the parent node or 0 if\n    the parent\nis invalid.\n"},
  {"GetChild", PyvtkDataAssembly_GetChild, METH_VARARGS,
   "GetChild(self, parent:int, index:int) -> int\nC++: int GetChild(int parent, int index)\n\nReturns the id for a child not at the given index, if valid,\notherwise -1.\n"},
  {"GetChildIndex", PyvtkDataAssembly_GetChildIndex, METH_VARARGS,
   "GetChildIndex(self, parent:int, child:int) -> int\nC++: int GetChildIndex(int parent, int child)\n\nReturns the index for a child under a given. -1 if invalid.\n"},
  {"GetParent", PyvtkDataAssembly_GetParent, METH_VARARGS,
   "GetParent(self, id:int) -> int\nC++: int GetParent(int id)\n\nReturns the id for the parent node, if any. Returns -1 if the\nnode is invalid or has no parent (i.e. is the root node).\n"},
  {"HasAttribute", PyvtkDataAssembly_HasAttribute, METH_VARARGS,
   "HasAttribute(self, id:int, name:str) -> bool\nC++: bool HasAttribute(int id, const char *name)\n\nReturns true if attribute with the given name is present on the\nchosen node.\n"},
  {"SetAttribute", PyvtkDataAssembly_SetAttribute, METH_VARARGS,
   "SetAttribute(self, id:int, name:str, value:str) -> None\nC++: void SetAttribute(int id, const char *name,\n    const char *value)\nSetAttribute(self, id:int, name:str, value:int) -> None\nC++: void SetAttribute(int id, const char *name, int value)\nSetAttribute(self, id:int, name:str, value:int) -> None\nC++: void SetAttribute(int id, const char *name, vtkIdType value)\n\nSet an attribute. Will replace an existing attribute with the\nsame name if present.\n"},
  {"GetAttribute", PyvtkDataAssembly_GetAttribute, METH_VARARGS,
   "GetAttribute(self, id:int, name:str, value:int) -> bool\nC++: bool GetAttribute(int id, const char *name, int &value)\nGetAttribute(self, id:int, name:str, value:int) -> bool\nC++: bool GetAttribute(int id, const char *name, vtkIdType &value)\n\n"},
  {"GetAttributeOrDefault", PyvtkDataAssembly_GetAttributeOrDefault, METH_VARARGS,
   "GetAttributeOrDefault(self, id:int, name:str, default_value:str)\n    -> str\nC++: const char *GetAttributeOrDefault(int id, const char *name,\n    const char *default_value)\nGetAttributeOrDefault(self, id:int, name:str, default_value:int)\n    -> int\nC++: int GetAttributeOrDefault(int id, const char *name,\n    int default_value)\nGetAttributeOrDefault(self, id:int, name:str, default_value:int)\n    -> int\nC++: vtkIdType GetAttributeOrDefault(int id, const char *name,\n    vtkIdType default_value)\n\nGet an attribute value. Returns the value associated with the\nnode or the provided default value.\n"},
  {"Visit", PyvtkDataAssembly_Visit, METH_VARARGS,
   "Visit(self, visitor:vtkDataAssemblyVisitor,\n    traversal_order:int=...) -> None\nC++: void Visit(vtkDataAssemblyVisitor *visitor,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\nVisit(self, id:int, visitor:vtkDataAssemblyVisitor,\n    traversal_order:int=...) -> None\nC++: void Visit(int id, vtkDataAssemblyVisitor *visitor,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nVisit each node in the assembly for processing. The traversal\norder can be specified using `traversal_order` which defaults to\ndepth-first.\n"},
  {"GetDataSetIndices", PyvtkDataAssembly_GetDataSetIndices, METH_VARARGS,
   "GetDataSetIndices(self, id:int, traverse_subtree:bool=True,\n    traversal_order:int=...) -> (int, ...)\nC++: std::vector<unsigned int> GetDataSetIndices(int id,\n    bool traverse_subtree=true,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\nGetDataSetIndices(self, ids:(int, ...),\n    traverse_subtree:bool=True, traversal_order:int=...) -> (int,\n    ...)\nC++: std::vector<unsigned int> GetDataSetIndices(\n    const std::vector<int> &ids, bool traverse_subtree=true,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nReturns the dataset indices associated with the node.\n\nIf `traverse_subtree` is true (default), recursively builds the\ndataset indices list for the node and all its child nodes. Note,\na dataset index will only appear once in the output even if it is\nencountered on multiple nodes in the subtree.\n\nWhen `traverse_subtree` is true, the traversal order can be\nspecified using `traversal_order`. Defaults to depth-first.\n"},
  {"SelectNodes", PyvtkDataAssembly_SelectNodes, METH_VARARGS,
   "SelectNodes(self, path_queries:(str, ...),\n    traversal_order:int=...) -> (int, ...)\nC++: std::vector<int> SelectNodes(\n    const std::vector<std::string> &path_queries,\n    int traversal_order=vtkDataAssembly::TraversalOrder::DepthFirst)\n\nReturns ids for nodes matching the path_queries. See Section@ref\nDataAssemblyPathQueries for supported query expressions.\n\nWill return an empty vector is no nodes match the requested\nquery.\n\n@returns node ids matching the query in traversal order chosen\n    using\n         `traversal_order`.\n"},
  {"SubsetCopy", PyvtkDataAssembly_SubsetCopy, METH_VARARGS,
   "SubsetCopy(self, other:vtkDataAssembly, selected_branches:(int,\n    ...)) -> None\nC++: void SubsetCopy(vtkDataAssembly *other,\n    const std::vector<int> &selected_branches)\n\nCreate a deep-copy of other by only passing the chosen branches.\nAll other branches of the tree will be pruned. Note this method\nnever affects the depth of the selected branches or dataset\nindices attached to any of the nodes in pruned output.\n"},
  {"DeepCopy", PyvtkDataAssembly_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkDataAssembly) -> None\nC++: void DeepCopy(vtkDataAssembly *other)\n\nDeep copy the `other`.\n"},
  {"IsNodeNameValid", PyvtkDataAssembly_IsNodeNameValid, METH_VARARGS,
   "IsNodeNameValid(name:str) -> bool\nC++: static bool IsNodeNameValid(const char *name)\n\nValidates a node name.\n"},
  {"MakeValidNodeName", PyvtkDataAssembly_MakeValidNodeName, METH_VARARGS,
   "MakeValidNodeName(name:str) -> str\nC++: static std::string MakeValidNodeName(const char *name)\n\nConverts any string to a string that is a valid node name. This\nis done by simply discarding any non-supported character.\nAdditionally, if the first character is not a \"_\" or an alphabet,\nthen the \"_\" is prepended.\n"},
  {"IsNodeNameReserved", PyvtkDataAssembly_IsNodeNameReserved, METH_VARARGS,
   "IsNodeNameReserved(name:str) -> bool\nC++: static bool IsNodeNameReserved(const char *name)\n\nReturns true for node names that are reserved.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataAssembly_Doc =
  "vtkDataAssembly - hierarchical representation to use with\nvtkPartitionedDataSetCollection\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDataAssembly is a mechanism to represent hierarchical organization\n"
  "of items (or vtkPartitionedDataSet instances) in a\n"
  "vtkPartitionedDataSetCollection. vtkPartitionedDataSetCollection is\n"
  "similar to a vtkMultiBlockDataSet since it provides a means for\n"
  "putting together multiple non-composite datasets. However,\n"
  "vtkPartitionedDataSetCollection itself doesn't provide any mechanism\n"
  "to define relationships between items in the collections. That is\n"
  "done using vtkDataAssembly.\n\n"
  "@section Overview Overview\n\n"
  "At its core, vtkDataAssembly is simply a tree of nodes starting with\n"
  "the root node. Each node has a unique id and a string name (names\n"
  "need not be unique). On initialization with\n"
  "`vtkDataAssembly::Initialize`, an empty tree with a root node is\n"
  "created. The root node's id and name can be obtained using\n"
  "`vtkDataAssembly::GetRootNode` and\n"
  "`vtkDataAssembly::GetRootNodeName`. The root node's id is fixed\n"
  "(vtkDataAssembly::GetRootNode), however the name can be changed using\n"
  "`vtkDataAssembly::SetRootNodeName`.\n\n"
  "Child nodes can be added using `vtkDataAssembly::AddNode` or\n"
  "`vtkDataAssembly::AddNodes`, each of which returns the ids for every\n"
  "child node added. A non-root node can be removed using\n"
  "`vtkDataAssembly::RemoveNode`.\n\n"
  "Each node in the tree (including the root node) can have associated\n"
  "dataset indices. For a vtkDataAssembly associated with a\n"
  "vtkPartitionedDataSetCollection, these indices refer to the item\n"
  "index, or partitioned-dataset-index for items in the collection.\n"
  "Dataset indices can be specified using\n"
  "`vtkDataAssembly::AddDataSetIndex`,\n"
  "`vtkDataAssembly::AddDataSetIndices` and removed using\n"
  "`vtkDataAssembly::RemoveDataSetIndex`,\n"
  "`vtkDataAssembly::RemoveAllDataSetIndices`.\n"
  "`vtkDataAssembly::GetDataSetIndices` provides a mechanism to get the\n"
  "database indices associated with a node, and optionally, the entire\n"
  "subtree rooted at the chosen node.\n\n"
  "@section Searching Searching\n\n"
  "Each node in the vtkDataAssembly is assigned a unique id.\n"
  "`vtkDataAssembly::FindFirstNodeWithName` and\n"
  "`vtkDataAssembly::FindNodesWithName` can be used to get the id(s) for\n"
  "node(s) with given name.\n\n"
  "`vtkDataAssembly::SelectNodes` provides a more flexible mechanism to\n"
  "find nodes using name-based queries. Section@ref\n"
  "DataAssemblyPathQueries covers supported queries.\n\n"
  "@section Traversal Traversal\n\n"
  "`vtkDataAssemblyVisitor` defines a visitor API. An instance of a\n"
  "concretized `vtkDataAssemblyVisitor` subclass can be passed to\n"
  "`vtkDataAssembly::Visit` to traverse the data-assembly hierarchy\n"
  "either in depth-first or breadth-first order.\n\n"
  "@section DataAssemblyPathQueries Supported Path Queries\n\n"
  "`vtkDataAssembly::SelectNodes` can be used find nodes that match the\n"
  "specified query (or queries) using XPath 1.0 syntax.\n\n"
  "For example:\n\n"
  "* '/' is used as the path separator. If a node name has a `/` it must\n"
  "be escaped using `\\` in the query. Note, escaping is not necessary\n"
  "  when using `SetNodeName`/`GetNodeName`.\n\n"
  "* '/' selects the root node.\n\n"
  "* '/nodename' selects all child nodes of the root with the name\n"
  "  'nodename'.\n\n"
  "* '//nodename' selects all nodes with 'nodename' that are descendants\n"
  "of the root; thus, this this will traverse the entire tree.\n\n"
  "* '/nodename/' selects all child nodes of all nodes named 'nodename'\n"
  "  under the root; thus, ending a query with '/' selects the children\n"
  "  of the found nodes rather than the nodes themselves.\n\n"
  "* '/nodename1/nodename2' selects all nodes named 'nodename2' which\n"
  "  are children of nodes with name 'nodename1' that are themselves\n"
  "  children of the root node.\n\n"
  "* '//nodename1/nodename2' finds all nodes in the tree named\n"
  "  'nodename1' and then selects all children of these found nodes that\n"
  "are named 'nodename2'.\n\n"
  "@section Applications Applications\n\n"
  "The separation of dataset storage (vtkPartitionedDataSetCollection)\n"
  "and organization (vtkDataAssembly) enables development of algorithms\n"
  "that can expose APIs that are not tightly coupled to dataset storage.\n"
  "Together, vtkPartitionedDataSetCollection and vtkDataAssembly can be\n"
  "thought of as a different way of organizing data that was previously\n"
  "organized as a vtkMultiBlockDataSet. The advantage of the this newer\n"
  "approach is that filters can support specifying parameters using\n"
  "paths or path queries rather than composite indices. The composite\n"
  "indices suffered from the fact that they made no sense except for the\n"
  "specific vtkMultiBlockDataSet they were applied too. Thus, if the\n"
  "filters input was changed, the composite ids rarely made any sense\n"
  "and needed to be updated. Paths and path queries, however, do not\n"
  "suffer from this issue.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataAssembly_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataAssembly", // tp_name
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
  PyvtkDataAssembly_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataAssembly_StaticNew()
{
  return vtkDataAssembly::New();
}

PyObject *PyvtkDataAssembly_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataAssembly_Type, PyvtkDataAssembly_Methods,
    "vtkDataAssembly",
 &PyvtkDataAssembly_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataAssembly_TraversalOrder_Type);
  PyVTKEnum_Add(&PyvtkDataAssembly_TraversalOrder_Type, "vtkDataAssembly.TraversalOrder");

  o = (PyObject *)&PyvtkDataAssembly_TraversalOrder_Type;
  if (PyDict_SetItemString(d, "TraversalOrder", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkDataAssembly::TraversalOrder cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "DepthFirst", vtkDataAssembly::DepthFirst },
        { "BreadthFirst", vtkDataAssembly::BreadthFirst },
      };

    o = PyvtkDataAssembly_TraversalOrder_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataAssembly(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataAssembly_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataAssembly", o) != 0)
  {
    Py_DECREF(o);
  }

}

