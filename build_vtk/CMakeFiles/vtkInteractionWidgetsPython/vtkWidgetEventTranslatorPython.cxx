// python wrapper for vtkWidgetEventTranslator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWidgetEventTranslator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWidgetEventTranslator(PyObject *dict); }
extern "C" { PyObject *PyvtkWidgetEventTranslator_ClassNew(); }


static PyObject *
PyvtkWidgetEventTranslator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWidgetEventTranslator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWidgetEventTranslator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWidgetEventTranslator *tempr = vtkWidgetEventTranslator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWidgetEventTranslator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWidgetEventTranslator::NewInstance());

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
PyvtkWidgetEventTranslator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWidgetEventTranslator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWidgetEventTranslator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  unsigned long temp5;
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
      op->SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkEvent") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  vtkEventData *temp1 = nullptr;
  unsigned long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkEventData") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetTranslation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::SetTranslation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_SetTranslation_Methods[] = {
  {"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation_s1, METH_VARARGS,
   "@LL"},
  {"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation_s2, METH_VARARGS,
   "@zz"},
  {"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation_s4, METH_VARARGS,
   "@VL *vtkEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_SetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_SetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkWidgetEventTranslator_SetTranslation_s3(self, args);
    case 3:
      return PyvtkWidgetEventTranslator_SetTranslation_s5(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTranslation");
  return nullptr;
}


static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  vtkEventData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkEventData"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0, temp1) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetTranslation(temp0) :
      op->vtkWidgetEventTranslator::GetTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_GetTranslation_Methods[] = {
  {"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation_s1, METH_VARARGS,
   "@L"},
  {"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation_s2, METH_VARARGS,
   "@z"},
  {"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation_s5, METH_VARARGS,
   "@V *vtkEvent"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_GetTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_GetTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWidgetEventTranslator_GetTranslation_s3(self, args);
    case 2:
      return PyvtkWidgetEventTranslator_GetTranslation_s4(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetTranslation");
  return nullptr;
}


static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  int temp1;
  char temp2;
  int temp3;
  const char *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0, temp1, temp2, temp3, temp4) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEvent *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEvent"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkEventData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkEventData"))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveTranslation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveTranslation(temp0) :
      op->vtkWidgetEventTranslator::RemoveTranslation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_RemoveTranslation_Methods[] = {
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation_s2, METH_VARARGS,
   "@V *vtkEvent"},
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation_s3, METH_VARARGS,
   "@V *vtkEventData"},
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation_s4, METH_VARARGS,
   "@L"},
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation_s5, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkWidgetEventTranslator_RemoveTranslation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkWidgetEventTranslator_RemoveTranslation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkWidgetEventTranslator_RemoveTranslation_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveTranslation");
  return nullptr;
}


