// python wrapper for vtkWidgetEvent
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWidgetEvent.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetEvent(PyObject *dict); }
extern "C" { PyObject *PyvtkWidgetEvent_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWidgetEvent_WidgetEventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkWidgetEvent.WidgetEventIds", // tp_name
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
PyObject *PyvtkWidgetEvent_WidgetEventIds_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkWidgetEvent_WidgetEventIds_Type, static_cast<int>(val));
}


static PyObject *
PyvtkWidgetEvent_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetEvent::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEvent::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetEvent *tempr = vtkWidgetEvent::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEvent *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEvent::NewInstance());

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
PyvtkWidgetEvent_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWidgetEvent::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEvent *op = static_cast<vtkWidgetEvent *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWidgetEvent::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetStringFromEventId(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetStringFromEventId");

  unsigned long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkWidgetEvent::GetStringFromEventId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEvent_GetEventIdFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEventIdFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = vtkWidgetEvent::GetEventIdFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEvent_Methods[] = {
  {"IsTypeOf", PyvtkWidgetEvent_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWidgetEvent_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWidgetEvent_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWidgetEvent\nC++: static vtkWidgetEvent *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWidgetEvent_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWidgetEvent\nC++: vtkWidgetEvent *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWidgetEvent_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWidgetEvent_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetStringFromEventId", PyvtkWidgetEvent_GetStringFromEventId, METH_VARARGS,
   "GetStringFromEventId(event:int) -> str\nC++: static const char *GetStringFromEventId(unsigned long event)\n\nConvenience methods for translating between event names and event\nids.\n"},
  {"GetEventIdFromString", PyvtkWidgetEvent_GetEventIdFromString, METH_VARARGS,
   "GetEventIdFromString(event:str) -> int\nC++: static unsigned long GetEventIdFromString(const char *event)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWidgetEvent_Doc =
  "vtkWidgetEvent - define widget events\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetEvent defines widget events. These events are processed by\n"
  "subclasses of vtkInteractorObserver.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWidgetEvent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkWidgetEvent", // tp_name
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
  PyvtkWidgetEvent_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetEvent_StaticNew()
{
  return vtkWidgetEvent::New();
}

PyObject *PyvtkWidgetEvent_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWidgetEvent_Type, PyvtkWidgetEvent_Methods,
    "vtkWidgetEvent",
 &PyvtkWidgetEvent_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkWidgetEvent_WidgetEventIds_Type);
  PyVTKEnum_Add(&PyvtkWidgetEvent_WidgetEventIds_Type, "vtkWidgetEvent.WidgetEventIds");

  o = (PyObject *)&PyvtkWidgetEvent_WidgetEventIds_Type;
  if (PyDict_SetItemString(d, "WidgetEventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 33; c++)
  {
    typedef vtkWidgetEvent::WidgetEventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[33] = {
        { "NoEvent", vtkWidgetEvent::NoEvent },
        { "Select", vtkWidgetEvent::Select },
        { "EndSelect", vtkWidgetEvent::EndSelect },
        { "Delete", vtkWidgetEvent::Delete },
        { "Translate", vtkWidgetEvent::Translate },
        { "EndTranslate", vtkWidgetEvent::EndTranslate },
        { "Scale", vtkWidgetEvent::Scale },
        { "EndScale", vtkWidgetEvent::EndScale },
        { "Resize", vtkWidgetEvent::Resize },
        { "EndResize", vtkWidgetEvent::EndResize },
        { "Rotate", vtkWidgetEvent::Rotate },
        { "EndRotate", vtkWidgetEvent::EndRotate },
        { "Move", vtkWidgetEvent::Move },
        { "SizeHandles", vtkWidgetEvent::SizeHandles },
        { "AddPoint", vtkWidgetEvent::AddPoint },
        { "AddFinalPoint", vtkWidgetEvent::AddFinalPoint },
        { "Completed", vtkWidgetEvent::Completed },
        { "PickPoint", vtkWidgetEvent::PickPoint },
        { "PickNormal", vtkWidgetEvent::PickNormal },
        { "PickDirectionPoint", vtkWidgetEvent::PickDirectionPoint },
        { "TimedOut", vtkWidgetEvent::TimedOut },
        { "ModifyEvent", vtkWidgetEvent::ModifyEvent },
        { "Reset", vtkWidgetEvent::Reset },
        { "Up", vtkWidgetEvent::Up },
        { "Down", vtkWidgetEvent::Down },
        { "Left", vtkWidgetEvent::Left },
        { "Right", vtkWidgetEvent::Right },
        { "Select3D", vtkWidgetEvent::Select3D },
        { "EndSelect3D", vtkWidgetEvent::EndSelect3D },
        { "Move3D", vtkWidgetEvent::Move3D },
        { "AddPoint3D", vtkWidgetEvent::AddPoint3D },
        { "AddFinalPoint3D", vtkWidgetEvent::AddFinalPoint3D },
        { "HoverLeave", vtkWidgetEvent::HoverLeave },
      };

    o = PyvtkWidgetEvent_WidgetEventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetEvent(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetEvent_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetEvent", o) != 0)
  {
    Py_DECREF(o);
  }

}

