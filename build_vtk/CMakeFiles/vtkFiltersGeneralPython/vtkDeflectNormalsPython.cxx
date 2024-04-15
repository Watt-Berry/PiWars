// python wrapper for vtkDeflectNormals
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDeflectNormals.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDeflectNormals(PyObject *dict); }
extern "C" { PyObject *PyvtkDeflectNormals_ClassNew(); }


static PyObject *
PyvtkDeflectNormals_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDeflectNormals::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDeflectNormals::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDeflectNormals *tempr = vtkDeflectNormals::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDeflectNormals *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDeflectNormals::NewInstance());

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
PyvtkDeflectNormals_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDeflectNormals::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDeflectNormals::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_SetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaleFactor(temp0);
    }
    else
    {
      op->vtkDeflectNormals::SetScaleFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_GetScaleFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaleFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScaleFactor() :
      op->vtkDeflectNormals::GetScaleFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_SetUserNormal_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

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
      op->SetUserNormal(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDeflectNormals::SetUserNormal(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDeflectNormals_SetUserNormal_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUserNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUserNormal(temp0);
    }
    else
    {
      op->vtkDeflectNormals::SetUserNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDeflectNormals_SetUserNormal(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDeflectNormals_SetUserNormal_s1(self, args);
    case 1:
      return PyvtkDeflectNormals_SetUserNormal_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUserNormal");
  return nullptr;
}


static PyObject *
PyvtkDeflectNormals_GetUserNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUserNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUserNormal() :
      op->vtkDeflectNormals::GetUserNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_SetUseUserNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseUserNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseUserNormal(temp0);
    }
    else
    {
      op->vtkDeflectNormals::SetUseUserNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_GetUseUserNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseUserNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseUserNormal() :
      op->vtkDeflectNormals::GetUseUserNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_UseUserNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUserNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUserNormalOn();
    }
    else
    {
      op->vtkDeflectNormals::UseUserNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDeflectNormals_UseUserNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseUserNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDeflectNormals *op = static_cast<vtkDeflectNormals *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseUserNormalOff();
    }
    else
    {
      op->vtkDeflectNormals::UseUserNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDeflectNormals_Methods[] = {
  {"IsTypeOf", PyvtkDeflectNormals_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDeflectNormals_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDeflectNormals_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDeflectNormals\nC++: static vtkDeflectNormals *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDeflectNormals_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDeflectNormals\nC++: vtkDeflectNormals *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDeflectNormals_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDeflectNormals_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetScaleFactor", PyvtkDeflectNormals_SetScaleFactor, METH_VARARGS,
   "SetScaleFactor(self, _arg:float) -> None\nC++: virtual void SetScaleFactor(double _arg)\n\nSpecify value to scale deflection. Default is 1.\n"},
  {"GetScaleFactor", PyvtkDeflectNormals_GetScaleFactor, METH_VARARGS,
   "GetScaleFactor(self) -> float\nC++: virtual double GetScaleFactor()\n\n"},
  {"SetUserNormal", PyvtkDeflectNormals_SetUserNormal, METH_VARARGS,
   "SetUserNormal(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetUserNormal(double _arg1, double _arg2,\n    double _arg3)\nSetUserNormal(self, _arg:(float, float, float)) -> None\nC++: virtual void SetUserNormal(const double _arg[3])\n\nSpecify user defined normal. Default is (0, 0, 1).\n"},
  {"GetUserNormal", PyvtkDeflectNormals_GetUserNormal, METH_VARARGS,
   "GetUserNormal(self) -> (float, float, float)\nC++: virtual double *GetUserNormal()\n\n"},
  {"SetUseUserNormal", PyvtkDeflectNormals_SetUseUserNormal, METH_VARARGS,
   "SetUseUserNormal(self, _arg:bool) -> None\nC++: virtual void SetUseUserNormal(bool _arg)\n\nSpecify value of the user defined normal. Default is false.\n"},
  {"GetUseUserNormal", PyvtkDeflectNormals_GetUseUserNormal, METH_VARARGS,
   "GetUseUserNormal(self) -> bool\nC++: virtual bool GetUseUserNormal()\n\n"},
  {"UseUserNormalOn", PyvtkDeflectNormals_UseUserNormalOn, METH_VARARGS,
   "UseUserNormalOn(self) -> None\nC++: virtual void UseUserNormalOn()\n\n"},
  {"UseUserNormalOff", PyvtkDeflectNormals_UseUserNormalOff, METH_VARARGS,
   "UseUserNormalOff(self) -> None\nC++: virtual void UseUserNormalOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDeflectNormals_Doc =
  "vtkDeflectNormals - deflect normals using a 3 component vector field\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkDeflectNormals is a filter that modifies the normals using a\n"
  "vector field. It is useful to give a 3D perception of a flat surface\n"
  "using shading of the mapper.\n\n"
  "The filter passes both its point data and cell data to its output.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDeflectNormals_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDeflectNormals", // tp_name
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
  PyvtkDeflectNormals_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDeflectNormals_StaticNew()
{
  return vtkDeflectNormals::New();
}

PyObject *PyvtkDeflectNormals_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDeflectNormals_Type, PyvtkDeflectNormals_Methods,
    "vtkDeflectNormals",
 &PyvtkDeflectNormals_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDeflectNormals(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDeflectNormals_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDeflectNormals", o) != 0)
  {
    Py_DECREF(o);
  }

}

