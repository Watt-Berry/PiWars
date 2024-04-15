// python wrapper for vtkVoxelContoursToSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVoxelContoursToSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVoxelContoursToSurfaceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkVoxelContoursToSurfaceFilter_ClassNew(); }


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVoxelContoursToSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVoxelContoursToSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVoxelContoursToSurfaceFilter *tempr = vtkVoxelContoursToSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVoxelContoursToSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVoxelContoursToSurfaceFilter::NewInstance());

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
PyvtkVoxelContoursToSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVoxelContoursToSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVoxelContoursToSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetMemoryLimitInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMemoryLimitInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMemoryLimitInBytes(temp0);
    }
    else
    {
      op->vtkVoxelContoursToSurfaceFilter::SetMemoryLimitInBytes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetMemoryLimitInBytes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMemoryLimitInBytes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMemoryLimitInBytes() :
      op->vtkVoxelContoursToSurfaceFilter::GetMemoryLimitInBytes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

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
      op->SetSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkVoxelContoursToSurfaceFilter::SetSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSpacing(temp0);
    }
    else
    {
      op->vtkVoxelContoursToSurfaceFilter::SetSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkVoxelContoursToSurfaceFilter_SetSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s1(self, args);
    case 1:
      return PyvtkVoxelContoursToSurfaceFilter_SetSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSpacing");
  return nullptr;
}


static PyObject *
PyvtkVoxelContoursToSurfaceFilter_GetSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVoxelContoursToSurfaceFilter *op = static_cast<vtkVoxelContoursToSurfaceFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSpacing() :
      op->vtkVoxelContoursToSurfaceFilter::GetSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkVoxelContoursToSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkVoxelContoursToSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVoxelContoursToSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVoxelContoursToSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVoxelContoursToSurfaceFilter\nC++: static vtkVoxelContoursToSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVoxelContoursToSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVoxelContoursToSurfaceFilter\nC++: vtkVoxelContoursToSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVoxelContoursToSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVoxelContoursToSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMemoryLimitInBytes", PyvtkVoxelContoursToSurfaceFilter_SetMemoryLimitInBytes, METH_VARARGS,
   "SetMemoryLimitInBytes(self, _arg:int) -> None\nC++: virtual void SetMemoryLimitInBytes(int _arg)\n\nSet / Get the memory limit in bytes for this filter. This is the\nlimit of the size of the structured points data set that is\ncreated for intermediate processing. The data will be streamed\nthrough this volume in as many pieces as necessary.\n"},
  {"GetMemoryLimitInBytes", PyvtkVoxelContoursToSurfaceFilter_GetMemoryLimitInBytes, METH_VARARGS,
   "GetMemoryLimitInBytes(self) -> int\nC++: virtual int GetMemoryLimitInBytes()\n\n"},
  {"SetSpacing", PyvtkVoxelContoursToSurfaceFilter_SetSpacing, METH_VARARGS,
   "SetSpacing(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetSpacing(const double _arg[3])\n\n"},
  {"GetSpacing", PyvtkVoxelContoursToSurfaceFilter_GetSpacing, METH_VARARGS,
   "GetSpacing(self) -> (float, float, float)\nC++: virtual double *GetSpacing()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVoxelContoursToSurfaceFilter_Doc =
  "vtkVoxelContoursToSurfaceFilter - create surface from contours\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkVoxelContoursToSurfaceFilter is a filter that takes contours and\n"
  "produces surfaces. There are some restrictions for the contours:\n\n"
  "- The contours are input as vtkPolyData, with the contours being\n"
  "  polys in the vtkPolyData.\n"
  "- The contours lie on XY planes - each contour has a constant Z\n"
  "- The contours are ordered in the polys of the vtkPolyData such that\n"
  "  all contours on the first (lowest) XY plane are first, then\n"
  "  continuing in order of increasing Z value.\n"
  "- The X, Y and Z coordinates are all integer values.\n"
  "- The desired sampling of the contour data is 1x1x1 - Aspect can be\n"
  "  used to control the aspect ratio in the output polygonal dataset.\n\n"
  "This filter takes the contours and produces a structured points\n"
  "dataset of signed floating point number indicating distance from a\n"
  "contour. A contouring filter is then applied to generate 3D surfaces\n"
  "from a stack of 2D contour distance slices. This is done in a\n"
  "streaming fashion so as not to use to much memory.\n\n"
  "@sa\n"
  "vtkPolyDataAlgorithm\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVoxelContoursToSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkVoxelContoursToSurfaceFilter", // tp_name
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
  PyvtkVoxelContoursToSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkVoxelContoursToSurfaceFilter_StaticNew()
{
  return vtkVoxelContoursToSurfaceFilter::New();
}

PyObject *PyvtkVoxelContoursToSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVoxelContoursToSurfaceFilter_Type, PyvtkVoxelContoursToSurfaceFilter_Methods,
    "vtkVoxelContoursToSurfaceFilter",
 &PyvtkVoxelContoursToSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVoxelContoursToSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVoxelContoursToSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVoxelContoursToSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

