// python wrapper for vtkContextDevice3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContextDevice3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContextDevice3D(PyObject *dict); }
extern "C" { PyObject *PyvtkContextDevice3D_ClassNew(); }


static PyObject *
PyvtkContextDevice3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContextDevice3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContextDevice3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContextDevice3D *tempr = vtkContextDevice3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextDevice3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContextDevice3D::NewInstance());

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
PyvtkContextDevice3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContextDevice3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContextDevice3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->DrawPoly(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_DrawLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->DrawLines(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_DrawPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3 = 0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2, 4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetArray(temp2, size2)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp3)))
  {
    op->DrawPoints(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_DrawTriangleMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTriangleMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    op->DrawTriangleMesh(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    op->ApplyPen(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    op->ApplyBrush(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    op->SetMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    op->GetMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_MultiplyMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MultiplyMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    op->MultiplyMatrix(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->PushMatrix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->PopMatrix();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_SetClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    op->SetClipping(*temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkContextDevice3D_DisableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DisableClipping();
    }
    else
    {
      op->vtkContextDevice3D::DisableClipping();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_EnableClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->EnableClipping(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContextDevice3D_EnableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    op->EnableClippingPlane(temp0, temp1);

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
PyvtkContextDevice3D_DisableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContextDevice3D *op = static_cast<vtkContextDevice3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    op->DisableClippingPlane(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContextDevice3D_Methods[] = {
  {"IsTypeOf", PyvtkContextDevice3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContextDevice3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContextDevice3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContextDevice3D\nC++: static vtkContextDevice3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContextDevice3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContextDevice3D\nC++: vtkContextDevice3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContextDevice3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContextDevice3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"DrawPoly", PyvtkContextDevice3D_DrawPoly, METH_VARARGS,
   "DrawPoly(self, verts:(float, ...), n:int, colors:(int, ...)=...,\n    nc:int=0) -> None\nC++: virtual void DrawPoly(const float *verts, int n,\n    const unsigned char *colors=nullptr, int nc=0)\n\nDraw a polyline between the specified points.\n\\sa DrawLines()\n"},
  {"DrawLines", PyvtkContextDevice3D_DrawLines, METH_VARARGS,
   "DrawLines(self, verts:(float, ...), n:int, colors:(int, ...)=...,\n    nc:int=0) -> None\nC++: virtual void DrawLines(const float *verts, int n,\n    const unsigned char *colors=nullptr, int nc=0)\n\nDraw lines defined by specified pair of points.\n\\sa DrawPoly()\n"},
  {"DrawPoints", PyvtkContextDevice3D_DrawPoints, METH_VARARGS,
   "DrawPoints(self, verts:(float, ...), n:int, colors:(int, ...)=...,\n     nc:int=0) -> None\nC++: virtual void DrawPoints(const float *verts, int n,\n    const unsigned char *colors=nullptr, int nc=0)\n\nDraw points at the vertex positions specified.\n"},
  {"DrawTriangleMesh", PyvtkContextDevice3D_DrawTriangleMesh, METH_VARARGS,
   "DrawTriangleMesh(self, mesh:(float, ...), n:int, colors:(int, ...)\n    , nc:int) -> None\nC++: virtual void DrawTriangleMesh(const float *mesh, int n,\n    const unsigned char *colors, int nc)\n\nDraw triangles to generate the specified mesh.\n"},
  {"ApplyPen", PyvtkContextDevice3D_ApplyPen, METH_VARARGS,
   "ApplyPen(self, pen:vtkPen) -> None\nC++: virtual void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {"ApplyBrush", PyvtkContextDevice3D_ApplyBrush, METH_VARARGS,
   "ApplyBrush(self, brush:vtkBrush) -> None\nC++: virtual void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {"SetMatrix", PyvtkContextDevice3D_SetMatrix, METH_VARARGS,
   "SetMatrix(self, m:vtkMatrix4x4) -> None\nC++: virtual void SetMatrix(vtkMatrix4x4 *m)\n\nSet the model view matrix for the display\n"},
  {"GetMatrix", PyvtkContextDevice3D_GetMatrix, METH_VARARGS,
   "GetMatrix(self, m:vtkMatrix4x4) -> None\nC++: virtual void GetMatrix(vtkMatrix4x4 *m)\n\nSet the model view matrix for the display\n"},
  {"MultiplyMatrix", PyvtkContextDevice3D_MultiplyMatrix, METH_VARARGS,
   "MultiplyMatrix(self, m:vtkMatrix4x4) -> None\nC++: virtual void MultiplyMatrix(vtkMatrix4x4 *m)\n\nMultiply the current model view matrix by the supplied one\n"},
  {"PushMatrix", PyvtkContextDevice3D_PushMatrix, METH_VARARGS,
   "PushMatrix(self) -> None\nC++: virtual void PushMatrix()\n\nPush the current matrix onto the stack.\n"},
  {"PopMatrix", PyvtkContextDevice3D_PopMatrix, METH_VARARGS,
   "PopMatrix(self) -> None\nC++: virtual void PopMatrix()\n\nPop the current matrix off of the stack.\n"},
  {"SetClipping", PyvtkContextDevice3D_SetClipping, METH_VARARGS,
   "SetClipping(self, rect:vtkRecti) -> None\nC++: virtual void SetClipping(const vtkRecti &rect)\n\nSupply a float array of length 4 with x1, y1, width, height\nspecifying clipping region for the device in pixels.\n"},
  {"DisableClipping", PyvtkContextDevice3D_DisableClipping, METH_VARARGS,
   "DisableClipping(self) -> None\nC++: virtual void DisableClipping()\n\nDisable clipping of the display. Remove in a future release -\nretained for API compatibility.\n"},
  {"EnableClipping", PyvtkContextDevice3D_EnableClipping, METH_VARARGS,
   "EnableClipping(self, enable:bool) -> None\nC++: virtual void EnableClipping(bool enable)\n\nEnable or disable the clipping of the scene.\n"},
  {"EnableClippingPlane", PyvtkContextDevice3D_EnableClippingPlane, METH_VARARGS,
   "EnableClippingPlane(self, i:int, planeEquation:[float, ...])\n    -> None\nC++: virtual void EnableClippingPlane(int i,\n    double *planeEquation)\n\nEnable/Disable the specified clipping plane.\n"},
  {"DisableClippingPlane", PyvtkContextDevice3D_DisableClippingPlane, METH_VARARGS,
   "DisableClippingPlane(self, i:int) -> None\nC++: virtual void DisableClippingPlane(int i)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContextDevice3D_Doc =
  "vtkContextDevice3D - Abstract class for drawing 3D primitives.\n\n"
  "Superclass: vtkObject\n\n"
  "This defines the interface for a vtkContextDevice3D. In this sense a\n"
  "ContextDevice is a class used to paint 3D primitives onto a device,\n"
  "such as an OpenGL context.\n\n"
  "This is private API, and should not be used outside of the\n"
  "vtkContext3D.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContextDevice3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkContextDevice3D", // tp_name
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
  PyvtkContextDevice3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContextDevice3D_StaticNew()
{
  return vtkContextDevice3D::New();
}

PyObject *PyvtkContextDevice3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContextDevice3D_Type, PyvtkContextDevice3D_Methods,
    "vtkContextDevice3D",
 &PyvtkContextDevice3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContextDevice3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContextDevice3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContextDevice3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

