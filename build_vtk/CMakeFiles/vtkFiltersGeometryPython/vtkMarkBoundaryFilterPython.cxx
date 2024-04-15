// python wrapper for vtkMarkBoundaryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMarkBoundaryFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMarkBoundaryFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkMarkBoundaryFilter_ClassNew(); }


static PyObject *
PyvtkMarkBoundaryFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMarkBoundaryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMarkBoundaryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMarkBoundaryFilter *tempr = vtkMarkBoundaryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMarkBoundaryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMarkBoundaryFilter::NewInstance());

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
PyvtkMarkBoundaryFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMarkBoundaryFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMarkBoundaryFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_SetGenerateBoundaryFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateBoundaryFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateBoundaryFaces(temp0);
    }
    else
    {
      op->vtkMarkBoundaryFilter::SetGenerateBoundaryFaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GetGenerateBoundaryFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateBoundaryFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetGenerateBoundaryFaces() :
      op->vtkMarkBoundaryFilter::GetGenerateBoundaryFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GenerateBoundaryFacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBoundaryFacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBoundaryFacesOn();
    }
    else
    {
      op->vtkMarkBoundaryFilter::GenerateBoundaryFacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GenerateBoundaryFacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateBoundaryFacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateBoundaryFacesOff();
    }
    else
    {
      op->vtkMarkBoundaryFilter::GenerateBoundaryFacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_SetBoundaryPointsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryPointsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryPointsName(temp0);
    }
    else
    {
      op->vtkMarkBoundaryFilter::SetBoundaryPointsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GetBoundaryPointsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryPointsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBoundaryPointsName() :
      op->vtkMarkBoundaryFilter::GetBoundaryPointsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_SetBoundaryCellsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryCellsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryCellsName(temp0);
    }
    else
    {
      op->vtkMarkBoundaryFilter::SetBoundaryCellsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GetBoundaryCellsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryCellsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBoundaryCellsName() :
      op->vtkMarkBoundaryFilter::GetBoundaryCellsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_SetBoundaryFacesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoundaryFacesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoundaryFacesName(temp0);
    }
    else
    {
      op->vtkMarkBoundaryFilter::SetBoundaryFacesName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMarkBoundaryFilter_GetBoundaryFacesName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoundaryFacesName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMarkBoundaryFilter *op = static_cast<vtkMarkBoundaryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetBoundaryFacesName() :
      op->vtkMarkBoundaryFilter::GetBoundaryFacesName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkMarkBoundaryFilter_Methods[] = {
  {"IsTypeOf", PyvtkMarkBoundaryFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMarkBoundaryFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMarkBoundaryFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMarkBoundaryFilter\nC++: static vtkMarkBoundaryFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMarkBoundaryFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMarkBoundaryFilter\nC++: vtkMarkBoundaryFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMarkBoundaryFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMarkBoundaryFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGenerateBoundaryFaces", PyvtkMarkBoundaryFilter_SetGenerateBoundaryFaces, METH_VARARGS,
   "SetGenerateBoundaryFaces(self, _arg:bool) -> None\nC++: virtual void SetGenerateBoundaryFaces(bool _arg)\n\nEnable the creation of the boundary faces array. This array\nencodes which faces are on the boundary of the ith cell. By\ndefault, this array is not created. To use this array, bit\nmasking is required to determine if the jth face is on the\nboundary.\n"},
  {"GetGenerateBoundaryFaces", PyvtkMarkBoundaryFilter_GetGenerateBoundaryFaces, METH_VARARGS,
   "GetGenerateBoundaryFaces(self) -> bool\nC++: virtual bool GetGenerateBoundaryFaces()\n\n"},
  {"GenerateBoundaryFacesOn", PyvtkMarkBoundaryFilter_GenerateBoundaryFacesOn, METH_VARARGS,
   "GenerateBoundaryFacesOn(self) -> None\nC++: virtual void GenerateBoundaryFacesOn()\n\n"},
  {"GenerateBoundaryFacesOff", PyvtkMarkBoundaryFilter_GenerateBoundaryFacesOff, METH_VARARGS,
   "GenerateBoundaryFacesOff(self) -> None\nC++: virtual void GenerateBoundaryFacesOff()\n\n"},
  {"SetBoundaryPointsName", PyvtkMarkBoundaryFilter_SetBoundaryPointsName, METH_VARARGS,
   "SetBoundaryPointsName(self, _arg:str) -> None\nC++: virtual void SetBoundaryPointsName(const char *_arg)\n\nSpecify the names of the two data arrays which indicate which\ncells and points are on the boundary. By default,\n\"BoundaryPoints\", \"BoundaryCells\", and \"BoundaryFaces\" are used.\n"},
  {"GetBoundaryPointsName", PyvtkMarkBoundaryFilter_GetBoundaryPointsName, METH_VARARGS,
   "GetBoundaryPointsName(self) -> str\nC++: virtual char *GetBoundaryPointsName()\n\n"},
  {"SetBoundaryCellsName", PyvtkMarkBoundaryFilter_SetBoundaryCellsName, METH_VARARGS,
   "SetBoundaryCellsName(self, _arg:str) -> None\nC++: virtual void SetBoundaryCellsName(const char *_arg)\n\n"},
  {"GetBoundaryCellsName", PyvtkMarkBoundaryFilter_GetBoundaryCellsName, METH_VARARGS,
   "GetBoundaryCellsName(self) -> str\nC++: virtual char *GetBoundaryCellsName()\n\n"},
  {"SetBoundaryFacesName", PyvtkMarkBoundaryFilter_SetBoundaryFacesName, METH_VARARGS,
   "SetBoundaryFacesName(self, _arg:str) -> None\nC++: virtual void SetBoundaryFacesName(const char *_arg)\n\n"},
  {"GetBoundaryFacesName", PyvtkMarkBoundaryFilter_GetBoundaryFacesName, METH_VARARGS,
   "GetBoundaryFacesName(self) -> str\nC++: virtual char *GetBoundaryFacesName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMarkBoundaryFilter_Doc =
  "vtkMarkBoundaryFilter - mark points and cells that lie on the\nboundary of a dataset\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkMarkBoundaryFilter is a general-purpose filter to mark those cells\n"
  "and points on the boundary of a dataset. The output of the filter is\n"
  "identical to the input, with the exception that two, new data arrays\n"
  "are added to the output that indicate which input points, and input\n"
  "cells, are on the boundary. (Cells and points on the boundary are\n"
  "indicated by a value ==1, otherwise ==0, and are accessed in the\n"
  "appropriate data array by cell id or point id. The output data arrays\n"
  "are of type vtkUnsignedChar.)\n\n"
  "In general, n-dimensional faces are on the boundary of a\n"
  "(n+1)-dataset if used by a single (n+1)-dimensional cell. So for\n"
  "example the boundary cells of a volumetric dataset are those with\n"
  "quad faces used by only one voxel. Boundary points are those points\n"
  "used by the boundary faces. A cell may have multiple boundary faces.\n\n"
  "An optional array can be produced that encodes the boundary faces of\n"
  "each cell. For each cell cellId that is on the boundary, the nth bit\n"
  "of the value of the faces tuple at location cellId is set.\n\n"
  "@warning\n"
  "This filter is similar to vtkGeometryFilter in that it identifies\n"
  "boundary cells and points. However, vtkGeometryFilter produces output\n"
  "boundary faces and points as output. vtkMarkBoundaryFilter simply\n"
  "identifies which cells and points are on the boundary. (This filter\n"
  "is often used in parallel computing applications to help distribute\n"
  "data across multiple processes.)\n\n"
  "@warning\n"
  "The points and cells boundary arrays are of type unsigned char.  The\n"
  "optional boundary faces array is of type of vtkIdType (either a\n"
  "32-bit or 64-but integral value depending on compilation flags).\n"
  "Hence if the number of cell faces exceeds the number of bits in a\n"
  "face array value, then the faces array cannot properly encode the\n"
  "boundary faces for that cell. This may be a problem for cell types\n"
  "with an arbitrary number of faces such as vtkPolyhedron and\n"
  "vtkPolygon.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkDataSetSurfaceFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMarkBoundaryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkMarkBoundaryFilter", // tp_name
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
  PyvtkMarkBoundaryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMarkBoundaryFilter_StaticNew()
{
  return vtkMarkBoundaryFilter::New();
}

PyObject *PyvtkMarkBoundaryFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMarkBoundaryFilter_Type, PyvtkMarkBoundaryFilter_Methods,
    "vtkMarkBoundaryFilter",
 &PyvtkMarkBoundaryFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMarkBoundaryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMarkBoundaryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMarkBoundaryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

