// python wrapper for vtkTransformCoordinateSystems
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformCoordinateSystems.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformCoordinateSystems(PyObject *dict); }
extern "C" { PyObject *PyvtkTransformCoordinateSystems_ClassNew(); }


static PyObject *
PyvtkTransformCoordinateSystems_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformCoordinateSystems::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformCoordinateSystems::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformCoordinateSystems *tempr = vtkTransformCoordinateSystems::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformCoordinateSystems *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformCoordinateSystems::NewInstance());

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
PyvtkTransformCoordinateSystems_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformCoordinateSystems::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformCoordinateSystems::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystem(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetInputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputCoordinateSystem() :
      op->vtkTransformCoordinateSystems::GetInputCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToViewport();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputCoordinateSystemToWorld();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetInputCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystem(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystem(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputCoordinateSystem");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputCoordinateSystem() :
      op->vtkTransformCoordinateSystems::GetOutputCoordinateSystem());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToDisplay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToDisplay();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToDisplay();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToViewport();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToViewport();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputCoordinateSystemToWorld");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputCoordinateSystemToWorld();
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetOutputCoordinateSystemToWorld();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkTransformCoordinateSystems::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_SetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->SetViewport(temp0);
    }
    else
    {
      op->vtkTransformCoordinateSystems::SetViewport(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformCoordinateSystems_GetViewport(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewport");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformCoordinateSystems *op = static_cast<vtkTransformCoordinateSystems *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkViewport *tempr = (ap.IsBound() ?
      op->GetViewport() :
      op->vtkTransformCoordinateSystems::GetViewport());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformCoordinateSystems_Methods[] = {
  {"IsTypeOf", PyvtkTransformCoordinateSystems_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformCoordinateSystems_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformCoordinateSystems_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformCoordinateSystems\nC++: static vtkTransformCoordinateSystems *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformCoordinateSystems_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformCoordinateSystems\nC++: vtkTransformCoordinateSystems *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformCoordinateSystems_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformCoordinateSystems_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputCoordinateSystem", PyvtkTransformCoordinateSystems_SetInputCoordinateSystem, METH_VARARGS,
   "SetInputCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetInputCoordinateSystem(int _arg)\n\nSet/get the coordinate system in which the input is specified.\nThe current options are World, Viewport, and Display. By default\nthe input coordinate system is World.\n"},
  {"GetInputCoordinateSystem", PyvtkTransformCoordinateSystems_GetInputCoordinateSystem, METH_VARARGS,
   "GetInputCoordinateSystem(self) -> int\nC++: virtual int GetInputCoordinateSystem()\n\n"},
  {"SetInputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToDisplay, METH_VARARGS,
   "SetInputCoordinateSystemToDisplay(self) -> None\nC++: void SetInputCoordinateSystemToDisplay()\n\n"},
  {"SetInputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToViewport, METH_VARARGS,
   "SetInputCoordinateSystemToViewport(self) -> None\nC++: void SetInputCoordinateSystemToViewport()\n\n"},
  {"SetInputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetInputCoordinateSystemToWorld, METH_VARARGS,
   "SetInputCoordinateSystemToWorld(self) -> None\nC++: void SetInputCoordinateSystemToWorld()\n\n"},
  {"SetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystem, METH_VARARGS,
   "SetOutputCoordinateSystem(self, _arg:int) -> None\nC++: virtual void SetOutputCoordinateSystem(int _arg)\n\nSet/get the coordinate system to which to transform the output.\nThe current options are World, Viewport, and Display. By default\nthe output coordinate system is Display.\n"},
  {"GetOutputCoordinateSystem", PyvtkTransformCoordinateSystems_GetOutputCoordinateSystem, METH_VARARGS,
   "GetOutputCoordinateSystem(self) -> int\nC++: virtual int GetOutputCoordinateSystem()\n\n"},
  {"SetOutputCoordinateSystemToDisplay", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToDisplay, METH_VARARGS,
   "SetOutputCoordinateSystemToDisplay(self) -> None\nC++: void SetOutputCoordinateSystemToDisplay()\n\n"},
  {"SetOutputCoordinateSystemToViewport", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToViewport, METH_VARARGS,
   "SetOutputCoordinateSystemToViewport(self) -> None\nC++: void SetOutputCoordinateSystemToViewport()\n\n"},
  {"SetOutputCoordinateSystemToWorld", PyvtkTransformCoordinateSystems_SetOutputCoordinateSystemToWorld, METH_VARARGS,
   "SetOutputCoordinateSystemToWorld(self) -> None\nC++: void SetOutputCoordinateSystemToWorld()\n\n"},
  {"GetMTime", PyvtkTransformCoordinateSystems_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime also considering the instance of vtkCoordinate.\n"},
  {"SetViewport", PyvtkTransformCoordinateSystems_SetViewport, METH_VARARGS,
   "SetViewport(self, viewport:vtkViewport) -> None\nC++: void SetViewport(vtkViewport *viewport)\n\nIn order for a successful coordinate transformation to occur, an\ninstance of vtkViewport (e.g., a VTK renderer) must be specified.\nNOTE: this is a raw pointer, not a weak pointer nor a reference\ncounted object, to avoid reference cycle loop between rendering\nclasses and filter classes.\n"},
  {"GetViewport", PyvtkTransformCoordinateSystems_GetViewport, METH_VARARGS,
   "GetViewport(self) -> vtkViewport\nC++: virtual vtkViewport *GetViewport()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransformCoordinateSystems_Doc =
  "vtkTransformCoordinateSystems - transform points into different\ncoordinate systems\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "This filter transforms points from one coordinate system to another.\n"
  "The user must specify the coordinate systems in which the input and\n"
  "output are specified. The user must also specify the VTK viewport\n"
  "(i.e., renderer) in which the transformation occurs.\n\n"
  "@sa\n"
  "vtkCoordinate vtkTransformFilter vtkTransformPolyData\n"
  "vtkPolyDataMapper2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformCoordinateSystems_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTransformCoordinateSystems", // tp_name
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
  PyvtkTransformCoordinateSystems_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformCoordinateSystems_StaticNew()
{
  return vtkTransformCoordinateSystems::New();
}

PyObject *PyvtkTransformCoordinateSystems_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformCoordinateSystems_Type, PyvtkTransformCoordinateSystems_Methods,
    "vtkTransformCoordinateSystems",
 &PyvtkTransformCoordinateSystems_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformCoordinateSystems(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformCoordinateSystems_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformCoordinateSystems", o) != 0)
  {
    Py_DECREF(o);
  }

}

