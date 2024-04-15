// python wrapper for vtkCellGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkCellGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkCellGrid_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif

static PyObject *
PyvtkCellGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellGrid *tempr = vtkCellGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellGrid::NewInstance());

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
PyvtkCellGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkCellGrid::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkCellGrid::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkCellGrid::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkCellGrid::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkCellGrid::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetAttributes_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(temp0) :
      op->vtkCellGrid::GetAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_GetAttributes_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetAttributes(*temp0) :
      op->vtkCellGrid::GetAttributes(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkCellGrid_GetAttributes_Methods[] = {
  {"GetAttributes", PyvtkCellGrid_GetAttributes_s1, METH_VARARGS,
   "@i"},
  {"GetAttributes", PyvtkCellGrid_GetAttributes_s2, METH_VARARGS,
   "@W vtkStringToken"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_GetAttributes(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_GetAttributes_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAttributes");
  return nullptr;
}


static PyObject *
PyvtkCellGrid_FindAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->FindAttributes(temp0) :
      op->vtkCellGrid::FindAttributes(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostArray(temp0) :
      op->vtkCellGrid::GetGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetAttributeTypeForArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributeTypeForArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    int tempr = (ap.IsBound() ?
      op->GetAttributeTypeForArray(temp0) :
      op->vtkCellGrid::GetAttributeTypeForArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkCellGrid::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfCells() :
      op->vtkCellGrid::GetNumberOfCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkCellGrid::GetBounds(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_AddCellMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellMetadata *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellMetadata"))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->AddCellMetadata(temp0) :
      op->vtkCellGrid::AddCellMetadata(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkStringToken *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkStringToken"))
  {
    vtkCellMetadata *tempr = (ap.IsBound() ?
      op->GetCellType(*temp0) :
      op->vtkCellGrid::GetCellType(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkCellGrid_AddCellAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddCellAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    bool tempr = (ap.IsBound() ?
      op->AddCellAttribute(temp0) :
      op->vtkCellGrid::AddCellAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeById(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeById");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttributeById(temp0) :
      op->vtkCellGrid::GetCellAttributeById(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetCellAttributeByName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellAttributeByName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetCellAttributeByName(temp0) :
      op->vtkCellGrid::GetCellAttributeByName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetShapeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellAttribute *tempr = (ap.IsBound() ?
      op->GetShapeAttribute() :
      op->vtkCellGrid::GetShapeAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_SetShapeAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellAttribute *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellAttribute"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetShapeAttribute(temp0) :
      op->vtkCellGrid::SetShapeAttribute(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_Query(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Query");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellGrid *op = static_cast<vtkCellGrid *>(vp);

  vtkCellGridQuery *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellGridQuery"))
  {
    bool tempr = (ap.IsBound() ?
      op->Query(temp0) :
      op->vtkCellGrid::Query(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellGrid_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkCellGrid *tempr = vtkCellGrid::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellGrid_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkCellGrid *tempr = vtkCellGrid::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellGrid_GetData_Methods[] = {
  {"GetData", PyvtkCellGrid_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkCellGrid_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellGrid_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellGrid_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkCellGrid_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkCellGrid_Methods[] = {
  {"IsTypeOf", PyvtkCellGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellGrid\nC++: static vtkCellGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellGrid\nC++: vtkCellGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkCellGrid_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state,\n"},
  {"GetDataObjectType", PyvtkCellGrid_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn class name of data type. THIS METHOD IS THREAD SAFE\n"},
  {"GetActualMemorySize", PyvtkCellGrid_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value).\n"},
  {"ShallowCopy", PyvtkCellGrid_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, baseSrc:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *baseSrc) override;\n\nShallow and Deep copy. These copy the data, but not any pipeline\nconnections.\n"},
  {"DeepCopy", PyvtkCellGrid_DeepCopy, METH_VARARGS,
   "DeepCopy(self, baseSrc:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *baseSrc) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"GetAttributes", PyvtkCellGrid_GetAttributes, METH_VARARGS,
   "GetAttributes(self, type:int) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAttributes(int type) override;\nGetAttributes(self, type:vtkStringToken) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *GetAttributes(vtkStringToken type)\n\nFetch a partition of DOF arrays. The GetAttributes method will\ncreate an empty one if no arrays of that type exist; the\nGetArrayGroups method returns the map from types to existing\npartitions. The FindAttributes method will return a null pointer\nif no arrays of that type exist.\n"},
  {"FindAttributes", PyvtkCellGrid_FindAttributes, METH_VARARGS,
   "FindAttributes(self, type:int) -> vtkDataSetAttributes\nC++: vtkDataSetAttributes *FindAttributes(int type)\n\n"},
  {"GetGhostArray", PyvtkCellGrid_GetGhostArray, METH_VARARGS,
   "GetGhostArray(self, type:int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostArray(int type) override;\n\nReturns the ghost arrays of the data object of the specified\nattribute type. This may return a null pointer.\n"},
  {"GetAttributeTypeForArray", PyvtkCellGrid_GetAttributeTypeForArray, METH_VARARGS,
   "GetAttributeTypeForArray(self, arr:vtkAbstractArray) -> int\nC++: int GetAttributeTypeForArray(vtkAbstractArray *arr) override;\n\nRetrieves the attribute type that an array came from. This is\nuseful for obtaining which attribute type a input array to an\nalgorithm came from (retrieved from\nGetInputAbstractArrayToProcesss).\n"},
  {"GetNumberOfElements", PyvtkCellGrid_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"GetNumberOfCells", PyvtkCellGrid_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: vtkIdType GetNumberOfCells()\n\nReturn the number of cells (of all types).\n"},
  {"GetBounds", PyvtkCellGrid_GetBounds, METH_VARARGS,
   "GetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nFill the provided bounding box with the bounds of all the cells\npresent in the grid.\n\nIf no cells are present, the bounding box will be reset to\nuninitialized bounds. It is up to each cell type to implement a\nspecialization of the BoundsQuery operation.\n\nThe bounds are ordered { -x, +x, -y, +y, -z, +z }.\n"},
  {"AddCellMetadata", PyvtkCellGrid_AddCellMetadata, METH_VARARGS,
   "AddCellMetadata(self, cellType:vtkCellMetadata) -> vtkCellMetadata\nC++: vtkCellMetadata *AddCellMetadata(vtkCellMetadata *cellType)\n\n"},
  {"GetCellType", PyvtkCellGrid_GetCellType, METH_VARARGS,
   "GetCellType(self, cellTypeName:vtkStringToken) -> vtkCellMetadata\nC++: vtkCellMetadata *GetCellType(vtkStringToken cellTypeName)\n\n"},
  {"AddCellAttribute", PyvtkCellGrid_AddCellAttribute, METH_VARARGS,
   "AddCellAttribute(self, attribute:vtkCellAttribute) -> bool\nC++: virtual bool AddCellAttribute(vtkCellAttribute *attribute)\n\nAdd a cell-attribute to the dataset. A cell-attribute is an\nobject representing a consistent collection of arrays that\nspecify a function over the entire vtkCellGrid's domain (i.e.,\nall cells of all types present in the vtkCellGrid), with custom\nstorage available to each cell type to facilitate interpolation,\nrendering, and other basic visualization operations.\n"},
  {"GetCellAttributeById", PyvtkCellGrid_GetCellAttributeById, METH_VARARGS,
   "GetCellAttributeById(self, attributeId:int) -> vtkCellAttribute\nC++: vtkCellAttribute *GetCellAttributeById(int attributeId)\n\nReturn an attribute given its name or identifier.\n\nThis is currently an O(n) process, but additional indices could\nbe added internally if needed.\n\nThese methods may return a null pointer if no such attribute\nexists.\n\nMultiple attributes with the same name are possible. The first\nmatch will be returned.\n"},
  {"GetCellAttributeByName", PyvtkCellGrid_GetCellAttributeByName, METH_VARARGS,
   "GetCellAttributeByName(self, name:str) -> vtkCellAttribute\nC++: vtkCellAttribute *GetCellAttributeByName(\n    const std::string &name)\n\n"},
  {"GetShapeAttribute", PyvtkCellGrid_GetShapeAttribute, METH_VARARGS,
   "GetShapeAttribute(self) -> vtkCellAttribute\nC++: vtkCellAttribute *GetShapeAttribute()\n\nSet/get the \"shape attribute\" (i.e., a vector-valued\ncell-attribute that maps from reference to world coordinates).\n\nIf there is no shape attribute, then a vtkCellGrid cannot be\nrendered.\n\nA shape attribute must have between 1 and 4 components\n(inclusive).\n\nIf you call SetShapeAttribute with an attribute that does not\nsatisfy this constraint, this method will return false and have\nno effect. If you wish to \"remove\" a grid's shape, call\nSetShapeAttribute(nullptr).\n"},
  {"SetShapeAttribute", PyvtkCellGrid_SetShapeAttribute, METH_VARARGS,
   "SetShapeAttribute(self, shape:vtkCellAttribute) -> bool\nC++: bool SetShapeAttribute(vtkCellAttribute *shape)\n\n"},
  {"Query", PyvtkCellGrid_Query, METH_VARARGS,
   "Query(self, query:vtkCellGridQuery) -> bool\nC++: bool Query(vtkCellGridQuery *query)\n\nPerform a query on all the cells in this instance.\n\nThe return value indicates success (true when all cells respond\nto the query) or failure (false when some cell type is unable to\nhandle the query).\n"},
  {"GetData", PyvtkCellGrid_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkCellGrid\nC++: static vtkCellGrid *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkCellGrid\nC++: static vtkCellGrid *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellGrid_Doc =
  "vtkCellGrid - Visualization data composed of cells of arbitrary type.\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkCellGrid inherits vtkDataObject in order to introduce the concept\n"
  "of cells that, instead of relying on spatial points to specify their\n"
  "shape, rely on degrees of freedom (which may or may not be embedded\n"
  "in a world coordinate system).\n\n"
  "The degrees of freedom that define cells and the functions using\n"
  "those cells as their domain are provided in data arrays. The arrays\n"
  "are partitioned into groups (vtkDataSetAttributes) by the registered\n"
  "cell types. Each array in a group has the same number of tuples.\n\n"
  "@sa vtkDataObject vtkDataSetAttributes\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkCellGrid", // tp_name
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
  PyvtkCellGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellGrid_StaticNew()
{
  return vtkCellGrid::New();
}

PyObject *PyvtkCellGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellGrid_Type, PyvtkCellGrid_Methods,
    "vtkCellGrid",
 &PyvtkCellGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

