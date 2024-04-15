// python wrapper for vtkSortDataArray
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSortDataArray.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSortDataArray(PyObject *dict); }
extern "C" { PyObject *PyvtkSortDataArray_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkSortDataArray_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSortDataArray::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortDataArray::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSortDataArray *tempr = vtkSortDataArray::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSortDataArray *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortDataArray::NewInstance());

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
PyvtkSortDataArray_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSortDataArray::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortDataArray *op = static_cast<vtkSortDataArray *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSortDataArray::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_Sort_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    vtkSortDataArray::Sort(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkIdList *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetValue(temp1))
  {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
  {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray"))
  {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    vtkSortDataArray::Sort(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  vtkAbstractArray *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkAbstractArray") &&
      ap.GetValue(temp2))
  {
    vtkSortDataArray::Sort(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_Sort_s8(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkAbstractArray *temp0 = nullptr;
  vtkIdList *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetValue(temp2))
  {
    vtkSortDataArray::Sort(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Sort_Methods[] = {
  {"Sort", PyvtkSortDataArray_Sort_s1, METH_VARARGS | METH_STATIC,
   "V *vtkIdList"},
  {"Sort", PyvtkSortDataArray_Sort_s2, METH_VARARGS | METH_STATIC,
   "V *vtkAbstractArray"},
  {"Sort", PyvtkSortDataArray_Sort_s3, METH_VARARGS | METH_STATIC,
   "Vi *vtkIdList"},
  {"Sort", PyvtkSortDataArray_Sort_s4, METH_VARARGS | METH_STATIC,
   "Vi *vtkAbstractArray"},
  {"Sort", PyvtkSortDataArray_Sort_s5, METH_VARARGS | METH_STATIC,
   "VV *vtkAbstractArray *vtkAbstractArray"},
  {"Sort", PyvtkSortDataArray_Sort_s6, METH_VARARGS | METH_STATIC,
   "VV *vtkAbstractArray *vtkIdList"},
  {"Sort", PyvtkSortDataArray_Sort_s7, METH_VARARGS | METH_STATIC,
   "VVi *vtkAbstractArray *vtkAbstractArray"},
  {"Sort", PyvtkSortDataArray_Sort_s8, METH_VARARGS | METH_STATIC,
   "VVi *vtkAbstractArray *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSortDataArray_Sort(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSortDataArray_Sort_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 1:
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Sort");
  return nullptr;
}


static PyObject *
PyvtkSortDataArray_SortArrayByComponent_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SortArrayByComponent");

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1))
  {
    vtkSortDataArray::SortArrayByComponent(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_SortArrayByComponent_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SortArrayByComponent");

  vtkAbstractArray *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkSortDataArray::SortArrayByComponent(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSortDataArray_SortArrayByComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkSortDataArray_SortArrayByComponent_s1(self, args);
    case 3:
      return PyvtkSortDataArray_SortArrayByComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SortArrayByComponent");
  return nullptr;
}


static PyObject *
PyvtkSortDataArray_InitializeSortIndices(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "InitializeSortIndices");

  long long temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long *tempr = vtkSortDataArray::InitializeSortIndices(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortDataArray_GenerateSortIndices(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GenerateSortIndices");

  int temp0;
  void  *temp1 = nullptr;
  Py_buffer pbuf1 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  long long temp2;
  int temp3;
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<long long> store5(2*size5);
  long long *temp5 = store5.Data();
  long long *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetBuffer(temp1, &pbuf1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    vtkSortDataArray::GenerateSortIndices(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
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
PyvtkSortDataArray_ShuffleArray(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ShuffleArray");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  int temp1;
  long long temp2;
  int temp3;
  vtkAbstractArray *temp4 = nullptr;
  void  *temp5 = nullptr;
  Py_buffer pbuf5 = { nullptr, nullptr, 0, 0, 0, 0, nullptr, nullptr, nullptr, nullptr, nullptr };
  int temp6;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetVTKObject(temp4, "vtkAbstractArray") &&
      ap.GetBuffer(temp5, &pbuf5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    vtkSortDataArray::ShuffleArray(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

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

  if (pbuf5.obj != nullptr)
  {
    PyBuffer_Release(&pbuf5);
  }
  return result;
}


static PyObject *
PyvtkSortDataArray_ShuffleIdList(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ShuffleIdList");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<long long> store0(2*size0);
  long long *temp0 = store0.Data();
  long long *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  long long temp1;
  vtkIdList *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkIdList") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkSortDataArray::ShuffleIdList(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSortDataArray_Methods[] = {
  {"IsTypeOf", PyvtkSortDataArray_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSortDataArray_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSortDataArray_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSortDataArray\nC++: static vtkSortDataArray *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSortDataArray_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSortDataArray\nC++: vtkSortDataArray *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSortDataArray_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSortDataArray_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Sort", PyvtkSortDataArray_Sort, METH_VARARGS,
   "Sort(keys:vtkIdList) -> None\nC++: static void Sort(vtkIdList *keys)\nSort(keys:vtkAbstractArray) -> None\nC++: static void Sort(vtkAbstractArray *keys)\nSort(keys:vtkIdList, dir:int) -> None\nC++: static void Sort(vtkIdList *keys, int dir)\nSort(keys:vtkAbstractArray, dir:int) -> None\nC++: static void Sort(vtkAbstractArray *keys, int dir)\nSort(keys:vtkAbstractArray, values:vtkAbstractArray) -> None\nC++: static void Sort(vtkAbstractArray *keys,\n    vtkAbstractArray *values)\nSort(keys:vtkAbstractArray, values:vtkIdList) -> None\nC++: static void Sort(vtkAbstractArray *keys, vtkIdList *values)\nSort(keys:vtkAbstractArray, values:vtkAbstractArray, dir:int)\n    -> None\nC++: static void Sort(vtkAbstractArray *keys,\n    vtkAbstractArray *values, int dir)\nSort(keys:vtkAbstractArray, values:vtkIdList, dir:int) -> None\nC++: static void Sort(vtkAbstractArray *keys, vtkIdList *values,\n    int dir)\n\nSorts the given array in ascending order. For this method, the\nkeys must be single-component tuples.\n"},
  {"SortArrayByComponent", PyvtkSortDataArray_SortArrayByComponent, METH_VARARGS,
   "SortArrayByComponent(arr:vtkAbstractArray, k:int) -> None\nC++: static void SortArrayByComponent(vtkAbstractArray *arr,\n    int k)\nSortArrayByComponent(arr:vtkAbstractArray, k:int, dir:int) -> None\nC++: static void SortArrayByComponent(vtkAbstractArray *arr,\n    int k, int dir)\n\nSorts the given data array using the specified component as a\nkey. Think of the array as a 2-D grid with each tuple\nrepresenting a row. Tuples are swapped until the k-th column of\nthe grid is monotonically increasing. Where two tuples have the\nsame value for the k-th component, their order in the final\nresult is unspecified.\n"},
  {"InitializeSortIndices", PyvtkSortDataArray_InitializeSortIndices, METH_VARARGS,
   "InitializeSortIndices(numKeys:int) -> Pointer\nC++: static vtkIdType *InitializeSortIndices(vtkIdType numKeys)\n\nThe following are general functions which can be used to produce\nan ordering, and/or sort various types of VTK arrays. Don't use\nthese methods unless you really know what you are doing. The\nbasic idea is that an initial set of indices\n(InitializeSortIndices() that refer to the data contained in a\nvtkAbstractArray or vtkIdList) are sorted (GenerateSortIndices()\nbased on the data values in the array). The result of the sort is\nthe creation of a permutation array (the sort array idx) that\nindicates where the data tuples originated (e.g., after the sort,\nidx[0] indicates where in the array the tuple was originally\nlocated prior to sorting.) This sorted index array can be used to\nshuffle various types of VTK arrays (the types supported\ncorrespond to the various arrays which are subclasses of\nvtkDataArrayTemplate, use ShuffleArray() or for vtkIdList, use\nShuffleIdList()). Also, the sort array, being an vtkIdType*\n(i.e., id list), can also be used to identify points or cells in\nsorted order (based on the data in the originating dataIn array).\nNote that sorting is always performed in ascending order, and the\nsorted index array reflects this; however the shuffling of data\ncan be specified as either ascending (dir=0) or descending\n(dir=1) order. The user is responsible for taking ownership of\nthe sort indices (i.e., free the idx array).\n"},
  {"GenerateSortIndices", PyvtkSortDataArray_GenerateSortIndices, METH_VARARGS,
   "GenerateSortIndices(dataType:int, dataIn:Pointer, numKeys:int,\n    numComp:int, k:int, idx:[int, ...]) -> None\nC++: static void GenerateSortIndices(int dataType, void *dataIn,\n    vtkIdType numKeys, int numComp, int k, vtkIdType *idx)\n\n"},
  {"ShuffleArray", PyvtkSortDataArray_ShuffleArray, METH_VARARGS,
   "ShuffleArray(idx:[int, ...], dataType:int, numKeys:int,\n    numComp:int, arr:vtkAbstractArray, dataIn:Pointer, dir:int)\n    -> None\nC++: static void ShuffleArray(vtkIdType *idx, int dataType,\n    vtkIdType numKeys, int numComp, vtkAbstractArray *arr,\n    void *dataIn, int dir)\n\n"},
  {"ShuffleIdList", PyvtkSortDataArray_ShuffleIdList, METH_VARARGS,
   "ShuffleIdList(idx:[int, ...], sze:int, arrayIn:vtkIdList,\n    dataIn:[int, ...], dir:int) -> None\nC++: static void ShuffleIdList(vtkIdType *idx, vtkIdType sze,\n    vtkIdList *arrayIn, vtkIdType *dataIn, int dir)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSortDataArray_Doc =
  "vtkSortDataArray - provides several methods for sorting VTK arrays.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSortDataArray is used to sort data, based on its value, or with an\n"
  "associated key, into either ascending or descending order. This is\n"
  "useful for operations like selection, or analysis, when evaluating\n"
  "and processing data. A variety of sorting functions are provided,\n"
  "treating both arrays (i.e., vtkAbstractArray) and id lists\n"
  "(vtkIdList). Note that complex arrays like variants and string arrays\n"
  "are also handled.\n\n"
  "Additional functionality is provided to generate data ordering,\n"
  "without necessarily shuffling the data into a final, sorted position.\n"
  "Hence, the sorting process is organized into three steps because of\n"
  "the complexity of dealing with multiple types and multiple component\n"
  "data arrays. The first step involves creating and initializing a\n"
  "sorted index array, and then (second step) sorting this array to\n"
  "produce a map indicating the sorting order.  In other words, the\n"
  "sorting index array is a permutation which can be applied to other,\n"
  "associated data to shuffle it (third step) into an order consistent\n"
  "with the sorting operation. Note that the generation of the sorted\n"
  "index array is useful unto itself (even without the final shuffling\n"
  "of data) because it generates an ordered list (from the data values\n"
  "of any component in any array). So for example, it is possible to\n"
  "find the top N cells with the largest scalar value simply by\n"
  "generating the sorting index array from the call scalar values.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly on\n"
  "multi-core machines.\n\n"
  "@warning\n"
  "The sort methods below are static, hence the sorting methods can be\n"
  "used without instantiating the class. All methods are thread safe.\n\n"
  "@sa\n"
  "vtkSortFieldData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSortDataArray_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkSortDataArray", // tp_name
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
  PyvtkSortDataArray_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSortDataArray_StaticNew()
{
  return vtkSortDataArray::New();
}

PyObject *PyvtkSortDataArray_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSortDataArray_Type, PyvtkSortDataArray_Methods,
    "vtkSortDataArray",
 &PyvtkSortDataArray_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSortDataArray(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSortDataArray_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSortDataArray", o) != 0)
  {
    Py_DECREF(o);
  }

}

