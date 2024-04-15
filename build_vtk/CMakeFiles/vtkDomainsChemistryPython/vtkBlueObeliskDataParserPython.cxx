// python wrapper for vtkBlueObeliskDataParser
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBlueObeliskDataParser.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlueObeliskDataParser(PyObject *dict); }
extern "C" { PyObject *PyvtkBlueObeliskDataParser_ClassNew(); }


static PyObject *
PyvtkBlueObeliskDataParser_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlueObeliskDataParser::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlueObeliskDataParser::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlueObeliskDataParser *tempr = vtkBlueObeliskDataParser::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlueObeliskDataParser *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlueObeliskDataParser::NewInstance());

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
PyvtkBlueObeliskDataParser_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBlueObeliskDataParser::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBlueObeliskDataParser::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_SetTarget(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTarget");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  vtkBlueObeliskData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBlueObeliskData"))
  {
    if (ap.IsBound())
    {
      op->SetTarget(temp0);
    }
    else
    {
      op->vtkBlueObeliskDataParser::SetTarget(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlueObeliskDataParser_Parse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse() :
      op->vtkBlueObeliskDataParser::Parse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBlueObeliskDataParser_Parse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0) :
      op->vtkBlueObeliskDataParser::Parse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBlueObeliskDataParser_Parse_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Parse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlueObeliskDataParser *op = static_cast<vtkBlueObeliskDataParser *>(vp);

  const char *temp0 = nullptr;
  unsigned int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->Parse(temp0, temp1) :
      op->vtkBlueObeliskDataParser::Parse(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkBlueObeliskDataParser_Parse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkBlueObeliskDataParser_Parse_s1(self, args);
    case 1:
      return PyvtkBlueObeliskDataParser_Parse_s2(self, args);
    case 2:
      return PyvtkBlueObeliskDataParser_Parse_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Parse");
  return nullptr;
}

static PyMethodDef PyvtkBlueObeliskDataParser_Methods[] = {
  {"IsTypeOf", PyvtkBlueObeliskDataParser_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlueObeliskDataParser_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlueObeliskDataParser_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBlueObeliskDataParser\nC++: static vtkBlueObeliskDataParser *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlueObeliskDataParser_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBlueObeliskDataParser\nC++: vtkBlueObeliskDataParser *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBlueObeliskDataParser_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBlueObeliskDataParser_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTarget", PyvtkBlueObeliskDataParser_SetTarget, METH_VARARGS,
   "SetTarget(self, bodr:vtkBlueObeliskData) -> None\nC++: virtual void SetTarget(vtkBlueObeliskData *bodr)\n\nSet the target vtkBlueObeliskData object that this parser will\npopulate\n"},
  {"Parse", PyvtkBlueObeliskDataParser_Parse, METH_VARARGS,
   "Parse(self) -> int\nC++: int Parse() override;\nParse(self, __a:str) -> int\nC++: int Parse(const char *) override;\nParse(self, __a:str, __b:int) -> int\nC++: int Parse(const char *, unsigned int) override;\n\nStart parsing\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBlueObeliskDataParser_Doc =
  "vtkBlueObeliskDataParser - Fill a vtkBlueObeliskData container with\ndata from the BODR XML dataset.\n\n"
  "Superclass: vtkXMLParser\n\n"
  "The Blue Obelisk Data Repository is a free, open repository of\n"
  "chemical information. This class extracts the BODR information into\n"
  "vtk arrays, which are stored in a vtkBlueObeliskData object.\n\n"
  "\\warning The vtkBlueObeliskDataParser class should never need to be\n"
  "used directly. For convenient access to the BODR data, use\n"
  "vtkPeriodicTable. For access to the raw arrays produced by this\n"
  "parser, see the vtkBlueObeliskData class. A static vtkBlueObeliskData\n"
  "object is accessible via vtkPeriodicTable::GetBlueObeliskData().\n\n"
  "@sa\n"
  "vtkPeriodicTable vtkBlueObeliskData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlueObeliskDataParser_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkBlueObeliskDataParser", // tp_name
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
  PyvtkBlueObeliskDataParser_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlueObeliskDataParser_StaticNew()
{
  return vtkBlueObeliskDataParser::New();
}

PyObject *PyvtkBlueObeliskDataParser_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBlueObeliskDataParser_Type, PyvtkBlueObeliskDataParser_Methods,
    "vtkBlueObeliskDataParser",
 &PyvtkBlueObeliskDataParser_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkXMLParser");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlueObeliskDataParser(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlueObeliskDataParser_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlueObeliskDataParser", o) != 0)
  {
    Py_DECREF(o);
  }

}

