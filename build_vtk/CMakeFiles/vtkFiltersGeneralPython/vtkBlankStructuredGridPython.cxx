// python wrapper for vtkBlankStructuredGrid
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkBlankStructuredGrid.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkBlankStructuredGrid(PyObject *dict); }
extern "C" { PyObject *PyvtkBlankStructuredGrid_ClassNew(); }


static PyObject *
PyvtkBlankStructuredGrid_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkBlankStructuredGrid::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkBlankStructuredGrid::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkBlankStructuredGrid *tempr = vtkBlankStructuredGrid::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBlankStructuredGrid *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkBlankStructuredGrid::NewInstance());

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
PyvtkBlankStructuredGrid_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkBlankStructuredGrid::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkBlankStructuredGrid::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinBlankingValue(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetMinBlankingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMinBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinBlankingValue() :
      op->vtkBlankStructuredGrid::GetMinBlankingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxBlankingValue(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetMaxBlankingValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetMaxBlankingValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxBlankingValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaxBlankingValue() :
      op->vtkBlankStructuredGrid::GetMaxBlankingValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkBlankStructuredGrid::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayId(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetArrayId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetArrayId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayId() :
      op->vtkBlankStructuredGrid::GetArrayId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_SetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComponent(temp0);
    }
    else
    {
      op->vtkBlankStructuredGrid::SetComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMinValue() :
      op->vtkBlankStructuredGrid::GetComponentMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponentMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponentMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponentMaxValue() :
      op->vtkBlankStructuredGrid::GetComponentMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkBlankStructuredGrid_GetComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkBlankStructuredGrid *op = static_cast<vtkBlankStructuredGrid *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComponent() :
      op->vtkBlankStructuredGrid::GetComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkBlankStructuredGrid_Methods[] = {
  {"IsTypeOf", PyvtkBlankStructuredGrid_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkBlankStructuredGrid_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkBlankStructuredGrid_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkBlankStructuredGrid\nC++: static vtkBlankStructuredGrid *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkBlankStructuredGrid_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkBlankStructuredGrid\nC++: vtkBlankStructuredGrid *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkBlankStructuredGrid_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkBlankStructuredGrid_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMinBlankingValue", PyvtkBlankStructuredGrid_SetMinBlankingValue, METH_VARARGS,
   "SetMinBlankingValue(self, _arg:float) -> None\nC++: virtual void SetMinBlankingValue(double _arg)\n\nSpecify the lower data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"GetMinBlankingValue", PyvtkBlankStructuredGrid_GetMinBlankingValue, METH_VARARGS,
   "GetMinBlankingValue(self) -> float\nC++: virtual double GetMinBlankingValue()\n\n"},
  {"SetMaxBlankingValue", PyvtkBlankStructuredGrid_SetMaxBlankingValue, METH_VARARGS,
   "SetMaxBlankingValue(self, _arg:float) -> None\nC++: virtual void SetMaxBlankingValue(double _arg)\n\nSpecify the upper data value in the data array specified which\nwill be converted into a \"blank\" (or off) value in the blanking\narray.\n"},
  {"GetMaxBlankingValue", PyvtkBlankStructuredGrid_GetMaxBlankingValue, METH_VARARGS,
   "GetMaxBlankingValue(self) -> float\nC++: virtual double GetMaxBlankingValue()\n\n"},
  {"SetArrayName", PyvtkBlankStructuredGrid_SetArrayName, METH_VARARGS,
   "SetArrayName(self, _arg:str) -> None\nC++: virtual void SetArrayName(const char *_arg)\n\nSpecify the data array name to use to generate the blanking\nfield. Alternatively, you can specify the array id. (If both are\nset, the array name takes precedence.)\n"},
  {"GetArrayName", PyvtkBlankStructuredGrid_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\n"},
  {"SetArrayId", PyvtkBlankStructuredGrid_SetArrayId, METH_VARARGS,
   "SetArrayId(self, _arg:int) -> None\nC++: virtual void SetArrayId(int _arg)\n\nSpecify the data array id to use to generate the blanking field.\nAlternatively, you can specify the array name. (If both are set,\nthe array name takes precedence.)\n"},
  {"GetArrayId", PyvtkBlankStructuredGrid_GetArrayId, METH_VARARGS,
   "GetArrayId(self) -> int\nC++: virtual int GetArrayId()\n\n"},
  {"SetComponent", PyvtkBlankStructuredGrid_SetComponent, METH_VARARGS,
   "SetComponent(self, _arg:int) -> None\nC++: virtual void SetComponent(int _arg)\n\nSpecify the component in the data array to use to generate the\nblanking field.\n"},
  {"GetComponentMinValue", PyvtkBlankStructuredGrid_GetComponentMinValue, METH_VARARGS,
   "GetComponentMinValue(self) -> int\nC++: virtual int GetComponentMinValue()\n\n"},
  {"GetComponentMaxValue", PyvtkBlankStructuredGrid_GetComponentMaxValue, METH_VARARGS,
   "GetComponentMaxValue(self) -> int\nC++: virtual int GetComponentMaxValue()\n\n"},
  {"GetComponent", PyvtkBlankStructuredGrid_GetComponent, METH_VARARGS,
   "GetComponent(self) -> int\nC++: virtual int GetComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkBlankStructuredGrid_Doc =
  "vtkBlankStructuredGrid - translate point attribute data into a\nblanking field\n\n"
  "Superclass: vtkStructuredGridAlgorithm\n\n"
  "vtkBlankStructuredGrid is a filter that sets the blanking field in a\n"
  "vtkStructuredGrid dataset. The blanking field is set by examining a\n"
  "specified point attribute data array (e.g., scalars) and converting\n"
  "values in the data array to either a \"1\" (visible) or \"0\" (blanked)\n"
  "value in the blanking array. The values to be blanked are specified\n"
  "by giving a min/max range. All data values in the data array\n"
  "indicated and laying within the range specified (inclusive on both\n"
  "ends) are translated to a \"off\" blanking value.\n\n"
  "@sa\n"
  "vtkStructuredGrid\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkBlankStructuredGrid_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkBlankStructuredGrid", // tp_name
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
  PyvtkBlankStructuredGrid_Doc, // tp_doc
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

static vtkObjectBase *PyvtkBlankStructuredGrid_StaticNew()
{
  return vtkBlankStructuredGrid::New();
}

PyObject *PyvtkBlankStructuredGrid_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkBlankStructuredGrid_Type, PyvtkBlankStructuredGrid_Methods,
    "vtkBlankStructuredGrid",
 &PyvtkBlankStructuredGrid_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkBlankStructuredGrid(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkBlankStructuredGrid_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkBlankStructuredGrid", o) != 0)
  {
    Py_DECREF(o);
  }

}

