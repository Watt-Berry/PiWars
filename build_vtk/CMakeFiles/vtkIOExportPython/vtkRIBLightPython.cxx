// python wrapper for vtkRIBLight
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRIBLight.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRIBLight(PyObject *dict); }
extern "C" { PyObject *PyvtkRIBLight_ClassNew(); }


static PyObject *
PyvtkRIBLight_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRIBLight::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBLight::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRIBLight *tempr = vtkRIBLight::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRIBLight *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBLight::NewInstance());

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
PyvtkRIBLight_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRIBLight::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRIBLight::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_ShadowsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowsOn();
    }
    else
    {
      op->vtkRIBLight::ShadowsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_ShadowsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShadowsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShadowsOff();
    }
    else
    {
      op->vtkRIBLight::ShadowsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_SetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShadows(temp0);
    }
    else
    {
      op->vtkRIBLight::SetShadows(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_GetShadows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShadows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShadows() :
      op->vtkRIBLight::GetShadows());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBLight_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBLight *op = static_cast<vtkRIBLight *>(vp);

  vtkRenderer *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkRIBLight::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRIBLight_Methods[] = {
  {"IsTypeOf", PyvtkRIBLight_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRIBLight_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRIBLight_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRIBLight\nC++: static vtkRIBLight *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRIBLight_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRIBLight\nC++: vtkRIBLight *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRIBLight_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRIBLight_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ShadowsOn", PyvtkRIBLight_ShadowsOn, METH_VARARGS,
   "ShadowsOn(self) -> None\nC++: virtual void ShadowsOn()\n\n"},
  {"ShadowsOff", PyvtkRIBLight_ShadowsOff, METH_VARARGS,
   "ShadowsOff(self) -> None\nC++: virtual void ShadowsOff()\n\n"},
  {"SetShadows", PyvtkRIBLight_SetShadows, METH_VARARGS,
   "SetShadows(self, _arg:int) -> None\nC++: virtual void SetShadows(vtkTypeBool _arg)\n\n"},
  {"GetShadows", PyvtkRIBLight_GetShadows, METH_VARARGS,
   "GetShadows(self) -> int\nC++: virtual vtkTypeBool GetShadows()\n\n"},
  {"Render", PyvtkRIBLight_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, index:int) -> None\nC++: void Render(vtkRenderer *ren, int index) override;\n\nAbstract interface to renderer. Each concrete subclass of\nvtkLight will load its data into the graphics system in response\nto this method invocation. The actual loading is performed by a\nvtkLightDevice subclass, which will get created automatically.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRIBLight_Doc =
  "vtkRIBLight - RIP Light\n\n"
  "Superclass: vtkLight\n\n"
  "vtkRIBLight is a subclass of vtkLight that allows the user to specify\n"
  "light source shaders and shadow casting lights for use with\n"
  "RenderMan.\n\n"
  "@sa\n"
  "vtkRIBExporter vtkRIBProperty\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRIBLight_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkRIBLight", // tp_name
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
  PyvtkRIBLight_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRIBLight_StaticNew()
{
  return vtkRIBLight::New();
}

PyObject *PyvtkRIBLight_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRIBLight_Type, PyvtkRIBLight_Methods,
    "vtkRIBLight",
 &PyvtkRIBLight_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkLight");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRIBLight(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRIBLight_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRIBLight", o) != 0)
  {
    Py_DECREF(o);
  }

}

