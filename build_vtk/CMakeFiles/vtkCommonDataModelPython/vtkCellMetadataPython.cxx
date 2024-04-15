// python wrapper for vtkCellMetadata
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
#include "vtkStringToken.h"
#include "vtkCellMetadata.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellMetadata(PyObject *dict); }
extern "C" { PyObject *PyvtkCellMetadata_ClassNew(); }


static PyObject *
PyvtkCellMetadata_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellMetadata::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellMetadata::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellMetadata *tempr = vtkCellMetadata::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_NewInstance_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellMetadata::NewInstance());

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
PyvtkCellMetadata_NewInstance_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "NewInstance");

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkCellGrid *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkCellGrid")))
  {
    vtkSmartPointer<vtkCellMetadata> tempr = vtkCellMetadata::NewInstance(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkCellMetadata_NewInstance(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkCellMetadata_NewInstance_s1(self, args);
    case 1:
    case 2:
      return PyvtkCellMetadata_NewInstance_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "NewInstance");
  return nullptr;
}


static PyObject *
PyvtkCellMetadata_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellMetadata::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellMetadata::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_SetCellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  vtkCellGrid *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGrid"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetCellGrid(temp0) :
      op->vtkCellMetadata::SetCellGrid(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_GetCellGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->GetCellGrid() :
      op->vtkCellMetadata::GetCellGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellMetadata::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  vtkCellGridQuery *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGridQuery"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0) :
      op->vtkCellMetadata::Query(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCellMetadata::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellMetadata *op = static_cast<vtkCellMetadata *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellMetadata::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellMetadata_GetResponders(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetResponders");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkCellGridResponders *tempr = vtkCellMetadata::GetResponders();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellMetadata_Methods[] = {
  {"IsTypeOf", PyvtkCellMetadata_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellMetadata_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellMetadata_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellMetadata\nC++: static vtkCellMetadata *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellMetadata_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellMetadata\nC++: vtkCellMetadata *NewInstance()\nNewInstance(className:vtkStringToken, grid:vtkCellGrid=...)\n    -> vtkCellMetadata\nC++: static vtkSmartPointer<vtkCellMetadata> NewInstance(\n    vtkStringToken className, vtkCellGrid *grid=nullptr)\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellMetadata_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellMetadata_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellGrid", PyvtkCellMetadata_SetCellGrid, METH_VARARGS,
   "SetCellGrid(self, parent:vtkCellGrid) -> bool\nC++: virtual bool SetCellGrid(vtkCellGrid *parent)\n\nSet the vtkCellGrid holding DOF arrays required by this cell.\n\nIf the given vtkCellGrid does not have the required degrees of\nfreedom arrays (as provided by GetDOFTypes()), then this method\nwill return false.\n\nIf this method returns true, the parent grid will have\nincremented the reference count of this class instance.\n"},
  {"GetCellGrid", PyvtkCellMetadata_GetCellGrid, METH_VARARGS,
   "GetCellGrid(self) -> vtkCellGrid\nC++: virtual vtkCellGrid *GetCellGrid()\n\nReturn the parent vtkCellGrid that owns this instance (or\nnullptr).\n"},
  {"GetNumberOfCells", PyvtkCellMetadata_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nReturn the number of cells of this type in the parent cell-grid\nobject. Subclasses must override this method.\n"},
  {"Query", PyvtkCellMetadata_Query, METH_VARARGS,
   "Query(self, query:vtkCellGridQuery) -> bool\nC++: bool Query(vtkCellGridQuery *query)\n\nRespond to a query on cells of this type.\n\nThis returns true on success and false on failure. If no\nresponder has been registered for queries of this type, that is\nconsidered a failure.\n"},
  {"ShallowCopy", PyvtkCellMetadata_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, other:vtkCellMetadata) -> None\nC++: virtual void ShallowCopy(vtkCellMetadata *other)\n\nCopy other into this instance (which must be of the same type).\n\nThese methods exist so subclasses know when they are being\ncopied; the base class has no data to copy, so both ShallowCopy\nand DeepCopy do nothing.\n"},
  {"DeepCopy", PyvtkCellMetadata_DeepCopy, METH_VARARGS,
   "DeepCopy(self, other:vtkCellMetadata) -> None\nC++: virtual void DeepCopy(vtkCellMetadata *other)\n\n"},
  {"GetResponders", PyvtkCellMetadata_GetResponders, METH_VARARGS,
   "GetResponders() -> vtkCellGridResponders\nC++: static vtkCellGridResponders *GetResponders()\n\nReturn the set of registered responder types.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellMetadata_Doc =
  "vtkCellMetadata - Metadata for a particular type of cell (finite\nelement).\n\n"
  "Superclass: vtkObject\n\n"
  "This is a base class for metadata on cell types held by a vtkCellGrid\n"
  "instance (not for subclasses of vtkCell). A vtkCellGrid holds one\n"
  "instance of a vtkCellMetadata-subclass for each *type* of cell\n"
  "present in the grid.\n\n"
  "This class intentionally provides very little functionality; instead,\n"
  "it is intended to serve as a key or index into a set of registered\n"
  "responder classes which are able respond to queries about cells of\n"
  "this type. This pattern makes it possible to extend VTK with both new\n"
  "cell types and new types of queries for existing cell types.\n\n"
  "@sa vtkCellGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellMetadata_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellMetadata", // tp_name
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
  PyvtkCellMetadata_Doc, // tp_doc
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

PyObject *PyvtkCellMetadata_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellMetadata_Type, PyvtkCellMetadata_Methods,
    "vtkCellMetadata",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellMetadata(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellMetadata_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellMetadata", o) != 0)
  {
    Py_DECREF(o);
  }

}

