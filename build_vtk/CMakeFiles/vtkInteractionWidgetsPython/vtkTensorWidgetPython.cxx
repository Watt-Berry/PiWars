// python wrapper for vtkTensorWidget
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTensorWidget.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorWidget(PyObject *dict); }
extern "C" { PyObject *PyvtkTensorWidget_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractWidget_ClassNew
extern "C" { PyObject *PyvtkAbstractWidget_ClassNew(); }
#define DECLARED_PyvtkAbstractWidget_ClassNew
#endif

static PyObject *
PyvtkTensorWidget_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorWidget::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorWidget::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorWidget *tempr = vtkTensorWidget::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorWidget *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorWidget::NewInstance());

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
PyvtkTensorWidget_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTensorWidget::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTensorWidget::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  vtkTensorRepresentation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTensorRepresentation"))
  {
    if (ap.IsBound())
    {
      op->SetRepresentation(temp0);
    }
    else
    {
      op->vtkTensorWidget::SetRepresentation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

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
      op->vtkTensorWidget::SetTranslationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_GetTranslationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTranslationEnabled() :
      op->vtkTensorWidget::GetTranslationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_TranslationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOn();
    }
    else
    {
      op->vtkTensorWidget::TranslationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_TranslationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslationEnabledOff();
    }
    else
    {
      op->vtkTensorWidget::TranslationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

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
      op->vtkTensorWidget::SetScalingEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_GetScalingEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalingEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalingEnabled() :
      op->vtkTensorWidget::GetScalingEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_ScalingEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOn();
    }
    else
    {
      op->vtkTensorWidget::ScalingEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_ScalingEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ScalingEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ScalingEnabledOff();
    }
    else
    {
      op->vtkTensorWidget::ScalingEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

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
      op->vtkTensorWidget::SetRotationEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_GetRotationEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRotationEnabled() :
      op->vtkTensorWidget::GetRotationEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_RotationEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOn();
    }
    else
    {
      op->vtkTensorWidget::RotationEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_RotationEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RotationEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RotationEnabledOff();
    }
    else
    {
      op->vtkTensorWidget::RotationEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

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
      op->vtkTensorWidget::SetMoveFacesEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_GetMoveFacesEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMoveFacesEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMoveFacesEnabled() :
      op->vtkTensorWidget::GetMoveFacesEnabled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_MoveFacesEnabledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveFacesEnabledOn();
    }
    else
    {
      op->vtkTensorWidget::MoveFacesEnabledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_MoveFacesEnabledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MoveFacesEnabledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MoveFacesEnabledOff();
    }
    else
    {
      op->vtkTensorWidget::MoveFacesEnabledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_CreateDefaultRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateDefaultRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultRepresentation();
    }
    else
    {
      op->vtkTensorWidget::CreateDefaultRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorWidget_SetEnabled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEnabled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorWidget *op = static_cast<vtkTensorWidget *>(vp);

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
      op->vtkTensorWidget::SetEnabled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorWidget_Methods[] = {
  {"IsTypeOf", PyvtkTensorWidget_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTensorWidget_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTensorWidget_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTensorWidget\nC++: static vtkTensorWidget *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTensorWidget_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTensorWidget\nC++: vtkTensorWidget *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTensorWidget_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTensorWidget_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetRepresentation", PyvtkTensorWidget_SetRepresentation, METH_VARARGS,
   "SetRepresentation(self, r:vtkTensorRepresentation) -> None\nC++: void SetRepresentation(vtkTensorRepresentation *r)\n\nSpecify an instance of vtkWidgetRepresentation used to represent\nthis widget in the scene. Note that the representation is a\nsubclass of vtkProp so it can be added to the renderer\nindependent of the widget.\n"},
  {"SetTranslationEnabled", PyvtkTensorWidget_SetTranslationEnabled, METH_VARARGS,
   "SetTranslationEnabled(self, _arg:int) -> None\nC++: virtual void SetTranslationEnabled(vtkTypeBool _arg)\n\nControl the behavior of the widget (i.e., how it processes\nevents). Translation, rotation, scaling and face movement can all\nbe enabled and disabled. Scaling refers to scaling of the whole\nwidget at once, (default is through right mouse button) while\nface movement refers to scaling of the widget one face (axis) at\na time (default through grabbing one of the representation\nspherical handles).\n"},
  {"GetTranslationEnabled", PyvtkTensorWidget_GetTranslationEnabled, METH_VARARGS,
   "GetTranslationEnabled(self) -> int\nC++: virtual vtkTypeBool GetTranslationEnabled()\n\n"},
  {"TranslationEnabledOn", PyvtkTensorWidget_TranslationEnabledOn, METH_VARARGS,
   "TranslationEnabledOn(self) -> None\nC++: virtual void TranslationEnabledOn()\n\n"},
  {"TranslationEnabledOff", PyvtkTensorWidget_TranslationEnabledOff, METH_VARARGS,
   "TranslationEnabledOff(self) -> None\nC++: virtual void TranslationEnabledOff()\n\n"},
  {"SetScalingEnabled", PyvtkTensorWidget_SetScalingEnabled, METH_VARARGS,
   "SetScalingEnabled(self, _arg:int) -> None\nC++: virtual void SetScalingEnabled(vtkTypeBool _arg)\n\n"},
  {"GetScalingEnabled", PyvtkTensorWidget_GetScalingEnabled, METH_VARARGS,
   "GetScalingEnabled(self) -> int\nC++: virtual vtkTypeBool GetScalingEnabled()\n\n"},
  {"ScalingEnabledOn", PyvtkTensorWidget_ScalingEnabledOn, METH_VARARGS,
   "ScalingEnabledOn(self) -> None\nC++: virtual void ScalingEnabledOn()\n\n"},
  {"ScalingEnabledOff", PyvtkTensorWidget_ScalingEnabledOff, METH_VARARGS,
   "ScalingEnabledOff(self) -> None\nC++: virtual void ScalingEnabledOff()\n\n"},
  {"SetRotationEnabled", PyvtkTensorWidget_SetRotationEnabled, METH_VARARGS,
   "SetRotationEnabled(self, _arg:int) -> None\nC++: virtual void SetRotationEnabled(vtkTypeBool _arg)\n\n"},
  {"GetRotationEnabled", PyvtkTensorWidget_GetRotationEnabled, METH_VARARGS,
   "GetRotationEnabled(self) -> int\nC++: virtual vtkTypeBool GetRotationEnabled()\n\n"},
  {"RotationEnabledOn", PyvtkTensorWidget_RotationEnabledOn, METH_VARARGS,
   "RotationEnabledOn(self) -> None\nC++: virtual void RotationEnabledOn()\n\n"},
  {"RotationEnabledOff", PyvtkTensorWidget_RotationEnabledOff, METH_VARARGS,
   "RotationEnabledOff(self) -> None\nC++: virtual void RotationEnabledOff()\n\n"},
  {"SetMoveFacesEnabled", PyvtkTensorWidget_SetMoveFacesEnabled, METH_VARARGS,
   "SetMoveFacesEnabled(self, _arg:int) -> None\nC++: virtual void SetMoveFacesEnabled(vtkTypeBool _arg)\n\n"},
  {"GetMoveFacesEnabled", PyvtkTensorWidget_GetMoveFacesEnabled, METH_VARARGS,
   "GetMoveFacesEnabled(self) -> int\nC++: virtual vtkTypeBool GetMoveFacesEnabled()\n\n"},
  {"MoveFacesEnabledOn", PyvtkTensorWidget_MoveFacesEnabledOn, METH_VARARGS,
   "MoveFacesEnabledOn(self) -> None\nC++: virtual void MoveFacesEnabledOn()\n\n"},
  {"MoveFacesEnabledOff", PyvtkTensorWidget_MoveFacesEnabledOff, METH_VARARGS,
   "MoveFacesEnabledOff(self) -> None\nC++: virtual void MoveFacesEnabledOff()\n\n"},
  {"CreateDefaultRepresentation", PyvtkTensorWidget_CreateDefaultRepresentation, METH_VARARGS,
   "CreateDefaultRepresentation(self) -> None\nC++: void CreateDefaultRepresentation() override;\n\nCreate the default widget representation if one is not set. By\ndefault, this is an instance of the vtkTensorRepresentation\nclass.\n"},
  {"SetEnabled", PyvtkTensorWidget_SetEnabled, METH_VARARGS,
   "SetEnabled(self, enabling:int) -> None\nC++: void SetEnabled(int enabling) override;\n\nOverride superclasses' SetEnabled() method because the line\nwidget must enable its internal handle widgets.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTensorWidget_Doc =
  "vtkTensorWidget - 3D widget for manipulating a tensor glyph\n\n"
  "Superclass: vtkAbstractWidget\n\n"
  "This 3D widget interacts with a vtkTensorRepresentation class (i.e.,\n"
  "it handles the events that drive its corresponding representation).\n"
  "The widget is assumed to operate on a single 3x3 real, symmetric\n"
  "tensor located at a specified position. The tensor implicitly defines\n"
  "three orthogonal eigenvectors which indicate the orientation and\n"
  "relative scaling of the widget's representation.\n\n"
  "The widget has the appearance of an oriented box with seven handles:\n"
  "one at the center of the box, and six located at the center of each\n"
  "face. The box can be translated by selecting its center handle;\n"
  "rotated by selecting and rotating one of the box faces around the box\n"
  "center; and scaled (in a particular direction) by selecting the face\n"
  "handles (located on each face) and moving the faces in/out in the\n"
  "direction of the face normal. Uniform scaling is also possible by\n"
  "(default) using the right mouse button (unless the binding has been\n"
  "redefined).\n\n"
  "To use this widget, you generally pair it with a\n"
  "vtkTensorRepresentation (or a subclass). Various options are\n"
  "available in the representation for controlling the widgets' size and\n"
  "position; how the widget appears; and how the widget functions.\n\n"
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
  "translates VTK events into the vtkTensorWidget's widget events:\n\n\n"
  "  vtkWidgetEvent::Select -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndSelect -- the selection process has completed\n"
  "  vtkWidgetEvent::Scale -- some part of the widget has been selected\n"
  "  vtkWidgetEvent::EndScale -- the selection process has completed\n"
  "  vtkWidgetEvent::Translate -- some part of the widget has been\n"
  "selected\n"
  "  vtkWidgetEvent::EndTranslate -- the selection process has completed\n"
  "  vtkWidgetEvent::Move -- a request for motion has been invoked \n\n"
  "@par Event Bindings: In turn, when these widget events are processed,\n"
  "the vtkTensorWidget invokes the following VTK events on itself (which\n"
  "observers can listen for):\n\n\n"
  "  vtkCommand::StartInteractionEvent (on vtkWidgetEvent::Select)\n"
  "  vtkCommand::EndInteractionEvent (on vtkWidgetEvent::EndSelect)\n"
  "  vtkCommand::InteractionEvent (on vtkWidgetEvent::Move) \n\n"
  "@sa\n"
  "vtkTensorRepresentation vtkBoxWidget2\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTensorWidget_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTensorWidget", // tp_name
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
  PyvtkTensorWidget_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTensorWidget_StaticNew()
{
  return vtkTensorWidget::New();
}

PyObject *PyvtkTensorWidget_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTensorWidget_Type, PyvtkTensorWidget_Methods,
    "vtkTensorWidget",
 &PyvtkTensorWidget_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractWidget_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTensorWidget(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorWidget_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorWidget", o) != 0)
  {
    Py_DECREF(o);
  }

}

