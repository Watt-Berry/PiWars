// python wrapper for vtkLinearSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLinearSelector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLinearSelector(PyObject *dict); }
extern "C" { PyObject *PyvtkLinearSelector_ClassNew(); }


static PyObject *
PyvtkLinearSelector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLinearSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLinearSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLinearSelector *tempr = vtkLinearSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLinearSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLinearSelector::NewInstance());

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
PyvtkLinearSelector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLinearSelector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLinearSelector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetStartPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

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
      op->SetStartPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearSelector::SetStartPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearSelector_SetStartPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStartPoint(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetStartPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearSelector_SetStartPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearSelector_SetStartPoint_s1(self, args);
    case 1:
      return PyvtkLinearSelector_SetStartPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPoint");
  return nullptr;
}


static PyObject *
PyvtkLinearSelector_GetStartPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPoint() :
      op->vtkLinearSelector::GetStartPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetEndPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

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
      op->SetEndPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkLinearSelector::SetEndPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearSelector_SetEndPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEndPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetEndPoint(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetEndPoint(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLinearSelector_SetEndPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkLinearSelector_SetEndPoint_s1(self, args);
    case 1:
      return PyvtkLinearSelector_SetEndPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetEndPoint");
  return nullptr;
}


static PyObject *
PyvtkLinearSelector_GetEndPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEndPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetEndPoint() :
      op->vtkLinearSelector::GetEndPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkLinearSelector::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkLinearSelector::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetIncludeVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeVertices(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetIncludeVertices(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetIncludeVertices(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeVertices");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetIncludeVertices() :
      op->vtkLinearSelector::GetIncludeVertices());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_IncludeVerticesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeVerticesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeVerticesOn();
    }
    else
    {
      op->vtkLinearSelector::IncludeVerticesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_IncludeVerticesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeVerticesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeVerticesOff();
    }
    else
    {
      op->vtkLinearSelector::IncludeVerticesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_SetVertexEliminationTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVertexEliminationTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVertexEliminationTolerance(temp0);
    }
    else
    {
      op->vtkLinearSelector::SetVertexEliminationTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetVertexEliminationToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexEliminationToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVertexEliminationToleranceMinValue() :
      op->vtkLinearSelector::GetVertexEliminationToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetVertexEliminationToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexEliminationToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVertexEliminationToleranceMaxValue() :
      op->vtkLinearSelector::GetVertexEliminationToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLinearSelector_GetVertexEliminationTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVertexEliminationTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLinearSelector *op = static_cast<vtkLinearSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetVertexEliminationTolerance() :
      op->vtkLinearSelector::GetVertexEliminationTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLinearSelector_Methods[] = {
  {"IsTypeOf", PyvtkLinearSelector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLinearSelector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLinearSelector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLinearSelector\nC++: static vtkLinearSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLinearSelector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLinearSelector\nC++: vtkLinearSelector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLinearSelector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLinearSelector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStartPoint", PyvtkLinearSelector_SetStartPoint, METH_VARARGS,
   "SetStartPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetStartPoint(double _arg1, double _arg2,\n    double _arg3)\nSetStartPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetStartPoint(const double _arg[3])\n\nSet/Get starting point of intersecting segment\n"},
  {"GetStartPoint", PyvtkLinearSelector_GetStartPoint, METH_VARARGS,
   "GetStartPoint(self) -> (float, float, float)\nC++: virtual double *GetStartPoint()\n\n"},
  {"SetEndPoint", PyvtkLinearSelector_SetEndPoint, METH_VARARGS,
   "SetEndPoint(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetEndPoint(double _arg1, double _arg2,\n    double _arg3)\nSetEndPoint(self, _arg:(float, float, float)) -> None\nC++: virtual void SetEndPoint(const double _arg[3])\n\nSet/Get end point of intersecting segment\n"},
  {"GetEndPoint", PyvtkLinearSelector_GetEndPoint, METH_VARARGS,
   "GetEndPoint(self) -> (float, float, float)\nC++: virtual double *GetEndPoint()\n\n"},
  {"SetPoints", PyvtkLinearSelector_SetPoints, METH_VARARGS,
   "SetPoints(self, __a:vtkPoints) -> None\nC++: virtual void SetPoints(vtkPoints *)\n\nSet/Get the list of points defining the intersecting broken line\n"},
  {"GetPoints", PyvtkLinearSelector_GetPoints, METH_VARARGS,
   "GetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\n"},
  {"SetTolerance", PyvtkLinearSelector_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet/Get tolerance to be used by intersection algorithm\n"},
  {"GetTolerance", PyvtkLinearSelector_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"SetIncludeVertices", PyvtkLinearSelector_SetIncludeVertices, METH_VARARGS,
   "SetIncludeVertices(self, _arg:bool) -> None\nC++: virtual void SetIncludeVertices(bool _arg)\n\nSet/Get whether lines vertice are included in selection\n"},
  {"GetIncludeVertices", PyvtkLinearSelector_GetIncludeVertices, METH_VARARGS,
   "GetIncludeVertices(self) -> bool\nC++: virtual bool GetIncludeVertices()\n\n"},
  {"IncludeVerticesOn", PyvtkLinearSelector_IncludeVerticesOn, METH_VARARGS,
   "IncludeVerticesOn(self) -> None\nC++: virtual void IncludeVerticesOn()\n\n"},
  {"IncludeVerticesOff", PyvtkLinearSelector_IncludeVerticesOff, METH_VARARGS,
   "IncludeVerticesOff(self) -> None\nC++: virtual void IncludeVerticesOff()\n\n"},
  {"SetVertexEliminationTolerance", PyvtkLinearSelector_SetVertexEliminationTolerance, METH_VARARGS,
   "SetVertexEliminationTolerance(self, _arg:float) -> None\nC++: virtual void SetVertexEliminationTolerance(double _arg)\n\nSet/Get relative tolerance for vertex elimination\n"},
  {"GetVertexEliminationToleranceMinValue", PyvtkLinearSelector_GetVertexEliminationToleranceMinValue, METH_VARARGS,
   "GetVertexEliminationToleranceMinValue(self) -> float\nC++: virtual double GetVertexEliminationToleranceMinValue()\n\n"},
  {"GetVertexEliminationToleranceMaxValue", PyvtkLinearSelector_GetVertexEliminationToleranceMaxValue, METH_VARARGS,
   "GetVertexEliminationToleranceMaxValue(self) -> float\nC++: virtual double GetVertexEliminationToleranceMaxValue()\n\n"},
  {"GetVertexEliminationTolerance", PyvtkLinearSelector_GetVertexEliminationTolerance, METH_VARARGS,
   "GetVertexEliminationTolerance(self) -> float\nC++: virtual double GetVertexEliminationTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLinearSelector_Doc =
  "vtkLinearSelector - select cells intersecting a line (possibly broken)\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "This filter takes a vtkCompositeDataSet as input and a line segment\n"
  "as parameter. It outputs a vtkSelection identifying all the cells\n"
  "intersecting the given line segment.\n\n"
  "@par Thanks: This class has been initially developed in the frame of\n"
  "CEA's Love visualization software development\n\n"
  "CEA/DIF - Commissariat a l'Energie Atomique, Centre DAM Ile-De-France\n\n"
  "BP12, F-91297 Arpajon, France.\n\n"
  "Modified and integrated into VTK, Kitware SAS 2012 This class was\n"
  "implemented by Thierry Carrard, Charles Pignerol, and Philippe Pebay.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLinearSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSelection.vtkLinearSelector", // tp_name
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
  PyvtkLinearSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLinearSelector_StaticNew()
{
  return vtkLinearSelector::New();
}

PyObject *PyvtkLinearSelector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLinearSelector_Type, PyvtkLinearSelector_Methods,
    "vtkLinearSelector",
 &PyvtkLinearSelector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLinearSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLinearSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLinearSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

