// python wrapper for vtkFunctionParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFunctionParser.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFunctionParser(PyObject *dict); }
extern "C" { PyObject *PyvtkFunctionParser_ClassNew(); }


static PyObject *
PyvtkFunctionParser_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFunctionParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFunctionParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFunctionParser *tempr = vtkFunctionParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFunctionParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFunctionParser::NewInstance());

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
PyvtkFunctionParser_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFunctionParser::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFunctionParser::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkFunctionParser::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunction(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkFunctionParser::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsScalarResult() :
      op->vtkFunctionParser::IsScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_IsVectorResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsVectorResult() :
      op->vtkFunctionParser::IsVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarResult() :
      op->vtkFunctionParser::GetScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorResult_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorResult() :
      op->vtkFunctionParser::GetVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorResult_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetVectorResult(temp0);
    }
    else
    {
      op->vtkFunctionParser::GetVectorResult(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorResult(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkFunctionParser_GetVectorResult_s1(self, args);
    case 1:
      return PyvtkFunctionParser_GetVectorResult_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorResult");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScalarVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetScalarVariableValue_Methods[] = {
  {"SetScalarVariableValue", PyvtkFunctionParser_SetScalarVariableValue_s1, METH_VARARGS,
   "@sd"},
  {"SetScalarVariableValue", PyvtkFunctionParser_SetScalarVariableValue_s2, METH_VARARGS,
   "@id"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_SetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScalarVariableValue");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetScalarVariableValue_Methods[] = {
  {"GetScalarVariableValue", PyvtkFunctionParser_GetScalarVariableValue_s1, METH_VARARGS,
   "@s"},
  {"GetScalarVariableValue", PyvtkFunctionParser_GetScalarVariableValue_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetScalarVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarVariableValue");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::SetVectorVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_SetVectorVariableValue_Methods[] = {
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue_s1, METH_VARARGS,
   "@sddd"},
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue_s2, METH_VARARGS,
   "@sP *d"},
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue_s3, METH_VARARGS,
   "@iddd"},
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_SetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_SetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVectorVariableValue");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
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
PyvtkFunctionParser_GetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkFunctionParser::GetVectorVariableValue(temp0, temp1);
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

static PyMethodDef PyvtkFunctionParser_GetVectorVariableValue_Methods[] = {
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue_s1, METH_VARARGS,
   "@s"},
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue_s2, METH_VARARGS,
   "@sP *d"},
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue_s3, METH_VARARGS,
   "@i"},
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetVectorVariableValue_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorVariableValue");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_GetNumberOfScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarVariables() :
      op->vtkFunctionParser::GetNumberOfScalarVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVariableIndex(temp0) :
      op->vtkFunctionParser::GetScalarVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetNumberOfVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorVariables() :
      op->vtkFunctionParser::GetNumberOfVectorVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorVariableIndex(temp0) :
      op->vtkFunctionParser::GetVectorVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkFunctionParser::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkFunctionParser::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetScalarVariableNeeded_Methods[] = {
  {"GetScalarVariableNeeded", PyvtkFunctionParser_GetScalarVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {"GetScalarVariableNeeded", PyvtkFunctionParser_GetScalarVariableNeeded_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetScalarVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetScalarVariableNeeded_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarVariableNeeded");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_GetVectorVariableNeeded_Methods[] = {
  {"GetVectorVariableNeeded", PyvtkFunctionParser_GetVectorVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {"GetVectorVariableNeeded", PyvtkFunctionParser_GetVectorVariableNeeded_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFunctionParser_GetVectorVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkFunctionParser_GetVectorVariableNeeded_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorVariableNeeded");
  return nullptr;
}


static PyObject *
PyvtkFunctionParser_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalarVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVectorVariables();
    }
    else
    {
      op->vtkFunctionParser::RemoveVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceInvalidValues(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetReplaceInvalidValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkFunctionParser::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOn();
    }
    else
    {
      op->vtkFunctionParser::ReplaceInvalidValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOff();
    }
    else
    {
      op->vtkFunctionParser::ReplaceInvalidValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplacementValue(temp0);
    }
    else
    {
      op->vtkFunctionParser::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkFunctionParser::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFunctionParser_InvalidateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFunctionParser *op = static_cast<vtkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateFunction();
    }
    else
    {
      op->vtkFunctionParser::InvalidateFunction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkFunctionParser_Methods[] = {
  {"IsTypeOf", PyvtkFunctionParser_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFunctionParser_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFunctionParser_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFunctionParser\nC++: static vtkFunctionParser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFunctionParser_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFunctionParser\nC++: vtkFunctionParser *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFunctionParser_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFunctionParser_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkFunctionParser_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn parser's MTime\n"},
  {"SetFunction", PyvtkFunctionParser_SetFunction, METH_VARARGS,
   "SetFunction(self, function:str) -> None\nC++: void SetFunction(const char *function)\n\nSet/Get input string to evaluate.\n"},
  {"GetFunction", PyvtkFunctionParser_GetFunction, METH_VARARGS,
   "GetFunction(self) -> str\nC++: virtual char *GetFunction()\n\n"},
  {"IsScalarResult", PyvtkFunctionParser_IsScalarResult, METH_VARARGS,
   "IsScalarResult(self) -> int\nC++: int IsScalarResult()\n\nCheck whether the result is a scalar result.  If it isn't, then\neither the result is a vector or an error has occurred.\n"},
  {"IsVectorResult", PyvtkFunctionParser_IsVectorResult, METH_VARARGS,
   "IsVectorResult(self) -> int\nC++: int IsVectorResult()\n\nCheck whether the result is a vector result.  If it isn't, then\neither the result is scalar or an error has occurred.\n"},
  {"GetScalarResult", PyvtkFunctionParser_GetScalarResult, METH_VARARGS,
   "GetScalarResult(self) -> float\nC++: double GetScalarResult()\n\nGet a scalar result from evaluating the input function.\n"},
  {"GetVectorResult", PyvtkFunctionParser_GetVectorResult, METH_VARARGS,
   "GetVectorResult(self) -> (float, float, float)\nC++: double *GetVectorResult()\nGetVectorResult(self, result:[float, float, float]) -> None\nC++: void GetVectorResult(double result[3])\n\nGet a vector result from evaluating the input function.\n"},
  {"SetScalarVariableValue", PyvtkFunctionParser_SetScalarVariableValue, METH_VARARGS,
   "SetScalarVariableValue(self, variableName:str, value:float)\n    -> None\nC++: void SetScalarVariableValue(const std::string &variableName,\n    double value)\nSetScalarVariableValue(self, i:int, value:float) -> None\nC++: void SetScalarVariableValue(int i, double value)\n\n"},
  {"GetScalarVariableValue", PyvtkFunctionParser_GetScalarVariableValue, METH_VARARGS,
   "GetScalarVariableValue(self, variableName:str) -> float\nC++: double GetScalarVariableValue(\n    const std::string &variableName)\nGetScalarVariableValue(self, i:int) -> float\nC++: double GetScalarVariableValue(int i)\n\n"},
  {"SetVectorVariableValue", PyvtkFunctionParser_SetVectorVariableValue, METH_VARARGS,
   "SetVectorVariableValue(self, variableName:str, xValue:float,\n    yValue:float, zValue:float) -> None\nC++: void SetVectorVariableValue(const std::string &variableName,\n    double xValue, double yValue, double zValue)\nSetVectorVariableValue(self, variableName:str, values:(float,\n    float, float)) -> None\nC++: void SetVectorVariableValue(const std::string &variableName,\n    const double values[3])\nSetVectorVariableValue(self, i:int, xValue:float, yValue:float,\n    zValue:float) -> None\nC++: void SetVectorVariableValue(int i, double xValue,\n    double yValue, double zValue)\nSetVectorVariableValue(self, i:int, values:(float, float, float))\n    -> None\nC++: void SetVectorVariableValue(int i, const double values[3])\n\n"},
  {"GetVectorVariableValue", PyvtkFunctionParser_GetVectorVariableValue, METH_VARARGS,
   "GetVectorVariableValue(self, variableName:str) -> (float, float,\n    float)\nC++: double *GetVectorVariableValue(\n    const std::string &variableName)\nGetVectorVariableValue(self, variableName:str, value:[float,\n    float, float]) -> None\nC++: void GetVectorVariableValue(const std::string &variableName,\n    double value[3])\nGetVectorVariableValue(self, i:int) -> (float, float, float)\nC++: double *GetVectorVariableValue(int i)\nGetVectorVariableValue(self, i:int, value:[float, float, float])\n    -> None\nC++: void GetVectorVariableValue(int i, double value[3])\n\n"},
  {"GetNumberOfScalarVariables", PyvtkFunctionParser_GetNumberOfScalarVariables, METH_VARARGS,
   "GetNumberOfScalarVariables(self) -> int\nC++: int GetNumberOfScalarVariables()\n\nGet the number of scalar variables.\n"},
  {"GetScalarVariableIndex", PyvtkFunctionParser_GetScalarVariableIndex, METH_VARARGS,
   "GetScalarVariableIndex(self, name:str) -> int\nC++: int GetScalarVariableIndex(const std::string &name)\n\n"},
  {"GetNumberOfVectorVariables", PyvtkFunctionParser_GetNumberOfVectorVariables, METH_VARARGS,
   "GetNumberOfVectorVariables(self) -> int\nC++: int GetNumberOfVectorVariables()\n\nGet the number of vector variables.\n"},
  {"GetVectorVariableIndex", PyvtkFunctionParser_GetVectorVariableIndex, METH_VARARGS,
   "GetVectorVariableIndex(self, name:str) -> int\nC++: int GetVectorVariableIndex(const std::string &name)\n\n"},
  {"GetScalarVariableName", PyvtkFunctionParser_GetScalarVariableName, METH_VARARGS,
   "GetScalarVariableName(self, i:int) -> str\nC++: const char *GetScalarVariableName(int i)\n\nGet the ith scalar variable name.\n"},
  {"GetVectorVariableName", PyvtkFunctionParser_GetVectorVariableName, METH_VARARGS,
   "GetVectorVariableName(self, i:int) -> str\nC++: const char *GetVectorVariableName(int i)\n\nGet the ith vector variable name.\n"},
  {"GetScalarVariableNeeded", PyvtkFunctionParser_GetScalarVariableNeeded, METH_VARARGS,
   "GetScalarVariableNeeded(self, i:int) -> bool\nC++: bool GetScalarVariableNeeded(int i)\nGetScalarVariableNeeded(self, variableName:str) -> bool\nC++: bool GetScalarVariableNeeded(const std::string &variableName)\n\nReturns whether a scalar variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetScalarResult() or IsScalarResult() or similar method\nbefore calling this.\n"},
  {"GetVectorVariableNeeded", PyvtkFunctionParser_GetVectorVariableNeeded, METH_VARARGS,
   "GetVectorVariableNeeded(self, i:int) -> bool\nC++: bool GetVectorVariableNeeded(int i)\nGetVectorVariableNeeded(self, variableName:str) -> bool\nC++: bool GetVectorVariableNeeded(const std::string &variableName)\n\nReturns whether a vector variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetVectorResult() or IsVectorResult() or similar method\nbefore calling this.\n"},
  {"RemoveAllVariables", PyvtkFunctionParser_RemoveAllVariables, METH_VARARGS,
   "RemoveAllVariables(self) -> None\nC++: void RemoveAllVariables()\n\nRemove all the current variables.\n"},
  {"RemoveScalarVariables", PyvtkFunctionParser_RemoveScalarVariables, METH_VARARGS,
   "RemoveScalarVariables(self) -> None\nC++: void RemoveScalarVariables()\n\nRemove all the scalar variables.\n"},
  {"RemoveVectorVariables", PyvtkFunctionParser_RemoveVectorVariables, METH_VARARGS,
   "RemoveVectorVariables(self) -> None\nC++: void RemoveVectorVariables()\n\nRemove all the vector variables.\n"},
  {"SetReplaceInvalidValues", PyvtkFunctionParser_SetReplaceInvalidValues, METH_VARARGS,
   "SetReplaceInvalidValues(self, _arg:int) -> None\nC++: virtual void SetReplaceInvalidValues(vtkTypeBool _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplaceInvalidValues", PyvtkFunctionParser_GetReplaceInvalidValues, METH_VARARGS,
   "GetReplaceInvalidValues(self) -> int\nC++: virtual vtkTypeBool GetReplaceInvalidValues()\n\n"},
  {"ReplaceInvalidValuesOn", PyvtkFunctionParser_ReplaceInvalidValuesOn, METH_VARARGS,
   "ReplaceInvalidValuesOn(self) -> None\nC++: virtual void ReplaceInvalidValuesOn()\n\n"},
  {"ReplaceInvalidValuesOff", PyvtkFunctionParser_ReplaceInvalidValuesOff, METH_VARARGS,
   "ReplaceInvalidValuesOff(self) -> None\nC++: virtual void ReplaceInvalidValuesOff()\n\n"},
  {"SetReplacementValue", PyvtkFunctionParser_SetReplacementValue, METH_VARARGS,
   "SetReplacementValue(self, _arg:float) -> None\nC++: virtual void SetReplacementValue(double _arg)\n\n"},
  {"GetReplacementValue", PyvtkFunctionParser_GetReplacementValue, METH_VARARGS,
   "GetReplacementValue(self) -> float\nC++: virtual double GetReplacementValue()\n\n"},
  {"InvalidateFunction", PyvtkFunctionParser_InvalidateFunction, METH_VARARGS,
   "InvalidateFunction(self) -> None\nC++: void InvalidateFunction()\n\nAllow the user to force the function to be re-parsed\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFunctionParser_Doc =
  "vtkFunctionParser - Parse and evaluate a mathematical expression\n\n"
  "Superclass: vtkObject\n\n"
  "vtkFunctionParser is a class that takes in a mathematical expression\n"
  "as a char string, parses it, and evaluates it at the specified values\n"
  "of the variables in the input string.\n\n"
  "You can use the \"if\" operator to create conditional expressions such\n"
  "as if ( test, trueresult, falseresult). These evaluate the boolean\n"
  "valued test expression and then evaluate either the trueresult or the\n"
  "falseresult expression to produce a final (scalar or vector valued)\n"
  "value. \"test\" may contain <,>,=,|,&, and () and all three\n"
  "subexpressions can evaluate arbitrary function operators (ln, cos, +,\n"
  "if, etc)\n\n"
  "@par Thanks: Juha Nieminen (juha.nieminen@gmail.com) for relicensing\n"
  "this branch of the function parser code that this class is based upon\n"
  "under the new BSD license so that it could be used in VTK. Note, the\n"
  "BSD license applies to this version of the function parser only (by\n"
  "permission of the author), and not the original library.\n\n"
  "@par Thanks: Thomas Dunne (thomas.dunne@iwr.uni-heidelberg.de) for\n"
  "adding code for two-parameter-parsing and a few functions (sign, min,\n"
  "max).\n\n"
  "@par Thanks: Sid Sydoriak (sxs@lanl.gov) for adding boolean\n"
  "operations and conditional expressions and for fixing a variety of\n"
  "bugs.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFunctionParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMisc.vtkFunctionParser", // tp_name
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
  PyvtkFunctionParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFunctionParser_StaticNew()
{
  return vtkFunctionParser::New();
}

PyObject *PyvtkFunctionParser_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFunctionParser_Type, PyvtkFunctionParser_Methods,
    "vtkFunctionParser",
 &PyvtkFunctionParser_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFunctionParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFunctionParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFunctionParser", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 50; c++)
  {
    static const struct { const char *name; int value; }
      constants[50] = {
        { "VTK_PARSER_IMMEDIATE", 1 },
        { "VTK_PARSER_UNARY_MINUS", 2 },
        { "VTK_PARSER_UNARY_PLUS", 3 },
        { "VTK_PARSER_ADD", 4 },
        { "VTK_PARSER_SUBTRACT", 5 },
        { "VTK_PARSER_MULTIPLY", 6 },
        { "VTK_PARSER_DIVIDE", 7 },
        { "VTK_PARSER_POWER", 8 },
        { "VTK_PARSER_ABSOLUTE_VALUE", 9 },
        { "VTK_PARSER_EXPONENT", 10 },
        { "VTK_PARSER_CEILING", 11 },
        { "VTK_PARSER_FLOOR", 12 },
        { "VTK_PARSER_LOGARITHM", 13 },
        { "VTK_PARSER_LOGARITHME", 14 },
        { "VTK_PARSER_LOGARITHM10", 15 },
        { "VTK_PARSER_SQUARE_ROOT", 16 },
        { "VTK_PARSER_SINE", 17 },
        { "VTK_PARSER_COSINE", 18 },
        { "VTK_PARSER_TANGENT", 19 },
        { "VTK_PARSER_ARCSINE", 20 },
        { "VTK_PARSER_ARCCOSINE", 21 },
        { "VTK_PARSER_ARCTANGENT", 22 },
        { "VTK_PARSER_HYPERBOLIC_SINE", 23 },
        { "VTK_PARSER_HYPERBOLIC_COSINE", 24 },
        { "VTK_PARSER_HYPERBOLIC_TANGENT", 25 },
        { "VTK_PARSER_MIN", 26 },
        { "VTK_PARSER_MAX", 27 },
        { "VTK_PARSER_SIGN", 29 },
        { "VTK_PARSER_CROSS", 28 },
        { "VTK_PARSER_VECTOR_UNARY_MINUS", 30 },
        { "VTK_PARSER_VECTOR_UNARY_PLUS", 31 },
        { "VTK_PARSER_DOT_PRODUCT", 32 },
        { "VTK_PARSER_VECTOR_ADD", 33 },
        { "VTK_PARSER_VECTOR_SUBTRACT", 34 },
        { "VTK_PARSER_SCALAR_TIMES_VECTOR", 35 },
        { "VTK_PARSER_VECTOR_TIMES_SCALAR", 36 },
        { "VTK_PARSER_VECTOR_OVER_SCALAR", 37 },
        { "VTK_PARSER_MAGNITUDE", 38 },
        { "VTK_PARSER_NORMALIZE", 39 },
        { "VTK_PARSER_IHAT", 40 },
        { "VTK_PARSER_JHAT", 41 },
        { "VTK_PARSER_KHAT", 42 },
        { "VTK_PARSER_IF", 43 },
        { "VTK_PARSER_VECTOR_IF", 44 },
        { "VTK_PARSER_LESS_THAN", 45 },
        { "VTK_PARSER_GREATER_THAN", 46 },
        { "VTK_PARSER_EQUAL_TO", 47 },
        { "VTK_PARSER_AND", 48 },
        { "VTK_PARSER_OR", 49 },
        { "VTK_PARSER_BEGIN_VARIABLES", 50 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  o = PyFloat_FromDouble(VTK_FLOAT_MAX);
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_PARSER_ERROR_RESULT", o);
    Py_DECREF(o);
  }
}

