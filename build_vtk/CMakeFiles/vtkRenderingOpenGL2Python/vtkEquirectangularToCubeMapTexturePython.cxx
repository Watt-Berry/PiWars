// python wrapper for vtkEquirectangularToCubeMapTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEquirectangularToCubeMapTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEquirectangularToCubeMapTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkEquirectangularToCubeMapTexture_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLTexture_ClassNew
extern "C" { PyObject *PyvtkOpenGLTexture_ClassNew(); }
#define DECLARED_PyvtkOpenGLTexture_ClassNew
#endif

static PyObject *
PyvtkEquirectangularToCubeMapTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEquirectangularToCubeMapTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEquirectangularToCubeMapTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEquirectangularToCubeMapTexture *tempr = vtkEquirectangularToCubeMapTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEquirectangularToCubeMapTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEquirectangularToCubeMapTexture::NewInstance());

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
PyvtkEquirectangularToCubeMapTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEquirectangularToCubeMapTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEquirectangularToCubeMapTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_SetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  vtkOpenGLTexture *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLTexture"))
  {
    if (ap.IsBound())
    {
      op->SetInputTexture(temp0);
    }
    else
    {
      op->vtkEquirectangularToCubeMapTexture::SetInputTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_GetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLTexture *tempr = (ap.IsBound() ?
      op->GetInputTexture() :
      op->vtkEquirectangularToCubeMapTexture::GetInputTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

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
      op->vtkEquirectangularToCubeMapTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

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
      op->vtkEquirectangularToCubeMapTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_GetCubeMapSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCubeMapSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetCubeMapSize() :
      op->vtkEquirectangularToCubeMapTexture::GetCubeMapSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_SetCubeMapSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCubeMapSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCubeMapSize(temp0);
    }
    else
    {
      op->vtkEquirectangularToCubeMapTexture::SetCubeMapSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkEquirectangularToCubeMapTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEquirectangularToCubeMapTexture *op = static_cast<vtkEquirectangularToCubeMapTexture *>(vp);

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
      op->vtkEquirectangularToCubeMapTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkEquirectangularToCubeMapTexture_Methods[] = {
  {"IsTypeOf", PyvtkEquirectangularToCubeMapTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEquirectangularToCubeMapTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEquirectangularToCubeMapTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkEquirectangularToCubeMapTexture\nC++: static vtkEquirectangularToCubeMapTexture *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEquirectangularToCubeMapTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEquirectangularToCubeMapTexture\nC++: vtkEquirectangularToCubeMapTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEquirectangularToCubeMapTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEquirectangularToCubeMapTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputTexture", PyvtkEquirectangularToCubeMapTexture_SetInputTexture, METH_VARARGS,
   "SetInputTexture(self, texture:vtkOpenGLTexture) -> None\nC++: void SetInputTexture(vtkOpenGLTexture *texture)\n\nGet/Set the input equirectangular 2D texture.\n"},
  {"GetInputTexture", PyvtkEquirectangularToCubeMapTexture_GetInputTexture, METH_VARARGS,
   "GetInputTexture(self) -> vtkOpenGLTexture\nC++: virtual vtkOpenGLTexture *GetInputTexture()\n\n"},
  {"Load", PyvtkEquirectangularToCubeMapTexture_Load, METH_VARARGS,
   "Load(self, __a:vtkRenderer) -> None\nC++: void Load(vtkRenderer *) override;\n\nImplement base class method.\n"},
  {"Render", PyvtkEquirectangularToCubeMapTexture_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer) -> None\nC++: void Render(vtkRenderer *ren) override;\n\nImplement base class method.\n"},
  {"GetCubeMapSize", PyvtkEquirectangularToCubeMapTexture_GetCubeMapSize, METH_VARARGS,
   "GetCubeMapSize(self) -> int\nC++: virtual unsigned int GetCubeMapSize()\n\nSet/Get size of each face of the output cubemap texture. Default\nis 512.\n"},
  {"SetCubeMapSize", PyvtkEquirectangularToCubeMapTexture_SetCubeMapSize, METH_VARARGS,
   "SetCubeMapSize(self, _arg:int) -> None\nC++: virtual void SetCubeMapSize(unsigned int _arg)\n\n"},
  {"ReleaseGraphicsResources", PyvtkEquirectangularToCubeMapTexture_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEquirectangularToCubeMapTexture_Doc =
  "vtkEquirectangularToCubeMapTexture - compute a cubemap texture based\non a standard equirectangular projection\n\n"
  "Superclass: vtkOpenGLTexture\n\n"
  "This special texture converts a 2D projected texture in\n"
  "equirectangular format to a 3D cubemap using the GPU. The generated\n"
  "texture can be used as input for a skybox or an environment map for\n"
  "PBR shading.\n\n"
  "@sa vtkSkybox vtkRenderer::SetEnvironmentCubeMap\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEquirectangularToCubeMapTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkEquirectangularToCubeMapTexture", // tp_name
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
  PyvtkEquirectangularToCubeMapTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkEquirectangularToCubeMapTexture_StaticNew()
{
  return vtkEquirectangularToCubeMapTexture::New();
}

PyObject *PyvtkEquirectangularToCubeMapTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEquirectangularToCubeMapTexture_Type, PyvtkEquirectangularToCubeMapTexture_Methods,
    "vtkEquirectangularToCubeMapTexture",
 &PyvtkEquirectangularToCubeMapTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLTexture_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEquirectangularToCubeMapTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEquirectangularToCubeMapTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEquirectangularToCubeMapTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

