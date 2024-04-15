// python wrapper for vtkCellTypes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellTypes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellTypes(PyObject *dict); }
extern "C" { PyObject *PyvtkCellTypes_ClassNew(); }


static PyObject *
PyvtkCellTypes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellTypes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellTypes *tempr = vtkCellTypes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellTypes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellTypes::NewInstance());

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
PyvtkCellTypes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellTypes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellTypes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0 = 512;
  long long temp1 = 1000;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->Allocate(temp0, temp1) :
      op->vtkCellTypes::Allocate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  unsigned char temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->InsertCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::InsertCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkCellTypes::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_SetCellTypes_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetCellTypes."
    " (" "Please use version without cellLocations." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  vtkIdTypeArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkIdTypeArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellTypes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::SetCellTypes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellTypes_SetCellTypes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellTypes(temp0, temp1);
    }
    else
    {
      op->vtkCellTypes::SetCellTypes(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCellTypes_SetCellTypes_s3(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetCellTypes."
    " (" "Please use version without cellLocations." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  vtkUnsignedCharArray *temp1 = nullptr;
  vtkIntArray *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkUnsignedCharArray") &&
      ap.GetVTKObject(temp2, "vtkIntArray"))
  {
    if (ap.IsBound())
    {
      op->SetCellTypes(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCellTypes::SetCellTypes(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypes_SetCellTypes_Methods[] = {
  {"SetCellTypes", PyvtkCellTypes_SetCellTypes_s1, METH_VARARGS,
   "@kVV *vtkUnsignedCharArray *vtkIdTypeArray"},
  {"SetCellTypes", PyvtkCellTypes_SetCellTypes_s3, METH_VARARGS,
   "@kVV *vtkUnsignedCharArray *vtkIntArray"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellTypes_SetCellTypes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellTypes_SetCellTypes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellTypes_SetCellTypes_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCellTypes");
  return nullptr;
}


static PyObject *
PyvtkCellTypes_GetCellLocation(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetCellLocation."
    " (" "The Location API will disappear." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetCellLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellLocation(temp0) :
      op->vtkCellTypes::GetCellLocation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_DeleteCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeleteCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DeleteCell(temp0);
    }
    else
    {
      op->vtkCellTypes::DeleteCell(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetNumberOfTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfTypes() :
      op->vtkCellTypes::GetNumberOfTypes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsType(temp0) :
      op->vtkCellTypes::IsType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_InsertNextType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  unsigned char temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextType(temp0) :
      op->vtkCellTypes::InsertNextType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned char tempr = (ap.IsBound() ?
      op->GetCellType(temp0) :
      op->vtkCellTypes::GetCellType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkCellTypes::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_Reset(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Reset");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Reset();
    }
    else
    {
      op->vtkCellTypes::Reset();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellTypes::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  vtkCellTypes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellTypes::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetClassNameFromTypeId(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetClassNameFromTypeId");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkCellTypes::GetClassNameFromTypeId(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetTypeIdFromClassName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetTypeIdFromClassName");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::GetTypeIdFromClassName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_IsLinear(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsLinear");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::IsLinear(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetDimension(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetDimension");

  unsigned char temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellTypes::GetDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellTypesArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypesArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellTypesArray() :
      op->vtkCellTypes::GetCellTypesArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellTypes_GetCellLocationsArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellLocationsArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellTypes *op = static_cast<vtkCellTypes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetCellLocationsArray() :
      op->vtkCellTypes::GetCellLocationsArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellTypes_Methods[] = {
  {"IsTypeOf", PyvtkCellTypes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellTypes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellTypes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellTypes\nC++: static vtkCellTypes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellTypes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellTypes\nC++: vtkCellTypes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellTypes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellTypes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Allocate", PyvtkCellTypes_Allocate, METH_VARARGS,
   "Allocate(self, sz:int=512, ext:int=1000) -> int\nC++: int Allocate(vtkIdType sz=512, vtkIdType ext=1000)\n\nAllocate memory for this array. Delete old storage only if\nnecessary.\n"},
  {"InsertCell", PyvtkCellTypes_InsertCell, METH_VARARGS,
   "InsertCell(self, id:int, type:int, loc:int) -> None\nC++: void InsertCell(vtkIdType id, unsigned char type,\n    vtkIdType loc)\n\nAdd a cell at specified id.\n"},
  {"InsertNextCell", PyvtkCellTypes_InsertNextCell, METH_VARARGS,
   "InsertNextCell(self, type:int, loc:int) -> int\nC++: vtkIdType InsertNextCell(unsigned char type, vtkIdType loc)\n\nAdd a cell to the object in the next available slot.\n"},
  {"SetCellTypes", PyvtkCellTypes_SetCellTypes, METH_VARARGS,
   "SetCellTypes(self, ncells:int, cellTypes:vtkUnsignedCharArray,\n    cellLocations:vtkIdTypeArray) -> None\nC++: void SetCellTypes(vtkIdType ncells,\n    vtkUnsignedCharArray *cellTypes,\n    vtkIdTypeArray *cellLocations)\nSetCellTypes(self, ncells:int, cellTypes:vtkUnsignedCharArray)\n    -> None\nC++: void SetCellTypes(vtkIdType ncells,\n    vtkUnsignedCharArray *cellTypes)\nSetCellTypes(self, ncells:int, cellTypes:vtkUnsignedCharArray,\n    cellLocations:vtkIntArray) -> None\nC++: void SetCellTypes(vtkIdType ncells,\n    vtkUnsignedCharArray *cellTypes, vtkIntArray *cellLocations)\n\nSpecify a group of cell types.\n\n\\deprecated Please use method version that doesn't use\n`cellLocations` instead.\n"},
  {"GetCellLocation", PyvtkCellTypes_GetCellLocation, METH_VARARGS,
   "GetCellLocation(self, cellId:int) -> int\nC++: vtkIdType GetCellLocation(vtkIdType cellId)\n\nReturn the location of the cell in the associated vtkCellArray.\n\n\\deprecated This method will go away in future releases. Please\ndo not rely on `CellLocation` in this class.\n"},
  {"DeleteCell", PyvtkCellTypes_DeleteCell, METH_VARARGS,
   "DeleteCell(self, cellId:int) -> None\nC++: void DeleteCell(vtkIdType cellId)\n\nDelete cell by setting to nullptr cell type.\n"},
  {"GetNumberOfTypes", PyvtkCellTypes_GetNumberOfTypes, METH_VARARGS,
   "GetNumberOfTypes(self) -> int\nC++: vtkIdType GetNumberOfTypes()\n\nReturn the number of types in the list.\n"},
  {"IsType", PyvtkCellTypes_IsType, METH_VARARGS,
   "IsType(self, type:int) -> int\nC++: int IsType(unsigned char type)\n\nReturn 1 if type specified is contained in list; 0 otherwise.\n"},
  {"InsertNextType", PyvtkCellTypes_InsertNextType, METH_VARARGS,
   "InsertNextType(self, type:int) -> int\nC++: vtkIdType InsertNextType(unsigned char type)\n\nAdd the type specified to the end of the list. Range checking is\nperformed.\n"},
  {"GetCellType", PyvtkCellTypes_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: unsigned char GetCellType(vtkIdType cellId)\n\nReturn the type of cell.\n"},
  {"Squeeze", PyvtkCellTypes_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: void Squeeze()\n\nReclaim any extra memory.\n"},
  {"Reset", PyvtkCellTypes_Reset, METH_VARARGS,
   "Reset(self) -> None\nC++: void Reset()\n\nInitialize object without releasing memory.\n"},
  {"GetActualMemorySize", PyvtkCellTypes_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize()\n\nReturn the memory in kibibytes (1024 bytes) consumed by this cell\ntype array. Used to support streaming and reading/writing data.\nThe value returned is guaranteed to be greater than or equal to\nthe memory required to actually represent the data represented by\nthis object. The information returned is valid only after the\npipeline has been updated.\n"},
  {"DeepCopy", PyvtkCellTypes_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkCellTypes) -> None\nC++: void DeepCopy(vtkCellTypes *src)\n\nStandard DeepCopy method.  Since this object contains no\nreference to other objects, there is no ShallowCopy.\n"},
  {"GetClassNameFromTypeId", PyvtkCellTypes_GetClassNameFromTypeId, METH_VARARGS,
   "GetClassNameFromTypeId(typeId:int) -> str\nC++: static const char *GetClassNameFromTypeId(int typeId)\n\nGiven an int (as defined in vtkCellType.h) identifier for a class\nreturn it's classname.\n"},
  {"GetTypeIdFromClassName", PyvtkCellTypes_GetTypeIdFromClassName, METH_VARARGS,
   "GetTypeIdFromClassName(classname:str) -> int\nC++: static int GetTypeIdFromClassName(const char *classname)\n\nGiven a data object classname, return it's int identified (as\ndefined in vtkCellType.h)\n"},
  {"IsLinear", PyvtkCellTypes_IsLinear, METH_VARARGS,
   "IsLinear(type:int) -> int\nC++: static int IsLinear(unsigned char type)\n\nThis convenience method is a fast check to determine if a cell\ntype represents a linear or nonlinear cell.  This is generally\nmuch more efficient than getting the appropriate vtkCell and\nchecking its IsLinear method.\n"},
  {"GetDimension", PyvtkCellTypes_GetDimension, METH_VARARGS,
   "GetDimension(type:int) -> int\nC++: static int GetDimension(unsigned char type)\n\nGet the dimension of a cell.\n"},
  {"GetCellTypesArray", PyvtkCellTypes_GetCellTypesArray, METH_VARARGS,
   "GetCellTypesArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellTypesArray()\n\nMethods for obtaining the arrays representing types and\nlocations.\n"},
  {"GetCellLocationsArray", PyvtkCellTypes_GetCellLocationsArray, METH_VARARGS,
   "GetCellLocationsArray(self) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetCellLocationsArray()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellTypes_Doc =
  "vtkCellTypes - object provides direct access to cells in vtkCellArray\nand type information\n\n"
  "Superclass: vtkObject\n\n"
  "This class is a supplemental object to vtkCellArray to allow random\n"
  "access into cells as well as representing cell type information.  The\n"
  "\"location\" field is the location in the vtkCellArray list in terms of\n"
  "an integer offset.  An integer offset was used instead of a pointer\n"
  "for easy storage and inter-process communication. The type\n"
  "information is defined in the file vtkCellType.h.\n\n"
  "@warning\n"
  "Sometimes this class is used to pass type information independent of\n"
  "the random access (i.e., location) information. For example, see\n"
  "vtkDataSet::GetCellTypes(). If you use the class in this way, you can\n"
  "use a location value of -1.\n\n"
  "@sa\n"
  "vtkCellArray vtkCellLinks\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellTypes", // tp_name
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
  PyvtkCellTypes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellTypes_StaticNew()
{
  return vtkCellTypes::New();
}

PyObject *PyvtkCellTypes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellTypes_Type, PyvtkCellTypes_Methods,
    "vtkCellTypes",
 &PyvtkCellTypes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellTypes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellTypes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellTypes", o) != 0)
  {
    Py_DECREF(o);
  }

}

