// python wrapper for vtkOpenGLProjectedTetrahedraMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLProjectedTetrahedraMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLProjectedTetrahedraMapper_ClassNew(); }


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLProjectedTetrahedraMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLProjectedTetrahedraMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLProjectedTetrahedraMapper *tempr = vtkOpenGLProjectedTetrahedraMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLProjectedTetrahedraMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLProjectedTetrahedraMapper::NewInstance());

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
PyvtkOpenGLProjectedTetrahedraMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLProjectedTetrahedraMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLProjectedTetrahedraMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkOpenGLProjectedTetrahedraMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLProjectedTetrahedraMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_SetUseFloatingPointFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseFloatingPointFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseFloatingPointFrameBuffer(temp0);
    }
    else
    {
      op->vtkOpenGLProjectedTetrahedraMapper::SetUseFloatingPointFrameBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_GetUseFloatingPointFrameBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseFloatingPointFrameBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseFloatingPointFrameBuffer() :
      op->vtkOpenGLProjectedTetrahedraMapper::GetUseFloatingPointFrameBuffer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFloatingPointFrameBufferOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFloatingPointFrameBufferOn();
    }
    else
    {
      op->vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseFloatingPointFrameBufferOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseFloatingPointFrameBufferOff();
    }
    else
    {
      op->vtkOpenGLProjectedTetrahedraMapper::UseFloatingPointFrameBufferOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLProjectedTetrahedraMapper_IsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLProjectedTetrahedraMapper *op = static_cast<vtkOpenGLProjectedTetrahedraMapper *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = (ap.IsBound() ?
      op->IsSupported(temp0) :
      op->vtkOpenGLProjectedTetrahedraMapper::IsSupported(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLProjectedTetrahedraMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLProjectedTetrahedraMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLProjectedTetrahedraMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLProjectedTetrahedraMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkOpenGLProjectedTetrahedraMapper\nC++: static vtkOpenGLProjectedTetrahedraMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLProjectedTetrahedraMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLProjectedTetrahedraMapper\nC++: vtkOpenGLProjectedTetrahedraMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLProjectedTetrahedraMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLProjectedTetrahedraMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLProjectedTetrahedraMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this mapper.\nThe parameter window could be used to determine which graphic\nresources to release.\n"},
  {"Render", PyvtkOpenGLProjectedTetrahedraMapper_Render, METH_VARARGS,
   "Render(self, renderer:vtkRenderer, volume:vtkVolume) -> None\nC++: void Render(vtkRenderer *renderer, vtkVolume *volume)\n    override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS Render the\nvolume\n"},
  {"SetUseFloatingPointFrameBuffer", PyvtkOpenGLProjectedTetrahedraMapper_SetUseFloatingPointFrameBuffer, METH_VARARGS,
   "SetUseFloatingPointFrameBuffer(self, _arg:bool) -> None\nC++: virtual void SetUseFloatingPointFrameBuffer(bool _arg)\n\nSet/get whether to use floating-point rendering buffers rather\nthan the default.\n"},
  {"GetUseFloatingPointFrameBuffer", PyvtkOpenGLProjectedTetrahedraMapper_GetUseFloatingPointFrameBuffer, METH_VARARGS,
   "GetUseFloatingPointFrameBuffer(self) -> bool\nC++: virtual bool GetUseFloatingPointFrameBuffer()\n\n"},
  {"UseFloatingPointFrameBufferOn", PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOn, METH_VARARGS,
   "UseFloatingPointFrameBufferOn(self) -> None\nC++: virtual void UseFloatingPointFrameBufferOn()\n\n"},
  {"UseFloatingPointFrameBufferOff", PyvtkOpenGLProjectedTetrahedraMapper_UseFloatingPointFrameBufferOff, METH_VARARGS,
   "UseFloatingPointFrameBufferOff(self) -> None\nC++: virtual void UseFloatingPointFrameBufferOff()\n\n"},
  {"IsSupported", PyvtkOpenGLProjectedTetrahedraMapper_IsSupported, METH_VARARGS,
   "IsSupported(self, context:vtkRenderWindow) -> bool\nC++: bool IsSupported(vtkRenderWindow *context) override;\n\nReturn true if the rendering context provides the nececessary\nfunctionality to use this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLProjectedTetrahedraMapper_Doc =
  "vtkOpenGLProjectedTetrahedraMapper - OpenGL implementation of PT\n\n"
  "Superclass: vtkProjectedTetrahedraMapper\n\n"
  "@bug This mapper relies highly on the implementation of the OpenGL\n"
  "pipeline. A typical hardware driver has lots of options and some\n"
  "settings can cause this mapper to produce artifacts.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLProjectedTetrahedraMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLProjectedTetrahedraMapper", // tp_name
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
  PyvtkOpenGLProjectedTetrahedraMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLProjectedTetrahedraMapper_StaticNew()
{
  return vtkOpenGLProjectedTetrahedraMapper::New();
}

PyObject *PyvtkOpenGLProjectedTetrahedraMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLProjectedTetrahedraMapper_Type, PyvtkOpenGLProjectedTetrahedraMapper_Methods,
    "vtkOpenGLProjectedTetrahedraMapper",
 &PyvtkOpenGLProjectedTetrahedraMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProjectedTetrahedraMapper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLProjectedTetrahedraMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLProjectedTetrahedraMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLProjectedTetrahedraMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

