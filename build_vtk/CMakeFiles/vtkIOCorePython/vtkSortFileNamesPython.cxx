// python wrapper for vtkSortFileNames
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSortFileNames.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSortFileNames(PyObject *dict); }
extern "C" { PyObject *PyvtkSortFileNames_ClassNew(); }


static PyObject *
PyvtkSortFileNames_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSortFileNames::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortFileNames::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSortFileNames *tempr = vtkSortFileNames::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSortFileNames *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortFileNames::NewInstance());

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
PyvtkSortFileNames_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSortFileNames::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSortFileNames::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetGrouping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGrouping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGrouping(temp0);
    }
    else
    {
      op->vtkSortFileNames::SetGrouping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetGrouping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGrouping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGrouping() :
      op->vtkSortFileNames::GetGrouping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GroupingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GroupingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GroupingOn();
    }
    else
    {
      op->vtkSortFileNames::GroupingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GroupingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GroupingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GroupingOff();
    }
    else
    {
      op->vtkSortFileNames::GroupingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetNumericSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumericSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumericSort(temp0);
    }
    else
    {
      op->vtkSortFileNames::SetNumericSort(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNumericSort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumericSort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumericSort() :
      op->vtkSortFileNames::GetNumericSort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_NumericSortOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericSortOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NumericSortOn();
    }
    else
    {
      op->vtkSortFileNames::NumericSortOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_NumericSortOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NumericSortOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->NumericSortOff();
    }
    else
    {
      op->vtkSortFileNames::NumericSortOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetIgnoreCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIgnoreCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIgnoreCase(temp0);
    }
    else
    {
      op->vtkSortFileNames::SetIgnoreCase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetIgnoreCase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIgnoreCase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIgnoreCase() :
      op->vtkSortFileNames::GetIgnoreCase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_IgnoreCaseOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreCaseOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreCaseOn();
    }
    else
    {
      op->vtkSortFileNames::IgnoreCaseOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_IgnoreCaseOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IgnoreCaseOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IgnoreCaseOff();
    }
    else
    {
      op->vtkSortFileNames::IgnoreCaseOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetSkipDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSkipDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSkipDirectories(temp0);
    }
    else
    {
      op->vtkSortFileNames::SetSkipDirectories(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetSkipDirectories(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSkipDirectories");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSkipDirectories() :
      op->vtkSortFileNames::GetSkipDirectories());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SkipDirectoriesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipDirectoriesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipDirectoriesOn();
    }
    else
    {
      op->vtkSortFileNames::SkipDirectoriesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SkipDirectoriesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SkipDirectoriesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SkipDirectoriesOff();
    }
    else
    {
      op->vtkSortFileNames::SkipDirectoriesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_SetInputFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetInputFileNames(temp0);
    }
    else
    {
      op->vtkSortFileNames::SetInputFileNames(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetInputFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetInputFileNames() :
      op->vtkSortFileNames::GetInputFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetFileNames(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileNames");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetFileNames() :
      op->vtkSortFileNames::GetFileNames());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNumberOfGroups(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGroups");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfGroups() :
      op->vtkSortFileNames::GetNumberOfGroups());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_GetNthGroup(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNthGroup");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkStringArray *tempr = (ap.IsBound() ?
      op->GetNthGroup(temp0) :
      op->vtkSortFileNames::GetNthGroup(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFileNames_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFileNames *op = static_cast<vtkSortFileNames *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkSortFileNames::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSortFileNames_Methods[] = {
  {"IsTypeOf", PyvtkSortFileNames_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSortFileNames_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSortFileNames_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSortFileNames\nC++: static vtkSortFileNames *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSortFileNames_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSortFileNames\nC++: vtkSortFileNames *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSortFileNames_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSortFileNames_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGrouping", PyvtkSortFileNames_SetGrouping, METH_VARARGS,
   "SetGrouping(self, _arg:int) -> None\nC++: virtual void SetGrouping(vtkTypeBool _arg)\n\nSort the file names into groups, according to similarity in\nfilename name and path.  Files in different directories, or with\ndifferent extensions, or which do not fit into the same numbered\nseries will be placed into different groups.  This is off by\ndefault.\n"},
  {"GetGrouping", PyvtkSortFileNames_GetGrouping, METH_VARARGS,
   "GetGrouping(self) -> int\nC++: virtual vtkTypeBool GetGrouping()\n\n"},
  {"GroupingOn", PyvtkSortFileNames_GroupingOn, METH_VARARGS,
   "GroupingOn(self) -> None\nC++: virtual void GroupingOn()\n\n"},
  {"GroupingOff", PyvtkSortFileNames_GroupingOff, METH_VARARGS,
   "GroupingOff(self) -> None\nC++: virtual void GroupingOff()\n\n"},
  {"SetNumericSort", PyvtkSortFileNames_SetNumericSort, METH_VARARGS,
   "SetNumericSort(self, _arg:int) -> None\nC++: virtual void SetNumericSort(vtkTypeBool _arg)\n\nSort the files numerically, rather than lexicographically. For\nfilenames that contain numbers, this means the order will be\n[\"file8.dat\", \"file9.dat\", \"file10.dat\"] instead of the usual\nalphabetic sorting order [\"file10.dat\" \"file8.dat\", \"file9.dat\"].\nNumericSort is off by default.\n"},
  {"GetNumericSort", PyvtkSortFileNames_GetNumericSort, METH_VARARGS,
   "GetNumericSort(self) -> int\nC++: virtual vtkTypeBool GetNumericSort()\n\n"},
  {"NumericSortOn", PyvtkSortFileNames_NumericSortOn, METH_VARARGS,
   "NumericSortOn(self) -> None\nC++: virtual void NumericSortOn()\n\n"},
  {"NumericSortOff", PyvtkSortFileNames_NumericSortOff, METH_VARARGS,
   "NumericSortOff(self) -> None\nC++: virtual void NumericSortOff()\n\n"},
  {"SetIgnoreCase", PyvtkSortFileNames_SetIgnoreCase, METH_VARARGS,
   "SetIgnoreCase(self, _arg:int) -> None\nC++: virtual void SetIgnoreCase(vtkTypeBool _arg)\n\nIgnore case when sorting.  This flag is honored by both the\nsorting and the grouping. This is off by default.\n"},
  {"GetIgnoreCase", PyvtkSortFileNames_GetIgnoreCase, METH_VARARGS,
   "GetIgnoreCase(self) -> int\nC++: virtual vtkTypeBool GetIgnoreCase()\n\n"},
  {"IgnoreCaseOn", PyvtkSortFileNames_IgnoreCaseOn, METH_VARARGS,
   "IgnoreCaseOn(self) -> None\nC++: virtual void IgnoreCaseOn()\n\n"},
  {"IgnoreCaseOff", PyvtkSortFileNames_IgnoreCaseOff, METH_VARARGS,
   "IgnoreCaseOff(self) -> None\nC++: virtual void IgnoreCaseOff()\n\n"},
  {"SetSkipDirectories", PyvtkSortFileNames_SetSkipDirectories, METH_VARARGS,
   "SetSkipDirectories(self, _arg:int) -> None\nC++: virtual void SetSkipDirectories(vtkTypeBool _arg)\n\nSkip directories. If this flag is set, any input item that is a\ndirectory rather than a file will not be included in the output. \nThis is off by default.\n"},
  {"GetSkipDirectories", PyvtkSortFileNames_GetSkipDirectories, METH_VARARGS,
   "GetSkipDirectories(self) -> int\nC++: virtual vtkTypeBool GetSkipDirectories()\n\n"},
  {"SkipDirectoriesOn", PyvtkSortFileNames_SkipDirectoriesOn, METH_VARARGS,
   "SkipDirectoriesOn(self) -> None\nC++: virtual void SkipDirectoriesOn()\n\n"},
  {"SkipDirectoriesOff", PyvtkSortFileNames_SkipDirectoriesOff, METH_VARARGS,
   "SkipDirectoriesOff(self) -> None\nC++: virtual void SkipDirectoriesOff()\n\n"},
  {"SetInputFileNames", PyvtkSortFileNames_SetInputFileNames, METH_VARARGS,
   "SetInputFileNames(self, input:vtkStringArray) -> None\nC++: void SetInputFileNames(vtkStringArray *input)\n\nSet a list of file names to group and sort.\n"},
  {"GetInputFileNames", PyvtkSortFileNames_GetInputFileNames, METH_VARARGS,
   "GetInputFileNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetInputFileNames()\n\n"},
  {"GetFileNames", PyvtkSortFileNames_GetFileNames, METH_VARARGS,
   "GetFileNames(self) -> vtkStringArray\nC++: virtual vtkStringArray *GetFileNames()\n\nGet the full list of sorted filenames.\n"},
  {"GetNumberOfGroups", PyvtkSortFileNames_GetNumberOfGroups, METH_VARARGS,
   "GetNumberOfGroups(self) -> int\nC++: virtual int GetNumberOfGroups()\n\nGet the number of groups that the names were split into, if\ngrouping is on.  The filenames are automatically split into\ngroups, where the filenames in each group will be identical\nexcept for their series numbers.  If grouping is not on, this\nmethod will return zero.\n"},
  {"GetNthGroup", PyvtkSortFileNames_GetNthGroup, METH_VARARGS,
   "GetNthGroup(self, i:int) -> vtkStringArray\nC++: virtual vtkStringArray *GetNthGroup(int i)\n\nGet the Nth group of file names.  This method should only be used\nif grouping is on.  If grouping is off, it will always return\nnull.\n"},
  {"Update", PyvtkSortFileNames_Update, METH_VARARGS,
   "Update(self) -> None\nC++: virtual void Update()\n\nUpdate the output filenames from the input filenames. This method\nis called automatically by GetFileNames() and GetNumberOfGroups()\nif the input names have changed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSortFileNames_Doc =
  "vtkSortFileNames - Group and sort a set of filenames\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSortFileNames will take a list of filenames (e.g. from a file load\n"
  "dialog) and sort them into one or more series.  If the input list of\n"
  "filenames contains any directories, these can be removed before\n"
  "sorting using the SkipDirectories flag.  This class should be used\n"
  "where information about the series groupings can be determined by the\n"
  "filenames, but it might not be successful in cases where the\n"
  "information about the series groupings is stored in the files\n"
  "themselves (e.g DICOM).\n"
  "@sa\n"
  "vtkImageReader2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSortFileNames_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOCore.vtkSortFileNames", // tp_name
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
  PyvtkSortFileNames_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSortFileNames_StaticNew()
{
  return vtkSortFileNames::New();
}

PyObject *PyvtkSortFileNames_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSortFileNames_Type, PyvtkSortFileNames_Methods,
    "vtkSortFileNames",
 &PyvtkSortFileNames_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSortFileNames(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSortFileNames_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSortFileNames", o) != 0)
  {
    Py_DECREF(o);
  }

}

