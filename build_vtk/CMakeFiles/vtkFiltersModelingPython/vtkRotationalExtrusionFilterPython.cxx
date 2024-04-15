// python wrapper for vtkRotationalExtrusionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRotationalExtrusionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRotationalExtrusionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkRotationalExtrusionFilter_ClassNew(); }


static PyObject *
PyvtkRotationalExtrusionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRotationalExtrusionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRotationalExtrusionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRotationalExtrusionFilter *tempr = vtkRotationalExtrusionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRotationalExtrusionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRotationalExtrusionFilter::NewInstance());

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
PyvtkRotationalExtrusionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRotationalExtrusionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRotationalExtrusionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMinValue() :
      op->vtkRotationalExtrusionFilter::GetResolutionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolutionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolutionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolutionMaxValue() :
      op->vtkRotationalExtrusionFilter::GetResolutionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkRotationalExtrusionFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCapping(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetCapping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetCapping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCapping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCapping() :
      op->vtkRotationalExtrusionFilter::GetCapping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOn();
    }
    else
    {
      op->vtkRotationalExtrusionFilter::CappingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_CappingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CappingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CappingOff();
    }
    else
    {
      op->vtkRotationalExtrusionFilter::CappingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngle(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetAngle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetAngle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngle() :
      op->vtkRotationalExtrusionFilter::GetAngle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetTranslation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetTranslation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslation() :
      op->vtkRotationalExtrusionFilter::GetTranslation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDeltaRadius(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetDeltaRadius(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetDeltaRadius(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDeltaRadius");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDeltaRadius() :
      op->vtkRotationalExtrusionFilter::GetDeltaRadius());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRotationalExtrusionFilter_SetRotationAxis_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

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
      op->SetRotationAxis(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetRotationAxis(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationalExtrusionFilter_SetRotationAxis_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRotationAxis(temp0);
    }
    else
    {
      op->vtkRotationalExtrusionFilter::SetRotationAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRotationalExtrusionFilter_SetRotationAxis(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRotationalExtrusionFilter_SetRotationAxis_s1(self, args);
    case 1:
      return PyvtkRotationalExtrusionFilter_SetRotationAxis_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRotationAxis");
  return nullptr;
}


static PyObject *
PyvtkRotationalExtrusionFilter_GetRotationAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRotationalExtrusionFilter *op = static_cast<vtkRotationalExtrusionFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRotationAxis() :
      op->vtkRotationalExtrusionFilter::GetRotationAxis());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkRotationalExtrusionFilter_Methods[] = {
  {"IsTypeOf", PyvtkRotationalExtrusionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRotationalExtrusionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRotationalExtrusionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRotationalExtrusionFilter\nC++: static vtkRotationalExtrusionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRotationalExtrusionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRotationalExtrusionFilter\nC++: vtkRotationalExtrusionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRotationalExtrusionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRotationalExtrusionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetResolution", PyvtkRotationalExtrusionFilter_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\nSet/Get resolution of sweep operation. Resolution controls the\nnumber of intermediate node points.\n"},
  {"GetResolutionMinValue", PyvtkRotationalExtrusionFilter_GetResolutionMinValue, METH_VARARGS,
   "GetResolutionMinValue(self) -> int\nC++: virtual int GetResolutionMinValue()\n\n"},
  {"GetResolutionMaxValue", PyvtkRotationalExtrusionFilter_GetResolutionMaxValue, METH_VARARGS,
   "GetResolutionMaxValue(self) -> int\nC++: virtual int GetResolutionMaxValue()\n\n"},
  {"GetResolution", PyvtkRotationalExtrusionFilter_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetCapping", PyvtkRotationalExtrusionFilter_SetCapping, METH_VARARGS,
   "SetCapping(self, _arg:int) -> None\nC++: virtual void SetCapping(vtkTypeBool _arg)\n\nTurn on/off the capping of the skirt.\n"},
  {"GetCapping", PyvtkRotationalExtrusionFilter_GetCapping, METH_VARARGS,
   "GetCapping(self) -> int\nC++: virtual vtkTypeBool GetCapping()\n\n"},
  {"CappingOn", PyvtkRotationalExtrusionFilter_CappingOn, METH_VARARGS,
   "CappingOn(self) -> None\nC++: virtual void CappingOn()\n\n"},
  {"CappingOff", PyvtkRotationalExtrusionFilter_CappingOff, METH_VARARGS,
   "CappingOff(self) -> None\nC++: virtual void CappingOff()\n\n"},
  {"SetAngle", PyvtkRotationalExtrusionFilter_SetAngle, METH_VARARGS,
   "SetAngle(self, _arg:float) -> None\nC++: virtual void SetAngle(double _arg)\n\nSet/Get angle of rotation.\n"},
  {"GetAngle", PyvtkRotationalExtrusionFilter_GetAngle, METH_VARARGS,
   "GetAngle(self) -> float\nC++: virtual double GetAngle()\n\n"},
  {"SetTranslation", PyvtkRotationalExtrusionFilter_SetTranslation, METH_VARARGS,
   "SetTranslation(self, _arg:float) -> None\nC++: virtual void SetTranslation(double _arg)\n\nSet/Get total amount of translation along the rotation axis.\n"},
  {"GetTranslation", PyvtkRotationalExtrusionFilter_GetTranslation, METH_VARARGS,
   "GetTranslation(self) -> float\nC++: virtual double GetTranslation()\n\n"},
  {"SetDeltaRadius", PyvtkRotationalExtrusionFilter_SetDeltaRadius, METH_VARARGS,
   "SetDeltaRadius(self, _arg:float) -> None\nC++: virtual void SetDeltaRadius(double _arg)\n\nSet/Get change in radius during sweep process.\n"},
  {"GetDeltaRadius", PyvtkRotationalExtrusionFilter_GetDeltaRadius, METH_VARARGS,
   "GetDeltaRadius(self) -> float\nC++: virtual double GetDeltaRadius()\n\n"},
  {"SetRotationAxis", PyvtkRotationalExtrusionFilter_SetRotationAxis, METH_VARARGS,
   "SetRotationAxis(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetRotationAxis(double _arg1, double _arg2,\n    double _arg3)\nSetRotationAxis(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRotationAxis(const double _arg[3])\n\nSet/Get the axis around which the rotation is done.\n"},
  {"GetRotationAxis", PyvtkRotationalExtrusionFilter_GetRotationAxis, METH_VARARGS,
   "GetRotationAxis(self) -> (float, float, float)\nC++: virtual double *GetRotationAxis()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRotationalExtrusionFilter_Doc =
  "vtkRotationalExtrusionFilter - sweep polygonal data creating \"skirt\"\nfrom free edges and lines, and lines from vertices\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRotationalExtrusionFilter is a modeling filter. It takes polygonal\n"
  "data as input and generates polygonal data on output. The input\n"
  "dataset is swept around an axis to create new polygonal primitives.\n"
  "These primitives form a \"skirt\" or swept surface. For example,\n"
  "sweeping a line results in a cylindrical shell, and sweeping a circle\n"
  "creates a torus.\n\n"
  "There are a number of control parameters for this filter. You can\n"
  "control whether the sweep of a 2D object (i.e., polygon or triangle\n"
  "strip) is capped with the generating geometry via the \"Capping\"\n"
  "instance variable. Also, you can control the angle of rotation,\n"
  "whether translation along the axis is performed along with the\n"
  "rotation, and around which axis this is done. (Translation is useful\n"
  "for creating \"springs\".) You also can adjust the radius of the\n"
  "generating geometry using the \"DeltaRotation\" instance variable.\n\n"
  "The skirt is generated by locating certain topological features. Free\n"
  "edges (edges of polygons or triangle strips only used by one polygon\n"
  "or triangle strips) generate surfaces. This is true also of lines or\n"
  "polylines. Vertices generate lines.\n\n"
  "This filter can be used to model axisymmetric objects like cylinders,\n"
  "bottles, and wine glasses; or translational/rotational symmetric\n"
  "objects like springs or corkscrews.\n\n"
  "@warning\n"
  "If the object sweeps 360 degrees, radius does not vary, and the\n"
  "object does not translate, capping is not performed. This is because\n"
  "the cap is unnecessary.\n\n"
  "@warning\n"
  "Some polygonal objects have no free edges (e.g., sphere). When swept,\n"
  "this will result in two separate surfaces if capping is on, or no\n"
  "surface if capping is off.\n\n"
  "@sa\n"
  "vtkLinearExtrusionFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRotationalExtrusionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkRotationalExtrusionFilter", // tp_name
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
  PyvtkRotationalExtrusionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRotationalExtrusionFilter_StaticNew()
{
  return vtkRotationalExtrusionFilter::New();
}

PyObject *PyvtkRotationalExtrusionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRotationalExtrusionFilter_Type, PyvtkRotationalExtrusionFilter_Methods,
    "vtkRotationalExtrusionFilter",
 &PyvtkRotationalExtrusionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRotationalExtrusionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRotationalExtrusionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRotationalExtrusionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

