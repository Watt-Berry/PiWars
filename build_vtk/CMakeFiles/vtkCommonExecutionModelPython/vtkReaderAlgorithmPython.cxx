// python wrapper for vtkReaderAlgorithm
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkReaderAlgorithm.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkReaderAlgorithm(PyObject *dict); }
extern "C" { PyObject *PyvtkReaderAlgorithm_ClassNew(); }

#ifndef DECLARED_PyvtkAlgorithm_ClassNew
extern "C" { PyObject *PyvtkAlgorithm_ClassNew(); }
#define DECLARED_PyvtkAlgorithm_ClassNew
#endif

static PyObject *
PyvtkReaderAlgorithm_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkReaderAlgorithm::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkReaderAlgorithm::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkReaderAlgorithm *tempr = vtkReaderAlgorithm::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkReaderAlgorithm *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkReaderAlgorithm::NewInstance());

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
PyvtkReaderAlgorithm_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkReaderAlgorithm::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkReaderAlgorithm::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_CreateOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    vtkDataObject *tempr = (ap.IsBound() ?
      op->CreateOutput(temp0) :
      op->vtkReaderAlgorithm::CreateOutput(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_ReadMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    int tempr = op->ReadMetaData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_ReadTimeDependentMetaData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadTimeDependentMetaData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  int temp0;
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkInformation"))
  {
    int tempr = (ap.IsBound() ?
      op->ReadTimeDependentMetaData(temp0, temp1) :
      op->vtkReaderAlgorithm::ReadTimeDependentMetaData(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_ReadMesh(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadMesh");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = op->ReadMesh(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_ReadPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = op->ReadPoints(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkReaderAlgorithm_ReadArrays(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReadArrays");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkReaderAlgorithm *op = static_cast<vtkReaderAlgorithm *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  vtkDataObject *temp4 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkDataObject"))
  {
    int tempr = op->ReadArrays(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkReaderAlgorithm_Methods[] = {
  {"IsTypeOf", PyvtkReaderAlgorithm_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkReaderAlgorithm_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkReaderAlgorithm_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkReaderAlgorithm\nC++: static vtkReaderAlgorithm *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkReaderAlgorithm_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkReaderAlgorithm\nC++: vtkReaderAlgorithm *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkReaderAlgorithm_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkReaderAlgorithm_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CreateOutput", PyvtkReaderAlgorithm_CreateOutput, METH_VARARGS,
   "CreateOutput(self, currentOutput:vtkDataObject) -> vtkDataObject\nC++: virtual vtkDataObject *CreateOutput(\n    vtkDataObject *currentOutput)\n\nThis can be overridden by a subclass to create an output that is\ndetermined by the file being read. If the output is known at\ncompile time, it is easier to override\nFillOutputPortInformation() to set\nvtkDataObject::DATA_TYPE_NAME(). The subclass should compare the\nnew output type with the type of the currentOutput argument and\nreturn currentOutput without changing its reference count if the\ntypes are same.\n"},
  {"ReadMetaData", PyvtkReaderAlgorithm_ReadMetaData, METH_VARARGS,
   "ReadMetaData(self, metadata:vtkInformation) -> int\nC++: virtual int ReadMetaData(vtkInformation *metadata)\n\nProvide meta-data for the pipeline. This meta-data cannot vary\nover time as this method will not be called when only a request\nis changed. These include things like time steps. Subclasses may\nhave specialized interfaces making this simpler.\n"},
  {"ReadTimeDependentMetaData", PyvtkReaderAlgorithm_ReadTimeDependentMetaData, METH_VARARGS,
   "ReadTimeDependentMetaData(self, __a:int, __b:vtkInformation)\n    -> int\nC++: virtual int ReadTimeDependentMetaData(int, vtkInformation *)\n\nProvide meta-data for the pipeline. This meta-data can vary over\ntime as this method will be called after a request is changed\n(such as time) These include things like whole extent. Subclasses\nmay have specialized interfaces making this simpler.\n"},
  {"ReadMesh", PyvtkReaderAlgorithm_ReadMesh, METH_VARARGS,
   "ReadMesh(self, piece:int, npieces:int, nghosts:int, timestep:int,\n    output:vtkDataObject) -> int\nC++: virtual int ReadMesh(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output)\n\nRead the mesh (connectivity) for a given set of data\npartitioning, number of ghost levels and time step (index). The\nreader populates the data object passed in as the last argument.\nIt is OK to read more than the mesh (points, arrays etc.).\nHowever, this may interfere with any caching implemented by the\nexecutive (i.e. cause more reads).\n"},
  {"ReadPoints", PyvtkReaderAlgorithm_ReadPoints, METH_VARARGS,
   "ReadPoints(self, piece:int, npieces:int, nghosts:int,\n    timestep:int, output:vtkDataObject) -> int\nC++: virtual int ReadPoints(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output)\n\nRead the points. The reader populates the input data object. This\nis called after ReadMesh() so the data object should already\ncontain the mesh.\n"},
  {"ReadArrays", PyvtkReaderAlgorithm_ReadArrays, METH_VARARGS,
   "ReadArrays(self, piece:int, npieces:int, nghosts:int,\n    timestep:int, output:vtkDataObject) -> int\nC++: virtual int ReadArrays(int piece, int npieces, int nghosts,\n    int timestep, vtkDataObject *output)\n\nRead all the arrays (point, cell, field etc.). This is called\nafter ReadPoints() so the data object should already contain the\nmesh and points.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkReaderAlgorithm_Doc =
  "vtkReaderAlgorithm - Superclass for readers that implement a\nsimplified API.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "This class and associated subclasses were created to make it easier\n"
  "to develop readers. When directly subclassing from other algorithm\n"
  "classes one has to learn a general purpose API that somewhat\n"
  "obfuscates pipeline functionality behind information keys. One has to\n"
  "know how to find time and pieces requests using keys for example.\n"
  "Furthermore, these classes together with specialized executives can\n"
  "implement common reader functionality for things such as file series\n"
  "(for time and/or partitions), caching, mapping time requests to\n"
  "indices etc. This class implements the most basic API which is\n"
  "specialized as needed by subclasses (for file series for example).\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkReaderAlgorithm_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonExecutionModel.vtkReaderAlgorithm", // tp_name
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
  PyvtkReaderAlgorithm_Doc, // tp_doc
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

PyObject *PyvtkReaderAlgorithm_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkReaderAlgorithm_Type, PyvtkReaderAlgorithm_Methods,
    "vtkReaderAlgorithm",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkReaderAlgorithm(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkReaderAlgorithm_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkReaderAlgorithm", o) != 0)
  {
    Py_DECREF(o);
  }

}

