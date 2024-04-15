// python wrapper for vtkLassoStencilSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLassoStencilSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLassoStencilSource(PyObject *dict); }
extern "C" { PyObject *PyvtkLassoStencilSource_ClassNew(); }


static PyObject *
PyvtkLassoStencilSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLassoStencilSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLassoStencilSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLassoStencilSource *tempr = vtkLassoStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLassoStencilSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLassoStencilSource::NewInstance());

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
PyvtkLassoStencilSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLassoStencilSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLassoStencilSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShape() :
      op->vtkLassoStencilSource::GetShape());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShape(temp0);
    }
    else
    {
      op->vtkLassoStencilSource::SetShape(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMinValue() :
      op->vtkLassoStencilSource::GetShapeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShapeMaxValue() :
      op->vtkLassoStencilSource::GetShapeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShapeToPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToPolygon();
    }
    else
    {
      op->vtkLassoStencilSource::SetShapeToPolygon();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetShapeToSpline(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShapeToSpline");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetShapeToSpline();
    }
    else
    {
      op->vtkLassoStencilSource::SetShapeToSpline();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetShapeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShapeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetShapeAsString() :
      op->vtkLassoStencilSource::GetShapeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetPoints(temp0);
    }
    else
    {
      op->vtkLassoStencilSource::SetPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetPoints() :
      op->vtkLassoStencilSource::GetPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientation() :
      op->vtkLassoStencilSource::GetSliceOrientation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetSliceOrientation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSliceOrientation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSliceOrientation(temp0);
    }
    else
    {
      op->vtkLassoStencilSource::SetSliceOrientation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientationMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientationMinValue() :
      op->vtkLassoStencilSource::GetSliceOrientationMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSliceOrientationMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSliceOrientationMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSliceOrientationMaxValue() :
      op->vtkLassoStencilSource::GetSliceOrientationMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_SetSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->SetSlicePoints(temp0, temp1);
    }
    else
    {
      op->vtkLassoStencilSource::SetSlicePoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPoints *tempr = (ap.IsBound() ?
      op->GetSlicePoints(temp0) :
      op->vtkLassoStencilSource::GetSlicePoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_RemoveAllSlicePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSlicePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSlicePoints();
    }
    else
    {
      op->vtkLassoStencilSource::RemoveAllSlicePoints();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLassoStencilSource_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLassoStencilSource *op = static_cast<vtkLassoStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkLassoStencilSource::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLassoStencilSource_Methods[] = {
  {"IsTypeOf", PyvtkLassoStencilSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLassoStencilSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLassoStencilSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLassoStencilSource\nC++: static vtkLassoStencilSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLassoStencilSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLassoStencilSource\nC++: vtkLassoStencilSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLassoStencilSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLassoStencilSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetShape", PyvtkLassoStencilSource_GetShape, METH_VARARGS,
   "GetShape(self) -> int\nC++: virtual int GetShape()\n\nThe shape to use, default is \"Polygon\".  The spline is a cardinal\nspline.  Bezier splines are not yet supported.\n"},
  {"SetShape", PyvtkLassoStencilSource_SetShape, METH_VARARGS,
   "SetShape(self, _arg:int) -> None\nC++: virtual void SetShape(int _arg)\n\n"},
  {"GetShapeMinValue", PyvtkLassoStencilSource_GetShapeMinValue, METH_VARARGS,
   "GetShapeMinValue(self) -> int\nC++: virtual int GetShapeMinValue()\n\n"},
  {"GetShapeMaxValue", PyvtkLassoStencilSource_GetShapeMaxValue, METH_VARARGS,
   "GetShapeMaxValue(self) -> int\nC++: virtual int GetShapeMaxValue()\n\n"},
  {"SetShapeToPolygon", PyvtkLassoStencilSource_SetShapeToPolygon, METH_VARARGS,
   "SetShapeToPolygon(self) -> None\nC++: void SetShapeToPolygon()\n\n"},
  {"SetShapeToSpline", PyvtkLassoStencilSource_SetShapeToSpline, METH_VARARGS,
   "SetShapeToSpline(self) -> None\nC++: void SetShapeToSpline()\n\n"},
  {"GetShapeAsString", PyvtkLassoStencilSource_GetShapeAsString, METH_VARARGS,
   "GetShapeAsString(self) -> str\nC++: virtual const char *GetShapeAsString()\n\n"},
  {"SetPoints", PyvtkLassoStencilSource_SetPoints, METH_VARARGS,
   "SetPoints(self, points:vtkPoints) -> None\nC++: virtual void SetPoints(vtkPoints *points)\n\nThe points that make up the lassoo.  The loop does not have to be\nclosed, the last point will automatically be connected to the\nfirst point by a straight line segment.\n"},
  {"GetPoints", PyvtkLassoStencilSource_GetPoints, METH_VARARGS,
   "GetPoints(self) -> vtkPoints\nC++: virtual vtkPoints *GetPoints()\n\n"},
  {"GetSliceOrientation", PyvtkLassoStencilSource_GetSliceOrientation, METH_VARARGS,
   "GetSliceOrientation(self) -> int\nC++: virtual int GetSliceOrientation()\n\nThe slice orientation.  The default is 2, which is XY. Other\nvalues are 0, which is YZ, and 1, which is XZ.\n"},
  {"SetSliceOrientation", PyvtkLassoStencilSource_SetSliceOrientation, METH_VARARGS,
   "SetSliceOrientation(self, _arg:int) -> None\nC++: virtual void SetSliceOrientation(int _arg)\n\n"},
  {"GetSliceOrientationMinValue", PyvtkLassoStencilSource_GetSliceOrientationMinValue, METH_VARARGS,
   "GetSliceOrientationMinValue(self) -> int\nC++: virtual int GetSliceOrientationMinValue()\n\n"},
  {"GetSliceOrientationMaxValue", PyvtkLassoStencilSource_GetSliceOrientationMaxValue, METH_VARARGS,
   "GetSliceOrientationMaxValue(self) -> int\nC++: virtual int GetSliceOrientationMaxValue()\n\n"},
  {"SetSlicePoints", PyvtkLassoStencilSource_SetSlicePoints, METH_VARARGS,
   "SetSlicePoints(self, i:int, points:vtkPoints) -> None\nC++: virtual void SetSlicePoints(int i, vtkPoints *points)\n\nThe points for a particular slice.  This will override the points\nthat were set by calling SetPoints() for the slice. To clear the\nsetting, call SetSlicePoints(slice, nullptr).\n"},
  {"GetSlicePoints", PyvtkLassoStencilSource_GetSlicePoints, METH_VARARGS,
   "GetSlicePoints(self, i:int) -> vtkPoints\nC++: virtual vtkPoints *GetSlicePoints(int i)\n\n"},
  {"RemoveAllSlicePoints", PyvtkLassoStencilSource_RemoveAllSlicePoints, METH_VARARGS,
   "RemoveAllSlicePoints(self) -> None\nC++: virtual void RemoveAllSlicePoints()\n\nRemove points from all slices.\n"},
  {"GetMTime", PyvtkLassoStencilSource_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverload GetMTime() to include the timestamp on the points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLassoStencilSource_Doc =
  "vtkLassoStencilSource - Create a stencil from a contour\n\n"
  "Superclass: vtkImageStencilSource\n\n"
  "vtkLassoStencilSource will create an image stencil from a set of\n"
  "points that define a contour.  Its output can be used with\n"
  "vtkImageStecil or other vtk classes that apply a stencil to an image.\n"
  "@sa\n"
  "vtkROIStencilSource vtkPolyDataToImageStencil@par Thanks: Thanks to\n"
  "David Gobbi for contributing this class to VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLassoStencilSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStencil.vtkLassoStencilSource", // tp_name
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
  PyvtkLassoStencilSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLassoStencilSource_StaticNew()
{
  return vtkLassoStencilSource::New();
}

PyObject *PyvtkLassoStencilSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLassoStencilSource_Type, PyvtkLassoStencilSource_Methods,
    "vtkLassoStencilSource",
 &PyvtkLassoStencilSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageStencilSource");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "POLYGON", vtkLassoStencilSource::POLYGON },
        { "SPLINE", vtkLassoStencilSource::SPLINE },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLassoStencilSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLassoStencilSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLassoStencilSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

