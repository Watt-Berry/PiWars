// python wrapper for vtkDistributedGraphHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDistributedGraphHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDistributedGraphHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkDistributedGraphHelper_ClassNew(); }


static PyObject *
PyvtkDistributedGraphHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDistributedGraphHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDistributedGraphHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDistributedGraphHelper *tempr = vtkDistributedGraphHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDistributedGraphHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDistributedGraphHelper::NewInstance());

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
PyvtkDistributedGraphHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDistributedGraphHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDistributedGraphHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexOwner(temp0) :
      op->vtkDistributedGraphHelper::GetVertexOwner(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexIndex(temp0) :
      op->vtkDistributedGraphHelper::GetVertexIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetEdgeOwner(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeOwner");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetEdgeOwner(temp0) :
      op->vtkDistributedGraphHelper::GetEdgeOwner(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetEdgeIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetEdgeIndex(temp0) :
      op->vtkDistributedGraphHelper::GetEdgeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_MakeDistributedId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MakeDistributedId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->MakeDistributedId(temp0, temp1) :
      op->vtkDistributedGraphHelper::MakeDistributedId(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_GetVertexOwnerByPedigreeId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexOwnerByPedigreeId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant"))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVertexOwnerByPedigreeId(*temp0) :
      op->vtkDistributedGraphHelper::GetVertexOwnerByPedigreeId(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_Synchronize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Synchronize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->Synchronize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_Clone(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clone");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDistributedGraphHelper *op = static_cast<vtkDistributedGraphHelper *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkDistributedGraphHelper *tempr = op->Clone();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_DISTRIBUTEDVERTEXIDS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DISTRIBUTEDVERTEXIDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDistributedGraphHelper::DISTRIBUTEDVERTEXIDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDistributedGraphHelper_DISTRIBUTEDEDGEIDS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DISTRIBUTEDEDGEIDS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkDistributedGraphHelper::DISTRIBUTEDEDGEIDS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDistributedGraphHelper_Methods[] = {
  {"IsTypeOf", PyvtkDistributedGraphHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDistributedGraphHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDistributedGraphHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDistributedGraphHelper\nC++: static vtkDistributedGraphHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDistributedGraphHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDistributedGraphHelper\nC++: vtkDistributedGraphHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDistributedGraphHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDistributedGraphHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVertexOwner", PyvtkDistributedGraphHelper_GetVertexOwner, METH_VARARGS,
   "GetVertexOwner(self, v:int) -> int\nC++: vtkIdType GetVertexOwner(vtkIdType v)\n\nReturns owner of vertex v, by extracting top ceil(log2 P) bits of\nv.\n"},
  {"GetVertexIndex", PyvtkDistributedGraphHelper_GetVertexIndex, METH_VARARGS,
   "GetVertexIndex(self, v:int) -> int\nC++: vtkIdType GetVertexIndex(vtkIdType v)\n\nReturns local index of vertex v, by masking off top ceil(log2 P)\nbits of v.\n"},
  {"GetEdgeOwner", PyvtkDistributedGraphHelper_GetEdgeOwner, METH_VARARGS,
   "GetEdgeOwner(self, e_id:int) -> int\nC++: vtkIdType GetEdgeOwner(vtkIdType e_id)\n\nReturns owner of edge with ID e_id, by extracting top ceil(log2\nP) bits of e_id.\n"},
  {"GetEdgeIndex", PyvtkDistributedGraphHelper_GetEdgeIndex, METH_VARARGS,
   "GetEdgeIndex(self, e_id:int) -> int\nC++: vtkIdType GetEdgeIndex(vtkIdType e_id)\n\nReturns local index of edge with ID e_id, by masking off top\nceil(log2 P) bits of e_id.\n"},
  {"MakeDistributedId", PyvtkDistributedGraphHelper_MakeDistributedId, METH_VARARGS,
   "MakeDistributedId(self, owner:int, local:int) -> int\nC++: vtkIdType MakeDistributedId(int owner, vtkIdType local)\n\nBuilds a distributed ID consisting of the given owner and the\nlocal ID.\n"},
  {"GetVertexOwnerByPedigreeId", PyvtkDistributedGraphHelper_GetVertexOwnerByPedigreeId, METH_VARARGS,
   "GetVertexOwnerByPedigreeId(self, pedigreeId:vtkVariant) -> int\nC++: vtkIdType GetVertexOwnerByPedigreeId(\n    const vtkVariant &pedigreeId)\n\nDetermine which processor owns the vertex with the given pedigree\nID.\n"},
  {"Synchronize", PyvtkDistributedGraphHelper_Synchronize, METH_VARARGS,
   "Synchronize(self) -> None\nC++: virtual void Synchronize()\n\nSynchronizes all of the processors involved in this distributed\ngraph, so that all processors have a consistent view of the\ndistributed graph for the computation that follows. This routine\nshould be invoked after adding new edges into the distributed\ngraph, so that other processors will see those edges (or their\ncorresponding back-edges).\n"},
  {"Clone", PyvtkDistributedGraphHelper_Clone, METH_VARARGS,
   "Clone(self) -> vtkDistributedGraphHelper\nC++: virtual vtkDistributedGraphHelper *Clone()\n\nClones the distributed graph helper, returning another\ndistributed graph helper of the same kind that can be used in\nanother vtkGraph.\n"},
  {"DISTRIBUTEDVERTEXIDS", PyvtkDistributedGraphHelper_DISTRIBUTEDVERTEXIDS, METH_VARARGS,
   "DISTRIBUTEDVERTEXIDS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DISTRIBUTEDVERTEXIDS()\n\nInformation Keys that distributed graphs can append to attribute\narrays to flag them as containing distributed IDs.  These can be\nused to let routines that migrate vertices (either repartitioning\nor collecting graphs to single nodes) to also modify the ids\ncontained in the attribute arrays to maintain consistency.\n"},
  {"DISTRIBUTEDEDGEIDS", PyvtkDistributedGraphHelper_DISTRIBUTEDEDGEIDS, METH_VARARGS,
   "DISTRIBUTEDEDGEIDS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *DISTRIBUTEDEDGEIDS()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDistributedGraphHelper_Doc =
  "vtkVertexPedigreeIdDistributionFunction - The type of a function used\nto determine how to distribute vertex pedigree IDs across processors\nin a vtkGraph. The pedigree ID distribution function takes the\npedigree ID of the vertex and a user-supplied void pointer and\nreturns a hash value V. A vertex with that pedigree ID will reside on\nprocessor V % P, where P is the number of processors. This type is\nused in conjunction with the vtkDistributedGraphHelper class.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDistributedGraphHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDistributedGraphHelper", // tp_name
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
  PyvtkDistributedGraphHelper_Doc, // tp_doc
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

PyObject *PyvtkDistributedGraphHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDistributedGraphHelper_Type, PyvtkDistributedGraphHelper_Methods,
    "vtkDistributedGraphHelper",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDistributedGraphHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDistributedGraphHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDistributedGraphHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

