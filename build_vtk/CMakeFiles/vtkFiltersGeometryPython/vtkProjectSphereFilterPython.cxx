// python wrapper for vtkProjectSphereFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProjectSphereFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProjectSphereFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProjectSphereFilter_ClassNew(); }


static PyObject *
PyvtkProjectSphereFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProjectSphereFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProjectSphereFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProjectSphereFilter *tempr = vtkProjectSphereFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProjectSphereFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProjectSphereFilter::NewInstance());

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
PyvtkProjectSphereFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProjectSphereFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProjectSphereFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0, temp1, temp2);
    }
    else
    {
      op->vtkProjectSphereFilter::SetCenter(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectSphereFilter_SetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCenter(temp0);
    }
    else
    {
      op->vtkProjectSphereFilter::SetCenter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkProjectSphereFilter_SetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkProjectSphereFilter_SetCenter_s1(self, args);
    case 1:
      return PyvtkProjectSphereFilter_SetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCenter");
  return nullptr;
}


static PyObject *
PyvtkProjectSphereFilter_GetCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkProjectSphereFilter::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_GetKeepPolePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKeepPolePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetKeepPolePoints() :
      op->vtkProjectSphereFilter::GetKeepPolePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetKeepPolePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKeepPolePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetKeepPolePoints(temp0);
    }
    else
    {
      op->vtkProjectSphereFilter::SetKeepPolePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_KeepPolePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepPolePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepPolePointsOn();
    }
    else
    {
      op->vtkProjectSphereFilter::KeepPolePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_KeepPolePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "KeepPolePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->KeepPolePointsOff();
    }
    else
    {
      op->vtkProjectSphereFilter::KeepPolePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_GetTranslateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTranslateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetTranslateZ() :
      op->vtkProjectSphereFilter::GetTranslateZ());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_SetTranslateZ(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTranslateZ");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTranslateZ(temp0);
    }
    else
    {
      op->vtkProjectSphereFilter::SetTranslateZ(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_TranslateZOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateZOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslateZOn();
    }
    else
    {
      op->vtkProjectSphereFilter::TranslateZOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProjectSphereFilter_TranslateZOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TranslateZOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProjectSphereFilter *op = static_cast<vtkProjectSphereFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TranslateZOff();
    }
    else
    {
      op->vtkProjectSphereFilter::TranslateZOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProjectSphereFilter_Methods[] = {
  {"IsTypeOf", PyvtkProjectSphereFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProjectSphereFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProjectSphereFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProjectSphereFilter\nC++: static vtkProjectSphereFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProjectSphereFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProjectSphereFilter\nC++: vtkProjectSphereFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProjectSphereFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProjectSphereFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCenter", PyvtkProjectSphereFilter_SetCenter, METH_VARARGS,
   "SetCenter(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCenter(double _arg1, double _arg2,\n    double _arg3)\nSetCenter(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCenter(const double _arg[3])\n\nSet the center of the sphere to be split. Default is 0,0,0.\n"},
  {"GetCenter", PyvtkProjectSphereFilter_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: virtual double *GetCenter()\n\n"},
  {"GetKeepPolePoints", PyvtkProjectSphereFilter_GetKeepPolePoints, METH_VARARGS,
   "GetKeepPolePoints(self) -> bool\nC++: virtual bool GetKeepPolePoints()\n\nSpecify whether or not to keep the cells using a point at a pole.\nThe default is false.\n"},
  {"SetKeepPolePoints", PyvtkProjectSphereFilter_SetKeepPolePoints, METH_VARARGS,
   "SetKeepPolePoints(self, _arg:bool) -> None\nC++: virtual void SetKeepPolePoints(bool _arg)\n\n"},
  {"KeepPolePointsOn", PyvtkProjectSphereFilter_KeepPolePointsOn, METH_VARARGS,
   "KeepPolePointsOn(self) -> None\nC++: virtual void KeepPolePointsOn()\n\n"},
  {"KeepPolePointsOff", PyvtkProjectSphereFilter_KeepPolePointsOff, METH_VARARGS,
   "KeepPolePointsOff(self) -> None\nC++: virtual void KeepPolePointsOff()\n\n"},
  {"GetTranslateZ", PyvtkProjectSphereFilter_GetTranslateZ, METH_VARARGS,
   "GetTranslateZ(self) -> bool\nC++: virtual bool GetTranslateZ()\n\nSpecify whether (true) or not to translate the points in the\nprojected transformation such that the input point with the\nsmallest radius is at 0. The default is false.\n"},
  {"SetTranslateZ", PyvtkProjectSphereFilter_SetTranslateZ, METH_VARARGS,
   "SetTranslateZ(self, _arg:bool) -> None\nC++: virtual void SetTranslateZ(bool _arg)\n\n"},
  {"TranslateZOn", PyvtkProjectSphereFilter_TranslateZOn, METH_VARARGS,
   "TranslateZOn(self) -> None\nC++: virtual void TranslateZOn()\n\n"},
  {"TranslateZOff", PyvtkProjectSphereFilter_TranslateZOff, METH_VARARGS,
   "TranslateZOff(self) -> None\nC++: virtual void TranslateZOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProjectSphereFilter_Doc =
  "vtkProjectSphereFilter - A filter to 'unroll' a sphere.\n\n"
  "Superclass: vtkPointSetAlgorithm\n\n"
  "The unroll longitude is -180.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProjectSphereFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkProjectSphereFilter", // tp_name
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
  PyvtkProjectSphereFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProjectSphereFilter_StaticNew()
{
  return vtkProjectSphereFilter::New();
}

PyObject *PyvtkProjectSphereFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProjectSphereFilter_Type, PyvtkProjectSphereFilter_Methods,
    "vtkProjectSphereFilter",
 &PyvtkProjectSphereFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPointSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProjectSphereFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProjectSphereFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProjectSphereFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

