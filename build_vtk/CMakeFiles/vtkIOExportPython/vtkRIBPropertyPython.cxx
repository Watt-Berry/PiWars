// python wrapper for vtkRIBProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRIBProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRIBProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkRIBProperty_ClassNew(); }


static PyObject *
PyvtkRIBProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRIBProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRIBProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRIBProperty *tempr = vtkRIBProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRIBProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRIBProperty::NewInstance());

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
PyvtkRIBProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRIBProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRIBProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShaderUsesDefaultParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShaderUsesDefaultParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShaderUsesDefaultParameters(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShaderUsesDefaultParameters(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShaderUsesDefaultParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShaderUsesDefaultParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceShaderUsesDefaultParameters() :
      op->vtkRIBProperty::GetSurfaceShaderUsesDefaultParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceShaderUsesDefaultParametersOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceShaderUsesDefaultParametersOn();
    }
    else
    {
      op->vtkRIBProperty::SurfaceShaderUsesDefaultParametersOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceShaderUsesDefaultParametersOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceShaderUsesDefaultParametersOff();
    }
    else
    {
      op->vtkRIBProperty::SurfaceShaderUsesDefaultParametersOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShader(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSurfaceShader() :
      op->vtkRIBProperty::GetSurfaceShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementShader(temp0);
    }
    else
    {
      op->vtkRIBProperty::SetDisplacementShader(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDisplacementShader(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShader");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementShader() :
      op->vtkRIBProperty::GetDisplacementShader());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetVariable(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddVariable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVariable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddVariable(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddVariable(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDeclarations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeclarations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDeclarations() :
      op->vtkRIBProperty::GetDeclarations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetSurfaceShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetSurfaceShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddSurfaceShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSurfaceShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddSurfaceShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddSurfaceShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_SetDisplacementShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::SetDisplacementShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_AddDisplacementShaderParameter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDisplacementShaderParameter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddDisplacementShaderParameter(temp0, temp1);
    }
    else
    {
      op->vtkRIBProperty::AddDisplacementShaderParameter(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetParameters() :
      op->vtkRIBProperty::GetParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetSurfaceShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSurfaceShaderParameters() :
      op->vtkRIBProperty::GetSurfaceShaderParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRIBProperty_GetDisplacementShaderParameters(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShaderParameters");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRIBProperty *op = static_cast<vtkRIBProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetDisplacementShaderParameters() :
      op->vtkRIBProperty::GetDisplacementShaderParameters());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRIBProperty_Methods[] = {
  {"IsTypeOf", PyvtkRIBProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRIBProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRIBProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRIBProperty\nC++: static vtkRIBProperty *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRIBProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRIBProperty\nC++: vtkRIBProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRIBProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRIBProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSurfaceShaderUsesDefaultParameters", PyvtkRIBProperty_SetSurfaceShaderUsesDefaultParameters, METH_VARARGS,
   "SetSurfaceShaderUsesDefaultParameters(self, _arg:bool) -> None\nC++: virtual void SetSurfaceShaderUsesDefaultParameters(bool _arg)\n\nIf true (default) the surface shader uses the usual shader\nparameters: Ka - Ambient amount Kd - Diffuse amount Ks - Specular\namount Roughness SpecularColor Additional surface shader\nparameters can be added with the Set/AddSurfaceShaderParameter\nmethods. If false, all surface shader parameters must be\nspecified\n"},
  {"GetSurfaceShaderUsesDefaultParameters", PyvtkRIBProperty_GetSurfaceShaderUsesDefaultParameters, METH_VARARGS,
   "GetSurfaceShaderUsesDefaultParameters(self) -> bool\nC++: virtual bool GetSurfaceShaderUsesDefaultParameters()\n\n"},
  {"SurfaceShaderUsesDefaultParametersOn", PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOn, METH_VARARGS,
   "SurfaceShaderUsesDefaultParametersOn(self) -> None\nC++: virtual void SurfaceShaderUsesDefaultParametersOn()\n\n"},
  {"SurfaceShaderUsesDefaultParametersOff", PyvtkRIBProperty_SurfaceShaderUsesDefaultParametersOff, METH_VARARGS,
   "SurfaceShaderUsesDefaultParametersOff(self) -> None\nC++: virtual void SurfaceShaderUsesDefaultParametersOff()\n\n"},
  {"SetSurfaceShader", PyvtkRIBProperty_SetSurfaceShader, METH_VARARGS,
   "SetSurfaceShader(self, _arg:str) -> None\nC++: virtual void SetSurfaceShader(const char *_arg)\n\nSpecify the name of a surface shader.\n"},
  {"GetSurfaceShader", PyvtkRIBProperty_GetSurfaceShader, METH_VARARGS,
   "GetSurfaceShader(self) -> str\nC++: virtual char *GetSurfaceShader()\n\n"},
  {"SetDisplacementShader", PyvtkRIBProperty_SetDisplacementShader, METH_VARARGS,
   "SetDisplacementShader(self, _arg:str) -> None\nC++: virtual void SetDisplacementShader(const char *_arg)\n\nSpecify the name of a displacement shader.\n"},
  {"GetDisplacementShader", PyvtkRIBProperty_GetDisplacementShader, METH_VARARGS,
   "GetDisplacementShader(self) -> str\nC++: virtual char *GetDisplacementShader()\n\n"},
  {"SetVariable", PyvtkRIBProperty_SetVariable, METH_VARARGS,
   "SetVariable(self, variable:str, declaration:str) -> None\nC++: void SetVariable(const char *variable,\n    const char *declaration)\n\nSpecify declarations for variables.\n"},
  {"AddVariable", PyvtkRIBProperty_AddVariable, METH_VARARGS,
   "AddVariable(self, variable:str, declaration:str) -> None\nC++: void AddVariable(const char *variable,\n    const char *declaration)\n\n"},
  {"GetDeclarations", PyvtkRIBProperty_GetDeclarations, METH_VARARGS,
   "GetDeclarations(self) -> str\nC++: char *GetDeclarations()\n\nGet variable declarations\n"},
  {"SetParameter", PyvtkRIBProperty_SetParameter, METH_VARARGS,
   "SetParameter(self, parameter:str, value:str) -> None\nC++: void SetParameter(const char *parameter, const char *value)\n\nSpecify parameter values for variables. DEPRECATED: use\n(Set/Add)SurfaceShaderParameter instead.\n"},
  {"AddParameter", PyvtkRIBProperty_AddParameter, METH_VARARGS,
   "AddParameter(self, parameter:str, value:str) -> None\nC++: void AddParameter(const char *parameter, const char *value)\n\n"},
  {"SetSurfaceShaderParameter", PyvtkRIBProperty_SetSurfaceShaderParameter, METH_VARARGS,
   "SetSurfaceShaderParameter(self, parameter:str, value:str) -> None\nC++: void SetSurfaceShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for surface shader parameters\n"},
  {"AddSurfaceShaderParameter", PyvtkRIBProperty_AddSurfaceShaderParameter, METH_VARARGS,
   "AddSurfaceShaderParameter(self, parameter:str, value:str) -> None\nC++: void AddSurfaceShaderParameter(const char *parameter,\n    const char *value)\n\n"},
  {"SetDisplacementShaderParameter", PyvtkRIBProperty_SetDisplacementShaderParameter, METH_VARARGS,
   "SetDisplacementShaderParameter(self, parameter:str, value:str)\n    -> None\nC++: void SetDisplacementShaderParameter(const char *parameter,\n    const char *value)\n\nSpecify parameter values for displacement shader parameters\n"},
  {"AddDisplacementShaderParameter", PyvtkRIBProperty_AddDisplacementShaderParameter, METH_VARARGS,
   "AddDisplacementShaderParameter(self, parameter:str, value:str)\n    -> None\nC++: void AddDisplacementShaderParameter(const char *parameter,\n    const char *value)\n\n"},
  {"GetParameters", PyvtkRIBProperty_GetParameters, METH_VARARGS,
   "GetParameters(self) -> str\nC++: char *GetParameters()\n\nGet parameters.\n"},
  {"GetSurfaceShaderParameters", PyvtkRIBProperty_GetSurfaceShaderParameters, METH_VARARGS,
   "GetSurfaceShaderParameters(self) -> str\nC++: char *GetSurfaceShaderParameters()\n\n"},
  {"GetDisplacementShaderParameters", PyvtkRIBProperty_GetDisplacementShaderParameters, METH_VARARGS,
   "GetDisplacementShaderParameters(self) -> str\nC++: char *GetDisplacementShaderParameters()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRIBProperty_Doc =
  "vtkRIBProperty - RIP Property\n\n"
  "Superclass: vtkProperty\n\n"
  "vtkRIBProperty is a subclass of vtkProperty that allows the user to\n"
  "specify named shaders for use with RenderMan. Both surface and\n"
  "displacement shaders can be specified. Parameters for the shaders can\n"
  "be declared and set.\n\n"
  "@sa\n"
  "vtkRIBExporter vtkRIBLight\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRIBProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkRIBProperty", // tp_name
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
  PyvtkRIBProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRIBProperty_StaticNew()
{
  return vtkRIBProperty::New();
}

PyObject *PyvtkRIBProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRIBProperty_Type, PyvtkRIBProperty_Methods,
    "vtkRIBProperty",
 &PyvtkRIBProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkProperty");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRIBProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRIBProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRIBProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

