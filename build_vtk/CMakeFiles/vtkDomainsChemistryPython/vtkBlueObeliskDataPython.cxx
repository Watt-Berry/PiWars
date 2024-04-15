// python wrapper for vtkBlueObeliskData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBlueObeliskData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlueObeliskData(PyObject *dict); }
extern "C" { PyObject *PyvtkBlueObeliskData_ClassNew(); }


static PyObject *
PyvtkBlueObeliskData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlueObeliskData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlueObeliskData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlueObeliskData *tempr = vtkBlueObeliskData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlueObeliskData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlueObeliskData::NewInstance());

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
PyvtkBlueObeliskData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBlueObeliskData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBlueObeliskData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkBlueObeliskData::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_IsInitialized(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInitialized");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsInitialized() :
      op->vtkBlueObeliskData::IsInitialized());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_LockWriteMutex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LockWriteMutex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LockWriteMutex();
    }
    else
    {
      op->vtkBlueObeliskData::LockWriteMutex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_UnlockWriteMutex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnlockWriteMutex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UnlockWriteMutex();
    }
    else
    {
      op->vtkBlueObeliskData::UnlockWriteMutex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned short tempr = (ap.IsBound() ?
      op->GetNumberOfElements() :
      op->vtkBlueObeliskData::GetNumberOfElements());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetSymbols(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSymbols");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetSymbols() :
      op->vtkBlueObeliskData::GetSymbols());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetLowerSymbols(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerSymbols");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLowerSymbols() :
      op->vtkBlueObeliskData::GetLowerSymbols());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNames() :
      op->vtkBlueObeliskData::GetNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetLowerNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetLowerNames() :
      op->vtkBlueObeliskData::GetLowerNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPeriodicTableBlocks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriodicTableBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetPeriodicTableBlocks() :
      op->vtkBlueObeliskData::GetPeriodicTableBlocks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetElectronicConfigurations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronicConfigurations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetElectronicConfigurations() :
      op->vtkBlueObeliskData::GetElectronicConfigurations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetFamilies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFamilies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFamilies() :
      op->vtkBlueObeliskData::GetFamilies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetMasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetMasses() :
      op->vtkBlueObeliskData::GetMasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetExactMasses(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExactMasses");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetExactMasses() :
      op->vtkBlueObeliskData::GetExactMasses());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetIonizationEnergies(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIonizationEnergies");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetIonizationEnergies() :
      op->vtkBlueObeliskData::GetIonizationEnergies());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetElectronAffinities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElectronAffinities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetElectronAffinities() :
      op->vtkBlueObeliskData::GetElectronAffinities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPaulingElectronegativities(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPaulingElectronegativities");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetPaulingElectronegativities() :
      op->vtkBlueObeliskData::GetPaulingElectronegativities());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetCovalentRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCovalentRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetCovalentRadii() :
      op->vtkBlueObeliskData::GetCovalentRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetVDWRadii(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVDWRadii");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetVDWRadii() :
      op->vtkBlueObeliskData::GetVDWRadii());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetDefaultColors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultColors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetDefaultColors() :
      op->vtkBlueObeliskData::GetDefaultColors());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetBoilingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoilingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetBoilingPoints() :
      op->vtkBlueObeliskData::GetBoilingPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetMeltingPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeltingPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFloatArray *tempr = (ap.IsBound() ?
      op->GetMeltingPoints() :
      op->vtkBlueObeliskData::GetMeltingPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetPeriods(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriods");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetPeriods() :
      op->vtkBlueObeliskData::GetPeriods());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskData_GetGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskData *op = static_cast<vtkBlueObeliskData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedShortArray *tempr = (ap.IsBound() ?
      op->GetGroups() :
      op->vtkBlueObeliskData::GetGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlueObeliskData_Methods[] = {
  {"IsTypeOf", PyvtkBlueObeliskData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlueObeliskData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlueObeliskData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBlueObeliskData\nC++: static vtkBlueObeliskData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlueObeliskData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBlueObeliskData\nC++: vtkBlueObeliskData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBlueObeliskData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBlueObeliskData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkBlueObeliskData_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nFill this object using an internal vtkBlueObeliskDataParser\ninstance. Wrap this call with calls to LockWriteMutex and\nUnlockWriteMutex before calling this method on a static instance\nin a multithreaded environment.\n"},
  {"IsInitialized", PyvtkBlueObeliskData_IsInitialized, METH_VARARGS,
   "IsInitialized(self) -> bool\nC++: bool IsInitialized()\n\nCheck if this object has been initialized yet.\n"},
  {"LockWriteMutex", PyvtkBlueObeliskData_LockWriteMutex, METH_VARARGS,
   "LockWriteMutex(self) -> None\nC++: void LockWriteMutex()\n\nLock the mutex that protects the arrays during a call to\nInitialize().\n"},
  {"UnlockWriteMutex", PyvtkBlueObeliskData_UnlockWriteMutex, METH_VARARGS,
   "UnlockWriteMutex(self) -> None\nC++: void UnlockWriteMutex()\n\nUnlock the mutex that protects the arrays during a call to\nInitialize().\n"},
  {"GetNumberOfElements", PyvtkBlueObeliskData_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self) -> int\nC++: virtual unsigned short GetNumberOfElements()\n\nReturn the number of elements for which this vtkBlueObeliskData\ninstance contains information.\n"},
  {"GetSymbols", PyvtkBlueObeliskData_GetSymbols, METH_VARARGS,
   "GetSymbols(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetSymbols()\n\nAccess the raw arrays stored in this vtkBlueObeliskData.\n"},
  {"GetLowerSymbols", PyvtkBlueObeliskData_GetLowerSymbols, METH_VARARGS,
   "GetLowerSymbols(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetLowerSymbols()\n\n"},
  {"GetNames", PyvtkBlueObeliskData_GetNames, METH_VARARGS,
   "GetNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetNames()\n\n"},
  {"GetLowerNames", PyvtkBlueObeliskData_GetLowerNames, METH_VARARGS,
   "GetLowerNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetLowerNames()\n\n"},
  {"GetPeriodicTableBlocks", PyvtkBlueObeliskData_GetPeriodicTableBlocks, METH_VARARGS,
   "GetPeriodicTableBlocks(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetPeriodicTableBlocks()\n\n"},
  {"GetElectronicConfigurations", PyvtkBlueObeliskData_GetElectronicConfigurations, METH_VARARGS,
   "GetElectronicConfigurations(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetElectronicConfigurations()\n\n"},
  {"GetFamilies", PyvtkBlueObeliskData_GetFamilies, METH_VARARGS,
   "GetFamilies(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFamilies()\n\n"},
  {"GetMasses", PyvtkBlueObeliskData_GetMasses, METH_VARARGS,
   "GetMasses(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetMasses()\n\n"},
  {"GetExactMasses", PyvtkBlueObeliskData_GetExactMasses, METH_VARARGS,
   "GetExactMasses(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetExactMasses()\n\n"},
  {"GetIonizationEnergies", PyvtkBlueObeliskData_GetIonizationEnergies, METH_VARARGS,
   "GetIonizationEnergies(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetIonizationEnergies()\n\n"},
  {"GetElectronAffinities", PyvtkBlueObeliskData_GetElectronAffinities, METH_VARARGS,
   "GetElectronAffinities(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetElectronAffinities()\n\n"},
  {"GetPaulingElectronegativities", PyvtkBlueObeliskData_GetPaulingElectronegativities, METH_VARARGS,
   "GetPaulingElectronegativities(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetPaulingElectronegativities()\n\n"},
  {"GetCovalentRadii", PyvtkBlueObeliskData_GetCovalentRadii, METH_VARARGS,
   "GetCovalentRadii(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetCovalentRadii()\n\n"},
  {"GetVDWRadii", PyvtkBlueObeliskData_GetVDWRadii, METH_VARARGS,
   "GetVDWRadii(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetVDWRadii()\n\n"},
  {"GetDefaultColors", PyvtkBlueObeliskData_GetDefaultColors, METH_VARARGS,
   "GetDefaultColors(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetDefaultColors()\n\n"},
  {"GetBoilingPoints", PyvtkBlueObeliskData_GetBoilingPoints, METH_VARARGS,
   "GetBoilingPoints(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetBoilingPoints()\n\n"},
  {"GetMeltingPoints", PyvtkBlueObeliskData_GetMeltingPoints, METH_VARARGS,
   "GetMeltingPoints(self) -> vtkFloatArray\nC++: virtual vtkFloatArray *GetMeltingPoints()\n\n"},
  {"GetPeriods", PyvtkBlueObeliskData_GetPeriods, METH_VARARGS,
   "GetPeriods(self) -> vtkUnsignedShortArray\nC++: virtual vtkUnsignedShortArray *GetPeriods()\n\n"},
  {"GetGroups", PyvtkBlueObeliskData_GetGroups, METH_VARARGS,
   "GetGroups(self) -> vtkUnsignedShortArray\nC++: virtual vtkUnsignedShortArray *GetGroups()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBlueObeliskData_Doc =
  "vtkBlueObeliskData - Contains chemical data from the Blue\n\n"
  "Superclass: vtkObject\n\n"
  "Obelisk Data Repository\n\n"
  "The Blue Obelisk Data Repository is a free, open repository of\n"
  "chemical information. This class is a container for this information.\n\n"
  "ote This class contains only the raw arrays parsed from the BODR. For\n"
  "more convenient access to this data, use the vtkPeriodicTable class.\n\n"
  "ote If you must use this class directly, consider using the static\n"
  "vtkBlueObeliskData object accessible through\n"
  "vtkPeriodicTable::GetBlueObeliskData(). This object is automatically\n"
  "populated on the first instantiation of vtkPeriodicTable.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlueObeliskData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkBlueObeliskData", // tp_name
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
  PyvtkBlueObeliskData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlueObeliskData_StaticNew()
{
  return vtkBlueObeliskData::New();
}

PyObject *PyvtkBlueObeliskData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBlueObeliskData_Type, PyvtkBlueObeliskData_Methods,
    "vtkBlueObeliskData",
 &PyvtkBlueObeliskData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlueObeliskData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlueObeliskData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlueObeliskData", o) != 0)
  {
    Py_DECREF(o);
  }

}

