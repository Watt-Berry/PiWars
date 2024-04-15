// python wrapper for vtkSynchronizedTemplates3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSynchronizedTemplates3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSynchronizedTemplates3D(PyObject *dict); }
extern "C" { PyObject *PyvtkSynchronizedTemplates3D_ClassNew(); }


static PyObject *
PyvtkSynchronizedTemplates3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSynchronizedTemplates3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSynchronizedTemplates3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSynchronizedTemplates3D *tempr = vtkSynchronizedTemplates3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSynchronizedTemplates3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSynchronizedTemplates3D::NewInstance());

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
PyvtkSynchronizedTemplates3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSynchronizedTemplates3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSynchronizedTemplates3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSynchronizedTemplates3D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeNormals(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetComputeNormals(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetComputeNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeNormals() :
      op->vtkSynchronizedTemplates3D::GetComputeNormals());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeNormalsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOn();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeNormalsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeNormalsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeNormalsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeNormalsOff();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeNormalsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeGradients(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetComputeGradients(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetComputeGradients(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeGradients");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeGradients() :
      op->vtkSynchronizedTemplates3D::GetComputeGradients());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeGradientsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOn();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeGradientsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeGradientsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeGradientsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeGradientsOff();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeGradientsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkSynchronizedTemplates3D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateTriangles(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetGenerateTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetGenerateTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateTriangles() :
      op->vtkSynchronizedTemplates3D::GetGenerateTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GenerateTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOn();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::GenerateTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GenerateTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateTrianglesOff();
    }
    else
    {
      op->vtkSynchronizedTemplates3D::GenerateTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkSynchronizedTemplates3D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkSynchronizedTemplates3D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSynchronizedTemplates3D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::GetValues(temp0);
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
PyvtkSynchronizedTemplates3D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkSynchronizedTemplates3D_GetValues_s1(self, args);
    case 1:
      return PyvtkSynchronizedTemplates3D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkSynchronizedTemplates3D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::GenerateValues(temp0, temp1);
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
PyvtkSynchronizedTemplates3D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
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
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSynchronizedTemplates3D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSynchronizedTemplates3D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkSynchronizedTemplates3D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkSynchronizedTemplates3D_ThreadedExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThreadedExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  vtkImageData *temp0 = nullptr;
  vtkInformation *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  vtkDataArray *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetVTKObject(temp1, "vtkInformation") &&
      ap.GetVTKObject(temp2, "vtkInformation") &&
      ap.GetVTKObject(temp3, "vtkDataArray"))
  {
    if (ap.IsBound())
    {
      op->ThreadedExecute(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::ThreadedExecute(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  unsigned long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputMemoryLimit(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetInputMemoryLimit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetInputMemoryLimit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputMemoryLimit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetInputMemoryLimit() :
      op->vtkSynchronizedTemplates3D::GetInputMemoryLimit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkSynchronizedTemplates3D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSynchronizedTemplates3D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSynchronizedTemplates3D *op = static_cast<vtkSynchronizedTemplates3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSynchronizedTemplates3D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSynchronizedTemplates3D_Methods[] = {
  {"IsTypeOf", PyvtkSynchronizedTemplates3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSynchronizedTemplates3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSynchronizedTemplates3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSynchronizedTemplates3D\nC++: static vtkSynchronizedTemplates3D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSynchronizedTemplates3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSynchronizedTemplates3D\nC++: vtkSynchronizedTemplates3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSynchronizedTemplates3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSynchronizedTemplates3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkSynchronizedTemplates3D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nBecause we delegate to vtkContourValues\n"},
  {"SetComputeNormals", PyvtkSynchronizedTemplates3D_SetComputeNormals, METH_VARARGS,
   "SetComputeNormals(self, _arg:int) -> None\nC++: virtual void SetComputeNormals(vtkTypeBool _arg)\n\nSet/Get the computation of normals. Normal computation is fairly\nexpensive in both time and storage. If the output data will be\nprocessed by filters that modify topology or geometry, it may be\nwise to turn Normals and Gradients off.\n"},
  {"GetComputeNormals", PyvtkSynchronizedTemplates3D_GetComputeNormals, METH_VARARGS,
   "GetComputeNormals(self) -> int\nC++: virtual vtkTypeBool GetComputeNormals()\n\n"},
  {"ComputeNormalsOn", PyvtkSynchronizedTemplates3D_ComputeNormalsOn, METH_VARARGS,
   "ComputeNormalsOn(self) -> None\nC++: virtual void ComputeNormalsOn()\n\n"},
  {"ComputeNormalsOff", PyvtkSynchronizedTemplates3D_ComputeNormalsOff, METH_VARARGS,
   "ComputeNormalsOff(self) -> None\nC++: virtual void ComputeNormalsOff()\n\n"},
  {"SetComputeGradients", PyvtkSynchronizedTemplates3D_SetComputeGradients, METH_VARARGS,
   "SetComputeGradients(self, _arg:int) -> None\nC++: virtual void SetComputeGradients(vtkTypeBool _arg)\n\nSet/Get the computation of gradients. Gradient computation is\nfairly expensive in both time and storage. Note that if\nComputeNormals is on, gradients will have to be calculated, but\nwill not be stored in the output dataset.  If the output data\nwill be processed by filters that modify topology or geometry, it\nmay be wise to turn Normals and Gradients off.\n"},
  {"GetComputeGradients", PyvtkSynchronizedTemplates3D_GetComputeGradients, METH_VARARGS,
   "GetComputeGradients(self) -> int\nC++: virtual vtkTypeBool GetComputeGradients()\n\n"},
  {"ComputeGradientsOn", PyvtkSynchronizedTemplates3D_ComputeGradientsOn, METH_VARARGS,
   "ComputeGradientsOn(self) -> None\nC++: virtual void ComputeGradientsOn()\n\n"},
  {"ComputeGradientsOff", PyvtkSynchronizedTemplates3D_ComputeGradientsOff, METH_VARARGS,
   "ComputeGradientsOff(self) -> None\nC++: virtual void ComputeGradientsOff()\n\n"},
  {"SetComputeScalars", PyvtkSynchronizedTemplates3D_SetComputeScalars, METH_VARARGS,
   "SetComputeScalars(self, _arg:int) -> None\nC++: virtual void SetComputeScalars(vtkTypeBool _arg)\n\nSet/Get the computation of scalars.\n"},
  {"GetComputeScalars", PyvtkSynchronizedTemplates3D_GetComputeScalars, METH_VARARGS,
   "GetComputeScalars(self) -> int\nC++: virtual vtkTypeBool GetComputeScalars()\n\n"},
  {"ComputeScalarsOn", PyvtkSynchronizedTemplates3D_ComputeScalarsOn, METH_VARARGS,
   "ComputeScalarsOn(self) -> None\nC++: virtual void ComputeScalarsOn()\n\n"},
  {"ComputeScalarsOff", PyvtkSynchronizedTemplates3D_ComputeScalarsOff, METH_VARARGS,
   "ComputeScalarsOff(self) -> None\nC++: virtual void ComputeScalarsOff()\n\n"},
  {"SetGenerateTriangles", PyvtkSynchronizedTemplates3D_SetGenerateTriangles, METH_VARARGS,
   "SetGenerateTriangles(self, _arg:int) -> None\nC++: virtual void SetGenerateTriangles(vtkTypeBool _arg)\n\nIf this is enabled (by default), the output will be triangles\notherwise, the output will be the intersection polygons\n"},
  {"GetGenerateTriangles", PyvtkSynchronizedTemplates3D_GetGenerateTriangles, METH_VARARGS,
   "GetGenerateTriangles(self) -> int\nC++: virtual vtkTypeBool GetGenerateTriangles()\n\n"},
  {"GenerateTrianglesOn", PyvtkSynchronizedTemplates3D_GenerateTrianglesOn, METH_VARARGS,
   "GenerateTrianglesOn(self) -> None\nC++: virtual void GenerateTrianglesOn()\n\n"},
  {"GenerateTrianglesOff", PyvtkSynchronizedTemplates3D_GenerateTrianglesOff, METH_VARARGS,
   "GenerateTrianglesOff(self) -> None\nC++: virtual void GenerateTrianglesOff()\n\n"},
  {"SetValue", PyvtkSynchronizedTemplates3D_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkSynchronizedTemplates3D_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkSynchronizedTemplates3D_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkSynchronizedTemplates3D_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkSynchronizedTemplates3D_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkSynchronizedTemplates3D_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"ThreadedExecute", PyvtkSynchronizedTemplates3D_ThreadedExecute, METH_VARARGS,
   "ThreadedExecute(self, data:vtkImageData, inInfo:vtkInformation,\n    outInfo:vtkInformation, inScalars:vtkDataArray) -> None\nC++: void ThreadedExecute(vtkImageData *data,\n    vtkInformation *inInfo, vtkInformation *outInfo,\n    vtkDataArray *inScalars)\n\n"},
  {"SetInputMemoryLimit", PyvtkSynchronizedTemplates3D_SetInputMemoryLimit, METH_VARARGS,
   "SetInputMemoryLimit(self, limit:int) -> None\nC++: void SetInputMemoryLimit(unsigned long limit)\n\nDetermines the chunk size for streaming.  This filter will act\nlike a collector: ask for many input pieces, but generate one\noutput.  Limit is in KBytes\n"},
  {"GetInputMemoryLimit", PyvtkSynchronizedTemplates3D_GetInputMemoryLimit, METH_VARARGS,
   "GetInputMemoryLimit(self) -> int\nC++: unsigned long GetInputMemoryLimit()\n\n"},
  {"SetArrayComponent", PyvtkSynchronizedTemplates3D_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {"GetArrayComponent", PyvtkSynchronizedTemplates3D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSynchronizedTemplates3D_Doc =
  "vtkSynchronizedTemplates3D - generate isosurface from structured\npoints\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkSynchronizedTemplates3D is a 3D implementation of the synchronized\n"
  "template algorithm. Note that vtkContourFilter will automatically use\n"
  "this class when appropriate.\n\n"
  "@warning\n"
  "This filter is specialized to 3D images (aka volumes).\n\n"
  "@sa\n"
  "vtkContourFilter vtkFlyingEdges3D vtkMarchingCubes\n"
  "vtkSynchronizedTemplates2D vtkDiscreteFlyingEdges3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSynchronizedTemplates3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkSynchronizedTemplates3D", // tp_name
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
  PyvtkSynchronizedTemplates3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSynchronizedTemplates3D_StaticNew()
{
  return vtkSynchronizedTemplates3D::New();
}

PyObject *PyvtkSynchronizedTemplates3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSynchronizedTemplates3D_Type, PyvtkSynchronizedTemplates3D_Methods,
    "vtkSynchronizedTemplates3D",
 &PyvtkSynchronizedTemplates3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSynchronizedTemplates3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSynchronizedTemplates3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSynchronizedTemplates3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

