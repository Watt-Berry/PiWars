// python wrapper for vtkAssignCoordinates
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAssignCoordinates.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssignCoordinates(PyObject *dict); }
extern "C" { PyObject *PyvtkAssignCoordinates_ClassNew(); }


static PyObject *
PyvtkAssignCoordinates_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssignCoordinates::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssignCoordinates::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssignCoordinates *tempr = vtkAssignCoordinates::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssignCoordinates *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssignCoordinates::NewInstance());

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
PyvtkAssignCoordinates_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAssignCoordinates::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAssignCoordinates::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXCoordArrayName(temp0);
    }
    else
    {
      op->vtkAssignCoordinates::SetXCoordArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetXCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXCoordArrayName() :
      op->vtkAssignCoordinates::GetXCoordArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYCoordArrayName(temp0);
    }
    else
    {
      op->vtkAssignCoordinates::SetYCoordArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetYCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYCoordArrayName() :
      op->vtkAssignCoordinates::GetYCoordArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZCoordArrayName(temp0);
    }
    else
    {
      op->vtkAssignCoordinates::SetZCoordArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_GetZCoordArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCoordArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZCoordArrayName() :
      op->vtkAssignCoordinates::GetZCoordArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignCoordinates_SetJitter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetJitter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignCoordinates *op = static_cast<vtkAssignCoordinates *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetJitter(temp0);
    }
    else
    {
      op->vtkAssignCoordinates::SetJitter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAssignCoordinates_Methods[] = {
  {"IsTypeOf", PyvtkAssignCoordinates_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssignCoordinates_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssignCoordinates_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAssignCoordinates\nC++: static vtkAssignCoordinates *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssignCoordinates_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAssignCoordinates\nC++: vtkAssignCoordinates *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAssignCoordinates_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAssignCoordinates_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetXCoordArrayName", PyvtkAssignCoordinates_SetXCoordArrayName, METH_VARARGS,
   "SetXCoordArrayName(self, _arg:str) -> None\nC++: virtual void SetXCoordArrayName(const char *_arg)\n\nSet the x coordinate array name.\n"},
  {"GetXCoordArrayName", PyvtkAssignCoordinates_GetXCoordArrayName, METH_VARARGS,
   "GetXCoordArrayName(self) -> str\nC++: virtual char *GetXCoordArrayName()\n\n"},
  {"SetYCoordArrayName", PyvtkAssignCoordinates_SetYCoordArrayName, METH_VARARGS,
   "SetYCoordArrayName(self, _arg:str) -> None\nC++: virtual void SetYCoordArrayName(const char *_arg)\n\nSet the y coordinate array name.\n"},
  {"GetYCoordArrayName", PyvtkAssignCoordinates_GetYCoordArrayName, METH_VARARGS,
   "GetYCoordArrayName(self) -> str\nC++: virtual char *GetYCoordArrayName()\n\n"},
  {"SetZCoordArrayName", PyvtkAssignCoordinates_SetZCoordArrayName, METH_VARARGS,
   "SetZCoordArrayName(self, _arg:str) -> None\nC++: virtual void SetZCoordArrayName(const char *_arg)\n\nSet the z coordinate array name.\n"},
  {"GetZCoordArrayName", PyvtkAssignCoordinates_GetZCoordArrayName, METH_VARARGS,
   "GetZCoordArrayName(self) -> str\nC++: virtual char *GetZCoordArrayName()\n\n"},
  {"SetJitter", PyvtkAssignCoordinates_SetJitter, METH_VARARGS,
   "SetJitter(self, _arg:bool) -> None\nC++: virtual void SetJitter(bool _arg)\n\nSet if you want a random jitter\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAssignCoordinates_Doc =
  "vtkAssignCoordinates - Given two(or three) arrays take the values in\nthose arrays and simply assign them to the coordinates of the\nvertices.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "Given two(or three) arrays take the values in those arrays and simply\n"
  "assign them to the coordinates of the vertices. Yes you could do this\n"
  "with the array calculator, but your mom wears army boots so we're not\n"
  "going to.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssignCoordinates_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkAssignCoordinates", // tp_name
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
  PyvtkAssignCoordinates_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssignCoordinates_StaticNew()
{
  return vtkAssignCoordinates::New();
}

PyObject *PyvtkAssignCoordinates_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAssignCoordinates_Type, PyvtkAssignCoordinates_Methods,
    "vtkAssignCoordinates",
 &PyvtkAssignCoordinates_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssignCoordinates(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssignCoordinates_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssignCoordinates", o) != 0)
  {
    Py_DECREF(o);
  }

}

