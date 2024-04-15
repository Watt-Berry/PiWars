// python wrapper for vtkImageDataGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageDataGeometryFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDataGeometryFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkImageDataGeometryFilter_ClassNew(); }


static PyObject *
PyvtkImageDataGeometryFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDataGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDataGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDataGeometryFilter *tempr = vtkImageDataGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDataGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDataGeometryFilter::NewInstance());

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
PyvtkImageDataGeometryFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageDataGeometryFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageDataGeometryFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
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
      op->vtkImageDataGeometryFilter::SetExtent(temp0);
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
PyvtkImageDataGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

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
      op->vtkImageDataGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageDataGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkImageDataGeometryFilter_SetExtent_s1(self, args);
    case 6:
      return PyvtkImageDataGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkImageDataGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetThresholdCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdCells(temp0);
    }
    else
    {
      op->vtkImageDataGeometryFilter::SetThresholdCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetThresholdCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetThresholdCells() :
      op->vtkImageDataGeometryFilter::GetThresholdCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdCellsOn();
    }
    else
    {
      op->vtkImageDataGeometryFilter::ThresholdCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdCellsOff();
    }
    else
    {
      op->vtkImageDataGeometryFilter::ThresholdCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetThresholdValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThresholdValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThresholdValue(temp0);
    }
    else
    {
      op->vtkImageDataGeometryFilter::SetThresholdValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetThresholdValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThresholdValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThresholdValue() :
      op->vtkImageDataGeometryFilter::GetThresholdValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdValueOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdValueOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdValueOn();
    }
    else
    {
      op->vtkImageDataGeometryFilter::ThresholdValueOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_ThresholdValueOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ThresholdValueOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ThresholdValueOff();
    }
    else
    {
      op->vtkImageDataGeometryFilter::ThresholdValueOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_SetOutputTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTriangles(temp0);
    }
    else
    {
      op->vtkImageDataGeometryFilter::SetOutputTriangles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_GetOutputTriangles(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTriangles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputTriangles() :
      op->vtkImageDataGeometryFilter::GetOutputTriangles());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_OutputTrianglesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTrianglesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTrianglesOn();
    }
    else
    {
      op->vtkImageDataGeometryFilter::OutputTrianglesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDataGeometryFilter_OutputTrianglesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputTrianglesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDataGeometryFilter *op = static_cast<vtkImageDataGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputTrianglesOff();
    }
    else
    {
      op->vtkImageDataGeometryFilter::OutputTrianglesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDataGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkImageDataGeometryFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDataGeometryFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDataGeometryFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageDataGeometryFilter\nC++: static vtkImageDataGeometryFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDataGeometryFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageDataGeometryFilter\nC++: vtkImageDataGeometryFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageDataGeometryFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageDataGeometryFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetExtent", PyvtkImageDataGeometryFilter_SetExtent, METH_VARARGS,
   "SetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: void SetExtent(int extent[6])\nSetExtent(self, iMin:int, iMax:int, jMin:int, jMax:int, kMin:int,\n    kMax:int) -> None\nC++: void SetExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\n\nSet / get the extent (imin,imax, jmin,jmax, kmin,kmax) indices.\n"},
  {"GetExtent", PyvtkImageDataGeometryFilter_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: int *GetExtent()\n\n"},
  {"SetThresholdCells", PyvtkImageDataGeometryFilter_SetThresholdCells, METH_VARARGS,
   "SetThresholdCells(self, _arg:int) -> None\nC++: virtual void SetThresholdCells(vtkTypeBool _arg)\n\nSet ThresholdCells to true if you wish to skip any voxel/pixels\nwhich have scalar values less than the specified threshold.\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {"GetThresholdCells", PyvtkImageDataGeometryFilter_GetThresholdCells, METH_VARARGS,
   "GetThresholdCells(self) -> int\nC++: virtual vtkTypeBool GetThresholdCells()\n\n"},
  {"ThresholdCellsOn", PyvtkImageDataGeometryFilter_ThresholdCellsOn, METH_VARARGS,
   "ThresholdCellsOn(self) -> None\nC++: virtual void ThresholdCellsOn()\n\n"},
  {"ThresholdCellsOff", PyvtkImageDataGeometryFilter_ThresholdCellsOff, METH_VARARGS,
   "ThresholdCellsOff(self) -> None\nC++: virtual void ThresholdCellsOff()\n\n"},
  {"SetThresholdValue", PyvtkImageDataGeometryFilter_SetThresholdValue, METH_VARARGS,
   "SetThresholdValue(self, _arg:float) -> None\nC++: virtual void SetThresholdValue(double _arg)\n\nSet ThresholdValue to the scalar value by which to threshold\ncells when extracting geometry when ThresholdCells is true. Cells\nwith scalar values greater than the threshold will be output.\n"},
  {"GetThresholdValue", PyvtkImageDataGeometryFilter_GetThresholdValue, METH_VARARGS,
   "GetThresholdValue(self) -> float\nC++: virtual double GetThresholdValue()\n\n"},
  {"ThresholdValueOn", PyvtkImageDataGeometryFilter_ThresholdValueOn, METH_VARARGS,
   "ThresholdValueOn(self) -> None\nC++: virtual void ThresholdValueOn()\n\n"},
  {"ThresholdValueOff", PyvtkImageDataGeometryFilter_ThresholdValueOff, METH_VARARGS,
   "ThresholdValueOff(self) -> None\nC++: virtual void ThresholdValueOff()\n\n"},
  {"SetOutputTriangles", PyvtkImageDataGeometryFilter_SetOutputTriangles, METH_VARARGS,
   "SetOutputTriangles(self, _arg:int) -> None\nC++: virtual void SetOutputTriangles(vtkTypeBool _arg)\n\nSet OutputTriangles to true if you wish to generate triangles\ninstead of quads when extracting cells from 2D imagedata\nCurrently this functionality is only implemented for 2D imagedata\n"},
  {"GetOutputTriangles", PyvtkImageDataGeometryFilter_GetOutputTriangles, METH_VARARGS,
   "GetOutputTriangles(self) -> int\nC++: virtual vtkTypeBool GetOutputTriangles()\n\n"},
  {"OutputTrianglesOn", PyvtkImageDataGeometryFilter_OutputTrianglesOn, METH_VARARGS,
   "OutputTrianglesOn(self) -> None\nC++: virtual void OutputTrianglesOn()\n\n"},
  {"OutputTrianglesOff", PyvtkImageDataGeometryFilter_OutputTrianglesOff, METH_VARARGS,
   "OutputTrianglesOff(self) -> None\nC++: virtual void OutputTrianglesOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageDataGeometryFilter_Doc =
  "vtkImageDataGeometryFilter - extract geometry for structured points\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkImageDataGeometryFilter is a filter that extracts geometry from a\n"
  "structured points dataset. By specifying appropriate i-j-k indices\n"
  "(via the \"Extent\" instance variable), it is possible to extract a\n"
  "point, a line, a plane (i.e., image), or a \"volume\" from dataset.\n"
  "(Since the output is of type polydata, the volume is actually a (n x\n"
  "m x o) region of points.)\n\n"
  "The extent specification is zero-offset. That is, the first k-plane\n"
  "in a 50x50x50 volume is given by (0,49, 0,49, 0,0).\n"
  "@warning\n"
  "If you don't know the dimensions of the input dataset, you can use a\n"
  "large number to specify extent (the number will be clamped\n"
  "appropriately). For example, if the dataset dimensions are 50x50x50,\n"
  "and you want a the fifth k-plane, you can use the extents (0,100,\n"
  "0,100, 4,4). The 100 will automatically be clamped to 49.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkStructuredGridSource\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageDataGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkImageDataGeometryFilter", // tp_name
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
  PyvtkImageDataGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDataGeometryFilter_StaticNew()
{
  return vtkImageDataGeometryFilter::New();
}

PyObject *PyvtkImageDataGeometryFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageDataGeometryFilter_Type, PyvtkImageDataGeometryFilter_Methods,
    "vtkImageDataGeometryFilter",
 &PyvtkImageDataGeometryFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDataGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDataGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDataGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

