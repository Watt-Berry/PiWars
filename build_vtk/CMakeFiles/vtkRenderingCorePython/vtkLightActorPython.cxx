// python wrapper for vtkLightActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLightActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLightActor(PyObject *dict); }
extern "C" { PyObject *PyvtkLightActor_ClassNew(); }

#ifndef DECLARED_PyvtkProp3D_ClassNew
extern "C" { PyObject *PyvtkProp3D_ClassNew(); }
#define DECLARED_PyvtkProp3D_ClassNew
#endif

static PyObject *
PyvtkLightActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLightActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLightActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLightActor *tempr = vtkLightActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLightActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLightActor::NewInstance());

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
PyvtkLightActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLightActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLightActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_SetLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkLight *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkLight"))
  {
    if (ap.IsBound())
    {
      op->SetLight(temp0);
    }
    else
    {
      op->vtkLightActor::SetLight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetLight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLight *tempr = (ap.IsBound() ?
      op->GetLight() :
      op->vtkLightActor::GetLight());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_SetClippingRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetClippingRange(temp0, temp1);
    }
    else
    {
      op->vtkLightActor::SetClippingRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLightActor_SetClippingRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetClippingRange(temp0);
    }
    else
    {
      op->vtkLightActor::SetClippingRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkLightActor_SetClippingRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkLightActor_SetClippingRange_s1(self, args);
    case 1:
      return PyvtkLightActor_SetClippingRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetClippingRange");
  return nullptr;
}


static PyObject *
PyvtkLightActor_GetClippingRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClippingRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetClippingRange() :
      op->vtkLightActor::GetClippingRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetConeProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConeProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetConeProperty() :
      op->vtkLightActor::GetConeProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetFrustumProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFrustumProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty *tempr = (ap.IsBound() ?
      op->GetFrustumProperty() :
      op->vtkLightActor::GetFrustumProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkLightActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkLightActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkLightActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkLightActor::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkLightActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLightActor *op = static_cast<vtkLightActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLightActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLightActor_Methods[] = {
  {"IsTypeOf", PyvtkLightActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLightActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLightActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLightActor\nC++: static vtkLightActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLightActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLightActor\nC++: vtkLightActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLightActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLightActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLight", PyvtkLightActor_SetLight, METH_VARARGS,
   "SetLight(self, light:vtkLight) -> None\nC++: void SetLight(vtkLight *light)\n\nThe spotlight to represent. Initial value is NULL.\n"},
  {"GetLight", PyvtkLightActor_GetLight, METH_VARARGS,
   "GetLight(self) -> vtkLight\nC++: virtual vtkLight *GetLight()\n\n"},
  {"SetClippingRange", PyvtkLightActor_SetClippingRange, METH_VARARGS,
   "SetClippingRange(self, dNear:float, dFar:float) -> None\nC++: void SetClippingRange(double dNear, double dFar)\nSetClippingRange(self, a:(float, float)) -> None\nC++: void SetClippingRange(const double a[2])\n\nSet/Get the location of the near and far clipping planes along\nthe direction of projection.  Both of these values must be\npositive. Initial values are  (0.5,11.0)\n"},
  {"GetClippingRange", PyvtkLightActor_GetClippingRange, METH_VARARGS,
   "GetClippingRange(self) -> (float, float)\nC++: virtual double *GetClippingRange()\n\n"},
  {"GetConeProperty", PyvtkLightActor_GetConeProperty, METH_VARARGS,
   "GetConeProperty(self) -> vtkProperty\nC++: vtkProperty *GetConeProperty()\n\nSet/Get properties of the different actors used to represent the\ncamera\n"},
  {"GetFrustumProperty", PyvtkLightActor_GetFrustumProperty, METH_VARARGS,
   "GetFrustumProperty(self) -> vtkProperty\nC++: vtkProperty *GetFrustumProperty()\n\n"},
  {"RenderOpaqueGeometry", PyvtkLightActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, viewport:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *viewport) override;\n\nSupport the standard render methods.\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkLightActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry? No.\n"},
  {"ReleaseGraphicsResources", PyvtkLightActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetBounds", PyvtkLightActor_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds() override;\n\nGet the bounds for this Actor as (Xmin,Xmax,Ymin,Ymax,Zmin,Zmax).\n"},
  {"GetMTime", PyvtkLightActor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nGet the actors mtime plus consider its properties and texture if\nset.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLightActor_Doc =
  "vtkLightActor - a cone and a frustum to represent a spotlight.\n\n"
  "Superclass: vtkProp3D\n\n"
  "vtkLightActor is a composite actor used to represent a spotlight. The\n"
  "cone angle is equal to the spotlight angle, the cone apex is at the\n"
  "position of the light, the direction of the light goes from the cone\n"
  "apex to the center of the base of the cone. The square frustum\n"
  "position is the light position, the frustum focal point is in the\n"
  "direction of the light direction. The frustum vertical view angle\n"
  "(aperture) (this is also the horizontal view angle as the frustum is\n"
  "square) is equal to twice the cone angle. The clipping range of the\n"
  "frustum is arbitrary set by the user (initially at 0.5,11.0).\n\n"
  "@warning\n"
  "Right now only spotlight are supported but directional light might be\n"
  "supported in the future.\n\n"
  "@sa\n"
  "vtkLight vtkConeSource vtkFrustumSource vtkCameraActor\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLightActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkLightActor", // tp_name
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
  PyvtkLightActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLightActor_StaticNew()
{
  return vtkLightActor::New();
}

PyObject *PyvtkLightActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLightActor_Type, PyvtkLightActor_Methods,
    "vtkLightActor",
 &PyvtkLightActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkProp3D_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLightActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLightActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLightActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

