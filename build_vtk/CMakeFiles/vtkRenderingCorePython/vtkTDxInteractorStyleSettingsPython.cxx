// python wrapper for vtkTDxInteractorStyleSettings
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTDxInteractorStyleSettings.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTDxInteractorStyleSettings(PyObject *dict); }
extern "C" { PyObject *PyvtkTDxInteractorStyleSettings_ClassNew(); }


static PyObject *
PyvtkTDxInteractorStyleSettings_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTDxInteractorStyleSettings::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTDxInteractorStyleSettings::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTDxInteractorStyleSettings *tempr = vtkTDxInteractorStyleSettings::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTDxInteractorStyleSettings *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTDxInteractorStyleSettings::NewInstance());

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
PyvtkTDxInteractorStyleSettings_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTDxInteractorStyleSettings::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTDxInteractorStyleSettings::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetAngleSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetAngleSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetAngleSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationX(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationX() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationX());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationY(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationY() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationY());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRotationZ(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetUseRotationZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetUseRotationZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRotationZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRotationZ() :
      op->vtkTDxInteractorStyleSettings::GetUseRotationZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationXSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationXSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationXSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationXSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationXSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationYSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationYSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationYSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationYSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationYSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationZSensitivity(temp0);
    }
    else
    {
      op->vtkTDxInteractorStyleSettings::SetTranslationZSensitivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationZSensitivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTDxInteractorStyleSettings *op = static_cast<vtkTDxInteractorStyleSettings *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTranslationZSensitivity() :
      op->vtkTDxInteractorStyleSettings::GetTranslationZSensitivity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkTDxInteractorStyleSettings_Methods[] = {
  {"IsTypeOf", PyvtkTDxInteractorStyleSettings_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTDxInteractorStyleSettings_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTDxInteractorStyleSettings_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTDxInteractorStyleSettings\nC++: static vtkTDxInteractorStyleSettings *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTDxInteractorStyleSettings_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTDxInteractorStyleSettings\nC++: vtkTDxInteractorStyleSettings *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTDxInteractorStyleSettings_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTDxInteractorStyleSettings_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAngleSensitivity", PyvtkTDxInteractorStyleSettings_SetAngleSensitivity, METH_VARARGS,
   "SetAngleSensitivity(self, _arg:float) -> None\nC++: virtual void SetAngleSensitivity(double _arg)\n\nSensitivity of the rotation angle. This can be any value:\npositive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no rotation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster\n"},
  {"GetAngleSensitivity", PyvtkTDxInteractorStyleSettings_GetAngleSensitivity, METH_VARARGS,
   "GetAngleSensitivity(self) -> float\nC++: virtual double GetAngleSensitivity()\n\n"},
  {"SetUseRotationX", PyvtkTDxInteractorStyleSettings_SetUseRotationX, METH_VARARGS,
   "SetUseRotationX(self, _arg:bool) -> None\nC++: virtual void SetUseRotationX(bool _arg)\n\nUse or mask the rotation component around the X-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationX", PyvtkTDxInteractorStyleSettings_GetUseRotationX, METH_VARARGS,
   "GetUseRotationX(self) -> bool\nC++: virtual bool GetUseRotationX()\n\n"},
  {"SetUseRotationY", PyvtkTDxInteractorStyleSettings_SetUseRotationY, METH_VARARGS,
   "SetUseRotationY(self, _arg:bool) -> None\nC++: virtual void SetUseRotationY(bool _arg)\n\nUse or mask the rotation component around the Y-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationY", PyvtkTDxInteractorStyleSettings_GetUseRotationY, METH_VARARGS,
   "GetUseRotationY(self) -> bool\nC++: virtual bool GetUseRotationY()\n\n"},
  {"SetUseRotationZ", PyvtkTDxInteractorStyleSettings_SetUseRotationZ, METH_VARARGS,
   "SetUseRotationZ(self, _arg:bool) -> None\nC++: virtual void SetUseRotationZ(bool _arg)\n\nUse or mask the rotation component around the Z-axis. Initial\nvalue is true.\n"},
  {"GetUseRotationZ", PyvtkTDxInteractorStyleSettings_GetUseRotationZ, METH_VARARGS,
   "GetUseRotationZ(self) -> bool\nC++: virtual bool GetUseRotationZ()\n\n"},
  {"SetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationXSensitivity, METH_VARARGS,
   "SetTranslationXSensitivity(self, _arg:float) -> None\nC++: virtual void SetTranslationXSensitivity(double _arg)\n\nSensitivity of the translation along the X-axis. This can be any\nvalue: positive, negative, null.\n- x<-1.0: faster reversed\n- x=-1.0: reversed neutral\n- -1.0<x<0.0:  reversed slower\n- x=0.0: no translation\n- 0.0<x<1.0: slower\n- x=1.0: neutral\n- x>1.0: faster Initial value is 1.0\n"},
  {"GetTranslationXSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationXSensitivity, METH_VARARGS,
   "GetTranslationXSensitivity(self) -> float\nC++: virtual double GetTranslationXSensitivity()\n\n"},
  {"SetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationYSensitivity, METH_VARARGS,
   "SetTranslationYSensitivity(self, _arg:float) -> None\nC++: virtual void SetTranslationYSensitivity(double _arg)\n\nSensitivity of the translation along the Y-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {"GetTranslationYSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationYSensitivity, METH_VARARGS,
   "GetTranslationYSensitivity(self) -> float\nC++: virtual double GetTranslationYSensitivity()\n\n"},
  {"SetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_SetTranslationZSensitivity, METH_VARARGS,
   "SetTranslationZSensitivity(self, _arg:float) -> None\nC++: virtual void SetTranslationZSensitivity(double _arg)\n\nSensitivity of the translation along the Z-axis. See comment of\nSetTranslationXSensitivity().\n"},
  {"GetTranslationZSensitivity", PyvtkTDxInteractorStyleSettings_GetTranslationZSensitivity, METH_VARARGS,
   "GetTranslationZSensitivity(self) -> float\nC++: virtual double GetTranslationZSensitivity()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTDxInteractorStyleSettings_Doc =
  "vtkTDxInteractorStyleSettings - 3DConnexion device settings\n\n"
  "Superclass: vtkObject\n\n"
  "vtkTDxInteractorStyleSettings defines settings for 3DConnexion device\n"
  "such as sensitivity, axis filters\n\n"
  "@sa\n"
  "vtkInteractorStyle vtkRenderWindowInteractor vtkTDxInteractorStyle\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTDxInteractorStyleSettings_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkTDxInteractorStyleSettings", // tp_name
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
  PyvtkTDxInteractorStyleSettings_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTDxInteractorStyleSettings_StaticNew()
{
  return vtkTDxInteractorStyleSettings::New();
}

PyObject *PyvtkTDxInteractorStyleSettings_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTDxInteractorStyleSettings_Type, PyvtkTDxInteractorStyleSettings_Methods,
    "vtkTDxInteractorStyleSettings",
 &PyvtkTDxInteractorStyleSettings_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTDxInteractorStyleSettings(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTDxInteractorStyleSettings_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTDxInteractorStyleSettings", o) != 0)
  {
    Py_DECREF(o);
  }

}

