// python wrapper for vtkVoxelGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVoxelGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoxelGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkVoxelGrid_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVoxelGrid_Style_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkVoxelGrid.Style", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkVoxelGrid_Style_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkVoxelGrid_Style_Type, static_cast<int>(val));
}


static PyObject *
PyvtkVoxelGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoxelGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoxelGrid *tempr = vtkVoxelGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoxelGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelGrid::NewInstance());

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
PyvtkVoxelGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVoxelGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVoxelGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyle(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetConfigurationStyle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConfigurationStyle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetConfigurationStyle() :
      op->vtkVoxelGrid::GetConfigurationStyle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToManual(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToManual");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToManual();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToManual();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToLeafSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToLeafSize();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToLeafSize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetConfigurationStyleToAutomatic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConfigurationStyleToAutomatic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetConfigurationStyleToAutomatic();
    }
    else
    {
      op->vtkVoxelGrid::SetConfigurationStyleToAutomatic();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetDivisions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelGrid::SetDivisions(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetDivisions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetDivisions(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetDivisions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelGrid_SetDivisions_s1(self, args);
    case 1:
      return PyvtkVoxelGrid_SetDivisions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetDivisions");
  return nullptr;
}


static PyObject *
PyvtkVoxelGrid_GetDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetDivisions() :
      op->vtkVoxelGrid::GetDivisions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetLeafSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

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
      op->SetLeafSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelGrid::SetLeafSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetLeafSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLeafSize(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetLeafSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelGrid_SetLeafSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelGrid_SetLeafSize_s1(self, args);
    case 1:
      return PyvtkVoxelGrid_SetLeafSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLeafSize");
  return nullptr;
}


static PyObject *
PyvtkVoxelGrid_GetLeafSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLeafSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLeafSize() :
      op->vtkVoxelGrid::GetLeafSize());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetNumberOfPointsPerBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerBin(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetNumberOfPointsPerBin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBinMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBinMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBinMinValue() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBinMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBinMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBinMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBinMaxValue() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBinMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetNumberOfPointsPerBin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBin() :
      op->vtkVoxelGrid::GetNumberOfPointsPerBin());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_SetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  vtkInterpolationKernel *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInterpolationKernel"))
  {
    if (ap.IsBound())
    {
      op->SetKernel(temp0);
    }
    else
    {
      op->vtkVoxelGrid::SetKernel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelGrid_GetKernel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKernel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelGrid *op = static_cast<vtkVoxelGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInterpolationKernel *tempr = (ap.IsBound() ?
      op->GetKernel() :
      op->vtkVoxelGrid::GetKernel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoxelGrid_Methods[] = {
  {"IsTypeOf", PyvtkVoxelGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVoxelGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVoxelGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVoxelGrid\nC++: static vtkVoxelGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVoxelGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVoxelGrid\nC++: vtkVoxelGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVoxelGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVoxelGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetConfigurationStyle", PyvtkVoxelGrid_SetConfigurationStyle, METH_VARARGS,
   "SetConfigurationStyle(self, _arg:int) -> None\nC++: virtual void SetConfigurationStyle(int _arg)\n\nConfigure how the filter is to operate. The user can choose to\nmanually specify the binning volume (by setting its dimensions\nvia MANUAL style); or specify a leaf bin size in the x-y-z\ndirections (SPECIFY_LEAF_SIZE); or in AUTOMATIC style, use a\nrough average number of points in each bin guide the bin size and\nbinning volume dimensions. By default, AUTOMATIC configuration\nstyle is used.\n"},
  {"GetConfigurationStyle", PyvtkVoxelGrid_GetConfigurationStyle, METH_VARARGS,
   "GetConfigurationStyle(self) -> int\nC++: virtual int GetConfigurationStyle()\n\n"},
  {"SetConfigurationStyleToManual", PyvtkVoxelGrid_SetConfigurationStyleToManual, METH_VARARGS,
   "SetConfigurationStyleToManual(self) -> None\nC++: void SetConfigurationStyleToManual()\n\n"},
  {"SetConfigurationStyleToLeafSize", PyvtkVoxelGrid_SetConfigurationStyleToLeafSize, METH_VARARGS,
   "SetConfigurationStyleToLeafSize(self) -> None\nC++: void SetConfigurationStyleToLeafSize()\n\n"},
  {"SetConfigurationStyleToAutomatic", PyvtkVoxelGrid_SetConfigurationStyleToAutomatic, METH_VARARGS,
   "SetConfigurationStyleToAutomatic(self) -> None\nC++: void SetConfigurationStyleToAutomatic()\n\n"},
  {"SetDivisions", PyvtkVoxelGrid_SetDivisions, METH_VARARGS,
   "SetDivisions(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetDivisions(int _arg1, int _arg2, int _arg3)\nSetDivisions(self, _arg:(int, int, int)) -> None\nC++: virtual void SetDivisions(const int _arg[3])\n\nSet the number of divisions in x-y-z directions (the binning\nvolume dimensions). This data member is used when the\nconfiguration style is set to MANUAL. Note that these values may\nbe adjusted if <1 or too large.\n"},
  {"GetDivisions", PyvtkVoxelGrid_GetDivisions, METH_VARARGS,
   "GetDivisions(self) -> (int, int, int)\nC++: virtual int *GetDivisions()\n\n"},
  {"SetLeafSize", PyvtkVoxelGrid_SetLeafSize, METH_VARARGS,
   "SetLeafSize(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetLeafSize(double _arg1, double _arg2,\n    double _arg3)\nSetLeafSize(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLeafSize(const double _arg[3])\n\nSet the bin size in the x-y-z directions. This data member is\nused when the configuration style is set to SPECIFY_LEAF_SIZE.\nThe class will use these x-y-z lengths, within the bounding box\nof the point cloud, to determine the binning dimensions.\n"},
  {"GetLeafSize", PyvtkVoxelGrid_GetLeafSize, METH_VARARGS,
   "GetLeafSize(self) -> (float, float, float)\nC++: virtual double *GetLeafSize()\n\n"},
  {"SetNumberOfPointsPerBin", PyvtkVoxelGrid_SetNumberOfPointsPerBin, METH_VARARGS,
   "SetNumberOfPointsPerBin(self, _arg:int) -> None\nC++: virtual void SetNumberOfPointsPerBin(int _arg)\n\nSpecify the average number of points in each bin. Larger values\nresult in higher rates of subsampling. This data member is used\nwhen the configuration style is set to AUTOMATIC. The class will\nautomatically determine the binning dimensions in the x-y-z\ndirections.\n"},
  {"GetNumberOfPointsPerBinMinValue", PyvtkVoxelGrid_GetNumberOfPointsPerBinMinValue, METH_VARARGS,
   "GetNumberOfPointsPerBinMinValue(self) -> int\nC++: virtual int GetNumberOfPointsPerBinMinValue()\n\n"},
  {"GetNumberOfPointsPerBinMaxValue", PyvtkVoxelGrid_GetNumberOfPointsPerBinMaxValue, METH_VARARGS,
   "GetNumberOfPointsPerBinMaxValue(self) -> int\nC++: virtual int GetNumberOfPointsPerBinMaxValue()\n\n"},
  {"GetNumberOfPointsPerBin", PyvtkVoxelGrid_GetNumberOfPointsPerBin, METH_VARARGS,
   "GetNumberOfPointsPerBin(self) -> int\nC++: virtual int GetNumberOfPointsPerBin()\n\n"},
  {"SetKernel", PyvtkVoxelGrid_SetKernel, METH_VARARGS,
   "SetKernel(self, kernel:vtkInterpolationKernel) -> None\nC++: void SetKernel(vtkInterpolationKernel *kernel)\n\nSpecify an interpolation kernel to combine the point attributes.\nBy default a vtkLinearKernel is used (i.e., average values). The\ninterpolation kernel changes the basis of the interpolation.\n"},
  {"GetKernel", PyvtkVoxelGrid_GetKernel, METH_VARARGS,
   "GetKernel(self) -> vtkInterpolationKernel\nC++: virtual vtkInterpolationKernel *GetKernel()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVoxelGrid_Doc =
  "vtkVoxelGrid - subsample points using uniform binning\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVoxelGrid is a filter that subsamples a point cloud based on a\n"
  "regular binning of space. Basically the algorithm operates by\n"
  "dividing space into a volume of M x N x O bins, and then for each bin\n"
  "averaging all of the points positions into a single representative\n"
  "point. Several strategies for computing the binning can be used: 1)\n"
  "manual configuration of a requiring specifying bin dimensions (the\n"
  "bounds are calculated from the data); 2) by explicit specification of\n"
  "the bin size in world coordinates (x-y-z lengths); and 3) an\n"
  "automatic process in which the user specifies an approximate, average\n"
  "number of points per bin and dimensions and bin size are computed\n"
  "automatically. (Note that under the hood a vtkStaticPointLocator is\n"
  "used.)\n\n"
  "While any vtkPointSet type can be provided as input, the output is\n"
  "represented by an explicit representation of points via a\n"
  "vtkPolyData. This output polydata will populate its instance of\n"
  "vtkPoints, but no cells will be defined (i.e., no vtkVertex or\n"
  "vtkPolyVertex are contained in the output).\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkStaticPointLocator vtkPointCloudFilter vtkQuadricClustering\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVoxelGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersPoints.vtkVoxelGrid", // tp_name
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
  PyvtkVoxelGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoxelGrid_StaticNew()
{
  return vtkVoxelGrid::New();
}

PyObject *PyvtkVoxelGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVoxelGrid_Type, PyvtkVoxelGrid_Methods,
    "vtkVoxelGrid",
 &PyvtkVoxelGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkVoxelGrid_Style_Type);
  PyVTKEnum_Add(&PyvtkVoxelGrid_Style_Type, "vtkVoxelGrid.Style");

  o = (PyObject *)&PyvtkVoxelGrid_Style_Type;
  if (PyDict_SetItemString(d, "Style", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkVoxelGrid::Style cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "MANUAL", vtkVoxelGrid::MANUAL },
        { "SPECIFY_LEAF_SIZE", vtkVoxelGrid::SPECIFY_LEAF_SIZE },
        { "AUTOMATIC", vtkVoxelGrid::AUTOMATIC },
      };

    o = PyvtkVoxelGrid_Style_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoxelGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoxelGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoxelGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

