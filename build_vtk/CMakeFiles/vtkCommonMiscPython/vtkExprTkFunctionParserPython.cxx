// python wrapper for vtkExprTkFunctionParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExprTkFunctionParser.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExprTkFunctionParser(PyObject *dict); }
extern "C" { PyObject *PyvtkExprTkFunctionParser_ClassNew(); }


static PyObject *
PyvtkExprTkFunctionParser_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExprTkFunctionParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExprTkFunctionParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExprTkFunctionParser *tempr = vtkExprTkFunctionParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExprTkFunctionParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExprTkFunctionParser::NewInstance());

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
PyvtkExprTkFunctionParser_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExprTkFunctionParser::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExprTkFunctionParser::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkExprTkFunctionParser::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_SetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFunction() :
      op->vtkExprTkFunctionParser::GetFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_IsScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsScalarResult() :
      op->vtkExprTkFunctionParser::IsScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_IsVectorResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsVectorResult() :
      op->vtkExprTkFunctionParser::IsVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetScalarResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarResult() :
      op->vtkExprTkFunctionParser::GetScalarResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetVectorResult_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorResult() :
      op->vtkExprTkFunctionParser::GetVectorResult());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetVectorResult_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::GetVectorResult(temp0);
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
PyvtkExprTkFunctionParser_GetVectorResult(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkExprTkFunctionParser_GetVectorResult_s1(self, args);
    case 1:
      return PyvtkExprTkFunctionParser_GetVectorResult_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetVectorResult");
  return nullptr;
}


