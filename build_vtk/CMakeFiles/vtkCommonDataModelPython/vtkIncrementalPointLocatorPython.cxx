// python wrapper for vtkIncrementalPointLocator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkIncrementalPointLocator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkIncrementalPointLocator(PyObject *dict); }
extern "C" { PyObject *PyvtkIncrementalPointLocator_ClassNew(); }

#ifndef DECLARED_PyvtkAbstractPointLocator_ClassNew
extern "C" { PyObject *PyvtkAbstractPointLocator_ClassNew(); }
#define DECLARED_PyvtkAbstractPointLocator_ClassNew
#endif

static PyObject *
PyvtkIncrementalPointLocator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkIncrementalPointLocator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkIncrementalPointLocator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkIncrementalPointLocator *tempr = vtkIncrementalPointLocator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkIncrementalPointLocator::NewInstance());

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
PyvtkIncrementalPointLocator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkIncrementalPointLocator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkIncrementalPointLocator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_FindClosestInsertedPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindClosestInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = op->FindClosestInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    int tempr = op->InitPointInsertion(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitPointInsertion");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 6;
  double temp1[6];
  long long temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    int tempr = op->InitPointInsertion(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_InitPointInsertion(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s1(self, args);
    case 3:
      return PyvtkIncrementalPointLocator_InitPointInsertion_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InitPointInsertion");
  return nullptr;
}


static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = op->IsInsertedPoint(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInsertedPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = op->IsInsertedPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIncrementalPointLocator_IsInsertedPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s1(self, args);
    case 1:
      return PyvtkIncrementalPointLocator_IsInsertedPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsInsertedPoint");
  return nullptr;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertUniquePoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertUniquePoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  long long temp1;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    int tempr = op->InsertUniquePoint(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    op->InsertPoint(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkIncrementalPointLocator_InsertNextPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkIncrementalPointLocator *op = static_cast<vtkIncrementalPointLocator *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    long long tempr = op->InsertNextPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkIncrementalPointLocator_Methods[] = {
  {"IsTypeOf", PyvtkIncrementalPointLocator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkIncrementalPointLocator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkIncrementalPointLocator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkIncrementalPointLocator\nC++: static vtkIncrementalPointLocator *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkIncrementalPointLocator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkIncrementalPointLocator\nC++: vtkIncrementalPointLocator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkIncrementalPointLocator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkIncrementalPointLocator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"FindClosestInsertedPoint", PyvtkIncrementalPointLocator_FindClosestInsertedPoint, METH_VARARGS,
   "FindClosestInsertedPoint(self, x:(float, float, float)) -> int\nC++: virtual vtkIdType FindClosestInsertedPoint(const double x[3])\n\nGiven a point x assumed to be covered by the search structure,\nreturn the index of the closest point (already inserted to the\nsearch structure) regardless of the associated minimum squared\ndistance relative to the squared insertion-tolerance distance.\nThis method is used when performing incremental point insertion.\nNote -1 indicates that no point is found. InitPointInsertion()\nshould have been called in advance.\n"},
  {"InitPointInsertion", PyvtkIncrementalPointLocator_InitPointInsertion, METH_VARARGS,
   "InitPointInsertion(self, newPts:vtkPoints, bounds:(float, float,\n    float, float, float, float)) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6])\nInitPointInsertion(self, newPts:vtkPoints, bounds:(float, float,\n    float, float, float, float), estSize:int) -> int\nC++: virtual int InitPointInsertion(vtkPoints *newPts,\n    const double bounds[6], vtkIdType estSize)\n\nInitialize the point insertion process. newPts is an object,\nstoring 3D point coordinates, to which incremental point\ninsertion puts coordinates. It is created and provided by an\nexternal VTK class. Argument bounds represents the spatial\nbounding box, into which the points fall.\n"},
  {"IsInsertedPoint", PyvtkIncrementalPointLocator_IsInsertedPoint, METH_VARARGS,
   "IsInsertedPoint(self, x:float, y:float, z:float) -> int\nC++: virtual vtkIdType IsInsertedPoint(double x, double y,\n    double z)\nIsInsertedPoint(self, x:(float, float, float)) -> int\nC++: virtual vtkIdType IsInsertedPoint(const double x[3])\n\nDetermine whether or not a given point has been inserted. Return\nthe id of the already inserted point if true, else return -1.\nInitPointInsertion() should have been called in advance.\n"},
  {"InsertUniquePoint", PyvtkIncrementalPointLocator_InsertUniquePoint, METH_VARARGS,
   "InsertUniquePoint(self, x:(float, float, float), ptId:int) -> int\nC++: virtual int InsertUniquePoint(const double x[3],\n    vtkIdType &ptId)\n\nInsert a point unless there has been a duplicate in the search\nstructure. Return 0 if the point was already in the list,\notherwise return 1. If the point was not in the list, it will be\nADDED.  In either case, the id of the point (newly inserted or\nnot) is returned in the ptId argument. This method is not thread\nsafe.\n"},
  {"InsertPoint", PyvtkIncrementalPointLocator_InsertPoint, METH_VARARGS,
   "InsertPoint(self, ptId:int, x:(float, float, float)) -> None\nC++: virtual void InsertPoint(vtkIdType ptId, const double x[3])\n\nInsert a given point with a specified point index ptId.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {"InsertNextPoint", PyvtkIncrementalPointLocator_InsertNextPoint, METH_VARARGS,
   "InsertNextPoint(self, x:(float, float, float)) -> int\nC++: virtual vtkIdType InsertNextPoint(const double x[3])\n\nInsert a given point and return the point index.\nInitPointInsertion() should have been called prior to this\nfunction. Also, IsInsertedPoint() should have been called in\nadvance to ensure that the given point has not been inserted\nunless point duplication is allowed.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkIncrementalPointLocator_Doc =
  "vtkIncrementalPointLocator - Abstract class in support of both\n point location and point insertion.\n\n"
  "Superclass: vtkAbstractPointLocator\n\n"
  "Compared to a static point locator for pure location functionalities\n"
  " through some search structure established from a fixed set of\n"
  "points,\n"
  " an incremental point locator allows for, in addition, point\n"
  "insertion\n"
  " capabilities, with the search structure maintaining a dynamically\n"
  " increasing number of points. There are two incremental point\n"
  "locators,\n"
  " i.e., vtkPointLocator and vtkIncrementalOctreePointLocator. As\n"
  "opposed\n"
  " to the uniform bin-based search structure (adopted in\n"
  "vtkPointLocator)\n"
  " with a fixed spatial resolution, an octree mechanism (employed in\n"
  " vtkIncrementalOctreePointlocator) resorts to a hierarchy of\n"
  "tree-like\n"
  " sub-division of the 3D data domain. Thus it enables data-aware\n"
  "multi-\n"
  " resolution and accordingly accelerated point location as well as\n"
  "point\n"
  " insertion, particularly when handling a radically imbalanced layout\n"
  "of\n"
  " points as not uncommon in datasets defined on adaptive meshes. In\n"
  "other\n"
  " words, vtkIncrementalOctreePointLocator is an octree-based\n"
  "accelerated\n"
  " implementation of all functionalities of vtkPointLocator.\n\n"
  "@sa\n"
  " vtkLocator, vtkIncrementalOctreePointLocator, vtkPointLocator,\n"
  " vtkMergePoints vtkStaticPointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIncrementalPointLocator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkIncrementalPointLocator", // tp_name
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
  PyvtkIncrementalPointLocator_Doc, // tp_doc
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

PyObject *PyvtkIncrementalPointLocator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkIncrementalPointLocator_Type, PyvtkIncrementalPointLocator_Methods,
    "vtkIncrementalPointLocator",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAbstractPointLocator_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkIncrementalPointLocator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIncrementalPointLocator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkIncrementalPointLocator", o) != 0)
  {
    Py_DECREF(o);
  }

}

