// python wrapper for vtkImageCanvasSource2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageCanvasSource2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageCanvasSource2D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageCanvasSource2D_ClassNew(); }


static PyObject *
PyvtkImageCanvasSource2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageCanvasSource2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageCanvasSource2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageCanvasSource2D *tempr = vtkImageCanvasSource2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageCanvasSource2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageCanvasSource2D::NewInstance());

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
PyvtkImageCanvasSource2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageCanvasSource2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageCanvasSource2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDrawColor(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor_s5(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetDrawColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDrawColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_SetDrawColor_Methods[] = {
  {"SetDrawColor", PyvtkImageCanvasSource2D_SetDrawColor_s2, METH_VARARGS,
   "@P *d"},
  {"SetDrawColor", PyvtkImageCanvasSource2D_SetDrawColor_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageCanvasSource2D_SetDrawColor(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageCanvasSource2D_SetDrawColor_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageCanvasSource2D_SetDrawColor_s1(self, args);
    case 2:
      return PyvtkImageCanvasSource2D_SetDrawColor_s4(self, args);
    case 3:
      return PyvtkImageCanvasSource2D_SetDrawColor_s5(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDrawColor");
  return nullptr;
}


static PyObject *
PyvtkImageCanvasSource2D_GetDrawColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetDrawColor() :
      op->vtkImageCanvasSource2D::GetDrawColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_InitializeCanvasVolume(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeCanvasVolume");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->InitializeCanvasVolume(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::InitializeCanvasVolume(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->FillBox(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillBox(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTube(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTube");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->FillTube(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillTube(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_FillTriangle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillTriangle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillTriangle(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawCircle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawCircle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->DrawCircle(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawCircle(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawPoint(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawPoint(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawSegment(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawSegment3D_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->DrawSegment3D(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment3D(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
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
PyvtkImageCanvasSource2D_DrawSegment3D_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawSegment3D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
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
      op->DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawSegment3D(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawSegment3D(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkImageCanvasSource2D_DrawSegment3D_s1(self, args);
    case 6:
      return PyvtkImageCanvasSource2D_DrawSegment3D_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawSegment3D");
  return nullptr;
}


static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  vtkImageData *temp2 = nullptr;
  int temp3;
  int temp4;
  int temp5;
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6))
  {
    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }
    else
    {
      op->vtkImageCanvasSource2D::DrawImage(temp0, temp1, temp2, temp3, temp4, temp5, temp6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCanvasSource2D_DrawImage_s1(self, args);
    case 7:
      return PyvtkImageCanvasSource2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}


static PyObject *
PyvtkImageCanvasSource2D_FillPixel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillPixel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->FillPixel(temp0, temp1);
    }
    else
    {
      op->vtkImageCanvasSource2D::FillPixel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetExtent(temp0);
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
PyvtkImageCanvasSource2D_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
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
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageCanvasSource2D_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageCanvasSource2D_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkImageCanvasSource2D_SetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDefaultZ(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetDefaultZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetDefaultZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDefaultZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDefaultZ() :
      op->vtkImageCanvasSource2D::GetDefaultZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

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
      op->SetRatio(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetRatio(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetRatio(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetRatio(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageCanvasSource2D_SetRatio(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageCanvasSource2D_SetRatio_s1(self, args);
    case 1:
      return PyvtkImageCanvasSource2D_SetRatio_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRatio");
  return nullptr;
}


static PyObject *
PyvtkImageCanvasSource2D_GetRatio(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRatio");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetRatio() :
      op->vtkImageCanvasSource2D::GetRatio());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfScalarComponents(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetNumberOfScalarComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetNumberOfScalarComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfScalarComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfScalarComponents() :
      op->vtkImageCanvasSource2D::GetNumberOfScalarComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToFloat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToFloat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToFloat();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToFloat();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToDouble(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToDouble");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToDouble();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToDouble();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToInt();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedInt");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedInt();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedInt();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToLong();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedLong");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedLong();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedLong();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToShort();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedShort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedShort();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedShort();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToUnsignedChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToUnsignedChar();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToUnsignedChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarTypeToChar(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarTypeToChar");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetScalarTypeToChar();
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarTypeToChar();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_SetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScalarType(temp0);
    }
    else
    {
      op->vtkImageCanvasSource2D::SetScalarType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageCanvasSource2D_GetScalarType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageCanvasSource2D *op = static_cast<vtkImageCanvasSource2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetScalarType() :
      op->vtkImageCanvasSource2D::GetScalarType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageCanvasSource2D_Methods[] = {
  {"IsTypeOf", PyvtkImageCanvasSource2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageCanvasSource2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageCanvasSource2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageCanvasSource2D\nC++: static vtkImageCanvasSource2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageCanvasSource2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageCanvasSource2D\nC++: vtkImageCanvasSource2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageCanvasSource2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageCanvasSource2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetDrawColor", PyvtkImageCanvasSource2D_SetDrawColor, METH_VARARGS,
   "SetDrawColor(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetDrawColor(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetDrawColor(self, _arg:(float, float, float, float)) -> None\nC++: virtual void SetDrawColor(const double _arg[4])\nSetDrawColor(self, a:float) -> None\nC++: void SetDrawColor(double a)\nSetDrawColor(self, a:float, b:float) -> None\nC++: void SetDrawColor(double a, double b)\nSetDrawColor(self, a:float, b:float, c:float) -> None\nC++: void SetDrawColor(double a, double b, double c)\n\nSet/Get DrawColor.  This is the value that is used when filling\ndata or drawing lines. Default is (0,0,0,0)\n"},
  {"GetDrawColor", PyvtkImageCanvasSource2D_GetDrawColor, METH_VARARGS,
   "GetDrawColor(self) -> (float, float, float, float)\nC++: virtual double *GetDrawColor()\n\n"},
  {"InitializeCanvasVolume", PyvtkImageCanvasSource2D_InitializeCanvasVolume, METH_VARARGS,
   "InitializeCanvasVolume(self, volume:vtkImageData) -> None\nC++: void InitializeCanvasVolume(vtkImageData *volume)\n\nInitialize the canvas with a given volume\n"},
  {"FillBox", PyvtkImageCanvasSource2D_FillBox, METH_VARARGS,
   "FillBox(self, min0:int, max0:int, min1:int, max1:int) -> None\nC++: void FillBox(int min0, int max0, int min1, int max1)\n\nSet the pixels inside the box (min0, max0, min1, max1) to the\ncurrent DrawColor\n"},
  {"FillTube", PyvtkImageCanvasSource2D_FillTube, METH_VARARGS,
   "FillTube(self, x0:int, y0:int, x1:int, y1:int, radius:float)\n    -> None\nC++: void FillTube(int x0, int y0, int x1, int y1, double radius)\n\n"},
  {"FillTriangle", PyvtkImageCanvasSource2D_FillTriangle, METH_VARARGS,
   "FillTriangle(self, x0:int, y0:int, x1:int, y1:int, x2:int, y2:int)\n     -> None\nC++: void FillTriangle(int x0, int y0, int x1, int y1, int x2,\n    int y2)\n\n"},
  {"DrawCircle", PyvtkImageCanvasSource2D_DrawCircle, METH_VARARGS,
   "DrawCircle(self, c0:int, c1:int, radius:float) -> None\nC++: void DrawCircle(int c0, int c1, double radius)\n\n"},
  {"DrawPoint", PyvtkImageCanvasSource2D_DrawPoint, METH_VARARGS,
   "DrawPoint(self, p0:int, p1:int) -> None\nC++: void DrawPoint(int p0, int p1)\n\n"},
  {"DrawSegment", PyvtkImageCanvasSource2D_DrawSegment, METH_VARARGS,
   "DrawSegment(self, x0:int, y0:int, x1:int, y1:int) -> None\nC++: void DrawSegment(int x0, int y0, int x1, int y1)\n\n"},
  {"DrawSegment3D", PyvtkImageCanvasSource2D_DrawSegment3D, METH_VARARGS,
   "DrawSegment3D(self, p0:[float, ...], p1:[float, ...]) -> None\nC++: void DrawSegment3D(double *p0, double *p1)\nDrawSegment3D(self, x1:float, y1:float, z1:float, x2:float,\n    y2:float, z2:float) -> None\nC++: void DrawSegment3D(double x1, double y1, double z1,\n    double x2, double y2, double z2)\n\n"},
  {"DrawImage", PyvtkImageCanvasSource2D_DrawImage, METH_VARARGS,
   "DrawImage(self, x0:int, y0:int, i:vtkImageData) -> None\nC++: void DrawImage(int x0, int y0, vtkImageData *i)\nDrawImage(self, x0:int, y0:int, __c:vtkImageData, sx:int, sy:int,\n    width:int, height:int) -> None\nC++: void DrawImage(int x0, int y0, vtkImageData *, int sx,\n    int sy, int width, int height)\n\nDraw subimage of the input image in the canvas at position x0 and\ny0. The subimage is defined with sx, sy, width, and height.\n"},
  {"FillPixel", PyvtkImageCanvasSource2D_FillPixel, METH_VARARGS,
   "FillPixel(self, x:int, y:int) -> None\nC++: void FillPixel(int x, int y)\n\nFill a colored area with another color. (like connectivity) All\npixels connected (and with the same value) to pixel (x, y) get\nreplaced by the current \"DrawColor\".\n"},
  {"SetExtent", PyvtkImageCanvasSource2D_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:[int, ...]) -> None\nC++: void SetExtent(int *extent)\nSetExtent(self, x1:int, x2:int, y1:int, y2:int, z1:int, z2:int)\n    -> None\nC++: void SetExtent(int x1, int x2, int y1, int y2, int z1,\n    int z2)\n\nThese methods set the WholeExtent of the output It sets the size\nof the canvas. Extent is a min max 3D box.  Minimums and maximums\nare inclusive.\n"},
  {"SetDefaultZ", PyvtkImageCanvasSource2D_SetDefaultZ, METH_VARARGS,
   "SetDefaultZ(self, _arg:int) -> None\nC++: virtual void SetDefaultZ(int _arg)\n\nThe drawing operations can only draw into one 2D XY plane at a\ntime. If the canvas is a 3D volume, then this z value is used as\nthe default for 2D operations. The default is 0.\n"},
  {"GetDefaultZ", PyvtkImageCanvasSource2D_GetDefaultZ, METH_VARARGS,
   "GetDefaultZ(self) -> int\nC++: virtual int GetDefaultZ()\n\n"},
  {"SetRatio", PyvtkImageCanvasSource2D_SetRatio, METH_VARARGS,
   "SetRatio(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetRatio(double _arg1, double _arg2,\n    double _arg3)\nSetRatio(self, _arg:(float, float, float)) -> None\nC++: virtual void SetRatio(const double _arg[3])\n\nSet/Get Ratio. This is the value that is used to pre-multiply\neach (x, y, z) drawing coordinates (including DefaultZ). The\ndefault is (1, 1, 1)\n"},
  {"GetRatio", PyvtkImageCanvasSource2D_GetRatio, METH_VARARGS,
   "GetRatio(self) -> (float, float, float)\nC++: virtual double *GetRatio()\n\n"},
  {"SetNumberOfScalarComponents", PyvtkImageCanvasSource2D_SetNumberOfScalarComponents, METH_VARARGS,
   "SetNumberOfScalarComponents(self, i:int) -> None\nC++: virtual void SetNumberOfScalarComponents(int i)\n\nSet the number of scalar components\n"},
  {"GetNumberOfScalarComponents", PyvtkImageCanvasSource2D_GetNumberOfScalarComponents, METH_VARARGS,
   "GetNumberOfScalarComponents(self) -> int\nC++: virtual int GetNumberOfScalarComponents()\n\n"},
  {"SetScalarTypeToFloat", PyvtkImageCanvasSource2D_SetScalarTypeToFloat, METH_VARARGS,
   "SetScalarTypeToFloat(self) -> None\nC++: void SetScalarTypeToFloat()\n\nSet/Get the data scalar type (i.e VTK_DOUBLE). Note that these\nmethods are setting and getting the pipeline scalar type. i.e.\nthey are setting the type that the image data will be once it has\nexecuted. Until the REQUEST_DATA pass the actual scalars may be\nof some other type. This is for backwards compatibility\n"},
  {"SetScalarTypeToDouble", PyvtkImageCanvasSource2D_SetScalarTypeToDouble, METH_VARARGS,
   "SetScalarTypeToDouble(self) -> None\nC++: void SetScalarTypeToDouble()\n\n"},
  {"SetScalarTypeToInt", PyvtkImageCanvasSource2D_SetScalarTypeToInt, METH_VARARGS,
   "SetScalarTypeToInt(self) -> None\nC++: void SetScalarTypeToInt()\n\n"},
  {"SetScalarTypeToUnsignedInt", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedInt, METH_VARARGS,
   "SetScalarTypeToUnsignedInt(self) -> None\nC++: void SetScalarTypeToUnsignedInt()\n\n"},
  {"SetScalarTypeToLong", PyvtkImageCanvasSource2D_SetScalarTypeToLong, METH_VARARGS,
   "SetScalarTypeToLong(self) -> None\nC++: void SetScalarTypeToLong()\n\n"},
  {"SetScalarTypeToUnsignedLong", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedLong, METH_VARARGS,
   "SetScalarTypeToUnsignedLong(self) -> None\nC++: void SetScalarTypeToUnsignedLong()\n\n"},
  {"SetScalarTypeToShort", PyvtkImageCanvasSource2D_SetScalarTypeToShort, METH_VARARGS,
   "SetScalarTypeToShort(self) -> None\nC++: void SetScalarTypeToShort()\n\n"},
  {"SetScalarTypeToUnsignedShort", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedShort, METH_VARARGS,
   "SetScalarTypeToUnsignedShort(self) -> None\nC++: void SetScalarTypeToUnsignedShort()\n\n"},
  {"SetScalarTypeToUnsignedChar", PyvtkImageCanvasSource2D_SetScalarTypeToUnsignedChar, METH_VARARGS,
   "SetScalarTypeToUnsignedChar(self) -> None\nC++: void SetScalarTypeToUnsignedChar()\n\n"},
  {"SetScalarTypeToChar", PyvtkImageCanvasSource2D_SetScalarTypeToChar, METH_VARARGS,
   "SetScalarTypeToChar(self) -> None\nC++: void SetScalarTypeToChar()\n\n"},
  {"SetScalarType", PyvtkImageCanvasSource2D_SetScalarType, METH_VARARGS,
   "SetScalarType(self, __a:int) -> None\nC++: void SetScalarType(int)\n\n"},
  {"GetScalarType", PyvtkImageCanvasSource2D_GetScalarType, METH_VARARGS,
   "GetScalarType(self) -> int\nC++: int GetScalarType()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageCanvasSource2D_Doc =
  "vtkImageCanvasSource2D - Paints on a canvas\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageCanvasSource2D is a source that starts as a blank image. you\n"
  "may add to the image with two-dimensional drawing routines. It can\n"
  "paint multi-spectral images.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageCanvasSource2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingSources.vtkImageCanvasSource2D", // tp_name
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
  PyvtkImageCanvasSource2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageCanvasSource2D_StaticNew()
{
  return vtkImageCanvasSource2D::New();
}

PyObject *PyvtkImageCanvasSource2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageCanvasSource2D_Type, PyvtkImageCanvasSource2D_Methods,
    "vtkImageCanvasSource2D",
 &PyvtkImageCanvasSource2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageCanvasSource2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageCanvasSource2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageCanvasSource2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

