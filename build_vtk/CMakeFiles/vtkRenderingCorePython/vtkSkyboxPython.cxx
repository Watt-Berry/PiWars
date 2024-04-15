// python wrapper for vtkSkybox
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSkybox.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSkybox(PyObject *dict); }
extern "C" { PyObject *PyvtkSkybox_ClassNew(); }

#ifndef DECLARED_PyvtkActor_ClassNew
extern "C" { PyObject *PyvtkActor_ClassNew(); }
#define DECLARED_PyvtkActor_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSkybox_Projection_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkSkybox.Projection", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkSkybox_Projection_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSkybox_Projection_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSkybox_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSkybox::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSkybox::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSkybox *tempr = vtkSkybox::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSkybox *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSkybox::NewInstance());

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
PyvtkSkybox_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSkybox::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSkybox::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkSkybox::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkSkybox_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

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
      op->vtkSkybox::GetBounds(temp0);
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
PyvtkSkybox_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSkybox_GetBounds_s1(self, args);
    case 1:
      return PyvtkSkybox_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkSkybox_GetProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProjection() :
      op->vtkSkybox::GetProjection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetProjection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProjection(temp0);
    }
    else
    {
      op->vtkSkybox::SetProjection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetProjectionToCube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionToCube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionToCube();
    }
    else
    {
      op->vtkSkybox::SetProjectionToCube();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetProjectionToSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionToSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionToSphere();
    }
    else
    {
      op->vtkSkybox::SetProjectionToSphere();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetProjectionToStereoSphere(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionToStereoSphere");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionToStereoSphere();
    }
    else
    {
      op->vtkSkybox::SetProjectionToStereoSphere();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetProjectionToFloor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProjectionToFloor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetProjectionToFloor();
    }
    else
    {
      op->vtkSkybox::SetProjectionToFloor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetFloorPlane_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloorPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetFloorPlane(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSkybox::SetFloorPlane(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSkybox_SetFloorPlane_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloorPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  const size_t size0 = 4;
  float temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFloorPlane(temp0);
    }
    else
    {
      op->vtkSkybox::SetFloorPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSkybox_SetFloorPlane(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSkybox_SetFloorPlane_s1(self, args);
    case 1:
      return PyvtkSkybox_SetFloorPlane_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFloorPlane");
  return nullptr;
}


static PyObject *
PyvtkSkybox_GetFloorPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloorPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetFloorPlane() :
      op->vtkSkybox::GetFloorPlane());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetFloorRight_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloorRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  float temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetFloorRight(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSkybox::SetFloorRight(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSkybox_SetFloorRight_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFloorRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  const size_t size0 = 3;
  float temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetFloorRight(temp0);
    }
    else
    {
      op->vtkSkybox::SetFloorRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSkybox_SetFloorRight(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSkybox_SetFloorRight_s1(self, args);
    case 1:
      return PyvtkSkybox_SetFloorRight_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFloorRight");
  return nullptr;
}


static PyObject *
PyvtkSkybox_GetFloorRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFloorRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float *tempr = (ap.IsBound() ?
      op->GetFloorRight() :
      op->vtkSkybox::GetFloorRight());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_GetGammaCorrect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGammaCorrect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGammaCorrect() :
      op->vtkSkybox::GetGammaCorrect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_SetGammaCorrect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGammaCorrect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGammaCorrect(temp0);
    }
    else
    {
      op->vtkSkybox::SetGammaCorrect(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_GammaCorrectOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GammaCorrectOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GammaCorrectOn();
    }
    else
    {
      op->vtkSkybox::GammaCorrectOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSkybox_GammaCorrectOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GammaCorrectOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSkybox *op = static_cast<vtkSkybox *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GammaCorrectOff();
    }
    else
    {
      op->vtkSkybox::GammaCorrectOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSkybox_Methods[] = {
  {"IsTypeOf", PyvtkSkybox_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSkybox_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSkybox_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSkybox\nC++: static vtkSkybox *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSkybox_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSkybox\nC++: vtkSkybox *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSkybox_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSkybox_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetBounds", PyvtkSkybox_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nGet the bounds for this Prop as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\nin world coordinates. NULL means that the bounds are not defined.\n"},
  {"GetProjection", PyvtkSkybox_GetProjection, METH_VARARGS,
   "GetProjection(self) -> int\nC++: virtual int GetProjection()\n\n"},
  {"SetProjection", PyvtkSkybox_SetProjection, METH_VARARGS,
   "SetProjection(self, _arg:int) -> None\nC++: virtual void SetProjection(int _arg)\n\n"},
  {"SetProjectionToCube", PyvtkSkybox_SetProjectionToCube, METH_VARARGS,
   "SetProjectionToCube(self) -> None\nC++: void SetProjectionToCube()\n\n"},
  {"SetProjectionToSphere", PyvtkSkybox_SetProjectionToSphere, METH_VARARGS,
   "SetProjectionToSphere(self) -> None\nC++: void SetProjectionToSphere()\n\n"},
  {"SetProjectionToStereoSphere", PyvtkSkybox_SetProjectionToStereoSphere, METH_VARARGS,
   "SetProjectionToStereoSphere(self) -> None\nC++: void SetProjectionToStereoSphere()\n\n"},
  {"SetProjectionToFloor", PyvtkSkybox_SetProjectionToFloor, METH_VARARGS,
   "SetProjectionToFloor(self) -> None\nC++: void SetProjectionToFloor()\n\n"},
  {"SetFloorPlane", PyvtkSkybox_SetFloorPlane, METH_VARARGS,
   "SetFloorPlane(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetFloorPlane(float _arg1, float _arg2,\n    float _arg3, float _arg4)\nSetFloorPlane(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetFloorPlane(const float _arg[4])\n\nSet/Get the plane equation for the floor.\n"},
  {"GetFloorPlane", PyvtkSkybox_GetFloorPlane, METH_VARARGS,
   "GetFloorPlane(self) -> (float, float, float, float)\nC++: virtual float *GetFloorPlane()\n\n"},
  {"SetFloorRight", PyvtkSkybox_SetFloorRight, METH_VARARGS,
   "SetFloorRight(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetFloorRight(float _arg1, float _arg2,\n    float _arg3)\nSetFloorRight(self, _arg:(float, float, float)) -> None\nC++: virtual void SetFloorRight(const float _arg[3])\n\n"},
  {"GetFloorRight", PyvtkSkybox_GetFloorRight, METH_VARARGS,
   "GetFloorRight(self) -> (float, float, float)\nC++: virtual float *GetFloorRight()\n\n"},
  {"GetGammaCorrect", PyvtkSkybox_GetGammaCorrect, METH_VARARGS,
   "GetGammaCorrect(self) -> bool\nC++: virtual bool GetGammaCorrect()\n\nDefine if the colors should be gamma corrected. This is generally\nrequired if the input texture is in linear color space. Default\nis off.\n"},
  {"SetGammaCorrect", PyvtkSkybox_SetGammaCorrect, METH_VARARGS,
   "SetGammaCorrect(self, _arg:bool) -> None\nC++: virtual void SetGammaCorrect(bool _arg)\n\n"},
  {"GammaCorrectOn", PyvtkSkybox_GammaCorrectOn, METH_VARARGS,
   "GammaCorrectOn(self) -> None\nC++: virtual void GammaCorrectOn()\n\n"},
  {"GammaCorrectOff", PyvtkSkybox_GammaCorrectOff, METH_VARARGS,
   "GammaCorrectOff(self) -> None\nC++: virtual void GammaCorrectOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSkybox_Doc =
  "vtkSkybox - Renders a skybox environment\n\n"
  "Superclass: vtkActor\n\n"
  "You must provide a texture cube map using the SetTexture method.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSkybox_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkSkybox", // tp_name
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
  PyvtkSkybox_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSkybox_StaticNew()
{
  return vtkSkybox::New();
}

PyObject *PyvtkSkybox_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSkybox_Type, PyvtkSkybox_Methods,
    "vtkSkybox",
 &PyvtkSkybox_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkActor_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSkybox_Projection_Type);
  PyVTKEnum_Add(&PyvtkSkybox_Projection_Type, "vtkSkybox.Projection");

  o = (PyObject *)&PyvtkSkybox_Projection_Type;
  if (PyDict_SetItemString(d, "Projection", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "Cube", vtkSkybox::Cube },
        { "Sphere", vtkSkybox::Sphere },
        { "Floor", vtkSkybox::Floor },
        { "StereoSphere", vtkSkybox::StereoSphere },
      };

    o = PyvtkSkybox_Projection_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSkybox(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSkybox_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSkybox", o) != 0)
  {
    Py_DECREF(o);
  }

}

