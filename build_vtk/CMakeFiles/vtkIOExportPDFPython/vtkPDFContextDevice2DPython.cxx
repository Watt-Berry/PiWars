// python wrapper for vtkPDFContextDevice2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPDFContextDevice2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPDFContextDevice2D(PyObject *dict); }
extern "C" { PyObject *PyvtkPDFContextDevice2D_ClassNew(); }


static PyObject *
PyvtkPDFContextDevice2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPDFContextDevice2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPDFContextDevice2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPDFContextDevice2D *tempr = vtkPDFContextDevice2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPDFContextDevice2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPDFContextDevice2D::NewInstance());

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
PyvtkPDFContextDevice2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPDFContextDevice2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPDFContextDevice2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetHaruObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHaruObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetBuffer(temp0, &pbuf0) &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->SetHaruObjects(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetHaruObjects(temp0, temp1);
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
  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawPoly(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawLines(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawLines(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawPoints(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawPointSprites(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPointSprites");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<float> store1(2*size1);
  float *temp1 = store1.Data();
  float *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  int temp2;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<unsigned char> store3(2*size3);
  unsigned char *temp3 = store3.Data();
  unsigned char *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 5) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp4)))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawPointSprites(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawMarkers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMarkers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  int temp0;
  bool temp1 = false;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<float> store2(2*size2);
  float *temp2 = store2.Data();
  float *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<unsigned char> store4(2*size4);
  unsigned char *temp4 = store4.Data();
  unsigned char *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  int temp5 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp5)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawMarkers(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawQuad(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuad");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuad(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawQuad(temp0, temp1);
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
PyvtkPDFContextDevice2D_DrawQuadStrip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawQuadStrip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawQuadStrip(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawQuadStrip(temp0, temp1);
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
PyvtkPDFContextDevice2D_DrawPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPolygon(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawPolygon(temp0, temp1);
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
PyvtkPDFContextDevice2D_DrawColoredPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawColoredPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawColoredPolygon(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawColoredPolygon(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawEllipseWedge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipseWedge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
  float temp6;
  float temp7;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetValue(temp6) &&
      ap.GetValue(temp7))
  {
    if (ap.IsBound())
    {
      op->DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawEllipseWedge(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawEllipticArc(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawEllipticArc");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  float temp0;
  float temp1;
  float temp2;
  float temp3;
  float temp4;
  float temp5;
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
      op->DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawEllipticArc(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawString(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawString(temp0, temp1);
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
PyvtkPDFContextDevice2D_ComputeStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkStdString temp0;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::ComputeStringBounds(temp0, temp1);
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
PyvtkPDFContextDevice2D_ComputeJustifiedStringBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeJustifiedStringBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const char *temp0 = nullptr;
  const size_t size1 = 4;
  float temp1[4];
  float save1[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->ComputeJustifiedStringBounds(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::ComputeJustifiedStringBounds(temp0, temp1);
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
PyvtkPDFContextDevice2D_DrawMathTextString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawMathTextString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(2*size0);
  float *temp0 = store0.Data();
  float *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  vtkStdString temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawMathTextString(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawMathTextString(temp0, temp1);
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
PyvtkPDFContextDevice2D_DrawImage_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  float temp1;
  vtkImageData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkImageData"))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawImage(temp0, temp1, temp2);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawImage(temp0, temp1, temp2);
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
PyvtkPDFContextDevice2D_DrawImage_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawImage");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkImageData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf") &&
      ap.GetVTKObject(temp1, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->DrawImage(*temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawImage(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkPDFContextDevice2D_DrawImage(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPDFContextDevice2D_DrawImage_s1(self, args);
    case 2:
      return PyvtkPDFContextDevice2D_DrawImage_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawImage");
  return nullptr;
}


static PyObject *
PyvtkPDFContextDevice2D_SetColor4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColor4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const size_t size0 = 4;
  unsigned char temp0[4];
  unsigned char save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetColor4(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetColor4(temp0);
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
PyvtkPDFContextDevice2D_SetTexture(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTexture");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkImageData *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkImageData") &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTexture(temp0, temp1);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetTexture(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetPointSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointSize(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetPointSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_DrawPolyData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPolyData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  const size_t size0 = 2;
  float temp0[2];
  float save0[2];
  float temp1;
  vtkPolyData *temp2 = nullptr;
  vtkUnsignedCharArray *temp3 = nullptr;
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPolyData") &&
      ap.GetVTKObject(temp3, "vtkUnsignedCharArray") &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->DrawPolyData(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPDFContextDevice2D::DrawPolyData(temp0, temp1, temp2, temp3, temp4);
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
PyvtkPDFContextDevice2D_SetLineType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineType(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetLineType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->GetMatrix(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::GetMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  vtkMatrix3x3 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix3x3"))
  {
    if (ap.IsBound())
    {
      op->MultiplyMatrix(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::MultiplyMatrix(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkPDFContextDevice2D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkPDFContextDevice2D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPDFContextDevice2D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

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
      op->SetClipping(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::SetClipping(temp0);
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
PyvtkPDFContextDevice2D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPDFContextDevice2D *op = static_cast<vtkPDFContextDevice2D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->EnableClipping(temp0);
    }
    else
    {
      op->vtkPDFContextDevice2D::EnableClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPDFContextDevice2D_Methods[] = {
  {"IsTypeOf", PyvtkPDFContextDevice2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPDFContextDevice2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPDFContextDevice2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPDFContextDevice2D\nC++: static vtkPDFContextDevice2D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPDFContextDevice2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPDFContextDevice2D\nC++: vtkPDFContextDevice2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPDFContextDevice2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPDFContextDevice2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHaruObjects", PyvtkPDFContextDevice2D_SetHaruObjects, METH_VARARGS,
   "SetHaruObjects(self, doc:Pointer, page:Pointer) -> None\nC++: void SetHaruObjects(void *doc, void *page)\n\nSet the HPDF_Doc and HPDF_Page to use while exporting the scene.\nThe type is void* to keep the libharu opaque types from leaking\ninto headers. This function expects HPDF_Document* and HPDF_Page*\nas the arguments.\n"},
  {"SetRenderer", PyvtkPDFContextDevice2D_SetRenderer, METH_VARARGS,
   "SetRenderer(self, __a:vtkRenderer) -> None\nC++: void SetRenderer(vtkRenderer *)\n\n"},
  {"DrawPoly", PyvtkPDFContextDevice2D_DrawPoly, METH_VARARGS,
   "DrawPoly(self, points:[float, ...], n:int, colors:[int, ...]=...,\n    nc_comps:int=0) -> None\nC++: void DrawPoly(float *points, int n,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\nDraw a poly line using the points - fastest code path due to\nmemory layout of the coordinates. The line will be colored by the\ncolors array, which must be have nc_comps components (defining a\nsingle color).\n\\sa DrawLines()\n"},
  {"DrawLines", PyvtkPDFContextDevice2D_DrawLines, METH_VARARGS,
   "DrawLines(self, f:[float, ...], n:int, colors:[int, ...]=...,\n    nc_comps:int=0) -> None\nC++: void DrawLines(float *f, int n,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\nDraw lines using the points - memory layout is as follows:\nl1p1,l1p2,l2p1,l2p2... The lines will be colored by colors array\nwhich has nc_comps components (defining a single color).\n\\sa DrawPoly()\n"},
  {"DrawPoints", PyvtkPDFContextDevice2D_DrawPoints, METH_VARARGS,
   "DrawPoints(self, points:[float, ...], n:int, colors:[int,\n    ...]=..., nc_comps:int=0) -> None\nC++: void DrawPoints(float *points, int n,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\nDraw a series of points - fastest code path due to memory layout\nof the coordinates. The colors and nc_comps are optional - color\narray.\n"},
  {"DrawPointSprites", PyvtkPDFContextDevice2D_DrawPointSprites, METH_VARARGS,
   "DrawPointSprites(self, sprite:vtkImageData, points:[float, ...],\n    n:int, colors:[int, ...]=..., nc_comps:int=0) -> None\nC++: void DrawPointSprites(vtkImageData *sprite, float *points,\n    int n, unsigned char *colors=nullptr, int nc_comps=0)\n    override;\n\nDraw a series of point sprites, images centred at the points\nsupplied. The supplied vtkImageData is the sprite to be drawn,\nonly squares will be drawn and the size is set using\nSetPointSize.\n\\param sprite the image to draw\n\\param points where to draw the sprites\n\\param n the number of points\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"DrawMarkers", PyvtkPDFContextDevice2D_DrawMarkers, METH_VARARGS,
   "DrawMarkers(self, shape:int, highlight:bool, points:[float, ...],\n    n:int, colors:[int, ...]=..., nc_comps:int=0) -> None\nC++: void DrawMarkers(int shape, bool highlight, float *points,\n    int n, unsigned char *colors=nullptr, int nc_comps=0)\n    override;\n\nDraw a series of markers centered at the points supplied. The\nshape argument controls the marker shape, and can be one of\n- VTK_MARKER_CROSS\n- VTK_MARKER_PLUS\n- VTK_MARKER_SQUARE\n- VTK_MARKER_CIRCLE\n- VTK_MARKER_DIAMOND\n\\param shape the shape of the marker\n\\param highlight whether to highlight the marker or not\n\\param points where to draw the sprites\n\\param n the number of points\n\\param colors is an optional array of colors.\n\\param nc_comps is the number of components for the color.\n"},
  {"DrawQuad", PyvtkPDFContextDevice2D_DrawQuad, METH_VARARGS,
   "DrawQuad(self, __a:[float, ...], __b:int) -> None\nC++: void DrawQuad(float *, int) override;\n\nDraw a quad using the specified number of points.\n"},
  {"DrawQuadStrip", PyvtkPDFContextDevice2D_DrawQuadStrip, METH_VARARGS,
   "DrawQuadStrip(self, __a:[float, ...], __b:int) -> None\nC++: void DrawQuadStrip(float *, int) override;\n\nDraw a quad using the specified number of points.\n"},
  {"DrawPolygon", PyvtkPDFContextDevice2D_DrawPolygon, METH_VARARGS,
   "DrawPolygon(self, __a:[float, ...], __b:int) -> None\nC++: void DrawPolygon(float *, int) override;\n\n"},
  {"DrawColoredPolygon", PyvtkPDFContextDevice2D_DrawColoredPolygon, METH_VARARGS,
   "DrawColoredPolygon(self, points:[float, ...], numPoints:int,\n    colors:[int, ...]=..., nc_comps:int=0) -> None\nC++: void DrawColoredPolygon(float *points, int numPoints,\n    unsigned char *colors=nullptr, int nc_comps=0) override;\n\n"},
  {"DrawEllipseWedge", PyvtkPDFContextDevice2D_DrawEllipseWedge, METH_VARARGS,
   "DrawEllipseWedge(self, x:float, y:float, outRx:float, outRy:float,\n     inRx:float, inRy:float, startAngle:float, stopAngle:float)\n    -> None\nC++: void DrawEllipseWedge(float x, float y, float outRx,\n    float outRy, float inRx, float inRy, float startAngle,\n    float stopAngle) override;\n\nDraw an elliptic wedge with center at x, y, outer radii outRx,\noutRy, inner radii inRx, inRy between angles startAngle and\nstopAngle (expressed in degrees).\n\\pre positive_outRx: outRx>=0\n\\pre positive_outRy: outRy>=0\n\\pre positive_inRx: inRx>=0\n\\pre positive_inRy: inRy>=0\n\\pre ordered_rx: inRx<=outRx\n\\pre ordered_ry: inRy<=outRy\n"},
  {"DrawEllipticArc", PyvtkPDFContextDevice2D_DrawEllipticArc, METH_VARARGS,
   "DrawEllipticArc(self, x:float, y:float, rX:float, rY:float,\n    startAngle:float, stopAngle:float) -> None\nC++: void DrawEllipticArc(float x, float y, float rX, float rY,\n    float startAngle, float stopAngle) override;\n\nDraw an elliptic arc with center at x,y with radii rX and rY\nbetween angles startAngle and stopAngle (expressed in degrees).\n\\pre positive_rX: rX>=0\n\\pre positive_rY: rY>=0\n"},
  {"DrawString", PyvtkPDFContextDevice2D_DrawString, METH_VARARGS,
   "DrawString(self, point:[float, ...], string:str) -> None\nC++: void DrawString(float *point, const vtkStdString &string)\n    override;\n\nDraw some text to the screen.\n"},
  {"ComputeStringBounds", PyvtkPDFContextDevice2D_ComputeStringBounds, METH_VARARGS,
   "ComputeStringBounds(self, string:str, bounds:[float, float, float,\n     float]) -> None\nC++: void ComputeStringBounds(const vtkStdString &string,\n    float bounds[4]) override;\n\nCompute the bounds of the supplied string. The bounds will be\ncopied to the supplied bounds variable, the first two elements\nare the bottom corner of the string, and the second two elements\nare the width and height of the bounding box. NOTE: This function\ndoes not take account of the text rotation or justification.\n"},
  {"ComputeJustifiedStringBounds", PyvtkPDFContextDevice2D_ComputeJustifiedStringBounds, METH_VARARGS,
   "ComputeJustifiedStringBounds(self, string:str, bounds:[float,\n    float, float, float]) -> None\nC++: void ComputeJustifiedStringBounds(const char *string,\n    float bounds[4]) override;\n\nCompute the bounds of the supplied string while taking into\naccount the justification of the currently applied text property.\nSimple rotations (0, 90, 180, 270) are also correctly taken into\naccount.\n"},
  {"DrawMathTextString", PyvtkPDFContextDevice2D_DrawMathTextString, METH_VARARGS,
   "DrawMathTextString(self, point:[float, ...], str:str) -> None\nC++: void DrawMathTextString(float *point,\n    const vtkStdString &str) override;\n\nDraw text using MathText markup for mathematical equations. See\nhttp://matplotlib.sourceforge.net/users/mathtext.html for more\ninformation.\n"},
  {"DrawImage", PyvtkPDFContextDevice2D_DrawImage, METH_VARARGS,
   "DrawImage(self, p:[float, float], scale:float, image:vtkImageData)\n     -> None\nC++: void DrawImage(float p[2], float scale, vtkImageData *image)\n    override;\nDrawImage(self, pos:vtkRectf, image:vtkImageData) -> None\nC++: void DrawImage(const vtkRectf &pos, vtkImageData *image)\n    override;\n\nDraw the supplied image at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the image).\n"},
  {"SetColor4", PyvtkPDFContextDevice2D_SetColor4, METH_VARARGS,
   "SetColor4(self, color:[int, int, int, int]) -> None\nC++: void SetColor4(unsigned char color[4]) override;\n\nSet the color for the device using unsigned char of length 4,\nRGBA.\n"},
  {"SetTexture", PyvtkPDFContextDevice2D_SetTexture, METH_VARARGS,
   "SetTexture(self, image:vtkImageData, properties:int) -> None\nC++: void SetTexture(vtkImageData *image, int properties)\n    override;\n\nSet the texture for the device, it is used to fill the polygons\n"},
  {"SetPointSize", PyvtkPDFContextDevice2D_SetPointSize, METH_VARARGS,
   "SetPointSize(self, size:float) -> None\nC++: void SetPointSize(float size) override;\n\nSet the point size for glyphs/sprites.\n"},
  {"SetLineWidth", PyvtkPDFContextDevice2D_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, width:float) -> None\nC++: void SetLineWidth(float width) override;\n\nSet the line width.\n"},
  {"DrawPolyData", PyvtkPDFContextDevice2D_DrawPolyData, METH_VARARGS,
   "DrawPolyData(self, p:[float, float], scale:float,\n    polyData:vtkPolyData, colors:vtkUnsignedCharArray,\n    scalarMode:int) -> None\nC++: void DrawPolyData(float p[2], float scale,\n    vtkPolyData *polyData, vtkUnsignedCharArray *colors,\n    int scalarMode) override;\n\nDraw the supplied PolyData at the given x, y (p[0], p[1]) (bottom\ncorner), scaled by scale (1.0 would match the actual dataset).\n\nOnly lines and polys are rendered. Only the x/y coordinates of\nthe polydata are used.\n\n@param p Offset to apply to polydata.\n@param scale Isotropic scale for polydata. Applied after offset.\n@param polyData Draw lines and polys from this dataset.\n@param colors RGBA for points or cells, depending on value of\n    scalarMode.\nMust not be NULL.\n@param scalarMode Must be either VTK_SCALAR_MODE_USE_POINT_DATA\n    or\nVTK_SCALAR_MODE_USE_CELL_DATA.\n\nThe base implementation breaks the polydata apart and renders\neach polygon individually using the device API. Subclasses should\noverride this method with a batch-drawing implementation if\nperformance is a concern.\n"},
  {"SetLineType", PyvtkPDFContextDevice2D_SetLineType, METH_VARARGS,
   "SetLineType(self, type:int) -> None\nC++: void SetLineType(int type) override;\n\nSet the line type type (using anonymous enum in vtkPen).\n"},
  {"SetMatrix", PyvtkPDFContextDevice2D_SetMatrix, METH_VARARGS,
   "SetMatrix(self, m:vtkMatrix3x3) -> None\nC++: void SetMatrix(vtkMatrix3x3 *m) override;\n\nSet the model view matrix for the display\n"},
  {"GetMatrix", PyvtkPDFContextDevice2D_GetMatrix, METH_VARARGS,
   "GetMatrix(self, m:vtkMatrix3x3) -> None\nC++: void GetMatrix(vtkMatrix3x3 *m) override;\n\nSet the model view matrix for the display\n"},
  {"MultiplyMatrix", PyvtkPDFContextDevice2D_MultiplyMatrix, METH_VARARGS,
   "MultiplyMatrix(self, m:vtkMatrix3x3) -> None\nC++: void MultiplyMatrix(vtkMatrix3x3 *m) override;\n\nMultiply the current model view matrix by the supplied one\n"},
  {"PushMatrix", PyvtkPDFContextDevice2D_PushMatrix, METH_VARARGS,
   "PushMatrix(self) -> None\nC++: void PushMatrix() override;\n\nPush the current matrix onto the stack.\n"},
  {"PopMatrix", PyvtkPDFContextDevice2D_PopMatrix, METH_VARARGS,
   "PopMatrix(self) -> None\nC++: void PopMatrix() override;\n\nPop the current matrix off of the stack.\n"},
  {"SetClipping", PyvtkPDFContextDevice2D_SetClipping, METH_VARARGS,
   "SetClipping(self, x:[int, ...]) -> None\nC++: void SetClipping(int *x) override;\n\nSupply an int array of length 4 with x1, y1, width, height\nspecifying clipping region for the device in pixels.\n"},
  {"EnableClipping", PyvtkPDFContextDevice2D_EnableClipping, METH_VARARGS,
   "EnableClipping(self, enable:bool) -> None\nC++: void EnableClipping(bool enable) override;\n\nEnable or disable the clipping of the scene.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPDFContextDevice2D_Doc =
  "vtkPDFContextDevice2D - vtkContextDevice2D implementation for use\nwith vtkPDFExporter.\n\n"
  "Superclass: vtkContextDevice2D\n\n"
  "Quirks:\n"
  "- Libharu does not support RGBA images. If an alpha channel is\n"
  "  present in any drawn images, it will be blended into an opaque\n"
  "  background filled with the active Brush color to produce a flat RGB\n"
  "image.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPDFContextDevice2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExportPDF.vtkPDFContextDevice2D", // tp_name
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
  PyvtkPDFContextDevice2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPDFContextDevice2D_StaticNew()
{
  return vtkPDFContextDevice2D::New();
}

PyObject *PyvtkPDFContextDevice2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPDFContextDevice2D_Type, PyvtkPDFContextDevice2D_Methods,
    "vtkPDFContextDevice2D",
 &PyvtkPDFContextDevice2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextDevice2D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPDFContextDevice2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPDFContextDevice2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPDFContextDevice2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

