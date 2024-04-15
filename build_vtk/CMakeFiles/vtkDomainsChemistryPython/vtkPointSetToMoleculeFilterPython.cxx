// python wrapper for vtkPointSetToMoleculeFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPointSetToMoleculeFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPointSetToMoleculeFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkPointSetToMoleculeFilter_ClassNew(); }


static PyObject *
PyvtkPointSetToMoleculeFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPointSetToMoleculeFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPointSetToMoleculeFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPointSetToMoleculeFilter *tempr = vtkPointSetToMoleculeFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointSetToMoleculeFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPointSetToMoleculeFilter::NewInstance());

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
PyvtkPointSetToMoleculeFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPointSetToMoleculeFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPointSetToMoleculeFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_GetConvertLinesIntoBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetConvertLinesIntoBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetConvertLinesIntoBonds() :
      op->vtkPointSetToMoleculeFilter::GetConvertLinesIntoBonds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_SetConvertLinesIntoBonds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetConvertLinesIntoBonds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetConvertLinesIntoBonds(temp0);
    }
    else
    {
      op->vtkPointSetToMoleculeFilter::SetConvertLinesIntoBonds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_ConvertLinesIntoBondsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesIntoBondsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesIntoBondsOn();
    }
    else
    {
      op->vtkPointSetToMoleculeFilter::ConvertLinesIntoBondsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPointSetToMoleculeFilter_ConvertLinesIntoBondsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertLinesIntoBondsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPointSetToMoleculeFilter *op = static_cast<vtkPointSetToMoleculeFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ConvertLinesIntoBondsOff();
    }
    else
    {
      op->vtkPointSetToMoleculeFilter::ConvertLinesIntoBondsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPointSetToMoleculeFilter_Methods[] = {
  {"IsTypeOf", PyvtkPointSetToMoleculeFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPointSetToMoleculeFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPointSetToMoleculeFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPointSetToMoleculeFilter\nC++: static vtkPointSetToMoleculeFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPointSetToMoleculeFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPointSetToMoleculeFilter\nC++: vtkPointSetToMoleculeFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPointSetToMoleculeFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPointSetToMoleculeFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetConvertLinesIntoBonds", PyvtkPointSetToMoleculeFilter_GetConvertLinesIntoBonds, METH_VARARGS,
   "GetConvertLinesIntoBonds(self) -> bool\nC++: virtual bool GetConvertLinesIntoBonds()\n\nGet/Set if the filter should look for lines in input cells and\nconvert them into bonds. default is ON.\n"},
  {"SetConvertLinesIntoBonds", PyvtkPointSetToMoleculeFilter_SetConvertLinesIntoBonds, METH_VARARGS,
   "SetConvertLinesIntoBonds(self, _arg:bool) -> None\nC++: virtual void SetConvertLinesIntoBonds(bool _arg)\n\n"},
  {"ConvertLinesIntoBondsOn", PyvtkPointSetToMoleculeFilter_ConvertLinesIntoBondsOn, METH_VARARGS,
   "ConvertLinesIntoBondsOn(self) -> None\nC++: virtual void ConvertLinesIntoBondsOn()\n\n"},
  {"ConvertLinesIntoBondsOff", PyvtkPointSetToMoleculeFilter_ConvertLinesIntoBondsOff, METH_VARARGS,
   "ConvertLinesIntoBondsOff(self) -> None\nC++: virtual void ConvertLinesIntoBondsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPointSetToMoleculeFilter_Doc =
  "vtkPointSetToMoleculeFilter - no description provided.\n\n"
  "Superclass: vtkMoleculeAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPointSetToMoleculeFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkPointSetToMoleculeFilter", // tp_name
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
  PyvtkPointSetToMoleculeFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPointSetToMoleculeFilter_StaticNew()
{
  return vtkPointSetToMoleculeFilter::New();
}

PyObject *PyvtkPointSetToMoleculeFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPointSetToMoleculeFilter_Type, PyvtkPointSetToMoleculeFilter_Methods,
    "vtkPointSetToMoleculeFilter",
 &PyvtkPointSetToMoleculeFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMoleculeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPointSetToMoleculeFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPointSetToMoleculeFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPointSetToMoleculeFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

