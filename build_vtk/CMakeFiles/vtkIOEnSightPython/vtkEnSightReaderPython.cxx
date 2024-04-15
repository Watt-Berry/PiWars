// python wrapper for vtkEnSightReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkEnSightReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkEnSightReader(PyObject *dict); }
extern "C" { PyObject *PyvtkEnSightReader_ClassNew(); }

#ifndef DECLARED_PyvtkGenericEnSightReader_ClassNew
extern "C" { PyObject *PyvtkGenericEnSightReader_ClassNew(); }
#define DECLARED_PyvtkGenericEnSightReader_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightReader_ElementTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightReader.ElementTypesList", // tp_name
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
PyObject *PyvtkEnSightReader_ElementTypesList_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEnSightReader_ElementTypesList_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightReader_VariableTypesList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightReader.VariableTypesList", // tp_name
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
PyObject *PyvtkEnSightReader_VariableTypesList_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEnSightReader_VariableTypesList_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightReader_SectionTypeList_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightReader.SectionTypeList", // tp_name
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
PyObject *PyvtkEnSightReader_SectionTypeList_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkEnSightReader_SectionTypeList_Type, static_cast<int>(val));
}


static PyObject *
PyvtkEnSightReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkEnSightReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkEnSightReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkEnSightReader *tempr = vtkEnSightReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkEnSightReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkEnSightReader::NewInstance());

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
PyvtkEnSightReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkEnSightReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkEnSightReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMeasuredFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMeasuredFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMeasuredFileName() :
      op->vtkEnSightReader::GetMeasuredFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkEnSightReader_GetMatchFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatchFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkEnSightReader *op = static_cast<vtkEnSightReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMatchFileName() :
      op->vtkEnSightReader::GetMatchFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkEnSightReader_Methods[] = {
  {"IsTypeOf", PyvtkEnSightReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkEnSightReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkEnSightReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkEnSightReader\nC++: static vtkEnSightReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkEnSightReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkEnSightReader\nC++: vtkEnSightReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkEnSightReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkEnSightReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMeasuredFileName", PyvtkEnSightReader_GetMeasuredFileName, METH_VARARGS,
   "GetMeasuredFileName(self) -> str\nC++: virtual char *GetMeasuredFileName()\n\nGet the Measured file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {"GetMatchFileName", PyvtkEnSightReader_GetMatchFileName, METH_VARARGS,
   "GetMatchFileName(self) -> str\nC++: virtual char *GetMatchFileName()\n\nGet the Match file name. Made public to allow access from apps\nrequiring detailed info about the Data contents\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkEnSightReader_Doc =
  "vtkEnSightReader - superclass for EnSight file readers\n\n"
  "Superclass: vtkGenericEnSightReader\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkEnSightReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOEnSight.vtkEnSightReader", // tp_name
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
  PyvtkEnSightReader_Doc, // tp_doc
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

PyObject *PyvtkEnSightReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkEnSightReader_Type, PyvtkEnSightReader_Methods,
    "vtkEnSightReader",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkGenericEnSightReader_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkEnSightReader_ElementTypesList_Type);
  PyVTKEnum_Add(&PyvtkEnSightReader_ElementTypesList_Type, "vtkEnSightReader.ElementTypesList");

  o = (PyObject *)&PyvtkEnSightReader_ElementTypesList_Type;
  if (PyDict_SetItemString(d, "ElementTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEnSightReader_VariableTypesList_Type);
  PyVTKEnum_Add(&PyvtkEnSightReader_VariableTypesList_Type, "vtkEnSightReader.VariableTypesList");

  o = (PyObject *)&PyvtkEnSightReader_VariableTypesList_Type;
  if (PyDict_SetItemString(d, "VariableTypesList", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkEnSightReader_SectionTypeList_Type);
  PyVTKEnum_Add(&PyvtkEnSightReader_SectionTypeList_Type, "vtkEnSightReader.SectionTypeList");

  o = (PyObject *)&PyvtkEnSightReader_SectionTypeList_Type;
  if (PyDict_SetItemString(d, "SectionTypeList", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 18; c++)
  {
    typedef vtkEnSightReader::ElementTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[18] = {
        { "POINT", vtkEnSightReader::POINT },
        { "BAR2", vtkEnSightReader::BAR2 },
        { "BAR3", vtkEnSightReader::BAR3 },
        { "NSIDED", vtkEnSightReader::NSIDED },
        { "TRIA3", vtkEnSightReader::TRIA3 },
        { "TRIA6", vtkEnSightReader::TRIA6 },
        { "QUAD4", vtkEnSightReader::QUAD4 },
        { "QUAD8", vtkEnSightReader::QUAD8 },
        { "NFACED", vtkEnSightReader::NFACED },
        { "TETRA4", vtkEnSightReader::TETRA4 },
        { "TETRA10", vtkEnSightReader::TETRA10 },
        { "PYRAMID5", vtkEnSightReader::PYRAMID5 },
        { "PYRAMID13", vtkEnSightReader::PYRAMID13 },
        { "HEXA8", vtkEnSightReader::HEXA8 },
        { "HEXA20", vtkEnSightReader::HEXA20 },
        { "PENTA6", vtkEnSightReader::PENTA6 },
        { "PENTA15", vtkEnSightReader::PENTA15 },
        { "NUMBER_OF_ELEMENT_TYPES", vtkEnSightReader::NUMBER_OF_ELEMENT_TYPES },
      };

    o = PyvtkEnSightReader_ElementTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 14; c++)
  {
    typedef vtkEnSightReader::VariableTypesList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[14] = {
        { "SCALAR_PER_NODE", vtkEnSightReader::SCALAR_PER_NODE },
        { "VECTOR_PER_NODE", vtkEnSightReader::VECTOR_PER_NODE },
        { "TENSOR_SYMM_PER_NODE", vtkEnSightReader::TENSOR_SYMM_PER_NODE },
        { "SCALAR_PER_ELEMENT", vtkEnSightReader::SCALAR_PER_ELEMENT },
        { "VECTOR_PER_ELEMENT", vtkEnSightReader::VECTOR_PER_ELEMENT },
        { "TENSOR_SYMM_PER_ELEMENT", vtkEnSightReader::TENSOR_SYMM_PER_ELEMENT },
        { "SCALAR_PER_MEASURED_NODE", vtkEnSightReader::SCALAR_PER_MEASURED_NODE },
        { "VECTOR_PER_MEASURED_NODE", vtkEnSightReader::VECTOR_PER_MEASURED_NODE },
        { "COMPLEX_SCALAR_PER_NODE", vtkEnSightReader::COMPLEX_SCALAR_PER_NODE },
        { "COMPLEX_VECTOR_PER_NODE", vtkEnSightReader::COMPLEX_VECTOR_PER_NODE },
        { "COMPLEX_SCALAR_PER_ELEMENT", vtkEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
        { "COMPLEX_VECTOR_PER_ELEMENT", vtkEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
        { "TENSOR_ASYM_PER_NODE", vtkEnSightReader::TENSOR_ASYM_PER_NODE },
        { "TENSOR_ASYM_PER_ELEMENT", vtkEnSightReader::TENSOR_ASYM_PER_ELEMENT },
      };

    o = PyvtkEnSightReader_VariableTypesList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkEnSightReader::SectionTypeList cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "COORDINATES", vtkEnSightReader::COORDINATES },
        { "BLOCK", vtkEnSightReader::BLOCK },
        { "ELEMENT", vtkEnSightReader::ELEMENT },
      };

    o = PyvtkEnSightReader_SectionTypeList_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkEnSightReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkEnSightReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkEnSightReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

