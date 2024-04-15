// python wrapper for vtkOpenGLVertexBufferObject
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTimeStamp.h"
#include "vtkOpenGLVertexBufferObject.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLVertexBufferObject(PyObject *dict); }
static PyMethodDef PyvtkFourByteUnion_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFourByteUnion_vtkFourByteUnion(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFourByteUnion");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFourByteUnion *op = new vtkFourByteUnion();

    result = PyVTKSpecialObject_New("vtkFourByteUnion", op);
  }

  return result;
}

static PyMethodDef PyvtkFourByteUnion_vtkFourByteUnion_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkFourByteUnion_Doc =

  "vtkFourByteUnion() -> vtkFourByteUnion\nC++: vtkFourByteUnion()\n""\n"
  "vtkFourByteUnion - OpenGL vertex buffer object\n\n"
  "OpenGL buffer object to store geometry and/or attribute data on the\n"
  "GPU.\n\n";

static PyObject *
PyvtkFourByteUnion_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFourByteUnion_vtkFourByteUnion(nullptr, args);
}

static void PyvtkFourByteUnion_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFourByteUnion *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFourByteUnion_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFourByteUnion_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkFourByteUnion", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFourByteUnion_Delete, // tp_dealloc
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
  PyvtkFourByteUnion_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFourByteUnion_Doc, // tp_doc
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
  PyvtkFourByteUnion_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkFourByteUnion_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkFourByteUnion(*static_cast<const vtkFourByteUnion*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkFourByteUnion_TypeNew
extern "C" { PyObject *PyvtkFourByteUnion_TypeNew(); }
#define DECLARED_PyvtkFourByteUnion_TypeNew
#endif

PyObject *PyvtkFourByteUnion_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkFourByteUnion_Type,
    PyvtkFourByteUnion_Methods,
    PyvtkFourByteUnion_vtkFourByteUnion_Methods,
    &PyvtkFourByteUnion_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkOpenGLVertexBufferObject_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLBufferObject_ClassNew
extern "C" { PyObject *PyvtkOpenGLBufferObject_ClassNew(); }
#define DECLARED_PyvtkOpenGLBufferObject_ClassNew
#endif

static PyObject *
PyvtkOpenGLVertexBufferObject_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLVertexBufferObject::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLVertexBufferObject::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLVertexBufferObject *tempr = vtkOpenGLVertexBufferObject::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObject *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLVertexBufferObject::NewInstance());

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
PyvtkOpenGLVertexBufferObject_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLVertexBufferObject::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLVertexBufferObject::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_UploadDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UploadDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->UploadDataArray(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::UploadDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_AppendDataArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->AppendDataArray(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::AppendDataArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetUploadTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUploadTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTimeStamp tempr = (ap.IsBound() ?
      op->GetUploadTime() :
      op->vtkOpenGLVertexBufferObject::GetUploadTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkTimeStamp");
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordShiftAndScaleEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCoordShiftAndScaleEnabled() :
      op->vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoordShiftAndScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCoordShiftAndScaleMethod() :
      op->vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetCoordShiftAndScaleMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoordShiftAndScaleMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoordShiftAndScaleMethod(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetCoordShiftAndScaleMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetShift_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  std::vector<double> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetShift(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObject_SetShift_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetShift(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetShift(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObject_SetShift(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLVertexBufferObject_SetShift_s1(self, args);
    case 3:
      return PyvtkOpenGLVertexBufferObject_SetShift_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetShift");
  return nullptr;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  std::vector<double> temp0(ap.GetArgSize(0));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0.data(), temp0.size()))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObject_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLVertexBufferObject_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkOpenGLVertexBufferObject_SetScale_s1(self, args);
    case 3:
      return PyvtkOpenGLVertexBufferObject_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<double> *tempr = (ap.IsBound() ?
      &op->GetShift() :
      &op->vtkOpenGLVertexBufferObject::GetShift());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<double> *tempr = (ap.IsBound() ?
      &op->GetScale() :
      &op->vtkOpenGLVertexBufferObject::GetScale());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_UpdateShiftScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdateShiftScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkDataArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->UpdateShiftScale(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::UpdateShiftScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetGlobalCoordShiftAndScaleEnabled(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetGlobalCoordShiftAndScaleEnabled");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLVertexBufferObject::SetGlobalCoordShiftAndScaleEnabled(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GlobalCoordShiftAndScaleEnabledOn(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalCoordShiftAndScaleEnabledOn");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObject::GlobalCoordShiftAndScaleEnabledOn();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GlobalCoordShiftAndScaleEnabledOff(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GlobalCoordShiftAndScaleEnabledOff");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkOpenGLVertexBufferObject::GlobalCoordShiftAndScaleEnabledOff();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetGlobalCoordShiftAndScaleEnabled(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetGlobalCoordShiftAndScaleEnabled");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    int tempr = vtkOpenGLVertexBufferObject::GetGlobalCoordShiftAndScaleEnabled();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataType(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetDataType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkOpenGLVertexBufferObject::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetDataTypeSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataTypeSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDataTypeSize() :
      op->vtkOpenGLVertexBufferObject::GetDataTypeSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfTuples() :
      op->vtkOpenGLVertexBufferObject::GetNumberOfTuples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkOpenGLVertexBufferObject::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStride(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetStride(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetStride(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetStride() :
      op->vtkOpenGLVertexBufferObject::GetStride());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_GetPackedVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPackedVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::vector<float> *tempr = (ap.IsBound() ?
      &op->GetPackedVBO() :
      &op->vtkOpenGLVertexBufferObject::GetPackedVBO());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_UploadVBO(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UploadVBO");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UploadVBO();
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::UploadVBO();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetCache(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkOpenGLVertexBufferObjectCache *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLVertexBufferObjectCache"))
  {
    if (ap.IsBound())
    {
      op->SetCache(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetCache(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLVertexBufferObject_SetProp3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProp3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLVertexBufferObject *op = static_cast<vtkOpenGLVertexBufferObject *>(vp);

  vtkProp3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp3D"))
  {
    if (ap.IsBound())
    {
      op->SetProp3D(temp0);
    }
    else
    {
      op->vtkOpenGLVertexBufferObject::SetProp3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLVertexBufferObject_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLVertexBufferObject_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLVertexBufferObject_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLVertexBufferObject_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLVertexBufferObject\nC++: static vtkOpenGLVertexBufferObject *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLVertexBufferObject_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLVertexBufferObject\nC++: vtkOpenGLVertexBufferObject *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLVertexBufferObject_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLVertexBufferObject_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"UploadDataArray", PyvtkOpenGLVertexBufferObject_UploadDataArray, METH_VARARGS,
   "UploadDataArray(self, array:vtkDataArray) -> None\nC++: void UploadDataArray(vtkDataArray *array)\n\n"},
  {"AppendDataArray", PyvtkOpenGLVertexBufferObject_AppendDataArray, METH_VARARGS,
   "AppendDataArray(self, array:vtkDataArray) -> None\nC++: void AppendDataArray(vtkDataArray *array)\n\n"},
  {"GetUploadTime", PyvtkOpenGLVertexBufferObject_GetUploadTime, METH_VARARGS,
   "GetUploadTime(self) -> vtkTimeStamp\nC++: virtual vtkTimeStamp GetUploadTime()\n\n"},
  {"GetCoordShiftAndScaleEnabled", PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleEnabled, METH_VARARGS,
   "GetCoordShiftAndScaleEnabled(self) -> bool\nC++: virtual bool GetCoordShiftAndScaleEnabled()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"GetCoordShiftAndScaleMethod", PyvtkOpenGLVertexBufferObject_GetCoordShiftAndScaleMethod, METH_VARARGS,
   "GetCoordShiftAndScaleMethod(self) -> int\nC++: virtual int GetCoordShiftAndScaleMethod()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"SetCoordShiftAndScaleMethod", PyvtkOpenGLVertexBufferObject_SetCoordShiftAndScaleMethod, METH_VARARGS,
   "SetCoordShiftAndScaleMethod(self, meth:int) -> None\nC++: virtual void SetCoordShiftAndScaleMethod(int meth)\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"SetShift", PyvtkOpenGLVertexBufferObject_SetShift, METH_VARARGS,
   "SetShift(self, shift:(float, ...)) -> None\nC++: virtual void SetShift(const std::vector<double> &shift)\nSetShift(self, x:float, y:float, z:float) -> None\nC++: virtual void SetShift(double x, double y, double z)\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"SetScale", PyvtkOpenGLVertexBufferObject_SetScale, METH_VARARGS,
   "SetScale(self, scale:(float, ...)) -> None\nC++: virtual void SetScale(const std::vector<double> &scale)\nSetScale(self, x:float, y:float, z:float) -> None\nC++: virtual void SetScale(double x, double y, double z)\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"GetShift", PyvtkOpenGLVertexBufferObject_GetShift, METH_VARARGS,
   "GetShift(self) -> (float, ...)\nC++: virtual const std::vector<double> &GetShift()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"GetScale", PyvtkOpenGLVertexBufferObject_GetScale, METH_VARARGS,
   "GetScale(self) -> (float, ...)\nC++: virtual const std::vector<double> &GetScale()\n\nGet the shift and scale vectors computed by CreateVBO; or set the\nvalues CreateVBO and AppendVBO will use. Note that the \"Set\"\nmethods **must** be called before the first time that CreateVBO\nor AppendVBO is invoked and should never be called afterwards.\n\nThe CoordShiftAndScaleMethod describes how the shift and scale\nvectors are obtained (or that they should never be used). The\nGetCoordShiftAndScaleEnabled() method returns true if a shift and\nscale are currently being applied (or false if not).\n\nThe \"Get\" methods are used by the mapper to modify the world and\ncamera transformation matrices to match the scaling applied to\ncoordinates in the VBO. CreateVBO only applies a shift and scale\nwhen the midpoint of the point bounding-box is distant from the\norigin by a factor of 10,000 or more relative to the size of the\nbox along any axis.\n\nFor example, if the x coordinates of the points range from\n200,000 to 200,001 then the factor is 200,000.5 / (200,001 -\n200,000) = 2x10^5, which is larger than 10,000 -- so the\ncoordinates will be shifted and scaled.\n\nThis is important as many OpenGL drivers use reduced precision to\nhold point coordinates.\n\nThese methods are used by the mapper to determine the additional\ntransform (if any) to apply to the rendering transform.\n"},
  {"UpdateShiftScale", PyvtkOpenGLVertexBufferObject_UpdateShiftScale, METH_VARARGS,
   "UpdateShiftScale(self, da:vtkDataArray) -> None\nC++: void UpdateShiftScale(vtkDataArray *da)\n\n"},
  {"SetGlobalCoordShiftAndScaleEnabled", PyvtkOpenGLVertexBufferObject_SetGlobalCoordShiftAndScaleEnabled, METH_VARARGS,
   "SetGlobalCoordShiftAndScaleEnabled(val:int) -> None\nC++: static void SetGlobalCoordShiftAndScaleEnabled(\n    vtkTypeBool val)\n\n"},
  {"GlobalCoordShiftAndScaleEnabledOn", PyvtkOpenGLVertexBufferObject_GlobalCoordShiftAndScaleEnabledOn, METH_VARARGS,
   "GlobalCoordShiftAndScaleEnabledOn() -> None\nC++: static void GlobalCoordShiftAndScaleEnabledOn()\n\n"},
  {"GlobalCoordShiftAndScaleEnabledOff", PyvtkOpenGLVertexBufferObject_GlobalCoordShiftAndScaleEnabledOff, METH_VARARGS,
   "GlobalCoordShiftAndScaleEnabledOff() -> None\nC++: static void GlobalCoordShiftAndScaleEnabledOff()\n\n"},
  {"GetGlobalCoordShiftAndScaleEnabled", PyvtkOpenGLVertexBufferObject_GetGlobalCoordShiftAndScaleEnabled, METH_VARARGS,
   "GetGlobalCoordShiftAndScaleEnabled() -> int\nC++: static vtkTypeBool GetGlobalCoordShiftAndScaleEnabled()\n\n"},
  {"SetDataType", PyvtkOpenGLVertexBufferObject_SetDataType, METH_VARARGS,
   "SetDataType(self, v:int) -> None\nC++: void SetDataType(int v)\n\n"},
  {"GetDataType", PyvtkOpenGLVertexBufferObject_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\n"},
  {"GetDataTypeSize", PyvtkOpenGLVertexBufferObject_GetDataTypeSize, METH_VARARGS,
   "GetDataTypeSize(self) -> int\nC++: virtual unsigned int GetDataTypeSize()\n\n"},
  {"GetNumberOfTuples", PyvtkOpenGLVertexBufferObject_GetNumberOfTuples, METH_VARARGS,
   "GetNumberOfTuples(self) -> int\nC++: virtual unsigned int GetNumberOfTuples()\n\n"},
  {"GetNumberOfComponents", PyvtkOpenGLVertexBufferObject_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual unsigned int GetNumberOfComponents()\n\n"},
  {"SetStride", PyvtkOpenGLVertexBufferObject_SetStride, METH_VARARGS,
   "SetStride(self, _arg:int) -> None\nC++: virtual void SetStride(unsigned int _arg)\n\n"},
  {"GetStride", PyvtkOpenGLVertexBufferObject_GetStride, METH_VARARGS,
   "GetStride(self) -> int\nC++: virtual unsigned int GetStride()\n\n"},
  {"GetPackedVBO", PyvtkOpenGLVertexBufferObject_GetPackedVBO, METH_VARARGS,
   "GetPackedVBO(self) -> (float, ...)\nC++: std::vector<float> &GetPackedVBO()\n\n"},
  {"UploadVBO", PyvtkOpenGLVertexBufferObject_UploadVBO, METH_VARARGS,
   "UploadVBO(self) -> None\nC++: void UploadVBO()\n\n"},
  {"SetCache", PyvtkOpenGLVertexBufferObject_SetCache, METH_VARARGS,
   "SetCache(self, cache:vtkOpenGLVertexBufferObjectCache) -> None\nC++: void SetCache(vtkOpenGLVertexBufferObjectCache *cache)\n\n"},
  {"SetCamera", PyvtkOpenGLVertexBufferObject_SetCamera, METH_VARARGS,
   "SetCamera(self, cam:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *cam)\n\n"},
  {"SetProp3D", PyvtkOpenGLVertexBufferObject_SetProp3D, METH_VARARGS,
   "SetProp3D(self, prop3d:vtkProp3D) -> None\nC++: virtual void SetProp3D(vtkProp3D *prop3d)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLVertexBufferObject_Doc =
  "vtkOpenGLVertexBufferObject - no description provided.\n\n"
  "Superclass: vtkOpenGLBufferObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLVertexBufferObject_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLVertexBufferObject", // tp_name
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
  PyvtkOpenGLVertexBufferObject_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLVertexBufferObject_StaticNew()
{
  return vtkOpenGLVertexBufferObject::New();
}

PyObject *PyvtkOpenGLVertexBufferObject_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLVertexBufferObject_Type, PyvtkOpenGLVertexBufferObject_Methods,
    "vtkOpenGLVertexBufferObject",
 &PyvtkOpenGLVertexBufferObject_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLBufferObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLVertexBufferObject(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFourByteUnion_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFourByteUnion", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkOpenGLVertexBufferObject_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLVertexBufferObject", o) != 0)
  {
    Py_DECREF(o);
  }

}

