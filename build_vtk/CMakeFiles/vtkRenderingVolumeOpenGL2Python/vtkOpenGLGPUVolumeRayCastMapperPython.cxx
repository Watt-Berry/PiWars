// python wrapper for vtkOpenGLGPUVolumeRayCastMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLGPUVolumeRayCastMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLGPUVolumeRayCastMapper.Passes", // tp_name
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
PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_Passes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGPUVolumeRayCastMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGPUVolumeRayCastMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = vtkOpenGLGPUVolumeRayCastMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGPUVolumeRayCastMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGPUVolumeRayCastMapper::NewInstance());

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
PyvtkOpenGLGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetDepthTexture() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetDepthTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetColorTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureObject *tempr = (ap.IsBound() ?
      op->GetColorTexture() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetColorTexture());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDepthImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetDepthImage(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::GetDepthImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetColorImage(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->GetColorImage(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::GetColorImage(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_GetCurrentPass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurrentPass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurrentPass() :
      op->vtkOpenGLGPUVolumeRayCastMapper::GetCurrentPass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetSharedDepthTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSharedDepthTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkTextureObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextureObject"))
  {
    if (ap.IsBound())
    {
      op->SetSharedDepthTexture(temp0);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::SetSharedDepthTexture(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_SetPartitions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPartitions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  unsigned short temp0;
  unsigned short temp1;
  unsigned short temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetPartitions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGPUVolumeRayCastMapper::SetPartitions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_PreLoadData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreLoadData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkVolume *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkVolume"))
  {
    bool tempr = (ap.IsBound() ?
      op->PreLoadData(temp0, temp1) :
      op->vtkOpenGLGPUVolumeRayCastMapper::PreLoadData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGPUVolumeRayCastMapper *op = static_cast<vtkOpenGLGPUVolumeRayCastMapper *>(vp);

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
      op->vtkOpenGLGPUVolumeRayCastMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLGPUVolumeRayCastMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGPUVolumeRayCastMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGPUVolumeRayCastMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGPUVolumeRayCastMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLGPUVolumeRayCastMapper\nC++: static vtkOpenGLGPUVolumeRayCastMapper *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGPUVolumeRayCastMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLGPUVolumeRayCastMapper\nC++: vtkOpenGLGPUVolumeRayCastMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLGPUVolumeRayCastMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDepthTexture", PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthTexture, METH_VARARGS,
   "GetDepthTexture(self) -> vtkTextureObject\nC++: vtkTextureObject *GetDepthTexture()\n\nLow level API to enable access to depth texture in\nRenderToTexture mode. It will return either nullptr if\nRenderToImage was never turned on or texture captured the last\ntime RenderToImage was on.\n"},
  {"GetColorTexture", PyvtkOpenGLGPUVolumeRayCastMapper_GetColorTexture, METH_VARARGS,
   "GetColorTexture(self) -> vtkTextureObject\nC++: vtkTextureObject *GetColorTexture()\n\nLow level API to enable access to color texture in\nRenderToTexture mode. It will return either nullptr if\nRenderToImage was never turned on or texture captured the last\ntime RenderToImage was on.\n"},
  {"GetDepthImage", PyvtkOpenGLGPUVolumeRayCastMapper_GetDepthImage, METH_VARARGS,
   "GetDepthImage(self, im:vtkImageData) -> None\nC++: void GetDepthImage(vtkImageData *im) override;\n\nLow level API to export the depth texture as vtkImageData in\nRenderToImage mode.\n"},
  {"GetColorImage", PyvtkOpenGLGPUVolumeRayCastMapper_GetColorImage, METH_VARARGS,
   "GetColorImage(self, im:vtkImageData) -> None\nC++: void GetColorImage(vtkImageData *im) override;\n\nLow level API to export the color texture as vtkImageData in\nRenderToImage mode.\n"},
  {"GetCurrentPass", PyvtkOpenGLGPUVolumeRayCastMapper_GetCurrentPass, METH_VARARGS,
   "GetCurrentPass(self) -> int\nC++: virtual int GetCurrentPass()\n\nMapper can have multiple passes and internally it will set the\nstate. The state can not be set externally explicitly but can be\nset indirectly depending on the options set by the user.\n"},
  {"SetSharedDepthTexture", PyvtkOpenGLGPUVolumeRayCastMapper_SetSharedDepthTexture, METH_VARARGS,
   "SetSharedDepthTexture(self, nt:vtkTextureObject) -> None\nC++: void SetSharedDepthTexture(vtkTextureObject *nt)\n\n"},
  {"SetPartitions", PyvtkOpenGLGPUVolumeRayCastMapper_SetPartitions, METH_VARARGS,
   "SetPartitions(self, x:int, y:int, z:int) -> None\nC++: void SetPartitions(unsigned short x, unsigned short y,\n    unsigned short z)\n\nSet a fixed number of partitions in which to split the volume\nduring rendering. This will force by-block rendering without\ntrying to compute an optimum number of partitions.\n"},
  {"PreLoadData", PyvtkOpenGLGPUVolumeRayCastMapper_PreLoadData, METH_VARARGS,
   "PreLoadData(self, ren:vtkRenderer, vol:vtkVolume) -> bool\nC++: bool PreLoadData(vtkRenderer *ren, vtkVolume *vol)\n\nLoad the volume texture into GPU memory.  Actual loading occurs\nin vtkVolumeTexture::LoadVolume.  The mapper by default loads\ndata lazily (at render time), so it is most commonly not\nnecessary to call this function.  This method is only exposed in\norder to support on-site loading which is useful in cases where\nthe user needs to know a-priori whether loading will succeed or\nnot.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLGPUVolumeRayCastMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nDelete OpenGL objects.\n\\post done: this->OpenGLObjectsCreated==0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLGPUVolumeRayCastMapper_Doc =
  "vtkOpenGLGPUVolumeRayCastMapper - OpenGL implementation of volume\nrendering through ray-casting.\n\n"
  "Superclass: vtkGPUVolumeRayCastMapper\n\n"
  "@section multi Multiple Inputs\n\n"
  "* When multiple inputs are rendered simultaneously, it is possible to\n"
  "* composite overlapping areas correctly. Inputs are connected\n"
  "  directly to\n"
  "* the mapper and their parameters (transfer functions,\n"
  "  transformations, etc.)\n"
  "* are specified through standard vtkVolume instances. These vtkVolume\n"
  "* instances are to be registered in a special vtkProp3D,\n"
  "  vtkMultiVolume.\n"
  "*\n"
  "* Structures related to a particular active input are stored in a\n"
  "  helper\n"
  "* class (vtkVolumeInputHelper) and helper structures are kept in a\n"
  "* port-referenced map (VolumeInputMap). The order of the inputs in\n"
  "  the\n"
  "* map is important as it defines the order in which parameters are\n"
  "* bound to uniform variables (transformation matrices, bias, scale\n"
  "  and every\n"
  "* other required rendering parameter).\n"
  "*\n"
  "* A separate code path is used when rendering multiple-inputs in\n"
  "  order to\n"
  "* facilitate the co-existance of these two modes (single/multiple),\n"
  "  due to\n"
  "* current feature incompatibilities with multiple inputs (e.g.\n"
  "  texture-streaming,\n"
  "* cropping, etc.).\n"
  "*\n"
  "*\n\n"
  "ote A limited set of the mapper features are currently supported for\n"
  "* multiple inputs:\n"
  "*\n"
  "* - Blending\n"
  "*   - Composite (front-to-back)\n"
  "*\n"
  "* - Transfer functions (defined separately for per input)\n"
  "*   - 1D color\n"
  "*   - 1D scalar opacity\n"
  "*   - 1D gradient magnitude opacity\n"
  "*   - 2D scalar-gradient magnitude\n"
  "*\n"
  "* - Point and cell data\n"
  "*   - With the limitation that all of the inputs are assumed to share\n"
  "the same\n"
  "*     name/id.\n"
  "*\n"
  "* - Inputs\n"
  "*   - 1-component inputs with\n"
  "  vtkVolumeProperty::IndependentComponentsOn()\n"
  "*   - 4-component inputs with\n"
  "  vtkVolumeProperty::IndependentComponentsOff()\n"
  "*\n"
  "* @sa vtkGPUVolumeRayCastMapper vtkVolumeInputHelper vtkVolumeTexture\n"
  "* vtkMultiVolume\n"
  "*\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGPUVolumeRayCastMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingVolumeOpenGL2.vtkOpenGLGPUVolumeRayCastMapper", // tp_name
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
  PyvtkOpenGLGPUVolumeRayCastMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew()
{
  return vtkOpenGLGPUVolumeRayCastMapper::New();
}

PyObject *PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLGPUVolumeRayCastMapper_Type, PyvtkOpenGLGPUVolumeRayCastMapper_Methods,
    "vtkOpenGLGPUVolumeRayCastMapper",
 &PyvtkOpenGLGPUVolumeRayCastMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGPUVolumeRayCastMapper");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type);
  PyVTKEnum_Add(&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type, "vtkOpenGLGPUVolumeRayCastMapper.Passes");

  o = (PyObject *)&PyvtkOpenGLGPUVolumeRayCastMapper_Passes_Type;
  if (PyDict_SetItemString(d, "Passes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkOpenGLGPUVolumeRayCastMapper::Passes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "RenderPass", vtkOpenGLGPUVolumeRayCastMapper::RenderPass },
        { "DepthPass", vtkOpenGLGPUVolumeRayCastMapper::DepthPass },
      };

    o = PyvtkOpenGLGPUVolumeRayCastMapper_Passes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGPUVolumeRayCastMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGPUVolumeRayCastMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGPUVolumeRayCastMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

