// python wrapper for vtkAddMembershipArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAddMembershipArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAddMembershipArray(PyObject *dict); }
extern "C" { PyObject *PyvtkAddMembershipArray_ClassNew(); }


static PyObject *
PyvtkAddMembershipArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAddMembershipArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAddMembershipArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAddMembershipArray *tempr = vtkAddMembershipArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAddMembershipArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAddMembershipArray::NewInstance());

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
PyvtkAddMembershipArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAddMembershipArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAddMembershipArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkAddMembershipArray::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMinValue() :
      op->vtkAddMembershipArray::GetFieldTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetFieldTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMaxValue() :
      op->vtkAddMembershipArray::GetFieldTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputArrayName(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetOutputArrayName() :
      op->vtkAddMembershipArray::GetOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayName(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetInputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetInputArrayName() :
      op->vtkAddMembershipArray::GetInputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_SetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetInputValues(temp0);
    }
    else
    {
      op->vtkAddMembershipArray::SetInputValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAddMembershipArray_GetInputValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAddMembershipArray *op = static_cast<vtkAddMembershipArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetInputValues() :
      op->vtkAddMembershipArray::GetInputValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkAddMembershipArray_Methods[] = {
  {"IsTypeOf", PyvtkAddMembershipArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAddMembershipArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAddMembershipArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAddMembershipArray\nC++: static vtkAddMembershipArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAddMembershipArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAddMembershipArray\nC++: vtkAddMembershipArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAddMembershipArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAddMembershipArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetFieldType", PyvtkAddMembershipArray_GetFieldType, METH_VARARGS,
   "GetFieldType(self) -> int\nC++: virtual int GetFieldType()\n\nThe field type to add the membership array to.\n"},
  {"SetFieldType", PyvtkAddMembershipArray_SetFieldType, METH_VARARGS,
   "SetFieldType(self, _arg:int) -> None\nC++: virtual void SetFieldType(int _arg)\n\n"},
  {"GetFieldTypeMinValue", PyvtkAddMembershipArray_GetFieldTypeMinValue, METH_VARARGS,
   "GetFieldTypeMinValue(self) -> int\nC++: virtual int GetFieldTypeMinValue()\n\n"},
  {"GetFieldTypeMaxValue", PyvtkAddMembershipArray_GetFieldTypeMaxValue, METH_VARARGS,
   "GetFieldTypeMaxValue(self) -> int\nC++: virtual int GetFieldTypeMaxValue()\n\n"},
  {"SetOutputArrayName", PyvtkAddMembershipArray_SetOutputArrayName, METH_VARARGS,
   "SetOutputArrayName(self, _arg:str) -> None\nC++: virtual void SetOutputArrayName(const char *_arg)\n\nThe name of the array added to the output vtkDataSetAttributes\nindicating membership. Defaults to \"membership\".\n"},
  {"GetOutputArrayName", PyvtkAddMembershipArray_GetOutputArrayName, METH_VARARGS,
   "GetOutputArrayName(self) -> str\nC++: virtual char *GetOutputArrayName()\n\n"},
  {"SetInputArrayName", PyvtkAddMembershipArray_SetInputArrayName, METH_VARARGS,
   "SetInputArrayName(self, _arg:str) -> None\nC++: virtual void SetInputArrayName(const char *_arg)\n\n"},
  {"GetInputArrayName", PyvtkAddMembershipArray_GetInputArrayName, METH_VARARGS,
   "GetInputArrayName(self) -> str\nC++: virtual char *GetInputArrayName()\n\n"},
  {"SetInputValues", PyvtkAddMembershipArray_SetInputValues, METH_VARARGS,
   "SetInputValues(self, __a:vtkAbstractArray) -> None\nC++: void SetInputValues(vtkAbstractArray *)\n\n"},
  {"GetInputValues", PyvtkAddMembershipArray_GetInputValues, METH_VARARGS,
   "GetInputValues(self) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetInputValues()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAddMembershipArray_Doc =
  "vtkAddMembershipArray - Add an array to the output indicating\nmembership within an input selection.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "This filter takes an input selection, vtkDataSetAttribute\n"
  "information, and data object and adds a bit array to the output\n"
  "vtkDataSetAttributes indicating whether each index was selected or\n"
  "not.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAddMembershipArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkAddMembershipArray", // tp_name
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
  PyvtkAddMembershipArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAddMembershipArray_StaticNew()
{
  return vtkAddMembershipArray::New();
}

PyObject *PyvtkAddMembershipArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAddMembershipArray_Type, PyvtkAddMembershipArray_Methods,
    "vtkAddMembershipArray",
 &PyvtkAddMembershipArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "FIELD_DATA", vtkAddMembershipArray::FIELD_DATA },
        { "POINT_DATA", vtkAddMembershipArray::POINT_DATA },
        { "CELL_DATA", vtkAddMembershipArray::CELL_DATA },
        { "VERTEX_DATA", vtkAddMembershipArray::VERTEX_DATA },
        { "EDGE_DATA", vtkAddMembershipArray::EDGE_DATA },
        { "ROW_DATA", vtkAddMembershipArray::ROW_DATA },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAddMembershipArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAddMembershipArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAddMembershipArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

