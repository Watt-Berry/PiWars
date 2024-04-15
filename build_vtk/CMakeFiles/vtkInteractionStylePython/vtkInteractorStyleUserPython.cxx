// python wrapper for vtkInteractorStyleUser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleUser.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleUser(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleUser_ClassNew(); }


static PyObject *
PyvtkInteractorStyleUser_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleUser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleUser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleUser *tempr = vtkInteractorStyleUser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleUser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleUser::NewInstance());

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
PyvtkInteractorStyleUser_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleUser::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleUser::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetLastPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLastPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetLastPos() :
      op->vtkInteractorStyleUser::GetLastPos());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetOldPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOldPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOldPos() :
      op->vtkInteractorStyleUser::GetOldPos());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetShiftKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShiftKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShiftKey() :
      op->vtkInteractorStyleUser::GetShiftKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetCtrlKey(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCtrlKey");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCtrlKey() :
      op->vtkInteractorStyleUser::GetCtrlKey());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChar() :
      op->vtkInteractorStyleUser::GetChar());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetKeySym(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeySym");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetKeySym() :
      op->vtkInteractorStyleUser::GetKeySym());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_GetButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetButton() :
      op->vtkInteractorStyleUser::GetButton());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMiddleButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMiddleButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMiddleButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMiddleButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMiddleButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUser::OnRightButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnRightButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnRightButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnRightButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUser::OnRightButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseWheelForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelForward();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseWheelForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnMouseWheelBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseWheelBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseWheelBackward();
    }
    else
    {
      op->vtkInteractorStyleUser::OnMouseWheelBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnChar();
    }
    else
    {
      op->vtkInteractorStyleUser::OnChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyPress(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyPress");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyPress();
    }
    else
    {
      op->vtkInteractorStyleUser::OnKeyPress();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnKeyRelease(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnKeyRelease");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnKeyRelease();
    }
    else
    {
      op->vtkInteractorStyleUser::OnKeyRelease();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnExpose(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnExpose");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnExpose();
    }
    else
    {
      op->vtkInteractorStyleUser::OnExpose();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnConfigure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnConfigure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnConfigure();
    }
    else
    {
      op->vtkInteractorStyleUser::OnConfigure();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnEnter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnEnter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnEnter();
    }
    else
    {
      op->vtkInteractorStyleUser::OnEnter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnLeave(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeave");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeave();
    }
    else
    {
      op->vtkInteractorStyleUser::OnLeave();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUser_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUser *op = static_cast<vtkInteractorStyleUser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnTimer();
    }
    else
    {
      op->vtkInteractorStyleUser::OnTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleUser_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleUser_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleUser_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleUser_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleUser\nC++: static vtkInteractorStyleUser *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleUser_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleUser\nC++: vtkInteractorStyleUser *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleUser_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleUser_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetLastPos", PyvtkInteractorStyleUser_GetLastPos, METH_VARARGS,
   "GetLastPos(self) -> (int, int)\nC++: virtual int *GetLastPos()\n\nGet the most recent mouse position during mouse motion. In your\nuser interaction method, you must use this to track the mouse\nmovement.  Do not use GetEventPosition(), which records the last\nposition where a mouse button was pressed.\n"},
  {"GetOldPos", PyvtkInteractorStyleUser_GetOldPos, METH_VARARGS,
   "GetOldPos(self) -> (int, int)\nC++: virtual int *GetOldPos()\n\nGet the previous mouse position during mouse motion, or after a\nkey press.  This can be used to calculate the relative\ndisplacement of the mouse.\n"},
  {"GetShiftKey", PyvtkInteractorStyleUser_GetShiftKey, METH_VARARGS,
   "GetShiftKey(self) -> int\nC++: virtual int GetShiftKey()\n\nTest whether modifiers were held down when mouse button or key\nwas pressed.\n"},
  {"GetCtrlKey", PyvtkInteractorStyleUser_GetCtrlKey, METH_VARARGS,
   "GetCtrlKey(self) -> int\nC++: virtual int GetCtrlKey()\n\n"},
  {"GetChar", PyvtkInteractorStyleUser_GetChar, METH_VARARGS,
   "GetChar(self) -> int\nC++: virtual int GetChar()\n\nGet the character for a Char event.\n"},
  {"GetKeySym", PyvtkInteractorStyleUser_GetKeySym, METH_VARARGS,
   "GetKeySym(self) -> str\nC++: virtual char *GetKeySym()\n\nGet the KeySym (in the same format as vtkRenderWindowInteractor\nKeySyms) for a KeyPress or KeyRelease method.\n"},
  {"GetButton", PyvtkInteractorStyleUser_GetButton, METH_VARARGS,
   "GetButton(self) -> int\nC++: virtual int GetButton()\n\nGet the mouse button that was last pressed inside the window\n(returns zero when the button is released).\n"},
  {"OnMouseMove", PyvtkInteractorStyleUser_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nGeneric event bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleUser_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: void OnLeftButtonDown() override;\n\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleUser_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"OnMiddleButtonDown", PyvtkInteractorStyleUser_OnMiddleButtonDown, METH_VARARGS,
   "OnMiddleButtonDown(self) -> None\nC++: void OnMiddleButtonDown() override;\n\n"},
  {"OnMiddleButtonUp", PyvtkInteractorStyleUser_OnMiddleButtonUp, METH_VARARGS,
   "OnMiddleButtonUp(self) -> None\nC++: void OnMiddleButtonUp() override;\n\n"},
  {"OnRightButtonDown", PyvtkInteractorStyleUser_OnRightButtonDown, METH_VARARGS,
   "OnRightButtonDown(self) -> None\nC++: void OnRightButtonDown() override;\n\n"},
  {"OnRightButtonUp", PyvtkInteractorStyleUser_OnRightButtonUp, METH_VARARGS,
   "OnRightButtonUp(self) -> None\nC++: void OnRightButtonUp() override;\n\n"},
  {"OnMouseWheelForward", PyvtkInteractorStyleUser_OnMouseWheelForward, METH_VARARGS,
   "OnMouseWheelForward(self) -> None\nC++: void OnMouseWheelForward() override;\n\n"},
  {"OnMouseWheelBackward", PyvtkInteractorStyleUser_OnMouseWheelBackward, METH_VARARGS,
   "OnMouseWheelBackward(self) -> None\nC++: void OnMouseWheelBackward() override;\n\n"},
  {"OnChar", PyvtkInteractorStyleUser_OnChar, METH_VARARGS,
   "OnChar(self) -> None\nC++: void OnChar() override;\n\nKeyboard functions\n"},
  {"OnKeyPress", PyvtkInteractorStyleUser_OnKeyPress, METH_VARARGS,
   "OnKeyPress(self) -> None\nC++: void OnKeyPress() override;\n\n"},
  {"OnKeyRelease", PyvtkInteractorStyleUser_OnKeyRelease, METH_VARARGS,
   "OnKeyRelease(self) -> None\nC++: void OnKeyRelease() override;\n\n"},
  {"OnExpose", PyvtkInteractorStyleUser_OnExpose, METH_VARARGS,
   "OnExpose(self) -> None\nC++: void OnExpose() override;\n\nThese are more esoteric events, but are useful in some cases.\n"},
  {"OnConfigure", PyvtkInteractorStyleUser_OnConfigure, METH_VARARGS,
   "OnConfigure(self) -> None\nC++: void OnConfigure() override;\n\n"},
  {"OnEnter", PyvtkInteractorStyleUser_OnEnter, METH_VARARGS,
   "OnEnter(self) -> None\nC++: void OnEnter() override;\n\n"},
  {"OnLeave", PyvtkInteractorStyleUser_OnLeave, METH_VARARGS,
   "OnLeave(self) -> None\nC++: void OnLeave() override;\n\n"},
  {"OnTimer", PyvtkInteractorStyleUser_OnTimer, METH_VARARGS,
   "OnTimer(self) -> None\nC++: void OnTimer() override;\n\nOnTimer calls Rotate, Rotate etc which should be overridden by\nstyle subclasses.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleUser_Doc =
  "vtkInteractorStyleUser - provides customizable interaction routines\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "The most common way to customize user interaction is to write a\n"
  "subclass of vtkInteractorStyle: vtkInteractorStyleUser allows you to\n"
  "customize the interaction to without subclassing vtkInteractorStyle. \n"
  "This is particularly useful for setting up custom interaction modes\n"
  "in scripting languages such as Python.  This class allows you to hook\n"
  "into the MouseMove, ButtonPress/Release, KeyPress/Release, etc.\n"
  "events.  If you want to hook into just a single mouse button, but\n"
  "leave the interaction modes for the others unchanged, you must use\n"
  "e.g. SetMiddleButtonPressMethod() instead of the more general\n"
  "SetButtonPressMethod().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleUser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkInteractorStyleUser", // tp_name
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
  PyvtkInteractorStyleUser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleUser_StaticNew()
{
  return vtkInteractorStyleUser::New();
}

PyObject *PyvtkInteractorStyleUser_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleUser_Type, PyvtkInteractorStyleUser_Methods,
    "vtkInteractorStyleUser",
 &PyvtkInteractorStyleUser_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorStyle");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleUser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleUser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleUser", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyLong_FromLong(8);
  if (o)
  {
    PyDict_SetItemString(dict, "VTKIS_USERINTERACTION", o);
    Py_DECREF(o);
  }
}

