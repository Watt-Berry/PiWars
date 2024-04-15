// python wrapper for vtkExplicitStructuredGridSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGridSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExplicitStructuredGridSurfaceFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkExplicitStructuredGridSurfaceFilter_ClassNew(); }


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExplicitStructuredGridSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExplicitStructuredGridSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExplicitStructuredGridSurfaceFilter *tempr = vtkExplicitStructuredGridSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExplicitStructuredGridSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExplicitStructuredGridSurfaceFilter::NewInstance());

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
PyvtkExplicitStructuredGridSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExplicitStructuredGridSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExplicitStructuredGridSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkExplicitStructuredGridSurfaceFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughPointIds(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkExplicitStructuredGridSurfaceFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalCellIdsName(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::SetOriginalCellIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalCellIdsName() :
      op->vtkExplicitStructuredGridSurfaceFilter::GetOriginalCellIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalPointIdsName(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGridSurfaceFilter::SetOriginalPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridSurfaceFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridSurfaceFilter *op = static_cast<vtkExplicitStructuredGridSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsName() :
      op->vtkExplicitStructuredGridSurfaceFilter::GetOriginalPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkExplicitStructuredGridSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkExplicitStructuredGridSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExplicitStructuredGridSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExplicitStructuredGridSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkExplicitStructuredGridSurfaceFilter\nC++: static vtkExplicitStructuredGridSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExplicitStructuredGridSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExplicitStructuredGridSurfaceFilter\nC++: vtkExplicitStructuredGridSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExplicitStructuredGridSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExplicitStructuredGridSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPassThroughCellIds", PyvtkExplicitStructuredGridSurfaceFilter_SetPassThroughCellIds, METH_VARARGS,
   "SetPassThroughCellIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughCellIds(int _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {"GetPassThroughCellIds", PyvtkExplicitStructuredGridSurfaceFilter_GetPassThroughCellIds, METH_VARARGS,
   "GetPassThroughCellIds(self) -> int\nC++: virtual int GetPassThroughCellIds()\n\n"},
  {"PassThroughCellIdsOn", PyvtkExplicitStructuredGridSurfaceFilter_PassThroughCellIdsOn, METH_VARARGS,
   "PassThroughCellIdsOn(self) -> None\nC++: virtual void PassThroughCellIdsOn()\n\n"},
  {"PassThroughCellIdsOff", PyvtkExplicitStructuredGridSurfaceFilter_PassThroughCellIdsOff, METH_VARARGS,
   "PassThroughCellIdsOff(self) -> None\nC++: virtual void PassThroughCellIdsOff()\n\n"},
  {"SetPassThroughPointIds", PyvtkExplicitStructuredGridSurfaceFilter_SetPassThroughPointIds, METH_VARARGS,
   "SetPassThroughPointIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughPointIds(int _arg)\n\n"},
  {"GetPassThroughPointIds", PyvtkExplicitStructuredGridSurfaceFilter_GetPassThroughPointIds, METH_VARARGS,
   "GetPassThroughPointIds(self) -> int\nC++: virtual int GetPassThroughPointIds()\n\n"},
  {"PassThroughPointIdsOn", PyvtkExplicitStructuredGridSurfaceFilter_PassThroughPointIdsOn, METH_VARARGS,
   "PassThroughPointIdsOn(self) -> None\nC++: virtual void PassThroughPointIdsOn()\n\n"},
  {"PassThroughPointIdsOff", PyvtkExplicitStructuredGridSurfaceFilter_PassThroughPointIdsOff, METH_VARARGS,
   "PassThroughPointIdsOff(self) -> None\nC++: virtual void PassThroughPointIdsOff()\n\n"},
  {"SetOriginalCellIdsName", PyvtkExplicitStructuredGridSurfaceFilter_SetOriginalCellIdsName, METH_VARARGS,
   "SetOriginalCellIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalCellIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to NULL, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalCellIdsName", PyvtkExplicitStructuredGridSurfaceFilter_GetOriginalCellIdsName, METH_VARARGS,
   "GetOriginalCellIdsName(self) -> str\nC++: virtual const char *GetOriginalCellIdsName()\n\n"},
  {"SetOriginalPointIdsName", PyvtkExplicitStructuredGridSurfaceFilter_SetOriginalPointIdsName, METH_VARARGS,
   "SetOriginalPointIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalPointIdsName(const char *_arg)\n\n"},
  {"GetOriginalPointIdsName", PyvtkExplicitStructuredGridSurfaceFilter_GetOriginalPointIdsName, METH_VARARGS,
   "GetOriginalPointIdsName(self) -> str\nC++: virtual const char *GetOriginalPointIdsName()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExplicitStructuredGridSurfaceFilter_Doc =
  "vtkExplicitStructuredGridSurfaceFilter - Filter which creates a\nsurface (polydata) from an explicit structured grid.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExplicitStructuredGridSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkExplicitStructuredGridSurfaceFilter", // tp_name
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
  PyvtkExplicitStructuredGridSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExplicitStructuredGridSurfaceFilter_StaticNew()
{
  return vtkExplicitStructuredGridSurfaceFilter::New();
}

PyObject *PyvtkExplicitStructuredGridSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExplicitStructuredGridSurfaceFilter_Type, PyvtkExplicitStructuredGridSurfaceFilter_Methods,
    "vtkExplicitStructuredGridSurfaceFilter",
 &PyvtkExplicitStructuredGridSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExplicitStructuredGridSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExplicitStructuredGridSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExplicitStructuredGridSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

