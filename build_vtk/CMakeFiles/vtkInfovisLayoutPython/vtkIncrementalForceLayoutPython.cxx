// python wrapper for vtkIncrementalForceLayout
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkIncrementalForceLayout.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalForceLayout(PyObject *dict); }
extern "C" { PyObject *PyvtkIncrementalForceLayout_ClassNew(); }


static PyObject *
PyvtkIncrementalForceLayout_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalForceLayout::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalForceLayout::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalForceLayout *tempr = vtkIncrementalForceLayout::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalForceLayout *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalForceLayout::NewInstance());

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
PyvtkIncrementalForceLayout_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIncrementalForceLayout::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIncrementalForceLayout::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  vtkGraph *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGraph"))
  {
    if (ap.IsBound())
    {
      op->SetGraph(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetGraph(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetGraph(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGraph");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraph *tempr = (ap.IsBound() ?
      op->GetGraph() :
      op->vtkIncrementalForceLayout::GetGraph());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetFixed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFixed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFixed(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetFixed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetFixed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFixed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetFixed() :
      op->vtkIncrementalForceLayout::GetFixed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAlpha(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetAlpha(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetAlpha() :
      op->vtkIncrementalForceLayout::GetAlpha());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTheta(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetTheta(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetTheta(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTheta");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetTheta() :
      op->vtkIncrementalForceLayout::GetTheta());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetCharge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCharge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCharge(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetCharge(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetCharge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCharge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCharge() :
      op->vtkIncrementalForceLayout::GetCharge());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStrength(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetStrength(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetStrength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStrength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetStrength() :
      op->vtkIncrementalForceLayout::GetStrength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDistance(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetDistance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetDistance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDistance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetDistance() :
      op->vtkIncrementalForceLayout::GetDistance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGravity(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetGravity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetGravity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetGravity() :
      op->vtkIncrementalForceLayout::GetGravity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetFriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFriction(temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetFriction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_GetFriction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFriction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetFriction() :
      op->vtkIncrementalForceLayout::GetFriction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_SetGravityPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGravityPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetGravityPoint(*temp0);
    }
    else
    {
      op->vtkIncrementalForceLayout::SetGravityPoint(*temp0);
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
PyvtkIncrementalForceLayout_GetGravityPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGravityPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetGravityPoint() :
      op->vtkIncrementalForceLayout::GetGravityPoint());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalForceLayout_UpdatePositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UpdatePositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalForceLayout *op = static_cast<vtkIncrementalForceLayout *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePositions();
    }
    else
    {
      op->vtkIncrementalForceLayout::UpdatePositions();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkIncrementalForceLayout_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalForceLayout_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIncrementalForceLayout_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIncrementalForceLayout_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIncrementalForceLayout\nC++: static vtkIncrementalForceLayout *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIncrementalForceLayout_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIncrementalForceLayout\nC++: vtkIncrementalForceLayout *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIncrementalForceLayout_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIncrementalForceLayout_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGraph", PyvtkIncrementalForceLayout_SetGraph, METH_VARARGS,
   "SetGraph(self, g:vtkGraph) -> None\nC++: virtual void SetGraph(vtkGraph *g)\n\nSet the graph to be positioned.\n"},
  {"GetGraph", PyvtkIncrementalForceLayout_GetGraph, METH_VARARGS,
   "GetGraph(self) -> vtkGraph\nC++: virtual vtkGraph *GetGraph()\n\n"},
  {"SetFixed", PyvtkIncrementalForceLayout_SetFixed, METH_VARARGS,
   "SetFixed(self, fixed:int) -> None\nC++: virtual void SetFixed(vtkIdType fixed)\n\nSet the id of the vertex that will not move during the\nsimulation. Set to -1 to allow all the vertices to move.\n"},
  {"GetFixed", PyvtkIncrementalForceLayout_GetFixed, METH_VARARGS,
   "GetFixed(self) -> int\nC++: virtual vtkIdType GetFixed()\n\n"},
  {"SetAlpha", PyvtkIncrementalForceLayout_SetAlpha, METH_VARARGS,
   "SetAlpha(self, _arg:float) -> None\nC++: virtual void SetAlpha(float _arg)\n\nSet the level of activity in the simulation. Default is 0.1.\n"},
  {"GetAlpha", PyvtkIncrementalForceLayout_GetAlpha, METH_VARARGS,
   "GetAlpha(self) -> float\nC++: virtual float GetAlpha()\n\n"},
  {"SetTheta", PyvtkIncrementalForceLayout_SetTheta, METH_VARARGS,
   "SetTheta(self, _arg:float) -> None\nC++: virtual void SetTheta(float _arg)\n\nSet the Barnes-Hut threshold for the simulation. Higher values\nwill speed the simulation at the expense of some accuracy.\nDefault is 0.8.\n"},
  {"GetTheta", PyvtkIncrementalForceLayout_GetTheta, METH_VARARGS,
   "GetTheta(self) -> float\nC++: virtual float GetTheta()\n\n"},
  {"SetCharge", PyvtkIncrementalForceLayout_SetCharge, METH_VARARGS,
   "SetCharge(self, _arg:float) -> None\nC++: virtual void SetCharge(float _arg)\n\nSet the charge of each vertex. Higher negative values will repel\nvertices from each other more strongly. Default is -30.\n"},
  {"GetCharge", PyvtkIncrementalForceLayout_GetCharge, METH_VARARGS,
   "GetCharge(self) -> float\nC++: virtual float GetCharge()\n\n"},
  {"SetStrength", PyvtkIncrementalForceLayout_SetStrength, METH_VARARGS,
   "SetStrength(self, _arg:float) -> None\nC++: virtual void SetStrength(float _arg)\n\nSet the rigitity of links in the simulation. Default is 2.\n"},
  {"GetStrength", PyvtkIncrementalForceLayout_GetStrength, METH_VARARGS,
   "GetStrength(self) -> float\nC++: virtual float GetStrength()\n\n"},
  {"SetDistance", PyvtkIncrementalForceLayout_SetDistance, METH_VARARGS,
   "SetDistance(self, _arg:float) -> None\nC++: virtual void SetDistance(float _arg)\n\nSet the resting distance of each link in scene units, which is\nequal to pixels when there is no scene scaling. Default is 20.\n"},
  {"GetDistance", PyvtkIncrementalForceLayout_GetDistance, METH_VARARGS,
   "GetDistance(self) -> float\nC++: virtual float GetDistance()\n\n"},
  {"SetGravity", PyvtkIncrementalForceLayout_SetGravity, METH_VARARGS,
   "SetGravity(self, _arg:float) -> None\nC++: virtual void SetGravity(float _arg)\n\nSet the amount of gravitational pull toward the gravity point.\nDefault is 0.01.\n"},
  {"GetGravity", PyvtkIncrementalForceLayout_GetGravity, METH_VARARGS,
   "GetGravity(self) -> float\nC++: virtual float GetGravity()\n\n"},
  {"SetFriction", PyvtkIncrementalForceLayout_SetFriction, METH_VARARGS,
   "SetFriction(self, _arg:float) -> None\nC++: virtual void SetFriction(float _arg)\n\nSet the multiplier for scaling down velocity in the simulation,\nwhere values closer to 1 are more frictionless. Default is 0.95.\n"},
  {"GetFriction", PyvtkIncrementalForceLayout_GetFriction, METH_VARARGS,
   "GetFriction(self) -> float\nC++: virtual float GetFriction()\n\n"},
  {"SetGravityPoint", PyvtkIncrementalForceLayout_SetGravityPoint, METH_VARARGS,
   "SetGravityPoint(self, point:vtkVector2f) -> None\nC++: virtual void SetGravityPoint(const vtkVector2f &point)\n\nSet the gravity point where all vertices will migrate. Generally\nthis should be set to the location in the center of the scene.\nDefault location is (200, 200).\n"},
  {"GetGravityPoint", PyvtkIncrementalForceLayout_GetGravityPoint, METH_VARARGS,
   "GetGravityPoint(self) -> vtkVector2f\nC++: virtual vtkVector2f GetGravityPoint()\n\n"},
  {"UpdatePositions", PyvtkIncrementalForceLayout_UpdatePositions, METH_VARARGS,
   "UpdatePositions(self) -> None\nC++: void UpdatePositions()\n\nPerform one iteration of the force-directed layout.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIncrementalForceLayout_Doc =
  "vtkIncrementalForceLayout - incremental force-directed layout.\n\n"
  "Superclass: vtkObject\n\n"
  "Performs an incremental force-directed layout of a graph. Set the\n"
  "graph then iteratively execute UpdatePositions() to update the vertex\n"
  "positions. Note that this directly modifies the vertex locations in\n"
  "the graph.\n\n"
  "This layout is modeled after D3's force layout described at\n"
  "https://github.com/mbostock/d3/wiki/Force-Layout\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIncrementalForceLayout_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisLayout.vtkIncrementalForceLayout", // tp_name
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
  PyvtkIncrementalForceLayout_Doc, // tp_doc
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

static vtkObjectBase *PyvtkIncrementalForceLayout_StaticNew()
{
  return vtkIncrementalForceLayout::New();
}

PyObject *PyvtkIncrementalForceLayout_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIncrementalForceLayout_Type, PyvtkIncrementalForceLayout_Methods,
    "vtkIncrementalForceLayout",
 &PyvtkIncrementalForceLayout_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIncrementalForceLayout(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalForceLayout_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalForceLayout", o) != 0)
  {
    Py_DECREF(o);
  }

}

