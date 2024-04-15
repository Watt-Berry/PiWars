// python wrapper for vtkTDxInteractorStyle
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTDxInteractorStyle.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTDxInteractorStyle(PyObject *dict); }
extern "C" { PyObject *PyvtkTDxInteractorStyle_ClassNew(); }


static PyObject *
PyvtkTDxInteractorStyle_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTDxInteractorStyle::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyle::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTDxInteractorStyle *tempr = vtkTDxInteractorStyle::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyle *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyle::NewInstance());

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
PyvtkTDxInteractorStyle_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTDxInteractorStyle::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTDxInteractorStyle::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonPressedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonPressedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->OnButtonPressedEvent(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::OnButtonPressedEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_OnButtonReleasedEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnButtonReleasedEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->OnButtonReleasedEvent(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::OnButtonReleasedEvent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_ProcessEvent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProcessEvent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkRenderer *temp0 = nullptr;
  unsigned long temp1;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1) &&
      ap.GetBuffer(temp2, &pbuf2))
  {
    if (ap.IsBound())
    {
      op->ProcessEvent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTDxInteractorStyle::ProcessEvent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_GetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->GetSettings() :
      op->vtkTDxInteractorStyle::GetSettings());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyle_SetSettings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSettings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyle *op = static_cast<vtkTDxInteractorStyle *>(vp);

  vtkTDxInteractorStyleSettings *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTDxInteractorStyleSettings"))
  {
    if (ap.IsBound())
    {
      op->SetSettings(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyle::SetSettings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyle_Methods[] = {
  {"IsTypeOf", PyvtkTDxInteractorStyle_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTDxInteractorStyle_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTDxInteractorStyle_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTDxInteractorStyle\nC++: static vtkTDxInteractorStyle *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTDxInteractorStyle_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTDxInteractorStyle\nC++: vtkTDxInteractorStyle *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTDxInteractorStyle_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTDxInteractorStyle_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"OnButtonPressedEvent", PyvtkTDxInteractorStyle_OnButtonPressedEvent, METH_VARARGS,
   "OnButtonPressedEvent(self, button:int) -> None\nC++: virtual void OnButtonPressedEvent(int button)\n\nAction on button pressed event. Default implementation is empty.\n"},
  {"OnButtonReleasedEvent", PyvtkTDxInteractorStyle_OnButtonReleasedEvent, METH_VARARGS,
   "OnButtonReleasedEvent(self, button:int) -> None\nC++: virtual void OnButtonReleasedEvent(int button)\n\nAction on button released event. Default implementation is empty.\n"},
  {"ProcessEvent", PyvtkTDxInteractorStyle_ProcessEvent, METH_VARARGS,
   "ProcessEvent(self, renderer:vtkRenderer, event:int,\n    calldata:Pointer) -> None\nC++: virtual void ProcessEvent(vtkRenderer *renderer,\n    unsigned long event, void *calldata)\n\nDispatch the events TDxMotionEvent, TDxButtonPressEvent and\nTDxButtonReleaseEvent to OnMotionEvent(), OnButtonPressedEvent()\nand OnButtonReleasedEvent() respectively. It is called by the\nvtkInteractorStyle. This method is virtual for convenient but you\nshould really override the On*Event() methods only.\n\\pre renderer can be null.\n"},
  {"GetSettings", PyvtkTDxInteractorStyle_GetSettings, METH_VARARGS,
   "GetSettings(self) -> vtkTDxInteractorStyleSettings\nC++: virtual vtkTDxInteractorStyleSettings *GetSettings()\n\n3Dconnexion device settings. (sensitivity, individual axis\nfilters). Initial object is not null.\n"},
  {"SetSettings", PyvtkTDxInteractorStyle_SetSettings, METH_VARARGS,
   "SetSettings(self, settings:vtkTDxInteractorStyleSettings) -> None\nC++: virtual void SetSettings(\n    vtkTDxInteractorStyleSettings *settings)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTDxInteractorStyle_Doc =
  "vtkTDxInteractorStyle - provide 3DConnexion device event-driven\ninterface to the rendering window\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTDxInteractorStyle is an abstract class defining an event-driven\n"
  "interface to support 3DConnexion device events send by\n"
  "vtkRenderWindowInteractor. vtkRenderWindowInteractor forwards events\n"
  "in a platform independent form to vtkInteractorStyle which can then\n"
  "delegate some processing to vtkTDxInteractorStyle.\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkRenderWindowInteractor\n"
  "vtkTDxInteractorStyleCamera\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTDxInteractorStyle_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTDxInteractorStyle", // tp_name
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
  PyvtkTDxInteractorStyle_Doc, // tp_doc
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

PyObject *PyvtkTDxInteractorStyle_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTDxInteractorStyle_Type, PyvtkTDxInteractorStyle_Methods,
    "vtkTDxInteractorStyle",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTDxInteractorStyle(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTDxInteractorStyle_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTDxInteractorStyle", o) != 0)
  {
    Py_DECREF(o);
  }

}

