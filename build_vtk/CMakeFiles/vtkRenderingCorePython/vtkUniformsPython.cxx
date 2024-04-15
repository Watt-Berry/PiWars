// python wrapper for vtkUniforms
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUniforms.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUniforms(PyObject *dict); }
extern "C" { PyObject *PyvtkUniforms_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniforms_TupleType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkUniforms.TupleType", // tp_name
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
PyObject *PyvtkUniforms_TupleType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkUniforms_TupleType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkUniforms_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniforms::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUniforms::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUniforms *tempr = vtkUniforms::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniforms *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUniforms::NewInstance());

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
PyvtkUniforms_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUniforms::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUniforms::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformListMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformListMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    unsigned long tempr = op->GetUniformListMTime();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_TupleTypeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "TupleTypeToString");

  typedef vtkUniforms::TupleType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkUniforms.TupleType"))
  {
    std::string tempr = vtkUniforms::TupleTypeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_StringToTupleType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "StringToTupleType");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkUniforms::TupleType tempr_type;
  tempr_type tempr = vtkUniforms::StringToTupleType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkUniforms_TupleType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_ScalarTypeToString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ScalarTypeToString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkUniforms::ScalarTypeToString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_StringToScalarType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "StringToScalarType");

  std::string temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUniforms::StringToScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_RemoveUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->RemoveUniform(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_RemoveAllUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->RemoveAllUniforms();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkUniforms::TupleType temp1;
  int temp2;
  std::vector<int> temp3(ap.GetArgSize(3));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkUniforms.TupleType") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3.data(), temp3.size()))
  {
    op->SetUniform(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniforms_SetUniform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkUniforms::TupleType temp1;
  int temp2;
  std::vector<float> temp3(ap.GetArgSize(3));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkUniforms.TupleType") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3.data(), temp3.size()))
  {
    op->SetUniform(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUniforms_SetUniform_Methods[] = {
  {"SetUniform", PyvtkUniforms_SetUniform_s1, METH_VARARGS,
   "@zEiT vtkUniforms.TupleType i"},
  {"SetUniform", PyvtkUniforms_SetUniform_s2, METH_VARARGS,
   "@zEiT vtkUniforms.TupleType f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniforms_SetUniform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniforms_SetUniform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUniform");
  return nullptr;
}


static PyObject *
PyvtkUniforms_GetUniform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniforms_GetUniform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniforms_GetUniform_Methods[] = {
  {"GetUniform", PyvtkUniforms_GetUniform_s1, METH_VARARGS,
   "@zT i"},
  {"GetUniform", PyvtkUniforms_GetUniform_s2, METH_VARARGS,
   "@zT f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniforms_GetUniform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniforms_GetUniform_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUniform");
  return nullptr;
}


static PyObject *
PyvtkUniforms_SetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetUniformi(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->SetUniformf(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform2i(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2i");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform2i(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform2f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  float temp1[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform2f(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform4f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform4f(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniformMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->SetUniformMatrix3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniformMatrix4x4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->SetUniformMatrix4x4(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform1iv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1iv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    op->SetUniform1iv(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform1fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(size2);
  float *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    op->SetUniform1fv(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniformMatrix4x4v(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4v");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    op->SetUniformMatrix4x4v(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform3f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform3f(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform3uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  unsigned char temp1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform3uc(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniform4uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  unsigned char temp1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->SetUniform4uc(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_SetUniformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    op->SetUniformMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkUniforms_SetUniformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    op->SetUniformMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkUniforms_SetUniformMatrix_Methods[] = {
  {"SetUniformMatrix", PyvtkUniforms_SetUniformMatrix_s1, METH_VARARGS,
   "@zV *vtkMatrix3x3"},
  {"SetUniformMatrix", PyvtkUniforms_SetUniformMatrix_s2, METH_VARARGS,
   "@zV *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniforms_SetUniformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniforms_SetUniformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUniformMatrix");
  return nullptr;
}


static PyObject *
PyvtkUniforms_GetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = op->GetUniformi(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = op->GetUniformf(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform2i(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2i");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform2i(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform2f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  float temp1[2];
  float save1[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform2f(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform4f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform4f(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniformMatrix3x3(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformMatrix4x4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix4x4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniformMatrix4x4(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform3f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform3f(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform3uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  unsigned char temp1[3];
  unsigned char save1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform3uc(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform4uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  unsigned char temp1[4];
  unsigned char save1[4];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = op->GetUniform4uc(temp0, temp1);

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    bool tempr = op->GetUniformMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUniforms_GetUniformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = op->GetUniformMatrix(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniforms_GetUniformMatrix_Methods[] = {
  {"GetUniformMatrix", PyvtkUniforms_GetUniformMatrix_s1, METH_VARARGS,
   "@zV *vtkMatrix3x3"},
  {"GetUniformMatrix", PyvtkUniforms_GetUniformMatrix_s2, METH_VARARGS,
   "@zV *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUniforms_GetUniformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUniforms_GetUniformMatrix_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetUniformMatrix");
  return nullptr;
}


static PyObject *
PyvtkUniforms_GetUniform1iv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform1iv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform1iv(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform1fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform1fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform1fv(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform2fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform2fv(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform3fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform3fv(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniform4fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniform4fv(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformMatrix4x4v(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix4x4v");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = op->GetUniformMatrix4x4v(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp1.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp1.data(), temp1.size()));
      ap.SetContents(1, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetNumberOfUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfUniforms();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetNthUniformName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthUniformName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = op->GetNthUniformName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetUniformScalarType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformTupleType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformTupleType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkUniforms::TupleType tempr_type;
  tempr_type tempr = op->GetUniformTupleType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkUniforms_TupleType_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetUniformNumberOfComponents(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUniforms_GetUniformNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUniforms *op = static_cast<vtkUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetUniformNumberOfTuples(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUniforms_Methods[] = {
  {"IsTypeOf", PyvtkUniforms_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUniforms_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUniforms_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUniforms\nC++: static vtkUniforms *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUniforms_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUniforms\nC++: vtkUniforms *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUniforms_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUniforms_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetUniformListMTime", PyvtkUniforms_GetUniformListMTime, METH_VARARGS,
   "GetUniformListMTime(self) -> int\nC++: virtual vtkMTimeType GetUniformListMTime()\n\n"},
  {"TupleTypeToString", PyvtkUniforms_TupleTypeToString, METH_VARARGS,
   "TupleTypeToString(tt:TupleType) -> str\nC++: static std::string TupleTypeToString(TupleType tt)\n\nConvert between TupleType and string\n"},
  {"StringToTupleType", PyvtkUniforms_StringToTupleType, METH_VARARGS,
   "StringToTupleType(s:str) -> TupleType\nC++: static TupleType StringToTupleType(const std::string &s)\n\n"},
  {"ScalarTypeToString", PyvtkUniforms_ScalarTypeToString, METH_VARARGS,
   "ScalarTypeToString(scalarType:int) -> str\nC++: static std::string ScalarTypeToString(int scalarType)\n\nConvert between scalar types an string\n"},
  {"StringToScalarType", PyvtkUniforms_StringToScalarType, METH_VARARGS,
   "StringToScalarType(s:str) -> int\nC++: static int StringToScalarType(const std::string &s)\n\n"},
  {"RemoveUniform", PyvtkUniforms_RemoveUniform, METH_VARARGS,
   "RemoveUniform(self, name:str) -> None\nC++: virtual void RemoveUniform(const char *name)\n\nRemove uniform variable named name\n"},
  {"RemoveAllUniforms", PyvtkUniforms_RemoveAllUniforms, METH_VARARGS,
   "RemoveAllUniforms(self) -> None\nC++: virtual void RemoveAllUniforms()\n\nRemove all uniform variables\n"},
  {"SetUniform", PyvtkUniforms_SetUniform, METH_VARARGS,
   "SetUniform(self, name:str, tt:vtkUniforms.TupleType,\n    nbComponents:int, value:(int, ...)) -> None\nC++: virtual void SetUniform(const char *name,\n    vtkUniforms::TupleType tt, int nbComponents,\n    const std::vector<int> &value)\nSetUniform(self, name:str, tt:vtkUniforms.TupleType,\n    nbComponents:int, value:(float, ...)) -> None\nC++: virtual void SetUniform(const char *name,\n    vtkUniforms::TupleType tt, int nbComponents,\n    const std::vector<float> &value)\n\nGeneric setters and getter. Set and Get the value of uniform\nvariable name, with TupleType tt, number of components\nnbComponents and values stored invalue. These functions simplify\nio of uniforms\n"},
  {"GetUniform", PyvtkUniforms_GetUniform, METH_VARARGS,
   "GetUniform(self, name:str, value:[int, ...]) -> bool\nC++: virtual bool GetUniform(const char *name,\n    std::vector<int> &value)\nGetUniform(self, name:str, value:[float, ...]) -> bool\nC++: virtual bool GetUniform(const char *name,\n    std::vector<float> &value)\n\n"},
  {"SetUniformi", PyvtkUniforms_SetUniformi, METH_VARARGS,
   "SetUniformi(self, name:str, v:int) -> None\nC++: virtual void SetUniformi(const char *name, int v)\n\nSet the name uniform value to v.\n"},
  {"SetUniformf", PyvtkUniforms_SetUniformf, METH_VARARGS,
   "SetUniformf(self, name:str, v:float) -> None\nC++: virtual void SetUniformf(const char *name, float v)\n\n"},
  {"SetUniform2i", PyvtkUniforms_SetUniform2i, METH_VARARGS,
   "SetUniform2i(self, name:str, v:(int, int)) -> None\nC++: virtual void SetUniform2i(const char *name, const int v[2])\n\n"},
  {"SetUniform2f", PyvtkUniforms_SetUniform2f, METH_VARARGS,
   "SetUniform2f(self, name:str, v:(float, float)) -> None\nC++: virtual void SetUniform2f(const char *name, const float v[2])\n\n"},
  {"SetUniform4f", PyvtkUniforms_SetUniform4f, METH_VARARGS,
   "SetUniform4f(self, name:str, v:(float, float, float, float))\n    -> None\nC++: virtual void SetUniform4f(const char *name, const float v[4])\n\n"},
  {"SetUniformMatrix3x3", PyvtkUniforms_SetUniformMatrix3x3, METH_VARARGS,
   "SetUniformMatrix3x3(self, name:str, v:[float, ...]) -> None\nC++: virtual void SetUniformMatrix3x3(const char *name, float *v)\n\n"},
  {"SetUniformMatrix4x4", PyvtkUniforms_SetUniformMatrix4x4, METH_VARARGS,
   "SetUniformMatrix4x4(self, name:str, v:[float, ...]) -> None\nC++: virtual void SetUniformMatrix4x4(const char *name, float *v)\n\n"},
  {"SetUniform1iv", PyvtkUniforms_SetUniform1iv, METH_VARARGS,
   "SetUniform1iv(self, name:str, count:int, f:(int, ...)) -> None\nC++: virtual void SetUniform1iv(const char *name, int count,\n    const int *f)\n\nSet the name uniform array to f with count elements\n"},
  {"SetUniform1fv", PyvtkUniforms_SetUniform1fv, METH_VARARGS,
   "SetUniform1fv(self, name:str, count:int, f:(float, ...)) -> None\nC++: virtual void SetUniform1fv(const char *name, int count,\n    const float *f)\n\n"},
  {"SetUniformMatrix4x4v", PyvtkUniforms_SetUniformMatrix4x4v, METH_VARARGS,
   "SetUniformMatrix4x4v(self, name:str, count:int, v:[float, ...])\n    -> None\nC++: virtual void SetUniformMatrix4x4v(const char *name,\n    int count, float *v)\n\n"},
  {"SetUniform3f", PyvtkUniforms_SetUniform3f, METH_VARARGS,
   "SetUniform3f(self, name:str, v:(float, float, float)) -> None\nC++: virtual void SetUniform3f(const char *name,\n    const double v[3])\n\nSet the name uniform to v. The following are convenience\nfunctions and do not reflect the way the data is stored and sent\nto OpenGL. Data is converted to match one of the basic supported\ntypes\n"},
  {"SetUniform3uc", PyvtkUniforms_SetUniform3uc, METH_VARARGS,
   "SetUniform3uc(self, name:str, v:(int, int, int)) -> None\nC++: virtual void SetUniform3uc(const char *name,\n    const unsigned char v[3])\n\n"},
  {"SetUniform4uc", PyvtkUniforms_SetUniform4uc, METH_VARARGS,
   "SetUniform4uc(self, name:str, v:(int, int, int, int)) -> None\nC++: virtual void SetUniform4uc(const char *name,\n    const unsigned char v[4])\n\n"},
  {"SetUniformMatrix", PyvtkUniforms_SetUniformMatrix, METH_VARARGS,
   "SetUniformMatrix(self, name:str, v:vtkMatrix3x3) -> None\nC++: virtual void SetUniformMatrix(const char *name,\n    vtkMatrix3x3 *v)\nSetUniformMatrix(self, name:str, v:vtkMatrix4x4) -> None\nC++: virtual void SetUniformMatrix(const char *name,\n    vtkMatrix4x4 *v)\n\n"},
  {"GetUniformi", PyvtkUniforms_GetUniformi, METH_VARARGS,
   "GetUniformi(self, name:str, v:int) -> bool\nC++: virtual bool GetUniformi(const char *name, int &v)\n\nGet the name uniform value. Returns true on success.\n"},
  {"GetUniformf", PyvtkUniforms_GetUniformf, METH_VARARGS,
   "GetUniformf(self, name:str, v:float) -> bool\nC++: virtual bool GetUniformf(const char *name, float &v)\n\n"},
  {"GetUniform2i", PyvtkUniforms_GetUniform2i, METH_VARARGS,
   "GetUniform2i(self, name:str, v:[int, int]) -> bool\nC++: virtual bool GetUniform2i(const char *name, int v[2])\n\n"},
  {"GetUniform2f", PyvtkUniforms_GetUniform2f, METH_VARARGS,
   "GetUniform2f(self, name:str, v:[float, float]) -> bool\nC++: virtual bool GetUniform2f(const char *name, float v[2])\n\n"},
  {"GetUniform4f", PyvtkUniforms_GetUniform4f, METH_VARARGS,
   "GetUniform4f(self, name:str, v:[float, float, float, float])\n    -> bool\nC++: virtual bool GetUniform4f(const char *name, float v[4])\n\n"},
  {"GetUniformMatrix3x3", PyvtkUniforms_GetUniformMatrix3x3, METH_VARARGS,
   "GetUniformMatrix3x3(self, name:str, v:[float, ...]) -> bool\nC++: virtual bool GetUniformMatrix3x3(const char *name, float *v)\n\n"},
  {"GetUniformMatrix4x4", PyvtkUniforms_GetUniformMatrix4x4, METH_VARARGS,
   "GetUniformMatrix4x4(self, name:str, v:[float, ...]) -> bool\nC++: virtual bool GetUniformMatrix4x4(const char *name, float *v)\n\n"},
  {"GetUniform3f", PyvtkUniforms_GetUniform3f, METH_VARARGS,
   "GetUniform3f(self, name:str, v:[float, float, float]) -> bool\nC++: virtual bool GetUniform3f(const char *name, double v[3])\n\nGet the name uniform to v. The following are convenience\nfunctions and do not reflect the way the data is stored and sent\nto OpenGL. Data is converted from one of the basic supported\ntypes\n"},
  {"GetUniform3uc", PyvtkUniforms_GetUniform3uc, METH_VARARGS,
   "GetUniform3uc(self, name:str, v:[int, int, int]) -> bool\nC++: virtual bool GetUniform3uc(const char *name,\n    unsigned char v[3])\n\n"},
  {"GetUniform4uc", PyvtkUniforms_GetUniform4uc, METH_VARARGS,
   "GetUniform4uc(self, name:str, v:[int, int, int, int]) -> bool\nC++: virtual bool GetUniform4uc(const char *name,\n    unsigned char v[4])\n\n"},
  {"GetUniformMatrix", PyvtkUniforms_GetUniformMatrix, METH_VARARGS,
   "GetUniformMatrix(self, name:str, v:vtkMatrix3x3) -> bool\nC++: virtual bool GetUniformMatrix(const char *name,\n    vtkMatrix3x3 *v)\nGetUniformMatrix(self, name:str, v:vtkMatrix4x4) -> bool\nC++: virtual bool GetUniformMatrix(const char *name,\n    vtkMatrix4x4 *v)\n\n"},
  {"GetUniform1iv", PyvtkUniforms_GetUniform1iv, METH_VARARGS,
   "GetUniform1iv(self, name:str, f:[int, ...]) -> bool\nC++: virtual bool GetUniform1iv(const char *name,\n    std::vector<int> &f)\n\nGet the name uniform vector to f with.\n"},
  {"GetUniform1fv", PyvtkUniforms_GetUniform1fv, METH_VARARGS,
   "GetUniform1fv(self, name:str, f:[float, ...]) -> bool\nC++: virtual bool GetUniform1fv(const char *name,\n    std::vector<float> &f)\n\n"},
  {"GetUniform2fv", PyvtkUniforms_GetUniform2fv, METH_VARARGS,
   "GetUniform2fv(self, name:str, f:[float, ...]) -> bool\nC++: virtual bool GetUniform2fv(const char *name,\n    std::vector<float> &f)\n\n"},
  {"GetUniform3fv", PyvtkUniforms_GetUniform3fv, METH_VARARGS,
   "GetUniform3fv(self, name:str, f:[float, ...]) -> bool\nC++: virtual bool GetUniform3fv(const char *name,\n    std::vector<float> &f)\n\n"},
  {"GetUniform4fv", PyvtkUniforms_GetUniform4fv, METH_VARARGS,
   "GetUniform4fv(self, name:str, f:[float, ...]) -> bool\nC++: virtual bool GetUniform4fv(const char *name,\n    std::vector<float> &f)\n\n"},
  {"GetUniformMatrix4x4v", PyvtkUniforms_GetUniformMatrix4x4v, METH_VARARGS,
   "GetUniformMatrix4x4v(self, name:str, f:[float, ...]) -> bool\nC++: virtual bool GetUniformMatrix4x4v(const char *name,\n    std::vector<float> &f)\n\n"},
  {"GetNumberOfUniforms", PyvtkUniforms_GetNumberOfUniforms, METH_VARARGS,
   "GetNumberOfUniforms(self) -> int\nC++: virtual int GetNumberOfUniforms()\n\nGet number of all uniforms stored in this class\n"},
  {"GetNthUniformName", PyvtkUniforms_GetNthUniformName, METH_VARARGS,
   "GetNthUniformName(self, uniformIndex:int) -> str\nC++: virtual const char *GetNthUniformName(vtkIdType uniformIndex)\n\nGet number of all uniforms stored in this class. Valid range is\nbetween 0 and GetNumberOfUniforms() - 1.\n"},
  {"GetUniformScalarType", PyvtkUniforms_GetUniformScalarType, METH_VARARGS,
   "GetUniformScalarType(self, name:str) -> int\nC++: virtual int GetUniformScalarType(const char *name)\n\nGet type of scalars stored in uniform name\n"},
  {"GetUniformTupleType", PyvtkUniforms_GetUniformTupleType, METH_VARARGS,
   "GetUniformTupleType(self, name:str) -> TupleType\nC++: virtual TupleType GetUniformTupleType(const char *name)\n\nGet the tuple type stored in uniform name. This can be a scalar,\na vector of a matrix.\n"},
  {"GetUniformNumberOfComponents", PyvtkUniforms_GetUniformNumberOfComponents, METH_VARARGS,
   "GetUniformNumberOfComponents(self, name:str) -> int\nC++: virtual int GetUniformNumberOfComponents(const char *name)\n\nGet the number of components stored in each tuple of uniform\nname. for example, a uniform with tuples of matrix type and 9\ncomponents contains 3x3 matrices\n"},
  {"GetUniformNumberOfTuples", PyvtkUniforms_GetUniformNumberOfTuples, METH_VARARGS,
   "GetUniformNumberOfTuples(self, name:str) -> int\nC++: virtual int GetUniformNumberOfTuples(const char *name)\n\nNumber of tuples of uniform name that contains a variable-size\nvector. For example, for 3 components uniforms of type vector,\nthis is the number of triplets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUniforms_Doc =
  "vtkUniforms - helper class to set custom uniform variables in GPU\nshaders.\n\n"
  "Superclass: vtkObject\n\n"
  "This class implements a generic mechanism to declare and set the\n"
  "value of custom uniform variables to be used in GPU shader programs\n"
  "used by mappers. It allows users who specify custom shader code for\n"
  "mappers to change the value of the variable they define without\n"
  "triggering a costly rebuild of the shader. This class is used mostly\n"
  "as an interface and the implementation is found in graphics api\n"
  "specific derived classes (e.g.: vtkOpenGLUniforms).\n\n"
  "@sa\n"
  "vtkOpenGLUniforms vtkShaderProperty\n\n"
  "@par Thanks: Developed by Simon Drouin (sdrouin2@bwh.harvard.edu) at\n"
  "Brigham and Women's Hospital.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUniforms_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkUniforms", // tp_name
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
  PyvtkUniforms_Doc, // tp_doc
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

static vtkObjectBase *PyvtkUniforms_StaticNew()
{
  return vtkUniforms::New();
}

PyObject *PyvtkUniforms_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUniforms_Type, PyvtkUniforms_Methods,
    "vtkUniforms",
 &PyvtkUniforms_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkUniforms_TupleType_Type);
  PyVTKEnum_Add(&PyvtkUniforms_TupleType_Type, "vtkUniforms.TupleType");

  o = (PyObject *)&PyvtkUniforms_TupleType_Type;
  if (PyDict_SetItemString(d, "TupleType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkUniforms::TupleType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "TupleTypeInvalid", vtkUniforms::TupleTypeInvalid },
        { "TupleTypeScalar", vtkUniforms::TupleTypeScalar },
        { "TupleTypeVector", vtkUniforms::TupleTypeVector },
        { "TupleTypeMatrix", vtkUniforms::TupleTypeMatrix },
        { "NumberOfTupleTypes", vtkUniforms::NumberOfTupleTypes },
      };

    o = PyvtkUniforms_TupleType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUniforms(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUniforms_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUniforms", o) != 0)
  {
    Py_DECREF(o);
  }

}

