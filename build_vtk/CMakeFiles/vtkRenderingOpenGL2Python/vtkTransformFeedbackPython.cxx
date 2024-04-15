// python wrapper for vtkTransformFeedback
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformFeedback.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformFeedback(PyObject *dict); }
extern "C" { PyObject *PyvtkTransformFeedback_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformFeedback_VaryingRole_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkTransformFeedback.VaryingRole", // tp_name
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
PyObject *PyvtkTransformFeedback_VaryingRole_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkTransformFeedback_VaryingRole_Type, static_cast<int>(val));
}


static PyObject *
PyvtkTransformFeedback_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformFeedback::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformFeedback::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformFeedback *tempr = vtkTransformFeedback::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformFeedback *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformFeedback::NewInstance());

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
PyvtkTransformFeedback_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformFeedback::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformFeedback::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_ClearVaryings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVaryings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearVaryings();
    }
    else
    {
      op->vtkTransformFeedback::ClearVaryings();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_AddVarying(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVarying");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  typedef vtkTransformFeedback::VaryingRole temp0_type;
  temp0_type temp0;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetEnumValue(temp0, "vtkTransformFeedback.VaryingRole") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddVarying(temp0, temp1);
    }
    else
    {
      op->vtkTransformFeedback::AddVarying(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetBytesPerVertex_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetBytesPerVertex");

  typedef vtkTransformFeedback::VaryingRole temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkTransformFeedback.VaryingRole"))
  {
    size_t tempr = vtkTransformFeedback::GetBytesPerVertex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkTransformFeedback_GetBytesPerVertex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBytesPerVertex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetBytesPerVertex() :
      op->vtkTransformFeedback::GetBytesPerVertex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformFeedback_GetBytesPerVertex_Methods[] = {
  {"GetBytesPerVertex", PyvtkTransformFeedback_GetBytesPerVertex_s1, METH_VARARGS | METH_STATIC,
   "E vtkTransformFeedback.VaryingRole"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkTransformFeedback_GetBytesPerVertex(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkTransformFeedback_GetBytesPerVertex_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkTransformFeedback_GetBytesPerVertex_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBytesPerVertex");
  return nullptr;
}


static PyObject *
PyvtkTransformFeedback_SetNumberOfVertices_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  size_t temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVertices(temp0);
    }
    else
    {
      op->vtkTransformFeedback::SetNumberOfVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformFeedback_SetNumberOfVertices_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0;
  size_t temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfVertices(temp0, temp1);
    }
    else
    {
      op->vtkTransformFeedback::SetNumberOfVertices(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformFeedback_SetNumberOfVertices(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkTransformFeedback_SetNumberOfVertices_s1(self, args);
    case 2:
      return PyvtkTransformFeedback_SetNumberOfVertices_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfVertices");
  return nullptr;
}


static PyObject *
PyvtkTransformFeedback_GetNumberOfVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfVertices() :
      op->vtkTransformFeedback::GetNumberOfVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetBufferSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetBufferSize() :
      op->vtkTransformFeedback::GetBufferSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_BindVaryings(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindVaryings");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
  {
    if (ap.IsBound())
    {
      op->BindVaryings(temp0);
    }
    else
    {
      op->vtkTransformFeedback::BindVaryings(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->GetBuffer(temp0) :
      op->vtkTransformFeedback::GetBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetBufferHandle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferHandle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->GetBufferHandle(temp0) :
      op->vtkTransformFeedback::GetBufferHandle(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_SetPrimitiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPrimitiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPrimitiveMode(temp0);
    }
    else
    {
      op->vtkTransformFeedback::SetPrimitiveMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetPrimitiveMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPrimitiveMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPrimitiveMode() :
      op->vtkTransformFeedback::GetPrimitiveMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0;
  size_t temp1;
  unsigned int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Allocate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformFeedback::Allocate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_BindBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BindBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  bool temp0 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->BindBuffer(temp0);
    }
    else
    {
      op->vtkTransformFeedback::BindBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_ReadBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ReadBuffer(temp0);
    }
    else
    {
      op->vtkTransformFeedback::ReadBuffer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_GetBufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetBufferData() :
      op->vtkTransformFeedback::GetBufferData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources();
    }
    else
    {
      op->vtkTransformFeedback::ReleaseGraphicsResources();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformFeedback_ReleaseBufferData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseBufferData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformFeedback *op = static_cast<vtkTransformFeedback *>(vp);

  bool temp0 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ReleaseBufferData(temp0);
    }
    else
    {
      op->vtkTransformFeedback::ReleaseBufferData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformFeedback_Methods[] = {
  {"IsTypeOf", PyvtkTransformFeedback_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformFeedback_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformFeedback_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformFeedback\nC++: static vtkTransformFeedback *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformFeedback_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformFeedback\nC++: vtkTransformFeedback *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformFeedback_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformFeedback_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ClearVaryings", PyvtkTransformFeedback_ClearVaryings, METH_VARARGS,
   "ClearVaryings(self) -> None\nC++: void ClearVaryings()\n\nClear the list of varying attributes to capture.\n"},
  {"AddVarying", PyvtkTransformFeedback_AddVarying, METH_VARARGS,
   "AddVarying(self, role:VaryingRole, var:str) -> None\nC++: void AddVarying(VaryingRole role, const std::string &var)\n\nCapture the varying 'var' with the indicated role.\n"},
  {"GetBytesPerVertex", PyvtkTransformFeedback_GetBytesPerVertex, METH_VARARGS,
   "GetBytesPerVertex(role:VaryingRole) -> int\nC++: static size_t GetBytesPerVertex(VaryingRole role)\nGetBytesPerVertex(self) -> int\nC++: size_t GetBytesPerVertex()\n\nReturns the number of data elements each vertex requires for a\ngiven role.\n"},
  {"SetNumberOfVertices", PyvtkTransformFeedback_SetNumberOfVertices, METH_VARARGS,
   "SetNumberOfVertices(self, _arg:int) -> None\nC++: virtual void SetNumberOfVertices(size_t _arg)\nSetNumberOfVertices(self, drawMode:int, inputVerts:int) -> None\nC++: void SetNumberOfVertices(int drawMode, size_t inputVerts)\n\nThe number of vertices expected to be captured. If the drawMode\nsetter is used, PrimitiveMode will also be set appropriately. For\nthe single argument version set function, set the exact number of\nvertices expected to be emitted, accounting for primitive\nexpansion (e.g. triangle strips -> triangle strips). The two\nargument setter is for convenience. Given the number of vertices\nused as input to a draw command and the draw mode, it will\ncalculate the total number of vertices.\n"},
  {"GetNumberOfVertices", PyvtkTransformFeedback_GetNumberOfVertices, METH_VARARGS,
   "GetNumberOfVertices(self) -> int\nC++: virtual size_t GetNumberOfVertices()\n\n"},
  {"GetBufferSize", PyvtkTransformFeedback_GetBufferSize, METH_VARARGS,
   "GetBufferSize(self) -> int\nC++: size_t GetBufferSize()\n\nThe size (in bytes) of the capture buffer. Available after adding\nall Varyings and setting NumberOfVertices.\n"},
  {"BindVaryings", PyvtkTransformFeedback_BindVaryings, METH_VARARGS,
   "BindVaryings(self, prog:vtkShaderProgram) -> None\nC++: void BindVaryings(vtkShaderProgram *prog)\n\nGL_SEPARATE_ATTRIBS is not supported yet. The bufferMode argument\nto glTransformFeedbackVaryings. Must be GL_INTERLEAVED_ATTRIBS or\nGL_SEPARATE_ATTRIBS. Default is interleaved. Must be set prior to\ncalling BindVaryings. vtkSetMacro(BufferMode, int);\nvtkGetMacro(BufferMode, int);\n\nCall glTransformFeedbackVaryings(). Must be called after the\nshaders are attached to prog, but before the program is linked.\n"},
  {"GetBuffer", PyvtkTransformFeedback_GetBuffer, METH_VARARGS,
   "GetBuffer(self, index:int) -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *GetBuffer(int index)\n\nGet the transform buffer object. Only valid after calling\nBindBuffer.\n"},
  {"GetBufferHandle", PyvtkTransformFeedback_GetBufferHandle, METH_VARARGS,
   "GetBufferHandle(self, index:int=0) -> int\nC++: int GetBufferHandle(int index=0)\n\nGet the transform buffer object handle. Only valid after calling\nBindBuffer.\n"},
  {"SetPrimitiveMode", PyvtkTransformFeedback_SetPrimitiveMode, METH_VARARGS,
   "SetPrimitiveMode(self, _arg:int) -> None\nC++: virtual void SetPrimitiveMode(int _arg)\n\nThe type of primitive to capture. Must be one of GL_POINTS,\nGL_LINES, or GL_TRIANGLES. Default is GL_POINTS. Must be set\nprior to calling BindBuffer.\n"},
  {"GetPrimitiveMode", PyvtkTransformFeedback_GetPrimitiveMode, METH_VARARGS,
   "GetPrimitiveMode(self) -> int\nC++: virtual int GetPrimitiveMode()\n\n"},
  {"Allocate", PyvtkTransformFeedback_Allocate, METH_VARARGS,
   "Allocate(self, nbBuffers:int, size:int, hint:int) -> None\nC++: void Allocate(int nbBuffers, size_t size, unsigned int hint)\n\nGenerates and allocates the transform feedback buffers. Must be\ncalled before BindBuffer. This releases old buffers. nbBuffers is\nthe number of buffers to allocate. size if the size in byte to\nallocate per buffer. hint is the type of buffer (for example,\nGL_DYNAMIC_COPY)\n"},
  {"BindBuffer", PyvtkTransformFeedback_BindBuffer, METH_VARARGS,
   "BindBuffer(self, allocateOneBuffer:bool=True) -> None\nC++: void BindBuffer(bool allocateOneBuffer=true)\n\nBinds the feedback buffer, then call glBeginTransformFeedback\nwith the specified PrimitiveMode. Must be called after\nBindVaryings and before any relevant glDraw commands. If\nallocateOneBuffer is true, allocates 1 buffer (used for retro\ncompatibility).\n"},
  {"ReadBuffer", PyvtkTransformFeedback_ReadBuffer, METH_VARARGS,
   "ReadBuffer(self, index:int=0) -> None\nC++: void ReadBuffer(int index=0)\n\nCalls glEndTransformFeedback(), flushes the OpenGL command\nstream, and reads the transform feedback buffer into BufferData.\nMust be called after any relevant glDraw commands. If index is\npositive, data of specified buffer is copied to BufferData.\n"},
  {"GetBufferData", PyvtkTransformFeedback_GetBufferData, METH_VARARGS,
   "GetBufferData(self) -> Pointer\nC++: virtual void *GetBufferData()\n\nGet the transform buffer data as a void pointer. Only valid after\ncalling ReadBuffer.\n"},
  {"ReleaseGraphicsResources", PyvtkTransformFeedback_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self) -> None\nC++: void ReleaseGraphicsResources()\n\nRelease any graphics resources used by this object.\n"},
  {"ReleaseBufferData", PyvtkTransformFeedback_ReleaseBufferData, METH_VARARGS,
   "ReleaseBufferData(self, freeBuffer:bool=True) -> None\nC++: void ReleaseBufferData(bool freeBuffer=true)\n\nRelease the memory used by the buffer data. If freeBuffer == true\n(default), the data is deleted. If false, the caller is\nresponsible for deleting the BufferData with delete[].\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransformFeedback_Doc =
  "vtkTransformFeedback - Manages a TransformFeedback buffer.\n\n"
  "Superclass: vtkObject\n\n"
  "OpenGL's TransformFeedback allows varying attributes from a\n"
  "vertex/geometry shader to be captured into a buffer for later\n"
  "processing. This is used in VTK to capture vertex information during\n"
  "GL2PS export when using the OpenGL2 backend as a replacement for the\n"
  "deprecated OpenGL feedback buffer.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformFeedback_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkTransformFeedback", // tp_name
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
  PyvtkTransformFeedback_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformFeedback_StaticNew()
{
  return vtkTransformFeedback::New();
}

PyObject *PyvtkTransformFeedback_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformFeedback_Type, PyvtkTransformFeedback_Methods,
    "vtkTransformFeedback",
 &PyvtkTransformFeedback_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkTransformFeedback_VaryingRole_Type);
  PyVTKEnum_Add(&PyvtkTransformFeedback_VaryingRole_Type, "vtkTransformFeedback.VaryingRole");

  o = (PyObject *)&PyvtkTransformFeedback_VaryingRole_Type;
  if (PyDict_SetItemString(d, "VaryingRole", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    typedef vtkTransformFeedback::VaryingRole cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[4] = {
        { "Vertex_ClipCoordinate_F", vtkTransformFeedback::Vertex_ClipCoordinate_F },
        { "Color_RGBA_F", vtkTransformFeedback::Color_RGBA_F },
        { "Normal_F", vtkTransformFeedback::Normal_F },
        { "Next_Buffer", vtkTransformFeedback::Next_Buffer },
      };

    o = PyvtkTransformFeedback_VaryingRole_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformFeedback(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformFeedback_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformFeedback", o) != 0)
  {
    Py_DECREF(o);
  }

}

