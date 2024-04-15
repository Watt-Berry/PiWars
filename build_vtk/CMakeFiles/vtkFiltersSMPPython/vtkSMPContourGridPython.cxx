// python wrapper for vtkSMPContourGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSMPContourGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPContourGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkSMPContourGrid_ClassNew(); }


static PyObject *
PyvtkSMPContourGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPContourGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPContourGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPContourGrid *tempr = vtkSMPContourGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPContourGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPContourGrid::NewInstance());

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
PyvtkSMPContourGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSMPContourGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSMPContourGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_SetMergePieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMergePieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMergePieces(temp0);
    }
    else
    {
      op->vtkSMPContourGrid::SetMergePieces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_GetMergePieces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMergePieces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMergePieces() :
      op->vtkSMPContourGrid::GetMergePieces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_MergePiecesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePiecesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePiecesOn();
    }
    else
    {
      op->vtkSMPContourGrid::MergePiecesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPContourGrid_MergePiecesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergePiecesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPContourGrid *op = static_cast<vtkSMPContourGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergePiecesOff();
    }
    else
    {
      op->vtkSMPContourGrid::MergePiecesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPContourGrid_Methods[] = {
  {"IsTypeOf", PyvtkSMPContourGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPContourGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPContourGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSMPContourGrid\nC++: static vtkSMPContourGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPContourGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSMPContourGrid\nC++: vtkSMPContourGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSMPContourGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSMPContourGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMergePieces", PyvtkSMPContourGrid_SetMergePieces, METH_VARARGS,
   "SetMergePieces(self, _arg:bool) -> None\nC++: virtual void SetMergePieces(bool _arg)\n\nIf MergePieces is true (default), this filter will merge all\npieces generated by processing the input with multiple threads.\nThe output will be a vtkPolyData. Note that this has a slight\noverhead which becomes more significant as the number of threads\nused grows. If MergePieces is false, this filter will generate a\nvtkMultiBlock of vtkPolyData where the number of pieces will be\nequal to the number of threads used.\n"},
  {"GetMergePieces", PyvtkSMPContourGrid_GetMergePieces, METH_VARARGS,
   "GetMergePieces(self) -> bool\nC++: virtual bool GetMergePieces()\n\n"},
  {"MergePiecesOn", PyvtkSMPContourGrid_MergePiecesOn, METH_VARARGS,
   "MergePiecesOn(self) -> None\nC++: virtual void MergePiecesOn()\n\n"},
  {"MergePiecesOff", PyvtkSMPContourGrid_MergePiecesOff, METH_VARARGS,
   "MergePiecesOff(self) -> None\nC++: virtual void MergePiecesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSMPContourGrid_Doc =
  "vtkSMPContourGrid - a subclass of vtkContourGrid that works in\nparallel vtkSMPContourGrid performs the same functionality as\nvtkContourGrid but does it using multiple threads.\n\n"
  "Superclass: vtkContourGrid\n\n"
  "This will probably be merged with vtkContourGrid in the future.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSMPContourGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSMP.vtkSMPContourGrid", // tp_name
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
  PyvtkSMPContourGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPContourGrid_StaticNew()
{
  return vtkSMPContourGrid::New();
}

PyObject *PyvtkSMPContourGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSMPContourGrid_Type, PyvtkSMPContourGrid_Methods,
    "vtkSMPContourGrid",
 &PyvtkSMPContourGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContourGrid");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPContourGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPContourGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPContourGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

