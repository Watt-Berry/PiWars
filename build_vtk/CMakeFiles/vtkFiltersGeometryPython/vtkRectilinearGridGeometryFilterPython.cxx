// python wrapper for vtkRectilinearGridGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRectilinearGridGeometryFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRectilinearGridGeometryFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkRectilinearGridGeometryFilter_ClassNew(); }


static PyObject *
PyvtkRectilinearGridGeometryFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRectilinearGridGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRectilinearGridGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRectilinearGridGeometryFilter *tempr = vtkRectilinearGridGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectilinearGridGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRectilinearGridGeometryFilter::NewInstance());

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
PyvtkRectilinearGridGeometryFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRectilinearGridGeometryFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRectilinearGridGeometryFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkRectilinearGridGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkRectilinearGridGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

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
      op->vtkRectilinearGridGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRectilinearGridGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRectilinearGridGeometryFilter *op = static_cast<vtkRectilinearGridGeometryFilter *>(vp);

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
      op->vtkRectilinearGridGeometryFilter::SetExtent(temp0);
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
PyvtkRectilinearGridGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkRectilinearGridGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkRectilinearGridGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}

static PyMethodDef PyvtkRectilinearGridGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkRectilinearGridGeometryFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRectilinearGridGeometryFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRectilinearGridGeometryFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRectilinearGridGeometryFilter\nC++: static vtkRectilinearGridGeometryFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRectilinearGridGeometryFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRectilinearGridGeometryFilter\nC++: vtkRectilinearGridGeometryFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRectilinearGridGeometryFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRectilinearGridGeometryFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetExtent", PyvtkRectilinearGridGeometryFilter_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetExtent()\n\nGet the extent in topological coordinate range (imin,imax,\njmin,jmax, kmin,kmax).\n"},
  {"SetExtent", PyvtkRectilinearGridGeometryFilter_SetExtent, METH_VARARGS,
   "SetExtent(self, iMin:int, iMax:int, jMin:int, jMax:int, kMin:int,\n    kMax:int) -> None\nC++: void SetExtent(int iMin, int iMax, int jMin, int jMax,\n    int kMin, int kMax)\nSetExtent(self, extent:[int, int, int, int, int, int]) -> None\nC++: void SetExtent(int extent[6])\n\nSpecify (imin,imax, jmin,jmax, kmin,kmax) indices.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRectilinearGridGeometryFilter_Doc =
  "vtkRectilinearGridGeometryFilter - extract geometry for a rectilinear\ngrid\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkRectilinearGridGeometryFilter is a filter that extracts geometry\n"
  "from a rectilinear grid. By specifying appropriate i-j-k indices, it\n"
  "is possible to extract a point, a curve, a surface, or a \"volume\".\n"
  "The volume is actually a (n x m x o) region of points.\n\n"
  "The extent specification is zero-offset. That is, the first k-plane\n"
  "in a 50x50x50 rectilinear grid is given by (0,49, 0,49, 0,0).\n\n"
  "@warning\n"
  "If you don't know the dimensions of the input dataset, you can use a\n"
  "large number to specify extent (the number will be clamped\n"
  "appropriately). For example, if the dataset dimensions are 50x50x50,\n"
  "and you want a the fifth k-plane, you can use the extents (0,100,\n"
  "0,100, 4,4). The 100 will automatically be clamped to 49.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkExtractGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRectilinearGridGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkRectilinearGridGeometryFilter", // tp_name
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
  PyvtkRectilinearGridGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRectilinearGridGeometryFilter_StaticNew()
{
  return vtkRectilinearGridGeometryFilter::New();
}

PyObject *PyvtkRectilinearGridGeometryFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRectilinearGridGeometryFilter_Type, PyvtkRectilinearGridGeometryFilter_Methods,
    "vtkRectilinearGridGeometryFilter",
 &PyvtkRectilinearGridGeometryFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRectilinearGridGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRectilinearGridGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRectilinearGridGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

