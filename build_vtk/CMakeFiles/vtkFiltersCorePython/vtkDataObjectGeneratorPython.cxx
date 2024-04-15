// python wrapper for vtkDataObjectGenerator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataObjectGenerator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataObjectGenerator(PyObject *dict); }
extern "C" { PyObject *PyvtkDataObjectGenerator_ClassNew(); }


static PyObject *
PyvtkDataObjectGenerator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataObjectGenerator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataObjectGenerator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataObjectGenerator *tempr = vtkDataObjectGenerator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataObjectGenerator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataObjectGenerator::NewInstance());

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
PyvtkDataObjectGenerator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataObjectGenerator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataObjectGenerator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_SetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProgram(temp0);
    }
    else
    {
      op->vtkDataObjectGenerator::SetProgram(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataObjectGenerator_GetProgram(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProgram");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataObjectGenerator *op = static_cast<vtkDataObjectGenerator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetProgram() :
      op->vtkDataObjectGenerator::GetProgram());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataObjectGenerator_Methods[] = {
  {"IsTypeOf", PyvtkDataObjectGenerator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataObjectGenerator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataObjectGenerator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataObjectGenerator\nC++: static vtkDataObjectGenerator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataObjectGenerator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataObjectGenerator\nC++: vtkDataObjectGenerator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataObjectGenerator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataObjectGenerator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetProgram", PyvtkDataObjectGenerator_SetProgram, METH_VARARGS,
   "SetProgram(self, _arg:str) -> None\nC++: virtual void SetProgram(const char *_arg)\n\nThe string that will be parsed to specify a dataobject structure.\n"},
  {"GetProgram", PyvtkDataObjectGenerator_GetProgram, METH_VARARGS,
   "GetProgram(self) -> str\nC++: virtual char *GetProgram()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataObjectGenerator_Doc =
  "vtkDataObjectGenerator - produces simple (composite or atomic) data\nsets for testing.\n\n"
  "Superclass: vtkDataObjectAlgorithm\n\n"
  "vtkDataObjectGenerator parses a string and produces dataobjects from\n"
  "the dataobject template names it sees in the string. For example, if\n"
  "the string contains \"ID1\" the generator will create a vtkImageData.\n"
  "\"UF1\", \"RG1\", \"SG1\", \"PD1\", and \"UG1\" will produce vtkUniformGrid,\n"
  "vtkRectilinearGrid, vtkStructuredGrid, vtkPolyData and\n"
  "vtkUnstructuredGrid respectively. \"PD2\" will produce an alternate\n"
  "vtkPolyData. You can compose composite datasets from the atomic ones\n"
  "listed above by placing them within one of the two composite dataset\n"
  "identifiers\n"
  "- \"MB{}\" or \"HB[]\". \"MB{ ID1 PD1 MB{} }\" for example will create a\n"
  "  vtkMultiBlockDataSet consisting of three blocks: image data, poly\n"
  "  data, multi-block (empty). Hierarchical Box data sets additionally\n"
  "  require the notion of groups, declared within \"()\" braces, to\n"
  "  specify AMR depth. \"HB[ (UF1)(UF1)(UF1) ]\" will create a\n"
  "  vtkHierarchicalBoxDataSet representing an octree that is three\n"
  "  levels deep, in which the firstmost cell in each level is refined.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataObjectGenerator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkDataObjectGenerator", // tp_name
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
  PyvtkDataObjectGenerator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataObjectGenerator_StaticNew()
{
  return vtkDataObjectGenerator::New();
}

PyObject *PyvtkDataObjectGenerator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataObjectGenerator_Type, PyvtkDataObjectGenerator_Methods,
    "vtkDataObjectGenerator",
 &PyvtkDataObjectGenerator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataObjectAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataObjectGenerator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataObjectGenerator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataObjectGenerator", o) != 0)
  {
    Py_DECREF(o);
  }

}

