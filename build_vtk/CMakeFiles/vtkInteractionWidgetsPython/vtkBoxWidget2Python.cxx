// python wrapper for vtkBoxWidget2
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBoxWidget2.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBoxWidget2(PyObject *dict); }
extern "C" { PyObject *PyvtkBoxWidget2_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkBoxWidget2_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBoxWidget2::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBoxWidget2::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBoxWidget2 *tempr = vtkBoxWidget2::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBoxWidget2 *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBoxWidget2::NewInstance());

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
PyvtkBoxWidget2_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBoxWidget2::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBoxWidget2::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  vtkBoxRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBoxRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslationEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkBoxWidget2::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOn();
    }
    else
    {
      op->vtkBoxWidget2::TranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOff();
    }
    else
    {
      op->vtkBoxWidget2::TranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalingEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkBoxWidget2::GetScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOn();
    }
    else
    {
      op->vtkBoxWidget2::ScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOff();
    }
    else
    {
      op->vtkBoxWidget2::ScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetRotationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationEnabled() :
      op->vtkBoxWidget2::GetRotationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_RotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOn();
    }
    else
    {
      op->vtkBoxWidget2::RotationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_RotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOff();
    }
    else
    {
      op->vtkBoxWidget2::RotationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMoveFacesEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetMoveFacesEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_GetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoveFacesEnabled() :
      op->vtkBoxWidget2::GetMoveFacesEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_MoveFacesEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveFacesEnabledOn();
    }
    else
    {
      op->vtkBoxWidget2::MoveFacesEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_MoveFacesEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveFacesEnabledOff();
    }
    else
    {
      op->vtkBoxWidget2::MoveFacesEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkBoxWidget2::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBoxWidget2_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBoxWidget2 *op = static_cast<vtkBoxWidget2 *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEnabled(temp0);
    }
    else
    {
      op->vtkBoxWidget2::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkBoxWidget2_Methods[] = {
  {"IsTypeOf", PyvtkBoxWidget2_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBoxWidget2_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBoxWidget2_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBoxWidget2\nC++: static vtkBoxWidget2 *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBoxWidget2_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBoxWidget2\nC++: vtkBoxWidget2 *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBoxWidget2_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBoxWidget2_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkBoxWidget2_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkBoxRepresentation) -> None\nC++: void SetRepresentation(vtkBoxRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetTranslationEnabled", PyvtkBoxWidget2_SetTranslationEnabled, METH_VARARGS,
   "SetTranslationEnabled(self, _arg:int) -> None\nC++: virtual void SetTranslationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {"GetTranslationEnabled", PyvtkBoxWidget2_GetTranslationEnabled, METH_VARARGS,
   "GetTranslationEnabled(self) -> int\nC++: virtual vtkTypeBool GetTranslationEnabled()\n\n"},
  {"TranslationEnabledOn", PyvtkBoxWidget2_TranslationEnabledOn, METH_VARARGS,
   "TranslationEnabledOn(self) -> None\nC++: virtual void TranslationEnabledOn()\n\n"},
  {"TranslationEnabledOff", PyvtkBoxWidget2_TranslationEnabledOff, METH_VARARGS,
   "TranslationEnabledOff(self) -> None\nC++: virtual void TranslationEnabledOff()\n\n"},
  {"SetScalingEnabled", PyvtkBoxWidget2_SetScalingEnabled, METH_VARARGS,
   "SetScalingEnabled(self, _arg:int) -> None\nC++: virtual void SetScalingEnabled(vtkTypeBool _arg)\n\n"},
  {"GetScalingEnabled", PyvtkBoxWidget2_GetScalingEnabled, METH_VARARGS,
   "GetScalingEnabled(self) -> int\nC++: virtual vtkTypeBool GetScalingEnabled()\n\n"},
  {"ScalingEnabledOn", PyvtkBoxWidget2_ScalingEnabledOn, METH_VARARGS,
   "ScalingEnabledOn(self) -> None\nC++: virtual void ScalingEnabledOn()\n\n"},
  {"ScalingEnabledOff", PyvtkBoxWidget2_ScalingEnabledOff, METH_VARARGS,
   "ScalingEnabledOff(self) -> None\nC++: virtual void ScalingEnabledOff()\n\n"},
  {"SetRotationEnabled", PyvtkBoxWidget2_SetRotationEnabled, METH_VARARGS,
   "SetRotationEnabled(self, _arg:int) -> None\nC++: virtual void SetRotationEnabled(vtkTypeBool _arg)\n\n"},
  {"GetRotationEnabled", PyvtkBoxWidget2_GetRotationEnabled, METH_VARARGS,
   "GetRotationEnabled(self) -> int\nC++: virtual vtkTypeBool GetRotationEnabled()\n\n"},
  {"RotationEnabledOn", PyvtkBoxWidget2_RotationEnabledOn, METH_VARARGS,
   "RotationEnabledOn(self) -> None\nC++: virtual void RotationEnabledOn()\n\n"},
  {"RotationEnabledOff", PyvtkBoxWidget2_RotationEnabledOff, METH_VARARGS,
   "RotationEnabledOff(self) -> None\nC++: virtual void RotationEnabledOff()\n\n"},
  {"SetMoveFacesEnabled", PyvtkBoxWidget2_SetMoveFacesEnabled, METH_VARARGS,
   "SetMoveFacesEnabled(self, _arg:int) -> None\nC++: virtual void SetMoveFacesEnabled(vtkTypeBool _arg)\n\n"},
  {"GetMoveFacesEnabled", PyvtkBoxWidget2_GetMoveFacesEnabled, METH_VARARGS,
   "GetMoveFacesEnabled(self) -> int\nC++: virtual vtkTypeBool GetMoveFacesEnabled()\n\n"},
  {"MoveFacesEnabledOn", PyvtkBoxWidget2_MoveFacesEnabledOn, METH_VARARGS,
   "MoveFacesEnabledOn(self) -> None\nC++: virtual void MoveFacesEnabledOn()\n\n"},
  {"MoveFacesEnabledOff", PyvtkBoxWidget2_MoveFacesEnabledOff, METH_VARARGS,
   "MoveFacesEnabledOff(self) -> None\nC++: virtual void MoveFacesEnabledOff()\n\n"},
  {"CreateDefaultRepresentation", PyvtkBoxWidget2_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkBoxRepresentation class.\n"},
  {"SetEnabled", PyvtkBoxWidget2_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBoxWidget2_Doc =
  "vtkBoxWidget2 - 3D widget for manipulating a box\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget interacts with a vtkBoxRepresentation class (i.e., it\n"
  "handles the events that drive its corresponding representation). The\n"
  "representation is assumed to represent a region of interest that is\n"
  "represented by an arbitrarily oriented hexahedron (or box) with\n"
  "interior face angles of 90 degrees (i.e., orthogonal faces). The\n"
  "representation manifests seven handles that can be moused on and\n"
  "manipulated, plus the six faces can also be interacted with. The\n"
  "first six handles are placed on the six faces, the seventh is in the\n"
  "center of the box. In addition, a bounding box outline is shown, the\n"
  "\"faces\" of which can be selected for object rotation or scaling. A\n"
  "nice feature of vtkBoxWidget2, like any 3D widget, will work with the\n"
  "current interactor style. That is, if vtkBoxWidget2 does not handle\n"
  "an event, then all other registered observers (including the\n"
  "interactor style) have an opportunity to process the event.\n"
  "Otherwise, the vtkBoxWidget will terminate the processing of the\n"
  "event that it handles.\n\n"
  "To use this widget, you generally pair it with a vtkBoxRepresentation\n"
  "(or a subclass). Various options are available in the representation\n"
  "for controlling how the widget appears, and how the widget functions.\n\n"
  "@par Event Bindings: By default, the widget responds to the following\n"
  "VTK events (i.e., it watches the vtkRenderWindowInteractor for these\n"
  "events):\n\n"
  "If one of the seven handles are selected:\n"
  "  LeftButtonPressEvent - select the appropriate handle\n"
  "  LeftButtonReleaseEvent - release the currently selected handle\n"
  "  MouseMoveEvent - move the handle If one of the faces is selected:\n"
  "  LeftButtonPressEvent - select a box face\n"
  "  LeftButtonReleaseEvent - release the box face\n"
  "  MouseMoveEvent - rotate the box In all the cases, independent of\n"
  "what is picked, the widget responds to the following VTK events:\n"
  "  MiddleButtonPressEvent - translate the widget\n"
  "  MiddleButtonReleaseEvent - release the widget\n"
  "  RightButtonPressEvent - scale the widget's representation\n"
  "  RightButtonReleaseEvent - stop scaling the widget\n"
  "  MouseMoveEvent - scale (if right button) or move (if middle button)\n"
  "the widget \n\n"
  "@par Event Bindings: Note that the event bindings described above can\n"
  "be changed using this class's vtkWidgetEventTranslator. This class\n"
  "translates VTK events into the vtkBoxWidget2's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Scale -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndScale -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- some part of the widget has been\n"
  "selected\n"
  "  vtkWidgetEvent::EndTranslate -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkBoxWidget2 invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@par Event Bindings: This class, and the affiliated\n"
  "vtkBoxRepresentation, are second generation VTK widgets. An earlier\n"
  "version of this functionality was defined in the class vtkBoxWidget.\n\n"
  "@sa\n"
  "vtkBoxRepresentation vtkBoxWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBoxWidget2_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkBoxWidget2", // tp_name
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
  PyvtkBoxWidget2_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBoxWidget2_StaticNew()
{
  return vtkBoxWidget2::New();
}

PyObject *PyvtkBoxWidget2_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBoxWidget2_Type, PyvtkBoxWidget2_Methods,
    "vtkBoxWidget2",
 &PyvtkBoxWidget2_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBoxWidget2(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBoxWidget2_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBoxWidget2", o) != 0)
  {
    Py_DECREF(o);
  }

}

