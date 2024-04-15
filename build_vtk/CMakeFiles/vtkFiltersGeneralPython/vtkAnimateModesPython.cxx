// python wrapper for vtkAnimateModes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAnimateModes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAnimateModes(PyObject *dict); }
extern "C" { PyObject *PyvtkAnimateModes_ClassNew(); }


static PyObject *
PyvtkAnimateModes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAnimateModes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAnimateModes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAnimateModes *tempr = vtkAnimateModes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnimateModes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAnimateModes::NewInstance());

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
PyvtkAnimateModes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAnimateModes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAnimateModes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_SetAnimateVibrations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnimateVibrations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAnimateVibrations(temp0);
    }
    else
    {
      op->vtkAnimateModes::SetAnimateVibrations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetAnimateVibrations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnimateVibrations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAnimateVibrations() :
      op->vtkAnimateModes::GetAnimateVibrations());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_AnimateVibrationsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateVibrationsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateVibrationsOn();
    }
    else
    {
      op->vtkAnimateModes::AnimateVibrationsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_AnimateVibrationsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AnimateVibrationsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AnimateVibrationsOff();
    }
    else
    {
      op->vtkAnimateModes::AnimateVibrationsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetModeShapesRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapesRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetModeShapesRange() :
      op->vtkAnimateModes::GetModeShapesRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_SetModeShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModeShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetModeShape(temp0);
    }
    else
    {
      op->vtkAnimateModes::SetModeShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetModeShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeShapeMinValue() :
      op->vtkAnimateModes::GetModeShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetModeShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeShapeMaxValue() :
      op->vtkAnimateModes::GetModeShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetModeShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModeShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetModeShape() :
      op->vtkAnimateModes::GetModeShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_SetDisplacementPreapplied(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementPreapplied");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementPreapplied(temp0);
    }
    else
    {
      op->vtkAnimateModes::SetDisplacementPreapplied(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetDisplacementPreapplied(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementPreapplied");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDisplacementPreapplied() :
      op->vtkAnimateModes::GetDisplacementPreapplied());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_DisplacementPreappliedOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplacementPreappliedOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplacementPreappliedOn();
    }
    else
    {
      op->vtkAnimateModes::DisplacementPreappliedOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_DisplacementPreappliedOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisplacementPreappliedOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisplacementPreappliedOff();
    }
    else
    {
      op->vtkAnimateModes::DisplacementPreappliedOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_SetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDisplacementMagnitude(temp0);
    }
    else
    {
      op->vtkAnimateModes::SetDisplacementMagnitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetDisplacementMagnitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDisplacementMagnitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDisplacementMagnitude() :
      op->vtkAnimateModes::GetDisplacementMagnitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAnimateModes_GetTimeRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTimeRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAnimateModes *op = static_cast<vtkAnimateModes *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTimeRange() :
      op->vtkAnimateModes::GetTimeRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkAnimateModes_Methods[] = {
  {"IsTypeOf", PyvtkAnimateModes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAnimateModes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAnimateModes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAnimateModes\nC++: static vtkAnimateModes *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAnimateModes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAnimateModes\nC++: vtkAnimateModes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAnimateModes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAnimateModes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAnimateVibrations", PyvtkAnimateModes_SetAnimateVibrations, METH_VARARGS,
   "SetAnimateVibrations(self, _arg:bool) -> None\nC++: virtual void SetAnimateVibrations(bool _arg)\n\nSet/Get whether the filter should animate the vibrations.\nDefaults to true. When set, the requested time is used compute\ndisplacements for the chosen mode shape. Defaults to true.\n"},
  {"GetAnimateVibrations", PyvtkAnimateModes_GetAnimateVibrations, METH_VARARGS,
   "GetAnimateVibrations(self) -> bool\nC++: virtual bool GetAnimateVibrations()\n\n"},
  {"AnimateVibrationsOn", PyvtkAnimateModes_AnimateVibrationsOn, METH_VARARGS,
   "AnimateVibrationsOn(self) -> None\nC++: virtual void AnimateVibrationsOn()\n\n"},
  {"AnimateVibrationsOff", PyvtkAnimateModes_AnimateVibrationsOff, METH_VARARGS,
   "AnimateVibrationsOff(self) -> None\nC++: virtual void AnimateVibrationsOff()\n\n"},
  {"GetModeShapesRange", PyvtkAnimateModes_GetModeShapesRange, METH_VARARGS,
   "GetModeShapesRange(self) -> (int, int)\nC++: virtual int *GetModeShapesRange()\n\nGet the range for available mode shapes in the input. One must\ncall `UpdateInformation` before check the range since the range\nis determined based on the number of input timesteps. The range\nis always `[1, <number of timesteps>]`.\n"},
  {"SetModeShape", PyvtkAnimateModes_SetModeShape, METH_VARARGS,
   "SetModeShape(self, _arg:int) -> None\nC++: virtual void SetModeShape(int _arg)\n\nGet/Set the mode shape to animate. Defaults to 1.\n"},
  {"GetModeShapeMinValue", PyvtkAnimateModes_GetModeShapeMinValue, METH_VARARGS,
   "GetModeShapeMinValue(self) -> int\nC++: virtual int GetModeShapeMinValue()\n\n"},
  {"GetModeShapeMaxValue", PyvtkAnimateModes_GetModeShapeMaxValue, METH_VARARGS,
   "GetModeShapeMaxValue(self) -> int\nC++: virtual int GetModeShapeMaxValue()\n\n"},
  {"GetModeShape", PyvtkAnimateModes_GetModeShape, METH_VARARGS,
   "GetModeShape(self) -> int\nC++: virtual int GetModeShape()\n\n"},
  {"SetDisplacementPreapplied", PyvtkAnimateModes_SetDisplacementPreapplied, METH_VARARGS,
   "SetDisplacementPreapplied(self, _arg:bool) -> None\nC++: virtual void SetDisplacementPreapplied(bool _arg)\n\nGet/Set whether displacements are pre-applied. Default is false.\n"},
  {"GetDisplacementPreapplied", PyvtkAnimateModes_GetDisplacementPreapplied, METH_VARARGS,
   "GetDisplacementPreapplied(self) -> bool\nC++: virtual bool GetDisplacementPreapplied()\n\n"},
  {"DisplacementPreappliedOn", PyvtkAnimateModes_DisplacementPreappliedOn, METH_VARARGS,
   "DisplacementPreappliedOn(self) -> None\nC++: virtual void DisplacementPreappliedOn()\n\n"},
  {"DisplacementPreappliedOff", PyvtkAnimateModes_DisplacementPreappliedOff, METH_VARARGS,
   "DisplacementPreappliedOff(self) -> None\nC++: virtual void DisplacementPreappliedOff()\n\n"},
  {"SetDisplacementMagnitude", PyvtkAnimateModes_SetDisplacementMagnitude, METH_VARARGS,
   "SetDisplacementMagnitude(self, _arg:float) -> None\nC++: virtual void SetDisplacementMagnitude(double _arg)\n\nGet/Set a scale factor to apply the displacements. Defaults to 1.\n"},
  {"GetDisplacementMagnitude", PyvtkAnimateModes_GetDisplacementMagnitude, METH_VARARGS,
   "GetDisplacementMagnitude(self) -> float\nC++: virtual double GetDisplacementMagnitude()\n\n"},
  {"GetTimeRange", PyvtkAnimateModes_GetTimeRange, METH_VARARGS,
   "GetTimeRange(self) -> (float, float)\nC++: virtual double *GetTimeRange()\n\nThis returns (0, 1.0) as the range that can be used when\nanimating a mode shape.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAnimateModes_Doc =
  "vtkAnimateModes - animate mode shapes\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "For certain file formats, like Exodus, simulation codes may use the\n"
  "timesteps and time values to represent quantities other than time.\n"
  "For example, for modal analysis, the natural frequency for each mode\n"
  "may be used as the time value. vtkAnimateModes can be used to\n"
  "reinterpret time as mode shapes. The filter can also animate\n"
  "vibrations for each mode shape (when AnimateVibrations is set to\n"
  "true). In that case, the time requested by the downstream pipeline is\n"
  "used to scale the displacement magnitude for a mode shape in a\n"
  "sinusoidal pattern, `cos(2*pi * requested-time)`.\n\n"
  "Historically, the VTK's Exodus reader (`vtkExodusIIReader`) had\n"
  "support for this internally. However, when implementation the\n"
  "IOSS-based reader for Exodus files (`vtkIossReader`), it was decided\n"
  "that it's cleaner to leave the mode shape and vibration animation\n"
  "logic independent of the reader and thus make it usable with other\n"
  "file formats too. Hence this filter was created.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAnimateModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkAnimateModes", // tp_name
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
  PyvtkAnimateModes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAnimateModes_StaticNew()
{
  return vtkAnimateModes::New();
}

PyObject *PyvtkAnimateModes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAnimateModes_Type, PyvtkAnimateModes_Methods,
    "vtkAnimateModes",
 &PyvtkAnimateModes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAnimateModes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAnimateModes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAnimateModes", o) != 0)
  {
    Py_DECREF(o);
  }

}

