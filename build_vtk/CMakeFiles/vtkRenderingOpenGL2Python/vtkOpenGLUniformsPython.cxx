// python wrapper for vtkOpenGLUniforms
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
#include "vtkOpenGLUniforms.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLUniforms(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLUniforms_ClassNew(); }


static PyObject *
PyvtkOpenGLUniforms_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLUniforms::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLUniforms::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLUniforms *tempr = vtkOpenGLUniforms::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLUniforms *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLUniforms::NewInstance());

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
PyvtkOpenGLUniforms_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLUniforms::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLUniforms::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetDeclarations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeclarations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetDeclarations() :
      op->vtkOpenGLUniforms::GetDeclarations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  vtkShaderProgram *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProgram"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetUniforms(temp0) :
      op->vtkOpenGLUniforms::SetUniforms(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetUniformListMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformListMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetUniformListMTime() :
      op->vtkOpenGLUniforms::GetUniformListMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_RemoveUniform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveUniform(temp0);
    }
    else
    {
      op->vtkOpenGLUniforms::RemoveUniform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_RemoveAllUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllUniforms();
    }
    else
    {
      op->vtkOpenGLUniforms::RemoveAllUniforms();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkUniforms::TupleType temp1;
  int temp2;
  std::vector<int> temp3(ap.GetArgSize(3));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkUniforms.TupleType") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3.data(), temp3.size()))
  {
    if (ap.IsBound())
    {
      op->SetUniform(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLUniforms_SetUniform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkUniforms::TupleType temp1;
  int temp2;
  std::vector<float> temp3(ap.GetArgSize(3));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetEnumValue(temp1, "vtkUniforms.TupleType") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3.data(), temp3.size()))
  {
    if (ap.IsBound())
    {
      op->SetUniform(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLUniforms_SetUniform_Methods[] = {
  {"SetUniform", PyvtkOpenGLUniforms_SetUniform_s1, METH_VARARGS,
   "@zEiT vtkUniforms.TupleType i"},
  {"SetUniform", PyvtkOpenGLUniforms_SetUniform_s2, METH_VARARGS,
   "@zEiT vtkUniforms.TupleType f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLUniforms_SetUniform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLUniforms_SetUniform_Methods;
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
PyvtkOpenGLUniforms_GetUniform_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform(temp0, temp1));

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

static PyMethodDef PyvtkOpenGLUniforms_GetUniform_Methods[] = {
  {"GetUniform", PyvtkOpenGLUniforms_GetUniform_s1, METH_VARARGS,
   "@zT i"},
  {"GetUniform", PyvtkOpenGLUniforms_GetUniform_s2, METH_VARARGS,
   "@zT f"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLUniforms_GetUniform(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLUniforms_GetUniform_Methods;
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
PyvtkOpenGLUniforms_SetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUniformi(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformi(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetUniformf(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformf(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform2i(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2i");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform2i(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform2i(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform2f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform2f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  float temp1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform2f(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform2f(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform4f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform4f(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform4f(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniformMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetUniformMatrix3x3(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformMatrix3x3(temp0, temp1);
    }

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
PyvtkOpenGLUniforms_SetUniformMatrix4x4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetUniformMatrix4x4(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformMatrix4x4(temp0, temp1);
    }

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
PyvtkOpenGLUniforms_SetUniform1iv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1iv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetUniform1iv(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform1iv(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform1fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform1fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(size2);
  float *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    if (ap.IsBound())
    {
      op->SetUniform1fv(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform1fv(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniformMatrix4x4v(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix4x4v");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->SetUniformMatrix4x4v(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformMatrix4x4v(temp0, temp1, temp2);
    }

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
PyvtkOpenGLUniforms_SetUniform3f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform3f(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform3f(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform3uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform3uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  unsigned char temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform3uc(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform3uc(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniform4uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniform4uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  unsigned char temp1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetUniform4uc(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniform4uc(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_SetUniformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetUniformMatrix(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLUniforms_SetUniformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetUniformMatrix(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLUniforms::SetUniformMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLUniforms_SetUniformMatrix_Methods[] = {
  {"SetUniformMatrix", PyvtkOpenGLUniforms_SetUniformMatrix_s1, METH_VARARGS,
   "@zV *vtkMatrix3x3"},
  {"SetUniformMatrix", PyvtkOpenGLUniforms_SetUniformMatrix_s2, METH_VARARGS,
   "@zV *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLUniforms_SetUniformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLUniforms_SetUniformMatrix_Methods;
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
PyvtkOpenGLUniforms_GetUniformi(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformi");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniformi(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformi(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniformf(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformf");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniformf(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformf(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform2i(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2i");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  int temp1[2];
  int save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform2i(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform2i(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform2f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 2;
  float temp1[2];
  float save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform2f(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform2f(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform4f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform4f(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform4f(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniformMatrix3x3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix3x3");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniformMatrix3x3(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformMatrix3x3(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniformMatrix4x4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix4x4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniformMatrix4x4(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformMatrix4x4(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform3f(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3f");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform3f(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform3f(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform3uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 3;
  unsigned char temp1[3];
  unsigned char save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform3uc(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform3uc(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform4uc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4uc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  unsigned char temp1[4];
  unsigned char save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    bool tempr = (ap.IsBound() ?
      op->GetUniform4uc(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform4uc(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniformMatrix_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix3x3 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix3x3"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniformMatrix(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformMatrix(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLUniforms_GetUniformMatrix_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniformMatrix(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformMatrix(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLUniforms_GetUniformMatrix_Methods[] = {
  {"GetUniformMatrix", PyvtkOpenGLUniforms_GetUniformMatrix_s1, METH_VARARGS,
   "@zV *vtkMatrix3x3"},
  {"GetUniformMatrix", PyvtkOpenGLUniforms_GetUniformMatrix_s2, METH_VARARGS,
   "@zV *vtkMatrix4x4"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkOpenGLUniforms_GetUniformMatrix(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkOpenGLUniforms_GetUniformMatrix_Methods;
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
PyvtkOpenGLUniforms_GetUniform1iv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform1iv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<int> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform1iv(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform1iv(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform1fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform1fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform1fv(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform1fv(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform2fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform2fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform2fv(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform2fv(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform3fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform3fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform3fv(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform3fv(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniform4fv(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniform4fv");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniform4fv(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniform4fv(temp0, temp1));

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
PyvtkOpenGLUniforms_GetUniformMatrix4x4v(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformMatrix4x4v");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  std::vector<float> temp1(ap.GetArgSize(1));
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1.data(), temp1.size()))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUniformMatrix4x4v(temp0, temp1) :
      op->vtkOpenGLUniforms::GetUniformMatrix4x4v(temp0, temp1));

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
PyvtkOpenGLUniforms_GetNumberOfUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfUniforms() :
      op->vtkOpenGLUniforms::GetNumberOfUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetNthUniformName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthUniformName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNthUniformName(temp0) :
      op->vtkOpenGLUniforms::GetNthUniformName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetUniformScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniformScalarType(temp0) :
      op->vtkOpenGLUniforms::GetUniformScalarType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetUniformNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniformNumberOfComponents(temp0) :
      op->vtkOpenGLUniforms::GetUniformNumberOfComponents(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLUniforms_GetUniformNumberOfTuples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUniformNumberOfTuples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLUniforms *op = static_cast<vtkOpenGLUniforms *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUniformNumberOfTuples(temp0) :
      op->vtkOpenGLUniforms::GetUniformNumberOfTuples(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLUniforms_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLUniforms_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLUniforms_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLUniforms_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLUniforms\nC++: static vtkOpenGLUniforms *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLUniforms_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLUniforms\nC++: vtkOpenGLUniforms *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLUniforms_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLUniforms_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDeclarations", PyvtkOpenGLUniforms_GetDeclarations, METH_VARARGS,
   "GetDeclarations(self) -> str\nC++: std::string GetDeclarations()\n\nBuild a string containing the GLSL declaration of all stored\nuniform variables. This is typically called by mappers to compose\nthe complete shader program.\n"},
  {"SetUniforms", PyvtkOpenGLUniforms_SetUniforms, METH_VARARGS,
   "SetUniforms(self, p:vtkShaderProgram) -> bool\nC++: bool SetUniforms(vtkShaderProgram *p)\n\nSet all the stored uniform variables values in the shader program\np. This is called when the shader is bound.\n"},
  {"GetUniformListMTime", PyvtkOpenGLUniforms_GetUniformListMTime, METH_VARARGS,
   "GetUniformListMTime(self) -> int\nC++: vtkMTimeType GetUniformListMTime() override;\n\nGet modified time of the list of uniform variables, which is\ntypically used to check whether the shader needs to be\nrecompiled. The time stamp is not affected by the modification of\nthe value of an existing variable as then no shader recompilation\nis needed.\n"},
  {"RemoveUniform", PyvtkOpenGLUniforms_RemoveUniform, METH_VARARGS,
   "RemoveUniform(self, name:str) -> None\nC++: void RemoveUniform(const char *name) override;\n\nRemove uniform variable named name\n"},
  {"RemoveAllUniforms", PyvtkOpenGLUniforms_RemoveAllUniforms, METH_VARARGS,
   "RemoveAllUniforms(self) -> None\nC++: void RemoveAllUniforms() override;\n\nRemove all uniform variables\n"},
  {"SetUniform", PyvtkOpenGLUniforms_SetUniform, METH_VARARGS,
   "SetUniform(self, name:str, tt:vtkUniforms.TupleType,\n    nbComponents:int, value:(int, ...)) -> None\nC++: void SetUniform(const char *name, vtkUniforms::TupleType tt,\n    int nbComponents, const std::vector<int> &value) override;\nSetUniform(self, name:str, tt:vtkUniforms.TupleType,\n    nbComponents:int, value:(float, ...)) -> None\nC++: void SetUniform(const char *name, vtkUniforms::TupleType tt,\n    int nbComponents, const std::vector<float> &value) override;\n\nGeneric setters and getter. Set and Get the value of uniform\nvariable name, with TupleType tt, number of components\nnbComponents and values stored invalue. These functions simplify\nio of uniforms\n"},
  {"GetUniform", PyvtkOpenGLUniforms_GetUniform, METH_VARARGS,
   "GetUniform(self, name:str, value:[int, ...]) -> bool\nC++: bool GetUniform(const char *name, std::vector<int> &value)\n    override;\nGetUniform(self, name:str, value:[float, ...]) -> bool\nC++: bool GetUniform(const char *name, std::vector<float> &value)\n    override;\n\n"},
  {"SetUniformi", PyvtkOpenGLUniforms_SetUniformi, METH_VARARGS,
   "SetUniformi(self, name:str, v:int) -> None\nC++: void SetUniformi(const char *name, int v) override;\n\nSet the name uniform value to v.\n"},
  {"SetUniformf", PyvtkOpenGLUniforms_SetUniformf, METH_VARARGS,
   "SetUniformf(self, name:str, v:float) -> None\nC++: void SetUniformf(const char *name, float v) override;\n\n"},
  {"SetUniform2i", PyvtkOpenGLUniforms_SetUniform2i, METH_VARARGS,
   "SetUniform2i(self, name:str, v:(int, int)) -> None\nC++: void SetUniform2i(const char *name, const int v[2]) override;\n\n"},
  {"SetUniform2f", PyvtkOpenGLUniforms_SetUniform2f, METH_VARARGS,
   "SetUniform2f(self, name:str, v:(float, float)) -> None\nC++: void SetUniform2f(const char *name, const float v[2])\n    override;\n\n"},
  {"SetUniform4f", PyvtkOpenGLUniforms_SetUniform4f, METH_VARARGS,
   "SetUniform4f(self, name:str, v:(float, float, float, float))\n    -> None\nC++: void SetUniform4f(const char *name, const float v[4])\n    override;\n\n"},
  {"SetUniformMatrix3x3", PyvtkOpenGLUniforms_SetUniformMatrix3x3, METH_VARARGS,
   "SetUniformMatrix3x3(self, name:str, v:[float, ...]) -> None\nC++: void SetUniformMatrix3x3(const char *name, float *v)\n    override;\n\n"},
  {"SetUniformMatrix4x4", PyvtkOpenGLUniforms_SetUniformMatrix4x4, METH_VARARGS,
   "SetUniformMatrix4x4(self, name:str, v:[float, ...]) -> None\nC++: void SetUniformMatrix4x4(const char *name, float *v)\n    override;\n\n"},
  {"SetUniform1iv", PyvtkOpenGLUniforms_SetUniform1iv, METH_VARARGS,
   "SetUniform1iv(self, name:str, count:int, f:(int, ...)) -> None\nC++: void SetUniform1iv(const char *name, int count, const int *f)\n     override;\n\nSet the name uniform array to f with count elements\n"},
  {"SetUniform1fv", PyvtkOpenGLUniforms_SetUniform1fv, METH_VARARGS,
   "SetUniform1fv(self, name:str, count:int, f:(float, ...)) -> None\nC++: void SetUniform1fv(const char *name, int count,\n    const float *f) override;\n\n"},
  {"SetUniformMatrix4x4v", PyvtkOpenGLUniforms_SetUniformMatrix4x4v, METH_VARARGS,
   "SetUniformMatrix4x4v(self, name:str, count:int, v:[float, ...])\n    -> None\nC++: void SetUniformMatrix4x4v(const char *name, int count,\n    float *v) override;\n\n"},
  {"SetUniform3f", PyvtkOpenGLUniforms_SetUniform3f, METH_VARARGS,
   "SetUniform3f(self, name:str, v:(float, float, float)) -> None\nC++: void SetUniform3f(const char *name, const double v[3])\n    override;\n\nSet the name uniform to v. The following are convenience\nfunctions and do not reflect the way the data is stored and sent\nto OpenGL. Data is converted to match one of the basic supported\ntypes\n"},
  {"SetUniform3uc", PyvtkOpenGLUniforms_SetUniform3uc, METH_VARARGS,
   "SetUniform3uc(self, name:str, v:(int, int, int)) -> None\nC++: void SetUniform3uc(const char *name,\n    const unsigned char v[3]) override;\n\n"},
  {"SetUniform4uc", PyvtkOpenGLUniforms_SetUniform4uc, METH_VARARGS,
   "SetUniform4uc(self, name:str, v:(int, int, int, int)) -> None\nC++: void SetUniform4uc(const char *name,\n    const unsigned char v[4]) override;\n\n"},
  {"SetUniformMatrix", PyvtkOpenGLUniforms_SetUniformMatrix, METH_VARARGS,
   "SetUniformMatrix(self, name:str, v:vtkMatrix3x3) -> None\nC++: void SetUniformMatrix(const char *name, vtkMatrix3x3 *v)\n    override;\nSetUniformMatrix(self, name:str, v:vtkMatrix4x4) -> None\nC++: void SetUniformMatrix(const char *name, vtkMatrix4x4 *v)\n    override;\n\n"},
  {"GetUniformi", PyvtkOpenGLUniforms_GetUniformi, METH_VARARGS,
   "GetUniformi(self, name:str, v:int) -> bool\nC++: bool GetUniformi(const char *name, int &v) override;\n\nGet the name uniform value. Returns true on success.\n"},
  {"GetUniformf", PyvtkOpenGLUniforms_GetUniformf, METH_VARARGS,
   "GetUniformf(self, name:str, v:float) -> bool\nC++: bool GetUniformf(const char *name, float &v) override;\n\n"},
  {"GetUniform2i", PyvtkOpenGLUniforms_GetUniform2i, METH_VARARGS,
   "GetUniform2i(self, name:str, v:[int, int]) -> bool\nC++: bool GetUniform2i(const char *name, int v[2]) override;\n\n"},
  {"GetUniform2f", PyvtkOpenGLUniforms_GetUniform2f, METH_VARARGS,
   "GetUniform2f(self, name:str, v:[float, float]) -> bool\nC++: bool GetUniform2f(const char *name, float v[2]) override;\n\n"},
  {"GetUniform4f", PyvtkOpenGLUniforms_GetUniform4f, METH_VARARGS,
   "GetUniform4f(self, name:str, v:[float, float, float, float])\n    -> bool\nC++: bool GetUniform4f(const char *name, float v[4]) override;\n\n"},
  {"GetUniformMatrix3x3", PyvtkOpenGLUniforms_GetUniformMatrix3x3, METH_VARARGS,
   "GetUniformMatrix3x3(self, name:str, v:[float, ...]) -> bool\nC++: bool GetUniformMatrix3x3(const char *name, float *v)\n    override;\n\n"},
  {"GetUniformMatrix4x4", PyvtkOpenGLUniforms_GetUniformMatrix4x4, METH_VARARGS,
   "GetUniformMatrix4x4(self, name:str, v:[float, ...]) -> bool\nC++: bool GetUniformMatrix4x4(const char *name, float *v)\n    override;\n\n"},
  {"GetUniform3f", PyvtkOpenGLUniforms_GetUniform3f, METH_VARARGS,
   "GetUniform3f(self, name:str, v:[float, float, float]) -> bool\nC++: bool GetUniform3f(const char *name, double v[3]) override;\n\nGet the name uniform to v. The following are convenience\nfunctions and do not reflect the way the data is stored and sent\nto OpenGL. Data is converted from one of the basic supported\ntypes\n"},
  {"GetUniform3uc", PyvtkOpenGLUniforms_GetUniform3uc, METH_VARARGS,
   "GetUniform3uc(self, name:str, v:[int, int, int]) -> bool\nC++: bool GetUniform3uc(const char *name, unsigned char v[3])\n    override;\n\n"},
  {"GetUniform4uc", PyvtkOpenGLUniforms_GetUniform4uc, METH_VARARGS,
   "GetUniform4uc(self, name:str, v:[int, int, int, int]) -> bool\nC++: bool GetUniform4uc(const char *name, unsigned char v[4])\n    override;\n\n"},
  {"GetUniformMatrix", PyvtkOpenGLUniforms_GetUniformMatrix, METH_VARARGS,
   "GetUniformMatrix(self, name:str, v:vtkMatrix3x3) -> bool\nC++: bool GetUniformMatrix(const char *name, vtkMatrix3x3 *v)\n    override;\nGetUniformMatrix(self, name:str, v:vtkMatrix4x4) -> bool\nC++: bool GetUniformMatrix(const char *name, vtkMatrix4x4 *v)\n    override;\n\n"},
  {"GetUniform1iv", PyvtkOpenGLUniforms_GetUniform1iv, METH_VARARGS,
   "GetUniform1iv(self, name:str, f:[int, ...]) -> bool\nC++: bool GetUniform1iv(const char *name, std::vector<int> &f)\n    override;\n\nGet the name uniform vector to f with.\n"},
  {"GetUniform1fv", PyvtkOpenGLUniforms_GetUniform1fv, METH_VARARGS,
   "GetUniform1fv(self, name:str, f:[float, ...]) -> bool\nC++: bool GetUniform1fv(const char *name, std::vector<float> &f)\n    override;\n\n"},
  {"GetUniform2fv", PyvtkOpenGLUniforms_GetUniform2fv, METH_VARARGS,
   "GetUniform2fv(self, name:str, f:[float, ...]) -> bool\nC++: bool GetUniform2fv(const char *name, std::vector<float> &f)\n    override;\n\n"},
  {"GetUniform3fv", PyvtkOpenGLUniforms_GetUniform3fv, METH_VARARGS,
   "GetUniform3fv(self, name:str, f:[float, ...]) -> bool\nC++: bool GetUniform3fv(const char *name, std::vector<float> &f)\n    override;\n\n"},
  {"GetUniform4fv", PyvtkOpenGLUniforms_GetUniform4fv, METH_VARARGS,
   "GetUniform4fv(self, name:str, f:[float, ...]) -> bool\nC++: bool GetUniform4fv(const char *name, std::vector<float> &f)\n    override;\n\n"},
  {"GetUniformMatrix4x4v", PyvtkOpenGLUniforms_GetUniformMatrix4x4v, METH_VARARGS,
   "GetUniformMatrix4x4v(self, name:str, f:[float, ...]) -> bool\nC++: bool GetUniformMatrix4x4v(const char *name,\n    std::vector<float> &f) override;\n\n"},
  {"GetNumberOfUniforms", PyvtkOpenGLUniforms_GetNumberOfUniforms, METH_VARARGS,
   "GetNumberOfUniforms(self) -> int\nC++: int GetNumberOfUniforms() override;\n\nGet number of all uniforms stored in this class\n"},
  {"GetNthUniformName", PyvtkOpenGLUniforms_GetNthUniformName, METH_VARARGS,
   "GetNthUniformName(self, uniformIndex:int) -> str\nC++: const char *GetNthUniformName(vtkIdType uniformIndex)\n    override;\n\nGet number of all uniforms stored in this class. Valid range is\nbetween 0 and GetNumberOfUniforms() - 1.\n"},
  {"GetUniformScalarType", PyvtkOpenGLUniforms_GetUniformScalarType, METH_VARARGS,
   "GetUniformScalarType(self, name:str) -> int\nC++: int GetUniformScalarType(const char *name) override;\n\nGet type of scalars stored in uniform name\n"},
  {"GetUniformNumberOfComponents", PyvtkOpenGLUniforms_GetUniformNumberOfComponents, METH_VARARGS,
   "GetUniformNumberOfComponents(self, name:str) -> int\nC++: int GetUniformNumberOfComponents(const char *name) override;\n\nGet the number of components stored in each tuple of uniform\nname. for example, a uniform with tuples of matrix type and 9\ncomponents contains 3x3 matrices\n"},
  {"GetUniformNumberOfTuples", PyvtkOpenGLUniforms_GetUniformNumberOfTuples, METH_VARARGS,
   "GetUniformNumberOfTuples(self, name:str) -> int\nC++: int GetUniformNumberOfTuples(const char *name) override;\n\nGet length of a uniform name that contains a variable-size\nvector. Size includes number of tuples. For example, 3fv returns\n3 x number of triplets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLUniforms_Doc =
  "vtkOpenGLUniforms - helper class to set custom uniform variables in\nGLSL shaders.\n\n"
  "Superclass: vtkUniforms\n\n"
  "This class implements all SetUniform* functions supported by\n"
  "vtkShaderProgram but instead of directly calling the underlying\n"
  "OpenGL functions, it caches the name and value of the variable and\n"
  "provides a mechanism for client mappers to set all cached variables\n"
  "at once in a generic way.\n\n"
  "The basic types of GLSL uniform variables supported by the class are\n"
  "the following: int, float, vec2i, vec3, vec4, mat3, mat4, int[],\n"
  "float[], vec2i[], vec3[], vec4[], mat4[]. All other types supported\n"
  "by Set* functions undergo the same type conversions implemented in\n"
  "vtkShaderProgram.\n\n"
  "@par Thanks: Developed by Simon Drouin (sdrouin2@bwh.harvard.edu) at\n"
  "Brigham and Women's Hospital.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLUniforms_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLUniforms", // tp_name
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
  PyvtkOpenGLUniforms_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLUniforms_StaticNew()
{
  return vtkOpenGLUniforms::New();
}

PyObject *PyvtkOpenGLUniforms_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLUniforms_Type, PyvtkOpenGLUniforms_Methods,
    "vtkOpenGLUniforms",
 &PyvtkOpenGLUniforms_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUniforms");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLUniforms(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLUniforms_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLUniforms", o) != 0)
  {
    Py_DECREF(o);
  }

}

