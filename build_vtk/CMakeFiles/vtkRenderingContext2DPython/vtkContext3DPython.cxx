// python wrapper for vtkContext3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContext3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContext3D(PyObject *dict); }
extern "C" { PyObject *PyvtkContext3D_ClassNew(); }


static PyObject *
PyvtkContext3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContext3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContext3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContext3D *tempr = vtkContext3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContext3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContext3D::NewInstance());

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
PyvtkContext3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContext3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContext3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_Begin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Begin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkContextDevice3D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContextDevice3D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Begin(temp0) :
      op->vtkContext3D::Begin(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_GetDevice(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDevice");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContextDevice3D *tempr = (ap.IsBound() ?
      op->GetDevice() :
      op->vtkContext3D::GetDevice());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_End(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "End");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->End() :
      op->vtkContext3D::End());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_DrawLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector3f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector3f"))
  {
    if (ap.IsBound())
    {
      op->DrawLine(*temp0, *temp1);
    }
    else
    {
      op->vtkContext3D::DrawLine(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkContext3D_DrawPoly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawPoly(temp0, temp1);
    }
    else
    {
      op->vtkContext3D::DrawPoly(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_DrawPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkVector3f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector3f"))
  {
    if (ap.IsBound())
    {
      op->DrawPoint(*temp0);
    }
    else
    {
      op->vtkContext3D::DrawPoint(*temp0);
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
PyvtkContext3D_DrawPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1);
    }
    else
    {
      op->vtkContext3D::DrawPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkContext3D_DrawPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(2*size2);
  unsigned char *temp2 = store2.Data();
  unsigned char *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    if (ap.IsBound())
    {
      op->DrawPoints(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext3D::DrawPoints(temp0, temp1, temp2, temp3);
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
PyvtkContext3D_DrawPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkContext3D_DrawPoints_s1(self, args);
    case 4:
      return PyvtkContext3D_DrawPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DrawPoints");
  return nullptr;
}


static PyObject *
PyvtkContext3D_DrawTriangleMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DrawTriangleMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<float> store0(size0);
  float *temp0 = store0.Data();
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<unsigned char> store2(size2);
  unsigned char *temp2 = store2.Data();
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->DrawTriangleMesh(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkContext3D::DrawTriangleMesh(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_ApplyPen(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyPen");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkPen *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPen"))
  {
    if (ap.IsBound())
    {
      op->ApplyPen(temp0);
    }
    else
    {
      op->vtkContext3D::ApplyPen(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_ApplyBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->ApplyBrush(temp0);
    }
    else
    {
      op->vtkContext3D::ApplyBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkContext3D::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkContext3D::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_AppendTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AppendTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  vtkTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTransform"))
  {
    if (ap.IsBound())
    {
      op->AppendTransform(temp0);
    }
    else
    {
      op->vtkContext3D::AppendTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_PushMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PushMatrix();
    }
    else
    {
      op->vtkContext3D::PushMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_PopMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PopMatrix();
    }
    else
    {
      op->vtkContext3D::PopMatrix();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContext3D_EnableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EnableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->EnableClippingPlane(temp0, temp1);
    }
    else
    {
      op->vtkContext3D::EnableClippingPlane(temp0, temp1);
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
PyvtkContext3D_DisableClippingPlane(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DisableClippingPlane");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContext3D *op = static_cast<vtkContext3D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->DisableClippingPlane(temp0);
    }
    else
    {
      op->vtkContext3D::DisableClippingPlane(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContext3D_Methods[] = {
  {"IsTypeOf", PyvtkContext3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContext3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContext3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContext3D\nC++: static vtkContext3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContext3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContext3D\nC++: vtkContext3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContext3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContext3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Begin", PyvtkContext3D_Begin, METH_VARARGS,
   "Begin(self, device:vtkContextDevice3D) -> bool\nC++: bool Begin(vtkContextDevice3D *device)\n\nBegin painting on a vtkContextDevice3D, no painting can occur\nbefore this call has been made. Only one painter is allowed at a\ntime on any given paint device. Returns true if successful,\notherwise false.\n"},
  {"GetDevice", PyvtkContext3D_GetDevice, METH_VARARGS,
   "GetDevice(self) -> vtkContextDevice3D\nC++: vtkContextDevice3D *GetDevice()\n\nGet access to the underlying 3D context.\n"},
  {"End", PyvtkContext3D_End, METH_VARARGS,
   "End(self) -> bool\nC++: bool End()\n\nEnds painting on the device, you would not usually need to call\nthis as it should be called by the destructor. Returns true if\nthe painter is no longer active, otherwise false.\n"},
  {"DrawLine", PyvtkContext3D_DrawLine, METH_VARARGS,
   "DrawLine(self, start:vtkVector3f, end:vtkVector3f) -> None\nC++: void DrawLine(const vtkVector3f &start,\n    const vtkVector3f &end)\n\nDraw a line between the specified points.\n"},
  {"DrawPoly", PyvtkContext3D_DrawPoly, METH_VARARGS,
   "DrawPoly(self, points:(float, ...), n:int) -> None\nC++: void DrawPoly(const float *points, int n)\n\nDraw a poly line between the specified points.\n"},
  {"DrawPoint", PyvtkContext3D_DrawPoint, METH_VARARGS,
   "DrawPoint(self, point:vtkVector3f) -> None\nC++: void DrawPoint(const vtkVector3f &point)\n\nDraw a point at the point in 3D space.\n"},
  {"DrawPoints", PyvtkContext3D_DrawPoints, METH_VARARGS,
   "DrawPoints(self, points:(float, ...), n:int) -> None\nC++: void DrawPoints(const float *points, int n)\nDrawPoints(self, points:(float, ...), n:int, colors:[int, ...],\n    nc_comps:int) -> None\nC++: void DrawPoints(const float *points, int n,\n    unsigned char *colors, int nc_comps)\n\nDraw a sequence of points at the specified locations.\n"},
  {"DrawTriangleMesh", PyvtkContext3D_DrawTriangleMesh, METH_VARARGS,
   "DrawTriangleMesh(self, mesh:(float, ...), n:int, colors:(int, ...)\n    , nc:int) -> None\nC++: void DrawTriangleMesh(const float *mesh, int n,\n    const unsigned char *colors, int nc)\n\nDraw triangles to generate the specified mesh.\n"},
  {"ApplyPen", PyvtkContext3D_ApplyPen, METH_VARARGS,
   "ApplyPen(self, pen:vtkPen) -> None\nC++: void ApplyPen(vtkPen *pen)\n\nApply the supplied pen which controls the outlines of shapes, as\nwell as lines, points and related primitives. This makes a deep\ncopy of the vtkPen object in the vtkContext2D, it does not hold a\npointer to the supplied object.\n"},
  {"ApplyBrush", PyvtkContext3D_ApplyBrush, METH_VARARGS,
   "ApplyBrush(self, brush:vtkBrush) -> None\nC++: void ApplyBrush(vtkBrush *brush)\n\nApply the supplied brush which controls the outlines of shapes,\nas well as lines, points and related primitives. This makes a\ndeep copy of the vtkBrush object in the vtkContext2D, it does not\nhold a pointer to the supplied object.\n"},
  {"SetTransform", PyvtkContext3D_SetTransform, METH_VARARGS,
   "SetTransform(self, transform:vtkTransform) -> None\nC++: void SetTransform(vtkTransform *transform)\n\nSet the transform for the context, the underlying device will use\nthe matrix of the transform. Note, this is set immediately, later\nchanges to the matrix will have no effect until it is set again.\n"},
  {"GetTransform", PyvtkContext3D_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkTransform\nC++: vtkTransform *GetTransform()\n\nCompute the current transform applied to the context.\n"},
  {"AppendTransform", PyvtkContext3D_AppendTransform, METH_VARARGS,
   "AppendTransform(self, transform:vtkTransform) -> None\nC++: void AppendTransform(vtkTransform *transform)\n\nAppend the transform for the context, the underlying device will\nuse the matrix of the transform. Note, this is set immediately,\nlater changes to the matrix will have no effect until it is set\nagain. The matrix of the transform will multiply the current\ncontext transform.\n"},
  {"PushMatrix", PyvtkContext3D_PushMatrix, METH_VARARGS,
   "PushMatrix(self) -> None\nC++: void PushMatrix()\n\nPush/pop the transformation matrix for the painter (sets the\nunderlying matrix for the device when available).\n"},
  {"PopMatrix", PyvtkContext3D_PopMatrix, METH_VARARGS,
   "PopMatrix(self) -> None\nC++: void PopMatrix()\n\n"},
  {"EnableClippingPlane", PyvtkContext3D_EnableClippingPlane, METH_VARARGS,
   "EnableClippingPlane(self, i:int, planeEquation:[float, ...])\n    -> None\nC++: void EnableClippingPlane(int i, double *planeEquation)\n\nEnable/Disable the specified clipping plane. i is the index of\nthe clipping plane being enabled or disabled (0 - 5).\nplaneEquation points to the four coefficients of the equation for\nthe clipping plane: Ax + By + Cz + D = 0.  This is the equation\nformat expected by glClipPlane.\n"},
  {"DisableClippingPlane", PyvtkContext3D_DisableClippingPlane, METH_VARARGS,
   "DisableClippingPlane(self, i:int) -> None\nC++: void DisableClippingPlane(int i)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContext3D_Doc =
  "vtkContext3D - Class for drawing 3D primitives to a graphical context.\n\n"
  "Superclass: vtkObject\n\n"
  "This defines the interface for drawing onto a 3D context. The context\n"
  "must be set up with a vtkContextDevice3D derived class that provides\n"
  "the functions to facilitate the low level calls to the context.\n"
  "Currently only an OpenGL based device is provided.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContext3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingContext2D.vtkContext3D", // tp_name
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
  PyvtkContext3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContext3D_StaticNew()
{
  return vtkContext3D::New();
}

PyObject *PyvtkContext3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContext3D_Type, PyvtkContext3D_Methods,
    "vtkContext3D",
 &PyvtkContext3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContext3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContext3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContext3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

