// python wrapper for vtkExecutableRunner
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExecutableRunner.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExecutableRunner(PyObject *dict); }
extern "C" { PyObject *PyvtkExecutableRunner_ClassNew(); }


static PyObject *
PyvtkExecutableRunner_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExecutableRunner::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExecutableRunner::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExecutableRunner *tempr = vtkExecutableRunner::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExecutableRunner *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExecutableRunner::NewInstance());

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
PyvtkExecutableRunner_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExecutableRunner::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExecutableRunner::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_Execute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Execute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Execute();
    }
    else
    {
      op->vtkExecutableRunner::Execute();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_SetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTimeout(temp0);
    }
    else
    {
      op->vtkExecutableRunner::SetTimeout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetTimeout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTimeout() :
      op->vtkExecutableRunner::GetTimeout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_SetRightTrimResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightTrimResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightTrimResult(temp0);
    }
    else
    {
      op->vtkExecutableRunner::SetRightTrimResult(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetRightTrimResult(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRightTrimResult");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRightTrimResult() :
      op->vtkExecutableRunner::GetRightTrimResult());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_RightTrimResultOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightTrimResultOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightTrimResultOn();
    }
    else
    {
      op->vtkExecutableRunner::RightTrimResultOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_RightTrimResultOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RightTrimResultOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RightTrimResultOff();
    }
    else
    {
      op->vtkExecutableRunner::RightTrimResultOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCommand() :
      op->vtkExecutableRunner::GetCommand());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_SetCommand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCommand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCommand(temp0);
    }
    else
    {
      op->vtkExecutableRunner::SetCommand(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_SetExecuteInSystemShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExecuteInSystemShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExecuteInSystemShell(temp0);
    }
    else
    {
      op->vtkExecutableRunner::SetExecuteInSystemShell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetExecuteInSystemShell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExecuteInSystemShell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExecuteInSystemShell() :
      op->vtkExecutableRunner::GetExecuteInSystemShell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_ExecuteInSystemShellOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteInSystemShellOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExecuteInSystemShellOn();
    }
    else
    {
      op->vtkExecutableRunner::ExecuteInSystemShellOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_ExecuteInSystemShellOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExecuteInSystemShellOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExecuteInSystemShellOff();
    }
    else
    {
      op->vtkExecutableRunner::ExecuteInSystemShellOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_AddArgument(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddArgument");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddArgument(temp0);
    }
    else
    {
      op->vtkExecutableRunner::AddArgument(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_ClearArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearArguments();
    }
    else
    {
      op->vtkExecutableRunner::ClearArguments();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetNumberOfArguments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArguments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfArguments() :
      op->vtkExecutableRunner::GetNumberOfArguments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetStdOut(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStdOut");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStdOut() :
      op->vtkExecutableRunner::GetStdOut());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetStdErr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStdErr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetStdErr() :
      op->vtkExecutableRunner::GetStdErr());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExecutableRunner_GetReturnValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReturnValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExecutableRunner *op = static_cast<vtkExecutableRunner *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReturnValue() :
      op->vtkExecutableRunner::GetReturnValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExecutableRunner_Methods[] = {
  {"IsTypeOf", PyvtkExecutableRunner_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExecutableRunner_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExecutableRunner_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExecutableRunner\nC++: static vtkExecutableRunner *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExecutableRunner_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExecutableRunner\nC++: vtkExecutableRunner *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExecutableRunner_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExecutableRunner_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Execute", PyvtkExecutableRunner_Execute, METH_VARARGS,
   "Execute(self) -> None\nC++: void Execute()\n\nExecute the command currently set if any. This will update the\nStdOut and StdErr properties.\n"},
  {"SetTimeout", PyvtkExecutableRunner_SetTimeout, METH_VARARGS,
   "SetTimeout(self, _arg:float) -> None\nC++: virtual void SetTimeout(double _arg)\n\nSet/Get command timeout in seconds.  A non-positive (<= 0) value\nwill disable the timeout.\n\nDefault is 5\n"},
  {"GetTimeout", PyvtkExecutableRunner_GetTimeout, METH_VARARGS,
   "GetTimeout(self) -> float\nC++: virtual double GetTimeout()\n\n"},
  {"SetRightTrimResult", PyvtkExecutableRunner_SetRightTrimResult, METH_VARARGS,
   "SetRightTrimResult(self, _arg:bool) -> None\nC++: virtual void SetRightTrimResult(bool _arg)\n\nSet/Get if we trim the ending whitespaces of the output.\n\nDefault is true.\n"},
  {"GetRightTrimResult", PyvtkExecutableRunner_GetRightTrimResult, METH_VARARGS,
   "GetRightTrimResult(self) -> bool\nC++: virtual bool GetRightTrimResult()\n\n"},
  {"RightTrimResultOn", PyvtkExecutableRunner_RightTrimResultOn, METH_VARARGS,
   "RightTrimResultOn(self) -> None\nC++: virtual void RightTrimResultOn()\n\n"},
  {"RightTrimResultOff", PyvtkExecutableRunner_RightTrimResultOff, METH_VARARGS,
   "RightTrimResultOff(self) -> None\nC++: virtual void RightTrimResultOff()\n\n"},
  {"GetCommand", PyvtkExecutableRunner_GetCommand, METH_VARARGS,
   "GetCommand(self) -> str\nC++: virtual const char *GetCommand()\n\nSet/Get command to execute. An empty command will do nothing.\n"},
  {"SetCommand", PyvtkExecutableRunner_SetCommand, METH_VARARGS,
   "SetCommand(self, arg:str) -> None\nC++: virtual void SetCommand(const char *arg)\n\n"},
  {"SetExecuteInSystemShell", PyvtkExecutableRunner_SetExecuteInSystemShell, METH_VARARGS,
   "SetExecuteInSystemShell(self, _arg:bool) -> None\nC++: virtual void SetExecuteInSystemShell(bool _arg)\n\nAllows the command to be launched using the system shell (`sh` on\nunix systems, cmd.exe on windows). This is handy when the user\ndoesn't know how to split arguments from a single string.\n\nDefault to true.\n"},
  {"GetExecuteInSystemShell", PyvtkExecutableRunner_GetExecuteInSystemShell, METH_VARARGS,
   "GetExecuteInSystemShell(self) -> bool\nC++: virtual bool GetExecuteInSystemShell()\n\n"},
  {"ExecuteInSystemShellOn", PyvtkExecutableRunner_ExecuteInSystemShellOn, METH_VARARGS,
   "ExecuteInSystemShellOn(self) -> None\nC++: virtual void ExecuteInSystemShellOn()\n\n"},
  {"ExecuteInSystemShellOff", PyvtkExecutableRunner_ExecuteInSystemShellOff, METH_VARARGS,
   "ExecuteInSystemShellOff(self) -> None\nC++: virtual void ExecuteInSystemShellOff()\n\n"},
  {"AddArgument", PyvtkExecutableRunner_AddArgument, METH_VARARGS,
   "AddArgument(self, arg:str) -> None\nC++: virtual void AddArgument(const std::string &arg)\n\nAPI to control arguments passed to the command when\n`ExecuteInSystemShell` is false.\n\nDefault is no argument.\n"},
  {"ClearArguments", PyvtkExecutableRunner_ClearArguments, METH_VARARGS,
   "ClearArguments(self) -> None\nC++: virtual void ClearArguments()\n\n"},
  {"GetNumberOfArguments", PyvtkExecutableRunner_GetNumberOfArguments, METH_VARARGS,
   "GetNumberOfArguments(self) -> int\nC++: virtual vtkIdType GetNumberOfArguments()\n\n"},
  {"GetStdOut", PyvtkExecutableRunner_GetStdOut, METH_VARARGS,
   "GetStdOut(self) -> str\nC++: virtual const char *GetStdOut()\n\nGet output of the previously run command.\n"},
  {"GetStdErr", PyvtkExecutableRunner_GetStdErr, METH_VARARGS,
   "GetStdErr(self) -> str\nC++: virtual const char *GetStdErr()\n\n"},
  {"GetReturnValue", PyvtkExecutableRunner_GetReturnValue, METH_VARARGS,
   "GetReturnValue(self) -> int\nC++: virtual int GetReturnValue()\n\nGet return value of last command. If no command has been executed\nor if the command has failed in some way value is != 0, else\nreturn 0.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExecutableRunner_Doc =
  "vtkExecutableRunner - Launch a process on the current machine and get\nits output\n\n"
  "Superclass: vtkObject\n\n"
  "Launch a process on the current machine and get its standard output\n"
  "and standard error output. When `ExecuteInSystemShell` is false,\n"
  "arguments needs to be added separately using the `AddArgument` /\n"
  "`ClearArguments` API, otherwise command may not work correctly. If\n"
  "one does not know how to parse the arguments of the command it want\n"
  "to execute then `ExecuteInSystemShell` should be set to true.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExecutableRunner_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonSystem.vtkExecutableRunner", // tp_name
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
  PyvtkExecutableRunner_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExecutableRunner_StaticNew()
{
  return vtkExecutableRunner::New();
}

PyObject *PyvtkExecutableRunner_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExecutableRunner_Type, PyvtkExecutableRunner_Methods,
    "vtkExecutableRunner",
 &PyvtkExecutableRunner_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExecutableRunner(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExecutableRunner_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExecutableRunner", o) != 0)
  {
    Py_DECREF(o);
  }

}

