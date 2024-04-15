// python wrapper for vtkOpenGLShaderProperty
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkShader.h"
#include "vtkOpenGLShaderProperty.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLShaderProperty(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLShaderProperty_ClassNew(); }


static PyObject *
PyvtkOpenGLShaderProperty_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLShaderProperty::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLShaderProperty::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLShaderProperty *tempr = vtkOpenGLShaderProperty::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLShaderProperty *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLShaderProperty::NewInstance());

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
PyvtkOpenGLShaderProperty_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLShaderProperty::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLShaderProperty::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  vtkOpenGLShaderProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkOpenGLShaderProperty"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkOpenGLShaderProperty::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_AddVertexShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddVertexShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddVertexShaderReplacement(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLShaderProperty::AddVertexShaderReplacement(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_AddFragmentShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddFragmentShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddFragmentShaderReplacement(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLShaderProperty::AddFragmentShaderReplacement(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_AddGeometryShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddGeometryShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  std::string temp2;
  bool temp3 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->AddGeometryShaderReplacement(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLShaderProperty::AddGeometryShaderReplacement(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_GetNumberOfShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfShaderReplacements() :
      op->vtkOpenGLShaderProperty::GetNumberOfShaderReplacements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_GetNthShaderReplacementTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthShaderReplacementTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetNthShaderReplacementTypeAsString(temp0) :
      op->vtkOpenGLShaderProperty::GetNthShaderReplacementTypeAsString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_GetNthShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  long long temp0;
  std::string temp1;
  bool temp2;
  std::string temp3;
  bool temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->GetNthShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLShaderProperty::GetNthShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }

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
PyvtkOpenGLShaderProperty_ClearVertexShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearVertexShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ClearVertexShaderReplacement(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearVertexShaderReplacement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearFragmentShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearFragmentShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ClearFragmentShaderReplacement(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearFragmentShaderReplacement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearGeometryShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearGeometryShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  std::string temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->ClearGeometryShaderReplacement(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearGeometryShaderReplacement(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearAllVertexShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllVertexShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllVertexShaderReplacements();
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearAllVertexShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearAllFragmentShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllFragmentShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllFragmentShaderReplacements();
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearAllFragmentShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearAllGeometryShaderReplacements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllGeometryShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllGeometryShaderReplacements();
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearAllGeometryShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearAllShaderReplacements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllShaderReplacements();
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearAllShaderReplacements();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderProperty_ClearAllShaderReplacements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllShaderReplacements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  vtkShader::Type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkShader.Type"))
  {
    if (ap.IsBound())
    {
      op->ClearAllShaderReplacements(temp0);
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearAllShaderReplacements(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkOpenGLShaderProperty_ClearAllShaderReplacements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkOpenGLShaderProperty_ClearAllShaderReplacements_s1(self, args);
    case 1:
      return PyvtkOpenGLShaderProperty_ClearAllShaderReplacements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ClearAllShaderReplacements");
  return nullptr;
}


static PyObject *
PyvtkOpenGLShaderProperty_AddShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  vtkShader::Type temp0;
  std::string temp1;
  bool temp2 = false;
  std::string temp3;
  bool temp4 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetEnumValue(temp0, "vtkShader.Type") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->AddShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkOpenGLShaderProperty::AddShaderReplacement(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLShaderProperty_ClearShaderReplacement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearShaderReplacement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLShaderProperty *op = static_cast<vtkOpenGLShaderProperty *>(vp);

  vtkShader::Type temp0;
  std::string temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetEnumValue(temp0, "vtkShader.Type") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ClearShaderReplacement(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLShaderProperty::ClearShaderReplacement(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLShaderProperty_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLShaderProperty_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLShaderProperty_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLShaderProperty_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLShaderProperty\nC++: static vtkOpenGLShaderProperty *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLShaderProperty_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLShaderProperty\nC++: vtkOpenGLShaderProperty *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLShaderProperty_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLShaderProperty_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DeepCopy", PyvtkOpenGLShaderProperty_DeepCopy, METH_VARARGS,
   "DeepCopy(self, p:vtkOpenGLShaderProperty) -> None\nC++: void DeepCopy(vtkOpenGLShaderProperty *p)\n\nAssign one property to another.\n"},
  {"AddVertexShaderReplacement", PyvtkOpenGLShaderProperty_AddVertexShaderReplacement, METH_VARARGS,
   "AddVertexShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: void AddVertexShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n    override;\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"AddFragmentShaderReplacement", PyvtkOpenGLShaderProperty_AddFragmentShaderReplacement, METH_VARARGS,
   "AddFragmentShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: void AddFragmentShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n    override;\n\n"},
  {"AddGeometryShaderReplacement", PyvtkOpenGLShaderProperty_AddGeometryShaderReplacement, METH_VARARGS,
   "AddGeometryShaderReplacement(self, originalValue:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: void AddGeometryShaderReplacement(\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n    override;\n\n"},
  {"GetNumberOfShaderReplacements", PyvtkOpenGLShaderProperty_GetNumberOfShaderReplacements, METH_VARARGS,
   "GetNumberOfShaderReplacements(self) -> int\nC++: int GetNumberOfShaderReplacements() override;\n\n"},
  {"GetNthShaderReplacementTypeAsString", PyvtkOpenGLShaderProperty_GetNthShaderReplacementTypeAsString, METH_VARARGS,
   "GetNthShaderReplacementTypeAsString(self, index:int) -> str\nC++: std::string GetNthShaderReplacementTypeAsString(\n    vtkIdType index) override;\n\n"},
  {"GetNthShaderReplacement", PyvtkOpenGLShaderProperty_GetNthShaderReplacement, METH_VARARGS,
   "GetNthShaderReplacement(self, index:int, name:str,\n    replaceFirst:bool, replacementValue:str, replaceAll:bool)\n    -> None\nC++: void GetNthShaderReplacement(vtkIdType index,\n    std::string &name, bool &replaceFirst,\n    std::string &replacementValue, bool &replaceAll) override;\n\n"},
  {"ClearVertexShaderReplacement", PyvtkOpenGLShaderProperty_ClearVertexShaderReplacement, METH_VARARGS,
   "ClearVertexShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: void ClearVertexShaderReplacement(\n    const std::string &originalValue, bool replaceFirst) override;\n\n"},
  {"ClearFragmentShaderReplacement", PyvtkOpenGLShaderProperty_ClearFragmentShaderReplacement, METH_VARARGS,
   "ClearFragmentShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: void ClearFragmentShaderReplacement(\n    const std::string &originalValue, bool replaceFirst) override;\n\n"},
  {"ClearGeometryShaderReplacement", PyvtkOpenGLShaderProperty_ClearGeometryShaderReplacement, METH_VARARGS,
   "ClearGeometryShaderReplacement(self, originalValue:str,\n    replaceFirst:bool) -> None\nC++: void ClearGeometryShaderReplacement(\n    const std::string &originalValue, bool replaceFirst) override;\n\n"},
  {"ClearAllVertexShaderReplacements", PyvtkOpenGLShaderProperty_ClearAllVertexShaderReplacements, METH_VARARGS,
   "ClearAllVertexShaderReplacements(self) -> None\nC++: void ClearAllVertexShaderReplacements() override;\n\n"},
  {"ClearAllFragmentShaderReplacements", PyvtkOpenGLShaderProperty_ClearAllFragmentShaderReplacements, METH_VARARGS,
   "ClearAllFragmentShaderReplacements(self) -> None\nC++: void ClearAllFragmentShaderReplacements() override;\n\n"},
  {"ClearAllGeometryShaderReplacements", PyvtkOpenGLShaderProperty_ClearAllGeometryShaderReplacements, METH_VARARGS,
   "ClearAllGeometryShaderReplacements(self) -> None\nC++: void ClearAllGeometryShaderReplacements() override;\n\n"},
  {"ClearAllShaderReplacements", PyvtkOpenGLShaderProperty_ClearAllShaderReplacements, METH_VARARGS,
   "ClearAllShaderReplacements(self) -> None\nC++: void ClearAllShaderReplacements() override;\nClearAllShaderReplacements(self, shaderType:vtkShader.Type)\n    -> None\nC++: void ClearAllShaderReplacements(vtkShader::Type shaderType)\n\n"},
  {"AddShaderReplacement", PyvtkOpenGLShaderProperty_AddShaderReplacement, METH_VARARGS,
   "AddShaderReplacement(self, shaderType:vtkShader.Type,\n    originalValue:str, replaceFirst:bool, replacementValue:str,\n    replaceAll:bool) -> None\nC++: void AddShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst,\n    const std::string &replacementValue, bool replaceAll)\n\nThis function enables you to apply your own substitutions to the\nshader creation process. The shader code in this class is created\nby applying a bunch of string replacements to a shader template.\nUsing this function you can apply your own string replacements to\nadd features you desire.\n"},
  {"ClearShaderReplacement", PyvtkOpenGLShaderProperty_ClearShaderReplacement, METH_VARARGS,
   "ClearShaderReplacement(self, shaderType:vtkShader.Type,\n    originalValue:str, replaceFirst:bool) -> None\nC++: void ClearShaderReplacement(vtkShader::Type shaderType,\n    const std::string &originalValue, bool replaceFirst)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLShaderProperty_Doc =
  "vtkOpenGLShaderProperty - represent GPU shader properties\n\n"
  "Superclass: vtkShaderProperty\n\n"
  "vtkOpenGLShaderProperty is used to hold user-defined modifications of\n"
  "a GPU shader program used in a mapper.\n\n"
  "@sa\n"
  "vtkShaderProperty vtkUniforms vtkOpenGLUniform\n\n"
  "@par Thanks: Developed by Simon Drouin (sdrouin2@bwh.harvard.edu) at\n"
  "Brigham and Women's Hospital.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLShaderProperty_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLShaderProperty", // tp_name
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
  PyvtkOpenGLShaderProperty_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLShaderProperty_StaticNew()
{
  return vtkOpenGLShaderProperty::New();
}

PyObject *PyvtkOpenGLShaderProperty_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLShaderProperty_Type, PyvtkOpenGLShaderProperty_Methods,
    "vtkOpenGLShaderProperty",
 &PyvtkOpenGLShaderProperty_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkShaderProperty");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLShaderProperty(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLShaderProperty_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLShaderProperty", o) != 0)
  {
    Py_DECREF(o);
  }

}

