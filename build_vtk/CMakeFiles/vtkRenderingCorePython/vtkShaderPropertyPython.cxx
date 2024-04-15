// python wrapper for vtkShaderProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkShaderProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkShaderProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkShaderProperty_ClassNew(); }


static PyObject *
PyvtkShaderProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkShaderProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkShaderProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkShaderProperty *tempr = vtkShaderProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkShaderProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkShaderProperty::NewInstance());

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
PyvtkShaderProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkShaderProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkShaderProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  vtkShaderProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkShaderProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkShaderProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetShaderMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShaderMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetShaderMTime() :
      op->vtkShaderProperty::GetShaderMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_HasVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasVertexShaderCode() :
      op->vtkShaderProperty::HasVertexShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_HasFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasFragmentShaderCode() :
      op->vtkShaderProperty::HasFragmentShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_HasGeometryShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasGeometryShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasGeometryShaderCode() :
      op->vtkShaderProperty::HasGeometryShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_SetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexShaderCode(temp0);
    }
    else
    {
      op->vtkShaderProperty::SetVertexShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetVertexShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetVertexShaderCode() :
      op->vtkShaderProperty::GetVertexShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_SetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFragmentShaderCode(temp0);
    }
    else
    {
      op->vtkShaderProperty::SetFragmentShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetFragmentShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFragmentShaderCode() :
      op->vtkShaderProperty::GetFragmentShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_SetGeometryShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometryShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGeometryShaderCode(temp0);
    }
    else
    {
      op->vtkShaderProperty::SetGeometryShaderCode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetGeometryShaderCode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryShaderCode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetGeometryShaderCode() :
      op->vtkShaderProperty::GetGeometryShaderCode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetFragmentCustomUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFragmentCustomUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniforms *tempr = (ap.IsBound() ?
      op->GetFragmentCustomUniforms() :
      op->vtkShaderProperty::GetFragmentCustomUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetVertexCustomUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexCustomUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniforms *tempr = (ap.IsBound() ?
      op->GetVertexCustomUniforms() :
      op->vtkShaderProperty::GetVertexCustomUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetGeometryCustomUniforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometryCustomUniforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUniforms *tempr = (ap.IsBound() ?
      op->GetGeometryCustomUniforms() :
      op->vtkShaderProperty::GetGeometryCustomUniforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_AddVertexShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertexShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->AddVertexShaderReplacement(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_AddFragmentShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFragmentShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->AddFragmentShaderReplacement(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_AddGeometryShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGeometryShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    op->AddGeometryShaderReplacement(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetNumberOfShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfShaderReplacements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetNthShaderReplacementTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthShaderReplacementTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = op->GetNthShaderReplacementTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_GetNthShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  long long temp0;
  std::string temp1;
  bool temp2;
  std::string temp3;
  bool temp4;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    op->GetNthShaderReplacement(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearVertexShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVertexShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->ClearVertexShaderReplacement(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearFragmentShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFragmentShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->ClearFragmentShaderReplacement(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearGeometryShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearGeometryShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    op->ClearGeometryShaderReplacement(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearAllVertexShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllVertexShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearAllVertexShaderReplacements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearAllFragmentShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllFragmentShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearAllFragmentShaderReplacements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearAllGeometryShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllGeometryShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearAllGeometryShaderReplacements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkShaderProperty_ClearAllShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkShaderProperty *op = static_cast<vtkShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->ClearAllShaderReplacements();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkShaderProperty_Methods[] = {
  {"IsTypeOf", PyvtkShaderProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkShaderProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkShaderProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkShaderProperty\nC++: static vtkShaderProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkShaderProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkShaderProperty\nC++: vtkShaderProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkShaderProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkShaderProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkShaderProperty_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkShaderProperty) -> None\nC++: void DeepCopy(vtkShaderProperty *p)\n\nAssign one property to another.\n"},
  {"GetShaderMTime", PyvtkShaderProperty_GetShaderMTime, METH_VARARGS,
   "GetShaderMTime(self) -> int\nC++: vtkMTimeType GetShaderMTime()\n\nGetShaderMTime returns the last time a modification\nwas made that affected the code of the shader (either code\nreplacement was changed or one or more uniform variables were\nadded or removed. This timestamp can be used by mappers to\ndetermine if the shader must be recompiled. Simply changing the\nvalue of an existing uniform variable doesn't affect this\ntimestamp as it doesn't change the shader code.\n@return timestamp of the last modification\n"},
  {"HasVertexShaderCode", PyvtkShaderProperty_HasVertexShaderCode, METH_VARARGS,
   "HasVertexShaderCode(self) -> bool\nC++: bool HasVertexShaderCode()\n\nAllow the program to set the shader codes used directly instead\nof using the built in templates. Be aware, if set, this template\nwill be used for all cases, primitive types, picking etc.\n"},
  {"HasFragmentShaderCode", PyvtkShaderProperty_HasFragmentShaderCode, METH_VARARGS,
   "HasFragmentShaderCode(self) -> bool\nC++: bool HasFragmentShaderCode()\n\n"},
  {"HasGeometryShaderCode", PyvtkShaderProperty_HasGeometryShaderCode, METH_VARARGS,
   "HasGeometryShaderCode(self) -> bool\nC++: bool HasGeometryShaderCode()\n\n"},
  {"SetVertexShaderCode", PyvtkShaderProperty_SetVertexShaderCode, METH_VARARGS,
   "SetVertexShaderCode(self, _arg:str) -> None\nC++: virtual void SetVertexShaderCode(const char *_arg)\n\n"},
  {"GetVertexShaderCode", PyvtkShaderProperty_GetVertexShaderCode, METH_VARARGS,
   "GetVertexShaderCode(self) -> str\nC++: virtual char *GetVertexShaderCode()\n\n"},
  {"SetFragmentShaderCode", PyvtkShaderProperty_SetFragmentShaderCode, METH_VARARGS,
   "SetFragmentShaderCode(self, _arg:str) -> None\nC++: virtual void SetFragmentShaderCode(const char *_arg)\n\n"},
  {"GetFragmentShaderCode", PyvtkShaderProperty_GetFragmentShaderCode, METH_VARARGS,
   "GetFragmentShaderCode(self) -> str\nC++: virtual char *GetFragmentShaderCode()\n\n"},
  {"SetGeometryShaderCode", PyvtkShaderProperty_SetGeometryShaderCode, METH_VARARGS,
   "SetGeometryShaderCode(self, _arg:str) -> None\nC++: virtual void SetGeometryShaderCode(const char *_arg)\n\n"},
  {"GetGeometryShaderCode", PyvtkShaderProperty_GetGeometryShaderCode, METH_VARARGS,
   "GetGeometryShaderCode(self) -> str\nC++: virtual char *GetGeometryShaderCode()\n\n"},
  {"GetFragmentCustomUniforms", PyvtkShaderProperty_GetFragmentCustomUniforms, METH_VARARGS,
   "GetFragmentCustomUniforms(self) -> vtkUniforms\nC++: virtual vtkUniforms *GetFragmentCustomUniforms()\n\nThe Uniforms object allows to set custom uniform variables that\nare used in replacement shader code.\n"},
  {"GetVertexCustomUniforms", PyvtkShaderProperty_GetVertexCustomUniforms, METH_VARARGS,
   "GetVertexCustomUniforms(self) -> vtkUniforms\nC++: virtual vtkUniforms *GetVertexCustomUniforms()\n\n"},
  {"GetGeometryCustomUniforms", PyvtkShaderProperty_GetGeometryCustomUniforms, METH_VARARGS,
   "GetGeometryCustomUniforms(self) -> vtkUniforms\nC++: virtual vtkUniforms *GetGeometryCustomUniforms()\n\n"},
  {"AddVertexShaderReplacement", PyvtkShaderProperty_AddVertexShaderReplacement, METH_VARARGS,
   "AddVertexShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: virtual void AddVertexShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"AddFragmentShaderReplacement", PyvtkShaderProperty_AddFragmentShaderReplacement, METH_VARARGS,
   "AddFragmentShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: virtual void AddFragmentShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\n"},
  {"AddGeometryShaderReplacement", PyvtkShaderProperty_AddGeometryShaderReplacement, METH_VARARGS,
   "AddGeometryShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: virtual void AddGeometryShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\n"},
  {"GetNumberOfShaderReplacements", PyvtkShaderProperty_GetNumberOfShaderReplacements, METH_VARARGS,
   "GetNumberOfShaderReplacements(self) -> int\nC++: virtual int GetNumberOfShaderReplacements()\n\n"},
  {"GetNthShaderReplacementTypeAsString", PyvtkShaderProperty_GetNthShaderReplacementTypeAsString, METH_VARARGS,
   "GetNthShaderReplacementTypeAsString(self, index:int) -> str\nC++: virtual std::string GetNthShaderReplacementTypeAsString(\n    vtkIdType index)\n\n"},
  {"GetNthShaderReplacement", PyvtkShaderProperty_GetNthShaderReplacement, METH_VARARGS,
   "GetNthShaderReplacement(self, index:int, name:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: virtual void GetNthShaderReplacement(vtkIdType index,\n    std::string &name, bool &replaceFirst,\n    std::string &replacementValue, bool &replaceAll)\n\n"},
  {"ClearVertexShaderReplacement", PyvtkShaderProperty_ClearVertexShaderReplacement, METH_VARARGS,
   "ClearVertexShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: virtual void ClearVertexShaderReplacement(\n    const std::string &originalValue, bool replaceFirst)\n\n"},
  {"ClearFragmentShaderReplacement", PyvtkShaderProperty_ClearFragmentShaderReplacement, METH_VARARGS,
   "ClearFragmentShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: virtual void ClearFragmentShaderReplacement(\n    const std::string &originalValue, bool replaceFirst)\n\n"},
  {"ClearGeometryShaderReplacement", PyvtkShaderProperty_ClearGeometryShaderReplacement, METH_VARARGS,
   "ClearGeometryShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: virtual void ClearGeometryShaderReplacement(\n    const std::string &originalValue, bool replaceFirst)\n\n"},
  {"ClearAllVertexShaderReplacements", PyvtkShaderProperty_ClearAllVertexShaderReplacements, METH_VARARGS,
   "ClearAllVertexShaderReplacements(self) -> None\nC++: virtual void ClearAllVertexShaderReplacements()\n\n"},
  {"ClearAllFragmentShaderReplacements", PyvtkShaderProperty_ClearAllFragmentShaderReplacements, METH_VARARGS,
   "ClearAllFragmentShaderReplacements(self) -> None\nC++: virtual void ClearAllFragmentShaderReplacements()\n\n"},
  {"ClearAllGeometryShaderReplacements", PyvtkShaderProperty_ClearAllGeometryShaderReplacements, METH_VARARGS,
   "ClearAllGeometryShaderReplacements(self) -> None\nC++: virtual void ClearAllGeometryShaderReplacements()\n\n"},
  {"ClearAllShaderReplacements", PyvtkShaderProperty_ClearAllShaderReplacements, METH_VARARGS,
   "ClearAllShaderReplacements(self) -> None\nC++: virtual void ClearAllShaderReplacements()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkShaderProperty_Doc =
  "vtkShaderProperty - represent GPU shader properties\n\n"
  "Superclass: vtkObject\n\n"
  "vtkShaderProperty is used to hold user-defined modifications of a GPU\n"
  "shader program used in a mapper.\n\n"
  "@sa\n"
  "vtkVolume vtkOpenGLUniform\n\n"
  "@par Thanks: Developed by Simon Drouin (sdrouin2@bwh.harvard.edu) at\n"
  "Brigham and Women's Hospital.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkShaderProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkShaderProperty", // tp_name
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
  PyvtkShaderProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkShaderProperty_StaticNew()
{
  return vtkShaderProperty::New();
}

PyObject *PyvtkShaderProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkShaderProperty_Type, PyvtkShaderProperty_Methods,
    "vtkShaderProperty",
 &PyvtkShaderProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkShaderProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkShaderProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkShaderProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

