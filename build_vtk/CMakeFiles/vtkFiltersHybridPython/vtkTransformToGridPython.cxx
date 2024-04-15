// python wrapper for vtkTransformToGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformToGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformToGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkTransformToGrid_ClassNew(); }


static PyObject *
PyvtkTransformToGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformToGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformToGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformToGrid *tempr = vtkTransformToGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformToGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformToGrid::NewInstance());

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
PyvtkTransformToGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformToGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformToGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkTransformToGrid::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkTransformToGrid::SetGridExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridExtent(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkTransformToGrid_SetGridExtent_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridExtent");
  return nullptr;
}


static PyObject *
PyvtkTransformToGrid_GetGridExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGridExtent() :
      op->vtkTransformToGrid::GetGridExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformToGrid::SetGridOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridOrigin(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformToGrid_SetGridOrigin_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridOrigin");
  return nullptr;
}


static PyObject *
PyvtkTransformToGrid_GetGridOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridOrigin() :
      op->vtkTransformToGrid::GetGridOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformToGrid::SetGridSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGridSpacing(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformToGrid_SetGridSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformToGrid_SetGridSpacing_s1(self, args);
    case 1:
      return PyvtkTransformToGrid_SetGridSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGridSpacing");
  return nullptr;
}


