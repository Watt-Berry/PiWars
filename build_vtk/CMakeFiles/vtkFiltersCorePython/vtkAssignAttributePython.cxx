// python wrapper for vtkAssignAttribute
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAssignAttribute.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAssignAttribute(PyObject *dict); }
extern "C" { PyObject *PyvtkAssignAttribute_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssignAttribute_AttributeLocation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAssignAttribute.AttributeLocation", // tp_name
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
PyObject *PyvtkAssignAttribute_AttributeLocation_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkAssignAttribute_AttributeLocation_Type, static_cast<int>(val));
}


static PyObject *
PyvtkAssignAttribute_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAssignAttribute::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAssignAttribute::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAssignAttribute *tempr = vtkAssignAttribute::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAssignAttribute *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAssignAttribute::NewInstance());

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
PyvtkAssignAttribute_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAssignAttribute::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAssignAttribute::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAssignAttribute_Assign_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkAssignAttribute_Assign_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Assign");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAssignAttribute *op = static_cast<vtkAssignAttribute *>(vp);

  const char *temp0 = nullptr;
  const char *temp1 = nullptr;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->Assign(temp0, temp1, temp2);
    }
    else
    {
      op->vtkAssignAttribute::Assign(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAssignAttribute_Assign_Methods[] = {
  {"Assign", PyvtkAssignAttribute_Assign_s1, METH_VARARGS,
   "@iii"},
  {"Assign", PyvtkAssignAttribute_Assign_s2, METH_VARARGS,
   "@zii"},
  {"Assign", PyvtkAssignAttribute_Assign_s3, METH_VARARGS,
   "@zzz"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkAssignAttribute_Assign(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkAssignAttribute_Assign_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Assign");
  return nullptr;
}

static PyMethodDef PyvtkAssignAttribute_Methods[] = {
  {"IsTypeOf", PyvtkAssignAttribute_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAssignAttribute_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAssignAttribute_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAssignAttribute\nC++: static vtkAssignAttribute *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAssignAttribute_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAssignAttribute\nC++: vtkAssignAttribute *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAssignAttribute_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAssignAttribute_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Assign", PyvtkAssignAttribute_Assign, METH_VARARGS,
   "Assign(self, inputAttributeType:int, attributeType:int,\n    attributeLoc:int) -> None\nC++: void Assign(int inputAttributeType, int attributeType,\n    int attributeLoc)\nAssign(self, fieldName:str, attributeType:int, attributeLoc:int)\n    -> None\nC++: void Assign(const char *fieldName, int attributeType,\n    int attributeLoc)\nAssign(self, name:str, attributeType:str, attributeLoc:str)\n    -> None\nC++: void Assign(const char *name, const char *attributeType,\n    const char *attributeLoc)\n\nLabel an attribute as another attribute.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAssignAttribute_Doc =
  "vtkAssignAttribute - Labels/marks a field as an attribute\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "vtkAssignAttribute is used to label/mark a field (vtkDataArray) as an\n"
  "attribute. A field name or an attribute to labeled can be specified.\n"
  "For example:\n"
  " aa->Assign(\"foo\", vtkDataSetAttributes::SCALARS,\n"
  "            vtkAssignAttribute::POINT_DATA);\n"
  "  tells vtkAssignAttribute to make the array in the point data called\n"
  "\"foo\" the active scalars. On the other hand,\n"
  " aa->Assign(vtkDataSetAttributes::VECTORS, vtkDataSetAttributes::SCALARS,\n"
  "            vtkAssignAttribute::POINT_DATA);\n"
  "  tells vtkAssignAttribute to make the active vectors also the active\n"
  "scalars.\n\n"
  "@warning\n"
  "When using Java, Python or Visual Basic bindings, the array name can\n"
  "not be one of the  AttributeTypes when calling Assign() which takes\n"
  "strings as arguments. The wrapped command will always assume the\n"
  "string corresponds to an attribute type when the argument is one of\n"
  "the AttributeTypes. In this situation, use the Assign() which takes\n"
  "enums.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataSet vtkDataObjectToDataSetFilter\n"
  "vtkDataSetAttributes vtkDataArray vtkRearrangeFields vtkSplitField\n"
  "vtkMergeFields\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAssignAttribute_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAssignAttribute", // tp_name
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
  PyvtkAssignAttribute_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAssignAttribute_StaticNew()
{
  return vtkAssignAttribute::New();
}

PyObject *PyvtkAssignAttribute_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAssignAttribute_Type, PyvtkAssignAttribute_Methods,
    "vtkAssignAttribute",
 &PyvtkAssignAttribute_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkAssignAttribute_AttributeLocation_Type);
  PyVTKEnum_Add(&PyvtkAssignAttribute_AttributeLocation_Type, "vtkAssignAttribute.AttributeLocation");

  o = (PyObject *)&PyvtkAssignAttribute_AttributeLocation_Type;
  if (PyDict_SetItemString(d, "AttributeLocation", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkAssignAttribute::AttributeLocation cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "POINT_DATA", vtkAssignAttribute::POINT_DATA },
        { "CELL_DATA", vtkAssignAttribute::CELL_DATA },
        { "VERTEX_DATA", vtkAssignAttribute::VERTEX_DATA },
        { "EDGE_DATA", vtkAssignAttribute::EDGE_DATA },
        { "NUM_ATTRIBUTE_LOCS", vtkAssignAttribute::NUM_ATTRIBUTE_LOCS },
      };

    o = PyvtkAssignAttribute_AttributeLocation_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAssignAttribute(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAssignAttribute_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAssignAttribute", o) != 0)
  {
    Py_DECREF(o);
  }

}

