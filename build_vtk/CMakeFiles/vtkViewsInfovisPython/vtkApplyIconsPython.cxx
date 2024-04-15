// python wrapper for vtkApplyIcons
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkApplyIcons.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkApplyIcons(PyObject *dict); }
extern "C" { PyObject *PyvtkApplyIcons_ClassNew(); }


static PyObject *
PyvtkApplyIcons_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkApplyIcons::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkApplyIcons::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkApplyIcons *tempr = vtkApplyIcons::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkApplyIcons *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkApplyIcons::NewInstance());

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
PyvtkApplyIcons_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkApplyIcons::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkApplyIcons::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetIconType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  vtkVariant *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVariant") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconType(*temp0, temp1);
    }
    else
    {
      op->vtkApplyIcons::SetIconType(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkApplyIcons_SetIconType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  double temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconType(temp0, temp1);
    }
    else
    {
      op->vtkApplyIcons::SetIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkApplyIcons_SetIconType_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetIconType(temp0, temp1);
    }
    else
    {
      op->vtkApplyIcons::SetIconType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkApplyIcons_SetIconType_Methods[] = {
  {"SetIconType", PyvtkApplyIcons_SetIconType_s1, METH_VARARGS,
   "@Wi vtkVariant"},
  {"SetIconType", PyvtkApplyIcons_SetIconType_s2, METH_VARARGS,
   "@di"},
  {"SetIconType", PyvtkApplyIcons_SetIconType_s3, METH_VARARGS,
   "@zi"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkApplyIcons_SetIconType(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkApplyIcons_SetIconType_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetIconType");
  return nullptr;
}


static PyObject *
PyvtkApplyIcons_ClearAllIconTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearAllIconTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearAllIconTypes();
    }
    else
    {
      op->vtkApplyIcons::ClearAllIconTypes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetUseLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLookupTable(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetUseLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetUseLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLookupTable() :
      op->vtkApplyIcons::GetUseLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_UseLookupTableOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableOn();
    }
    else
    {
      op->vtkApplyIcons::UseLookupTableOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_UseLookupTableOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLookupTableOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLookupTableOff();
    }
    else
    {
      op->vtkApplyIcons::UseLookupTableOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultIcon(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetDefaultIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetDefaultIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultIcon() :
      op->vtkApplyIcons::GetDefaultIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectedIcon(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetSelectedIcon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectedIcon() :
      op->vtkApplyIcons::GetSelectedIcon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetIconOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIconOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIconOutputArrayName(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetIconOutputArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetIconOutputArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIconOutputArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetIconOutputArrayName() :
      op->vtkApplyIcons::GetIconOutputArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkApplyIcons::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToSelectedIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSelectedIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToSelectedIcon();
    }
    else
    {
      op->vtkApplyIcons::SetSelectionModeToSelectedIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToSelectedOffset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToSelectedOffset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToSelectedOffset();
    }
    else
    {
      op->vtkApplyIcons::SetSelectionModeToSelectedOffset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToAnnotationIcon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToAnnotationIcon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToAnnotationIcon();
    }
    else
    {
      op->vtkApplyIcons::SetSelectionModeToAnnotationIcon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetSelectionModeToIgnoreSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionModeToIgnoreSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionModeToIgnoreSelection();
    }
    else
    {
      op->vtkApplyIcons::SetSelectionModeToIgnoreSelection();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_SetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAttributeType(temp0);
    }
    else
    {
      op->vtkApplyIcons::SetAttributeType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkApplyIcons_GetAttributeType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkApplyIcons *op = static_cast<vtkApplyIcons *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeType() :
      op->vtkApplyIcons::GetAttributeType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkApplyIcons_Methods[] = {
  {"IsTypeOf", PyvtkApplyIcons_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkApplyIcons_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkApplyIcons_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkApplyIcons\nC++: static vtkApplyIcons *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkApplyIcons_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkApplyIcons\nC++: vtkApplyIcons *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkApplyIcons_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkApplyIcons_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetIconType", PyvtkApplyIcons_SetIconType, METH_VARARGS,
   "SetIconType(self, v:vtkVariant, icon:int) -> None\nC++: void SetIconType(vtkVariant v, int icon)\nSetIconType(self, v:float, icon:int) -> None\nC++: void SetIconType(double v, int icon)\nSetIconType(self, v:str, icon:int) -> None\nC++: void SetIconType(const char *v, int icon)\n\nEdits the lookup table to use for point icons. This is only used\nif input array 0 is set and UsePointLookupTable is on.\n"},
  {"ClearAllIconTypes", PyvtkApplyIcons_ClearAllIconTypes, METH_VARARGS,
   "ClearAllIconTypes(self) -> None\nC++: void ClearAllIconTypes()\n\n"},
  {"SetUseLookupTable", PyvtkApplyIcons_SetUseLookupTable, METH_VARARGS,
   "SetUseLookupTable(self, _arg:bool) -> None\nC++: virtual void SetUseLookupTable(bool _arg)\n\nIf on, uses the point lookup table to set the colors of\nunannotated, unselected elements of the data.\n"},
  {"GetUseLookupTable", PyvtkApplyIcons_GetUseLookupTable, METH_VARARGS,
   "GetUseLookupTable(self) -> bool\nC++: virtual bool GetUseLookupTable()\n\n"},
  {"UseLookupTableOn", PyvtkApplyIcons_UseLookupTableOn, METH_VARARGS,
   "UseLookupTableOn(self) -> None\nC++: virtual void UseLookupTableOn()\n\n"},
  {"UseLookupTableOff", PyvtkApplyIcons_UseLookupTableOff, METH_VARARGS,
   "UseLookupTableOff(self) -> None\nC++: virtual void UseLookupTableOff()\n\n"},
  {"SetDefaultIcon", PyvtkApplyIcons_SetDefaultIcon, METH_VARARGS,
   "SetDefaultIcon(self, _arg:int) -> None\nC++: virtual void SetDefaultIcon(int _arg)\n\nThe default point icon for all unannotated, unselected elements\nof the data. This is used if UsePointLookupTable is off.\n"},
  {"GetDefaultIcon", PyvtkApplyIcons_GetDefaultIcon, METH_VARARGS,
   "GetDefaultIcon(self) -> int\nC++: virtual int GetDefaultIcon()\n\n"},
  {"SetSelectedIcon", PyvtkApplyIcons_SetSelectedIcon, METH_VARARGS,
   "SetSelectedIcon(self, _arg:int) -> None\nC++: virtual void SetSelectedIcon(int _arg)\n\nThe point icon for all selected elements of the data. This is\nused if the annotation input has a current selection.\n"},
  {"GetSelectedIcon", PyvtkApplyIcons_GetSelectedIcon, METH_VARARGS,
   "GetSelectedIcon(self) -> int\nC++: virtual int GetSelectedIcon()\n\n"},
  {"SetIconOutputArrayName", PyvtkApplyIcons_SetIconOutputArrayName, METH_VARARGS,
   "SetIconOutputArrayName(self, _arg:str) -> None\nC++: virtual void SetIconOutputArrayName(const char *_arg)\n\nThe output array name for the point icon index array. Default is \"vtkApplyIcons\nicon\".\n"},
  {"GetIconOutputArrayName", PyvtkApplyIcons_GetIconOutputArrayName, METH_VARARGS,
   "GetIconOutputArrayName(self) -> str\nC++: virtual char *GetIconOutputArrayName()\n\n"},
  {"SetSelectionMode", PyvtkApplyIcons_SetSelectionMode, METH_VARARGS,
   "SetSelectionMode(self, _arg:int) -> None\nC++: virtual void SetSelectionMode(int _arg)\n\nChanges the behavior of the icon to use for selected items. \nSELECTED_ICON uses SelectedIcon as the icon for all selected\nelements. SELECTED_OFFSET uses SelectedIcon as an offset to add\nto all selected elements. ANNOTATION_ICON uses the ICON_INDEX()\nproperty of the current annotation. IGNORE_SELECTION does not\nchange the icon based on the current selection.  The default is\nIGNORE_SELECTION.\n"},
  {"GetSelectionMode", PyvtkApplyIcons_GetSelectionMode, METH_VARARGS,
   "GetSelectionMode(self) -> int\nC++: virtual int GetSelectionMode()\n\n"},
  {"SetSelectionModeToSelectedIcon", PyvtkApplyIcons_SetSelectionModeToSelectedIcon, METH_VARARGS,
   "SetSelectionModeToSelectedIcon(self) -> None\nC++: virtual void SetSelectionModeToSelectedIcon()\n\n"},
  {"SetSelectionModeToSelectedOffset", PyvtkApplyIcons_SetSelectionModeToSelectedOffset, METH_VARARGS,
   "SetSelectionModeToSelectedOffset(self) -> None\nC++: virtual void SetSelectionModeToSelectedOffset()\n\n"},
  {"SetSelectionModeToAnnotationIcon", PyvtkApplyIcons_SetSelectionModeToAnnotationIcon, METH_VARARGS,
   "SetSelectionModeToAnnotationIcon(self) -> None\nC++: virtual void SetSelectionModeToAnnotationIcon()\n\n"},
  {"SetSelectionModeToIgnoreSelection", PyvtkApplyIcons_SetSelectionModeToIgnoreSelection, METH_VARARGS,
   "SetSelectionModeToIgnoreSelection(self) -> None\nC++: virtual void SetSelectionModeToIgnoreSelection()\n\n"},
  {"SetAttributeType", PyvtkApplyIcons_SetAttributeType, METH_VARARGS,
   "SetAttributeType(self, _arg:int) -> None\nC++: virtual void SetAttributeType(int _arg)\n\nThe attribute type to append the icon array to, used only if the\ninput array is not specified or does not exist. This is set to\none of the AttributeTypes enum in vtkDataObject (e.g. POINT,\nCELL, VERTEX EDGE, FIELD).\n"},
  {"GetAttributeType", PyvtkApplyIcons_GetAttributeType, METH_VARARGS,
   "GetAttributeType(self) -> int\nC++: virtual int GetAttributeType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkApplyIcons_Doc =
  "vtkApplyIcons - apply icons to a data set.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkApplyIcons performs a iconing of the dataset using default icons,\n"
  "lookup tables, annotations, and/or a selection. The output is a\n"
  "vtkIntArray containing the icon index for each element in the\n"
  "dataset. The first input is the dataset to be iconed, which may be a\n"
  "vtkTable, vtkGraph subclass, or vtkDataSet subclass.\n\n"
  "The second (optional) input is a vtkAnnotationLayers object, which\n"
  "stores a list of annotation layers, with each layer holding a list of\n"
  "vtkAnnotation objects. The annotation specifies a subset of data\n"
  "along with other properties, including icon. For annotations with\n"
  "icon properties, this algorithm will use the icon index of annotated\n"
  "elements, using a \"top one wins\" strategy.\n\n"
  "The third (optional) input is a vtkSelection object, meant for\n"
  "specifying the current selection. You can control the icon of the\n"
  "selection, or whether there is a set of selected icons at a\n"
  "particular offset in the icon sheet.\n\n"
  "The algorithm takes an input array, specified with\n"
  "SetInputArrayToProcess(0, 0, 0,\n"
  "vtkDataObject::FIELD_ASSOCIATION_POINTS, name) This sets data arrays\n"
  "to use to icon the data with the associated lookup table. For\n"
  "vtkGraph and vtkTable inputs, you would use\n"
  "FIELD_ASSOCIATION_VERTICES, FIELD_ASSOCIATION_EDGES, or\n"
  "FIELD_ASSOCIATION_ROWS as appropriate. The icon array will be added\n"
  "to the same set of attributes that the input array came from. If\n"
  "there is no input array, the icon array will be applied to the\n"
  "attributes associated with the AttributeType parameter.\n\n"
  "Icons are assigned with the following priorities:  If an item is part\n"
  "of the selection, it is glyphed with that icon. Otherwise, if the\n"
  "item is part of an annotation, it is glyphed\n"
  "     with the icon of the final (top) annotation in the set of\n"
  "layers. Otherwise, if a lookup table is used, it is glyphed using the\n"
  "     lookup table icon for the data value of the element. Otherwise\n"
  "it will be glyphed with the default icon. \n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkApplyIcons_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkApplyIcons", // tp_name
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
  PyvtkApplyIcons_Doc, // tp_doc
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

static vtkObjectBase *PyvtkApplyIcons_StaticNew()
{
  return vtkApplyIcons::New();
}

PyObject *PyvtkApplyIcons_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkApplyIcons_Type, PyvtkApplyIcons_Methods,
    "vtkApplyIcons",
 &PyvtkApplyIcons_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "SELECTED_ICON", vtkApplyIcons::SELECTED_ICON },
        { "SELECTED_OFFSET", vtkApplyIcons::SELECTED_OFFSET },
        { "ANNOTATION_ICON", vtkApplyIcons::ANNOTATION_ICON },
        { "IGNORE_SELECTION", vtkApplyIcons::IGNORE_SELECTION },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkApplyIcons(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkApplyIcons_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkApplyIcons", o) != 0)
  {
    Py_DECREF(o);
  }

}

