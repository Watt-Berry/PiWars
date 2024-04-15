// python wrapper for vtkTransformTextureCoords
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTransformTextureCoords.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTransformTextureCoords(PyObject *dict); }
extern "C" { PyObject *PyvtkTransformTextureCoords_ClassNew(); }


static PyObject *
PyvtkTransformTextureCoords_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTransformTextureCoords::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTransformTextureCoords::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTransformTextureCoords *tempr = vtkTransformTextureCoords::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransformTextureCoords *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTransformTextureCoords::NewInstance());

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
PyvtkTransformTextureCoords_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTransformTextureCoords::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTransformTextureCoords::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::SetPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->vtkTransformTextureCoords::SetPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPosition");
  return nullptr;
}


static PyObject *
PyvtkTransformTextureCoords_GetPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPosition() :
      op->vtkTransformTextureCoords::GetPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_AddPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->AddPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::AddPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_AddPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->AddPosition(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::AddPosition(temp0);
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
PyvtkTransformTextureCoords_AddPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_AddPosition_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_AddPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPosition");
  return nullptr;
}


static PyObject *
PyvtkTransformTextureCoords_SetScale_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetScale(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::SetScale(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetScale(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetScale(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetScale_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetScale_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetScale");
  return nullptr;
}


static PyObject *
PyvtkTransformTextureCoords_GetScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScale() :
      op->vtkTransformTextureCoords::GetScale());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

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
      op->SetOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTransformTextureCoords::SetOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOrigin(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTransformTextureCoords_SetOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTransformTextureCoords_SetOrigin_s1(self, args);
    case 1:
      return PyvtkTransformTextureCoords_SetOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOrigin");
  return nullptr;
}


static PyObject *
PyvtkTransformTextureCoords_GetOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOrigin() :
      op->vtkTransformTextureCoords::GetOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipR(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipR(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipR(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipR");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipR() :
      op->vtkTransformTextureCoords::GetFlipR());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipROn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipROn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipROff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipROff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipROff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipROff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipS(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipS() :
      op->vtkTransformTextureCoords::GetFlipS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipSOn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipSOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipSOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipSOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipSOff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipSOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_SetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFlipT(temp0);
    }
    else
    {
      op->vtkTransformTextureCoords::SetFlipT(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_GetFlipT(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlipT");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFlipT() :
      op->vtkTransformTextureCoords::GetFlipT());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTOn();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipTOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTransformTextureCoords_FlipTOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FlipTOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTransformTextureCoords *op = static_cast<vtkTransformTextureCoords *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FlipTOff();
    }
    else
    {
      op->vtkTransformTextureCoords::FlipTOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTransformTextureCoords_Methods[] = {
  {"IsTypeOf", PyvtkTransformTextureCoords_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTransformTextureCoords_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTransformTextureCoords_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTransformTextureCoords\nC++: static vtkTransformTextureCoords *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTransformTextureCoords_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTransformTextureCoords\nC++: vtkTransformTextureCoords *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTransformTextureCoords_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTransformTextureCoords_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPosition", PyvtkTransformTextureCoords_SetPosition, METH_VARARGS,
   "SetPosition(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetPosition(double _arg1, double _arg2,\n    double _arg3)\nSetPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetPosition(const double _arg[3])\n\nSet/Get the position of the texture map. Setting the position\ntranslates the texture map by the amount specified.\n"},
  {"GetPosition", PyvtkTransformTextureCoords_GetPosition, METH_VARARGS,
   "GetPosition(self) -> (float, float, float)\nC++: virtual double *GetPosition()\n\n"},
  {"AddPosition", PyvtkTransformTextureCoords_AddPosition, METH_VARARGS,
   "AddPosition(self, deltaR:float, deltaS:float, deltaT:float)\n    -> None\nC++: void AddPosition(double deltaR, double deltaS, double deltaT)\nAddPosition(self, deltaPosition:[float, float, float]) -> None\nC++: void AddPosition(double deltaPosition[3])\n\nIncrementally change the position of the texture map (i.e., does\na translate or shift of the texture coordinates).\n"},
  {"SetScale", PyvtkTransformTextureCoords_SetScale, METH_VARARGS,
   "SetScale(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetScale(double _arg1, double _arg2,\n    double _arg3)\nSetScale(self, _arg:(float, float, float)) -> None\nC++: virtual void SetScale(const double _arg[3])\n\nSet/Get the scale of the texture map. Scaling in performed\nindependently on the r, s and t axes.\n"},
  {"GetScale", PyvtkTransformTextureCoords_GetScale, METH_VARARGS,
   "GetScale(self) -> (float, float, float)\nC++: virtual double *GetScale()\n\n"},
  {"SetOrigin", PyvtkTransformTextureCoords_SetOrigin, METH_VARARGS,
   "SetOrigin(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOrigin(const double _arg[3])\n\nSet/Get the origin of the texture map. This is the point about\nwhich the texture map is flipped (e.g., rotated). Since a typical\ntexture map ranges from (0,1) in the r-s-t coordinates, the\ndefault origin is set at (0.5,0.5,0.5).\n"},
  {"GetOrigin", PyvtkTransformTextureCoords_GetOrigin, METH_VARARGS,
   "GetOrigin(self) -> (float, float, float)\nC++: virtual double *GetOrigin()\n\n"},
  {"SetFlipR", PyvtkTransformTextureCoords_SetFlipR, METH_VARARGS,
   "SetFlipR(self, _arg:int) -> None\nC++: virtual void SetFlipR(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipR", PyvtkTransformTextureCoords_GetFlipR, METH_VARARGS,
   "GetFlipR(self) -> int\nC++: virtual vtkTypeBool GetFlipR()\n\n"},
  {"FlipROn", PyvtkTransformTextureCoords_FlipROn, METH_VARARGS,
   "FlipROn(self) -> None\nC++: virtual void FlipROn()\n\n"},
  {"FlipROff", PyvtkTransformTextureCoords_FlipROff, METH_VARARGS,
   "FlipROff(self) -> None\nC++: virtual void FlipROff()\n\n"},
  {"SetFlipS", PyvtkTransformTextureCoords_SetFlipS, METH_VARARGS,
   "SetFlipS(self, _arg:int) -> None\nC++: virtual void SetFlipS(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the s-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipS", PyvtkTransformTextureCoords_GetFlipS, METH_VARARGS,
   "GetFlipS(self) -> int\nC++: virtual vtkTypeBool GetFlipS()\n\n"},
  {"FlipSOn", PyvtkTransformTextureCoords_FlipSOn, METH_VARARGS,
   "FlipSOn(self) -> None\nC++: virtual void FlipSOn()\n\n"},
  {"FlipSOff", PyvtkTransformTextureCoords_FlipSOff, METH_VARARGS,
   "FlipSOff(self) -> None\nC++: virtual void FlipSOff()\n\n"},
  {"SetFlipT", PyvtkTransformTextureCoords_SetFlipT, METH_VARARGS,
   "SetFlipT(self, _arg:int) -> None\nC++: virtual void SetFlipT(vtkTypeBool _arg)\n\nBoolean indicates whether the texture map should be flipped\naround the t-axis. Note that the flips occur around the texture\norigin.\n"},
  {"GetFlipT", PyvtkTransformTextureCoords_GetFlipT, METH_VARARGS,
   "GetFlipT(self) -> int\nC++: virtual vtkTypeBool GetFlipT()\n\n"},
  {"FlipTOn", PyvtkTransformTextureCoords_FlipTOn, METH_VARARGS,
   "FlipTOn(self) -> None\nC++: virtual void FlipTOn()\n\n"},
  {"FlipTOff", PyvtkTransformTextureCoords_FlipTOff, METH_VARARGS,
   "FlipTOff(self) -> None\nC++: virtual void FlipTOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTransformTextureCoords_Doc =
  "vtkTransformTextureCoords - transform (scale, rotate, translate)\ntexture coordinates\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkTransformTextureCoords is a filter that operates on texture\n"
  "coordinates. It ingests any type of dataset, and outputs a dataset of\n"
  "the same type. The filter lets you scale, translate, and rotate\n"
  "texture coordinates. For example, by using the Scale ivar, you can\n"
  "shift texture coordinates that range from (0->1) to range from\n"
  "(0->10) (useful for repeated patterns).\n\n"
  "The filter operates on texture coordinates of dimension 1->3. The\n"
  "texture coordinates are referred to as r-s-t. If the texture map is\n"
  "two dimensional, the t-coordinate (and operations on the\n"
  "t-coordinate) are ignored.\n\n"
  "@sa\n"
  "vtkTextureMapToPlane  vtkTextureMapToCylinder vtkTextureMapToSphere\n"
  "vtkThresholdTextureCoords vtkTexture\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTransformTextureCoords_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTexture.vtkTransformTextureCoords", // tp_name
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
  PyvtkTransformTextureCoords_Doc, // tp_doc
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

static vtkObjectBase *PyvtkTransformTextureCoords_StaticNew()
{
  return vtkTransformTextureCoords::New();
}

PyObject *PyvtkTransformTextureCoords_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTransformTextureCoords_Type, PyvtkTransformTextureCoords_Methods,
    "vtkTransformTextureCoords",
 &PyvtkTransformTextureCoords_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTransformTextureCoords(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTransformTextureCoords_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTransformTextureCoords", o) != 0)
  {
    Py_DECREF(o);
  }

}

