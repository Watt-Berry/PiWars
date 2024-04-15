// python wrapper for vtkExtractSelectedRows
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractSelectedRows.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractSelectedRows(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractSelectedRows_ClassNew(); }


static PyObject *
PyvtkExtractSelectedRows_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractSelectedRows::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractSelectedRows::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractSelectedRows *tempr = vtkExtractSelectedRows::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractSelectedRows *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractSelectedRows::NewInstance());

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
PyvtkExtractSelectedRows_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractSelectedRows::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractSelectedRows::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetSelectionConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionConnection(temp0);
    }
    else
    {
      op->vtkExtractSelectedRows::SetSelectionConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetAnnotationLayersConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLayersConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLayersConnection(temp0);
    }
    else
    {
      op->vtkExtractSelectedRows::SetAnnotationLayersConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_FillInputPortInformation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillInputPortInformation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->FillInputPortInformation(temp0, temp1) :
      op->vtkExtractSelectedRows::FillInputPortInformation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_SetAddOriginalRowIdsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAddOriginalRowIdsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAddOriginalRowIdsArray(temp0);
    }
    else
    {
      op->vtkExtractSelectedRows::SetAddOriginalRowIdsArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_GetAddOriginalRowIdsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAddOriginalRowIdsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAddOriginalRowIdsArray() :
      op->vtkExtractSelectedRows::GetAddOriginalRowIdsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalRowIdsArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddOriginalRowIdsArrayOn();
    }
    else
    {
      op->vtkExtractSelectedRows::AddOriginalRowIdsArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOriginalRowIdsArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractSelectedRows *op = static_cast<vtkExtractSelectedRows *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AddOriginalRowIdsArrayOff();
    }
    else
    {
      op->vtkExtractSelectedRows::AddOriginalRowIdsArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractSelectedRows_Methods[] = {
  {"IsTypeOf", PyvtkExtractSelectedRows_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractSelectedRows_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractSelectedRows_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractSelectedRows\nC++: static vtkExtractSelectedRows *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractSelectedRows_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractSelectedRows\nC++: vtkExtractSelectedRows *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractSelectedRows_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractSelectedRows_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSelectionConnection", PyvtkExtractSelectedRows_SetSelectionConnection, METH_VARARGS,
   "SetSelectionConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void SetSelectionConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the second input (i.e. the\nselection).\n"},
  {"SetAnnotationLayersConnection", PyvtkExtractSelectedRows_SetAnnotationLayersConnection, METH_VARARGS,
   "SetAnnotationLayersConnection(self, in_:vtkAlgorithmOutput)\n    -> None\nC++: void SetAnnotationLayersConnection(vtkAlgorithmOutput *in)\n\nA convenience method for setting the third input (i.e. the\nannotation layers).\n"},
  {"FillInputPortInformation", PyvtkExtractSelectedRows_FillInputPortInformation, METH_VARARGS,
   "FillInputPortInformation(self, port:int, info:vtkInformation)\n    -> int\nC++: int FillInputPortInformation(int port, vtkInformation *info)\n    override;\n\nSpecify the first vtkGraph input and the second vtkSelection\ninput.\n"},
  {"SetAddOriginalRowIdsArray", PyvtkExtractSelectedRows_SetAddOriginalRowIdsArray, METH_VARARGS,
   "SetAddOriginalRowIdsArray(self, _arg:bool) -> None\nC++: virtual void SetAddOriginalRowIdsArray(bool _arg)\n\nWhen set, a column named vtkOriginalRowIds will be added to the\noutput. False by default.\n"},
  {"GetAddOriginalRowIdsArray", PyvtkExtractSelectedRows_GetAddOriginalRowIdsArray, METH_VARARGS,
   "GetAddOriginalRowIdsArray(self) -> bool\nC++: virtual bool GetAddOriginalRowIdsArray()\n\n"},
  {"AddOriginalRowIdsArrayOn", PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOn, METH_VARARGS,
   "AddOriginalRowIdsArrayOn(self) -> None\nC++: virtual void AddOriginalRowIdsArrayOn()\n\n"},
  {"AddOriginalRowIdsArrayOff", PyvtkExtractSelectedRows_AddOriginalRowIdsArrayOff, METH_VARARGS,
   "AddOriginalRowIdsArrayOff(self) -> None\nC++: virtual void AddOriginalRowIdsArrayOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractSelectedRows_Doc =
  "vtkExtractSelectedRows - return selected rows of a table\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "The first input is a vtkTable to extract rows from. The second input\n"
  "is a vtkSelection containing the selected indices. The third input is\n"
  "a vtkAnnotationLayers containing selected indices. The field type of\n"
  "the input selection is ignored when converted to row indices.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractSelectedRows_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractSelectedRows", // tp_name
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
  PyvtkExtractSelectedRows_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractSelectedRows_StaticNew()
{
  return vtkExtractSelectedRows::New();
}

PyObject *PyvtkExtractSelectedRows_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractSelectedRows_Type, PyvtkExtractSelectedRows_Methods,
    "vtkExtractSelectedRows",
 &PyvtkExtractSelectedRows_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractSelectedRows(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractSelectedRows_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractSelectedRows", o) != 0)
  {
    Py_DECREF(o);
  }

}

