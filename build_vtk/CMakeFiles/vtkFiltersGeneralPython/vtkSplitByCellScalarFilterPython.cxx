// python wrapper for vtkSplitByCellScalarFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSplitByCellScalarFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplitByCellScalarFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkSplitByCellScalarFilter_ClassNew(); }


static PyObject *
PyvtkSplitByCellScalarFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplitByCellScalarFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitByCellScalarFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplitByCellScalarFilter *tempr = vtkSplitByCellScalarFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplitByCellScalarFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitByCellScalarFilter::NewInstance());

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
PyvtkSplitByCellScalarFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSplitByCellScalarFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSplitByCellScalarFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_GetPassAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPassAllPoints() :
      op->vtkSplitByCellScalarFilter::GetPassAllPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_SetPassAllPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassAllPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassAllPoints(temp0);
    }
    else
    {
      op->vtkSplitByCellScalarFilter::SetPassAllPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_PassAllPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAllPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAllPointsOn();
    }
    else
    {
      op->vtkSplitByCellScalarFilter::PassAllPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitByCellScalarFilter_PassAllPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassAllPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitByCellScalarFilter *op = static_cast<vtkSplitByCellScalarFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassAllPointsOff();
    }
    else
    {
      op->vtkSplitByCellScalarFilter::PassAllPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSplitByCellScalarFilter_Methods[] = {
  {"IsTypeOf", PyvtkSplitByCellScalarFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplitByCellScalarFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplitByCellScalarFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSplitByCellScalarFilter\nC++: static vtkSplitByCellScalarFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplitByCellScalarFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSplitByCellScalarFilter\nC++: vtkSplitByCellScalarFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSplitByCellScalarFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSplitByCellScalarFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetPassAllPoints", PyvtkSplitByCellScalarFilter_GetPassAllPoints, METH_VARARGS,
   "GetPassAllPoints(self) -> bool\nC++: virtual bool GetPassAllPoints()\n\nSpecify if input points array must be passed to output blocks. If\nso, filter processing is faster but outblocks will contains more\npoints than what is needed by the cells it owns. If not, a new\npoints array is created for every block and it will only contains\npoints for copied cells. Note that this function is only possible\nfor PointSet datasets. The default is true.\n"},
  {"SetPassAllPoints", PyvtkSplitByCellScalarFilter_SetPassAllPoints, METH_VARARGS,
   "SetPassAllPoints(self, _arg:bool) -> None\nC++: virtual void SetPassAllPoints(bool _arg)\n\n"},
  {"PassAllPointsOn", PyvtkSplitByCellScalarFilter_PassAllPointsOn, METH_VARARGS,
   "PassAllPointsOn(self) -> None\nC++: virtual void PassAllPointsOn()\n\n"},
  {"PassAllPointsOff", PyvtkSplitByCellScalarFilter_PassAllPointsOff, METH_VARARGS,
   "PassAllPointsOff(self) -> None\nC++: virtual void PassAllPointsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSplitByCellScalarFilter_Doc =
  "vtkSplitByCellScalarFilter - splits input dataset according an\ninteger cell scalar array.\n\n"
  "Superclass: vtkMultiBlockDataSetAlgorithm\n\n"
  "vtkSplitByCellScalarFilter is a filter that splits any dataset type\n"
  "according an integer cell scalar value (typically a material\n"
  "identifier) to a multiblock. Each block of the output contains cells\n"
  "that have the same scalar value. Output blocks will be of type\n"
  "vtkUnstructuredGrid except if input is of type vtkPolyData. In that\n"
  "case output blocks are of type vtkPolyData.\n\n"
  "@sa\n"
  "vtkThreshold\n\n"
  "@par Thanks: This class was written by Joachim Pouderoux, Kitware\n"
  "2016.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSplitByCellScalarFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSplitByCellScalarFilter", // tp_name
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
  PyvtkSplitByCellScalarFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplitByCellScalarFilter_StaticNew()
{
  return vtkSplitByCellScalarFilter::New();
}

PyObject *PyvtkSplitByCellScalarFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSplitByCellScalarFilter_Type, PyvtkSplitByCellScalarFilter_Methods,
    "vtkSplitByCellScalarFilter",
 &PyvtkSplitByCellScalarFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkMultiBlockDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSplitByCellScalarFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplitByCellScalarFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplitByCellScalarFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

