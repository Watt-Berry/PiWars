// python wrapper for vtkPointSetStreamer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointSetStreamer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSetStreamer(PyObject *dict); }
extern "C" { PyObject *PyvtkPointSetStreamer_ClassNew(); }


static PyObject *
PyvtkPointSetStreamer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSetStreamer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSetStreamer *tempr = vtkPointSetStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSetStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetStreamer::NewInstance());

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
PyvtkPointSetStreamer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointSetStreamer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointSetStreamer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_SetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfPointsPerBucket(temp0);
    }
    else
    {
      op->vtkPointSetStreamer::SetNumberOfPointsPerBucket(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetNumberOfPointsPerBucketMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMinValue() :
      op->vtkPointSetStreamer::GetNumberOfPointsPerBucketMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetNumberOfPointsPerBucketMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucketMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucketMaxValue() :
      op->vtkPointSetStreamer::GetNumberOfPointsPerBucketMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetNumberOfPointsPerBucket(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPointsPerBucket");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfPointsPerBucket() :
      op->vtkPointSetStreamer::GetNumberOfPointsPerBucket());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_SetBucketId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBucketId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBucketId(temp0);
    }
    else
    {
      op->vtkPointSetStreamer::SetBucketId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetBucketIdMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBucketIdMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBucketIdMinValue() :
      op->vtkPointSetStreamer::GetBucketIdMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetBucketIdMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBucketIdMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBucketIdMaxValue() :
      op->vtkPointSetStreamer::GetBucketIdMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetBucketId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBucketId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetBucketId() :
      op->vtkPointSetStreamer::GetBucketId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetNumberOfBuckets(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBuckets");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfBuckets() :
      op->vtkPointSetStreamer::GetNumberOfBuckets());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_SetCreateVerticesCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCreateVerticesCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCreateVerticesCellArray(temp0);
    }
    else
    {
      op->vtkPointSetStreamer::SetCreateVerticesCellArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_GetCreateVerticesCellArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCreateVerticesCellArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCreateVerticesCellArray() :
      op->vtkPointSetStreamer::GetCreateVerticesCellArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_CreateVerticesCellArrayOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVerticesCellArrayOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateVerticesCellArrayOn();
    }
    else
    {
      op->vtkPointSetStreamer::CreateVerticesCellArrayOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetStreamer_CreateVerticesCellArrayOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateVerticesCellArrayOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetStreamer *op = static_cast<vtkPointSetStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateVerticesCellArrayOff();
    }
    else
    {
      op->vtkPointSetStreamer::CreateVerticesCellArrayOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSetStreamer_Methods[] = {
  {"IsTypeOf", PyvtkPointSetStreamer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSetStreamer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSetStreamer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointSetStreamer\nC++: static vtkPointSetStreamer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSetStreamer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointSetStreamer\nC++: vtkPointSetStreamer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointSetStreamer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointSetStreamer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfPointsPerBucket", PyvtkPointSetStreamer_SetNumberOfPointsPerBucket, METH_VARARGS,
   "SetNumberOfPointsPerBucket(self, _arg:int) -> None\nC++: virtual void SetNumberOfPointsPerBucket(int _arg)\n\nSet/Get the average number of points in each bucket. This data\nmember is used to determine the number of buckets.\n\nThe default is 1.\n"},
  {"GetNumberOfPointsPerBucketMinValue", PyvtkPointSetStreamer_GetNumberOfPointsPerBucketMinValue, METH_VARARGS,
   "GetNumberOfPointsPerBucketMinValue(self) -> int\nC++: virtual int GetNumberOfPointsPerBucketMinValue()\n\n"},
  {"GetNumberOfPointsPerBucketMaxValue", PyvtkPointSetStreamer_GetNumberOfPointsPerBucketMaxValue, METH_VARARGS,
   "GetNumberOfPointsPerBucketMaxValue(self) -> int\nC++: virtual int GetNumberOfPointsPerBucketMaxValue()\n\n"},
  {"GetNumberOfPointsPerBucket", PyvtkPointSetStreamer_GetNumberOfPointsPerBucket, METH_VARARGS,
   "GetNumberOfPointsPerBucket(self) -> int\nC++: virtual int GetNumberOfPointsPerBucket()\n\n"},
  {"SetBucketId", PyvtkPointSetStreamer_SetBucketId, METH_VARARGS,
   "SetBucketId(self, _arg:int) -> None\nC++: virtual void SetBucketId(vtkIdType _arg)\n\nSet/Get the bucket id to stream. This data member is used to\ndetermine the number of buckets.\n\nThe default is 0.\n"},
  {"GetBucketIdMinValue", PyvtkPointSetStreamer_GetBucketIdMinValue, METH_VARARGS,
   "GetBucketIdMinValue(self) -> int\nC++: virtual vtkIdType GetBucketIdMinValue()\n\n"},
  {"GetBucketIdMaxValue", PyvtkPointSetStreamer_GetBucketIdMaxValue, METH_VARARGS,
   "GetBucketIdMaxValue(self) -> int\nC++: virtual vtkIdType GetBucketIdMaxValue()\n\n"},
  {"GetBucketId", PyvtkPointSetStreamer_GetBucketId, METH_VARARGS,
   "GetBucketId(self) -> int\nC++: virtual vtkIdType GetBucketId()\n\n"},
  {"GetNumberOfBuckets", PyvtkPointSetStreamer_GetNumberOfBuckets, METH_VARARGS,
   "GetNumberOfBuckets(self) -> int\nC++: virtual vtkIdType GetNumberOfBuckets()\n\nGet the number of buckets.\n\nNote: This method must be called after the first pass.\n"},
  {"SetCreateVerticesCellArray", PyvtkPointSetStreamer_SetCreateVerticesCellArray, METH_VARARGS,
   "SetCreateVerticesCellArray(self, _arg:bool) -> None\nC++: virtual void SetCreateVerticesCellArray(bool _arg)\n\nSet/Get if a cell array of vertices will be created.\n\nThe default is on.\n"},
  {"GetCreateVerticesCellArray", PyvtkPointSetStreamer_GetCreateVerticesCellArray, METH_VARARGS,
   "GetCreateVerticesCellArray(self) -> bool\nC++: virtual bool GetCreateVerticesCellArray()\n\n"},
  {"CreateVerticesCellArrayOn", PyvtkPointSetStreamer_CreateVerticesCellArrayOn, METH_VARARGS,
   "CreateVerticesCellArrayOn(self) -> None\nC++: virtual void CreateVerticesCellArrayOn()\n\n"},
  {"CreateVerticesCellArrayOff", PyvtkPointSetStreamer_CreateVerticesCellArrayOff, METH_VARARGS,
   "CreateVerticesCellArrayOff(self) -> None\nC++: virtual void CreateVerticesCellArrayOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointSetStreamer_Doc =
  "vtkPointSetStreamer - stream points as buckets\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkPointSetStreamer is a filter that sorts points into buckets and it\n"
  "returns the points included in the chosen bucket. The bucket is\n"
  "chosen by setting the BucketId. The purpose of this class is to allow\n"
  "streaming of points. The bucket size is determined by the\n"
  "NumberOfPointsPerBucket.\n\n"
  "The typical usage is to call this filter the first time to perform\n"
  "the sorting and get the points in the first bucket and then to call\n"
  "it again to get the points in the remaining buckets. The sorting is\n"
  "performed only the first time, assuming that the dataset or\n"
  "NumberOfPointsPerBucket don't change. The number of buckets can be\n"
  "obtained by calling GetNumberOfBuckets.\n\n"
  "@sa vtkPointSetToOctreeImageFilter vtkStaticPointLocator\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointSetStreamer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometryPreview.vtkPointSetStreamer", // tp_name
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
  PyvtkPointSetStreamer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSetStreamer_StaticNew()
{
  return vtkPointSetStreamer::New();
}

PyObject *PyvtkPointSetStreamer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointSetStreamer_Type, PyvtkPointSetStreamer_Methods,
    "vtkPointSetStreamer",
 &PyvtkPointSetStreamer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSetStreamer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSetStreamer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSetStreamer", o) != 0)
  {
    Py_DECREF(o);
  }

}

