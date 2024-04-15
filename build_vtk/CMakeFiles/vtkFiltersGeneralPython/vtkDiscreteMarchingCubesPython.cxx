// python wrapper for vtkDiscreteMarchingCubes
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDiscreteMarchingCubes.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscreteMarchingCubes(PyObject *dict); }
extern "C" { PyObject *PyvtkDiscreteMarchingCubes_ClassNew(); }


static PyObject *
PyvtkDiscreteMarchingCubes_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscreteMarchingCubes::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteMarchingCubes::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscreteMarchingCubes *tempr = vtkDiscreteMarchingCubes::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscreteMarchingCubes *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteMarchingCubes::NewInstance());

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
PyvtkDiscreteMarchingCubes_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDiscreteMarchingCubes::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDiscreteMarchingCubes::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_SetComputeAdjacentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeAdjacentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeAdjacentScalars(temp0);
    }
    else
    {
      op->vtkDiscreteMarchingCubes::SetComputeAdjacentScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_GetComputeAdjacentScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeAdjacentScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeAdjacentScalars() :
      op->vtkDiscreteMarchingCubes::GetComputeAdjacentScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAdjacentScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAdjacentScalarsOn();
    }
    else
    {
      op->vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeAdjacentScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteMarchingCubes *op = static_cast<vtkDiscreteMarchingCubes *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeAdjacentScalarsOff();
    }
    else
    {
      op->vtkDiscreteMarchingCubes::ComputeAdjacentScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscreteMarchingCubes_Methods[] = {
  {"IsTypeOf", PyvtkDiscreteMarchingCubes_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiscreteMarchingCubes_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiscreteMarchingCubes_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDiscreteMarchingCubes\nC++: static vtkDiscreteMarchingCubes *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiscreteMarchingCubes_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDiscreteMarchingCubes\nC++: vtkDiscreteMarchingCubes *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDiscreteMarchingCubes_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDiscreteMarchingCubes_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetComputeAdjacentScalars", PyvtkDiscreteMarchingCubes_SetComputeAdjacentScalars, METH_VARARGS,
   "SetComputeAdjacentScalars(self, _arg:int) -> None\nC++: virtual void SetComputeAdjacentScalars(vtkTypeBool _arg)\n\nSet/Get the computation of neighbouring voxel values.\n"},
  {"GetComputeAdjacentScalars", PyvtkDiscreteMarchingCubes_GetComputeAdjacentScalars, METH_VARARGS,
   "GetComputeAdjacentScalars(self) -> int\nC++: virtual vtkTypeBool GetComputeAdjacentScalars()\n\n"},
  {"ComputeAdjacentScalarsOn", PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOn, METH_VARARGS,
   "ComputeAdjacentScalarsOn(self) -> None\nC++: virtual void ComputeAdjacentScalarsOn()\n\n"},
  {"ComputeAdjacentScalarsOff", PyvtkDiscreteMarchingCubes_ComputeAdjacentScalarsOff, METH_VARARGS,
   "ComputeAdjacentScalarsOff(self) -> None\nC++: virtual void ComputeAdjacentScalarsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDiscreteMarchingCubes_Doc =
  "vtkDiscreteMarchingCubes - generate object boundaries from labelled\nvolumes\n\n"
  "Superclass: vtkMarchingCubes\n\n"
  "This filter extracts object boundaries from label maps (label maps\n"
  "are volumes in which each voxel is labeled according to the region in\n"
  "which it is contained).  The filter takes as input a volume (e.g., 3D\n"
  "structured point set) of segmentation labels and generates on output\n"
  "one or more models representing the boundaries between the specified\n"
  "label and the adjacent structures.  One or more label values must be\n"
  "specified to generate the models.  The boundary positions are always\n"
  "defined to be half-way between adjacent voxels. This filter works\n"
  "best with integral scalar values.\n\n"
  "If ComputeScalars is on (the default), each output cell will have\n"
  "cell data that corresponding to the scalar value (segmentation label)\n"
  "of the corresponding cube. Note that this differs from\n"
  "vtkMarchingCubes, which stores the scalar value as point data. The\n"
  "rationale for this difference is that cell vertices may be shared\n"
  "between multiple cells. This also means that the resultant polydata\n"
  "may be non-manifold (cell faces may be coincident). To further\n"
  "process the polydata, users should either: 1) extract cells that have\n"
  "a common scalar value using vtkThreshold, or 2) process the data with\n"
  "filters that can handle non-manifold polydata (e.g.\n"
  "vtkWindowedSincPolyDataFilter). Also note, Normals and Gradients are\n"
  "not computed.\n\n"
  "If ComputeAdjacentScalars is on (default is off), each output point\n"
  "will have point data that contains the label value of the\n"
  "neighbouring voxel. This allows to remove regions of the resulting\n"
  "vtkPolyData that are adjacent to specific label meshes. For example,\n"
  "if the input is a label image that was created by running a watershed\n"
  "transformation on a distance map followed by masking with the\n"
  "original binary segmentation. For further details and images see the\n"
  "VTK Journal paper: \"Providing values of adjacent voxel with\n"
  "vtkDiscreteMarchingCubes\" by Roman Grothausmann:\n"
  "http://hdl.handle.net/10380/3559\n"
  "http://www.vtkjournal.org/browse/publication/975\n\n"
  "@warning\n"
  "This filter is specialized to volumes. If you are interested in\n"
  "contouring other types of data, use the general vtkContourFilter. If\n"
  "you want to contour an image (i.e., a volume slice), use\n"
  "vtFlyingEdges2D or vtkMarchingSquares.\n\n"
  "@warning\n"
  "See also vtkPackLabels which is a utility class for renumbering the\n"
  "labels found in the input segmentation mask to contiguous forms of\n"
  "smaller type.\n\n"
  "@sa\n"
  "vtkSurfaceNets3D vtkDiscreteFlyingEdges3D vtkSurfaceNets2D\n"
  "vtkContourFilter vtkSliceCubes vtkMarchingSquares vtkDividingCubes\n"
  "vtkPackLabels\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDiscreteMarchingCubes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDiscreteMarchingCubes", // tp_name
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
  PyvtkDiscreteMarchingCubes_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscreteMarchingCubes_StaticNew()
{
  return vtkDiscreteMarchingCubes::New();
}

PyObject *PyvtkDiscreteMarchingCubes_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDiscreteMarchingCubes_Type, PyvtkDiscreteMarchingCubes_Methods,
    "vtkDiscreteMarchingCubes",
 &PyvtkDiscreteMarchingCubes_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMarchingCubes");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiscreteMarchingCubes(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscreteMarchingCubes_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscreteMarchingCubes", o) != 0)
  {
    Py_DECREF(o);
  }

}

