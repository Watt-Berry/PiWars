// python wrapper for vtkWebGLObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWebGLObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLObject(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyWebGLObjectTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.WebGLObjectTypes", // tp_name
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
PyObject *PyWebGLObjectTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyWebGLObjectTypes_Type, static_cast<int>(val));
}

extern "C" { PyObject *PyvtkWebGLObject_ClassNew(); }


static PyObject *
PyvtkWebGLObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLObject *tempr = vtkWebGLObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLObject::NewInstance());

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
PyvtkWebGLObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWebGLObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWebGLObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GenerateBinaryData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBinaryData();
    }
    else
    {
      op->vtkWebGLObject::GenerateBinaryData();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetBinaryData_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char *tempr = (ap.IsBound() ?
      op->GetBinaryData(temp0) :
      op->vtkWebGLObject::GetBinaryData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLObject_GetBinaryData_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinaryData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->GetBinaryData(temp0, temp1);
    }
    else
    {
      op->vtkWebGLObject::GetBinaryData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLObject_GetBinaryData(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkWebGLObject_GetBinaryData_s1(self, args);
    case 2:
      return PyvtkWebGLObject_GetBinaryData_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBinaryData");
  return nullptr;
}


static PyObject *
PyvtkWebGLObject_GetBinarySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBinarySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBinarySize(temp0) :
      op->vtkWebGLObject::GetBinarySize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetNumberOfParts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfParts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfParts() :
      op->vtkWebGLObject::GetNumberOfParts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayer(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetLayer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetRendererId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRendererId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRendererId(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetRendererId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetId(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetWireframeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWireframeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetWireframeMode(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetWireframeMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetVisibility(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVisibility");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVisibility(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetVisibility(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetTransformationMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransformationMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetTransformationMatrix(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetTransformationMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetIsWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIsWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIsWidget(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetIsWidget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetHasTransparency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHasTransparency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHasTransparency(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetHasTransparency(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetInteractAtServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractAtServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInteractAtServer(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetInteractAtServer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_SetType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  WebGLObjectTypes temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "WebGLObjectTypes"))
  {
    if (ap.IsBound())
    {
      op->SetType(temp0);
    }
    else
    {
      op->vtkWebGLObject::SetType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_isWireframeMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isWireframeMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->isWireframeMode() :
      op->vtkWebGLObject::isWireframeMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_isVisible(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isVisible");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->isVisible() :
      op->vtkWebGLObject::isVisible());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_HasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasChanged() :
      op->vtkWebGLObject::HasChanged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_isWidget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "isWidget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->isWidget() :
      op->vtkWebGLObject::isWidget());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_HasTransparency(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTransparency");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasTransparency() :
      op->vtkWebGLObject::HasTransparency());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_InteractAtServer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InteractAtServer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->InteractAtServer() :
      op->vtkWebGLObject::InteractAtServer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetMD5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMD5");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetMD5() :
      op->vtkWebGLObject::GetMD5());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkWebGLObject::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetRendererId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRendererId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetRendererId() :
      op->vtkWebGLObject::GetRendererId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLObject_GetLayer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLObject *op = static_cast<vtkWebGLObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayer() :
      op->vtkWebGLObject::GetLayer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLObject_Methods[] = {
  {"IsTypeOf", PyvtkWebGLObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWebGLObject\nC++: static vtkWebGLObject *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWebGLObject\nC++: vtkWebGLObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWebGLObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWebGLObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GenerateBinaryData", PyvtkWebGLObject_GenerateBinaryData, METH_VARARGS,
   "GenerateBinaryData(self) -> None\nC++: virtual void GenerateBinaryData()\n\n"},
  {"GetBinaryData", PyvtkWebGLObject_GetBinaryData, METH_VARARGS,
   "GetBinaryData(self, part:int) -> Pointer\nC++: virtual unsigned char *GetBinaryData(int part)\nGetBinaryData(self, part:int, buffer:vtkUnsignedCharArray) -> None\nC++: void GetBinaryData(int part, vtkUnsignedCharArray *buffer)\n\n"},
  {"GetBinarySize", PyvtkWebGLObject_GetBinarySize, METH_VARARGS,
   "GetBinarySize(self, part:int) -> int\nC++: virtual int GetBinarySize(int part)\n\n"},
  {"GetNumberOfParts", PyvtkWebGLObject_GetNumberOfParts, METH_VARARGS,
   "GetNumberOfParts(self) -> int\nC++: virtual int GetNumberOfParts()\n\n"},
  {"SetLayer", PyvtkWebGLObject_SetLayer, METH_VARARGS,
   "SetLayer(self, l:int) -> None\nC++: void SetLayer(int l)\n\n"},
  {"SetRendererId", PyvtkWebGLObject_SetRendererId, METH_VARARGS,
   "SetRendererId(self, i:int) -> None\nC++: void SetRendererId(size_t i)\n\n"},
  {"SetId", PyvtkWebGLObject_SetId, METH_VARARGS,
   "SetId(self, i:str) -> None\nC++: void SetId(const std::string &i)\n\n"},
  {"SetWireframeMode", PyvtkWebGLObject_SetWireframeMode, METH_VARARGS,
   "SetWireframeMode(self, wireframe:bool) -> None\nC++: void SetWireframeMode(bool wireframe)\n\n"},
  {"SetVisibility", PyvtkWebGLObject_SetVisibility, METH_VARARGS,
   "SetVisibility(self, vis:bool) -> None\nC++: void SetVisibility(bool vis)\n\n"},
  {"SetTransformationMatrix", PyvtkWebGLObject_SetTransformationMatrix, METH_VARARGS,
   "SetTransformationMatrix(self, m:vtkMatrix4x4) -> None\nC++: void SetTransformationMatrix(vtkMatrix4x4 *m)\n\n"},
  {"SetIsWidget", PyvtkWebGLObject_SetIsWidget, METH_VARARGS,
   "SetIsWidget(self, w:bool) -> None\nC++: void SetIsWidget(bool w)\n\n"},
  {"SetHasTransparency", PyvtkWebGLObject_SetHasTransparency, METH_VARARGS,
   "SetHasTransparency(self, t:bool) -> None\nC++: void SetHasTransparency(bool t)\n\n"},
  {"SetInteractAtServer", PyvtkWebGLObject_SetInteractAtServer, METH_VARARGS,
   "SetInteractAtServer(self, i:bool) -> None\nC++: void SetInteractAtServer(bool i)\n\n"},
  {"SetType", PyvtkWebGLObject_SetType, METH_VARARGS,
   "SetType(self, t:WebGLObjectTypes) -> None\nC++: void SetType(WebGLObjectTypes t)\n\n"},
  {"isWireframeMode", PyvtkWebGLObject_isWireframeMode, METH_VARARGS,
   "isWireframeMode(self) -> bool\nC++: bool isWireframeMode()\n\n"},
  {"isVisible", PyvtkWebGLObject_isVisible, METH_VARARGS,
   "isVisible(self) -> bool\nC++: bool isVisible()\n\n"},
  {"HasChanged", PyvtkWebGLObject_HasChanged, METH_VARARGS,
   "HasChanged(self) -> bool\nC++: bool HasChanged()\n\n"},
  {"isWidget", PyvtkWebGLObject_isWidget, METH_VARARGS,
   "isWidget(self) -> bool\nC++: bool isWidget()\n\n"},
  {"HasTransparency", PyvtkWebGLObject_HasTransparency, METH_VARARGS,
   "HasTransparency(self) -> bool\nC++: bool HasTransparency()\n\n"},
  {"InteractAtServer", PyvtkWebGLObject_InteractAtServer, METH_VARARGS,
   "InteractAtServer(self) -> bool\nC++: bool InteractAtServer()\n\n"},
  {"GetMD5", PyvtkWebGLObject_GetMD5, METH_VARARGS,
   "GetMD5(self) -> str\nC++: std::string GetMD5()\n\n"},
  {"GetId", PyvtkWebGLObject_GetId, METH_VARARGS,
   "GetId(self) -> str\nC++: std::string GetId()\n\n"},
  {"GetRendererId", PyvtkWebGLObject_GetRendererId, METH_VARARGS,
   "GetRendererId(self) -> int\nC++: size_t GetRendererId()\n\n"},
  {"GetLayer", PyvtkWebGLObject_GetLayer, METH_VARARGS,
   "GetLayer(self) -> int\nC++: int GetLayer()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWebGLObject_Doc =
  "vtkWebGLObject - vtkWebGLObject represent and manipulate an WebGL\nobject and its data.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWebGLObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.vtkWebGLObject", // tp_name
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
  PyvtkWebGLObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLObject_StaticNew()
{
  return vtkWebGLObject::New();
}

PyObject *PyvtkWebGLObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWebGLObject_Type, PyvtkWebGLObject_Methods,
    "vtkWebGLObject",
 &PyvtkWebGLObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLObject", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyWebGLObjectTypes_Type);
  PyVTKEnum_Add(&PyWebGLObjectTypes_Type, "WebGLObjectTypes");

  o = (PyObject *)&PyWebGLObjectTypes_Type;
  if (PyDict_SetItemString(dict, "WebGLObjectTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; WebGLObjectTypes value; }
      constants[3] = {
        { "wPOINTS", wPOINTS },
        { "wLINES", wLINES },
        { "wTRIANGLES", wTRIANGLES },
      };

    o = PyWebGLObjectTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

