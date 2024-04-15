// python wrapper for vtkUnstructuredGridBase
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkUnstructuredGridBase.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkUnstructuredGridBase(PyObject *dict); }
extern "C" { PyObject *PyvtkUnstructuredGridBase_ClassNew(); }

#ifndef DECLARED_PyvtkPointSet_ClassNew
extern "C" { PyObject *PyvtkPointSet_ClassNew(); }
#define DECLARED_PyvtkPointSet_ClassNew
#endif

static PyObject *
PyvtkUnstructuredGridBase_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkUnstructuredGridBase::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkUnstructuredGridBase::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnstructuredGridBase *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkUnstructuredGridBase::NewInstance());

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
PyvtkUnstructuredGridBase_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkUnstructuredGridBase::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkUnstructuredGridBase::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkUnstructuredGridBase::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  long long temp0 = 1000;
  int temp1 = 1000;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0, 2) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    op->Allocate(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkUnstructuredGridBase::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2) :
      op->vtkUnstructuredGridBase::InsertNextCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1) :
      op->vtkUnstructuredGridBase::InsertNextCell(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InsertNextCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  long long temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<long long> store4(size4);
  long long *temp4 = store4.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.CheckSizeHint(2, size2, temp1) &&
      ap.CheckSizeHint(4, size4, temp3))
  {
    long long tempr = (ap.IsBound() ?
      op->InsertNextCell(temp0, temp1, temp2, temp3, temp4) :
      op->vtkUnstructuredGridBase::InsertNextCell(temp0, temp1, temp2, temp3, temp4));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_InsertNextCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkUnstructuredGridBase_InsertNextCell_s1(self, args);
    case 2:
      return PyvtkUnstructuredGridBase_InsertNextCell_s2(self, args);
    case 5:
      return PyvtkUnstructuredGridBase_InsertNextCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "InsertNextCell");
  return nullptr;
}


static PyObject *
PyvtkUnstructuredGridBase_ReplaceCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReplaceCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  long long temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.CheckSizeHint(2, size2, temp1))
  {
    if (ap.IsBound())
    {
      op->ReplaceCell(temp0, temp1, temp2);
    }
    else
    {
      op->vtkUnstructuredGridBase::ReplaceCell(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetIdsOfCellsOfType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdsOfCellsOfType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  int temp0;
  vtkIdTypeArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdTypeArray"))
  {
    op->GetIdsOfCellsOfType(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_IsHomogeneous(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsHomogeneous");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkUnstructuredGridBase *op = static_cast<vtkUnstructuredGridBase *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->IsHomogeneous();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkUnstructuredGridBase_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkUnstructuredGridBase_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkUnstructuredGridBase *tempr = vtkUnstructuredGridBase::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkUnstructuredGridBase_GetData_Methods[] = {
  {"GetData", PyvtkUnstructuredGridBase_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkUnstructuredGridBase_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkUnstructuredGridBase_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkUnstructuredGridBase_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkUnstructuredGridBase_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}

static PyMethodDef PyvtkUnstructuredGridBase_Methods[] = {
  {"IsTypeOf", PyvtkUnstructuredGridBase_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkUnstructuredGridBase_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkUnstructuredGridBase_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkUnstructuredGridBase_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkUnstructuredGridBase\nC++: vtkUnstructuredGridBase *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkUnstructuredGridBase_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkUnstructuredGridBase_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetDataObjectType", PyvtkUnstructuredGridBase_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nStandard vtkDataSet API methods. See vtkDataSet for more\ninformation.\n"},
  {"Allocate", PyvtkUnstructuredGridBase_Allocate, METH_VARARGS,
   "Allocate(self, numCells:int=1000, extSize:int=1000) -> None\nC++: virtual void Allocate(vtkIdType numCells=1000,\n    int extSize=1000)\n\nAllocate memory for the number of cells indicated. extSize is not\nused.\n"},
  {"DeepCopy", PyvtkUnstructuredGridBase_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"InsertNextCell", PyvtkUnstructuredGridBase_InsertNextCell, METH_VARARGS,
   "InsertNextCell(self, type:int, npts:int, ptIds:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[])\nInsertNextCell(self, type:int, ptIds:vtkIdList) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdList *ptIds)\nInsertNextCell(self, type:int, npts:int, ptIds:(int, ...),\n    nfaces:int, faces:(int, ...)) -> int\nC++: vtkIdType InsertNextCell(int type, vtkIdType npts,\n    const vtkIdType ptIds[], vtkIdType nfaces,\n    const vtkIdType faces[])\n\nInsert/create cell in object by type and list of point ids\ndefining cell topology. Most cells require just a type which\nimplicitly defines a set of points and their ordering. For\nnon-polyhedron cell type, npts is the number of unique points in\nthe cell. pts are the list of global point Ids. For polyhedron\ncell, a special input format is required. npts is the number of\nfaces in the cell. ptIds is the list of face stream:\n(numFace0Pts, id1, id2, id3, numFace1Pts,id1, id2, id3, ...) Make\nsure you have called Allocate() before calling this method\n"},
  {"ReplaceCell", PyvtkUnstructuredGridBase_ReplaceCell, METH_VARARGS,
   "ReplaceCell(self, cellId:int, npts:int, pts:(int, ...)) -> None\nC++: void ReplaceCell(vtkIdType cellId, int npts,\n    const vtkIdType pts[])\n\nReplace the points defining cell \"cellId\" with a new set of\npoints. This operator is (typically) used when links from points\nto cells have not been built (i.e., BuildLinks() has not been\nexecuted). Use the operator ReplaceLinkedCell() to replace a cell\nwhen cell structure has been built.\n"},
  {"GetIdsOfCellsOfType", PyvtkUnstructuredGridBase_GetIdsOfCellsOfType, METH_VARARGS,
   "GetIdsOfCellsOfType(self, type:int, array:vtkIdTypeArray) -> None\nC++: virtual void GetIdsOfCellsOfType(int type,\n    vtkIdTypeArray *array)\n\nFill vtkIdTypeArray container with list of cell Ids.  This method\ntraverses all cells and, for a particular cell type, inserts the\ncell Id into the container.\n"},
  {"IsHomogeneous", PyvtkUnstructuredGridBase_IsHomogeneous, METH_VARARGS,
   "IsHomogeneous(self) -> int\nC++: virtual int IsHomogeneous()\n\nTraverse cells and determine if cells are all of the same type.\n"},
  {"GetData", PyvtkUnstructuredGridBase_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0)\n    -> vtkUnstructuredGridBase\nC++: static vtkUnstructuredGridBase *GetData(\n    vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkUnstructuredGridBase_Doc =
  "vtkUnstructuredGridBase - dataset represents arbitrary combinations\nof all possible cell types.\n\n"
  "Superclass: vtkPointSet\n\n"
  "May be mapped onto a non-standard memory layout.\n\n"
  "vtkUnstructuredGridBase defines the core vtkUnstructuredGrid API,\n"
  "omitting functions that are implementation dependent.\n\n"
  "@sa\n"
  "vtkMappedDataArray vtkUnstructuredGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkUnstructuredGridBase_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkUnstructuredGridBase", // tp_name
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
  PyvtkUnstructuredGridBase_Doc, // tp_doc
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

PyObject *PyvtkUnstructuredGridBase_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkUnstructuredGridBase_Type, PyvtkUnstructuredGridBase_Methods,
    "vtkUnstructuredGridBase",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkPointSet_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkUnstructuredGridBase(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkUnstructuredGridBase_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkUnstructuredGridBase", o) != 0)
  {
    Py_DECREF(o);
  }

}

