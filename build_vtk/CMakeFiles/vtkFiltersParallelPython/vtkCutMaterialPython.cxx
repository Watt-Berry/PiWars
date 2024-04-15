// python wrapper for vtkCutMaterial
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCutMaterial.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCutMaterial(PyObject *dict); }
extern "C" { PyObject *PyvtkCutMaterial_ClassNew(); }


static PyObject *
PyvtkCutMaterial_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCutMaterial::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCutMaterial::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCutMaterial *tempr = vtkCutMaterial::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCutMaterial *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCutMaterial::NewInstance());

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
PyvtkCutMaterial_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCutMaterial::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCutMaterial::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterialArrayName(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetMaterialArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterialArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterialArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetMaterialArrayName() :
      op->vtkCutMaterial::GetMaterialArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaterial(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetMaterial(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaterial(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaterial");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaterial() :
      op->vtkCutMaterial::GetMaterial());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

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
      op->vtkCutMaterial::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkCutMaterial::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_SetUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

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
      op->SetUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkCutMaterial::SetUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetUpVector(temp0);
    }
    else
    {
      op->vtkCutMaterial::SetUpVector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkCutMaterial_SetUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkCutMaterial_SetUpVector_s1(self, args);
    case 1:
      return PyvtkCutMaterial_SetUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetUpVector");
  return nullptr;
}


static PyObject *
PyvtkCutMaterial_GetUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetUpVector() :
      op->vtkCutMaterial::GetUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetMaximumPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetMaximumPoint() :
      op->vtkCutMaterial::GetMaximumPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetCenterPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenterPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenterPoint() :
      op->vtkCutMaterial::GetCenterPoint());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkCutMaterial_GetNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCutMaterial *op = static_cast<vtkCutMaterial *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetNormal() :
      op->vtkCutMaterial::GetNormal());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkCutMaterial_Methods[] = {
  {"IsTypeOf", PyvtkCutMaterial_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCutMaterial_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCutMaterial_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCutMaterial\nC++: static vtkCutMaterial *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCutMaterial_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCutMaterial\nC++: vtkCutMaterial *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCutMaterial_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCutMaterial_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetMaterialArrayName", PyvtkCutMaterial_SetMaterialArrayName, METH_VARARGS,
   "SetMaterialArrayName(self, _arg:str) -> None\nC++: virtual void SetMaterialArrayName(const char *_arg)\n\nCell array that contains the material values.\n"},
  {"GetMaterialArrayName", PyvtkCutMaterial_GetMaterialArrayName, METH_VARARGS,
   "GetMaterialArrayName(self) -> str\nC++: virtual char *GetMaterialArrayName()\n\n"},
  {"SetMaterial", PyvtkCutMaterial_SetMaterial, METH_VARARGS,
   "SetMaterial(self, _arg:int) -> None\nC++: virtual void SetMaterial(int _arg)\n\nMaterial to probe.\n"},
  {"GetMaterial", PyvtkCutMaterial_GetMaterial, METH_VARARGS,
   "GetMaterial(self) -> int\nC++: virtual int GetMaterial()\n\n"},
  {"SetArrayName", PyvtkCutMaterial_SetArrayName, METH_VARARGS,
   "SetArrayName(self, _arg:str) -> None\nC++: virtual void SetArrayName(const char *_arg)\n\nFor now, we just use the cell values. The array name to cut.\n"},
  {"GetArrayName", PyvtkCutMaterial_GetArrayName, METH_VARARGS,
   "GetArrayName(self) -> str\nC++: virtual char *GetArrayName()\n\n"},
  {"SetUpVector", PyvtkCutMaterial_SetUpVector, METH_VARARGS,
   "SetUpVector(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetUpVector(double _arg1, double _arg2,\n    double _arg3)\nSetUpVector(self, _arg:(float, float, float)) -> None\nC++: virtual void SetUpVector(const double _arg[3])\n\nThe last piece of information that specifies the plane.\n"},
  {"GetUpVector", PyvtkCutMaterial_GetUpVector, METH_VARARGS,
   "GetUpVector(self) -> (float, float, float)\nC++: virtual double *GetUpVector()\n\n"},
  {"GetMaximumPoint", PyvtkCutMaterial_GetMaximumPoint, METH_VARARGS,
   "GetMaximumPoint(self) -> (float, float, float)\nC++: virtual double *GetMaximumPoint()\n\nAccesses to the values computed during the execute method.  They\ncould be used to get a good camera view for the resulting plane.\n"},
  {"GetCenterPoint", PyvtkCutMaterial_GetCenterPoint, METH_VARARGS,
   "GetCenterPoint(self) -> (float, float, float)\nC++: virtual double *GetCenterPoint()\n\n"},
  {"GetNormal", PyvtkCutMaterial_GetNormal, METH_VARARGS,
   "GetNormal(self) -> (float, float, float)\nC++: virtual double *GetNormal()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCutMaterial_Doc =
  "vtkCutMaterial - Automatically computes the cut plane for a material\narray pair.\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCutMaterial computes a cut plane based on an up vector, center of\n"
  "the bounding box and the location of the maximum variable value.\n"
  " These computed values are available so that they can be used to set\n"
  "the camera for the best view of the plane.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCutMaterial_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersParallel.vtkCutMaterial", // tp_name
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
  PyvtkCutMaterial_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCutMaterial_StaticNew()
{
  return vtkCutMaterial::New();
}

PyObject *PyvtkCutMaterial_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCutMaterial_Type, PyvtkCutMaterial_Methods,
    "vtkCutMaterial",
 &PyvtkCutMaterial_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCutMaterial(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCutMaterial_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCutMaterial", o) != 0)
  {
    Py_DECREF(o);
  }

}

