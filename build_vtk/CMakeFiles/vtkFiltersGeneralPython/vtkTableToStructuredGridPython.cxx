// python wrapper for vtkTableToStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTableToStructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTableToStructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkTableToStructuredGrid_ClassNew(); }


static PyObject *
PyvtkTableToStructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTableToStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTableToStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTableToStructuredGrid *tempr = vtkTableToStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTableToStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTableToStructuredGrid::NewInstance());

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
PyvtkTableToStructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTableToStructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTableToStructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

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
      op->SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetWholeExtent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTableToStructuredGrid_SetWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s1(self, args);
    case 1:
      return PyvtkTableToStructuredGrid_SetWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkTableToStructuredGrid_GetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetWholeExtent() :
      op->vtkTableToStructuredGrid::GetWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetXColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXColumn() :
      op->vtkTableToStructuredGrid::GetXColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetXComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMinValue() :
      op->vtkTableToStructuredGrid::GetXComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetXComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXComponent() :
      op->vtkTableToStructuredGrid::GetXComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetYColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYColumn() :
      op->vtkTableToStructuredGrid::GetYColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetYComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMinValue() :
      op->vtkTableToStructuredGrid::GetYComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetYComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYComponent() :
      op->vtkTableToStructuredGrid::GetYComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZColumn(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetZColumn(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZColumn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZColumn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetZColumn() :
      op->vtkTableToStructuredGrid::GetZColumn());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_SetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZComponent(temp0);
    }
    else
    {
      op->vtkTableToStructuredGrid::SetZComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMinValue() :
      op->vtkTableToStructuredGrid::GetZComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponentMaxValue() :
      op->vtkTableToStructuredGrid::GetZComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTableToStructuredGrid_GetZComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTableToStructuredGrid *op = static_cast<vtkTableToStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetZComponent() :
      op->vtkTableToStructuredGrid::GetZComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTableToStructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkTableToStructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTableToStructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTableToStructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTableToStructuredGrid\nC++: static vtkTableToStructuredGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTableToStructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTableToStructuredGrid\nC++: vtkTableToStructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTableToStructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTableToStructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkTableToStructuredGrid_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetWholeExtent(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetWholeExtent(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetWholeExtent(const int _arg[6])\n\nGet/Set the whole extents for the image to produce. The size of\nthe image must match the number of rows in the input table.\n"},
  {"GetWholeExtent", PyvtkTableToStructuredGrid_GetWholeExtent, METH_VARARGS,
   "GetWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetWholeExtent()\n\n"},
  {"SetXColumn", PyvtkTableToStructuredGrid_SetXColumn, METH_VARARGS,
   "SetXColumn(self, _arg:str) -> None\nC++: virtual void SetXColumn(const char *_arg)\n\nSet the name of the column to use as the X coordinate for the\npoints.\n"},
  {"GetXColumn", PyvtkTableToStructuredGrid_GetXColumn, METH_VARARGS,
   "GetXColumn(self) -> str\nC++: virtual char *GetXColumn()\n\n"},
  {"SetXComponent", PyvtkTableToStructuredGrid_SetXComponent, METH_VARARGS,
   "SetXComponent(self, _arg:int) -> None\nC++: virtual void SetXComponent(int _arg)\n\nSpecify the component for the column specified using SetXColumn()\nto use as the xcoordinate in case the column is a multi-component\narray. Default is 0.\n"},
  {"GetXComponentMinValue", PyvtkTableToStructuredGrid_GetXComponentMinValue, METH_VARARGS,
   "GetXComponentMinValue(self) -> int\nC++: virtual int GetXComponentMinValue()\n\n"},
  {"GetXComponentMaxValue", PyvtkTableToStructuredGrid_GetXComponentMaxValue, METH_VARARGS,
   "GetXComponentMaxValue(self) -> int\nC++: virtual int GetXComponentMaxValue()\n\n"},
  {"GetXComponent", PyvtkTableToStructuredGrid_GetXComponent, METH_VARARGS,
   "GetXComponent(self) -> int\nC++: virtual int GetXComponent()\n\n"},
  {"SetYColumn", PyvtkTableToStructuredGrid_SetYColumn, METH_VARARGS,
   "SetYColumn(self, _arg:str) -> None\nC++: virtual void SetYColumn(const char *_arg)\n\nSet the name of the column to use as the Y coordinate for the\npoints. Default is 0.\n"},
  {"GetYColumn", PyvtkTableToStructuredGrid_GetYColumn, METH_VARARGS,
   "GetYColumn(self) -> str\nC++: virtual char *GetYColumn()\n\n"},
  {"SetYComponent", PyvtkTableToStructuredGrid_SetYComponent, METH_VARARGS,
   "SetYComponent(self, _arg:int) -> None\nC++: virtual void SetYComponent(int _arg)\n\nSpecify the component for the column specified using SetYColumn()\nto use as the Ycoordinate in case the column is a multi-component\narray.\n"},
  {"GetYComponentMinValue", PyvtkTableToStructuredGrid_GetYComponentMinValue, METH_VARARGS,
   "GetYComponentMinValue(self) -> int\nC++: virtual int GetYComponentMinValue()\n\n"},
  {"GetYComponentMaxValue", PyvtkTableToStructuredGrid_GetYComponentMaxValue, METH_VARARGS,
   "GetYComponentMaxValue(self) -> int\nC++: virtual int GetYComponentMaxValue()\n\n"},
  {"GetYComponent", PyvtkTableToStructuredGrid_GetYComponent, METH_VARARGS,
   "GetYComponent(self) -> int\nC++: virtual int GetYComponent()\n\n"},
  {"SetZColumn", PyvtkTableToStructuredGrid_SetZColumn, METH_VARARGS,
   "SetZColumn(self, _arg:str) -> None\nC++: virtual void SetZColumn(const char *_arg)\n\nSet the name of the column to use as the Z coordinate for the\npoints. Default is 0.\n"},
  {"GetZColumn", PyvtkTableToStructuredGrid_GetZColumn, METH_VARARGS,
   "GetZColumn(self) -> str\nC++: virtual char *GetZColumn()\n\n"},
  {"SetZComponent", PyvtkTableToStructuredGrid_SetZComponent, METH_VARARGS,
   "SetZComponent(self, _arg:int) -> None\nC++: virtual void SetZComponent(int _arg)\n\nSpecify the component for the column specified using SetZColumn()\nto use as the Zcoordinate in case the column is a multi-component\narray.\n"},
  {"GetZComponentMinValue", PyvtkTableToStructuredGrid_GetZComponentMinValue, METH_VARARGS,
   "GetZComponentMinValue(self) -> int\nC++: virtual int GetZComponentMinValue()\n\n"},
  {"GetZComponentMaxValue", PyvtkTableToStructuredGrid_GetZComponentMaxValue, METH_VARARGS,
   "GetZComponentMaxValue(self) -> int\nC++: virtual int GetZComponentMaxValue()\n\n"},
  {"GetZComponent", PyvtkTableToStructuredGrid_GetZComponent, METH_VARARGS,
   "GetZComponent(self) -> int\nC++: virtual int GetZComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTableToStructuredGrid_Doc =
  "vtkTableToStructuredGrid - converts vtkTable to a vtkStructuredGrid.\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkTableToStructuredGrid is a filter that converts an input vtkTable\n"
  "to a vtkStructuredGrid. It provides API to select columns to use as\n"
  "points in the output structured grid. The specified dimensions of the\n"
  "output (specified using SetWholeExtent()) must match the number of\n"
  "rows in the input table.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTableToStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkTableToStructuredGrid", // tp_name
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
  PyvtkTableToStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTableToStructuredGrid_StaticNew()
{
  return vtkTableToStructuredGrid::New();
}

PyObject *PyvtkTableToStructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTableToStructuredGrid_Type, PyvtkTableToStructuredGrid_Methods,
    "vtkTableToStructuredGrid",
 &PyvtkTableToStructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTableToStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTableToStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTableToStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

