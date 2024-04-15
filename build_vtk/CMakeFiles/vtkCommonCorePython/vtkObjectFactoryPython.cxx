// python wrapper for vtkObjectFactory
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectFactory.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkObjectFactory(PyObject *dict); }
extern "C" { PyObject *PyvtkObjectFactory_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkObjectFactory_CreateInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateInstance");

  const char *temp0 = nullptr;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkObject *tempr = vtkObjectFactory::CreateInstance(temp0, temp1);

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
PyvtkObjectFactory_CreateAllInstance(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CreateAllInstance");

  const char *temp0 = nullptr;
  vtkCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkCollection"))
  {
    vtkObjectFactory::CreateAllInstance(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_ReHash(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ReHash");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObjectFactory::ReHash();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_RegisterFactory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "RegisterFactory");

  vtkObjectFactory *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectFactory"))
  {
    vtkObjectFactory::RegisterFactory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_UnRegisterFactory(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterFactory");

  vtkObjectFactory *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectFactory"))
  {
    vtkObjectFactory::UnRegisterFactory(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_UnRegisterAllFactories(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "UnRegisterAllFactories");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObjectFactory::UnRegisterAllFactories();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetRegisteredFactories(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetRegisteredFactories");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObjectFactoryCollection *tempr = vtkObjectFactory::GetRegisteredFactories();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_HasOverrideAny(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HasOverrideAny");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectFactory::HasOverrideAny(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetOverrideInformation(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetOverrideInformation");

  const char *temp0 = nullptr;
  vtkOverrideInformationCollection *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOverrideInformationCollection"))
  {
    vtkObjectFactory::GetOverrideInformation(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_SetAllEnableFlags_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAllEnableFlags");

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    vtkObjectFactory::SetAllEnableFlags(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_SetAllEnableFlags_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SetAllEnableFlags");

  int temp0;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkObjectFactory::SetAllEnableFlags(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_SetAllEnableFlags(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkObjectFactory_SetAllEnableFlags_s1(self, args);
    case 3:
      return PyvtkObjectFactory_SetAllEnableFlags_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAllEnableFlags");
  return nullptr;
}


static PyObject *
PyvtkObjectFactory_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkObjectFactory::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkObjectFactory::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkObjectFactory *tempr = vtkObjectFactory::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkObjectFactory *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkObjectFactory::NewInstance());

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
PyvtkObjectFactory_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkObjectFactory::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkObjectFactory::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetVTKSourceVersion(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVTKSourceVersion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetVTKSourceVersion();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    const char *tempr = op->GetDescription();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetNumberOfOverrides(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfOverrides");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfOverrides() :
      op->vtkObjectFactory::GetNumberOfOverrides());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetClassOverrideName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideName(temp0) :
      op->vtkObjectFactory::GetClassOverrideName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetClassOverrideWithName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClassOverrideWithName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetClassOverrideWithName(temp0) :
      op->vtkObjectFactory::GetClassOverrideWithName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetEnableFlag_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableFlag(temp0) :
      op->vtkObjectFactory::GetEnableFlag(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_GetEnableFlag_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->GetEnableFlag(temp0, temp1) :
      op->vtkObjectFactory::GetEnableFlag(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_GetEnableFlag(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkObjectFactory_GetEnableFlag_s1(self, args);
    case 2:
      return PyvtkObjectFactory_GetEnableFlag_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetEnableFlag");
  return nullptr;
}


static PyObject *
PyvtkObjectFactory_GetOverrideDescription(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOverrideDescription");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOverrideDescription(temp0) :
      op->vtkObjectFactory::GetOverrideDescription(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_SetEnableFlag(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnableFlag");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

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
      op->SetEnableFlag(temp0, temp1, temp2);
    }
    else
    {
      op->vtkObjectFactory::SetEnableFlag(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_HasOverride_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->HasOverride(temp0) :
      op->vtkObjectFactory::HasOverride(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_HasOverride_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOverride");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->HasOverride(temp0, temp1) :
      op->vtkObjectFactory::HasOverride(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkObjectFactory_HasOverride(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkObjectFactory_HasOverride_s1(self, args);
    case 2:
      return PyvtkObjectFactory_HasOverride_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "HasOverride");
  return nullptr;
}


static PyObject *
PyvtkObjectFactory_Disable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Disable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->Disable(temp0);
    }
    else
    {
      op->vtkObjectFactory::Disable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkObjectFactory_GetLibraryPath(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLibraryPath");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkObjectFactory *op = static_cast<vtkObjectFactory *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLibraryPath() :
      op->vtkObjectFactory::GetLibraryPath());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkObjectFactory_Methods[] = {
  {"CreateInstance", PyvtkObjectFactory_CreateInstance, METH_VARARGS,
   "CreateInstance(vtkclassname:str, isAbstract:bool=False)\n    -> vtkObject\nC++: static vtkObject *CreateInstance(const char *vtkclassname,\n    bool isAbstract=false)\n\nCreate and return an instance of the named vtk object. Each\nloaded vtkObjectFactory will be asked in the order the factory\nwas in the VTK_AUTOLOAD_PATH.  After the first factory returns\nthe object no other factories are asked. isAbstract is no longer\nused. This method calls vtkObjectBase::InitializeObjectBase() on\nthe instance when the return value is non-nullptr.\n"},
  {"CreateAllInstance", PyvtkObjectFactory_CreateAllInstance, METH_VARARGS,
   "CreateAllInstance(vtkclassname:str, retList:vtkCollection) -> None\nC++: static void CreateAllInstance(const char *vtkclassname,\n    vtkCollection *retList)\n\nCreate all possible instances of the named vtk object. Each\nregistered vtkObjectFactory will be asked, and the result will be\nstored in the user allocated vtkCollection passed in to the\nfunction.\n"},
  {"ReHash", PyvtkObjectFactory_ReHash, METH_VARARGS,
   "ReHash() -> None\nC++: static void ReHash()\n\nRe-check the VTK_AUTOLOAD_PATH for new factory libraries. This\ncalls UnRegisterAll before re-loading\n"},
  {"RegisterFactory", PyvtkObjectFactory_RegisterFactory, METH_VARARGS,
   "RegisterFactory(__a:vtkObjectFactory) -> None\nC++: static void RegisterFactory(vtkObjectFactory *)\n\nRegister a factory so it can be used to create vtk objects\n"},
  {"UnRegisterFactory", PyvtkObjectFactory_UnRegisterFactory, METH_VARARGS,
   "UnRegisterFactory(__a:vtkObjectFactory) -> None\nC++: static void UnRegisterFactory(vtkObjectFactory *)\n\nRemove a factory from the list of registered factories\n"},
  {"UnRegisterAllFactories", PyvtkObjectFactory_UnRegisterAllFactories, METH_VARARGS,
   "UnRegisterAllFactories() -> None\nC++: static void UnRegisterAllFactories()\n\nUnregister all factories\n"},
  {"GetRegisteredFactories", PyvtkObjectFactory_GetRegisteredFactories, METH_VARARGS,
   "GetRegisteredFactories() -> vtkObjectFactoryCollection\nC++: static vtkObjectFactoryCollection *GetRegisteredFactories()\n\nReturn the list of all registered factories.  This is NOT a copy,\ndo not remove items from this list!\n"},
  {"HasOverrideAny", PyvtkObjectFactory_HasOverrideAny, METH_VARARGS,
   "HasOverrideAny(className:str) -> int\nC++: static vtkTypeBool HasOverrideAny(const char *className)\n\nreturn 1 if one of the registered factories overrides the given\nclass name\n"},
  {"GetOverrideInformation", PyvtkObjectFactory_GetOverrideInformation, METH_VARARGS,
   "GetOverrideInformation(name:str,\n    __b:vtkOverrideInformationCollection) -> None\nC++: static void GetOverrideInformation(const char *name,\n    vtkOverrideInformationCollection *)\n\nFill the given collection with all the overrides for the class\nwith the given name.\n"},
  {"SetAllEnableFlags", PyvtkObjectFactory_SetAllEnableFlags, METH_VARARGS,
   "SetAllEnableFlags(flag:int, className:str) -> None\nC++: static void SetAllEnableFlags(vtkTypeBool flag,\n    const char *className)\nSetAllEnableFlags(flag:int, className:str, subclassName:str)\n    -> None\nC++: static void SetAllEnableFlags(vtkTypeBool flag,\n    const char *className, const char *subclassName)\n\nSet the enable flag for a given named class for all registered\nfactories.\n"},
  {"IsTypeOf", PyvtkObjectFactory_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkObjectFactory_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkObjectFactory_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkObjectFactory\nC++: static vtkObjectFactory *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkObjectFactory_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkObjectFactory\nC++: vtkObjectFactory *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkObjectFactory_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkObjectFactory_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVTKSourceVersion", PyvtkObjectFactory_GetVTKSourceVersion, METH_VARARGS,
   "GetVTKSourceVersion(self) -> str\nC++: virtual const char *GetVTKSourceVersion()\n\nAll sub-classes of vtkObjectFactory should must return the\nversion of VTK they were built with.  This should be implemented\nwith the macro VTK_SOURCE_VERSION and NOT a call to\nvtkVersion::GetVTKSourceVersion. As the version needs to be\ncompiled into the file as a string constant. This is critical to\ndetermine possible incompatible dynamic factory loads.\n"},
  {"GetDescription", PyvtkObjectFactory_GetDescription, METH_VARARGS,
   "GetDescription(self) -> str\nC++: virtual const char *GetDescription()\n\nReturn a descriptive string describing the factory.\n"},
  {"GetNumberOfOverrides", PyvtkObjectFactory_GetNumberOfOverrides, METH_VARARGS,
   "GetNumberOfOverrides(self) -> int\nC++: virtual int GetNumberOfOverrides()\n\nReturn number of overrides this factory can create.\n"},
  {"GetClassOverrideName", PyvtkObjectFactory_GetClassOverrideName, METH_VARARGS,
   "GetClassOverrideName(self, index:int) -> str\nC++: virtual const char *GetClassOverrideName(int index)\n\nReturn the name of a class override at the given index.\n"},
  {"GetClassOverrideWithName", PyvtkObjectFactory_GetClassOverrideWithName, METH_VARARGS,
   "GetClassOverrideWithName(self, index:int) -> str\nC++: virtual const char *GetClassOverrideWithName(int index)\n\nReturn the name of the class that will override the class at the\ngiven index\n"},
  {"GetEnableFlag", PyvtkObjectFactory_GetEnableFlag, METH_VARARGS,
   "GetEnableFlag(self, index:int) -> int\nC++: virtual vtkTypeBool GetEnableFlag(int index)\nGetEnableFlag(self, className:str, subclassName:str) -> int\nC++: virtual vtkTypeBool GetEnableFlag(const char *className,\n    const char *subclassName)\n\nReturn the enable flag for the class at the given index.\n"},
  {"GetOverrideDescription", PyvtkObjectFactory_GetOverrideDescription, METH_VARARGS,
   "GetOverrideDescription(self, index:int) -> str\nC++: virtual const char *GetOverrideDescription(int index)\n\nReturn the description for a the class override at the given\nindex.\n"},
  {"SetEnableFlag", PyvtkObjectFactory_SetEnableFlag, METH_VARARGS,
   "SetEnableFlag(self, flag:int, className:str, subclassName:str)\n    -> None\nC++: virtual void SetEnableFlag(vtkTypeBool flag,\n    const char *className, const char *subclassName)\n\nSet and Get the Enable flag for the specific override of\nclassName. if subclassName is null, then it is ignored.\n"},
  {"HasOverride", PyvtkObjectFactory_HasOverride, METH_VARARGS,
   "HasOverride(self, className:str) -> int\nC++: virtual vtkTypeBool HasOverride(const char *className)\nHasOverride(self, className:str, subclassName:str) -> int\nC++: virtual vtkTypeBool HasOverride(const char *className,\n    const char *subclassName)\n\nReturn 1 if this factory overrides the given class name, 0\notherwise.\n"},
  {"Disable", PyvtkObjectFactory_Disable, METH_VARARGS,
   "Disable(self, className:str) -> None\nC++: virtual void Disable(const char *className)\n\nSet all enable flags for the given class to 0.  This will mean\nthat the factory will stop producing class with the given name.\n"},
  {"GetLibraryPath", PyvtkObjectFactory_GetLibraryPath, METH_VARARGS,
   "GetLibraryPath(self) -> str\nC++: virtual char *GetLibraryPath()\n\nThis returns the path to a dynamically loaded factory.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkObjectFactory_Doc =
  "vtkObjectFactory - abstract base class for vtkObjectFactories\n\n"
  "Superclass: vtkObject\n\n"
  "vtkObjectFactory is used to create vtk objects.   The base class\n"
  "vtkObjectFactory contains a static method CreateInstance which is\n"
  "used to create vtk objects from the list of registered\n"
  "vtkObjectFactory sub-classes.   The first time CreateInstance is\n"
  "called, all dll's or shared libraries in the environment variable\n"
  "VTK_AUTOLOAD_PATH are loaded into the current process.   The C\n"
  "functions vtkLoad, and vtkGetFactoryVersion are called on each dll. \n"
  "To implement these functions in a shared library or dll, use the\n"
  "macro: VTK_FACTORY_INTERFACE_IMPLEMENT. VTK_AUTOLOAD_PATH is an\n"
  "environment variable containing a colon separated (semi-colon on\n"
  "win32) list of paths.\n\n"
  "The vtkObjectFactory can be use to override the creation of any\n"
  "object in VTK with a sub-class of that object.  The factories can be\n"
  "registered either at run time with the VTK_AUTOLOAD_PATH, or at\n"
  "compile time with the vtkObjectFactory::RegisterFactory method.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObjectFactory_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkObjectFactory", // tp_name
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
  PyvtkObjectFactory_Doc, // tp_doc
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

PyObject *PyvtkObjectFactory_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkObjectFactory_Type, PyvtkObjectFactory_Methods,
    "vtkObjectFactory",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

static PyMethodDef PyvtkObjectFactoryRegistryCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkObjectFactoryRegistryCleanup_vtkObjectFactoryRegistryCleanup(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkObjectFactoryRegistryCleanup");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkObjectFactoryRegistryCleanup *op = new vtkObjectFactoryRegistryCleanup();

    result = PyVTKSpecialObject_New("vtkObjectFactoryRegistryCleanup", op);
  }

  return result;
}

static PyMethodDef PyvtkObjectFactoryRegistryCleanup_vtkObjectFactoryRegistryCleanup_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static const char *PyvtkObjectFactoryRegistryCleanup_Doc =

  "vtkObjectFactoryRegistryCleanup() -> vtkObjectFactoryRegistryCleanup\nC++: vtkObjectFactoryRegistryCleanup()\n""\n"
  "vtkObjectFactoryRegistryCleanup - no description provided.\n\n"
;

static PyObject *
PyvtkObjectFactoryRegistryCleanup_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkObjectFactoryRegistryCleanup_vtkObjectFactoryRegistryCleanup(nullptr, args);
}

static void PyvtkObjectFactoryRegistryCleanup_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkObjectFactoryRegistryCleanup *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkObjectFactoryRegistryCleanup_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkObjectFactoryRegistryCleanup_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkObjectFactoryRegistryCleanup", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkObjectFactoryRegistryCleanup_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkObjectFactoryRegistryCleanup_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkObjectFactoryRegistryCleanup_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkObjectFactoryRegistryCleanup_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

#ifndef DECLARED_PyvtkObjectFactoryRegistryCleanup_TypeNew
extern "C" { PyObject *PyvtkObjectFactoryRegistryCleanup_TypeNew(); }
#define DECLARED_PyvtkObjectFactoryRegistryCleanup_TypeNew
#endif

PyObject *PyvtkObjectFactoryRegistryCleanup_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkObjectFactoryRegistryCleanup_Type,
    PyvtkObjectFactoryRegistryCleanup_Methods,
    PyvtkObjectFactoryRegistryCleanup_vtkObjectFactoryRegistryCleanup_Methods,
    nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkObjectFactory(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkObjectFactory_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectFactory", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkObjectFactoryRegistryCleanup_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkObjectFactoryRegistryCleanup", o) != 0)
  {
    Py_DECREF(o);
  }

}

