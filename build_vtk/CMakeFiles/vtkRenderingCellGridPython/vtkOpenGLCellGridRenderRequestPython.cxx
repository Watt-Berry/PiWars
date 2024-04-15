// python wrapper for vtkOpenGLCellGridRenderRequest
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkOpenGLCellGridRenderRequest.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLCellGridRenderRequest(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLCellGridRenderRequest_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCellGrid.vtkOpenGLCellGridRenderRequest.RenderableGeometry", // tp_name
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
PyObject *PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_Type, static_cast<int>(val));
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLCellGridRenderRequest::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLCellGridRenderRequest::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLCellGridRenderRequest *tempr = vtkOpenGLCellGridRenderRequest::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLCellGridRenderRequest *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLCellGridRenderRequest::NewInstance());

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
PyvtkOpenGLCellGridRenderRequest_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLCellGridRenderRequest::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLCellGridRenderRequest::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  vtkOpenGLCellGridMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLCellGridMapper"))
  {
    if (ap.IsBound())
    {
      op->SetMapper(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLCellGridMapper *tempr = (ap.IsBound() ?
      op->GetMapper() :
      op->vtkOpenGLCellGridRenderRequest::GetMapper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  vtkActor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->SetActor(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetActor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkActor *tempr = (ap.IsBound() ?
      op->GetActor() :
      op->vtkOpenGLCellGridRenderRequest::GetActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkOpenGLCellGridRenderRequest::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->SetWindow(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetWindow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetWindow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWindow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWindow *tempr = (ap.IsBound() ?
      op->GetWindow() :
      op->vtkOpenGLCellGridRenderRequest::GetWindow());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetShapesToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDraw() :
      op->vtkOpenGLCellGridRenderRequest::GetShapesToDraw());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetShapesToDraw(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapesToDraw");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShapesToDraw(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetShapesToDraw(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetShapesToDrawMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDrawMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDrawMinValue() :
      op->vtkOpenGLCellGridRenderRequest::GetShapesToDrawMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetShapesToDrawMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapesToDrawMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char tempr = (ap.IsBound() ?
      op->GetShapesToDrawMaxValue() :
      op->vtkOpenGLCellGridRenderRequest::GetShapesToDrawMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_Finalize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Finalize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Finalize();
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::Finalize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_GetIsReleasingResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIsReleasingResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIsReleasingResources() :
      op->vtkOpenGLCellGridRenderRequest::GetIsReleasingResources());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLCellGridRenderRequest_SetIsReleasingResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsReleasingResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLCellGridRenderRequest *op = static_cast<vtkOpenGLCellGridRenderRequest *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsReleasingResources(temp0);
    }
    else
    {
      op->vtkOpenGLCellGridRenderRequest::SetIsReleasingResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLCellGridRenderRequest_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLCellGridRenderRequest_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLCellGridRenderRequest_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLCellGridRenderRequest_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLCellGridRenderRequest\nC++: static vtkOpenGLCellGridRenderRequest *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLCellGridRenderRequest_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLCellGridRenderRequest\nC++: vtkOpenGLCellGridRenderRequest *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLCellGridRenderRequest_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLCellGridRenderRequest_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMapper", PyvtkOpenGLCellGridRenderRequest_SetMapper, METH_VARARGS,
   "SetMapper(self, mapper:vtkOpenGLCellGridMapper) -> None\nC++: virtual void SetMapper(vtkOpenGLCellGridMapper *mapper)\n\nSet/get the mapper which owns this request (so responders can\ninspect its configuration).\n\nNote that the render request does **NOT** increase the reference\ncount of the mapper (thus it does not take ownership). This is\nbecause the request is owned by the mapper and we do not want to\ncreate a reference loop.\n"},
  {"GetMapper", PyvtkOpenGLCellGridRenderRequest_GetMapper, METH_VARARGS,
   "GetMapper(self) -> vtkOpenGLCellGridMapper\nC++: virtual vtkOpenGLCellGridMapper *GetMapper()\n\n"},
  {"SetActor", PyvtkOpenGLCellGridRenderRequest_SetActor, METH_VARARGS,
   "SetActor(self, actor:vtkActor) -> None\nC++: virtual void SetActor(vtkActor *actor)\n\nSet/get the actor which responders should use to draw cells.\n\nNote that the render request does **NOT** increase the reference\ncount of the actor (thus it does not take ownership). This is to\navoid creating a reference loop.\n"},
  {"GetActor", PyvtkOpenGLCellGridRenderRequest_GetActor, METH_VARARGS,
   "GetActor(self) -> vtkActor\nC++: virtual vtkActor *GetActor()\n\n"},
  {"SetRenderer", PyvtkOpenGLCellGridRenderRequest_SetRenderer, METH_VARARGS,
   "SetRenderer(self, renderer:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *renderer)\n\nSet/get the renderer responders should use to draw cells.\n\nNote that the render request does **NOT** increase the reference\ncount of the renderer (thus it does not take ownership). This is\nto avoid creating a reference loop.\n"},
  {"GetRenderer", PyvtkOpenGLCellGridRenderRequest_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetWindow", PyvtkOpenGLCellGridRenderRequest_SetWindow, METH_VARARGS,
   "SetWindow(self, window:vtkWindow) -> None\nC++: virtual void SetWindow(vtkWindow *window)\n\nSet/get a window (used when IsReleasingResources is true).\n\nNote that the render request does **NOT** increase the reference\ncount of the window (thus it does not take ownership). This is to\navoid creating a reference loop.\n"},
  {"GetWindow", PyvtkOpenGLCellGridRenderRequest_GetWindow, METH_VARARGS,
   "GetWindow(self) -> vtkWindow\nC++: virtual vtkWindow *GetWindow()\n\n"},
  {"GetShapesToDraw", PyvtkOpenGLCellGridRenderRequest_GetShapesToDraw, METH_VARARGS,
   "GetShapesToDraw(self) -> str\nC++: virtual char GetShapesToDraw()\n\nSet/get what geometric data to draw for each cell.\n\nThe DEFAULT is currently equivalent to ALL. Note that any\ncombination of RenderableGeometry enumerants is accepted.\n\n\\sa RenderableGeometry\n"},
  {"SetShapesToDraw", PyvtkOpenGLCellGridRenderRequest_SetShapesToDraw, METH_VARARGS,
   "SetShapesToDraw(self, _arg:str) -> None\nC++: virtual void SetShapesToDraw(char _arg)\n\n"},
  {"GetShapesToDrawMinValue", PyvtkOpenGLCellGridRenderRequest_GetShapesToDrawMinValue, METH_VARARGS,
   "GetShapesToDrawMinValue(self) -> str\nC++: virtual char GetShapesToDrawMinValue()\n\n"},
  {"GetShapesToDrawMaxValue", PyvtkOpenGLCellGridRenderRequest_GetShapesToDrawMaxValue, METH_VARARGS,
   "GetShapesToDrawMaxValue(self) -> str\nC++: virtual char GetShapesToDrawMaxValue()\n\n"},
  {"Initialize", PyvtkOpenGLCellGridRenderRequest_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nThis is invoked before processing any cell types during a render.\n"},
  {"Finalize", PyvtkOpenGLCellGridRenderRequest_Finalize, METH_VARARGS,
   "Finalize(self) -> None\nC++: void Finalize() override;\n\nThis is invoked after processing all cell types during a render.\n"},
  {"GetIsReleasingResources", PyvtkOpenGLCellGridRenderRequest_GetIsReleasingResources, METH_VARARGS,
   "GetIsReleasingResources(self) -> bool\nC++: virtual bool GetIsReleasingResources()\n\nSet/get whether the request should render (false) or release\nresources (true). The latter should be performed as a separate\nquery after rendering.\n\nNote that after a successful call to Query with\nIsReleasingResources set to true, the Finalize() method will\nreset IsReleasingResources to false, which results in the request\nbeing marked modified.\n"},
  {"SetIsReleasingResources", PyvtkOpenGLCellGridRenderRequest_SetIsReleasingResources, METH_VARARGS,
   "SetIsReleasingResources(self, _arg:bool) -> None\nC++: virtual void SetIsReleasingResources(bool _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLCellGridRenderRequest_Doc =
  "vtkOpenGLCellGridRenderRequest - State used by\nvtkOpenGLCellGridMapper during rendering.\n\n"
  "Superclass: vtkCellGridQuery\n\n"
  "This is a vtkCellGridQuery subclass that mappers can use to draw\n"
  "cells into a renderer using an actor and, subsequently, to release\n"
  "resources.\n\n"
  "Note that this request has two modes: it will either instruct\n"
  "responders to draw cells (IsReleasingResources == false) or instruct\n"
  "responders to release OpenGL objects for a particular window (when\n"
  "IsReleasingResources == true). Responders must call\n"
  "GetIsReleasingResources() and only perform one task or the other,\n"
  "depending on the returned value.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLCellGridRenderRequest_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCellGrid.vtkOpenGLCellGridRenderRequest", // tp_name
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
  PyvtkOpenGLCellGridRenderRequest_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLCellGridRenderRequest_StaticNew()
{
  return vtkOpenGLCellGridRenderRequest::New();
}

PyObject *PyvtkOpenGLCellGridRenderRequest_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLCellGridRenderRequest_Type, PyvtkOpenGLCellGridRenderRequest_Methods,
    "vtkOpenGLCellGridRenderRequest",
 &PyvtkOpenGLCellGridRenderRequest_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellGridQuery");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_Type);
  PyVTKEnum_Add(&PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_Type, "vtkOpenGLCellGridRenderRequest.RenderableGeometry");

  o = (PyObject *)&PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_Type;
  if (PyDict_SetItemString(d, "RenderableGeometry", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 6; c++)
  {
    typedef vtkOpenGLCellGridRenderRequest::RenderableGeometry cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[6] = {
        { "VERTICES", vtkOpenGLCellGridRenderRequest::VERTICES },
        { "EDGES", vtkOpenGLCellGridRenderRequest::EDGES },
        { "FACES", vtkOpenGLCellGridRenderRequest::FACES },
        { "VOLUMES", vtkOpenGLCellGridRenderRequest::VOLUMES },
        { "SURFACE_WITH_EDGES", vtkOpenGLCellGridRenderRequest::SURFACE_WITH_EDGES },
        { "ALL", vtkOpenGLCellGridRenderRequest::ALL },
      };

    o = PyvtkOpenGLCellGridRenderRequest_RenderableGeometry_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLCellGridRenderRequest(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLCellGridRenderRequest_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLCellGridRenderRequest", o) != 0)
  {
    Py_DECREF(o);
  }

}

