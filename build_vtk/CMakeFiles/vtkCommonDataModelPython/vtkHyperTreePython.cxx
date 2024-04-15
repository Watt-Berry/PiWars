// python wrapper for vtkHyperTree
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHyperTree.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHyperTree(PyObject *dict); }
static PyMethodDef PyvtkHyperTreeData_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkHyperTreeData_vtkHyperTreeData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkHyperTreeData");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkHyperTreeData *op = new vtkHyperTreeData();

    result = PyVTKSpecialObject_New("vtkHyperTreeData", op);
  }

  return result;
}

static PyObject *
PyvtkHyperTreeData_vtkHyperTreeData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkHyperTreeData");

  vtkHyperTreeData *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkHyperTreeData"))
  {
    vtkHyperTreeData *op = new vtkHyperTreeData(*temp0);

    result = PyVTKSpecialObject_New("vtkHyperTreeData", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkHyperTreeData_vtkHyperTreeData_Methods[] = {
  {"vtkHyperTreeData", PyvtkHyperTreeData_vtkHyperTreeData_s2, METH_VARARGS,
   "@W vtkHyperTreeData"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTreeData_vtkHyperTreeData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkHyperTreeData_vtkHyperTreeData_s1(self, args);
    case 1:
      return PyvtkHyperTreeData_vtkHyperTreeData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkHyperTreeData");
  return nullptr;
}


static const char *PyvtkHyperTreeData_Doc =

  "vtkHyperTreeData() -> vtkHyperTreeData\nC++: vtkHyperTreeData()\nvtkHyperTreeData(__a:vtkHyperTreeData) -> vtkHyperTreeData\nC++: vtkHyperTreeData(const &vtkHyperTreeData)\n""\n"
  "vtkHyperTreeData - no description provided.\n\n"
;

static PyObject *
PyvtkHyperTreeData_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkHyperTreeData_vtkHyperTreeData(nullptr, args);
}

static void PyvtkHyperTreeData_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkHyperTreeData *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkHyperTreeData_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTreeData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTreeData", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkHyperTreeData_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkHyperTreeData_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkHyperTreeData_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkHyperTreeData_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkHyperTreeData_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkHyperTreeData(*static_cast<const vtkHyperTreeData*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkHyperTreeData_TypeNew
extern "C" { PyObject *PyvtkHyperTreeData_TypeNew(); }
#define DECLARED_PyvtkHyperTreeData_TypeNew
#endif

PyObject *PyvtkHyperTreeData_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkHyperTreeData_Type,
    PyvtkHyperTreeData_Methods,
    PyvtkHyperTreeData_vtkHyperTreeData_Methods,
    &PyvtkHyperTreeData_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkHyperTree_ClassNew(); }


static PyObject *
PyvtkHyperTree_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHyperTree::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHyperTree::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHyperTree *tempr = vtkHyperTree::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHyperTree *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHyperTree::NewInstance());

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
PyvtkHyperTree_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHyperTree::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHyperTree::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  unsigned char temp0;
  unsigned char temp1;
  unsigned char temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Initialize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkHyperTree::Initialize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_InitializeForReader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeForReader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  long long temp1;
  long long temp2;
  vtkBitArray *temp3 = nullptr;
  vtkBitArray *temp4 = nullptr;
  vtkBitArray *temp5 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetVTKObject(temp3, "vtkBitArray") &&
      ap.GetVTKObject(temp4, "vtkBitArray") &&
      ap.GetVTKObject(temp5, "vtkBitArray"))
  {
    op->InitializeForReader(temp0, temp1, temp2, temp3, temp4, temp5);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_BuildFromBreadthFirstOrderDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildFromBreadthFirstOrderDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkBitArray *temp0 = nullptr;
  long long temp1;
  long long temp2 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkBitArray") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    op->BuildFromBreadthFirstOrderDescriptor(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_ComputeBreadthFirstOrderDescriptor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBreadthFirstOrderDescriptor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkBitArray *temp0 = nullptr;
  vtkTypeInt64Array *temp1 = nullptr;
  vtkBitArray *temp2 = nullptr;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkBitArray") &&
      ap.GetVTKObject(temp1, "vtkTypeInt64Array") &&
      ap.GetVTKObject(temp2, "vtkBitArray") &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    op->ComputeBreadthFirstOrderDescriptor(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  vtkHyperTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkHyperTree"))
  {
    if (ap.IsBound())
    {
      op->CopyStructure(temp0);
    }
    else
    {
      op->vtkHyperTree::CopyStructure(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_Freeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Freeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkHyperTree *tempr = op->Freeze(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetTreeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTreeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTreeIndex(temp0);
    }
    else
    {
      op->vtkHyperTree::SetTreeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetTreeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTreeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTreeIndex() :
      op->vtkHyperTree::GetTreeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfLevels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLevels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfLevels() :
      op->vtkHyperTree::GetNumberOfLevels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkHyperTree::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkHyperTree::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfLeaves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLeaves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLeaves() :
      op->vtkHyperTree::GetNumberOfLeaves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetBranchFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBranchFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBranchFactor() :
      op->vtkHyperTree::GetBranchFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkHyperTree::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetNumberOfChildren(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfChildren");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfChildren() :
      op->vtkHyperTree::GetNumberOfChildren());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetScale(temp0);
    }
    else
    {
      op->vtkHyperTree::GetScale(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHyperTree_GetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScale(temp0) :
      op->vtkHyperTree::GetScale(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTree_GetScale_Methods[] = {
  {"GetScale", PyvtkHyperTree_GetScale_s1, METH_VARARGS,
   "@P *d"},
  {"GetScale", PyvtkHyperTree_GetScale_s2, METH_VARARGS,
   "@I"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkHyperTree_GetScale(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkHyperTree_GetScale_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScale");
  return nullptr;
}


static PyObject *
PyvtkHyperTree_CreateInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  unsigned char temp0;
  unsigned char temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkHyperTree *tempr = vtkHyperTree::CreateInstance(temp0, temp1);

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
PyvtkHyperTree_GetActualMemorySizeBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySizeBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetActualMemorySizeBytes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkHyperTree::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_IsGlobalIndexImplicit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsGlobalIndexImplicit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    bool tempr = op->IsGlobalIndexImplicit();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->SetGlobalIndexStart(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetGlobalIndexStart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIndexStart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetGlobalIndexStart() :
      op->vtkHyperTree::GetGlobalIndexStart());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetGlobalIndexFromLocal(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetGlobalIndexFromLocal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalIndexFromLocal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetGlobalIndexFromLocal(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetGlobalNodeIndexMax(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlobalNodeIndexMax");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetGlobalNodeIndexMax();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_IsLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->IsLeaf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_SubdivideLeaf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubdivideLeaf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SubdivideLeaf(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_IsTerminalNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsTerminalNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = op->IsTerminalNode(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetElderChildIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElderChildIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = op->GetElderChildIndex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_GetElderChildIndexArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElderChildIndexArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const unsigned int *tempr = op->GetElderChildIndexArray(temp0);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHyperTree_HasScales(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasScales");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHyperTree *op = static_cast<vtkHyperTree *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasScales() :
      op->vtkHyperTree::HasScales());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHyperTree_Methods[] = {
  {"IsTypeOf", PyvtkHyperTree_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHyperTree_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHyperTree_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHyperTree\nC++: static vtkHyperTree *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHyperTree_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHyperTree\nC++: vtkHyperTree *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHyperTree_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHyperTree_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkHyperTree_Initialize, METH_VARARGS,
   "Initialize(self, branchFactor:int, dimension:int,\n    numberOfChildren:int) -> None\nC++: void Initialize(unsigned char branchFactor,\n    unsigned char dimension, unsigned char numberOfChildren)\n\nRestore the initial state: only one vertice is then a leaf: the\nroot cell for the hypertree.\n@param branchFactor\n@param dimension\n@param numberOfChildren\n"},
  {"InitializeForReader", PyvtkHyperTree_InitializeForReader, METH_VARARGS,
   "InitializeForReader(self, numberOfLevels:int, nbVertices:int,\n    nbVerticesOfLastLevel:int, isParent:vtkBitArray,\n    isMasked:vtkBitArray, outIsMasked:vtkBitArray) -> None\nC++: virtual void InitializeForReader(vtkIdType numberOfLevels,\n    vtkIdType nbVertices, vtkIdType nbVerticesOfLastLevel,\n    vtkBitArray *isParent, vtkBitArray *isMasked,\n    vtkBitArray *outIsMasked)\n\nRestore a state from read data, without using a cursor Call after\ncreate hypertree with initialize.\n\n@param numberOfLevels: the maximum number of levels.\n@param nbVertices: the number of vertices of the future tree\n(coarse and leaves), fixed either the information loading (for\nload reduction) or defined by the fixed level of reader.\n@param nbVerticesOfLastLevel: the number of vertices of last\nvalid level.\n@param isParent: a binary decomposition tree by level with\nconstraint all describe children. It is useless to declare all\nthe latest values to False, especially the last level may not be\ndefined.\n@param isMasked: a binary mask corresponding. It is useless\nto declare all the latest values to False.\n@param outIsMasked: the mask of hypertree grid including\nthis hypertree which is a vtkBitArray.\n"},
  {"BuildFromBreadthFirstOrderDescriptor", PyvtkHyperTree_BuildFromBreadthFirstOrderDescriptor, METH_VARARGS,
   "BuildFromBreadthFirstOrderDescriptor(self, descriptor:vtkBitArray,\n     numberOfBits:int, startIndex:int=0) -> None\nC++: virtual void BuildFromBreadthFirstOrderDescriptor(\n    vtkBitArray *descriptor, vtkIdType numberOfBits,\n    vtkIdType startIndex=0)\n\nThis method builds the indexing of this tree given a breadth\nfirst order descriptor. This descriptor is the same bit array\nthat would be created by `ComputeBreadthFirstOrderDescriptor`.\nThe current tree is ready to use after calling this method.\n\n@param descriptor is a binary descriptor, in breadth first order,\nthat describes\nthe tree topology. If vertex of index `id` in breadth first order\nhas children, then the corresponding value in `descriptor` is\none. Otherwise, it is set to zero. Remember that arrays are\nappended, meaning that the index in `descriptor` corresponding to\n`id` in the current tree would be the size of `descriptor` before\ncalling this method, plus `id`.\n\n@param numberOfBits: Number of bits to be read in the descriptor\n    to build\nthe tree. Remember that the last depth of the tree is not encoded\nin the descriptor, as we know that they are full of zeros\n(because leaves have no children).\n\n@param startIndex: Input descriptor is being read starting at\n    this index.\n"},
  {"ComputeBreadthFirstOrderDescriptor", PyvtkHyperTree_ComputeBreadthFirstOrderDescriptor, METH_VARARGS,
   "ComputeBreadthFirstOrderDescriptor(self, inputMask:vtkBitArray,\n    numberOfVerticesPerDepth:vtkTypeInt64Array,\n    descriptor:vtkBitArray, breadthFirstIdMap:vtkIdList) -> None\nC++: virtual void ComputeBreadthFirstOrderDescriptor(\n    vtkBitArray *inputMask,\n    vtkTypeInt64Array *numberOfVerticesPerDepth,\n    vtkBitArray *descriptor, vtkIdList *breadthFirstIdMap)\n\nThis method computes the breadth first order descriptor of the\ncurrent tree. It takes as input the input mask `inputMask` which\nshould be provided by the `vtkHyperTreeGrid` in which this\n`vtkHyperTree` lies. In addition to computing the descriptor, it\ncomputes the mapping between the current memory layout of this\ntree with the breadth first order version of it.\n\nOutputs are `numberOfVerticesPerDepth`, `descriptor` and\n`breadthFirstIdMap`. Each of those arrays are appended with new\ndata, so one can create one unique big array for an entire\n`vtkHyperTreeGrid` concatenating breadth first order description\nand mapping of concatenated trees.\n\n@param inputMask the mask provided by `vtkHyperTreeGrid`.\n\n@param numberOfVerticesPerDepth is self explanatory: from depth 0\nto the maximum\ndepth of the tree, it stores the number of vertices at each\ndepth. If the input tree has masked subtrees such that getting\nrid of those subtrees reduces the depth, then\n`numberOfVerticesPerDepth` will take this smaller depth into\naccount rather than adding zeros. In other words,\n`numberOfVerticesPerDepth` cannot have zero values.\n\n@param descriptor is a binary descriptor, in breadth first order,\nthat describes\nthe tree topology. If vertex of index `id` in breadth first order\nhas children, then the corresponding value in `descriptor` is\none. Otherwise, it is set to zero. Remember that arrays are\nappended, meaning that the index in `descriptor` corresponding to\n`id` in the current tree would be the size of `descriptor` before\ncalling this method, plus `id`.\n\n@param breadthFirstIdMap maps breadth first ordering to curre ...\n [Truncated]\n"},
  {"CopyStructure", PyvtkHyperTree_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ht:vtkHyperTree) -> None\nC++: void CopyStructure(vtkHyperTree *ht)\n\nCopy the structure by sharing the decomposition description of\nthe tree.\n\\pre ht_exist: ht!=nullptr\n"},
  {"Freeze", PyvtkHyperTree_Freeze, METH_VARARGS,
   "Freeze(self, mode:str) -> vtkHyperTree\nC++: virtual vtkHyperTree *Freeze(const char *mode)\n\nReturn a freeze instance (a priori compact but potentially\nunmodifiable). This method is calling by the Squeeze method of\nhypertree grid. The mode parameter will allow to propose\ndifferent instances. Today, there is none, the freeze call does\nnot do anything.\n"},
  {"SetTreeIndex", PyvtkHyperTree_SetTreeIndex, METH_VARARGS,
   "SetTreeIndex(self, treeIndex:int) -> None\nC++: void SetTreeIndex(vtkIdType treeIndex)\n\nSet/Get tree index in hypertree grid. Services for internal use\nbetween hypertree grid and hypertree.\n"},
  {"GetTreeIndex", PyvtkHyperTree_GetTreeIndex, METH_VARARGS,
   "GetTreeIndex(self) -> int\nC++: vtkIdType GetTreeIndex()\n\n"},
  {"GetNumberOfLevels", PyvtkHyperTree_GetNumberOfLevels, METH_VARARGS,
   "GetNumberOfLevels(self) -> int\nC++: unsigned int GetNumberOfLevels()\n\nReturn the number of levels.\n"},
  {"GetNumberOfVertices", PyvtkHyperTree_GetNumberOfVertices, METH_VARARGS,
   "GetNumberOfVertices(self) -> int\nC++: vtkIdType GetNumberOfVertices()\n\nReturn the number of all vertices (coarse and fine) in the tree.\n"},
  {"GetNumberOfNodes", PyvtkHyperTree_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: vtkIdType GetNumberOfNodes()\n\nReturn the number of nodes (coarse) in the tree.\n"},
  {"GetNumberOfLeaves", PyvtkHyperTree_GetNumberOfLeaves, METH_VARARGS,
   "GetNumberOfLeaves(self) -> int\nC++: vtkIdType GetNumberOfLeaves()\n\nReturn the number of leaf (fine) in the tree.\n"},
  {"GetBranchFactor", PyvtkHyperTree_GetBranchFactor, METH_VARARGS,
   "GetBranchFactor(self) -> int\nC++: int GetBranchFactor()\n\nReturn the branch factor of the tree.\n"},
  {"GetDimension", PyvtkHyperTree_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: int GetDimension()\n\nReturn the spatial dimension of the tree.\n"},
  {"GetNumberOfChildren", PyvtkHyperTree_GetNumberOfChildren, METH_VARARGS,
   "GetNumberOfChildren(self) -> int\nC++: vtkIdType GetNumberOfChildren()\n\nReturn the number of children per node of the tree. This value is\nbranchfactoring scale spatial dimension (f^d).\n"},
  {"GetScale", PyvtkHyperTree_GetScale, METH_VARARGS,
   "GetScale(self, s:[float, float, float]) -> None\nC++: void GetScale(double s[3])\nGetScale(self, d:int) -> float\nC++: double GetScale(unsigned int d)\n\nSet/Get scale of the tree in each direction for the ground level\n(0).\n"},
  {"CreateInstance", PyvtkHyperTree_CreateInstance, METH_VARARGS,
   "CreateInstance(branchFactor:int, dimension:int) -> vtkHyperTree\nC++: static vtkHyperTree *CreateInstance(\n    unsigned char branchFactor, unsigned char dimension)\n\nReturn an instance of an implementation of a hypertree for given\nbranch factor and dimension. Other versions of this code could be\nmade available to meet other needs without questioning cursors\nand filters. Since an instance, an other instance can be creating\nby call the method Freeze (by default, nothing more, instance\ncurrently is returning).\n"},
  {"GetActualMemorySizeBytes", PyvtkHyperTree_GetActualMemorySizeBytes, METH_VARARGS,
   "GetActualMemorySizeBytes(self) -> int\nC++: virtual unsigned long GetActualMemorySizeBytes()\n\nReturn memory used in bytes. NB: Ignore the attribute array\nbecause its size is added by the data set.\n"},
  {"GetActualMemorySize", PyvtkHyperTree_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned int GetActualMemorySize()\n\nReturn memory used in kibibytes (1024 bytes). NB: Ignore the\nattribute array because its size is added by the data set.\n"},
  {"IsGlobalIndexImplicit", PyvtkHyperTree_IsGlobalIndexImplicit, METH_VARARGS,
   "IsGlobalIndexImplicit(self) -> bool\nC++: virtual bool IsGlobalIndexImplicit()\n\nReturn if implicit global index mapping has been used. If true,\nthe initialize has been done by SetGlobalIndexStart (one call by\nhypertree). If false, the initialize has been done by\nSetGlobalIndexFromLocal (one call by cell of hypertree).\nGetGlobalIndexFromLocel get the good value of global index\nmapping for one cell what ever the initialize metho used.\n"},
  {"SetGlobalIndexStart", PyvtkHyperTree_SetGlobalIndexStart, METH_VARARGS,
   "SetGlobalIndexStart(self, start:int) -> None\nC++: virtual void SetGlobalIndexStart(vtkIdType start)\n\nSet the start implicit global index mapping for the first cell in\nthe current tree. The implicit global index mapping of a node\nwill be computed by this start index + the node index (local\noffset in tree). The node index begin by 0, the origin cell in\ntree. The follow values are organizing by fatrie as i to\ni+NumberOfChildren, for all children of one coarse cell, i is\n1+8*s with s in integer. The order of fatrie depend of order to\ncall SubdivideLeaf. This global index mapping permits to access a\nvalue of field for a cell, in implicit, the order values depends\nof implicit order linking with the order build of this tree.\nWARNING: See of hypertree grid, for to use a implicit global\nindex mapping, you have to build hypertree by hypertree without\nto recome in hypertree also build. For this tree, in debug,\nassert is calling if tried call SetGlobalIndexFromLocal.\n\\pre not_global_index_start_if_use_global_index_from_local\n"},
  {"GetGlobalIndexStart", PyvtkHyperTree_GetGlobalIndexStart, METH_VARARGS,
   "GetGlobalIndexStart(self) -> int\nC++: vtkIdType GetGlobalIndexStart()\n\nGet the start global index for the current tree for implicit\nglobal index mapping.\n"},
  {"SetGlobalIndexFromLocal", PyvtkHyperTree_SetGlobalIndexFromLocal, METH_VARARGS,
   "SetGlobalIndexFromLocal(self, index:int, global_:int) -> None\nC++: virtual void SetGlobalIndexFromLocal(vtkIdType index,\n    vtkIdType global)\n\nSet the mapping between a node index in tree and a explicit\nglobal index mapping. This global index mapping permits to access\na value of field for a cell, in explicit, the index depend of\norder values. For this tree, in debug, assert is calling if tried\ncall SetGlobalIndexStart.\n\\pre not_global_index_from_local_if_use_global_index_start\n"},
  {"GetGlobalIndexFromLocal", PyvtkHyperTree_GetGlobalIndexFromLocal, METH_VARARGS,
   "GetGlobalIndexFromLocal(self, index:int) -> int\nC++: virtual vtkIdType GetGlobalIndexFromLocal(vtkIdType index)\n\nGet the global id of a local node identified by index. Use the\nexplicit mapping function if available or the implicit mapping\nbuild with start global index.\n\\pre not_valid_index\n\\pre not_positive_start_index (case implicit global index\n    mapping)\n\\pre not_positive_global_index (case explicit global index\n    mapping)\n"},
  {"GetGlobalNodeIndexMax", PyvtkHyperTree_GetGlobalNodeIndexMax, METH_VARARGS,
   "GetGlobalNodeIndexMax(self) -> int\nC++: virtual vtkIdType GetGlobalNodeIndexMax()\n\nReturn the maximum value reached by global index mapping\n(implicit or explicit).\n"},
  {"IsLeaf", PyvtkHyperTree_IsLeaf, METH_VARARGS,
   "IsLeaf(self, index:int) -> bool\nC++: virtual bool IsLeaf(vtkIdType index)\n\nReturn if a vertice identified by index in tree as being leaf.\n\\pre not_valid_index\n"},
  {"SubdivideLeaf", PyvtkHyperTree_SubdivideLeaf, METH_VARARGS,
   "SubdivideLeaf(self, index:int, level:int) -> None\nC++: virtual void SubdivideLeaf(vtkIdType index,\n    unsigned int level)\n\nSubdivide a vertice, only if its a leaf.\n\\pre not_valide_index\n\\pre not_leaf\n"},
  {"IsTerminalNode", PyvtkHyperTree_IsTerminalNode, METH_VARARGS,
   "IsTerminalNode(self, index:int) -> bool\nC++: virtual bool IsTerminalNode(vtkIdType index)\n\nReturn if a vertice identified by index in tree as a terminal\nnode. For this, all childrens mus be all leaves.\n\\pre not_valid_index\n\\pre not_valid_child_index\n"},
  {"GetElderChildIndex", PyvtkHyperTree_GetElderChildIndex, METH_VARARGS,
   "GetElderChildIndex(self, index_parent:int) -> int\nC++: virtual vtkIdType GetElderChildIndex(\n    unsigned int index_parent)\n\nReturn the elder child index, local index node of first child, of\nnode, coarse cell, identified by index_parent.\n\\pre not_valid_index_parent\nPublic only for entry: vtkHyperTreeGridEntry,\nvtkHyperTreeGridGeometryEntry, vtkHyperTreeGridGeometryLevelEntry\n"},
  {"GetElderChildIndexArray", PyvtkHyperTree_GetElderChildIndexArray, METH_VARARGS,
   "GetElderChildIndexArray(self, nbElements:int) -> Pointer\nC++: virtual const unsigned int *GetElderChildIndexArray(\n    size_t &nbElements)\n\nReturn the elder child index array, internals of the tree\nstructure Should be used with great care, for consulting and not\nmodifying.\n"},
  {"HasScales", PyvtkHyperTree_HasScales, METH_VARARGS,
   "HasScales(self) -> bool\nC++: bool HasScales()\n\nReturn the existence scales.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHyperTree_Doc =
  "vtkHyperTree - A data object structured as a tree.\n\n"
  "Superclass: vtkObject\n\n"
  "An hypertree grid is a dataobject containing a rectilinear grid of\n"
  "elements that can be either null or a hypertree. An hypertree is a\n"
  "dataobject describing a decomposition tree. A VERTICE is an element\n"
  "of this tree. A NODE, also called COARSE cell, is a specific vertice\n"
  "which is refined and than has either exactly f^d children, where f in\n"
  "{2,3} is the branching factor, the same value for all trees in this\n"
  "hypertree grid, and d in {1,2,3} is the spatial dimension. It is\n"
  "called coarse because there are smaller child cells. A LEAF, also\n"
  "called FINE cell, is a vertice without children, not refined. It is\n"
  "called fine because in the same space there are no finer cells. In a\n"
  "tree, we can find coarse cells smaller than fine cell but not in the\n"
  "same space.\n\n"
  "Such trees have particular names for f=2:\n"
  "- bintree (d=1),\n"
  "- quadtree (d=2),\n"
  "- octree (d=3).\n\n"
  "The original octree class name came from the following paper:\n"
  " @ARTICLE{yau-srihari-1983,\n"
  "  author={Mann-May Yau and Sargur N. Srihari},\n"
  "  title={A Hierarchical Data Structure for Multidimensional Digital Images},\n"
  "  journal={Communications of the ACM},\n"
  "  month={July},\n"
  "  year={1983},\n"
  "  volume={26},\n"
  "  number={7},\n"
  "  pages={504--515}\n"
  "  }\n"
  " \n\n"
  "Attributes are associated with (all) cells, not with points. The\n"
  "attributes that are associated with coarses, it's used for LoD\n"
  "(Level-of-Detail). The attributes on coarse cells can be given by the\n"
  "code or/and computed by the use of a specific filter exploiting the\n"
  "values from its children (which can be leaves or not).\n\n"
  "The geometry is implicitly given by the size of the root node on each\n"
  "axis and position of the origin. In fact, in 3D, the geometry is then\n"
  "not limited to a cube but can have a rectangular shape.\n\n"
  "By construction, an hypertree is efficient in memory usage. The LoD\n"
  "feature allows for quick culling of part of the dataobject.\n\n"
  "This is an abstract class used as a superclass by a custom templated\n"
  "compact class. Other versions of this code could be made available to\n"
  "meet other needs without questioning cursors and filters. All methods\n"
  "are pure virtual. This is done to hide templates.\n\n"
  "@par Case octree with f=2, d=3: For each node (coarse cell), 8\n"
  "children are encoded in a child index (from 0 to 7) in the following\n"
  "orientation described in hypertree grid. It is easy to access each\n"
  "child as a cell of a grid. Note also that the binary representation\n"
  "is relevant, each bit codes a side: bit 0 encodes -x side (0) or +x\n"
  "side (1) bit 1 encodes -y side (0) or +y side (1) bit 2 encodes -z\n"
  "side (0) or +z side (1)\n"
  "-z side is first, in counter-clockwise order: 0: -y -x sides 1: -y +x\n"
  "sides 2: +y -x sides 3: +y +x sides +z side is last, in\n"
  "   counter-clockwise order: 4: -y -x sides 5: -y +x sides 6: +y -x\n"
  "   sides 7: +y +x sides\n"
  "              +y\n"
  " +-+-+        ^\n"
  " |2|3|        |\n"
  " +-+-+  O +z  +-> +x\n"
  " |0|1|\n"
  " +-+-+\n"
  "              +y\n"
  " +-+-+        ^\n"
  " |6|7|        |\n"
  " +-+-+  1 +z  +-> +x\n"
  " |4|5|\n"
  " +-+-+\n"
  " \n\n"
  "@par Case quadtree with f=2, d=2: Just use 2 bits.\n"
  "              +y\n"
  " +-+-+        ^\n"
  " |2|3|        |\n"
  " +-+-+        +-> +x\n"
  " |0|1|\n"
  " +-+-+\n"
  " \n\n"
  "@par Case bintree with f=2, d=1: Just use 1 bits.\n"
  "             O+-> +x\n"
  " \n\n"
  "It's more difficult with f=3.\n\n"
  "@par Thanks: This class was written by Philippe Pebay, Joachim\n"
  "Pouderoux, and Charles Law, Kitware 2013 This class was modified by\n"
  "Guenole Harel and Jacques-Bernard Lekien 2014 This class was modified\n"
  "by Philippe Pebay, 2016 Among others, this class was simplified,\n"
  "optimized (memory), documented and completed for to improve IO XML by\n"
  "Jacques-Bernard Lekien 2018-19 This work was supported by\n"
  "Commissariat a l'Energie Atomique CEA, DAM, DIF, F-91297 Arpajon,\n"
  "France.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHyperTree_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHyperTree", // tp_name
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
  PyvtkHyperTree_Doc, // tp_doc
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

PyObject *PyvtkHyperTree_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHyperTree_Type, PyvtkHyperTree_Methods,
    "vtkHyperTree",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHyperTree(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHyperTreeData_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTreeData", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkHyperTree_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHyperTree", o) != 0)
  {
    Py_DECREF(o);
  }

}