static PyObject *
PyvtkWidgetEventTranslator_ClearEvents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearEvents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearEvents();
    }
    else
    {
      op->vtkWidgetEventTranslator::ClearEvents();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToParent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToParent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkAbstractWidget *temp0 = nullptr;
  vtkCallbackCommand *temp1 = nullptr;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractWidget") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddEventsToParent(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::AddEventsToParent(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWidgetEventTranslator_AddEventsToInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddEventsToInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWidgetEventTranslator *op = static_cast<vtkWidgetEventTranslator *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  vtkCallbackCommand *temp1 = nullptr;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor") &&
      ap.GetVTKObject(temp1, "vtkCallbackCommand") &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddEventsToInteractor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWidgetEventTranslator::AddEventsToInteractor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWidgetEventTranslator_Methods[] = {
  {"IsTypeOf", PyvtkWidgetEventTranslator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWidgetEventTranslator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWidgetEventTranslator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWidgetEventTranslator\nC++: static vtkWidgetEventTranslator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWidgetEventTranslator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWidgetEventTranslator\nC++: vtkWidgetEventTranslator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWidgetEventTranslator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWidgetEventTranslator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTranslation", PyvtkWidgetEventTranslator_SetTranslation, METH_VARARGS,
   "SetTranslation(self, VTKEvent:int, widgetEvent:int) -> None\nC++: void SetTranslation(unsigned long VTKEvent,\n    unsigned long widgetEvent)\nSetTranslation(self, VTKEvent:str, widgetEvent:str) -> None\nC++: void SetTranslation(const char *VTKEvent,\n    const char *widgetEvent)\nSetTranslation(self, VTKEvent:int, modifier:int, keyCode:str,\n    repeatCount:int, keySym:str, widgetEvent:int) -> None\nC++: void SetTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, const char *keySym,\n    unsigned long widgetEvent)\nSetTranslation(self, VTKevent:vtkEvent, widgetEvent:int) -> None\nC++: void SetTranslation(vtkEvent *VTKevent,\n    unsigned long widgetEvent)\nSetTranslation(self, VTKEvent:int, edata:vtkEventData,\n    widgetEvent:int) -> None\nC++: void SetTranslation(unsigned long VTKEvent,\n    vtkEventData *edata, unsigned long widgetEvent)\n\nUse these methods to create the translation from a VTK event to a\nwidget event. Specifying vtkWidgetEvent::NoEvent or an empty\nstring for the (toEvent) erases the mapping for the event.\n"},
  {"GetTranslation", PyvtkWidgetEventTranslator_GetTranslation, METH_VARARGS,
   "GetTranslation(self, VTKEvent:int) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent)\nGetTranslation(self, VTKEvent:str) -> str\nC++: const char *GetTranslation(const char *VTKEvent)\nGetTranslation(self, VTKEvent:int, modifier:int, keyCode:str,\n    repeatCount:int, keySym:str) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent,\n    int modifier, char keyCode, int repeatCount,\n    const char *keySym)\nGetTranslation(self, VTKEvent:int, edata:vtkEventData) -> int\nC++: unsigned long GetTranslation(unsigned long VTKEvent,\n    vtkEventData *edata)\nGetTranslation(self, VTKEvent:vtkEvent) -> int\nC++: unsigned long GetTranslation(vtkEvent *VTKEvent)\n\nTranslate a VTK event into a widget event. If no event mapping is\nfound, then the methods return vtkWidgetEvent::NoEvent or a\nnullptr string.\n"},
  {"RemoveTranslation", PyvtkWidgetEventTranslator_RemoveTranslation, METH_VARARGS,
   "RemoveTranslation(self, VTKEvent:int, modifier:int, keyCode:str,\n    repeatCount:int, keySym:str) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent, int modifier,\n    char keyCode, int repeatCount, const char *keySym)\nRemoveTranslation(self, e:vtkEvent) -> int\nC++: int RemoveTranslation(vtkEvent *e)\nRemoveTranslation(self, e:vtkEventData) -> int\nC++: int RemoveTranslation(vtkEventData *e)\nRemoveTranslation(self, VTKEvent:int) -> int\nC++: int RemoveTranslation(unsigned long VTKEvent)\nRemoveTranslation(self, VTKEvent:str) -> int\nC++: int RemoveTranslation(const char *VTKEvent)\n\nRemove translations for a binding. Returns the number of\ntranslations removed.\n"},
  {"ClearEvents", PyvtkWidgetEventTranslator_ClearEvents, METH_VARARGS,
   "ClearEvents(self) -> None\nC++: void ClearEvents()\n\nClear all events from the translator (i.e., no events will be\ntranslated).\n"},
  {"AddEventsToParent", PyvtkWidgetEventTranslator_AddEventsToParent, METH_VARARGS,
   "AddEventsToParent(self, __a:vtkAbstractWidget,\n    __b:vtkCallbackCommand, priority:float) -> None\nC++: void AddEventsToParent(vtkAbstractWidget *,\n    vtkCallbackCommand *, float priority)\n\nAdd the events in the current translation table to the\ninteractor.\n"},
  {"AddEventsToInteractor", PyvtkWidgetEventTranslator_AddEventsToInteractor, METH_VARARGS,
   "AddEventsToInteractor(self, __a:vtkRenderWindowInteractor,\n    __b:vtkCallbackCommand, priority:float) -> None\nC++: void AddEventsToInteractor(vtkRenderWindowInteractor *,\n    vtkCallbackCommand *, float priority)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWidgetEventTranslator_Doc =
  "vtkWidgetEventTranslator - map VTK events into widget events\n\n"
  "Superclass: vtkObject\n\n"
  "vtkWidgetEventTranslator maps VTK events (defined on vtkCommand) into\n"
  "widget events (defined in vtkWidgetEvent.h). This class is typically\n"
  "used in combination with vtkWidgetCallbackMapper, which is\n"
  "responsible for translating widget events into method callbacks, and\n"
  "then invoking the callbacks.\n\n"
  "This class can be used to define different mappings of VTK events\n"
  "into the widget events. Thus widgets can be reconfigured to use\n"
  "different event bindings.\n\n"
  "@sa\n"
  "vtkWidgetEvent vtkCommand vtkInteractorObserver\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWidgetEventTranslator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkWidgetEventTranslator", // tp_name
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
  PyvtkWidgetEventTranslator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWidgetEventTranslator_StaticNew()
{
  return vtkWidgetEventTranslator::New();
}

PyObject *PyvtkWidgetEventTranslator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWidgetEventTranslator_Type, PyvtkWidgetEventTranslator_Methods,
    "vtkWidgetEventTranslator",
 &PyvtkWidgetEventTranslator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWidgetEventTranslator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWidgetEventTranslator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWidgetEventTranslator", o) != 0)
  {
    Py_DECREF(o);
  }

}

