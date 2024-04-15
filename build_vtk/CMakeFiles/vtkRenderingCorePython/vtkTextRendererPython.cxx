// python wrapper for vtkTextRenderer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkTextRenderer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextRenderer(PyObject *dict); }
static PyMethodDef PyvtkTextRendererCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkTextRendererCleanup_vtkTextRendererCleanup(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkTextRendererCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextRendererCleanup *op = new vtkTextRendererCleanup();

    result = PyVTKSpecialObject_New("vtkTextRendererCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkTextRendererCleanup_vtkTextRendererCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkTextRendererCleanup_Doc =

  "vtkTextRendererCleanup() -> vtkTextRendererCleanup\nC++: vtkTextRendererCleanup()\n""\n"
  "vtkTextRendererCleanup - no description provided.\n\n"
;

static PyObject *
PyvtkTextRendererCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkTextRendererCleanup_vtkTextRendererCleanup(nullptr, args);
}

static void PyvtkTextRendererCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkTextRendererCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkTextRendererCleanup_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextRendererCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextRendererCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkTextRendererCleanup_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkTextRendererCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkTextRendererCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkTextRendererCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkTextRendererCleanup_TypeNew
extern "C" { PyObject *PyvtkTextRendererCleanup_TypeNew(); }
#define DECLARED_PyvtkTextRendererCleanup_TypeNew
#endif

PyObject *PyvtkTextRendererCleanup_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkTextRendererCleanup_Type,
    PyvtkTextRendererCleanup_Methods,
    PyvtkTextRendererCleanup_vtkTextRendererCleanup_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkTextRenderer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextRenderer_Backend_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextRenderer.Backend", // tp_name
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
PyObject *PyvtkTextRenderer_Backend_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTextRenderer_Backend_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTextRenderer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextRenderer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextRenderer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextRenderer *tempr = vtkTextRenderer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextRenderer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextRenderer::NewInstance());

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
PyvtkTextRenderer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextRenderer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextRenderer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetInstance");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkTextRenderer *tempr = vtkTextRenderer::GetInstance();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_SetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultBackend(temp0);
    }
    else
    {
      op->vtkTextRenderer::SetDefaultBackend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetDefaultBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultBackend() :
      op->vtkTextRenderer::GetDefaultBackend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_DetectBackend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DetectBackend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->DetectBackend(temp0) :
      op->vtkTextRenderer::DetectBackend(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_FreeTypeIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FreeTypeIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->FreeTypeIsSupported() :
      op->vtkTextRenderer::FreeTypeIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_MathTextIsSupported(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MathTextIsSupported");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->MathTextIsSupported() :
      op->vtkTextRenderer::MathTextIsSupported());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetBoundingBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundingBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  const size_t size2 = 4;
  int temp2[4];
  int save2[4];
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = (ap.IsBound() ?
      op->GetBoundingBox(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::GetBoundingBox(temp0, temp1, temp2, temp3, temp4));

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_RenderString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  vtkImageData *temp2 = nullptr;
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = (ap.IsBound() ?
      op->RenderString(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::RenderString(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_GetConstrainedFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConstrainedFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkStdString temp0;
  vtkTextProperty *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  int temp5 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5, 6) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkTextProperty") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    int tempr = (ap.IsBound() ?
      op->GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkTextRenderer::GetConstrainedFontSize(temp0, temp1, temp2, temp3, temp4, temp5));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_StringToPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StringToPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  vtkTextProperty *temp0 = nullptr;
  vtkStdString temp1;
  vtkPath *temp2 = nullptr;
  int temp3;
  int temp4 = vtkTextRenderer::Default;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPath") &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    bool tempr = (ap.IsBound() ?
      op->StringToPath(temp0, temp1, temp2, temp3, temp4) :
      op->vtkTextRenderer::StringToPath(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextRenderer_SetScaleToPowerOfTwo(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleToPowerOfTwo");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextRenderer *op = static_cast<vtkTextRenderer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleToPowerOfTwo(temp0);
    }
    else
    {
      op->vtkTextRenderer::SetScaleToPowerOfTwo(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextRenderer_Methods[] = {
  {"IsTypeOf", PyvtkTextRenderer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextRenderer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextRenderer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextRenderer\nC++: static vtkTextRenderer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextRenderer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextRenderer\nC++: vtkTextRenderer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextRenderer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextRenderer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetInstance", PyvtkTextRenderer_GetInstance, METH_VARARGS,
   "GetInstance() -> vtkTextRenderer\nC++: static vtkTextRenderer *GetInstance()\n\nReturn the singleton instance with no reference counting. May\nreturn NULL if the object factory cannot find an override.\n"},
  {"SetDefaultBackend", PyvtkTextRenderer_SetDefaultBackend, METH_VARARGS,
   "SetDefaultBackend(self, _arg:int) -> None\nC++: virtual void SetDefaultBackend(int _arg)\n\nThe backend to use when none is specified. Default: Detect\n"},
  {"GetDefaultBackend", PyvtkTextRenderer_GetDefaultBackend, METH_VARARGS,
   "GetDefaultBackend(self) -> int\nC++: virtual int GetDefaultBackend()\n\n"},
  {"DetectBackend", PyvtkTextRenderer_DetectBackend, METH_VARARGS,
   "DetectBackend(self, str:str) -> int\nC++: virtual int DetectBackend(const vtkStdString &str)\n\nDetermine the appropriate back end needed to render the given\nstring.\n"},
  {"FreeTypeIsSupported", PyvtkTextRenderer_FreeTypeIsSupported, METH_VARARGS,
   "FreeTypeIsSupported(self) -> bool\nC++: virtual bool FreeTypeIsSupported()\n\nTest for availability of various backends\n"},
  {"MathTextIsSupported", PyvtkTextRenderer_MathTextIsSupported, METH_VARARGS,
   "MathTextIsSupported(self) -> bool\nC++: virtual bool MathTextIsSupported()\n\n"},
  {"GetBoundingBox", PyvtkTextRenderer_GetBoundingBox, METH_VARARGS,
   "GetBoundingBox(self, tprop:vtkTextProperty, str:str, bbox:[int,\n    int, int, int], dpi:int, backend:int=...) -> bool\nC++: bool GetBoundingBox(vtkTextProperty *tprop,\n    const vtkStdString &str, int bbox[4], int dpi,\n    int backend=Default)\n\nGiven a text property and a string, get the bounding box {xmin,\nxmax, ymin, ymax} of the rendered string in pixels. The origin of\nthe bounding box is the anchor point described by the horizontal\nand vertical justification text property variables. Return true\non success, false otherwise.\n"},
  {"RenderString", PyvtkTextRenderer_RenderString, METH_VARARGS,
   "RenderString(self, tprop:vtkTextProperty, str:str,\n    data:vtkImageData, textDims:[int, int], dpi:int,\n    backend:int=...) -> bool\nC++: bool RenderString(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkImageData *data, int textDims[2],\n    int dpi, int backend=Default)\n\nGiven a text property and a string, this function initializes the\nvtkImageData *data and renders it in a vtkImageData. Return true\non success, false otherwise. If using the overload that specifies\n\"textDims\", the array will be overwritten with the pixel width\nand height defining a tight bounding box around the text in the\nimage, starting from the upper-right corner. This is used when\nrendering for a texture on graphics hardware that requires\ntexture image dimensions to be a power of two; textDims can be\nused to determine the texture coordinates needed to cleanly fit\nthe text on the target. The origin of the image's extents is\naligned with the anchor point described by the text property's\nvertical and horizontal justification options.\n"},
  {"GetConstrainedFontSize", PyvtkTextRenderer_GetConstrainedFontSize, METH_VARARGS,
   "GetConstrainedFontSize(self, str:str, tprop:vtkTextProperty,\n    targetWidth:int, targetHeight:int, dpi:int, backend:int=...)\n    -> int\nC++: int GetConstrainedFontSize(const vtkStdString &str,\n    vtkTextProperty *tprop, int targetWidth, int targetHeight,\n    int dpi, int backend=Default)\n\nThis function returns the font size (in points) and sets the size\nin @a tprop that is required to fit the string in the target\nrectangle. The computed font size will be set in tprop as well.\nIf an error occurs, this function will return -1.\n"},
  {"StringToPath", PyvtkTextRenderer_StringToPath, METH_VARARGS,
   "StringToPath(self, tprop:vtkTextProperty, str:str, path:vtkPath,\n    dpi:int, backend:int=...) -> bool\nC++: bool StringToPath(vtkTextProperty *tprop,\n    const vtkStdString &str, vtkPath *path, int dpi,\n    int backend=Default)\n\nGiven a text property and a string, this function populates the\nvtkPath path with the outline of the rendered string. The origin\nof the path coordinates is aligned with the anchor point\ndescribed by the text property's horizontal and vertical\njustification options. Return true on success, false otherwise.\n"},
  {"SetScaleToPowerOfTwo", PyvtkTextRenderer_SetScaleToPowerOfTwo, METH_VARARGS,
   "SetScaleToPowerOfTwo(self, scale:bool) -> None\nC++: void SetScaleToPowerOfTwo(bool scale)\n\nSet to true if the graphics implementation requires texture image\ndimensions to be a power of two. Default is true, but this member\nwill be set appropriately by\nvtkOpenGLRenderWindow::OpenGLInitContext when GL is inited.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextRenderer_Doc =
  "vtkTextRenderer - Interface for generating images and path data from\nstring data, using multiple backends.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTextRenderer produces images, bounding boxes, and vtkPath objects\n"
  "that represent text. The advantage of using this class is to easily\n"
  "integrate mathematical expressions into renderings by automatically\n"
  "switching between FreeType and MathText backends. If the input string\n"
  "contains at least two \"$\" symbols separated by text, the MathText\n"
  "backend will be used. Alternatively, the presence of unescaped \"|\"\n"
  "symbols defines multicolumn lines, which are processed with the\n"
  "MathText backend.\n\n"
  "If the string does not meet these criteria, or if no MathText\n"
  "implementation is available, the faster FreeType rendering facilities\n"
  "are used. Literal $ symbols can be used by escaping them with\n"
  "backslashes, \"\\$\" (or \"\\\\$\" if the string is set programmatically).\n\n"
  "For example, \"Acceleration ($\\\\frac{m}{s^2}$)\" will use MathText, but \"\\\\$500,\n"
  "\\\\$100\" will use FreeType.\n\n"
  "By default, the backend is set to Detect, which determines the\n"
  "backend based on the contents of the string. This can be changed by\n"
  "setting the DefaultBackend ivar.\n\n"
  "Note that this class is abstract -- link to the vtkRenderingFreetype\n"
  "module to get the default implementation.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextRenderer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTextRenderer", // tp_name
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
  PyvtkTextRenderer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextRenderer_StaticNew()
{
  return vtkTextRenderer::New();
}

PyObject *PyvtkTextRenderer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextRenderer_Type, PyvtkTextRenderer_Methods,
    "vtkTextRenderer",
 &PyvtkTextRenderer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTextRenderer_Backend_Type);
  PyVTKEnum_Add(&PyvtkTextRenderer_Backend_Type, "vtkTextRenderer.Backend");

  o = (PyObject *)&PyvtkTextRenderer_Backend_Type;
  if (PyDict_SetItemString(d, "Backend", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkTextRenderer::Backend cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "Default", vtkTextRenderer::Default },
        { "Detect", vtkTextRenderer::Detect },
        { "FreeType", vtkTextRenderer::FreeType },
        { "MathText", vtkTextRenderer::MathText },
        { "UserBackend", vtkTextRenderer::UserBackend },
      };

    o = PyvtkTextRenderer_Backend_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextRenderer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextRendererCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkTextRendererCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkTextRenderer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextRenderer", o) != 0)
  {
    Py_DECREF(o);
  }

}

