// python wrapper for vtkAttributeDataToFieldDataFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkAttributeDataToFieldDataFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkAttributeDataToFieldDataFilter_ClassNew(); }


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkAttributeDataToFieldDataFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkAttributeDataToFieldDataFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkAttributeDataToFieldDataFilter *tempr = vtkAttributeDataToFieldDataFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAttributeDataToFieldDataFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkAttributeDataToFieldDataFilter::NewInstance());

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
PyvtkAttributeDataToFieldDataFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkAttributeDataToFieldDataFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkAttributeDataToFieldDataFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassAttributeData(temp0);
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::SetPassAttributeData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAttributeData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassAttributeData() :
      op->vtkAttributeDataToFieldDataFilter::GetPassAttributeData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAttributeDataOn();
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAttributeDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkAttributeDataToFieldDataFilter *op = static_cast<vtkAttributeDataToFieldDataFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAttributeDataOff();
    }
    else
    {
      op->vtkAttributeDataToFieldDataFilter::PassAttributeDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkAttributeDataToFieldDataFilter_Methods[] = {
  {"IsTypeOf", PyvtkAttributeDataToFieldDataFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkAttributeDataToFieldDataFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkAttributeDataToFieldDataFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkAttributeDataToFieldDataFilter\nC++: static vtkAttributeDataToFieldDataFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkAttributeDataToFieldDataFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkAttributeDataToFieldDataFilter\nC++: vtkAttributeDataToFieldDataFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkAttributeDataToFieldDataFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkAttributeDataToFieldDataFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_SetPassAttributeData, METH_VARARGS,
   "SetPassAttributeData(self, _arg:int) -> None\nC++: virtual void SetPassAttributeData(vtkTypeBool _arg)\n\nTurn on/off the passing of point and cell non-field attribute\ndata to the output of the filter.\n"},
  {"GetPassAttributeData", PyvtkAttributeDataToFieldDataFilter_GetPassAttributeData, METH_VARARGS,
   "GetPassAttributeData(self) -> int\nC++: virtual vtkTypeBool GetPassAttributeData()\n\n"},
  {"PassAttributeDataOn", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOn, METH_VARARGS,
   "PassAttributeDataOn(self) -> None\nC++: virtual void PassAttributeDataOn()\n\n"},
  {"PassAttributeDataOff", PyvtkAttributeDataToFieldDataFilter_PassAttributeDataOff, METH_VARARGS,
   "PassAttributeDataOff(self) -> None\nC++: virtual void PassAttributeDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkAttributeDataToFieldDataFilter_Doc =
  "vtkAttributeDataToFieldDataFilter - map attribute data to field data\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkAttributeDataToFieldDataFilter is a class that maps attribute data\n"
  "into field data. Since this filter is a subclass of\n"
  "vtkDataSetAlgorithm, the output dataset (whose structure is the same\n"
  "as the input dataset), will contain the field data that is generated.\n"
  "The filter will convert point and cell attribute data to field data\n"
  "and assign it as point and cell field data, replacing any point or\n"
  "field data that was there previously. By default, the original\n"
  "non-field point and cell attribute data will be passed to the output\n"
  "of the filter, although you can shut this behavior down.\n\n"
  "@warning\n"
  "Reference counting the underlying data arrays is used to create the\n"
  "field data.  Therefore, no extra memory is utilized.\n\n"
  "@warning\n"
  "The original field data (if any) associated with the point and cell\n"
  "attribute data is placed into the generated fields along with the\n"
  "scalars, vectors, etc.\n\n"
  "@sa\n"
  "vtkFieldData vtkDataObject vtkDataSet\n"
  "vtkFieldDataToAttributeDataFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkAttributeDataToFieldDataFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkAttributeDataToFieldDataFilter", // tp_name
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
  PyvtkAttributeDataToFieldDataFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkAttributeDataToFieldDataFilter_StaticNew()
{
  return vtkAttributeDataToFieldDataFilter::New();
}

PyObject *PyvtkAttributeDataToFieldDataFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkAttributeDataToFieldDataFilter_Type, PyvtkAttributeDataToFieldDataFilter_Methods,
    "vtkAttributeDataToFieldDataFilter",
 &PyvtkAttributeDataToFieldDataFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkAttributeDataToFieldDataFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkAttributeDataToFieldDataFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkAttributeDataToFieldDataFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