static PyObject *
PyvtkTransformToGrid_GetGridSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetGridSpacing() :
      op->vtkTransformToGrid::GetGridSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarType(temp0);
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetGridScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGridScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGridScalarType() :
      op->vtkTransformToGrid::GetGridScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToDouble();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToFloat();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToShort();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_SetGridScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGridScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetGridScalarTypeToChar();
    }
    else
    {
      op->vtkTransformToGrid::SetGridScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementScale() :
      op->vtkTransformToGrid::GetDisplacementScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetDisplacementShift(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementShift");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementShift() :
      op->vtkTransformToGrid::GetDisplacementShift());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformToGrid_GetOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformToGrid *op = static_cast<vtkTransformToGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetOutput() :
      op->vtkTransformToGrid::GetOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformToGrid_Methods[] = {
  {"IsTypeOf", PyvtkTransformToGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformToGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformToGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformToGrid\nC++: static vtkTransformToGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformToGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformToGrid\nC++: vtkTransformToGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformToGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformToGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInput", PyvtkTransformToGrid_SetInput, METH_VARARGS,
   "SetInput(self, __a:vtkAbstractTransform) -> None\nC++: virtual void SetInput(vtkAbstractTransform *)\n\nSet/Get the transform which will be converted into a grid.\n"},
  {"GetInput", PyvtkTransformToGrid_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetInput()\n\n"},
  {"SetGridExtent", PyvtkTransformToGrid_SetGridExtent, METH_VARARGS,
   "SetGridExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetGridExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetGridExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetGridExtent(const int _arg[6])\n\nGet/Set the extent of the grid.\n"},
  {"GetGridExtent", PyvtkTransformToGrid_GetGridExtent, METH_VARARGS,
   "GetGridExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetGridExtent()\n\n"},
  {"SetGridOrigin", PyvtkTransformToGrid_SetGridOrigin, METH_VARARGS,
   "SetGridOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetGridOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetGridOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetGridOrigin(const double _arg[3])\n\nGet/Set the origin of the grid.\n"},
  {"GetGridOrigin", PyvtkTransformToGrid_GetGridOrigin, METH_VARARGS,
   "GetGridOrigin(self) -> (float, float, float)\nC++: virtual double *GetGridOrigin()\n\n"},
  {"SetGridSpacing", PyvtkTransformToGrid_SetGridSpacing, METH_VARARGS,
   "SetGridSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetGridSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetGridSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetGridSpacing(const double _arg[3])\n\nGet/Set the spacing between samples in the grid.\n"},
  {"GetGridSpacing", PyvtkTransformToGrid_GetGridSpacing, METH_VARARGS,
   "GetGridSpacing(self) -> (float, float, float)\nC++: virtual double *GetGridSpacing()\n\n"},
  {"SetGridScalarType", PyvtkTransformToGrid_SetGridScalarType, METH_VARARGS,
   "SetGridScalarType(self, _arg:int) -> None\nC++: virtual void SetGridScalarType(int _arg)\n\nGet/Set the scalar type of the grid.  The default is float.\n"},
  {"GetGridScalarType", PyvtkTransformToGrid_GetGridScalarType, METH_VARARGS,
   "GetGridScalarType(self) -> int\nC++: virtual int GetGridScalarType()\n\n"},
  {"SetGridScalarTypeToDouble", PyvtkTransformToGrid_SetGridScalarTypeToDouble, METH_VARARGS,
   "SetGridScalarTypeToDouble(self) -> None\nC++: void SetGridScalarTypeToDouble()\n\n"},
  {"SetGridScalarTypeToFloat", PyvtkTransformToGrid_SetGridScalarTypeToFloat, METH_VARARGS,
   "SetGridScalarTypeToFloat(self) -> None\nC++: void SetGridScalarTypeToFloat()\n\n"},
  {"SetGridScalarTypeToShort", PyvtkTransformToGrid_SetGridScalarTypeToShort, METH_VARARGS,
   "SetGridScalarTypeToShort(self) -> None\nC++: void SetGridScalarTypeToShort()\n\n"},
  {"SetGridScalarTypeToUnsignedShort", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedShort, METH_VARARGS,
   "SetGridScalarTypeToUnsignedShort(self) -> None\nC++: void SetGridScalarTypeToUnsignedShort()\n\n"},
  {"SetGridScalarTypeToUnsignedChar", PyvtkTransformToGrid_SetGridScalarTypeToUnsignedChar, METH_VARARGS,
   "SetGridScalarTypeToUnsignedChar(self) -> None\nC++: void SetGridScalarTypeToUnsignedChar()\n\n"},
  {"SetGridScalarTypeToChar", PyvtkTransformToGrid_SetGridScalarTypeToChar, METH_VARARGS,
   "SetGridScalarTypeToChar(self) -> None\nC++: void SetGridScalarTypeToChar()\n\n"},
  {"GetDisplacementScale", PyvtkTransformToGrid_GetDisplacementScale, METH_VARARGS,
   "GetDisplacementScale(self) -> float\nC++: double GetDisplacementScale()\n\nGet the scale and shift to convert integer grid elements into\nreal values:  dx = scale*di + shift.  If the grid is of double\ntype, then scale = 1 and shift = 0.\n"},
  {"GetDisplacementShift", PyvtkTransformToGrid_GetDisplacementShift, METH_VARARGS,
   "GetDisplacementShift(self) -> float\nC++: double GetDisplacementShift()\n\n"},
  {"GetOutput", PyvtkTransformToGrid_GetOutput, METH_VARARGS,
   "GetOutput(self) -> vtkImageData\nC++: vtkImageData *GetOutput()\n\nGet the output data object for a port on this algorithm.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransformToGrid_Doc =
  "vtkTransformToGrid - create a grid for a vtkGridTransform\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "vtkTransformToGrid takes any transform as input and produces a grid\n"
  "for use by a vtkGridTransform.  This can be used, for example, to\n"
  "invert a grid transform, concatenate two grid transforms, or to\n"
  "convert a thin plate spline transform into a grid transform.\n"
  "@sa\n"
  "vtkGridTransform vtkThinPlateSplineTransform vtkAbstractTransform\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformToGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkTransformToGrid", // tp_name
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
  PyvtkTransformToGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformToGrid_StaticNew()
{
  return vtkTransformToGrid::New();
}

PyObject *PyvtkTransformToGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformToGrid_Type, PyvtkTransformToGrid_Methods,
    "vtkTransformToGrid",
 &PyvtkTransformToGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformToGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformToGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformToGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

