// python wrapper for vtkHandleSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkHandleSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHandleSource(PyObject *dict); }
extern "C" { PyObject *PyvtkHandleSource_ClassNew(); }


static PyObject *
PyvtkHandleSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHandleSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHandleSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHandleSource *tempr = vtkHandleSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHandleSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHandleSource::NewInstance());

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
PyvtkHandleSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHandleSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHandleSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_SetDirectional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirectional(temp0);
    }
    else
    {
      op->vtkHandleSource::SetDirectional(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_GetDirectional(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirectional");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDirectional() :
      op->vtkHandleSource::GetDirectional());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_DirectionalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectionalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectionalOn();
    }
    else
    {
      op->vtkHandleSource::DirectionalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_DirectionalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DirectionalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DirectionalOff();
    }
    else
    {
      op->vtkHandleSource::DirectionalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPosition(temp0);
    }
    else
    {
      op->vtkHandleSource::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetPosition(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleSource_SetPosition_s1(self, args);
    case 3:
      return PyvtkHandleSource_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkHandleSource_GetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

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
      op->GetPosition(temp0);
    }
    else
    {
      op->vtkHandleSource::GetPosition(temp0);
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
PyvtkHandleSource_GetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetPosition();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_GetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleSource_GetPosition_s1(self, args);
    case 0:
      return PyvtkHandleSource_GetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPosition");
  return nullptr;
}


static PyObject *
PyvtkHandleSource_SetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkHandleSource::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_SetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    op->SetDirection(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_SetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleSource_SetDirection_s1(self, args);
    case 3:
      return PyvtkHandleSource_SetDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDirection");
  return nullptr;
}


static PyObject *
PyvtkHandleSource_GetDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

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
      op->GetDirection(temp0);
    }
    else
    {
      op->vtkHandleSource::GetDirection(temp0);
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
PyvtkHandleSource_GetDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    double *tempr = op->GetDirection();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkHandleSource_GetDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkHandleSource_GetDirection_s1(self, args);
    case 0:
      return PyvtkHandleSource_GetDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDirection");
  return nullptr;
}


static PyObject *
PyvtkHandleSource_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkHandleSource::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHandleSource_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHandleSource *op = static_cast<vtkHandleSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkHandleSource::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkHandleSource_Methods[] = {
  {"IsTypeOf", PyvtkHandleSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHandleSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHandleSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHandleSource\nC++: static vtkHandleSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHandleSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHandleSource\nC++: vtkHandleSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHandleSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHandleSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDirectional", PyvtkHandleSource_SetDirectional, METH_VARARGS,
   "SetDirectional(self, _arg:bool) -> None\nC++: virtual void SetDirectional(bool _arg)\n\nSet/Get if the handle should take account on this->Direction. The\nmeaning of this direction varies on the subclasses\nimplementation. The default value is false.\n"},
  {"GetDirectional", PyvtkHandleSource_GetDirectional, METH_VARARGS,
   "GetDirectional(self) -> bool\nC++: virtual bool GetDirectional()\n\n"},
  {"DirectionalOn", PyvtkHandleSource_DirectionalOn, METH_VARARGS,
   "DirectionalOn(self) -> None\nC++: virtual void DirectionalOn()\n\n"},
  {"DirectionalOff", PyvtkHandleSource_DirectionalOff, METH_VARARGS,
   "DirectionalOff(self) -> None\nC++: virtual void DirectionalOff()\n\n"},
  {"SetPosition", PyvtkHandleSource_SetPosition, METH_VARARGS,
   "SetPosition(self, pos:(float, float, float)) -> None\nC++: void SetPosition(const double pos[3])\nSetPosition(self, xPos:float, yPos:float, zPos:float) -> None\nC++: virtual void SetPosition(double xPos, double yPos,\n    double zPos)\n\nSet the position of the handle.\n"},
  {"GetPosition", PyvtkHandleSource_GetPosition, METH_VARARGS,
   "GetPosition(self, pos:[float, float, float]) -> None\nC++: void GetPosition(double pos[3])\nGetPosition(self) -> Pointer\nC++: virtual double *GetPosition()\n\nGet the position of the handle.\n"},
  {"SetDirection", PyvtkHandleSource_SetDirection, METH_VARARGS,
   "SetDirection(self, dir:(float, float, float)) -> None\nC++: void SetDirection(const double dir[3])\nSetDirection(self, xDir:float, yDir:float, zDir:float) -> None\nC++: virtual void SetDirection(double xDir, double yDir,\n    double zDir)\n\nSet the direction of the handle. The direction meaning depends on\nsubclasses implementations.\n"},
  {"GetDirection", PyvtkHandleSource_GetDirection, METH_VARARGS,
   "GetDirection(self, dir:[float, float, float]) -> None\nC++: void GetDirection(double dir[3])\nGetDirection(self) -> Pointer\nC++: virtual double *GetDirection()\n\nGet the direction of the handle. The direction meaning depends on\nsubclasses implementations.\n"},
  {"SetSize", PyvtkHandleSource_SetSize, METH_VARARGS,
   "SetSize(self, _arg:float) -> None\nC++: virtual void SetSize(double _arg)\n\nSet/Get the size of the handle. The size use depends on\nsubclasses implementations. The default value is 0.5.\n"},
  {"GetSize", PyvtkHandleSource_GetSize, METH_VARARGS,
   "GetSize(self) -> float\nC++: virtual double GetSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHandleSource_Doc =
  "vtkHandleSource - interface that can be inherited to define handler\nsources for any kind of interaction.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkHandleSource is a pure abstract class defining an interface for\n"
  "handler sources. Any child of this class is supposed to define an\n"
  "access to its position, size and direction, if any. On this purpose,\n"
  "the internal getters/setters are left to be redefined by the\n"
  "subclasses. It is derived by vtkPointHandleSource for example.\n"
  "@sa\n"
  "vtkPointHandleSource, vtkCameraHandleSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHandleSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkHandleSource", // tp_name
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
  PyvtkHandleSource_Doc, // tp_doc
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

PyObject *PyvtkHandleSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHandleSource_Type, PyvtkHandleSource_Methods,
    "vtkHandleSource",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHandleSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHandleSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHandleSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

