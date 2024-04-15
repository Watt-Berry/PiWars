// python wrapper for vtkResizingWindowToImageFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkResizingWindowToImageFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkResizingWindowToImageFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkResizingWindowToImageFilter_ClassNew(); }


static PyObject *
PyvtkResizingWindowToImageFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkResizingWindowToImageFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkResizingWindowToImageFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkResizingWindowToImageFilter *tempr = vtkResizingWindowToImageFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkResizingWindowToImageFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkResizingWindowToImageFilter::NewInstance());

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
PyvtkResizingWindowToImageFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkResizingWindowToImageFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkResizingWindowToImageFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkResizingWindowToImageFilter::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkResizingWindowToImageFilter::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0, temp1);
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResizingWindowToImageFilter_SetSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkResizingWindowToImageFilter_SetSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkResizingWindowToImageFilter_SetSize_s1(self, args);
    case 1:
      return PyvtkResizingWindowToImageFilter_SetSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSize");
  return nullptr;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetSizeLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSizeLimit() :
      op->vtkResizingWindowToImageFilter::GetSizeLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetSizeLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSizeLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSizeLimit(temp0);
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetSizeLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferType(temp0);
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetInputBufferType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetInputBufferType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputBufferType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInputBufferType() :
      op->vtkResizingWindowToImageFilter::GetInputBufferType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetInputBufferTypeToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToRGB();
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetInputBufferTypeToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetInputBufferTypeToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToRGBA();
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetInputBufferTypeToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_SetInputBufferTypeToZBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputBufferTypeToZBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInputBufferTypeToZBuffer();
    }
    else
    {
      op->vtkResizingWindowToImageFilter::SetInputBufferTypeToZBuffer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkResizingWindowToImageFilter_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkResizingWindowToImageFilter *op = static_cast<vtkResizingWindowToImageFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkResizingWindowToImageFilter::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkResizingWindowToImageFilter_Methods[] = {
  {"IsTypeOf", PyvtkResizingWindowToImageFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkResizingWindowToImageFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkResizingWindowToImageFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkResizingWindowToImageFilter\nC++: static vtkResizingWindowToImageFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkResizingWindowToImageFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkResizingWindowToImageFilter\nC++: vtkResizingWindowToImageFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkResizingWindowToImageFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkResizingWindowToImageFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInput", PyvtkResizingWindowToImageFilter_SetInput, METH_VARARGS,
   "SetInput(self, input:vtkWindow) -> None\nC++: void SetInput(vtkWindow *input)\n\nIndicates what renderer to get the pixel data from. Initial value\nis 0.\n"},
  {"GetInput", PyvtkResizingWindowToImageFilter_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkWindow\nC++: virtual vtkWindow *GetInput()\n\nReturns which renderer is being used as the source for the pixel\ndata. Initial value is 0.\n"},
  {"GetSize", PyvtkResizingWindowToImageFilter_GetSize, METH_VARARGS,
   "GetSize(self) -> (int, int)\nC++: virtual int *GetSize()\n\nGet/Set the size of the target image in pixels.\n"},
  {"SetSize", PyvtkResizingWindowToImageFilter_SetSize, METH_VARARGS,
   "SetSize(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetSize(int _arg1, int _arg2)\nSetSize(self, _arg:(int, int)) -> None\nC++: void SetSize(const int _arg[2])\n\n"},
  {"GetSizeLimit", PyvtkResizingWindowToImageFilter_GetSizeLimit, METH_VARARGS,
   "GetSizeLimit(self) -> int\nC++: virtual int GetSizeLimit()\n\nGet/Set the size limit of the image (in pixels per axis) for\nswitching from rendering the entire image in memory to using\ntiling which uses less memory but may fail to produce the exact\nsize in pixels as requested.\n"},
  {"SetSizeLimit", PyvtkResizingWindowToImageFilter_SetSizeLimit, METH_VARARGS,
   "SetSizeLimit(self, _arg:int) -> None\nC++: virtual void SetSizeLimit(int _arg)\n\n"},
  {"SetInputBufferType", PyvtkResizingWindowToImageFilter_SetInputBufferType, METH_VARARGS,
   "SetInputBufferType(self, _arg:int) -> None\nC++: virtual void SetInputBufferType(int _arg)\n\nSet/get the window buffer from which data will be read.  Choices\ninclude VTK_RGB (read the color image from the window), VTK_RGBA\n(same, but include the alpha channel), and VTK_ZBUFFER (depth\nbuffer, returned as a float array). Initial value is VTK_RGB.\n"},
  {"GetInputBufferType", PyvtkResizingWindowToImageFilter_GetInputBufferType, METH_VARARGS,
   "GetInputBufferType(self) -> int\nC++: virtual int GetInputBufferType()\n\n"},
  {"SetInputBufferTypeToRGB", PyvtkResizingWindowToImageFilter_SetInputBufferTypeToRGB, METH_VARARGS,
   "SetInputBufferTypeToRGB(self) -> None\nC++: void SetInputBufferTypeToRGB()\n\n"},
  {"SetInputBufferTypeToRGBA", PyvtkResizingWindowToImageFilter_SetInputBufferTypeToRGBA, METH_VARARGS,
   "SetInputBufferTypeToRGBA(self) -> None\nC++: void SetInputBufferTypeToRGBA()\n\n"},
  {"SetInputBufferTypeToZBuffer", PyvtkResizingWindowToImageFilter_SetInputBufferTypeToZBuffer, METH_VARARGS,
   "SetInputBufferTypeToZBuffer(self) -> None\nC++: void SetInputBufferTypeToZBuffer()\n\n"},
  {"GetOutput", PyvtkResizingWindowToImageFilter_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkResizingWindowToImageFilter_Doc =
  "vtkResizingWindowToImageFilter - Use a vtkWindow as input to image\npipeline\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkResizingWindowToImageFilter provides methods needed to read the\n"
  "data in a vtkWindow and use it as input to the imaging pipeline. This\n"
  "is useful for saving an image to a file for example. The window can\n"
  "be read as either RGB or RGBA pixels;  in addition, the depth buffer\n"
  "can also be read.   RGB and RGBA pixels are of type unsigned char,\n"
  "while Z-Buffer data is returned as floats.  Use this filter to\n"
  "convert RenderWindows or ImageWindows to an image format.\n\n"
  "ote In contrast to the vtkWindowToImageFilter, this allows also for\n"
  "non-integral values to be used as scaling factors for the generated\n"
  "image. Also, it provides a SizeLimit parameter which enables to\n"
  "control when the algorithm will switch to using tiling for generating\n"
  "a large image instead of rendering the entire result at once.\n\n"
  "@warning\n"
  "A vtkWindow doesn't behave like other parts of the VTK pipeline: its\n"
  "modification time doesn't get updated when an image is rendered.  As\n"
  "a result, naive use of vtkResizingWindowToImageFilter will produce an\n"
  "image of the first image that the window rendered, but which is never\n"
  "updated on subsequent window updates.  This behavior is unexpected\n"
  "and in general undesirable.\n\n"
  "@warning\n"
  "To force an update of the output image, call\n"
  "vtkResizingWindowToImageFilter's Modified method after rendering to\n"
  "the window.\n\n"
  "@sa\n"
  "vtkRendererSource vtkRendererPointCloudSource vtkWindow\n"
  "vtkRenderLargeImage vtkWindowToImageFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkResizingWindowToImageFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkResizingWindowToImageFilter", // tp_name
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
  PyvtkResizingWindowToImageFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkResizingWindowToImageFilter_StaticNew()
{
  return vtkResizingWindowToImageFilter::New();
}

PyObject *PyvtkResizingWindowToImageFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkResizingWindowToImageFilter_Type, PyvtkResizingWindowToImageFilter_Methods,
    "vtkResizingWindowToImageFilter",
 &PyvtkResizingWindowToImageFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkResizingWindowToImageFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkResizingWindowToImageFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkResizingWindowToImageFilter", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(5);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_ZBUFFER", o);
    Py_DECREF(o);
  }
}

