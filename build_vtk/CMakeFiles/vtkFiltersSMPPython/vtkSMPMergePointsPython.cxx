// python wrapper for vtkSMPMergePoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSMPMergePoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSMPMergePoints(PyObject *dict); }
extern "C" { PyObject *PyvtkSMPMergePoints_ClassNew(); }


static PyObject *
PyvtkSMPMergePoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSMPMergePoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSMPMergePoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSMPMergePoints *tempr = vtkSMPMergePoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSMPMergePoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSMPMergePoints::NewInstance());

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
PyvtkSMPMergePoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSMPMergePoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSMPMergePoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_InitializeMerge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitializeMerge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InitializeMerge();
    }
    else
    {
      op->vtkSMPMergePoints::InitializeMerge();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_Merge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Merge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  vtkSMPMergePoints *temp0 = nullptr;
  long long temp1;
  vtkPointData *temp2 = nullptr;
  vtkPointData *temp3 = nullptr;
  vtkIdList *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkSMPMergePoints") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPointData") &&
      ap.GetVTKObject(temp3, "vtkPointData") &&
      ap.GetVTKObject(temp4, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->Merge(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkSMPMergePoints::Merge(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_FixSizeOfPointArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FixSizeOfPointArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FixSizeOfPointArray();
    }
    else
    {
      op->vtkSMPMergePoints::FixSizeOfPointArray();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_GetMaxId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxId() :
      op->vtkSMPMergePoints::GetMaxId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_GetNumberOfIdsInBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfIdsInBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfIdsInBucket(temp0) :
      op->vtkSMPMergePoints::GetNumberOfIdsInBucket(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSMPMergePoints_GetNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSMPMergePoints *op = static_cast<vtkSMPMergePoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfBuckets() :
      op->vtkSMPMergePoints::GetNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSMPMergePoints_Methods[] = {
  {"IsTypeOf", PyvtkSMPMergePoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSMPMergePoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSMPMergePoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSMPMergePoints\nC++: static vtkSMPMergePoints *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSMPMergePoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSMPMergePoints\nC++: vtkSMPMergePoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSMPMergePoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSMPMergePoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InitializeMerge", PyvtkSMPMergePoints_InitializeMerge, METH_VARARGS,
   "InitializeMerge(self) -> None\nC++: void InitializeMerge()\n\nThis should be called from 1 thread before any call to Merge.\n"},
  {"Merge", PyvtkSMPMergePoints_Merge, METH_VARARGS,
   "Merge(self, locator:vtkSMPMergePoints, idx:int,\n    outPd:vtkPointData, inPd:vtkPointData, idList:vtkIdList)\n    -> None\nC++: void Merge(vtkSMPMergePoints *locator, vtkIdType idx,\n    vtkPointData *outPd, vtkPointData *inPd, vtkIdList *idList)\n\nMerge the points of one of the bins from the given locator to the\nsame bin of the current locator. Note that this requires that the\ntwo locators have identical binning structures. This also merges\npoint data given in the inPD argument to the outPd. Furthermore,\nit generates a map of the old ids of the input locator to the new\nids. This is stored in the idList argument. The map is\nidList[oldId] = newId.\n"},
  {"FixSizeOfPointArray", PyvtkSMPMergePoints_FixSizeOfPointArray, METH_VARARGS,
   "FixSizeOfPointArray(self) -> None\nC++: void FixSizeOfPointArray()\n\nAt the of the merge, this can be called to set the MaxId of the\npoints array to the maximum id in the locator. The current design\nusage is as follows:\n- Allocate points with points->Resize(numPts). NumPts should be\n  >= total number of points\n- Do bunch of merging with outLocator->Merge(inLocator[i], ...)\n- Fix the size of points with outLocator->FixSizeOfPointArray()\n"},
  {"GetMaxId", PyvtkSMPMergePoints_GetMaxId, METH_VARARGS,
   "GetMaxId(self) -> int\nC++: vtkIdType GetMaxId()\n\nReturns the biggest id in the locator.\n"},
  {"GetNumberOfIdsInBucket", PyvtkSMPMergePoints_GetNumberOfIdsInBucket, METH_VARARGS,
   "GetNumberOfIdsInBucket(self, idx:int) -> int\nC++: vtkIdType GetNumberOfIdsInBucket(vtkIdType idx)\n\nReturns the number of points in a bin.\n"},
  {"GetNumberOfBuckets", PyvtkSMPMergePoints_GetNumberOfBuckets, METH_VARARGS,
   "GetNumberOfBuckets(self) -> int\nC++: vtkIdType GetNumberOfBuckets() override;\n\nReturns the number of bins.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSMPMergePoints_Doc =
  "vtkSMPMergePoints - Class designed to help with merging of points in\nparallel\n\n"
  "Superclass: vtkMergePoints\n\n"
  "vtkSMPMergePoints is a subclass of vtkMergePoints designed to help\n"
  "with merging of points generated by using multiple locators in\n"
  "parallel. Its main functionality is provided by the Merge function.\n"
  "It also has a few additional convenience functions. Merge is thread\n"
  "safe as long as no two threads are merging the same bin. The common\n"
  "way of using vtkSMPMergePoints is:\n"
  "- Initialize with outLocator->InitializeMerge()\n"
  "- Allocate points with outLocator->GetPoints()->Resize(numPts)\n"
  "  (numPts should be >= total number of points)\n"
  "- Do bunch of merging with outLocator->Merge(inLocator[i], ...) (this\n"
  "can be done in parallel as long as no two bins are done at the same\n"
  "  time)\n"
  "- Fix the size of points with outLocator->FixSizeOfPointArray()\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSMPMergePoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSMP.vtkSMPMergePoints", // tp_name
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
  PyvtkSMPMergePoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSMPMergePoints_StaticNew()
{
  return vtkSMPMergePoints::New();
}

PyObject *PyvtkSMPMergePoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSMPMergePoints_Type, PyvtkSMPMergePoints_Methods,
    "vtkSMPMergePoints",
 &PyvtkSMPMergePoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMergePoints");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSMPMergePoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSMPMergePoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSMPMergePoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

