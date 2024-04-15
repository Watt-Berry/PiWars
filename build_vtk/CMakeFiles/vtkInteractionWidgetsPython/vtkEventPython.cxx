// python wrapper for vtkEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEvent.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEvent(PyObject *dict); }
extern "C" { PyObject *PyvtkEvent_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEvent_EventModifiers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkEvent.EventModifiers", // tp_name
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
PyObject *PyvtkEvent_EventModifiers_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEvent_EventModifiers_Type, static_cast<int>(val));
}


static PyObject *
PyvtkEvent_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEvent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEvent *tempr = vtkEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEvent::NewInstance());

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
PyvtkEvent_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEvent::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEvent::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEventId(temp0);
    }
    else
    {
      op->vtkEvent::SetEventId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetEventId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEventId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetEventId() :
      op->vtkEvent::GetEventId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetModifier(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModifier(temp0);
    }
    else
    {
      op->vtkEvent::SetModifier(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetModifier_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModifier");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModifier() :
      op->vtkEvent::GetModifier());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetModifier");

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    int tempr = vtkEvent::GetModifier(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkEvent_GetModifier(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkEvent_GetModifier_s1(self, args);
    case 1:
      return PyvtkEvent_GetModifier_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetModifier");
  return nullptr;
}


static PyObject *
PyvtkEvent_SetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeyCode(temp0);
    }
    else
    {
      op->vtkEvent::SetKeyCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetKeyCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeyCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetKeyCode() :
      op->vtkEvent::GetKeyCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRepeatCount(temp0);
    }
    else
    {
      op->vtkEvent::SetRepeatCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetRepeatCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRepeatCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRepeatCount() :
      op->vtkEvent::GetRepeatCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_SetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeySym(temp0);
    }
    else
    {
      op->vtkEvent::SetKeySym(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEvent_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEvent *op = static_cast<vtkEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkEvent::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEvent_Methods[] = {
  {"IsTypeOf", PyvtkEvent_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEvent_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEvent_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEvent\nC++: static vtkEvent *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEvent_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEvent\nC++: vtkEvent *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEvent_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEvent_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetEventId", PyvtkEvent_SetEventId, METH_VARARGS,
   "SetEventId(self, _arg:int) -> None\nC++: virtual void SetEventId(unsigned long _arg)\n\nSet the modifier for the event.\n"},
  {"GetEventId", PyvtkEvent_GetEventId, METH_VARARGS,
   "GetEventId(self) -> int\nC++: virtual unsigned long GetEventId()\n\n"},
  {"SetModifier", PyvtkEvent_SetModifier, METH_VARARGS,
   "SetModifier(self, _arg:int) -> None\nC++: virtual void SetModifier(int _arg)\n\nSet the modifier for the event.\n"},
  {"GetModifier", PyvtkEvent_GetModifier, METH_VARARGS,
   "GetModifier(self) -> int\nC++: virtual int GetModifier()\nGetModifier(__a:vtkRenderWindowInteractor) -> int\nC++: static int GetModifier(vtkRenderWindowInteractor *)\n\n"},
  {"SetKeyCode", PyvtkEvent_SetKeyCode, METH_VARARGS,
   "SetKeyCode(self, _arg:str) -> None\nC++: virtual void SetKeyCode(char _arg)\n\nSet the KeyCode for the event.\n"},
  {"GetKeyCode", PyvtkEvent_GetKeyCode, METH_VARARGS,
   "GetKeyCode(self) -> str\nC++: virtual char GetKeyCode()\n\n"},
  {"SetRepeatCount", PyvtkEvent_SetRepeatCount, METH_VARARGS,
   "SetRepeatCount(self, _arg:int) -> None\nC++: virtual void SetRepeatCount(int _arg)\n\nSet the repease count for the event.\n"},
  {"GetRepeatCount", PyvtkEvent_GetRepeatCount, METH_VARARGS,
   "GetRepeatCount(self) -> int\nC++: virtual int GetRepeatCount()\n\n"},
  {"SetKeySym", PyvtkEvent_SetKeySym, METH_VARARGS,
   "SetKeySym(self, _arg:str) -> None\nC++: virtual void SetKeySym(const char *_arg)\n\nSet the complex key symbol (compound key strokes) for the event.\n"},
  {"GetKeySym", PyvtkEvent_GetKeySym, METH_VARARGS,
   "GetKeySym(self) -> str\nC++: virtual char *GetKeySym()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEvent_Doc =
  "vtkEvent - a complete specification of a VTK event including all\nmodifiers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkEvent is a class that fully describes a VTK event. It is used by\n"
  "the widgets to help specify the mapping between VTK events and widget\n"
  "events.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkEvent", // tp_name
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
  PyvtkEvent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEvent_StaticNew()
{
  return vtkEvent::New();
}

PyObject *PyvtkEvent_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEvent_Type, PyvtkEvent_Methods,
    "vtkEvent",
 &PyvtkEvent_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkEvent_EventModifiers_Type);
  PyVTKEnum_Add(&PyvtkEvent_EventModifiers_Type, "vtkEvent.EventModifiers");

  o = (PyObject *)&PyvtkEvent_EventModifiers_Type;
  if (PyDict_SetItemString(d, "EventModifiers", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkEvent::EventModifiers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "AnyModifier", vtkEvent::AnyModifier },
        { "NoModifier", vtkEvent::NoModifier },
        { "ShiftModifier", vtkEvent::ShiftModifier },
        { "ControlModifier", vtkEvent::ControlModifier },
        { "AltModifier", vtkEvent::AltModifier },
      };

    o = PyvtkEvent_EventModifiers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEvent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

