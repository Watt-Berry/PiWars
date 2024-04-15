// python wrapper for vtkOpenGLRayCastImageDisplayHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLRayCastImageDisplayHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLRayCastImageDisplayHelper_ClassNew(); }


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLRayCastImageDisplayHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLRayCastImageDisplayHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLRayCastImageDisplayHelper *tempr = vtkOpenGLRayCastImageDisplayHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLRayCastImageDisplayHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLRayCastImageDisplayHelper::NewInstance());

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
PyvtkOpenGLRayCastImageDisplayHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLRayCastImageDisplayHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLRayCastImageDisplayHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  int save2[2];
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  const size_t size4 = 2;
  int temp4[2];
  int save4[2];
  const size_t size5 = 2;
  int temp5[2];
  int save5[2];
  float temp6;
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<unsigned char> store7(2*size7);
  unsigned char *temp7 = store7.Data();
  unsigned char *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp7, save7, size7);

    if (ap.IsBound())
    {
      op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  const size_t size2 = 2;
  int temp2[2];
  int save2[2];
  const size_t size3 = 2;
  int temp3[2];
  int save3[2];
  const size_t size4 = 2;
  int temp4[2];
  int save4[2];
  const size_t size5 = 2;
  int temp5[2];
  int save5[2];
  float temp6;
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<unsigned short> store7(2*size7);
  unsigned short *temp7 = store7.Data();
  unsigned short *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp7, save7, size7);

    if (ap.IsBound())
    {
      op->RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

  vtkVolume *temp0 = nullptr;
  vtkRenderer *temp1 = nullptr;
  vtkFixedPointRayCastImage *temp2 = nullptr;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkVolume") &&
      ap.GetVTKObject(temp1, "vtkRenderer") &&
      ap.GetVTKObject(temp2, "vtkFixedPointRayCastImage") &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->RenderTexture(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLRayCastImageDisplayHelper::RenderTexture(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_Methods[] = {
  {"RenderTexture", PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s1, METH_VARARGS,
   "@VVPPPPfP *vtkVolume *vtkRenderer *i *i *i *i *B"},
  {"RenderTexture", PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s2, METH_VARARGS,
   "@VVPPPPfP *vtkVolume *vtkRenderer *i *i *i *i *H"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture_s3(self, args);
    case 8:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RenderTexture");
  return nullptr;
}


static PyObject *
PyvtkOpenGLRayCastImageDisplayHelper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLRayCastImageDisplayHelper *op = static_cast<vtkOpenGLRayCastImageDisplayHelper *>(vp);

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
      op->vtkOpenGLRayCastImageDisplayHelper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLRayCastImageDisplayHelper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLRayCastImageDisplayHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLRayCastImageDisplayHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLRayCastImageDisplayHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkOpenGLRayCastImageDisplayHelper\nC++: static vtkOpenGLRayCastImageDisplayHelper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLRayCastImageDisplayHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLRayCastImageDisplayHelper\nC++: vtkOpenGLRayCastImageDisplayHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLRayCastImageDisplayHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLRayCastImageDisplayHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"RenderTexture", PyvtkOpenGLRayCastImageDisplayHelper_RenderTexture, METH_VARARGS,
   "RenderTexture(self, vol:vtkVolume, ren:vtkRenderer,\n    imageMemorySize:[int, int], imageViewportSize:[int, int],\n    imageInUseSize:[int, int], imageOrigin:[int, int],\n    requestedDepth:float, image:[int, ...]) -> None\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned char *image) override;\nRenderTexture(self, vol:vtkVolume, ren:vtkRenderer,\n    imageMemorySize:[int, int], imageViewportSize:[int, int],\n    imageInUseSize:[int, int], imageOrigin:[int, int],\n    requestedDepth:float, image:[int, ...]) -> None\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    int imageMemorySize[2], int imageViewportSize[2],\n    int imageInUseSize[2], int imageOrigin[2],\n    float requestedDepth, unsigned short *image) override;\nRenderTexture(self, vol:vtkVolume, ren:vtkRenderer,\n    image:vtkFixedPointRayCastImage, requestedDepth:float) -> None\nC++: void RenderTexture(vtkVolume *vol, vtkRenderer *ren,\n    vtkFixedPointRayCastImage *image, float requestedDepth)\n    override;\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLRayCastImageDisplayHelper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nDerived class should implement this if needed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLRayCastImageDisplayHelper_Doc =
  "vtkOpenGLRayCastImageDisplayHelper - OpenGL subclass that draws the\nimage to the screen\n\n"
  "Superclass: vtkRayCastImageDisplayHelper\n\n"
  "This is the concrete implementation of a ray cast image display\n"
  "helper - a helper class responsible for drawing the image to the\n"
  "screen.\n\n"
  "@sa\n"
  "vtkRayCastImageDisplayHelper\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLRayCastImageDisplayHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLRayCastImageDisplayHelper", // tp_name
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
  PyvtkOpenGLRayCastImageDisplayHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLRayCastImageDisplayHelper_StaticNew()
{
  return vtkOpenGLRayCastImageDisplayHelper::New();
}

PyObject *PyvtkOpenGLRayCastImageDisplayHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLRayCastImageDisplayHelper_Type, PyvtkOpenGLRayCastImageDisplayHelper_Methods,
    "vtkOpenGLRayCastImageDisplayHelper",
 &PyvtkOpenGLRayCastImageDisplayHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRayCastImageDisplayHelper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLRayCastImageDisplayHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLRayCastImageDisplayHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLRayCastImageDisplayHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

