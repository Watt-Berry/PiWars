// python wrapper for vtkKMeansDistanceFunctor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKMeansDistanceFunctor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKMeansDistanceFunctor(PyObject *dict); }
extern "C" { PyObject *PyvtkKMeansDistanceFunctor_ClassNew(); }


static PyObject *
PyvtkKMeansDistanceFunctor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKMeansDistanceFunctor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKMeansDistanceFunctor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKMeansDistanceFunctor *tempr = vtkKMeansDistanceFunctor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKMeansDistanceFunctor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKMeansDistanceFunctor::NewInstance());

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
PyvtkKMeansDistanceFunctor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKMeansDistanceFunctor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKMeansDistanceFunctor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_GetEmptyTuple(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEmptyTuple");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVariantArray *tempr = (ap.IsBound() ?
      op->GetEmptyTuple(temp0) :
      op->vtkKMeansDistanceFunctor::GetEmptyTuple(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PairwiseUpdate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PairwiseUpdate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  long long temp1;
  vtkVariantArray *temp2 = nullptr;
  long long temp3;
  long long temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkVariantArray") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PairwiseUpdate(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PerturbElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PerturbElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  long long temp2;
  long long temp3;
  long long temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PerturbElement(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_AllocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    void  *tempr = (ap.IsBound() ?
      op->AllocateElementArray(temp0) :
      op->vtkKMeansDistanceFunctor::AllocateElementArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_DeallocateElementArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeallocateElementArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  void  *temp0 = nullptr;
  Py_buffer pbuf0 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetBuffer(temp0, &pbuf0))
  {
    if (ap.IsBound())
    {
      op->DeallocateElementArray(temp0);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::DeallocateElementArray(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf0.obj != nullptr)
  {
    PyBuffer_Release(&pbuf0);
  }
  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_CreateCoordinateArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CreateCoordinateArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->CreateCoordinateArray() :
      op->vtkKMeansDistanceFunctor::CreateCoordinateArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_PackElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetBuffer(temp1, &pbuf1))
  {
    if (ap.IsBound())
    {
      op->PackElements(temp0, temp1);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::PackElements(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}


static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  vtkTable *temp1 = nullptr;
  void  *temp2 = nullptr;
  Py_buffer pbuf2 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  void  *temp3 = nullptr;
  Py_buffer pbuf3 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetVTKObject(temp1, "vtkTable") &&
      ap.GetBuffer(temp2, &pbuf2) &&
      ap.GetBuffer(temp3, &pbuf3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->UnPackElements(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf2.obj != nullptr)
  {
    PyBuffer_Release(&pbuf2);
  }
  if (pbuf3.obj != nullptr)
  {
    PyBuffer_Release(&pbuf3);
  }
  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnPackElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  vtkTable *temp0 = nullptr;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  long long temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkTable") &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->UnPackElements(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkKMeansDistanceFunctor::UnPackElements(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  if (pbuf1.obj != nullptr)
  {
    PyBuffer_Release(&pbuf1);
  }
  return result;
}

static PyObject *
PyvtkKMeansDistanceFunctor_UnPackElements(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s1(self, args);
    case 4:
      return PyvtkKMeansDistanceFunctor_UnPackElements_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnPackElements");
  return nullptr;
}


static PyObject *
PyvtkKMeansDistanceFunctor_GetDataType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKMeansDistanceFunctor *op = static_cast<vtkKMeansDistanceFunctor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataType() :
      op->vtkKMeansDistanceFunctor::GetDataType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKMeansDistanceFunctor_Methods[] = {
  {"IsTypeOf", PyvtkKMeansDistanceFunctor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKMeansDistanceFunctor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKMeansDistanceFunctor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKMeansDistanceFunctor\nC++: static vtkKMeansDistanceFunctor *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKMeansDistanceFunctor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKMeansDistanceFunctor\nC++: vtkKMeansDistanceFunctor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKMeansDistanceFunctor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKMeansDistanceFunctor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEmptyTuple", PyvtkKMeansDistanceFunctor_GetEmptyTuple, METH_VARARGS,
   "GetEmptyTuple(self, dimension:int) -> vtkVariantArray\nC++: virtual vtkVariantArray *GetEmptyTuple(vtkIdType dimension)\n\nReturn an empty tuple. These values are used as cluster center\ncoordinates when no initial cluster centers are specified.\n"},
  {"PairwiseUpdate", PyvtkKMeansDistanceFunctor_PairwiseUpdate, METH_VARARGS,
   "PairwiseUpdate(self, clusterCenters:vtkTable, row:int,\n    data:vtkVariantArray, dataCardinality:int,\n    totalCardinality:int) -> None\nC++: virtual void PairwiseUpdate(vtkTable *clusterCenters,\n    vtkIdType row, vtkVariantArray *data,\n    vtkIdType dataCardinality, vtkIdType totalCardinality)\n\nThis is called once per observation per run per iteration in\norder to assign the observation to its nearest cluster center\nafter the distance functor has been evaluated for all the cluster\ncenters.\n\n* The distance functor is responsible for incrementally updating\n  the cluster centers\n* to account for the assignment.\n"},
  {"PerturbElement", PyvtkKMeansDistanceFunctor_PerturbElement, METH_VARARGS,
   "PerturbElement(self, __a:vtkTable, __b:vtkTable, __c:int, __d:int,\n     __e:int, __f:float) -> None\nC++: virtual void PerturbElement(vtkTable *, vtkTable *,\n    vtkIdType, vtkIdType, vtkIdType, double)\n\nWhen a cluster center (1) has no observations that are closer to\nit than other cluster centers or (2) has exactly the same\ncoordinates as another cluster center, its coordinates should be\nperturbed. This function should perform that perturbation.\n\n* Since perturbation relies on a distance metric, this function\n  is the responsibility of the\n* distance functor.\n"},
  {"AllocateElementArray", PyvtkKMeansDistanceFunctor_AllocateElementArray, METH_VARARGS,
   "AllocateElementArray(self, size:int) -> Pointer\nC++: virtual void *AllocateElementArray(vtkIdType size)\n\nAllocate an array large enough to hold size coordinates and\nreturn a void pointer to this array. This is used by\nvtkPKMeansStatistics to send (receive) cluster center coordinates\nto (from) other processes.\n"},
  {"DeallocateElementArray", PyvtkKMeansDistanceFunctor_DeallocateElementArray, METH_VARARGS,
   "DeallocateElementArray(self, __a:Pointer) -> None\nC++: virtual void DeallocateElementArray(void *)\n\nFree an array allocated with AllocateElementArray.\n"},
  {"CreateCoordinateArray", PyvtkKMeansDistanceFunctor_CreateCoordinateArray, METH_VARARGS,
   "CreateCoordinateArray(self) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *CreateCoordinateArray()\n\nReturn a vtkAbstractArray capable of holding cluster center\ncoordinates. This is used by vtkPKMeansStatistics to hold cluster\ncenter coordinates sent to (received from) other processes.\n"},
  {"PackElements", PyvtkKMeansDistanceFunctor_PackElements, METH_VARARGS,
   "PackElements(self, curTable:vtkTable, vElements:Pointer) -> None\nC++: virtual void PackElements(vtkTable *curTable,\n    void *vElements)\n\nPack the cluster center coordinates in vElements into columns of\ncurTable. This code may assume that the columns in curTable are\nall of the type returned by \\a GetNewVTKArray().\n"},
  {"UnPackElements", PyvtkKMeansDistanceFunctor_UnPackElements, METH_VARARGS,
   "UnPackElements(self, curTable:vtkTable, newTable:vtkTable,\n    vLocalElements:Pointer, vGlobalElements:Pointer, np:int)\n    -> None\nC++: virtual void UnPackElements(vtkTable *curTable,\n    vtkTable *newTable, void *vLocalElements,\n    void *vGlobalElements, int np)\nUnPackElements(self, curTable:vtkTable, vLocalElements:Pointer,\n    numRows:int, numCols:int) -> None\nC++: virtual void UnPackElements(vtkTable *curTable,\n    void *vLocalElements, vtkIdType numRows, vtkIdType numCols)\n\nUnpack the cluster center coordinates in vElements into columns\nof curTable. This code may assume that the columns in curTable\nare all of the type returned by \\a GetNewVTKArray().\n"},
  {"GetDataType", PyvtkKMeansDistanceFunctor_GetDataType, METH_VARARGS,
   "GetDataType(self) -> int\nC++: virtual int GetDataType()\n\nReturn the data type used to store cluster center coordinates.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKMeansDistanceFunctor_Doc =
  "vtkKMeansDistanceFunctor - measure distance from k-means cluster\ncenters\n\n"
  "Superclass: vtkObject\n\n"
  "This is an abstract class (with a default concrete subclass) that\n"
  "implements algorithms used by the vtkKMeansStatistics filter that\n"
  "rely on a distance metric. If you wish to use a non-Euclidean\n"
  "distance metric (this could include working with strings that do not\n"
  "have a Euclidean distance metric, implementing k-mediods, or trying\n"
  "distance metrics in norms other than L2), you should subclass\n"
  "vtkKMeansDistanceFunctor.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKMeansDistanceFunctor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersStatistics.vtkKMeansDistanceFunctor", // tp_name
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
  PyvtkKMeansDistanceFunctor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKMeansDistanceFunctor_StaticNew()
{
  return vtkKMeansDistanceFunctor::New();
}

PyObject *PyvtkKMeansDistanceFunctor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKMeansDistanceFunctor_Type, PyvtkKMeansDistanceFunctor_Methods,
    "vtkKMeansDistanceFunctor",
 &PyvtkKMeansDistanceFunctor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKMeansDistanceFunctor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKMeansDistanceFunctor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKMeansDistanceFunctor", o) != 0)
  {
    Py_DECREF(o);
  }

}

