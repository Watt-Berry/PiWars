// python wrapper for vtkTextureMapToCylinder
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTextureMapToCylinder.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTextureMapToCylinder(PyObject *dict); }
extern "C" { PyObject *PyvtkTextureMapToCylinder_ClassNew(); }


static PyObject *
PyvtkTextureMapToCylinder_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTextureMapToCylinder::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTextureMapToCylinder::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTextureMapToCylinder *tempr = vtkTextureMapToCylinder::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextureMapToCylinder *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTextureMapToCylinder::NewInstance());

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
PyvtkTextureMapToCylinder_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTextureMapToCylinder::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTextureMapToCylinder::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint1(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint1(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint1_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToCylinder_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkTextureMapToCylinder::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

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
      op->SetPoint2(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint2(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTextureMapToCylinder_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTextureMapToCylinder_SetPoint2_s1(self, args);
    case 1:
      return PyvtkTextureMapToCylinder_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkTextureMapToCylinder_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkTextureMapToCylinder::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutomaticCylinderGeneration(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetAutomaticCylinderGeneration(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutomaticCylinderGeneration");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAutomaticCylinderGeneration() :
      op->vtkTextureMapToCylinder::GetAutomaticCylinderGeneration());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticCylinderGenerationOn();
    }
    else
    {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AutomaticCylinderGenerationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AutomaticCylinderGenerationOff();
    }
    else
    {
      op->vtkTextureMapToCylinder::AutomaticCylinderGenerationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_SetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPreventSeam(temp0);
    }
    else
    {
      op->vtkTextureMapToCylinder::SetPreventSeam(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_GetPreventSeam(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPreventSeam");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPreventSeam() :
      op->vtkTextureMapToCylinder::GetPreventSeam());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOn();
    }
    else
    {
      op->vtkTextureMapToCylinder::PreventSeamOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTextureMapToCylinder_PreventSeamOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PreventSeamOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTextureMapToCylinder *op = static_cast<vtkTextureMapToCylinder *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PreventSeamOff();
    }
    else
    {
      op->vtkTextureMapToCylinder::PreventSeamOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTextureMapToCylinder_Methods[] = {
  {"IsTypeOf", PyvtkTextureMapToCylinder_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTextureMapToCylinder_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTextureMapToCylinder_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTextureMapToCylinder\nC++: static vtkTextureMapToCylinder *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTextureMapToCylinder_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTextureMapToCylinder\nC++: vtkTextureMapToCylinder *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTextureMapToCylinder_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTextureMapToCylinder_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPoint1", PyvtkTextureMapToCylinder_SetPoint1, METH_VARARGS,
   "SetPoint1(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint1(double _arg1, double _arg2,\n    double _arg3)\nSetPoint1(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint1(const double _arg[3])\n\nSpecify the first point defining the cylinder axis,\n"},
  {"GetPoint1", PyvtkTextureMapToCylinder_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (float, float, float)\nC++: virtual double *GetPoint1()\n\n"},
  {"SetPoint2", PyvtkTextureMapToCylinder_SetPoint2, METH_VARARGS,
   "SetPoint2(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPoint2(double _arg1, double _arg2,\n    double _arg3)\nSetPoint2(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPoint2(const double _arg[3])\n\nSpecify the second point defining the cylinder axis,\n"},
  {"GetPoint2", PyvtkTextureMapToCylinder_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (float, float, float)\nC++: virtual double *GetPoint2()\n\n"},
  {"SetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_SetAutomaticCylinderGeneration, METH_VARARGS,
   "SetAutomaticCylinderGeneration(self, _arg:int) -> None\nC++: virtual void SetAutomaticCylinderGeneration(vtkTypeBool _arg)\n\nTurn on/off automatic cylinder generation. This means it\nautomatically finds the cylinder center and axis.\n"},
  {"GetAutomaticCylinderGeneration", PyvtkTextureMapToCylinder_GetAutomaticCylinderGeneration, METH_VARARGS,
   "GetAutomaticCylinderGeneration(self) -> int\nC++: virtual vtkTypeBool GetAutomaticCylinderGeneration()\n\n"},
  {"AutomaticCylinderGenerationOn", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOn, METH_VARARGS,
   "AutomaticCylinderGenerationOn(self) -> None\nC++: virtual void AutomaticCylinderGenerationOn()\n\n"},
  {"AutomaticCylinderGenerationOff", PyvtkTextureMapToCylinder_AutomaticCylinderGenerationOff, METH_VARARGS,
   "AutomaticCylinderGenerationOff(self) -> None\nC++: virtual void AutomaticCylinderGenerationOff()\n\n"},
  {"SetPreventSeam", PyvtkTextureMapToCylinder_SetPreventSeam, METH_VARARGS,
   "SetPreventSeam(self, _arg:int) -> None\nC++: virtual void SetPreventSeam(vtkTypeBool _arg)\n\nControl how the texture coordinates are generated. If PreventSeam\nis set, the s-coordinate ranges from 0->1 and 1->0 corresponding\nto the angle variation from 0->180 and 180->0. Otherwise, the\ns-coordinate ranges from 0->1 from 0->360 degrees.\n"},
  {"GetPreventSeam", PyvtkTextureMapToCylinder_GetPreventSeam, METH_VARARGS,
   "GetPreventSeam(self) -> int\nC++: virtual vtkTypeBool GetPreventSeam()\n\n"},
  {"PreventSeamOn", PyvtkTextureMapToCylinder_PreventSeamOn, METH_VARARGS,
   "PreventSeamOn(self) -> None\nC++: virtual void PreventSeamOn()\n\n"},
  {"PreventSeamOff", PyvtkTextureMapToCylinder_PreventSeamOff, METH_VARARGS,
   "PreventSeamOff(self) -> None\nC++: virtual void PreventSeamOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTextureMapToCylinder_Doc =
  "vtkTextureMapToCylinder - generate texture coordinates by mapping\npoints to cylinder\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTextureMapToCylinder is a filter that generates 2D texture\n"
  "coordinates by mapping input dataset points onto a cylinder. The\n"
  "cylinder can either be user specified or generated automatically.\n"
  "(The cylinder is generated automatically by computing the axis of the\n"
  "cylinder.)  Note that the generated texture coordinates for the\n"
  "s-coordinate ranges from (0-1) (corresponding to angle of 0->360\n"
  "around axis), while the mapping of the t-coordinate is controlled by\n"
  "the projection of points along the axis.\n\n"
  "To specify a cylinder manually, you must provide two points that\n"
  "define the axis of the cylinder. The length of the axis will affect\n"
  "the t-coordinates.\n\n"
  "A special ivar controls how the s-coordinate is generated. If\n"
  "PreventSeam is set to true, the s-texture varies from 0->1 and then\n"
  "1->0 (corresponding to angles of 0->180 and 180->360).\n\n"
  "@warning\n"
  "Since the resulting texture s-coordinate will lie between (0,1), and\n"
  "the origin of the texture coordinates is not user-controllable, you\n"
  "may want to use the class vtkTransformTexture to linearly scale and\n"
  "shift the origin of the texture coordinates.\n\n"
  "@sa\n"
  "vtkTextureMapToPlane vtkTextureMapToSphere vtkTransformTexture\n"
  "vtkThresholdTextureCoords\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTextureMapToCylinder_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTexture.vtkTextureMapToCylinder", // tp_name
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
  PyvtkTextureMapToCylinder_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTextureMapToCylinder_StaticNew()
{
  return vtkTextureMapToCylinder::New();
}

PyObject *PyvtkTextureMapToCylinder_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTextureMapToCylinder_Type, PyvtkTextureMapToCylinder_Methods,
    "vtkTextureMapToCylinder",
 &PyvtkTextureMapToCylinder_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTextureMapToCylinder(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTextureMapToCylinder_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTextureMapToCylinder", o) != 0)
  {
    Py_DECREF(o);
  }

}

