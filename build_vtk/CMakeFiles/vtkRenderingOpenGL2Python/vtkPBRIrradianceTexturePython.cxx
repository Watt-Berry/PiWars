// python wrapper for vtkPBRIrradianceTexture
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPBRIrradianceTexture.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPBRIrradianceTexture(PyObject *dict); }
extern "C" { PyObject *PyvtkPBRIrradianceTexture_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLTexture_ClassNew
extern "C" { PyObject *PyvtkOpenGLTexture_ClassNew(); }
#define DECLARED_PyvtkOpenGLTexture_ClassNew
#endif

static PyObject *
PyvtkPBRIrradianceTexture_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPBRIrradianceTexture::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPBRIrradianceTexture::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPBRIrradianceTexture *tempr = vtkPBRIrradianceTexture::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPBRIrradianceTexture *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPBRIrradianceTexture::NewInstance());

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
PyvtkPBRIrradianceTexture_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPBRIrradianceTexture::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPBRIrradianceTexture::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_SetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

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
      op->vtkPBRIrradianceTexture::SetInputTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_GetInputTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLTexture *tempr = (ap.IsBound() ?
      op->GetInputTexture() :
      op->vtkPBRIrradianceTexture::GetInputTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_Load(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Load");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

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
      op->vtkPBRIrradianceTexture::Load(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

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
      op->vtkPBRIrradianceTexture::Render(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_GetIrradianceSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIrradianceSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetIrradianceSize() :
      op->vtkPBRIrradianceTexture::GetIrradianceSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_SetIrradianceSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIrradianceSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIrradianceSize(temp0);
    }
    else
    {
      op->vtkPBRIrradianceTexture::SetIrradianceSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_GetIrradianceStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIrradianceStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetIrradianceStep() :
      op->vtkPBRIrradianceTexture::GetIrradianceStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_SetIrradianceStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIrradianceStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIrradianceStep(temp0);
    }
    else
    {
      op->vtkPBRIrradianceTexture::SetIrradianceStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_GetConvertToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertToLinear() :
      op->vtkPBRIrradianceTexture::GetConvertToLinear());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_SetConvertToLinear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertToLinear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertToLinear(temp0);
    }
    else
    {
      op->vtkPBRIrradianceTexture::SetConvertToLinear(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_ConvertToLinearOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToLinearOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToLinearOn();
    }
    else
    {
      op->vtkPBRIrradianceTexture::ConvertToLinearOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_ConvertToLinearOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertToLinearOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertToLinearOff();
    }
    else
    {
      op->vtkPBRIrradianceTexture::ConvertToLinearOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPBRIrradianceTexture_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPBRIrradianceTexture *op = static_cast<vtkPBRIrradianceTexture *>(vp);

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
      op->vtkPBRIrradianceTexture::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPBRIrradianceTexture_Methods[] = {
  {"IsTypeOf", PyvtkPBRIrradianceTexture_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPBRIrradianceTexture_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPBRIrradianceTexture_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPBRIrradianceTexture\nC++: static vtkPBRIrradianceTexture *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPBRIrradianceTexture_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPBRIrradianceTexture\nC++: vtkPBRIrradianceTexture *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPBRIrradianceTexture_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPBRIrradianceTexture_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputTexture", PyvtkPBRIrradianceTexture_SetInputTexture, METH_VARARGS,
   "SetInputTexture(self, texture:vtkOpenGLTexture) -> None\nC++: void SetInputTexture(vtkOpenGLTexture *texture)\n\nGet/Set the input texture.\n"},
  {"GetInputTexture", PyvtkPBRIrradianceTexture_GetInputTexture, METH_VARARGS,
   "GetInputTexture(self) -> vtkOpenGLTexture\nC++: virtual vtkOpenGLTexture *GetInputTexture()\n\n"},
  {"Load", PyvtkPBRIrradianceTexture_Load, METH_VARARGS,
   "Load(self, __a:vtkRenderer) -> None\nC++: void Load(vtkRenderer *) override;\n\nImplement base class method.\n"},
  {"Render", PyvtkPBRIrradianceTexture_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer) -> None\nC++: void Render(vtkRenderer *ren) override;\n\nImplement base class method.\n"},
  {"GetIrradianceSize", PyvtkPBRIrradianceTexture_GetIrradianceSize, METH_VARARGS,
   "GetIrradianceSize(self) -> int\nC++: virtual unsigned int GetIrradianceSize()\n\nSet/Get size of texture. Default is 256.\n"},
  {"SetIrradianceSize", PyvtkPBRIrradianceTexture_SetIrradianceSize, METH_VARARGS,
   "SetIrradianceSize(self, _arg:int) -> None\nC++: virtual void SetIrradianceSize(unsigned int _arg)\n\n"},
  {"GetIrradianceStep", PyvtkPBRIrradianceTexture_GetIrradianceStep, METH_VARARGS,
   "GetIrradianceStep(self) -> float\nC++: virtual float GetIrradianceStep()\n\nSet/Get the size of steps in radians used to sample hemisphere.\nDefault is (pi/64). In some OpenGL drivers (OSMesa, old OSX), the\ndefault value might be too low leading to artifacts.\n"},
  {"SetIrradianceStep", PyvtkPBRIrradianceTexture_SetIrradianceStep, METH_VARARGS,
   "SetIrradianceStep(self, _arg:float) -> None\nC++: virtual void SetIrradianceStep(float _arg)\n\n"},
  {"GetConvertToLinear", PyvtkPBRIrradianceTexture_GetConvertToLinear, METH_VARARGS,
   "GetConvertToLinear(self) -> bool\nC++: virtual bool GetConvertToLinear()\n\nSet/Get the conversion to linear color space. If the input\ntexture is in sRGB color space and the conversion is not done by\nOpenGL directly with the texture format, the conversion can be\ndone in the shader with this flag.\n"},
  {"SetConvertToLinear", PyvtkPBRIrradianceTexture_SetConvertToLinear, METH_VARARGS,
   "SetConvertToLinear(self, _arg:bool) -> None\nC++: virtual void SetConvertToLinear(bool _arg)\n\n"},
  {"ConvertToLinearOn", PyvtkPBRIrradianceTexture_ConvertToLinearOn, METH_VARARGS,
   "ConvertToLinearOn(self) -> None\nC++: virtual void ConvertToLinearOn()\n\n"},
  {"ConvertToLinearOff", PyvtkPBRIrradianceTexture_ConvertToLinearOff, METH_VARARGS,
   "ConvertToLinearOff(self) -> None\nC++: virtual void ConvertToLinearOff()\n\n"},
  {"ReleaseGraphicsResources", PyvtkPBRIrradianceTexture_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\ntexture. The parameter window could be used to determine which\ngraphic resources to release. Using the same texture object in\nmultiple render windows is NOT currently supported.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPBRIrradianceTexture_Doc =
  "vtkPBRIrradianceTexture - precompute irradiance texture used in\nphysically based rendering\n\n"
  "Superclass: vtkOpenGLTexture\n\n"
  "Irradiance texture is a cubemap which average light of a hemisphere\n"
  "of the input texture. The input texture can be a cubemap or an\n"
  "equirectangular projection. It is used in Image Base Lighting to\n"
  "compute the diffuse part.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPBRIrradianceTexture_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkPBRIrradianceTexture", // tp_name
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
  PyvtkPBRIrradianceTexture_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPBRIrradianceTexture_StaticNew()
{
  return vtkPBRIrradianceTexture::New();
}

PyObject *PyvtkPBRIrradianceTexture_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPBRIrradianceTexture_Type, PyvtkPBRIrradianceTexture_Methods,
    "vtkPBRIrradianceTexture",
 &PyvtkPBRIrradianceTexture_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLTexture_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPBRIrradianceTexture(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPBRIrradianceTexture_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPBRIrradianceTexture", o) != 0)
  {
    Py_DECREF(o);
  }

}

