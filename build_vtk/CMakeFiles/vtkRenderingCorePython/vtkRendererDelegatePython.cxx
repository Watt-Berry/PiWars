// python wrapper for vtkRendererDelegate
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRendererDelegate.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRendererDelegate(PyObject *dict); }
extern "C" { PyObject *PyvtkRendererDelegate_ClassNew(); }


static PyObject *
PyvtkRendererDelegate_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRendererDelegate::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRendererDelegate::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRendererDelegate *tempr = vtkRendererDelegate::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRendererDelegate *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRendererDelegate::NewInstance());

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
PyvtkRendererDelegate_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRendererDelegate::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRendererDelegate::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    op->Render(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_SetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUsed(temp0);
    }
    else
    {
      op->vtkRendererDelegate::SetUsed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_GetUsed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUsed() :
      op->vtkRendererDelegate::GetUsed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsedOn();
    }
    else
    {
      op->vtkRendererDelegate::UsedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRendererDelegate_UsedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRendererDelegate *op = static_cast<vtkRendererDelegate *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UsedOff();
    }
    else
    {
      op->vtkRendererDelegate::UsedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRendererDelegate_Methods[] = {
  {"IsTypeOf", PyvtkRendererDelegate_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRendererDelegate_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRendererDelegate_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRendererDelegate\nC++: static vtkRendererDelegate *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRendererDelegate_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRendererDelegate\nC++: vtkRendererDelegate *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRendererDelegate_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRendererDelegate_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkRendererDelegate_Render, METH_VARARGS,
   "Render(self, r:vtkRenderer) -> None\nC++: virtual void Render(vtkRenderer *r)\n\nRender the props of vtkRenderer if Used is on.\n"},
  {"SetUsed", PyvtkRendererDelegate_SetUsed, METH_VARARGS,
   "SetUsed(self, _arg:bool) -> None\nC++: virtual void SetUsed(bool _arg)\n\nTells if the delegate has to be used by the renderer or not.\nInitial value is off.\n"},
  {"GetUsed", PyvtkRendererDelegate_GetUsed, METH_VARARGS,
   "GetUsed(self) -> bool\nC++: virtual bool GetUsed()\n\n"},
  {"UsedOn", PyvtkRendererDelegate_UsedOn, METH_VARARGS,
   "UsedOn(self) -> None\nC++: virtual void UsedOn()\n\n"},
  {"UsedOff", PyvtkRendererDelegate_UsedOff, METH_VARARGS,
   "UsedOff(self) -> None\nC++: virtual void UsedOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRendererDelegate_Doc =
  "vtkRendererDelegate - Render the props of a vtkRenderer\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRendererDelegate is an abstract class with a pure virtual method\n"
  "Render. This method replaces the Render method of vtkRenderer to\n"
  "allow custom rendering from an external project. A RendererDelegate\n"
  "is connected to a vtkRenderer with method SetDelegate(). An external\n"
  "project just has to provide a concrete implementation of\n"
  "vtkRendererDelegate.\n\n"
  "@sa\n"
  "vtkRenderer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRendererDelegate_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkRendererDelegate", // tp_name
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
  PyvtkRendererDelegate_Doc, // tp_doc
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

PyObject *PyvtkRendererDelegate_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRendererDelegate_Type, PyvtkRendererDelegate_Methods,
    "vtkRendererDelegate",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRendererDelegate(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRendererDelegate_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRendererDelegate", o) != 0)
  {
    Py_DECREF(o);
  }

}

