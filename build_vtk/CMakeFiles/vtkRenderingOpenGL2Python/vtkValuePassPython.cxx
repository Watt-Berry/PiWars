// python wrapper for vtkValuePass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkValuePass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkValuePass(PyObject *dict); }
extern "C" { PyObject *PyvtkValuePass_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLRenderPass_ClassNew
extern "C" { PyObject *PyvtkOpenGLRenderPass_ClassNew(); }
#define DECLARED_PyvtkOpenGLRenderPass_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkValuePass_Mode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkValuePass.Mode", // tp_name
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
PyObject *PyvtkValuePass_Mode_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkValuePass_Mode_Type, static_cast<int>(val));
}


static PyObject *
PyvtkValuePass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkValuePass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkValuePass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkValuePass *tempr = vtkValuePass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkValuePass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkValuePass::NewInstance());

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
PyvtkValuePass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkValuePass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkValuePass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkValuePass_SetInputArrayToProcess_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputArrayToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInputArrayToProcess(temp0, temp1);
    }
    else
    {
      op->vtkValuePass::SetInputArrayToProcess(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkValuePass_SetInputArrayToProcess_Methods[] = {
  {"SetInputArrayToProcess", PyvtkValuePass_SetInputArrayToProcess_s1, METH_VARARGS,
   "@iz"},
  {"SetInputArrayToProcess", PyvtkValuePass_SetInputArrayToProcess_s2, METH_VARARGS,
   "@ii"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkValuePass_SetInputArrayToProcess(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkValuePass_SetInputArrayToProcess_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInputArrayToProcess");
  return nullptr;
}


static PyObject *
PyvtkValuePass_SetInputComponentToProcess(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputComponentToProcess");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputComponentToProcess(temp0);
    }
    else
    {
      op->vtkValuePass::SetInputComponentToProcess(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetFloatImageDataArray(temp0) :
      op->vtkValuePass::GetFloatImageDataArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  int temp0;
  int temp1;
  int temp2;
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetBuffer(temp3, &pbuf3))
  {
    if (ap.IsBound())
    {
      op->GetFloatImageData(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkValuePass::GetFloatImageData(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}


static PyObject *
PyvtkValuePass_GetFloatImageExtents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloatImageExtents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetFloatImageExtents() :
      op->vtkValuePass::GetFloatImageExtents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkValuePass_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkValuePass *op = static_cast<vtkValuePass *>(vp);

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
      op->vtkValuePass::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkValuePass_Methods[] = {
  {"IsTypeOf", PyvtkValuePass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkValuePass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkValuePass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkValuePass\nC++: static vtkValuePass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkValuePass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkValuePass\nC++: vtkValuePass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkValuePass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkValuePass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInputArrayToProcess", PyvtkValuePass_SetInputArrayToProcess, METH_VARARGS,
   "SetInputArrayToProcess(self, fieldAssociation:int, name:str)\n    -> None\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    const char *name)\nSetInputArrayToProcess(self, fieldAssociation:int, fieldId:int)\n    -> None\nC++: void SetInputArrayToProcess(int fieldAssociation,\n    int fieldId)\n\n"},
  {"SetInputComponentToProcess", PyvtkValuePass_SetInputComponentToProcess, METH_VARARGS,
   "SetInputComponentToProcess(self, component:int) -> None\nC++: void SetInputComponentToProcess(int component)\n\n"},
  {"GetFloatImageDataArray", PyvtkValuePass_GetFloatImageDataArray, METH_VARARGS,
   "GetFloatImageDataArray(self, ren:vtkRenderer) -> vtkFloatArray\nC++: vtkFloatArray *GetFloatImageDataArray(vtkRenderer *ren)\n\nInterface to get the rendered image in FLOATING_POINT mode. \nReturns a single component array containing the rendered values.\n\\warning The returned array is owned by this class.\n"},
  {"GetFloatImageData", PyvtkValuePass_GetFloatImageData, METH_VARARGS,
   "GetFloatImageData(self, format:int, width:int, height:int,\n    data:Pointer) -> None\nC++: void GetFloatImageData(int format, int width, int height,\n    void *data)\n\nInterface to get the rendered image in FLOATING_POINT mode.  Low\nlevel API, a format for the internal glReadPixels call can be\nspecified. 'data' is expected to be allocated and cleaned-up by\nthe caller.\n"},
  {"GetFloatImageExtents", PyvtkValuePass_GetFloatImageExtents, METH_VARARGS,
   "GetFloatImageExtents(self) -> Pointer\nC++: int *GetFloatImageExtents()\n\nInterface to get the rendered image in FLOATING_POINT mode. \nImage extents of the value array.\n"},
  {"ReleaseGraphicsResources", PyvtkValuePass_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease graphics resources and ask components to release their\nown resources. Default implementation is empty.\n\\pre w_exists: w!=0\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkValuePass_Doc =
  "vtkValuePass - Renders geometry using the values of a field array as\nfragment colors.\n\n"
  "Superclass: vtkOpenGLRenderPass\n\n"
  "The output can be used for deferred color mapping. It supports using\n"
  "arrays of either point or cell data. The target array can be selected\n"
  "by setting an array name/id and a component number. Only opaque\n"
  "geometry is supported.\n\n"
  "There are two rendering modes available:\n\n"
  "* INVERTIBLE_LUT  Encodes array values as RGB data and renders the\n"
  "  result to the default framebuffer.  It uses a texture as a color\n"
  "  LUT to map the values to RGB data. Texture size constraints limit\n"
  "  its precision (currently 12-bit). The implementation of this mode\n"
  "  is in vtkInternalsInvertible. This option is deprecated now that\n"
  "  the SGI patent on floating point textures has expired and Mesa and\n"
  "  other OpenGL's always supports it.\n\n"
  "* FLOATING_POINT  Renders actual array values as floating point data\n"
  "  to an internal RGBA32F framebuffer.  This class binds and unbinds\n"
  "  the framebuffer on each render pass. Resources are allocated on\n"
  "  demand. When rendering point data values are uploaded to the GPU as\n"
  "vertex attributes. When rendering cell data values are uploaded as a\n"
  "  texture buffer. Custom vertex and fragment shaders are defined in\n"
  "  order to adjust its behavior for either type of data.\n\n"
  "@sa\n"
  "vtkRenderPass vtkOpenGLRenderPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkValuePass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkValuePass", // tp_name
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
  PyvtkValuePass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkValuePass_StaticNew()
{
  return vtkValuePass::New();
}

PyObject *PyvtkValuePass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkValuePass_Type, PyvtkValuePass_Methods,
    "vtkValuePass",
 &PyvtkValuePass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLRenderPass_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkValuePass_Mode_Type);
  PyVTKEnum_Add(&PyvtkValuePass_Mode_Type, "vtkValuePass.Mode");

  o = (PyObject *)&PyvtkValuePass_Mode_Type;
  if (PyDict_SetItemString(d, "Mode", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkValuePass::Mode cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "INVERTIBLE_LUT", vtkValuePass::INVERTIBLE_LUT },
        { "FLOATING_POINT", vtkValuePass::FLOATING_POINT },
      };

    o = PyvtkValuePass_Mode_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkValuePass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkValuePass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkValuePass", o) != 0)
  {
    Py_DECREF(o);
  }

}

