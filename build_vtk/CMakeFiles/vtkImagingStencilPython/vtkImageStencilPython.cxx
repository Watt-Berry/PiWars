// python wrapper for vtkImageStencil
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageStencil.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageStencil(PyObject *dict); }
extern "C" { PyObject *PyvtkImageStencil_ClassNew(); }


static PyObject *
PyvtkImageStencil_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageStencil::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStencil::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageStencil *tempr = vtkImageStencil::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencil *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStencil::NewInstance());

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
PyvtkImageStencil_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageStencil::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageStencil::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetStencilData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageStencilData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageStencilData"))
  {
    if (ap.IsBound())
    {
      op->SetStencilData(temp0);
    }
    else
    {
      op->vtkImageStencil::SetStencilData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_GetStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilData *tempr = (ap.IsBound() ?
      op->GetStencil() :
      op->vtkImageStencil::GetStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetStencilConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStencilConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetStencilConnection(temp0);
    }
    else
    {
      op->vtkImageStencil::SetStencilConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseStencil(temp0);
    }
    else
    {
      op->vtkImageStencil::SetReverseStencil(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_ReverseStencilOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseStencilOn();
    }
    else
    {
      op->vtkImageStencil::ReverseStencilOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_ReverseStencilOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseStencilOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseStencilOff();
    }
    else
    {
      op->vtkImageStencil::ReverseStencilOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_GetReverseStencil(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseStencil");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseStencil() :
      op->vtkImageStencil::GetReverseStencil());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundInputData(temp0);
    }
    else
    {
      op->vtkImageStencil::SetBackgroundInputData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_GetBackgroundInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetBackgroundInput() :
      op->vtkImageStencil::GetBackgroundInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundValue(temp0);
    }
    else
    {
      op->vtkImageStencil::SetBackgroundValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_GetBackgroundValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetBackgroundValue() :
      op->vtkImageStencil::GetBackgroundValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencil_SetBackgroundColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkImageStencil::SetBackgroundColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencil_SetBackgroundColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  const size_t size0 = 4;
  double temp0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundColor(temp0);
    }
    else
    {
      op->vtkImageStencil::SetBackgroundColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencil_SetBackgroundColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkImageStencil_SetBackgroundColor_s1(self, args);
    case 1:
      return PyvtkImageStencil_SetBackgroundColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetBackgroundColor");
  return nullptr;
}


static PyObject *
PyvtkImageStencil_GetBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencil *op = static_cast<vtkImageStencil *>(vp);

  size_t sizer = 4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBackgroundColor() :
      op->vtkImageStencil::GetBackgroundColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencil_Methods[] = {
  {"IsTypeOf", PyvtkImageStencil_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageStencil_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageStencil_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageStencil\nC++: static vtkImageStencil *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageStencil_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageStencil\nC++: vtkImageStencil *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageStencil_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageStencil_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStencilData", PyvtkImageStencil_SetStencilData, METH_VARARGS,
   "SetStencilData(self, stencil:vtkImageStencilData) -> None\nC++: virtual void SetStencilData(vtkImageStencilData *stencil)\n\nSpecify the stencil to use.  The stencil can be created from a\nvtkImplicitFunction or a vtkPolyData. This function does not\nsetup a pipeline connection.\n"},
  {"GetStencil", PyvtkImageStencil_GetStencil, METH_VARARGS,
   "GetStencil(self) -> vtkImageStencilData\nC++: vtkImageStencilData *GetStencil()\n\n"},
  {"SetStencilConnection", PyvtkImageStencil_SetStencilConnection, METH_VARARGS,
   "SetStencilConnection(self, outputPort:vtkAlgorithmOutput) -> None\nC++: void SetStencilConnection(vtkAlgorithmOutput *outputPort)\n\nSpecify the stencil to use. This sets up a pipeline connection.\n"},
  {"SetReverseStencil", PyvtkImageStencil_SetReverseStencil, METH_VARARGS,
   "SetReverseStencil(self, _arg:int) -> None\nC++: virtual void SetReverseStencil(vtkTypeBool _arg)\n\nReverse the stencil.\n"},
  {"ReverseStencilOn", PyvtkImageStencil_ReverseStencilOn, METH_VARARGS,
   "ReverseStencilOn(self) -> None\nC++: virtual void ReverseStencilOn()\n\n"},
  {"ReverseStencilOff", PyvtkImageStencil_ReverseStencilOff, METH_VARARGS,
   "ReverseStencilOff(self) -> None\nC++: virtual void ReverseStencilOff()\n\n"},
  {"GetReverseStencil", PyvtkImageStencil_GetReverseStencil, METH_VARARGS,
   "GetReverseStencil(self) -> int\nC++: virtual vtkTypeBool GetReverseStencil()\n\n"},
  {"SetBackgroundInputData", PyvtkImageStencil_SetBackgroundInputData, METH_VARARGS,
   "SetBackgroundInputData(self, input:vtkImageData) -> None\nC++: virtual void SetBackgroundInputData(vtkImageData *input)\n\nSet the second input.  This image will be used for the 'outside'\nof the stencil.  If not set, the output voxels will be filled\nwith BackgroundValue instead.\n"},
  {"GetBackgroundInput", PyvtkImageStencil_GetBackgroundInput, METH_VARARGS,
   "GetBackgroundInput(self) -> vtkImageData\nC++: vtkImageData *GetBackgroundInput()\n\n"},
  {"SetBackgroundValue", PyvtkImageStencil_SetBackgroundValue, METH_VARARGS,
   "SetBackgroundValue(self, val:float) -> None\nC++: void SetBackgroundValue(double val)\n\nSet the default output value to use when the second input is not\nset.\n"},
  {"GetBackgroundValue", PyvtkImageStencil_GetBackgroundValue, METH_VARARGS,
   "GetBackgroundValue(self) -> float\nC++: double GetBackgroundValue()\n\n"},
  {"SetBackgroundColor", PyvtkImageStencil_SetBackgroundColor, METH_VARARGS,
   "SetBackgroundColor(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float) -> None\nC++: virtual void SetBackgroundColor(double _arg1, double _arg2,\n    double _arg3, double _arg4)\nSetBackgroundColor(self, _arg:(float, float, float, float))\n    -> None\nC++: virtual void SetBackgroundColor(const double _arg[4])\n\nSet the default color to use when the second input is not set.\nThis is like SetBackgroundValue, but for multi-component images.\n"},
  {"GetBackgroundColor", PyvtkImageStencil_GetBackgroundColor, METH_VARARGS,
   "GetBackgroundColor(self) -> (float, float, float, float)\nC++: virtual double *GetBackgroundColor()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageStencil_Doc =
  "vtkImageStencil - combine images via a cookie-cutter operation\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageStencil will combine two images together using a stencil. The\n"
  "stencil should be provided in the form of a vtkImageStencilData,\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageStencil_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingStencil.vtkImageStencil", // tp_name
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
  PyvtkImageStencil_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageStencil_StaticNew()
{
  return vtkImageStencil::New();
}

PyObject *PyvtkImageStencil_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageStencil_Type, PyvtkImageStencil_Methods,
    "vtkImageStencil",
 &PyvtkImageStencil_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageStencil(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageStencil_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencil", o) != 0)
  {
    Py_DECREF(o);
  }

}

