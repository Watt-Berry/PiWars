// python wrapper for vtkImageSinusoidSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageSinusoidSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageSinusoidSource(PyObject *dict); }
extern "C" { PyObject *PyvtkImageSinusoidSource_ClassNew(); }


static PyObject *
PyvtkImageSinusoidSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageSinusoidSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageSinusoidSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageSinusoidSource *tempr = vtkImageSinusoidSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageSinusoidSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageSinusoidSource::NewInstance());

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
PyvtkImageSinusoidSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageSinusoidSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageSinusoidSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

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
      op->vtkImageSinusoidSource::SetWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

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
      op->SetDirection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageSinusoidSource::SetDirection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageSinusoidSource_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkImageSinusoidSource::SetDirection(temp0);
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
PyvtkImageSinusoidSource_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageSinusoidSource_SetDirection_s1(self, args);
    case 1:
      return PyvtkImageSinusoidSource_SetDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return nullptr;
}


static PyObject *
PyvtkImageSinusoidSource_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkImageSinusoidSource::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetPeriod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPeriod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPeriod(temp0);
    }
    else
    {
      op->vtkImageSinusoidSource::SetPeriod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetPeriod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPeriod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPeriod() :
      op->vtkImageSinusoidSource::GetPeriod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPhase(temp0);
    }
    else
    {
      op->vtkImageSinusoidSource::SetPhase(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetPhase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPhase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetPhase() :
      op->vtkImageSinusoidSource::GetPhase());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_SetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAmplitude(temp0);
    }
    else
    {
      op->vtkImageSinusoidSource::SetAmplitude(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageSinusoidSource_GetAmplitude(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAmplitude");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageSinusoidSource *op = static_cast<vtkImageSinusoidSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAmplitude() :
      op->vtkImageSinusoidSource::GetAmplitude());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageSinusoidSource_Methods[] = {
  {"IsTypeOf", PyvtkImageSinusoidSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageSinusoidSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageSinusoidSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageSinusoidSource\nC++: static vtkImageSinusoidSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageSinusoidSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageSinusoidSource\nC++: vtkImageSinusoidSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageSinusoidSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageSinusoidSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWholeExtent", PyvtkImageSinusoidSource_SetWholeExtent, METH_VARARGS,
   "SetWholeExtent(self, xMinx:int, xMax:int, yMin:int, yMax:int,\n    zMin:int, zMax:int) -> None\nC++: void SetWholeExtent(int xMinx, int xMax, int yMin, int yMax,\n    int zMin, int zMax)\n\nSet/Get the extent of the whole output image.\n"},
  {"SetDirection", PyvtkImageSinusoidSource_SetDirection, METH_VARARGS,
   "SetDirection(self, __a:float, __b:float, __c:float) -> None\nC++: void SetDirection(double, double, double)\nSetDirection(self, dir:[float, float, float]) -> None\nC++: void SetDirection(double dir[3])\n\nSet/Get the direction vector which determines the sinusoidal\norientation. The magnitude is ignored.\n"},
  {"GetDirection", PyvtkImageSinusoidSource_GetDirection, METH_VARARGS,
   "GetDirection(self) -> (float, float, float)\nC++: virtual double *GetDirection()\n\n"},
  {"SetPeriod", PyvtkImageSinusoidSource_SetPeriod, METH_VARARGS,
   "SetPeriod(self, _arg:float) -> None\nC++: virtual void SetPeriod(double _arg)\n\nSet/Get the period of the sinusoid in pixels.\n"},
  {"GetPeriod", PyvtkImageSinusoidSource_GetPeriod, METH_VARARGS,
   "GetPeriod(self) -> float\nC++: virtual double GetPeriod()\n\n"},
  {"SetPhase", PyvtkImageSinusoidSource_SetPhase, METH_VARARGS,
   "SetPhase(self, _arg:float) -> None\nC++: virtual void SetPhase(double _arg)\n\nSet/Get the phase: 0->2Pi.  0 => Cosine, pi/2 => Sine.\n"},
  {"GetPhase", PyvtkImageSinusoidSource_GetPhase, METH_VARARGS,
   "GetPhase(self) -> float\nC++: virtual double GetPhase()\n\n"},
  {"SetAmplitude", PyvtkImageSinusoidSource_SetAmplitude, METH_VARARGS,
   "SetAmplitude(self, _arg:float) -> None\nC++: virtual void SetAmplitude(double _arg)\n\nSet/Get the magnitude of the sinusoid.\n"},
  {"GetAmplitude", PyvtkImageSinusoidSource_GetAmplitude, METH_VARARGS,
   "GetAmplitude(self) -> float\nC++: virtual double GetAmplitude()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageSinusoidSource_Doc =
  "vtkImageSinusoidSource - Create an image with sinusoidal pixel values.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageSinusoidSource just produces images with pixel values\n"
  "determined by a sinusoid.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageSinusoidSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingSources.vtkImageSinusoidSource", // tp_name
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
  PyvtkImageSinusoidSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageSinusoidSource_StaticNew()
{
  return vtkImageSinusoidSource::New();
}

PyObject *PyvtkImageSinusoidSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageSinusoidSource_Type, PyvtkImageSinusoidSource_Methods,
    "vtkImageSinusoidSource",
 &PyvtkImageSinusoidSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageSinusoidSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageSinusoidSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageSinusoidSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

