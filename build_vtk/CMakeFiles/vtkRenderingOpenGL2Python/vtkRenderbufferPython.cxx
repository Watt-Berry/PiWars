// python wrapper for vtkRenderbuffer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRenderbuffer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRenderbuffer(PyObject *dict); }
extern "C" { PyObject *PyvtkRenderbuffer_ClassNew(); }


static PyObject *
PyvtkRenderbuffer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRenderbuffer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRenderbuffer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRenderbuffer *tempr = vtkRenderbuffer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderbuffer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRenderbuffer::NewInstance());

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
PyvtkRenderbuffer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRenderbuffer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRenderbuffer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_IsSupported(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsSupported");

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    bool tempr = vtkRenderbuffer::IsSupported(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHandle() :
      op->vtkRenderbuffer::GetHandle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_SetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  vtkRenderWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindow"))
  {
    if (ap.IsBound())
    {
      op->SetContext(temp0);
    }
    else
    {
      op->vtkRenderbuffer::SetContext(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetContext(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContext");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderWindow *tempr = (ap.IsBound() ?
      op->GetContext() :
      op->vtkRenderbuffer::GetContext());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateColorAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateColorAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CreateColorAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateColorAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_CreateDepthAttachment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDepthAttachment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->CreateDepthAttachment(temp0, temp1) :
      op->vtkRenderbuffer::CreateDepthAttachment(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_Create_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->Create(temp0, temp1, temp2) :
      op->vtkRenderbuffer::Create(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderbuffer_Create_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Create");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  unsigned int temp2;
  unsigned int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->Create(temp0, temp1, temp2, temp3) :
      op->vtkRenderbuffer::Create(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRenderbuffer_Create(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRenderbuffer_Create_s1(self, args);
    case 4:
      return PyvtkRenderbuffer_Create_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Create");
  return nullptr;
}


static PyObject *
PyvtkRenderbuffer_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

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
      op->vtkRenderbuffer::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_Resize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Resize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  unsigned int temp0;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Resize(temp0, temp1);
    }
    else
    {
      op->vtkRenderbuffer::Resize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetWidth() :
      op->vtkRenderbuffer::GetWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetHeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetHeight() :
      op->vtkRenderbuffer::GetHeight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRenderbuffer_GetSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRenderbuffer *op = static_cast<vtkRenderbuffer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetSamples() :
      op->vtkRenderbuffer::GetSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRenderbuffer_Methods[] = {
  {"IsTypeOf", PyvtkRenderbuffer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRenderbuffer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRenderbuffer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRenderbuffer\nC++: static vtkRenderbuffer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRenderbuffer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRenderbuffer\nC++: vtkRenderbuffer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRenderbuffer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRenderbuffer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsSupported", PyvtkRenderbuffer_IsSupported, METH_VARARGS,
   "IsSupported(renWin:vtkRenderWindow) -> bool\nC++: static bool IsSupported(vtkRenderWindow *renWin)\n\nReturns if the context supports the required extensions.\nExtension will be loaded when the context is set.\n"},
  {"GetHandle", PyvtkRenderbuffer_GetHandle, METH_VARARGS,
   "GetHandle(self) -> int\nC++: virtual unsigned int GetHandle()\n\nGet the name of the buffer for use opengl code.\n"},
  {"SetContext", PyvtkRenderbuffer_SetContext, METH_VARARGS,
   "SetContext(self, win:vtkRenderWindow) -> None\nC++: void SetContext(vtkRenderWindow *win)\n\nSetting the context has the side affect of initializing OpenGL\nrequired extensions and allocates an OpenGL name(handle) that is\nreleased when the object is destroyed. NOTE: the reference count\nto the passed in object is not incremented. Context must be set\nprior to other use.\n"},
  {"GetContext", PyvtkRenderbuffer_GetContext, METH_VARARGS,
   "GetContext(self) -> vtkRenderWindow\nC++: vtkRenderWindow *GetContext()\n\n"},
  {"CreateColorAttachment", PyvtkRenderbuffer_CreateColorAttachment, METH_VARARGS,
   "CreateColorAttachment(self, width:int, height:int) -> int\nC++: int CreateColorAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an RGBAF renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {"CreateDepthAttachment", PyvtkRenderbuffer_CreateDepthAttachment, METH_VARARGS,
   "CreateDepthAttachment(self, width:int, height:int) -> int\nC++: int CreateDepthAttachment(unsigned int width,\n    unsigned int height)\n\nSets up an DEPTH renderbufffer for use as a color attachment. Use\nmode to control READ or DRAW operation.\n"},
  {"Create", PyvtkRenderbuffer_Create, METH_VARARGS,
   "Create(self, format:int, width:int, height:int) -> int\nC++: int Create(unsigned int format, unsigned int width,\n    unsigned int height)\nCreate(self, format:int, width:int, height:int, samples:int)\n    -> int\nC++: int Create(unsigned int format, unsigned int width,\n    unsigned int height, unsigned int samples)\n\nSets up an renderbufffer. Use mode to control READ or DRAW\noperation and format to control the internal format. (see OpenGL\ndoc for more info)\n"},
  {"ReleaseGraphicsResources", PyvtkRenderbuffer_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win)\n\n"},
  {"Resize", PyvtkRenderbuffer_Resize, METH_VARARGS,
   "Resize(self, width:int, height:int) -> None\nC++: void Resize(unsigned int width, unsigned int height)\n\n"},
  {"GetWidth", PyvtkRenderbuffer_GetWidth, METH_VARARGS,
   "GetWidth(self) -> int\nC++: virtual unsigned int GetWidth()\n\nGet the buffer dimensions. These are the properties of the OpenGL\nrenderbuffer this instance represents.\n"},
  {"GetHeight", PyvtkRenderbuffer_GetHeight, METH_VARARGS,
   "GetHeight(self) -> int\nC++: virtual unsigned int GetHeight()\n\n"},
  {"GetSamples", PyvtkRenderbuffer_GetSamples, METH_VARARGS,
   "GetSamples(self) -> int\nC++: virtual unsigned int GetSamples()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRenderbuffer_Doc =
  "vtkRenderbuffer - Storage for FBO's\n\n"
  "Superclass: vtkObject\n\n"
  "Lightweight API to OpenGL Framebuffer Object EXT renderbuffers.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRenderbuffer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkRenderbuffer", // tp_name
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
  PyvtkRenderbuffer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRenderbuffer_StaticNew()
{
  return vtkRenderbuffer::New();
}

PyObject *PyvtkRenderbuffer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRenderbuffer_Type, PyvtkRenderbuffer_Methods,
    "vtkRenderbuffer",
 &PyvtkRenderbuffer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRenderbuffer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRenderbuffer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRenderbuffer", o) != 0)
  {
    Py_DECREF(o);
  }

}

