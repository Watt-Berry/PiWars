// python wrapper for vtkPBRLUTTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPBRLUTTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPBRLUTTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkPBRLUTTexture_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLTexture_ClassNew
extern "C" { PyObject *PyvtkOpenGLTexture_ClassNew(); }
#define DECLARED_PyvtkOpenGLTexture_ClassNew
#endif

static PyObject *
PyvtkPBRLUTTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPBRLUTTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPBRLUTTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPBRLUTTexture *tempr = vtkPBRLUTTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRLUTTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPBRLUTTexture::NewInstance());

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
PyvtkPBRLUTTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPBRLUTTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPBRLUTTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Load(temp0);
    }
    else
    {
      op->vtkPBRLUTTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0);
    }
    else
    {
      op->vtkPBRLUTTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_GetLUTSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUTSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLUTSize() :
      op->vtkPBRLUTTexture::GetLUTSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_SetLUTSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLUTSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLUTSize(temp0);
    }
    else
    {
      op->vtkPBRLUTTexture::SetLUTSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_GetLUTSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLUTSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetLUTSamples() :
      op->vtkPBRLUTTexture::GetLUTSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRLUTTexture_SetLUTSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLUTSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRLUTTexture *op = static_cast<vtkPBRLUTTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLUTSamples(temp0);
    }
    else
    {
      op->vtkPBRLUTTexture::SetLUTSamples(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPBRLUTTexture_Methods[] = {
  {"IsTypeOf", PyvtkPBRLUTTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPBRLUTTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPBRLUTTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPBRLUTTexture\nC++: static vtkPBRLUTTexture *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPBRLUTTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPBRLUTTexture\nC++: vtkPBRLUTTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPBRLUTTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPBRLUTTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Load", PyvtkPBRLUTTexture_Load, METH_VARARGS,
   "Load(self, __a:vtkRenderer) -> None\nC++: void Load(vtkRenderer *) override;\n\nImplement base class method.\n"},
  {"Render", PyvtkPBRLUTTexture_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer) -> None\nC++: void Render(vtkRenderer *ren) override;\n\nImplement base class method.\n"},
  {"GetLUTSize", PyvtkPBRLUTTexture_GetLUTSize, METH_VARARGS,
   "GetLUTSize(self) -> int\nC++: virtual unsigned int GetLUTSize()\n\nSet/Get size of texture. Default is 1024.\n"},
  {"SetLUTSize", PyvtkPBRLUTTexture_SetLUTSize, METH_VARARGS,
   "SetLUTSize(self, _arg:int) -> None\nC++: virtual void SetLUTSize(unsigned int _arg)\n\n"},
  {"GetLUTSamples", PyvtkPBRLUTTexture_GetLUTSamples, METH_VARARGS,
   "GetLUTSamples(self) -> int\nC++: virtual unsigned int GetLUTSamples()\n\nSet/Get the number of samples used during Monte-Carlo\nintegration. Default is 512.\n"},
  {"SetLUTSamples", PyvtkPBRLUTTexture_SetLUTSamples, METH_VARARGS,
   "SetLUTSamples(self, _arg:int) -> None\nC++: virtual void SetLUTSamples(unsigned int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPBRLUTTexture_Doc =
  "vtkPBRLUTTexture - precompute BRDF look-up table texture used in\nphysically based rendering\n\n"
  "Superclass: vtkOpenGLTexture\n\n"
  "This texture is a 2D texture which precompute Fresnel response scale\n"
  "(red) and bias (green) based on roughness (x) and angle between light\n"
  "and normal (y).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPBRLUTTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkPBRLUTTexture", // tp_name
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
  PyvtkPBRLUTTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPBRLUTTexture_StaticNew()
{
  return vtkPBRLUTTexture::New();
}

PyObject *PyvtkPBRLUTTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPBRLUTTexture_Type, PyvtkPBRLUTTexture_Methods,
    "vtkPBRLUTTexture",
 &PyvtkPBRLUTTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLTexture_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPBRLUTTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPBRLUTTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPBRLUTTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

