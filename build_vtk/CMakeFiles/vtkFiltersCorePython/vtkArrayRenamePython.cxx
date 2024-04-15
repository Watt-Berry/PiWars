// python wrapper for vtkArrayRename
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkArrayRename.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkArrayRename(PyObject *dict); }
extern "C" { PyObject *PyvtkArrayRename_ClassNew(); }


static PyObject *
PyvtkArrayRename_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkArrayRename::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkArrayRename::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkArrayRename *tempr = vtkArrayRename::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkArrayRename *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkArrayRename::NewInstance());

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
PyvtkArrayRename_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkArrayRename::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkArrayRename::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfArrays(temp0) :
      op->vtkArrayRename::GetNumberOfArrays(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayOriginalName(temp0, temp1) :
      op->vtkArrayRename::GetArrayOriginalName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayNewName(temp0, temp1) :
      op->vtkArrayRename::GetArrayNewName(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  int temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArrayRename::SetArrayName(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0, temp1, temp2);
    }
    else
    {
      op->vtkArrayRename::SetArrayName(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetArrayName_Methods[] = {
  {"SetArrayName", PyvtkArrayRename_SetArrayName_s1, METH_VARARGS,
   "@iiz"},
  {"SetArrayName", PyvtkArrayRename_SetArrayName_s2, METH_VARARGS,
   "@izz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ClearMapping(temp0);
    }
    else
    {
      op->vtkArrayRename::ClearMapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfPointArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointArrays() :
      op->vtkArrayRename::GetNumberOfPointArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetPointArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayOriginalName(temp0) :
      op->vtkArrayRename::GetPointArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetPointArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPointArrayNewName(temp0) :
      op->vtkArrayRename::GetPointArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetPointArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetPointArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetPointArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetPointArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetPointArrayName_Methods[] = {
  {"SetPointArrayName", PyvtkArrayRename_SetPointArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetPointArrayName", PyvtkArrayRename_SetPointArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetPointArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetPointArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPointArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearPointMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPointMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPointMapping();
    }
    else
    {
      op->vtkArrayRename::ClearPointMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfCellArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellArrays() :
      op->vtkArrayRename::GetNumberOfCellArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetCellArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayOriginalName(temp0) :
      op->vtkArrayRename::GetCellArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetCellArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCellArrayNewName(temp0) :
      op->vtkArrayRename::GetCellArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetCellArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetCellArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetCellArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCellArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetCellArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetCellArrayName_Methods[] = {
  {"SetCellArrayName", PyvtkArrayRename_SetCellArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetCellArrayName", PyvtkArrayRename_SetCellArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetCellArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetCellArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearCellMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearCellMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearCellMapping();
    }
    else
    {
      op->vtkArrayRename::ClearCellMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfFieldArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFieldArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFieldArrays() :
      op->vtkArrayRename::GetNumberOfFieldArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetFieldArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldArrayOriginalName(temp0) :
      op->vtkArrayRename::GetFieldArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetFieldArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFieldArrayNewName(temp0) :
      op->vtkArrayRename::GetFieldArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetFieldArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetFieldArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetFieldArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetFieldArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetFieldArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetFieldArrayName_Methods[] = {
  {"SetFieldArrayName", PyvtkArrayRename_SetFieldArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetFieldArrayName", PyvtkArrayRename_SetFieldArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetFieldArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetFieldArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFieldArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearFieldMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFieldMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearFieldMapping();
    }
    else
    {
      op->vtkArrayRename::ClearFieldMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfVertexArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfVertexArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfVertexArrays() :
      op->vtkArrayRename::GetNumberOfVertexArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetVertexArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexArrayOriginalName(temp0) :
      op->vtkArrayRename::GetVertexArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetVertexArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetVertexArrayNewName(temp0) :
      op->vtkArrayRename::GetVertexArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetVertexArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVertexArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetVertexArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetVertexArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVertexArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetVertexArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetVertexArrayName_Methods[] = {
  {"SetVertexArrayName", PyvtkArrayRename_SetVertexArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetVertexArrayName", PyvtkArrayRename_SetVertexArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetVertexArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetVertexArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVertexArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearVertexMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVertexMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearVertexMapping();
    }
    else
    {
      op->vtkArrayRename::ClearVertexMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfEdgeArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdgeArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdgeArrays() :
      op->vtkArrayRename::GetNumberOfEdgeArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetEdgeArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeArrayOriginalName(temp0) :
      op->vtkArrayRename::GetEdgeArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetEdgeArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdgeArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetEdgeArrayNewName(temp0) :
      op->vtkArrayRename::GetEdgeArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetEdgeArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetEdgeArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetEdgeArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEdgeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetEdgeArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetEdgeArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetEdgeArrayName_Methods[] = {
  {"SetEdgeArrayName", PyvtkArrayRename_SetEdgeArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetEdgeArrayName", PyvtkArrayRename_SetEdgeArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetEdgeArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetEdgeArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEdgeArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearEdgeMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEdgeMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEdgeMapping();
    }
    else
    {
      op->vtkArrayRename::ClearEdgeMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetNumberOfRowArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfRowArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfRowArrays() :
      op->vtkArrayRename::GetNumberOfRowArrays());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetRowArrayOriginalName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowArrayOriginalName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRowArrayOriginalName(temp0) :
      op->vtkArrayRename::GetRowArrayOriginalName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_GetRowArrayNewName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRowArrayNewName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetRowArrayNewName(temp0) :
      op->vtkArrayRename::GetRowArrayNewName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_SetRowArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRowArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetRowArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkArrayRename_SetRowArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRowArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRowArrayName(temp0, temp1);
    }
    else
    {
      op->vtkArrayRename::SetRowArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_SetRowArrayName_Methods[] = {
  {"SetRowArrayName", PyvtkArrayRename_SetRowArrayName_s1, METH_VARARGS,
   "@iz"},
  {"SetRowArrayName", PyvtkArrayRename_SetRowArrayName_s2, METH_VARARGS,
   "@zz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkArrayRename_SetRowArrayName(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkArrayRename_SetRowArrayName_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRowArrayName");
  return nullptr;
}


static PyObject *
PyvtkArrayRename_ClearRowMapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearRowMapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearRowMapping();
    }
    else
    {
      op->vtkArrayRename::ClearRowMapping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkArrayRename_ClearAll(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkArrayRename *op = static_cast<vtkArrayRename *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAll();
    }
    else
    {
      op->vtkArrayRename::ClearAll();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkArrayRename_Methods[] = {
  {"IsTypeOf", PyvtkArrayRename_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkArrayRename_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkArrayRename_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkArrayRename\nC++: static vtkArrayRename *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkArrayRename_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkArrayRename\nC++: vtkArrayRename *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkArrayRename_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkArrayRename_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfArrays", PyvtkArrayRename_GetNumberOfArrays, METH_VARARGS,
   "GetNumberOfArrays(self, attributeType:int) -> int\nC++: int GetNumberOfArrays(int attributeType)\n\nGet number of arrays for specified attribute type.\n"},
  {"GetArrayOriginalName", PyvtkArrayRename_GetArrayOriginalName, METH_VARARGS,
   "GetArrayOriginalName(self, attributeType:int, idx:int) -> str\nC++: const char *GetArrayOriginalName(int attributeType, int idx)\n\nGet the input array name from idx in attributeType field data.\n"},
  {"GetArrayNewName", PyvtkArrayRename_GetArrayNewName, METH_VARARGS,
   "GetArrayNewName(self, attributeType:int, idx:int) -> str\nC++: const char *GetArrayNewName(int attributeType, int idx)\n\nGet the new array name from idx in attributeType field data.\n"},
  {"SetArrayName", PyvtkArrayRename_SetArrayName, METH_VARARGS,
   "SetArrayName(self, attributeType:int, idx:int, newName:str)\n    -> None\nC++: void SetArrayName(int attributeType, int idx,\n    const char *newName)\nSetArrayName(self, attributeType:int, inputName:str, newName:str)\n    -> None\nC++: void SetArrayName(int attributeType, const char *inputName,\n    const char *newName)\n\nSet the new array name from idx in attributeType field data.\n"},
  {"ClearMapping", PyvtkArrayRename_ClearMapping, METH_VARARGS,
   "ClearMapping(self, attributeType:int) -> None\nC++: void ClearMapping(int attributeType)\n\nClear mapping for the specified attribute type.\n"},
  {"GetNumberOfPointArrays", PyvtkArrayRename_GetNumberOfPointArrays, METH_VARARGS,
   "GetNumberOfPointArrays(self) -> int\nC++: int GetNumberOfPointArrays()\n\n"},
  {"GetPointArrayOriginalName", PyvtkArrayRename_GetPointArrayOriginalName, METH_VARARGS,
   "GetPointArrayOriginalName(self, idx:int) -> str\nC++: const char *GetPointArrayOriginalName(int idx)\n\n"},
  {"GetPointArrayNewName", PyvtkArrayRename_GetPointArrayNewName, METH_VARARGS,
   "GetPointArrayNewName(self, idx:int) -> str\nC++: const char *GetPointArrayNewName(int idx)\n\n"},
  {"SetPointArrayName", PyvtkArrayRename_SetPointArrayName, METH_VARARGS,
   "SetPointArrayName(self, idx:int, newName:str) -> None\nC++: void SetPointArrayName(int idx, const char *newName)\nSetPointArrayName(self, inputName:str, newName:str) -> None\nC++: void SetPointArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearPointMapping", PyvtkArrayRename_ClearPointMapping, METH_VARARGS,
   "ClearPointMapping(self) -> None\nC++: void ClearPointMapping()\n\n"},
  {"GetNumberOfCellArrays", PyvtkArrayRename_GetNumberOfCellArrays, METH_VARARGS,
   "GetNumberOfCellArrays(self) -> int\nC++: int GetNumberOfCellArrays()\n\n"},
  {"GetCellArrayOriginalName", PyvtkArrayRename_GetCellArrayOriginalName, METH_VARARGS,
   "GetCellArrayOriginalName(self, idx:int) -> str\nC++: const char *GetCellArrayOriginalName(int idx)\n\n"},
  {"GetCellArrayNewName", PyvtkArrayRename_GetCellArrayNewName, METH_VARARGS,
   "GetCellArrayNewName(self, idx:int) -> str\nC++: const char *GetCellArrayNewName(int idx)\n\n"},
  {"SetCellArrayName", PyvtkArrayRename_SetCellArrayName, METH_VARARGS,
   "SetCellArrayName(self, idx:int, newName:str) -> None\nC++: void SetCellArrayName(int idx, const char *newName)\nSetCellArrayName(self, inputName:str, newName:str) -> None\nC++: void SetCellArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearCellMapping", PyvtkArrayRename_ClearCellMapping, METH_VARARGS,
   "ClearCellMapping(self) -> None\nC++: void ClearCellMapping()\n\n"},
  {"GetNumberOfFieldArrays", PyvtkArrayRename_GetNumberOfFieldArrays, METH_VARARGS,
   "GetNumberOfFieldArrays(self) -> int\nC++: int GetNumberOfFieldArrays()\n\n"},
  {"GetFieldArrayOriginalName", PyvtkArrayRename_GetFieldArrayOriginalName, METH_VARARGS,
   "GetFieldArrayOriginalName(self, idx:int) -> str\nC++: const char *GetFieldArrayOriginalName(int idx)\n\n"},
  {"GetFieldArrayNewName", PyvtkArrayRename_GetFieldArrayNewName, METH_VARARGS,
   "GetFieldArrayNewName(self, idx:int) -> str\nC++: const char *GetFieldArrayNewName(int idx)\n\n"},
  {"SetFieldArrayName", PyvtkArrayRename_SetFieldArrayName, METH_VARARGS,
   "SetFieldArrayName(self, idx:int, newName:str) -> None\nC++: void SetFieldArrayName(int idx, const char *newName)\nSetFieldArrayName(self, inputName:str, newName:str) -> None\nC++: void SetFieldArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearFieldMapping", PyvtkArrayRename_ClearFieldMapping, METH_VARARGS,
   "ClearFieldMapping(self) -> None\nC++: void ClearFieldMapping()\n\n"},
  {"GetNumberOfVertexArrays", PyvtkArrayRename_GetNumberOfVertexArrays, METH_VARARGS,
   "GetNumberOfVertexArrays(self) -> int\nC++: int GetNumberOfVertexArrays()\n\n"},
  {"GetVertexArrayOriginalName", PyvtkArrayRename_GetVertexArrayOriginalName, METH_VARARGS,
   "GetVertexArrayOriginalName(self, idx:int) -> str\nC++: const char *GetVertexArrayOriginalName(int idx)\n\n"},
  {"GetVertexArrayNewName", PyvtkArrayRename_GetVertexArrayNewName, METH_VARARGS,
   "GetVertexArrayNewName(self, idx:int) -> str\nC++: const char *GetVertexArrayNewName(int idx)\n\n"},
  {"SetVertexArrayName", PyvtkArrayRename_SetVertexArrayName, METH_VARARGS,
   "SetVertexArrayName(self, idx:int, newName:str) -> None\nC++: void SetVertexArrayName(int idx, const char *newName)\nSetVertexArrayName(self, inputName:str, newName:str) -> None\nC++: void SetVertexArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearVertexMapping", PyvtkArrayRename_ClearVertexMapping, METH_VARARGS,
   "ClearVertexMapping(self) -> None\nC++: void ClearVertexMapping()\n\n"},
  {"GetNumberOfEdgeArrays", PyvtkArrayRename_GetNumberOfEdgeArrays, METH_VARARGS,
   "GetNumberOfEdgeArrays(self) -> int\nC++: int GetNumberOfEdgeArrays()\n\n"},
  {"GetEdgeArrayOriginalName", PyvtkArrayRename_GetEdgeArrayOriginalName, METH_VARARGS,
   "GetEdgeArrayOriginalName(self, idx:int) -> str\nC++: const char *GetEdgeArrayOriginalName(int idx)\n\n"},
  {"GetEdgeArrayNewName", PyvtkArrayRename_GetEdgeArrayNewName, METH_VARARGS,
   "GetEdgeArrayNewName(self, idx:int) -> str\nC++: const char *GetEdgeArrayNewName(int idx)\n\n"},
  {"SetEdgeArrayName", PyvtkArrayRename_SetEdgeArrayName, METH_VARARGS,
   "SetEdgeArrayName(self, idx:int, newName:str) -> None\nC++: void SetEdgeArrayName(int idx, const char *newName)\nSetEdgeArrayName(self, inputName:str, newName:str) -> None\nC++: void SetEdgeArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearEdgeMapping", PyvtkArrayRename_ClearEdgeMapping, METH_VARARGS,
   "ClearEdgeMapping(self) -> None\nC++: void ClearEdgeMapping()\n\n"},
  {"GetNumberOfRowArrays", PyvtkArrayRename_GetNumberOfRowArrays, METH_VARARGS,
   "GetNumberOfRowArrays(self) -> int\nC++: int GetNumberOfRowArrays()\n\n"},
  {"GetRowArrayOriginalName", PyvtkArrayRename_GetRowArrayOriginalName, METH_VARARGS,
   "GetRowArrayOriginalName(self, idx:int) -> str\nC++: const char *GetRowArrayOriginalName(int idx)\n\n"},
  {"GetRowArrayNewName", PyvtkArrayRename_GetRowArrayNewName, METH_VARARGS,
   "GetRowArrayNewName(self, idx:int) -> str\nC++: const char *GetRowArrayNewName(int idx)\n\n"},
  {"SetRowArrayName", PyvtkArrayRename_SetRowArrayName, METH_VARARGS,
   "SetRowArrayName(self, idx:int, newName:str) -> None\nC++: void SetRowArrayName(int idx, const char *newName)\nSetRowArrayName(self, inputName:str, newName:str) -> None\nC++: void SetRowArrayName(const char *inputName,\n    const char *newName)\n\n"},
  {"ClearRowMapping", PyvtkArrayRename_ClearRowMapping, METH_VARARGS,
   "ClearRowMapping(self) -> None\nC++: void ClearRowMapping()\n\n"},
  {"ClearAll", PyvtkArrayRename_ClearAll, METH_VARARGS,
   "ClearAll(self) -> None\nC++: void ClearAll()\n\nClear name mappings for all attribute types.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkArrayRename_Doc =
  "vtkArrayRename - Rename data arrays.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "This class takes any vtkDataObject as input, shallow copies its\n"
  "content to\n"
  " the output and renames its data arrays.\n\n\n"
  " For each attributes type, array name should be unique.\n\n\n"
  " Supported attributes type are the following: POINT, CELL, FIELD,\n"
  "VERTEX, EDGE and ROW.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkArrayRename_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkArrayRename", // tp_name
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
  PyvtkArrayRename_Doc, // tp_doc
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

static vtkObjectBase *PyvtkArrayRename_StaticNew()
{
  return vtkArrayRename::New();
}

PyObject *PyvtkArrayRename_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkArrayRename_Type, PyvtkArrayRename_Methods,
    "vtkArrayRename",
 &PyvtkArrayRename_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkArrayRename(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkArrayRename_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkArrayRename", o) != 0)
  {
    Py_DECREF(o);
  }

}

