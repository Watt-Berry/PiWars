// python wrapper for vtkExplicitStructuredGridCrop
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkExplicitStructuredGridCrop.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkExplicitStructuredGridCrop(PyObject *dict); }
extern "C" { PyObject *PyvtkExplicitStructuredGridCrop_ClassNew(); }


static PyObject *
PyvtkExplicitStructuredGridCrop_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkExplicitStructuredGridCrop::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkExplicitStructuredGridCrop::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkExplicitStructuredGridCrop *tempr = vtkExplicitStructuredGridCrop::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkExplicitStructuredGridCrop *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkExplicitStructuredGridCrop::NewInstance());

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
PyvtkExplicitStructuredGridCrop_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkExplicitStructuredGridCrop::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkExplicitStructuredGridCrop::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  vtkInformation *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetArray(temp0, size0) &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkInformation")))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0, temp1);
    }
    else
    {
      op->vtkExplicitStructuredGridCrop::SetOutputWholeExtent(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  int temp4;
  int temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkExplicitStructuredGridCrop::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent_s1(self, args);
    case 6:
      return PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetOutputWholeExtent(temp0);
    }
    else
    {
      op->vtkExplicitStructuredGridCrop::GetOutputWholeExtent(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkExplicitStructuredGridCrop::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent_s1(self, args);
    case 0:
      return PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetOutputWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkExplicitStructuredGridCrop_ResetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkExplicitStructuredGridCrop *op = static_cast<vtkExplicitStructuredGridCrop *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetOutputWholeExtent();
    }
    else
    {
      op->vtkExplicitStructuredGridCrop::ResetOutputWholeExtent();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkExplicitStructuredGridCrop_Methods[] = {
  {"IsTypeOf", PyvtkExplicitStructuredGridCrop_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkExplicitStructuredGridCrop_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkExplicitStructuredGridCrop_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkExplicitStructuredGridCrop\nC++: static vtkExplicitStructuredGridCrop *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkExplicitStructuredGridCrop_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkExplicitStructuredGridCrop\nC++: vtkExplicitStructuredGridCrop *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkExplicitStructuredGridCrop_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkExplicitStructuredGridCrop_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutputWholeExtent", PyvtkExplicitStructuredGridCrop_SetOutputWholeExtent, METH_VARARGS,
   "SetOutputWholeExtent(self, extent:[int, int, int, int, int, int],\n    outInfo:vtkInformation=...) -> None\nC++: void SetOutputWholeExtent(int extent[6],\n    vtkInformation *outInfo=nullptr)\nSetOutputWholeExtent(self, minX:int, maxX:int, minY:int, maxY:int,\n     minZ:int, maxZ:int) -> None\nC++: void SetOutputWholeExtent(int minX, int maxX, int minY,\n    int maxY, int minZ, int maxZ)\n\nThe whole extent of the output has to be set explicitly.\n"},
  {"GetOutputWholeExtent", PyvtkExplicitStructuredGridCrop_GetOutputWholeExtent, METH_VARARGS,
   "GetOutputWholeExtent(self, extent:[int, int, int, int, int, int])\n    -> None\nC++: void GetOutputWholeExtent(int extent[6])\nGetOutputWholeExtent(self) -> Pointer\nC++: int *GetOutputWholeExtent()\n\n"},
  {"ResetOutputWholeExtent", PyvtkExplicitStructuredGridCrop_ResetOutputWholeExtent, METH_VARARGS,
   "ResetOutputWholeExtent(self) -> None\nC++: void ResetOutputWholeExtent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkExplicitStructuredGridCrop_Doc =
  "vtkExplicitStructuredGridCrop - Filter which extracts a piece of\nexplicit structured grid changing its extents.\n\n"
  "Superclass: vtkExplicitStructuredGridAlgorithm\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkExplicitStructuredGridCrop_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkExplicitStructuredGridCrop", // tp_name
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
  PyvtkExplicitStructuredGridCrop_Doc, // tp_doc
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

static vtkObjectBase *PyvtkExplicitStructuredGridCrop_StaticNew()
{
  return vtkExplicitStructuredGridCrop::New();
}

PyObject *PyvtkExplicitStructuredGridCrop_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkExplicitStructuredGridCrop_Type, PyvtkExplicitStructuredGridCrop_Methods,
    "vtkExplicitStructuredGridCrop",
 &PyvtkExplicitStructuredGridCrop_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkExplicitStructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkExplicitStructuredGridCrop(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkExplicitStructuredGridCrop_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkExplicitStructuredGridCrop", o) != 0)
  {
    Py_DECREF(o);
  }

}

