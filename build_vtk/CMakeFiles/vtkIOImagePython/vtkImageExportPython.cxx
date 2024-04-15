// python wrapper for vtkImageExport
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageExport.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageExport(PyObject *dict); }
extern "C" { PyObject *PyvtkImageExport_ClassNew(); }


static PyObject *
PyvtkImageExport_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageExport::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageExport::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageExport *tempr = vtkImageExport::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageExport *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageExport::NewInstance());

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
PyvtkImageExport_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageExport::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageExport::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetDataMemorySize() :
      op->vtkImageExport::GetDataMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataDimensions(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataDimensions(temp0);
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
PyvtkImageExport_GetDataDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataDimensions() :
      op->vtkImageExport::GetDataDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageExport_GetDataDimensions_s1(self, args);
    case 0:
      return PyvtkImageExport_GetDataDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDimensions");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetDataNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataNumberOfScalarComponents() :
      op->vtkImageExport::GetDataNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataScalarType() :
      op->vtkImageExport::GetDataScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataScalarTypeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataScalarTypeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataScalarTypeAsString() :
      op->vtkImageExport::GetDataScalarTypeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetDataExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDataExtent() :
      op->vtkImageExport::GetDataExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<int> store0(2*size0);
  int *temp0 = store0.Data();
  int *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetDataExtent(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataExtent(temp0);
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
PyvtkImageExport_GetDataExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataExtent_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataExtent");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetDataSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataSpacing() :
      op->vtkImageExport::GetDataSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      op->GetDataSpacing(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataSpacing(temp0);
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
PyvtkImageExport_GetDataSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataSpacing_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetDataOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataOrigin() :
      op->vtkImageExport::GetDataOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      op->GetDataOrigin(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataOrigin(temp0);
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
PyvtkImageExport_GetDataOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataOrigin_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetDataDirection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  size_t sizer = 9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDataDirection() :
      op->vtkImageExport::GetDataDirection());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_GetDataDirection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

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
      op->GetDataDirection(temp0);
    }
    else
    {
      op->vtkImageExport::GetDataDirection(temp0);
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
PyvtkImageExport_GetDataDirection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_GetDataDirection_s1(self, args);
    case 1:
      return PyvtkImageExport_GetDataDirection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetDataDirection");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImageExport::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ImageLowerLeftOn();
    }
    else
    {
      op->vtkImageExport::ImageLowerLeftOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_ImageLowerLeftOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ImageLowerLeftOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ImageLowerLeftOff();
    }
    else
    {
      op->vtkImageExport::ImageLowerLeftOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetImageLowerLeft() :
      op->vtkImageExport::GetImageLowerLeft());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SetImageLowerLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetImageLowerLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetImageLowerLeft(temp0);
    }
    else
    {
      op->vtkImageExport::SetImageLowerLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_SetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->SetExportVoidPointer(temp0);
    }
    else
    {
      op->vtkImageExport::SetExportVoidPointer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkImageExport_GetExportVoidPointer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExportVoidPointer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetExportVoidPointer() :
      op->vtkImageExport::GetExportVoidPointer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_Export_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Export();
    }
    else
    {
      op->vtkImageExport::Export();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageExport_Export_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Export");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->Export(temp0);
    }
    else
    {
      op->vtkImageExport::Export(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}

static PyObject *
PyvtkImageExport_Export(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkImageExport_Export_s1(self, args);
    case 1:
      return PyvtkImageExport_Export_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Export");
  return nullptr;
}


static PyObject *
PyvtkImageExport_GetPointerToData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointerToData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetPointerToData() :
      op->vtkImageExport::GetPointerToData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageExport_GetCallbackUserData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCallbackUserData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageExport *op = static_cast<vtkImageExport *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    void  *tempr = (ap.IsBound() ?
      op->GetCallbackUserData() :
      op->vtkImageExport::GetCallbackUserData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageExport_Methods[] = {
  {"IsTypeOf", PyvtkImageExport_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageExport_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageExport_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageExport\nC++: static vtkImageExport *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageExport_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageExport\nC++: vtkImageExport *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageExport_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageExport_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataMemorySize", PyvtkImageExport_GetDataMemorySize, METH_VARARGS,
   "GetDataMemorySize(self) -> int\nC++: vtkIdType GetDataMemorySize()\n\nGet the number of bytes required for the output C array.\n"},
  {"GetDataDimensions", PyvtkImageExport_GetDataDimensions, METH_VARARGS,
   "GetDataDimensions(self, ptr:[int, ...]) -> None\nC++: void GetDataDimensions(int *ptr)\nGetDataDimensions(self) -> (int, int, int)\nC++: int *GetDataDimensions()\n\nGet the (x,y,z) index dimensions of the data.  Please note that C\narrays are indexed in decreasing order, i.e. array[z][y][x].\n"},
  {"GetDataNumberOfScalarComponents", PyvtkImageExport_GetDataNumberOfScalarComponents, METH_VARARGS,
   "GetDataNumberOfScalarComponents(self) -> int\nC++: int GetDataNumberOfScalarComponents()\n\nGet the number of scalar components of the data.  Please note\nthat when you index into a C array, the scalar component index\ncomes last, i.e. array[z][y][x][c].\n"},
  {"GetDataScalarType", PyvtkImageExport_GetDataScalarType, METH_VARARGS,
   "GetDataScalarType(self) -> int\nC++: int GetDataScalarType()\n\nGet the scalar type of the data.  The scalar type of the C array\nmust match the scalar type of the data.\n"},
  {"GetDataScalarTypeAsString", PyvtkImageExport_GetDataScalarTypeAsString, METH_VARARGS,
   "GetDataScalarTypeAsString(self) -> str\nC++: const char *GetDataScalarTypeAsString()\n\n"},
  {"GetDataExtent", PyvtkImageExport_GetDataExtent, METH_VARARGS,
   "GetDataExtent(self) -> (int, int, int, int, int, int)\nC++: int *GetDataExtent()\nGetDataExtent(self, ptr:[int, ...]) -> None\nC++: void GetDataExtent(int *ptr)\n\nGet miscellaneous additional information about the data.\n"},
  {"GetDataSpacing", PyvtkImageExport_GetDataSpacing, METH_VARARGS,
   "GetDataSpacing(self) -> (float, float, float)\nC++: double *GetDataSpacing()\nGetDataSpacing(self, ptr:[float, ...]) -> None\nC++: void GetDataSpacing(double *ptr)\n\n"},
  {"GetDataOrigin", PyvtkImageExport_GetDataOrigin, METH_VARARGS,
   "GetDataOrigin(self) -> (float, float, float)\nC++: double *GetDataOrigin()\nGetDataOrigin(self, ptr:[float, ...]) -> None\nC++: void GetDataOrigin(double *ptr)\n\n"},
  {"GetDataDirection", PyvtkImageExport_GetDataDirection, METH_VARARGS,
   "GetDataDirection(self) -> (float, float, float, float, float,\n    float, float, float, float)\nC++: double *GetDataDirection()\nGetDataDirection(self, ptr:[float, ...]) -> None\nC++: void GetDataDirection(double *ptr)\n\n"},
  {"GetInput", PyvtkImageExport_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImageData\nC++: vtkImageData *GetInput()\n\nGet the input object from the image pipeline.\n"},
  {"ImageLowerLeftOn", PyvtkImageExport_ImageLowerLeftOn, METH_VARARGS,
   "ImageLowerLeftOn(self) -> None\nC++: virtual void ImageLowerLeftOn()\n\nSet/Get whether the data goes to the exported memory starting in\nthe lower left corner or upper left corner.  Default: On. When\nthis flag is Off, the image will be flipped vertically before it\nis exported. WARNING: this flag is used only with the Export()\nmethod, it is ignored by GetPointerToData().\n"},
  {"ImageLowerLeftOff", PyvtkImageExport_ImageLowerLeftOff, METH_VARARGS,
   "ImageLowerLeftOff(self) -> None\nC++: virtual void ImageLowerLeftOff()\n\n"},
  {"GetImageLowerLeft", PyvtkImageExport_GetImageLowerLeft, METH_VARARGS,
   "GetImageLowerLeft(self) -> int\nC++: virtual vtkTypeBool GetImageLowerLeft()\n\n"},
  {"SetImageLowerLeft", PyvtkImageExport_SetImageLowerLeft, METH_VARARGS,
   "SetImageLowerLeft(self, _arg:int) -> None\nC++: virtual void SetImageLowerLeft(vtkTypeBool _arg)\n\n"},
  {"SetExportVoidPointer", PyvtkImageExport_SetExportVoidPointer, METH_VARARGS,
   "SetExportVoidPointer(self, __a:Pointer) -> None\nC++: void SetExportVoidPointer(void *)\n\nSet the void pointer of the C array to export the data to. From\npython, you can specify a pointer to a string that is large\nenough to hold the data.\n"},
  {"GetExportVoidPointer", PyvtkImageExport_GetExportVoidPointer, METH_VARARGS,
   "GetExportVoidPointer(self) -> Pointer\nC++: void *GetExportVoidPointer()\n\n"},
  {"Export", PyvtkImageExport_Export, METH_VARARGS,
   "Export(self) -> None\nC++: void Export()\nExport(self, __a:Pointer) -> None\nC++: virtual void Export(void *)\n\nThe main interface: update the pipeline and export the image to\nthe memory pointed to by SetExportVoidPointer().  You can also\nspecify a void pointer when you call Export().\n"},
  {"GetPointerToData", PyvtkImageExport_GetPointerToData, METH_VARARGS,
   "GetPointerToData(self) -> Pointer\nC++: void *GetPointerToData()\n\nAn alternative to Export(): Use with caution.   Update the\npipeline and return a pointer to the image memory.  The pointer\nis only valid until the next time that the pipeline is updated.\nWARNING: This method ignores the ImageLowerLeft flag.\n"},
  {"GetCallbackUserData", PyvtkImageExport_GetCallbackUserData, METH_VARARGS,
   "GetCallbackUserData(self) -> Pointer\nC++: void *GetCallbackUserData()\n\nGet the user data that should be passed to the callback\nfunctions.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageExport_Doc =
  "vtkImageExport - Export VTK images to third-party systems.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageExport provides a way of exporting image data at the end of a\n"
  "pipeline to a third-party system or to a simple C array. Applications\n"
  "can use this to get direct access to the image data in memory.  A\n"
  "callback interface is provided to allow connection of the VTK\n"
  "pipeline to a third-party pipeline.  This interface conforms to the\n"
  "interface of vtkImageImport. In Python it is possible to use this\n"
  "class to write the image data into a python string that has been\n"
  "pre-allocated to be the correct size.\n"
  "@sa\n"
  "vtkImageImport\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageExport_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOImage.vtkImageExport", // tp_name
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
  PyvtkImageExport_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageExport_StaticNew()
{
  return vtkImageExport::New();
}

PyObject *PyvtkImageExport_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageExport_Type, PyvtkImageExport_Methods,
    "vtkImageExport",
 &PyvtkImageExport_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageExport(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageExport_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageExport", o) != 0)
  {
    Py_DECREF(o);
  }

}

