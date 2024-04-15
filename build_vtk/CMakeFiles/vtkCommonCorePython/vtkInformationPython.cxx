// python wrapper for vtkInformation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInformation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInformation(PyObject *dict); }
extern "C" { PyObject *PyvtkInformation_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkInformation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInformation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInformation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInformation *tempr = vtkInformation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInformation::NewInstance());

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
PyvtkInformation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInformation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInformation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Modified_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkInformation::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Modified_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Modified(temp0);
    }
    else
    {
      op->vtkInformation::Modified(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Modified(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkInformation_Modified_s1(self, args);
    case 1:
      return PyvtkInformation_Modified_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Modified");
  return nullptr;
}


static PyObject *
PyvtkInformation_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkInformation::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_GetNumberOfKeys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfKeys");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfKeys() :
      op->vtkInformation::GetNumberOfKeys());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Copy(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Append_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, *temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Append_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationObjectBaseKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Append_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Append");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Append(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Append(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Append_Methods[] = {
  {"Append", PyvtkInformation_Append_s1, METH_VARARGS,
   "@V|i *vtkInformation"},
  {"Append", PyvtkInformation_Append_s2, METH_VARARGS,
   "@Vi *vtkInformationIntegerVectorKey"},
  {"Append", PyvtkInformation_Append_s3, METH_VARARGS,
   "@Vs *vtkInformationStringVectorKey"},
  {"Append", PyvtkInformation_Append_s4, METH_VARARGS,
   "@Vd *vtkInformationDoubleVectorKey"},
  {"Append", PyvtkInformation_Append_s5, METH_VARARGS,
   "@VW *vtkInformationVariantVectorKey vtkVariant"},
  {"Append", PyvtkInformation_Append_s6, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {"Append", PyvtkInformation_Append_s7, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {"Append", PyvtkInformation_Append_s8, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {"Append", PyvtkInformation_Append_s9, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {"Append", PyvtkInformation_Append_s10, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {"Append", PyvtkInformation_Append_s11, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {"Append", PyvtkInformation_Append_s12, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {"Append", PyvtkInformation_Append_s13, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {"Append", PyvtkInformation_Append_s14, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {"Append", PyvtkInformation_Append_s15, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {"Append", PyvtkInformation_Append_s16, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {"Append", PyvtkInformation_Append_s17, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {"Append", PyvtkInformation_Append_s18, METH_VARARGS,
   "@VV *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Append(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Append_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformation_Append_s1(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Append");
  return nullptr;
}


static PyObject *
PyvtkInformation_CopyEntry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationVariantKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationVariantVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationVariantVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationObjectBaseVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationRequestKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationRequestKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_CopyEntry_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntry(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntry(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_CopyEntry_Methods[] = {
  {"CopyEntry", PyvtkInformation_CopyEntry_s1, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s2, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationDataObjectKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s3, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationDoubleVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s4, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationVariantKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s5, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationVariantVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s6, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationInformationKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s7, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationInformationVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s8, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationIntegerKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s9, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationIntegerVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s10, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationObjectBaseVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s11, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationRequestKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s12, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationStringKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s13, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationStringVectorKey"},
  {"CopyEntry", PyvtkInformation_CopyEntry_s14, METH_VARARGS,
   "@VV|i *vtkInformation *vtkInformationUnsignedLongKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_CopyEntry(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_CopyEntry_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyEntry");
  return nullptr;
}


static PyObject *
PyvtkInformation_CopyEntries(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyEntries");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformation *temp0 = nullptr;
  vtkInformationKeyVectorKey *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformation") &&
      ap.GetVTKObject(temp1, "vtkInformationKeyVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->CopyEntries(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::CopyEntries(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_Has_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Has_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Has");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Has(temp0) :
      op->vtkInformation::Has(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Has_Methods[] = {
  {"Has", PyvtkInformation_Has_s1, METH_VARARGS,
   "@V *vtkInformationKey"},
  {"Has", PyvtkInformation_Has_s2, METH_VARARGS,
   "@V *vtkInformationRequestKey"},
  {"Has", PyvtkInformation_Has_s3, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {"Has", PyvtkInformation_Has_s4, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {"Has", PyvtkInformation_Has_s5, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {"Has", PyvtkInformation_Has_s6, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {"Has", PyvtkInformation_Has_s7, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {"Has", PyvtkInformation_Has_s8, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {"Has", PyvtkInformation_Has_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {"Has", PyvtkInformation_Has_s10, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {"Has", PyvtkInformation_Has_s11, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {"Has", PyvtkInformation_Has_s12, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {"Has", PyvtkInformation_Has_s13, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {"Has", PyvtkInformation_Has_s14, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {"Has", PyvtkInformation_Has_s15, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {"Has", PyvtkInformation_Has_s16, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {"Has", PyvtkInformation_Has_s17, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {"Has", PyvtkInformation_Has_s18, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {"Has", PyvtkInformation_Has_s19, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Has(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Has_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Has");
  return nullptr;
}


static PyObject *
PyvtkInformation_Remove_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Remove(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Remove_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Remove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->Remove(temp0);
    }
    else
    {
      op->vtkInformation::Remove(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Remove_Methods[] = {
  {"Remove", PyvtkInformation_Remove_s1, METH_VARARGS,
   "@V *vtkInformationKey"},
  {"Remove", PyvtkInformation_Remove_s2, METH_VARARGS,
   "@V *vtkInformationRequestKey"},
  {"Remove", PyvtkInformation_Remove_s3, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {"Remove", PyvtkInformation_Remove_s4, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {"Remove", PyvtkInformation_Remove_s5, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {"Remove", PyvtkInformation_Remove_s6, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {"Remove", PyvtkInformation_Remove_s7, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {"Remove", PyvtkInformation_Remove_s8, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {"Remove", PyvtkInformation_Remove_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {"Remove", PyvtkInformation_Remove_s10, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {"Remove", PyvtkInformation_Remove_s11, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {"Remove", PyvtkInformation_Remove_s12, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {"Remove", PyvtkInformation_Remove_s13, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {"Remove", PyvtkInformation_Remove_s14, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {"Remove", PyvtkInformation_Remove_s15, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {"Remove", PyvtkInformation_Remove_s16, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {"Remove", PyvtkInformation_Remove_s17, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {"Remove", PyvtkInformation_Remove_s18, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {"Remove", PyvtkInformation_Remove_s19, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {"Remove", PyvtkInformation_Remove_s20, METH_VARARGS,
   "@VV *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {"Remove", PyvtkInformation_Remove_s21, METH_VARARGS,
   "@Vi *vtkInformationObjectBaseVectorKey"},
  {"Remove", PyvtkInformation_Remove_s22, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Remove(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Remove_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Remove");
  return nullptr;
}


static PyObject *
PyvtkInformation_Set_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0);
    }
    else
    {
      op->vtkInformation::Set(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkInformation_Set_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(size1);
  int *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  std::string temp1;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  unsigned long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  double temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1, *temp2, *temp3);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);

  return result;
}

static PyObject *
PyvtkInformation_Set_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  vtkVariant *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVariant *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  vtkVariant *temp3 = nullptr;
  PyObject *pobj3 = nullptr;
  vtkVariant *temp4 = nullptr;
  PyObject *pobj4 = nullptr;
  vtkVariant *temp5 = nullptr;
  PyObject *pobj5 = nullptr;
  vtkVariant *temp6 = nullptr;
  PyObject *pobj6 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVariant") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVariant") &&
      ap.GetSpecialObject(temp3, pobj3, "vtkVariant") &&
      ap.GetSpecialObject(temp4, pobj4, "vtkVariant") &&
      ap.GetSpecialObject(temp5, pobj5, "vtkVariant") &&
      ap.GetSpecialObject(temp6, pobj6, "vtkVariant"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
    }
    else
    {
      op->vtkInformation::Set(temp0, *temp1, *temp2, *temp3, *temp4, *temp5, *temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);
  Py_XDECREF(pobj3);
  Py_XDECREF(pobj4);
  Py_XDECREF(pobj5);
  Py_XDECREF(pobj6);

  return result;
}

static PyObject *
PyvtkInformation_Set_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  std::string temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey") &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  vtkInformationVector *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationVector"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  vtkObjectBase *temp1 = nullptr;
  int temp2 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      ap.GetVTKObject(temp1, "vtkObjectBase") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Set_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Set");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  vtkDataObject *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey") &&
      ap.GetVTKObject(temp1, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->Set(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Set(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Set_Methods[] = {
  {"Set", PyvtkInformation_Set_s2, METH_VARARGS,
   "@Vi *vtkInformationIntegerKey"},
  {"Set", PyvtkInformation_Set_s3, METH_VARARGS,
   "@Vk *vtkInformationIdTypeKey"},
  {"Set", PyvtkInformation_Set_s4, METH_VARARGS,
   "@Vd *vtkInformationDoubleKey"},
  {"Set", PyvtkInformation_Set_s5, METH_VARARGS,
   "@VW *vtkInformationVariantKey vtkVariant"},
  {"Set", PyvtkInformation_Set_s6, METH_VARARGS,
   "@VPi *vtkInformationIntegerVectorKey *i"},
  {"Set", PyvtkInformation_Set_s7, METH_VARARGS,
   "@Viii *vtkInformationIntegerVectorKey"},
  {"Set", PyvtkInformation_Set_s8, METH_VARARGS,
   "@Viiiiii *vtkInformationIntegerVectorKey"},
  {"Set", PyvtkInformation_Set_s9, METH_VARARGS,
   "@Vs|i *vtkInformationStringVectorKey"},
  {"Set", PyvtkInformation_Set_s10, METH_VARARGS,
   "@VPi *vtkInformationIntegerPointerKey *i"},
  {"Set", PyvtkInformation_Set_s11, METH_VARARGS,
   "@VL *vtkInformationUnsignedLongKey"},
  {"Set", PyvtkInformation_Set_s12, METH_VARARGS,
   "@VPi *vtkInformationDoubleVectorKey *d"},
  {"Set", PyvtkInformation_Set_s13, METH_VARARGS,
   "@Vddd *vtkInformationDoubleVectorKey"},
  {"Set", PyvtkInformation_Set_s14, METH_VARARGS,
   "@Vdddddd *vtkInformationDoubleVectorKey"},
  {"Set", PyvtkInformation_Set_s15, METH_VARARGS,
   "@VWWW *vtkInformationVariantVectorKey vtkVariant vtkVariant vtkVariant"},
  {"Set", PyvtkInformation_Set_s16, METH_VARARGS,
   "@VWWWWWW *vtkInformationVariantVectorKey vtkVariant vtkVariant vtkVariant vtkVariant vtkVariant vtkVariant"},
  {"Set", PyvtkInformation_Set_s17, METH_VARARGS,
   "@Vs *vtkInformationStringKey"},
  {"Set", PyvtkInformation_Set_s18, METH_VARARGS,
   "@VV *vtkInformationInformationKey *vtkInformation"},
  {"Set", PyvtkInformation_Set_s19, METH_VARARGS,
   "@VV *vtkInformationInformationVectorKey *vtkInformationVector"},
  {"Set", PyvtkInformation_Set_s20, METH_VARARGS,
   "@VV *vtkInformationObjectBaseKey *vtkObjectBase"},
  {"Set", PyvtkInformation_Set_s21, METH_VARARGS,
   "@VV|i *vtkInformationObjectBaseVectorKey *vtkObjectBase"},
  {"Set", PyvtkInformation_Set_s22, METH_VARARGS,
   "@VV *vtkInformationDataObjectKey *vtkDataObject"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Set(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Set_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInformation_Set_s1(self, args);
    case 2:
    case 3:
    case 4:
    case 7:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Set");
  return nullptr;
}


static PyObject *
PyvtkInformation_Get_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIdTypeKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIdTypeKey"))
  {
    long long tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    double tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0) :
      &op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    size_t sizer = op->Length(temp0);
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<int> store1(2*size1);
  int *temp1 = store1.Data();
  int *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    size_t sizer = op->Length(temp0);
    double *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s13(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s14(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->Get(temp0, temp1);
    }
    else
    {
      op->vtkInformation::Get(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s15(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey") &&
      ap.GetValue(temp1))
  {
    const vtkVariant *tempr = (ap.IsBound() ?
      &op->Get(temp0, temp1) :
      &op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkVariant");
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s16(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetValue(temp1))
  {
    vtkInformationKey *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s17(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    const char *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s18(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s19(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    vtkInformationVector *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s20(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseKey"))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s21(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkObjectBase *tempr = (ap.IsBound() ?
      op->Get(temp0, temp1) :
      op->vtkInformation::Get(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Get_s22(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Get");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->Get(temp0) :
      op->vtkInformation::Get(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Get_Methods[] = {
  {"Get", PyvtkInformation_Get_s1, METH_VARARGS,
   "@V *vtkInformationIntegerKey"},
  {"Get", PyvtkInformation_Get_s2, METH_VARARGS,
   "@V *vtkInformationIdTypeKey"},
  {"Get", PyvtkInformation_Get_s3, METH_VARARGS,
   "@V *vtkInformationDoubleKey"},
  {"Get", PyvtkInformation_Get_s4, METH_VARARGS,
   "@V *vtkInformationVariantKey"},
  {"Get", PyvtkInformation_Get_s5, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {"Get", PyvtkInformation_Get_s6, METH_VARARGS,
   "@Vi *vtkInformationIntegerVectorKey"},
  {"Get", PyvtkInformation_Get_s7, METH_VARARGS,
   "@VP *vtkInformationIntegerVectorKey *i"},
  {"Get", PyvtkInformation_Get_s8, METH_VARARGS,
   "@V|i *vtkInformationStringVectorKey"},
  {"Get", PyvtkInformation_Get_s9, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {"Get", PyvtkInformation_Get_s10, METH_VARARGS,
   "@VP *vtkInformationIntegerPointerKey *i"},
  {"Get", PyvtkInformation_Get_s11, METH_VARARGS,
   "@V *vtkInformationUnsignedLongKey"},
  {"Get", PyvtkInformation_Get_s12, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {"Get", PyvtkInformation_Get_s13, METH_VARARGS,
   "@Vi *vtkInformationDoubleVectorKey"},
  {"Get", PyvtkInformation_Get_s14, METH_VARARGS,
   "@VP *vtkInformationDoubleVectorKey *d"},
  {"Get", PyvtkInformation_Get_s15, METH_VARARGS,
   "@Vi *vtkInformationVariantVectorKey"},
  {"Get", PyvtkInformation_Get_s16, METH_VARARGS,
   "@Vi *vtkInformationKeyVectorKey"},
  {"Get", PyvtkInformation_Get_s17, METH_VARARGS,
   "@V *vtkInformationStringKey"},
  {"Get", PyvtkInformation_Get_s18, METH_VARARGS,
   "@V *vtkInformationInformationKey"},
  {"Get", PyvtkInformation_Get_s19, METH_VARARGS,
   "@V *vtkInformationInformationVectorKey"},
  {"Get", PyvtkInformation_Get_s20, METH_VARARGS,
   "@V *vtkInformationObjectBaseKey"},
  {"Get", PyvtkInformation_Get_s21, METH_VARARGS,
   "@V|i *vtkInformationObjectBaseVectorKey"},
  {"Get", PyvtkInformation_Get_s22, METH_VARARGS,
   "@V *vtkInformationDataObjectKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Get(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Get_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Get");
  return nullptr;
}


static PyObject *
PyvtkInformation_Length_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationIntegerPointerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerPointerKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_Length_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Length");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationObjectBaseVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationObjectBaseVectorKey"))
  {
    int tempr = (ap.IsBound() ?
      op->Length(temp0) :
      op->vtkInformation::Length(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Length_Methods[] = {
  {"Length", PyvtkInformation_Length_s1, METH_VARARGS,
   "@V *vtkInformationIntegerVectorKey"},
  {"Length", PyvtkInformation_Length_s2, METH_VARARGS,
   "@V *vtkInformationStringVectorKey"},
  {"Length", PyvtkInformation_Length_s3, METH_VARARGS,
   "@V *vtkInformationIntegerPointerKey"},
  {"Length", PyvtkInformation_Length_s4, METH_VARARGS,
   "@V *vtkInformationDoubleVectorKey"},
  {"Length", PyvtkInformation_Length_s5, METH_VARARGS,
   "@V *vtkInformationVariantVectorKey"},
  {"Length", PyvtkInformation_Length_s6, METH_VARARGS,
   "@V *vtkInformationKeyVectorKey"},
  {"Length", PyvtkInformation_Length_s7, METH_VARARGS,
   "@V *vtkInformationObjectBaseVectorKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_Length(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_Length_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Length");
  return nullptr;
}


static PyObject *
PyvtkInformation_AppendUnique_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDataObjectKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDataObjectKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationDoubleVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationDoubleVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s6(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationInformationVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationInformationVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s7(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s8(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationIntegerVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationIntegerVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s9(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s10(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationStringVectorKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationStringVectorKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s11(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationObjectBaseKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationObjectBaseKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_AppendUnique_s12(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendUnique");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationKeyVectorKey *temp0 = nullptr;
  vtkInformationUnsignedLongKey *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkInformationKeyVectorKey") &&
      ap.GetVTKObject(temp1, "vtkInformationUnsignedLongKey"))
  {
    if (ap.IsBound())
    {
      op->AppendUnique(temp0, temp1);
    }
    else
    {
      op->vtkInformation::AppendUnique(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_AppendUnique_Methods[] = {
  {"AppendUnique", PyvtkInformation_AppendUnique_s1, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s2, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDataObjectKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s3, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s4, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationDoubleVectorKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s5, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s6, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationInformationVectorKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s7, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s8, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationIntegerVectorKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s9, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s10, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationStringVectorKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s11, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationObjectBaseKey"},
  {"AppendUnique", PyvtkInformation_AppendUnique_s12, METH_VARARGS,
   "@VV *vtkInformationKeyVectorKey *vtkInformationUnsignedLongKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_AppendUnique(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_AppendUnique_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AppendUnique");
  return nullptr;
}


static PyObject *
PyvtkInformation_GetKey_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDataObjectKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDataObjectKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationDoubleVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationDoubleVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationInformationVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationInformationVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationIntegerVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationIntegerVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s8(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s9(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s10(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationStringVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationStringVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s11(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s12(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationUnsignedLongKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationUnsignedLongKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s13(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkInformation_GetKey_s14(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetKey");

  vtkInformationVariantVectorKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationVariantVectorKey"))
  {
    vtkInformationKey *tempr = vtkInformation::GetKey(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_GetKey_Methods[] = {
  {"GetKey", PyvtkInformation_GetKey_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDataObjectKey"},
  {"GetKey", PyvtkInformation_GetKey_s2, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDoubleKey"},
  {"GetKey", PyvtkInformation_GetKey_s3, METH_VARARGS | METH_STATIC,
   "V *vtkInformationDoubleVectorKey"},
  {"GetKey", PyvtkInformation_GetKey_s4, METH_VARARGS | METH_STATIC,
   "V *vtkInformationInformationKey"},
  {"GetKey", PyvtkInformation_GetKey_s5, METH_VARARGS | METH_STATIC,
   "V *vtkInformationInformationVectorKey"},
  {"GetKey", PyvtkInformation_GetKey_s6, METH_VARARGS | METH_STATIC,
   "V *vtkInformationIntegerKey"},
  {"GetKey", PyvtkInformation_GetKey_s7, METH_VARARGS | METH_STATIC,
   "V *vtkInformationIntegerVectorKey"},
  {"GetKey", PyvtkInformation_GetKey_s8, METH_VARARGS | METH_STATIC,
   "V *vtkInformationRequestKey"},
  {"GetKey", PyvtkInformation_GetKey_s9, METH_VARARGS | METH_STATIC,
   "V *vtkInformationStringKey"},
  {"GetKey", PyvtkInformation_GetKey_s10, METH_VARARGS | METH_STATIC,
   "V *vtkInformationStringVectorKey"},
  {"GetKey", PyvtkInformation_GetKey_s11, METH_VARARGS | METH_STATIC,
   "V *vtkInformationKey"},
  {"GetKey", PyvtkInformation_GetKey_s12, METH_VARARGS | METH_STATIC,
   "V *vtkInformationUnsignedLongKey"},
  {"GetKey", PyvtkInformation_GetKey_s13, METH_VARARGS | METH_STATIC,
   "V *vtkInformationVariantKey"},
  {"GetKey", PyvtkInformation_GetKey_s14, METH_VARARGS | METH_STATIC,
   "V *vtkInformationVariantVectorKey"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkInformation_GetKey(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkInformation_GetKey_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetKey");
  return nullptr;
}


static PyObject *
PyvtkInformation_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkInformation::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_SetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  vtkInformationRequestKey *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformationRequestKey"))
  {
    if (ap.IsBound())
    {
      op->SetRequest(temp0);
    }
    else
    {
      op->vtkInformation::SetRequest(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInformation_GetRequest(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRequest");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInformation *op = static_cast<vtkInformation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformationRequestKey *tempr = (ap.IsBound() ?
      op->GetRequest() :
      op->vtkInformation::GetRequest());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInformation_Methods[] = {
  {"IsTypeOf", PyvtkInformation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInformation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInformation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInformation\nC++: static vtkInformation *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInformation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInformation\nC++: vtkInformation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInformation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInformation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Modified", PyvtkInformation_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\nModified(self, key:vtkInformationKey) -> None\nC++: void Modified(vtkInformationKey *key)\n\nModified signature with no arguments that calls Modified on\nvtkObject superclass.\n"},
  {"Clear", PyvtkInformation_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\nClear all information entries.\n"},
  {"GetNumberOfKeys", PyvtkInformation_GetNumberOfKeys, METH_VARARGS,
   "GetNumberOfKeys(self) -> int\nC++: int GetNumberOfKeys()\n\nReturn the number of keys in this information object (as would be\nreturned by iterating over the keys).\n"},
  {"Copy", PyvtkInformation_Copy, METH_VARARGS,
   "Copy(self, from_:vtkInformation, deep:int=0) -> None\nC++: void Copy(vtkInformation *from, vtkTypeBool deep=0)\n\nCopy all information entries from the given vtkInformation\ninstance.  Any previously existing entries are removed.  If\ndeep==1, a deep copy of the information structure is performed\n(new instances of any contained vtkInformation and\nvtkInformationVector objects are created).\n"},
  {"Append", PyvtkInformation_Append, METH_VARARGS,
   "Append(self, from_:vtkInformation, deep:int=0) -> None\nC++: void Append(vtkInformation *from, vtkTypeBool deep=0)\nAppend(self, key:vtkInformationIntegerVectorKey, value:int)\n    -> None\nC++: void Append(vtkInformationIntegerVectorKey *key, int value)\nAppend(self, key:vtkInformationStringVectorKey, value:str) -> None\nC++: void Append(vtkInformationStringVectorKey *key,\n    const std::string &value)\nAppend(self, key:vtkInformationDoubleVectorKey, value:float)\n    -> None\nC++: void Append(vtkInformationDoubleVectorKey *key, double value)\nAppend(self, key:vtkInformationVariantVectorKey, value:vtkVariant)\n     -> None\nC++: void Append(vtkInformationVariantVectorKey *key,\n    const vtkVariant &value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDataObjectKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDoubleKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDoubleVectorKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationInformationKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationInformationVectorKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nAppend(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationIntegerKey) -> None\nC++: void Append(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\n\nAppend all inf ...\n [Truncated]\n"},
  {"CopyEntry", PyvtkInformation_CopyEntry, METH_VARARGS,
   "CopyEntry(self, from_:vtkInformation, key:vtkInformationKey,\n    deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from, vtkInformationKey *key,\n    vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationDataObjectKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDataObjectKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationDoubleVectorKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationDoubleVectorKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationVariantKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationVariantVectorKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationVariantVectorKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationInformationKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationInformationVectorKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationInformationVectorKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationIntegerKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationIntegerVectorKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationIntegerVectorKey *key, vtkTypeBool deep=0)\nCopyEntry(self, from_:vtkInformation,\n    key:vtkInformationObjectBaseVectorKey, deep:int=0) -> None\nC++: void CopyEntry(vtkInformation *from,\n    vtkInformationObjectBaseVectorKey *key, vtkTypeBool deep=0)\n\nCopy the key/value  ...\n [Truncated]\n"},
  {"CopyEntries", PyvtkInformation_CopyEntries, METH_VARARGS,
   "CopyEntries(self, from_:vtkInformation,\n    key:vtkInformationKeyVectorKey, deep:int=0) -> None\nC++: void CopyEntries(vtkInformation *from,\n    vtkInformationKeyVectorKey *key, vtkTypeBool deep=0)\n\nUse the given key to lookup a list of other keys in the given\ninformation object.  The key/value pairs associated with these\nother keys will be copied.  If deep==1, a deep copy of the\ninformation structure is performed.\n"},
  {"Has", PyvtkInformation_Has, METH_VARARGS,
   "Has(self, key:vtkInformationKey) -> int\nC++: int Has(vtkInformationKey *key)\nHas(self, key:vtkInformationRequestKey) -> int\nC++: int Has(vtkInformationRequestKey *key)\nHas(self, key:vtkInformationIntegerKey) -> int\nC++: int Has(vtkInformationIntegerKey *key)\nHas(self, key:vtkInformationIdTypeKey) -> int\nC++: int Has(vtkInformationIdTypeKey *key)\nHas(self, key:vtkInformationDoubleKey) -> int\nC++: int Has(vtkInformationDoubleKey *key)\nHas(self, key:vtkInformationVariantKey) -> int\nC++: int Has(vtkInformationVariantKey *key)\nHas(self, key:vtkInformationIntegerVectorKey) -> int\nC++: int Has(vtkInformationIntegerVectorKey *key)\nHas(self, key:vtkInformationStringVectorKey) -> int\nC++: int Has(vtkInformationStringVectorKey *key)\nHas(self, key:vtkInformationIntegerPointerKey) -> int\nC++: int Has(vtkInformationIntegerPointerKey *key)\nHas(self, key:vtkInformationUnsignedLongKey) -> int\nC++: int Has(vtkInformationUnsignedLongKey *key)\nHas(self, key:vtkInformationDoubleVectorKey) -> int\nC++: int Has(vtkInformationDoubleVectorKey *key)\nHas(self, key:vtkInformationVariantVectorKey) -> int\nC++: int Has(vtkInformationVariantVectorKey *key)\nHas(self, key:vtkInformationKeyVectorKey) -> int\nC++: int Has(vtkInformationKeyVectorKey *key)\nHas(self, key:vtkInformationStringKey) -> int\nC++: int Has(vtkInformationStringKey *key)\nHas(self, key:vtkInformationInformationKey) -> int\nC++: int Has(vtkInformationInformationKey *key)\nHas(self, key:vtkInformationInformationVectorKey) -> int\nC++: int Has(vtkInformationInformationVectorKey *key)\nHas(self, key:vtkInformationObjectBaseKey) -> int\nC++: int Has(vtkInformationObjectBaseKey *key)\nHas(self, key:vtkInformationObjectBaseVectorKey) -> int\nC++: int Has(vtkInformationObjectBaseVectorKey *key)\nHas(self, key:vtkInformationDataObjectKey) -> int\nC++: int Has(vtkInformationDataObjectKey *key)\n\nCheck whether the given key appears in this information object.\n"},
  {"Remove", PyvtkInformation_Remove, METH_VARARGS,
   "Remove(self, key:vtkInformationKey) -> None\nC++: void Remove(vtkInformationKey *key)\nRemove(self, key:vtkInformationRequestKey) -> None\nC++: void Remove(vtkInformationRequestKey *key)\nRemove(self, key:vtkInformationIntegerKey) -> None\nC++: void Remove(vtkInformationIntegerKey *key)\nRemove(self, key:vtkInformationIdTypeKey) -> None\nC++: void Remove(vtkInformationIdTypeKey *key)\nRemove(self, key:vtkInformationDoubleKey) -> None\nC++: void Remove(vtkInformationDoubleKey *key)\nRemove(self, key:vtkInformationVariantKey) -> None\nC++: void Remove(vtkInformationVariantKey *key)\nRemove(self, key:vtkInformationIntegerVectorKey) -> None\nC++: void Remove(vtkInformationIntegerVectorKey *key)\nRemove(self, key:vtkInformationStringVectorKey) -> None\nC++: void Remove(vtkInformationStringVectorKey *key)\nRemove(self, key:vtkInformationIntegerPointerKey) -> None\nC++: void Remove(vtkInformationIntegerPointerKey *key)\nRemove(self, key:vtkInformationUnsignedLongKey) -> None\nC++: void Remove(vtkInformationUnsignedLongKey *key)\nRemove(self, key:vtkInformationDoubleVectorKey) -> None\nC++: void Remove(vtkInformationDoubleVectorKey *key)\nRemove(self, key:vtkInformationVariantVectorKey) -> None\nC++: void Remove(vtkInformationVariantVectorKey *key)\nRemove(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationKey) -> None\nC++: void Remove(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nRemove(self, key:vtkInformationKeyVectorKey) -> None\nC++: void Remove(vtkInformationKeyVectorKey *key)\nRemove(self, key:vtkInformationStringKey) -> None\nC++: void Remove(vtkInformationStringKey *key)\nRemove(self, key:vtkInformationInformationKey) -> None\nC++: void Remove(vtkInformationInformationKey *key)\nRemove(self, key:vtkInformationInformationVectorKey) -> None\nC++: void Remove(vtkInformationInformationVectorKey *key)\nRemove(self, key:vtkInformationObjectBaseKey) -> None\nC++: void Remove(vtkInformationObjectBaseKey *key)\n\nRemove the given key and its data from this informat ...\n [Truncated]\n"},
  {"Set", PyvtkInformation_Set, METH_VARARGS,
   "Set(self, key:vtkInformationRequestKey) -> None\nC++: void Set(vtkInformationRequestKey *key)\nSet(self, key:vtkInformationIntegerKey, value:int) -> None\nC++: void Set(vtkInformationIntegerKey *key, int value)\nSet(self, key:vtkInformationIdTypeKey, value:int) -> None\nC++: void Set(vtkInformationIdTypeKey *key, vtkIdType value)\nSet(self, key:vtkInformationDoubleKey, value:float) -> None\nC++: void Set(vtkInformationDoubleKey *key, double value)\nSet(self, key:vtkInformationVariantKey, value:vtkVariant) -> None\nC++: void Set(vtkInformationVariantKey *key,\n    const vtkVariant &value)\nSet(self, key:vtkInformationIntegerVectorKey, value:(int, ...),\n    length:int) -> None\nC++: void Set(vtkInformationIntegerVectorKey *key,\n    const int *value, int length)\nSet(self, key:vtkInformationIntegerVectorKey, value1:int,\n    value2:int, value3:int) -> None\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3)\nSet(self, key:vtkInformationIntegerVectorKey, value1:int,\n    value2:int, value3:int, value4:int, value5:int, value6:int)\n    -> None\nC++: void Set(vtkInformationIntegerVectorKey *key, int value1,\n    int value2, int value3, int value4, int value5, int value6)\nSet(self, key:vtkInformationStringVectorKey, value:str, idx:int=0)\n     -> None\nC++: void Set(vtkInformationStringVectorKey *key,\n    const std::string &value, int idx=0)\nSet(self, key:vtkInformationIntegerPointerKey, value:[int, ...],\n    length:int) -> None\nC++: void Set(vtkInformationIntegerPointerKey *key, int *value,\n    int length)\nSet(self, key:vtkInformationUnsignedLongKey, value:int) -> None\nC++: void Set(vtkInformationUnsignedLongKey *key,\n    unsigned long value)\nSet(self, key:vtkInformationDoubleVectorKey, value:(float, ...),\n    length:int) -> None\nC++: void Set(vtkInformationDoubleVectorKey *key,\n    const double *value, int length)\n\nGet/Set a request-valued entry.\n"},
  {"Get", PyvtkInformation_Get, METH_VARARGS,
   "Get(self, key:vtkInformationIntegerKey) -> int\nC++: int Get(vtkInformationIntegerKey *key)\nGet(self, key:vtkInformationIdTypeKey) -> int\nC++: vtkIdType Get(vtkInformationIdTypeKey *key)\nGet(self, key:vtkInformationDoubleKey) -> float\nC++: double Get(vtkInformationDoubleKey *key)\nGet(self, key:vtkInformationVariantKey) -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantKey *key)\nGet(self, key:vtkInformationIntegerVectorKey) -> (int, ...)\nC++: int *Get(vtkInformationIntegerVectorKey *key)\nGet(self, key:vtkInformationIntegerVectorKey, idx:int) -> int\nC++: int Get(vtkInformationIntegerVectorKey *key, int idx)\nGet(self, key:vtkInformationIntegerVectorKey, value:[int, ...])\n    -> None\nC++: void Get(vtkInformationIntegerVectorKey *key, int *value)\nGet(self, key:vtkInformationStringVectorKey, idx:int=0) -> str\nC++: const char *Get(vtkInformationStringVectorKey *key,\n    int idx=0)\nGet(self, key:vtkInformationIntegerPointerKey) -> Pointer\nC++: int *Get(vtkInformationIntegerPointerKey *key)\nGet(self, key:vtkInformationIntegerPointerKey, value:[int, ...])\n    -> None\nC++: void Get(vtkInformationIntegerPointerKey *key, int *value)\nGet(self, key:vtkInformationUnsignedLongKey) -> int\nC++: unsigned long Get(vtkInformationUnsignedLongKey *key)\nGet(self, key:vtkInformationDoubleVectorKey) -> (float, ...)\nC++: double *Get(vtkInformationDoubleVectorKey *key)\nGet(self, key:vtkInformationDoubleVectorKey, idx:int) -> float\nC++: double Get(vtkInformationDoubleVectorKey *key, int idx)\nGet(self, key:vtkInformationDoubleVectorKey, value:[float, ...])\n    -> None\nC++: void Get(vtkInformationDoubleVectorKey *key, double *value)\nGet(self, key:vtkInformationVariantVectorKey, idx:int)\n    -> vtkVariant\nC++: const vtkVariant &Get(vtkInformationVariantVectorKey *key,\n    int idx)\nGet(self, key:vtkInformationKeyVectorKey, idx:int)\n    -> vtkInformationKey\nC++: vtkInformationKey *Get(vtkInformationKeyVectorKey *key,\n    int idx)\n\n"},
  {"Length", PyvtkInformation_Length, METH_VARARGS,
   "Length(self, key:vtkInformationIntegerVectorKey) -> int\nC++: int Length(vtkInformationIntegerVectorKey *key)\nLength(self, key:vtkInformationStringVectorKey) -> int\nC++: int Length(vtkInformationStringVectorKey *key)\nLength(self, key:vtkInformationIntegerPointerKey) -> int\nC++: int Length(vtkInformationIntegerPointerKey *key)\nLength(self, key:vtkInformationDoubleVectorKey) -> int\nC++: int Length(vtkInformationDoubleVectorKey *key)\nLength(self, key:vtkInformationVariantVectorKey) -> int\nC++: int Length(vtkInformationVariantVectorKey *key)\nLength(self, key:vtkInformationKeyVectorKey) -> int\nC++: int Length(vtkInformationKeyVectorKey *key)\nLength(self, key:vtkInformationObjectBaseVectorKey) -> int\nC++: int Length(vtkInformationObjectBaseVectorKey *key)\n\n"},
  {"AppendUnique", PyvtkInformation_AppendUnique, METH_VARARGS,
   "AppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDataObjectKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDataObjectKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDoubleKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationDoubleVectorKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationDoubleVectorKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationInformationKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationInformationVectorKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationInformationVectorKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationIntegerKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationIntegerVectorKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationIntegerVectorKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationStringKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringKey *value)\nAppendUnique(self, key:vtkInformationKeyVectorKey,\n    value:vtkInformationStringVectorKey) -> None\nC++: void AppendUnique(vtkInformationKeyVectorKey *key,\n    vtkInformationStringVectorKey *value)\n\n"},
  {"GetKey", PyvtkInformation_GetKey, METH_VARARGS,
   "GetKey(key:vtkInformationDataObjectKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDataObjectKey *key)\nGetKey(key:vtkInformationDoubleKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleKey *key)\nGetKey(key:vtkInformationDoubleVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationDoubleVectorKey *key)\nGetKey(key:vtkInformationInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationKey *key)\nGetKey(key:vtkInformationInformationVectorKey)\n    -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationInformationVectorKey *key)\nGetKey(key:vtkInformationIntegerKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerKey *key)\nGetKey(key:vtkInformationIntegerVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationIntegerVectorKey *key)\nGetKey(key:vtkInformationRequestKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationRequestKey *key)\nGetKey(key:vtkInformationStringKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringKey *key)\nGetKey(key:vtkInformationStringVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationStringVectorKey *key)\nGetKey(key:vtkInformationKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(vtkInformationKey *key)\nGetKey(key:vtkInformationUnsignedLongKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationUnsignedLongKey *key)\nGetKey(key:vtkInformationVariantKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantKey *key)\nGetKey(key:vtkInformationVariantVectorKey) -> vtkInformationKey\nC++: static vtkInformationKey *GetKey(\n    vtkInformationVariantVectorKey *key)\n\nUpcast the given key instance.\n"},
  {"UsesGarbageCollector", PyvtkInformation_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nInitiate garbage collection when a reference is removed.\n"},
  {"SetRequest", PyvtkInformation_SetRequest, METH_VARARGS,
   "SetRequest(self, request:vtkInformationRequestKey) -> None\nC++: void SetRequest(vtkInformationRequestKey *request)\n\nGet/Set the Request ivar\n"},
  {"GetRequest", PyvtkInformation_GetRequest, METH_VARARGS,
   "GetRequest(self) -> vtkInformationRequestKey\nC++: vtkInformationRequestKey *GetRequest()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInformation_Doc =
  "vtkInformation - Store vtkAlgorithm input/output information.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkInformation represents information and/or data for one input or\n"
  "one output of a vtkAlgorithm.  It maps from keys to values of several\n"
  "data types.  Instances of this class are collected in\n"
  "vtkInformationVector instances and passed to\n"
  "vtkAlgorithm::ProcessRequest calls.  The information and data\n"
  "referenced by the instance on a particular input or output define the\n"
  "request made to the vtkAlgorithm instance.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkInformation", // tp_name
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
  PyvtkInformation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInformation_StaticNew()
{
  return vtkInformation::New();
}

PyObject *PyvtkInformation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInformation_Type, PyvtkInformation_Methods,
    "vtkInformation",
 &PyvtkInformation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInformation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInformation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInformation", o) != 0)
  {
    Py_DECREF(o);
  }

}

