// python wrapper for vtkInteractorStyle3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyle3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyle3D(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyle3D_ClassNew(); }

#ifndef DECLARED_PyvtkInteractorStyle_ClassNew
extern "C" { PyObject *PyvtkInteractorStyle_ClassNew(); }
#define DECLARED_PyvtkInteractorStyle_ClassNew
#endif

static PyObject *
PyvtkInteractorStyle3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyle3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyle3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyle3D *tempr = vtkInteractorStyle3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyle3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyle3D::NewInstance());

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
PyvtkInteractorStyle3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyle3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyle3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_PositionProp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PositionProp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkEventData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 3) &&
      ap.GetVTKObject(temp0, "vtkEventData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp1, size1)) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->PositionProp(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyle3D::PositionProp(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_Dolly3D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Dolly3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    if (ap.IsBound())
    {
      op->Dolly3D(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::Dolly3D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SetDollyPhysicalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDollyPhysicalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDollyPhysicalSpeed(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::SetDollyPhysicalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_GetDollyPhysicalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDollyPhysicalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDollyPhysicalSpeed() :
      op->vtkInteractorStyle3D::GetDollyPhysicalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkCamera *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCamera") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0, temp1);
    }
    else
    {
      op->vtkInteractorStyle3D::SetScale(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_GetInteractionPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInteractionPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractPropPicker *tempr = (ap.IsBound() ?
      op->GetInteractionPicker() :
      op->vtkInteractorStyle3D::GetInteractionPicker());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyle3D_SetInteractionPicker(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractionPicker");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyle3D *op = static_cast<vtkInteractorStyle3D *>(vp);

  vtkAbstractPropPicker *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractPropPicker"))
  {
    if (ap.IsBound())
    {
      op->SetInteractionPicker(temp0);
    }
    else
    {
      op->vtkInteractorStyle3D::SetInteractionPicker(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyle3D_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyle3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyle3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyle3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyle3D\nC++: static vtkInteractorStyle3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyle3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyle3D\nC++: vtkInteractorStyle3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyle3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyle3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"PositionProp", PyvtkInteractorStyle3D_PositionProp, METH_VARARGS,
   "PositionProp(self, __a:vtkEventData, lwpos:[float, ...]=...,\n    lwori:[float, ...]=...) -> None\nC++: virtual void PositionProp(vtkEventData *,\n    double *lwpos=nullptr, double *lwori=nullptr)\n\n"},
  {"Dolly3D", PyvtkInteractorStyle3D_Dolly3D, METH_VARARGS,
   "Dolly3D(self, __a:vtkEventData) -> None\nC++: virtual void Dolly3D(vtkEventData *)\n\n"},
  {"SetDollyPhysicalSpeed", PyvtkInteractorStyle3D_SetDollyPhysicalSpeed, METH_VARARGS,
   "SetDollyPhysicalSpeed(self, _arg:float) -> None\nC++: virtual void SetDollyPhysicalSpeed(double _arg)\n\nSet/Get the maximum dolly speed used when flying in 3D, in meters\nper second. Default is 1.6666, corresponding to walking speed (=\n6 km/h). This speed is scaled by the touchpad position as well.\n"},
  {"GetDollyPhysicalSpeed", PyvtkInteractorStyle3D_GetDollyPhysicalSpeed, METH_VARARGS,
   "GetDollyPhysicalSpeed(self) -> float\nC++: virtual double GetDollyPhysicalSpeed()\n\n"},
  {"SetScale", PyvtkInteractorStyle3D_SetScale, METH_VARARGS,
   "SetScale(self, cam:vtkCamera, newScale:float) -> None\nC++: virtual void SetScale(vtkCamera *cam, double newScale)\n\nSet the scaling factor from world to physical space. In VR when\nwe set it to a new value we also adjust the HMD position to\nmaintain the same relative position.\n"},
  {"GetInteractionPicker", PyvtkInteractorStyle3D_GetInteractionPicker, METH_VARARGS,
   "GetInteractionPicker(self) -> vtkAbstractPropPicker\nC++: virtual vtkAbstractPropPicker *GetInteractionPicker()\n\nGet/Set the interaction picker. By default, a vtkPropPicker is\ninstancied.\n"},
  {"SetInteractionPicker", PyvtkInteractorStyle3D_SetInteractionPicker, METH_VARARGS,
   "SetInteractionPicker(self, prop:vtkAbstractPropPicker) -> None\nC++: void SetInteractionPicker(vtkAbstractPropPicker *prop)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyle3D_Doc =
  "vtkInteractorStyle3D - extends interaction to support 3D input\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "vtkInteractorStyle3D allows the user to interact with (rotate, pan,\n"
  "etc.) objects in the scene independent of each other. It is designed\n"
  "to use 3d positions and orientations instead of 2D.\n\n"
  "The following interactions are specified by default.\n\n"
  "A click and hold in 3D within the bounding box of a prop will pick up\n"
  "that prop allowing you to translate and orient that prop as desired\n"
  "with the 3D controller.\n\n"
  "Click/dragging two controllers and pulling them apart or pushing them\n"
  "together will initial a scale gesture that will scale the world\n"
  "larger or smaller.\n\n"
  "Click/dragging two controllers and translating them in the same\n"
  "direction will translate the camera/world pushing them together will\n"
  "initial a scale gesture that will scale the world larger or smaller.\n\n"
  "If a controller is right clicked (push touchpad on Vive) then it\n"
  "starts a fly motion where the camer moves in the direction the\n"
  "controller is pointing. It moves at a speed scaled by the position of\n"
  "your thumb on the trackpad. Higher moves faster forward. Lower moves\n"
  "faster backwards.\n\n"
  "For the Vive left click is mapped to the trigger and right click is\n"
  "mapped to pushing the trackpad down.\n\n"
  "@sa\n"
  "vtkRenderWindowInteractor3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyle3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkInteractorStyle3D", // tp_name
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
  PyvtkInteractorStyle3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyle3D_StaticNew()
{
  return vtkInteractorStyle3D::New();
}

PyObject *PyvtkInteractorStyle3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyle3D_Type, PyvtkInteractorStyle3D_Methods,
    "vtkInteractorStyle3D",
 &PyvtkInteractorStyle3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkInteractorStyle_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyle3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyle3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyle3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

