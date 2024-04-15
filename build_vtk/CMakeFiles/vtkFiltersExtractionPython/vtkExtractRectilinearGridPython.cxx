// python wrapper for vtkExtractRectilinearGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExtractRectilinearGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExtractRectilinearGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkExtractRectilinearGrid_ClassNew(); }


static PyObject *
PyvtkExtractRectilinearGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExtractRectilinearGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExtractRectilinearGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExtractRectilinearGrid *tempr = vtkExtractRectilinearGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExtractRectilinearGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExtractRectilinearGrid::NewInstance());

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
PyvtkExtractRectilinearGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExtractRectilinearGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExtractRectilinearGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetVOI_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

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
      op->SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExtractRectilinearGrid::SetVOI(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetVOI_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetVOI(temp0);
    }
    else
    {
      op->vtkExtractRectilinearGrid::SetVOI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetVOI(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkExtractRectilinearGrid_SetVOI_s1(self, args);
    case 1:
      return PyvtkExtractRectilinearGrid_SetVOI_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetVOI");
  return nullptr;
}


static PyObject *
PyvtkExtractRectilinearGrid_GetVOI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVOI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetVOI() :
      op->vtkExtractRectilinearGrid::GetVOI());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

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
      op->SetSampleRate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkExtractRectilinearGrid::SetSampleRate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSampleRate(temp0);
    }
    else
    {
      op->vtkExtractRectilinearGrid::SetSampleRate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExtractRectilinearGrid_SetSampleRate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkExtractRectilinearGrid_SetSampleRate_s1(self, args);
    case 1:
      return PyvtkExtractRectilinearGrid_SetSampleRate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSampleRate");
  return nullptr;
}


static PyObject *
PyvtkExtractRectilinearGrid_GetSampleRate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSampleRate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetSampleRate() :
      op->vtkExtractRectilinearGrid::GetSampleRate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_SetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIncludeBoundary(temp0);
    }
    else
    {
      op->vtkExtractRectilinearGrid::SetIncludeBoundary(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_GetIncludeBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIncludeBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIncludeBoundary() :
      op->vtkExtractRectilinearGrid::GetIncludeBoundary());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IncludeBoundaryOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOn();
    }
    else
    {
      op->vtkExtractRectilinearGrid::IncludeBoundaryOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExtractRectilinearGrid_IncludeBoundaryOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IncludeBoundaryOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExtractRectilinearGrid *op = static_cast<vtkExtractRectilinearGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->IncludeBoundaryOff();
    }
    else
    {
      op->vtkExtractRectilinearGrid::IncludeBoundaryOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExtractRectilinearGrid_Methods[] = {
  {"IsTypeOf", PyvtkExtractRectilinearGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExtractRectilinearGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExtractRectilinearGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExtractRectilinearGrid\nC++: static vtkExtractRectilinearGrid *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExtractRectilinearGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExtractRectilinearGrid\nC++: vtkExtractRectilinearGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExtractRectilinearGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExtractRectilinearGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetVOI", PyvtkExtractRectilinearGrid_SetVOI, METH_VARARGS,
   "SetVOI(self, _arg1:int, _arg2:int, _arg3:int, _arg4:int,\n    _arg5:int, _arg6:int) -> None\nC++: virtual void SetVOI(int _arg1, int _arg2, int _arg3,\n    int _arg4, int _arg5, int _arg6)\nSetVOI(self, _arg:(int, int, int, int, int, int)) -> None\nC++: virtual void SetVOI(const int _arg[6])\n\nSpecify i-j-k (min,max) pairs to extract. The resulting\nstructured grid dataset can be of any topological dimension\n(i.e., point, line, plane, or 3D grid).\n"},
  {"GetVOI", PyvtkExtractRectilinearGrid_GetVOI, METH_VARARGS,
   "GetVOI(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetVOI()\n\n"},
  {"SetSampleRate", PyvtkExtractRectilinearGrid_SetSampleRate, METH_VARARGS,
   "SetSampleRate(self, _arg1:int, _arg2:int, _arg3:int) -> None\nC++: virtual void SetSampleRate(int _arg1, int _arg2, int _arg3)\nSetSampleRate(self, _arg:(int, int, int)) -> None\nC++: virtual void SetSampleRate(const int _arg[3])\n\nSet the sampling rate in the i, j, and k directions. If the rate\nis > 1, then the resulting VOI will be subsampled representation\nof the input. For example, if the SampleRate=(2,2,2), every other\npoint will be selected, resulting in a volume 1/8th the original\nsize. Initial value is (1,1,1).\n"},
  {"GetSampleRate", PyvtkExtractRectilinearGrid_GetSampleRate, METH_VARARGS,
   "GetSampleRate(self) -> (int, int, int)\nC++: virtual int *GetSampleRate()\n\n"},
  {"SetIncludeBoundary", PyvtkExtractRectilinearGrid_SetIncludeBoundary, METH_VARARGS,
   "SetIncludeBoundary(self, _arg:int) -> None\nC++: virtual void SetIncludeBoundary(vtkTypeBool _arg)\n\nControl whether to enforce that the \"boundary\" of the grid is\noutput in the subsampling process. (This ivar only has effect\nwhen the SampleRate in any direction is not equal to 1.) When\nthis ivar IncludeBoundary is on, the subsampling will always\ninclude the boundary of the grid even though the sample rate is\nnot an even multiple of the grid dimensions. (By default\nIncludeBoundary is off.)\n"},
  {"GetIncludeBoundary", PyvtkExtractRectilinearGrid_GetIncludeBoundary, METH_VARARGS,
   "GetIncludeBoundary(self) -> int\nC++: virtual vtkTypeBool GetIncludeBoundary()\n\n"},
  {"IncludeBoundaryOn", PyvtkExtractRectilinearGrid_IncludeBoundaryOn, METH_VARARGS,
   "IncludeBoundaryOn(self) -> None\nC++: virtual void IncludeBoundaryOn()\n\n"},
  {"IncludeBoundaryOff", PyvtkExtractRectilinearGrid_IncludeBoundaryOff, METH_VARARGS,
   "IncludeBoundaryOff(self) -> None\nC++: virtual void IncludeBoundaryOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExtractRectilinearGrid_Doc =
  "vtkExtractRectilinearGrid - Extract a sub grid (VOI) from the\nstructured rectilinear dataset.\n\n"
  "Superclass: vtkRectilinearGridAlgorithm\n\n"
  "vtkExtractRectilinearGrid rounds out the set of filters that extract\n"
  "a subgrid out of a larger structured data set.  RIght now, this\n"
  "filter only supports extracting a VOI.  In the future, it might\n"
  "support strides like the vtkExtract grid filter.\n\n"
  "@sa\n"
  "vtkExtractGrid vtkImageClip vtkGeometryFilter vtkExtractGeometry\n"
  "vtkExtractVOI vtkStructuredGridGeometryFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExtractRectilinearGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersExtraction.vtkExtractRectilinearGrid", // tp_name
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
  PyvtkExtractRectilinearGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExtractRectilinearGrid_StaticNew()
{
  return vtkExtractRectilinearGrid::New();
}

PyObject *PyvtkExtractRectilinearGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExtractRectilinearGrid_Type, PyvtkExtractRectilinearGrid_Methods,
    "vtkExtractRectilinearGrid",
 &PyvtkExtractRectilinearGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkRectilinearGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExtractRectilinearGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExtractRectilinearGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExtractRectilinearGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

