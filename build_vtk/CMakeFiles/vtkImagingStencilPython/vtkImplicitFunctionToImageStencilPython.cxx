// python wrapper for vtkImplicitFunctionToImageStencil
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImplicitFunctionToImageStencil.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImplicitFunctionToImageStencil(PyObject *dict); }
extern "C" { PyObject *PyvtkImplicitFunctionToImageStencil_ClassNew(); }


static PyObject *
PyvtkImplicitFunctionToImageStencil_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImplicitFunctionToImageStencil::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImplicitFunctionToImageStencil::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImplicitFunctionToImageStencil *tempr = vtkImplicitFunctionToImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunctionToImageStencil *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImplicitFunctionToImageStencil::NewInstance());

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
PyvtkImplicitFunctionToImageStencil_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImplicitFunctionToImageStencil::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImplicitFunctionToImageStencil::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  vtkImplicitFunction *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImplicitFunction"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkImplicitFunctionToImageStencil::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImplicitFunction *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkImplicitFunctionToImageStencil::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_SetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetThreshold(temp0);
    }
    else
    {
      op->vtkImplicitFunctionToImageStencil::SetThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetThreshold() :
      op->vtkImplicitFunctionToImageStencil::GetThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImplicitFunctionToImageStencil_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImplicitFunctionToImageStencil *op = static_cast<vtkImplicitFunctionToImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImplicitFunctionToImageStencil::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImplicitFunctionToImageStencil_Methods[] = {
  {"IsTypeOf", PyvtkImplicitFunctionToImageStencil_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImplicitFunctionToImageStencil_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImplicitFunctionToImageStencil_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImplicitFunctionToImageStencil\nC++: static vtkImplicitFunctionToImageStencil *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImplicitFunctionToImageStencil_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImplicitFunctionToImageStencil\nC++: vtkImplicitFunctionToImageStencil *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImplicitFunctionToImageStencil_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImplicitFunctionToImageStencil_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInput", PyvtkImplicitFunctionToImageStencil_SetInput, METH_VARARGS,
   "SetInput(self, __a:vtkImplicitFunction) -> None\nC++: virtual void SetInput(vtkImplicitFunction *)\n\nSpecify the implicit function to convert into a stencil.\n"},
  {"GetInput", PyvtkImplicitFunctionToImageStencil_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkImplicitFunction\nC++: virtual vtkImplicitFunction *GetInput()\n\n"},
  {"SetThreshold", PyvtkImplicitFunctionToImageStencil_SetThreshold, METH_VARARGS,
   "SetThreshold(self, _arg:float) -> None\nC++: virtual void SetThreshold(double _arg)\n\nSet the threshold value for the implicit function.\n"},
  {"GetThreshold", PyvtkImplicitFunctionToImageStencil_GetThreshold, METH_VARARGS,
   "GetThreshold(self) -> float\nC++: virtual double GetThreshold()\n\n"},
  {"GetMTime", PyvtkImplicitFunctionToImageStencil_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nOverride GetMTime() to account for the implicit function.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImplicitFunctionToImageStencil_Doc =
  "vtkImplicitFunctionToImageStencil - clip an image with a function\n\n"
  "Superclass: vtkImageStencilSource\n\n"
  "vtkImplicitFunctionToImageStencil will convert a vtkImplicitFunction\n"
  "into a stencil that can be used with vtkImageStencil or with other\n"
  "classes that apply a stencil to an image.\n"
  "@sa\n"
  "vtkImplicitFunction vtkImageStencil vtkPolyDataToImageStencil\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImplicitFunctionToImageStencil_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStencil.vtkImplicitFunctionToImageStencil", // tp_name
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
  PyvtkImplicitFunctionToImageStencil_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImplicitFunctionToImageStencil_StaticNew()
{
  return vtkImplicitFunctionToImageStencil::New();
}

PyObject *PyvtkImplicitFunctionToImageStencil_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImplicitFunctionToImageStencil_Type, PyvtkImplicitFunctionToImageStencil_Methods,
    "vtkImplicitFunctionToImageStencil",
 &PyvtkImplicitFunctionToImageStencil_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageStencilSource");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImplicitFunctionToImageStencil(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImplicitFunctionToImageStencil_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImplicitFunctionToImageStencil", o) != 0)
  {
    Py_DECREF(o);
  }

}

