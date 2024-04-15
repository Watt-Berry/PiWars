// python wrapper for vtkSortFieldData
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSortFieldData.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSortFieldData(PyObject *dict); }
extern "C" { PyObject *PyvtkSortFieldData_ClassNew(); }


static PyObject *
PyvtkSortFieldData_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSortFieldData::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFieldData *op = static_cast<vtkSortFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSortFieldData::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSortFieldData *tempr = vtkSortFieldData::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFieldData *op = static_cast<vtkSortFieldData *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSortFieldData *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSortFieldData::NewInstance());

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
PyvtkSortFieldData_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSortFieldData::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSortFieldData *op = static_cast<vtkSortFieldData *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSortFieldData::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSortFieldData_Sort_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    long long *tempr = vtkSortFieldData::Sort(temp0, temp1, temp2, temp3);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSortFieldData_Sort_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Sort");

  vtkFieldData *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  int temp4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkFieldData") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    long long *tempr = vtkSortFieldData::Sort(temp0, temp1, temp2, temp3, temp4);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSortFieldData_Sort(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkSortFieldData_Sort_s1(self, args);
    case 5:
      return PyvtkSortFieldData_Sort_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Sort");
  return nullptr;
}

static PyMethodDef PyvtkSortFieldData_Methods[] = {
  {"IsTypeOf", PyvtkSortFieldData_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSortFieldData_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSortFieldData_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSortFieldData\nC++: static vtkSortFieldData *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSortFieldData_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSortFieldData\nC++: vtkSortFieldData *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSortFieldData_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSortFieldData_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Sort", PyvtkSortFieldData_Sort, METH_VARARGS,
   "Sort(fd:vtkFieldData, arrayName:str, k:int, returnIndices:int)\n    -> Pointer\nC++: static vtkIdType *Sort(vtkFieldData *fd,\n    const char *arrayName, int k, int returnIndices)\nSort(fd:vtkFieldData, arrayName:str, k:int, returnIndices:int,\n    dir:int) -> Pointer\nC++: static vtkIdType *Sort(vtkFieldData *fd,\n    const char *arrayName, int k, int returnIndices, int dir)\n\nGiven field data (and derived classes such as point data and cell\ndata), sort all the arrays in the field data given an array and a\ncomponent number k from that array. In other words, if an array\nhas n components, the kth component is used to sort the array and\nall of the other arrays in the field data.  Also note that the\nuser can indicate whether the function returns the sort indices\n(returnIndices=1). If the indices are returned, then the user\ntakes ownership of the data and must delete it. Note that the\nindices are in sorted (ascending) order, and indicate the final\nsorted position of the sort. So for example indices[0]=10\nindicates that the original data in position 10 in the field, was\nmoved to position 0 after the sort. By default, returnIndices=0.\n(Other notes: if any array is not the same length as the sorting\narray, then it will be skipped and not sorted.)\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSortFieldData_Doc =
  "vtkSortFieldData - provides a method for sorting field data\n\n"
  "Superclass: vtkSortDataArray\n\n"
  "vtkSortFieldData is used to sort data, based on its value, or with an\n"
  "associated key, into either ascending or descending order. This is\n"
  "useful for operations like selection, or analysis, when evaluating\n"
  "and processing data.\n\n"
  "This class, which extends the base functionality of vtkSortDataArray,\n"
  "is used to sort field data and its various subclasses (vtkFieldData,\n"
  "vtkDataSetAttributes, vtkPointData, vtkCellData, etc.)\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly on\n"
  "multi-core machines.\n\n"
  "@warning\n"
  "The sort methods below are static, hence the sorting methods can be\n"
  "used without instantiating the class. All methods are thread safe.\n\n"
  "@sa\n"
  "vtkSortDataArray\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSortFieldData_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSortFieldData", // tp_name
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
  PyvtkSortFieldData_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSortFieldData_StaticNew()
{
  return vtkSortFieldData::New();
}

PyObject *PyvtkSortFieldData_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSortFieldData_Type, PyvtkSortFieldData_Methods,
    "vtkSortFieldData",
 &PyvtkSortFieldData_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSortDataArray");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSortFieldData(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSortFieldData_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSortFieldData", o) != 0)
  {
    Py_DECREF(o);
  }

}

