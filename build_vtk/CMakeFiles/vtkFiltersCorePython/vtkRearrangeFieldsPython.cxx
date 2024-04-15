// python wrapper for vtkRearrangeFields
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRearrangeFields.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRearrangeFields(PyObject *dict); }
extern "C" { PyObject *PyvtkRearrangeFields_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRearrangeFields_OperationType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkRearrangeFields.OperationType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkRearrangeFields_OperationType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkRearrangeFields_OperationType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRearrangeFields_FieldLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkRearrangeFields.FieldLocation", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkRearrangeFields_FieldLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkRearrangeFields_FieldLocation_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRearrangeFields_FieldType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkRearrangeFields.FieldType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkRearrangeFields_FieldType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkRearrangeFields_FieldType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkRearrangeFields_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRearrangeFields::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRearrangeFields::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRearrangeFields *tempr = vtkRearrangeFields::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRearrangeFields *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRearrangeFields::NewInstance());

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
PyvtkRearrangeFields_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRearrangeFields::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRearrangeFields::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRearrangeFields_AddOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_AddOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->AddOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::AddOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_AddOperation_Methods[] = {
  {"AddOperation", PyvtkRearrangeFields_AddOperation_s1, METH_VARARGS,
   "@iiii"},
  {"AddOperation", PyvtkRearrangeFields_AddOperation_s2, METH_VARARGS,
   "@izii"},
  {"AddOperation", PyvtkRearrangeFields_AddOperation_s3, METH_VARARGS,
   "@zzzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRearrangeFields_AddOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_AddOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddOperation");
  return nullptr;
}


static PyObject *
PyvtkRearrangeFields_RemoveOperation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0) :
      op->vtkRearrangeFields::RemoveOperation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRearrangeFields_RemoveOperation_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  const char *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    int tempr = (ap.IsBound() ?
      op->RemoveOperation(temp0, temp1, temp2, temp3) :
      op->vtkRearrangeFields::RemoveOperation(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_RemoveOperation_Methods[] = {
  {"RemoveOperation", PyvtkRearrangeFields_RemoveOperation_s2, METH_VARARGS,
   "@iiii"},
  {"RemoveOperation", PyvtkRearrangeFields_RemoveOperation_s3, METH_VARARGS,
   "@izii"},
  {"RemoveOperation", PyvtkRearrangeFields_RemoveOperation_s4, METH_VARARGS,
   "@zzzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkRearrangeFields_RemoveOperation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkRearrangeFields_RemoveOperation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRearrangeFields_RemoveOperation_s1(self, args);
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveOperation");
  return nullptr;
}


static PyObject *
PyvtkRearrangeFields_RemoveAllOperations(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllOperations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRearrangeFields *op = static_cast<vtkRearrangeFields *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllOperations();
    }
    else
    {
      op->vtkRearrangeFields::RemoveAllOperations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkRearrangeFields_Methods[] = {
  {"IsTypeOf", PyvtkRearrangeFields_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRearrangeFields_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRearrangeFields_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRearrangeFields\nC++: static vtkRearrangeFields *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRearrangeFields_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRearrangeFields\nC++: vtkRearrangeFields *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRearrangeFields_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRearrangeFields_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddOperation", PyvtkRearrangeFields_AddOperation, METH_VARARGS,
   "AddOperation(self, operationType:int, attributeType:int,\n    fromFieldLoc:int, toFieldLoc:int) -> int\nC++: int AddOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nAddOperation(self, operationType:int, name:str, fromFieldLoc:int,\n    toFieldLoc:int) -> int\nC++: int AddOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nAddOperation(self, operationType:str, attributeType:str,\n    fromFieldLoc:str, toFieldLoc:str) -> int\nC++: int AddOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nAdd an operation which copies an attribute's field (data array)\nfrom one field data to another. Returns an operation id which can\nlater be used to remove the operation.\n"},
  {"RemoveOperation", PyvtkRearrangeFields_RemoveOperation, METH_VARARGS,
   "RemoveOperation(self, operationId:int) -> int\nC++: int RemoveOperation(int operationId)\nRemoveOperation(self, operationType:int, attributeType:int,\n    fromFieldLoc:int, toFieldLoc:int) -> int\nC++: int RemoveOperation(int operationType, int attributeType,\n    int fromFieldLoc, int toFieldLoc)\nRemoveOperation(self, operationType:int, name:str,\n    fromFieldLoc:int, toFieldLoc:int) -> int\nC++: int RemoveOperation(int operationType, const char *name,\n    int fromFieldLoc, int toFieldLoc)\nRemoveOperation(self, operationType:str, attributeType:str,\n    fromFieldLoc:str, toFieldLoc:str) -> int\nC++: int RemoveOperation(const char *operationType,\n    const char *attributeType, const char *fromFieldLoc,\n    const char *toFieldLoc)\n\nRemove an operation with the given id.\n"},
  {"RemoveAllOperations", PyvtkRearrangeFields_RemoveAllOperations, METH_VARARGS,
   "RemoveAllOperations(self) -> None\nC++: void RemoveAllOperations()\n\nRemove all operations.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRearrangeFields_Doc =
  "vtkRearrangeFields - Move/copy fields between field data, point data\nand cell data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkRearrangeFields is used to copy/move fields (vtkDataArrays)\n"
  "between data object's field data, point data and cell data. To\n"
  "specify which fields are copied/moved, the user adds operations.\n"
  "There are two types of operations: 1. the type which copies/moves an\n"
  "attribute's data (i.e. the field will be copied but will not be an\n"
  "attribute in the target), 2. the type which copies/moves fields by\n"
  "name. For example:\n"
  " rf->AddOperation(vtkRearrangeFields::COPY, \"foo\",\n"
  "                  vtkRearrangeFields::DATA_OBJECT,\n"
  "                  vtkRearrangeFields::POINT_DATA);\n"
  "  adds an operation which copies a field (data array) called foo from\n"
  "the data object's field data to point data. The same can be done\n"
  "using Python and Java bindings by passing strings as arguments.\n"
  " Operation types: COPY, MOVE\n"
  " AttributeTypes: SCALARS, VECTORS, NORMALS, TCOORDS, TENSORS\n"
  " Field data locations: DATA_OBJECT, POINT_DATA, CELL_DATA\n"
  " \n\n"
  "@warning\n"
  "When using Java, Python or Visual Basic bindings, the array name can\n"
  "not be one of the  AttributeTypes when calling AddOperation() which\n"
  "takes strings as arguments. The wrapped command will always assume\n"
  "the string corresponds to an attribute type when the argument is one\n"
  "of the AttributeTypes. In this situation, use the AddOperation()\n"
  "which takes enums.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkAssignAttribute vtkSplitField\n"
  "vtkMergeFields\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRearrangeFields_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkRearrangeFields", // tp_name
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
  PyvtkRearrangeFields_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRearrangeFields_StaticNew()
{
  return vtkRearrangeFields::New();
}

PyObject *PyvtkRearrangeFields_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRearrangeFields_Type, PyvtkRearrangeFields_Methods,
    "vtkRearrangeFields",
 &PyvtkRearrangeFields_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkRearrangeFields_OperationType_Type);
  PyVTKEnum_Add(&PyvtkRearrangeFields_OperationType_Type, "vtkRearrangeFields.OperationType");

  o = (PyObject *)&PyvtkRearrangeFields_OperationType_Type;
  if (PyDict_SetItemString(d, "OperationType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkRearrangeFields_FieldLocation_Type);
  PyVTKEnum_Add(&PyvtkRearrangeFields_FieldLocation_Type, "vtkRearrangeFields.FieldLocation");

  o = (PyObject *)&PyvtkRearrangeFields_FieldLocation_Type;
  if (PyDict_SetItemString(d, "FieldLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkRearrangeFields_FieldType_Type);
  PyVTKEnum_Add(&PyvtkRearrangeFields_FieldType_Type, "vtkRearrangeFields.FieldType");

  o = (PyObject *)&PyvtkRearrangeFields_FieldType_Type;
  if (PyDict_SetItemString(d, "FieldType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkRearrangeFields::OperationType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "COPY", vtkRearrangeFields::COPY },
        { "MOVE", vtkRearrangeFields::MOVE },
      };

    o = PyvtkRearrangeFields_OperationType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkRearrangeFields::FieldLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DATA_OBJECT", vtkRearrangeFields::DATA_OBJECT },
        { "POINT_DATA", vtkRearrangeFields::POINT_DATA },
        { "CELL_DATA", vtkRearrangeFields::CELL_DATA },
      };

    o = PyvtkRearrangeFields_FieldLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkRearrangeFields::FieldType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "NAME", vtkRearrangeFields::NAME },
        { "ATTRIBUTE", vtkRearrangeFields::ATTRIBUTE },
      };

    o = PyvtkRearrangeFields_FieldType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRearrangeFields(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRearrangeFields_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRearrangeFields", o) != 0)
  {
    Py_DECREF(o);
  }

}

