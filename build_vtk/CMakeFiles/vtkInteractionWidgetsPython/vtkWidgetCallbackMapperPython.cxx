// python wrapper for vtkWidgetCallbackMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWidgetCallbackMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetCallbackMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkWidgetCallbackMapper_ClassNew(); }


static PyObject *
PyvtkWidgetCallbackMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetCallbackMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetCallbackMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetCallbackMapper *tempr = vtkWidgetCallbackMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetCallbackMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetCallbackMapper::NewInstance());

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
PyvtkWidgetCallbackMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWidgetCallbackMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWidgetCallbackMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_SetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  vtkWidgetEventTranslator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWidgetEventTranslator"))
  {
    if (ap.IsBound())
    {
      op->SetEventTranslator(temp0);
    }
    else
    {
      op->vtkWidgetCallbackMapper::SetEventTranslator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_GetEventTranslator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventTranslator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->GetEventTranslator() :
      op->vtkWidgetCallbackMapper::GetEventTranslator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetCallbackMapper_InvokeCallback(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvokeCallback");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetCallbackMapper *op = static_cast<vtkWidgetCallbackMapper *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->InvokeCallback(temp0);
    }
    else
    {
      op->vtkWidgetCallbackMapper::InvokeCallback(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetCallbackMapper_Methods[] = {
  {"IsTypeOf", PyvtkWidgetCallbackMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWidgetCallbackMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWidgetCallbackMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWidgetCallbackMapper\nC++: static vtkWidgetCallbackMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWidgetCallbackMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWidgetCallbackMapper\nC++: vtkWidgetCallbackMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWidgetCallbackMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWidgetCallbackMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEventTranslator", PyvtkWidgetCallbackMapper_SetEventTranslator, METH_VARARGS,
   "SetEventTranslator(self, t:vtkWidgetEventTranslator) -> None\nC++: void SetEventTranslator(vtkWidgetEventTranslator *t)\n\nSpecify the vtkWidgetEventTranslator to coordinate with.\n"},
  {"GetEventTranslator", PyvtkWidgetCallbackMapper_GetEventTranslator, METH_VARARGS,
   "GetEventTranslator(self) -> vtkWidgetEventTranslator\nC++: virtual vtkWidgetEventTranslator *GetEventTranslator()\n\n"},
  {"InvokeCallback", PyvtkWidgetCallbackMapper_InvokeCallback, METH_VARARGS,
   "InvokeCallback(self, widgetEvent:int) -> None\nC++: void InvokeCallback(unsigned long widgetEvent)\n\nThis method invokes the callback given a widget event. A non-zero\nvalue is returned if the listed event is registered.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWidgetCallbackMapper_Doc =
  "vtkWidgetCallbackMapper - map widget events into callbacks\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetCallbackMapper maps widget events (defined in\n"
  "vtkWidgetEvent.h) into static class methods, and provides facilities\n"
  "to invoke the methods. This class is templated and meant to be used\n"
  "as an internal helper class by the widget classes. The class works in\n"
  "combination with the class vtkWidgetEventTranslator, which translates\n"
  "VTK events into widget events.\n\n"
  "@sa\n"
  "vtkWidgetEvent vtkWidgetEventTranslator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWidgetCallbackMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkWidgetCallbackMapper", // tp_name
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
  PyvtkWidgetCallbackMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetCallbackMapper_StaticNew()
{
  return vtkWidgetCallbackMapper::New();
}

PyObject *PyvtkWidgetCallbackMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWidgetCallbackMapper_Type, PyvtkWidgetCallbackMapper_Methods,
    "vtkWidgetCallbackMapper",
 &PyvtkWidgetCallbackMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetCallbackMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetCallbackMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetCallbackMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