static PyObject *
PyvtkExprTkFunctionParser_SetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_SetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetScalarVariableValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExprTkFunctionParser_SetScalarVariableValue_Methods[] = {
  {"SetScalarVariableValue", PyvtkExprTkFunctionParser_SetScalarVariableValue_s1, METH_VARARGS,
   "@sd"},
  {"SetScalarVariableValue", PyvtkExprTkFunctionParser_SetScalarVariableValue_s2, METH_VARARGS,
   "@id"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_SetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_SetScalarVariableValue_Methods;
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
PyvtkExprTkFunctionParser_GetScalarVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScalarVariableValue(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExprTkFunctionParser_GetScalarVariableValue_Methods[] = {
  {"GetScalarVariableValue", PyvtkExprTkFunctionParser_GetScalarVariableValue_s1, METH_VARARGS,
   "@s"},
  {"GetScalarVariableValue", PyvtkExprTkFunctionParser_GetScalarVariableValue_s2, METH_VARARGS,
   "@i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_GetScalarVariableValue_Methods;
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
PyvtkExprTkFunctionParser_SetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_SetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkExprTkFunctionParser::SetVectorVariableValue(temp0, temp1);
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
PyvtkExprTkFunctionParser_SetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetVectorVariableValue(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_SetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->SetVectorVariableValue(temp0, temp1);
    }
    else
    {
      op->vtkExprTkFunctionParser::SetVectorVariableValue(temp0, temp1);
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

static PyMethodDef PyvtkExprTkFunctionParser_SetVectorVariableValue_Methods[] = {
  {"SetVectorVariableValue", PyvtkExprTkFunctionParser_SetVectorVariableValue_s1, METH_VARARGS,
   "@sddd"},
  {"SetVectorVariableValue", PyvtkExprTkFunctionParser_SetVectorVariableValue_s2, METH_VARARGS,
   "@sP *d"},
  {"SetVectorVariableValue", PyvtkExprTkFunctionParser_SetVectorVariableValue_s3, METH_VARARGS,
   "@iddd"},
  {"SetVectorVariableValue", PyvtkExprTkFunctionParser_SetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_SetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_SetVectorVariableValue_Methods;
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
PyvtkExprTkFunctionParser_GetVectorVariableValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::GetVectorVariableValue(temp0, temp1);
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
PyvtkExprTkFunctionParser_GetVectorVariableValue_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetVectorVariableValue(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableValue_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::GetVectorVariableValue(temp0, temp1);
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

static PyMethodDef PyvtkExprTkFunctionParser_GetVectorVariableValue_Methods[] = {
  {"GetVectorVariableValue", PyvtkExprTkFunctionParser_GetVectorVariableValue_s1, METH_VARARGS,
   "@s"},
  {"GetVectorVariableValue", PyvtkExprTkFunctionParser_GetVectorVariableValue_s2, METH_VARARGS,
   "@sP *d"},
  {"GetVectorVariableValue", PyvtkExprTkFunctionParser_GetVectorVariableValue_s3, METH_VARARGS,
   "@i"},
  {"GetVectorVariableValue", PyvtkExprTkFunctionParser_GetVectorVariableValue_s4, METH_VARARGS,
   "@iP *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableValue(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_GetVectorVariableValue_Methods;
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
PyvtkExprTkFunctionParser_GetNumberOfScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarVariables() :
      op->vtkExprTkFunctionParser::GetNumberOfScalarVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarVariableIndex(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetNumberOfVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVectorVariables() :
      op->vtkExprTkFunctionParser::GetNumberOfVectorVariables());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVectorVariableIndex(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetScalarVariableName(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetVectorVariableName(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScalarVariableNeeded(temp0) :
      op->vtkExprTkFunctionParser::GetScalarVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExprTkFunctionParser_GetScalarVariableNeeded_Methods[] = {
  {"GetScalarVariableNeeded", PyvtkExprTkFunctionParser_GetScalarVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {"GetScalarVariableNeeded", PyvtkExprTkFunctionParser_GetScalarVariableNeeded_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_GetScalarVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_GetScalarVariableNeeded_Methods;
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
PyvtkExprTkFunctionParser_GetVectorVariableNeeded_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableNeeded_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorVariableNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetVectorVariableNeeded(temp0) :
      op->vtkExprTkFunctionParser::GetVectorVariableNeeded(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExprTkFunctionParser_GetVectorVariableNeeded_Methods[] = {
  {"GetVectorVariableNeeded", PyvtkExprTkFunctionParser_GetVectorVariableNeeded_s1, METH_VARARGS,
   "@i"},
  {"GetVectorVariableNeeded", PyvtkExprTkFunctionParser_GetVectorVariableNeeded_s2, METH_VARARGS,
   "@s"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkExprTkFunctionParser_GetVectorVariableNeeded(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkExprTkFunctionParser_GetVectorVariableNeeded_Methods;
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
PyvtkExprTkFunctionParser_RemoveAllVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllVariables();
    }
    else
    {
      op->vtkExprTkFunctionParser::RemoveAllVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_RemoveScalarVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveScalarVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveScalarVariables();
    }
    else
    {
      op->vtkExprTkFunctionParser::RemoveScalarVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_RemoveVectorVariables(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveVectorVariables");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveVectorVariables();
    }
    else
    {
      op->vtkExprTkFunctionParser::RemoveVectorVariables();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_SetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetReplaceInvalidValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetReplaceInvalidValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceInvalidValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReplaceInvalidValues() :
      op->vtkExprTkFunctionParser::GetReplaceInvalidValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_ReplaceInvalidValuesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOn();
    }
    else
    {
      op->vtkExprTkFunctionParser::ReplaceInvalidValuesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_ReplaceInvalidValuesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceInvalidValuesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReplaceInvalidValuesOff();
    }
    else
    {
      op->vtkExprTkFunctionParser::ReplaceInvalidValuesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_SetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

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
      op->vtkExprTkFunctionParser::SetReplacementValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_GetReplacementValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplacementValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplacementValue() :
      op->vtkExprTkFunctionParser::GetReplacementValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_InvalidateFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvalidateFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExprTkFunctionParser *op = static_cast<vtkExprTkFunctionParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvalidateFunction();
    }
    else
    {
      op->vtkExprTkFunctionParser::InvalidateFunction();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExprTkFunctionParser_SanitizeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SanitizeName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = vtkExprTkFunctionParser::SanitizeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExprTkFunctionParser_Methods[] = {
  {"IsTypeOf", PyvtkExprTkFunctionParser_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExprTkFunctionParser_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExprTkFunctionParser_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExprTkFunctionParser\nC++: static vtkExprTkFunctionParser *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExprTkFunctionParser_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExprTkFunctionParser\nC++: vtkExprTkFunctionParser *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExprTkFunctionParser_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExprTkFunctionParser_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkExprTkFunctionParser_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn parser's MTime\n"},
  {"SetFunction", PyvtkExprTkFunctionParser_SetFunction, METH_VARARGS,
   "SetFunction(self, function:str) -> None\nC++: void SetFunction(const char *function)\n\nSet/Get input string to evaluate.\n"},
  {"GetFunction", PyvtkExprTkFunctionParser_GetFunction, METH_VARARGS,
   "GetFunction(self) -> str\nC++: const char *GetFunction()\n\n"},
  {"IsScalarResult", PyvtkExprTkFunctionParser_IsScalarResult, METH_VARARGS,
   "IsScalarResult(self) -> int\nC++: int IsScalarResult()\n\nCheck whether the result is a scalar result.  If it isn't, then\neither the result is a vector or an error has occurred.\n"},
  {"IsVectorResult", PyvtkExprTkFunctionParser_IsVectorResult, METH_VARARGS,
   "IsVectorResult(self) -> int\nC++: int IsVectorResult()\n\nCheck whether the result is a vector result.  If it isn't, then\neither the result is scalar or an error has occurred.\n"},
  {"GetScalarResult", PyvtkExprTkFunctionParser_GetScalarResult, METH_VARARGS,
   "GetScalarResult(self) -> float\nC++: double GetScalarResult()\n\nGet a scalar result from evaluating the input function.\n\nIf ReplaceInvalidValues is not set, then the error value that\nwill be return is NaN.\n"},
  {"GetVectorResult", PyvtkExprTkFunctionParser_GetVectorResult, METH_VARARGS,
   "GetVectorResult(self) -> (float, float, float)\nC++: double *GetVectorResult()\nGetVectorResult(self, result:[float, float, float]) -> None\nC++: void GetVectorResult(double result[3])\n\nGet a vector result from evaluating the input function.\n\nIf ReplaceInvalidValues is not set, then the error value that\nwill be return is [NaN, NaN, NaN].\n"},
  {"SetScalarVariableValue", PyvtkExprTkFunctionParser_SetScalarVariableValue, METH_VARARGS,
   "SetScalarVariableValue(self, variableName:str, value:float)\n    -> None\nC++: void SetScalarVariableValue(const std::string &variableName,\n    double value)\nSetScalarVariableValue(self, i:int, value:float) -> None\nC++: void SetScalarVariableValue(int i, double value)\n\nSet the value of a scalar variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue. If the variable name is not sanitized, it should be\nprovided in quotes, and a valid unique string will be used as a\nreplacement by the parser.\n\note A sanitized variable name is accepted by the following regex:\n^[a-zA-Z][a-zA-Z_0-9]*.\n"},
  {"GetScalarVariableValue", PyvtkExprTkFunctionParser_GetScalarVariableValue, METH_VARARGS,
   "GetScalarVariableValue(self, variableName:str) -> float\nC++: double GetScalarVariableValue(\n    const std::string &variableName)\nGetScalarVariableValue(self, i:int) -> float\nC++: double GetScalarVariableValue(int i)\n\nGet the value of a scalar variable.\n"},
  {"SetVectorVariableValue", PyvtkExprTkFunctionParser_SetVectorVariableValue, METH_VARARGS,
   "SetVectorVariableValue(self, variableName:str, xValue:float,\n    yValue:float, zValue:float) -> None\nC++: void SetVectorVariableValue(const std::string &variableName,\n    double xValue, double yValue, double zValue)\nSetVectorVariableValue(self, variableName:str, values:[float,\n    float, float]) -> None\nC++: void SetVectorVariableValue(const std::string &variableName,\n    double values[3])\nSetVectorVariableValue(self, i:int, xValue:float, yValue:float,\n    zValue:float) -> None\nC++: void SetVectorVariableValue(int i, double xValue,\n    double yValue, double zValue)\nSetVectorVariableValue(self, i:int, values:[float, float, float])\n    -> None\nC++: void SetVectorVariableValue(int i, double values[3])\n\nSet the value of a vector variable.  If a variable with this name\nexists, then its value will be set to the new value.  If there is\nnot already a variable with this name, variableName will be added\nto the list of variables, and its value will be set to the new\nvalue. If the variable name is not sanitized, it should be\nprovided in quotes, and a valid unique string will be used as a\nreplacement by the parser.\n\note A sanitized variable name is accepted by the following regex:\n^[a-zA-Z][a-zA-Z_0-9]*.\n"},
  {"GetVectorVariableValue", PyvtkExprTkFunctionParser_GetVectorVariableValue, METH_VARARGS,
   "GetVectorVariableValue(self, variableName:str) -> (float, float,\n    float)\nC++: double *GetVectorVariableValue(\n    const std::string &variableName)\nGetVectorVariableValue(self, variableName:str, value:[float,\n    float, float]) -> None\nC++: void GetVectorVariableValue(const std::string &variableName,\n    double value[3])\nGetVectorVariableValue(self, i:int) -> (float, float, float)\nC++: double *GetVectorVariableValue(int i)\nGetVectorVariableValue(self, i:int, value:[float, float, float])\n    -> None\nC++: void GetVectorVariableValue(int i, double value[3])\n\nGet the value of a vector variable.\n"},
  {"GetNumberOfScalarVariables", PyvtkExprTkFunctionParser_GetNumberOfScalarVariables, METH_VARARGS,
   "GetNumberOfScalarVariables(self) -> int\nC++: int GetNumberOfScalarVariables()\n\nGet the number of scalar variables.\n"},
  {"GetScalarVariableIndex", PyvtkExprTkFunctionParser_GetScalarVariableIndex, METH_VARARGS,
   "GetScalarVariableIndex(self, name:str) -> int\nC++: int GetScalarVariableIndex(const std::string &name)\n\nGet scalar variable index or -1 if not found\n"},
  {"GetNumberOfVectorVariables", PyvtkExprTkFunctionParser_GetNumberOfVectorVariables, METH_VARARGS,
   "GetNumberOfVectorVariables(self) -> int\nC++: int GetNumberOfVectorVariables()\n\nGet the number of vector variables.\n"},
  {"GetVectorVariableIndex", PyvtkExprTkFunctionParser_GetVectorVariableIndex, METH_VARARGS,
   "GetVectorVariableIndex(self, name:str) -> int\nC++: int GetVectorVariableIndex(const std::string &name)\n\nGet scalar variable index or -1 if not found\n"},
  {"GetScalarVariableName", PyvtkExprTkFunctionParser_GetScalarVariableName, METH_VARARGS,
   "GetScalarVariableName(self, i:int) -> str\nC++: std::string GetScalarVariableName(int i)\n\nGet the ith scalar variable name.\n"},
  {"GetVectorVariableName", PyvtkExprTkFunctionParser_GetVectorVariableName, METH_VARARGS,
   "GetVectorVariableName(self, i:int) -> str\nC++: std::string GetVectorVariableName(int i)\n\nGet the ith vector variable name.\n"},
  {"GetScalarVariableNeeded", PyvtkExprTkFunctionParser_GetScalarVariableNeeded, METH_VARARGS,
   "GetScalarVariableNeeded(self, i:int) -> bool\nC++: bool GetScalarVariableNeeded(int i)\nGetScalarVariableNeeded(self, variableName:str) -> bool\nC++: bool GetScalarVariableNeeded(const std::string &variableName)\n\nReturns whether a scalar variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetScalarResult() or IsScalarResult() or similar method\nbefore calling this.\n"},
  {"GetVectorVariableNeeded", PyvtkExprTkFunctionParser_GetVectorVariableNeeded, METH_VARARGS,
   "GetVectorVariableNeeded(self, i:int) -> bool\nC++: bool GetVectorVariableNeeded(int i)\nGetVectorVariableNeeded(self, variableName:str) -> bool\nC++: bool GetVectorVariableNeeded(const std::string &variableName)\n\nReturns whether a vector variable is needed for the function\nevaluation. This is only valid after a successful Parse(). Thus,\ncall GetVectorResult() or IsVectorResult() or similar method\nbefore calling this.\n"},
  {"RemoveAllVariables", PyvtkExprTkFunctionParser_RemoveAllVariables, METH_VARARGS,
   "RemoveAllVariables(self) -> None\nC++: void RemoveAllVariables()\n\nRemove all the current variables.\n"},
  {"RemoveScalarVariables", PyvtkExprTkFunctionParser_RemoveScalarVariables, METH_VARARGS,
   "RemoveScalarVariables(self) -> None\nC++: void RemoveScalarVariables()\n\nRemove all the scalar variables.\n"},
  {"RemoveVectorVariables", PyvtkExprTkFunctionParser_RemoveVectorVariables, METH_VARARGS,
   "RemoveVectorVariables(self) -> None\nC++: void RemoveVectorVariables()\n\nRemove all the vector variables.\n"},
  {"SetReplaceInvalidValues", PyvtkExprTkFunctionParser_SetReplaceInvalidValues, METH_VARARGS,
   "SetReplaceInvalidValues(self, _arg:int) -> None\nC++: virtual void SetReplaceInvalidValues(vtkTypeBool _arg)\n\nWhen ReplaceInvalidValues is on, all invalid values (such as\nsqrt(-2), note that function parser does not handle complex\nnumbers) will be replaced by ReplacementValue. Otherwise an error\nwill be reported\n"},
  {"GetReplaceInvalidValues", PyvtkExprTkFunctionParser_GetReplaceInvalidValues, METH_VARARGS,
   "GetReplaceInvalidValues(self) -> int\nC++: virtual vtkTypeBool GetReplaceInvalidValues()\n\n"},
  {"ReplaceInvalidValuesOn", PyvtkExprTkFunctionParser_ReplaceInvalidValuesOn, METH_VARARGS,
   "ReplaceInvalidValuesOn(self) -> None\nC++: virtual void ReplaceInvalidValuesOn()\n\n"},
  {"ReplaceInvalidValuesOff", PyvtkExprTkFunctionParser_ReplaceInvalidValuesOff, METH_VARARGS,
   "ReplaceInvalidValuesOff(self) -> None\nC++: virtual void ReplaceInvalidValuesOff()\n\n"},
  {"SetReplacementValue", PyvtkExprTkFunctionParser_SetReplacementValue, METH_VARARGS,
   "SetReplacementValue(self, _arg:float) -> None\nC++: virtual void SetReplacementValue(double _arg)\n\n"},
  {"GetReplacementValue", PyvtkExprTkFunctionParser_GetReplacementValue, METH_VARARGS,
   "GetReplacementValue(self) -> float\nC++: virtual double GetReplacementValue()\n\n"},
  {"InvalidateFunction", PyvtkExprTkFunctionParser_InvalidateFunction, METH_VARARGS,
   "InvalidateFunction(self) -> None\nC++: void InvalidateFunction()\n\nAllow the user to force the function to be re-parsed\n"},
  {"SanitizeName", PyvtkExprTkFunctionParser_SanitizeName, METH_VARARGS,
   "SanitizeName(name:str) -> str\nC++: static std::string SanitizeName(const char *name)\n\nSanitize a label/name to remove spaces, delimiters etc. Once the\nlabel/name is sanitized is can be accepted by the following\nregex: ^[a-zA-Z][a-zA-Z_0-9]*.\n\note taken from vtkSMCoreUtilities\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExprTkFunctionParser_Doc =
  "vtkExprTkFunctionParser - Parse and evaluate a mathematical expression\n\n"
  "Superclass: vtkObject\n\n"
  "vtkExprTkFunctionParser is a wrapper class of the ExprTK library that\n"
  "takes in a mathematical expression as a char string, parses it, and\n"
  "evaluates it at the specified values of the variables in the input\n"
  "string.\n\n"
  "The detailed documentation of the supported functionality is\n"
  "described in https://github.com/ArashPartow/exprtk. In addition to\n"
  "the documented functionality, the following vector operations have\n"
  "been implemented:\n"
  "1) cross(v1, v2), cross product of two vectors,\n"
  "2) mag(v), magnitude of a vector,\n"
  "3) norm(v), the normalized version of a vector.\n\n"
  "@par Thanks: Arash Partow for implementing the ExprTk library.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExprTkFunctionParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonMisc.vtkExprTkFunctionParser", // tp_name
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
  PyvtkExprTkFunctionParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExprTkFunctionParser_StaticNew()
{
  return vtkExprTkFunctionParser::New();
}

PyObject *PyvtkExprTkFunctionParser_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExprTkFunctionParser_Type, PyvtkExprTkFunctionParser_Methods,
    "vtkExprTkFunctionParser",
 &PyvtkExprTkFunctionParser_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExprTkFunctionParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExprTkFunctionParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExprTkFunctionParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

