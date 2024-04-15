// python wrapper for vtkImageIdealHighPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageIdealHighPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageIdealHighPass(PyObject *dict); }
extern "C" { PyObject *PyvtkImageIdealHighPass_ClassNew(); }


static PyObject *
PyvtkImageIdealHighPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageIdealHighPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIdealHighPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageIdealHighPass *tempr = vtkImageIdealHighPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageIdealHighPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIdealHighPass::NewInstance());

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
PyvtkImageIdealHighPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageIdealHighPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageIdealHighPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

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
      op->SetCutOff(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageIdealHighPass::SetCutOff(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetCutOff(temp0);
    }
    else
    {
      op->vtkImageIdealHighPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageIdealHighPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCutOff(temp0);
    }
    else
    {
      op->vtkImageIdealHighPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIdealHighPass_SetCutOff_Methods[] = {
  {"SetCutOff", PyvtkImageIdealHighPass_SetCutOff_s2, METH_VARARGS,
   "@P *d"},
  {"SetCutOff", PyvtkImageIdealHighPass_SetCutOff_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageIdealHighPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageIdealHighPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageIdealHighPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return nullptr;
}


static PyObject *
PyvtkImageIdealHighPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXCutOff(temp0);
    }
    else
    {
      op->vtkImageIdealHighPass::SetXCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYCutOff(temp0);
    }
    else
    {
      op->vtkImageIdealHighPass::SetYCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetZCutOff(temp0);
    }
    else
    {
      op->vtkImageIdealHighPass::SetZCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageIdealHighPass::GetCutOff());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageIdealHighPass::GetXCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageIdealHighPass::GetYCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIdealHighPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIdealHighPass *op = static_cast<vtkImageIdealHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageIdealHighPass::GetZCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIdealHighPass_Methods[] = {
  {"IsTypeOf", PyvtkImageIdealHighPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageIdealHighPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageIdealHighPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageIdealHighPass\nC++: static vtkImageIdealHighPass *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageIdealHighPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageIdealHighPass\nC++: vtkImageIdealHighPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageIdealHighPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageIdealHighPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCutOff", PyvtkImageIdealHighPass_SetCutOff, METH_VARARGS,
   "SetCutOff(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCutOff(double _arg1, double _arg2,\n    double _arg3)\nSetCutOff(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCutOff(const double _arg[3])\nSetCutOff(self, v:float) -> None\nC++: void SetCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetXCutOff", PyvtkImageIdealHighPass_SetXCutOff, METH_VARARGS,
   "SetXCutOff(self, cutOff:float) -> None\nC++: void SetXCutOff(double cutOff)\n\n"},
  {"SetYCutOff", PyvtkImageIdealHighPass_SetYCutOff, METH_VARARGS,
   "SetYCutOff(self, cutOff:float) -> None\nC++: void SetYCutOff(double cutOff)\n\n"},
  {"SetZCutOff", PyvtkImageIdealHighPass_SetZCutOff, METH_VARARGS,
   "SetZCutOff(self, cutOff:float) -> None\nC++: void SetZCutOff(double cutOff)\n\n"},
  {"GetCutOff", PyvtkImageIdealHighPass_GetCutOff, METH_VARARGS,
   "GetCutOff(self) -> (float, float, float)\nC++: virtual double *GetCutOff()\n\n"},
  {"GetXCutOff", PyvtkImageIdealHighPass_GetXCutOff, METH_VARARGS,
   "GetXCutOff(self) -> float\nC++: double GetXCutOff()\n\n"},
  {"GetYCutOff", PyvtkImageIdealHighPass_GetYCutOff, METH_VARARGS,
   "GetYCutOff(self) -> float\nC++: double GetYCutOff()\n\n"},
  {"GetZCutOff", PyvtkImageIdealHighPass_GetZCutOff, METH_VARARGS,
   "GetZCutOff(self) -> float\nC++: double GetZCutOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageIdealHighPass_Doc =
  "vtkImageIdealHighPass - Simple frequency domain band pass.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "This filter only works on an image after it has been converted to\n"
  "frequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\n"
  "be used to convert the output back into the spatial domain.\n"
  "vtkImageIdealHighPass just sets a portion of the image to zero.  The\n"
  "sharp cutoff in the frequence domain produces ringing in the spatial\n"
  "domain. Input and Output must be doubles.  Dimensionality is set when\n"
  "the axes are set.  Defaults to 2D on X and Y axes.\n\n"
  "@sa\n"
  "vtkImageButterworthHighPass vtkImageIdealLowPass vtkImageFFT\n"
  "vtkImageRFFT\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageIdealHighPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingFourier.vtkImageIdealHighPass", // tp_name
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
  PyvtkImageIdealHighPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageIdealHighPass_StaticNew()
{
  return vtkImageIdealHighPass::New();
}

PyObject *PyvtkImageIdealHighPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageIdealHighPass_Type, PyvtkImageIdealHighPass_Methods,
    "vtkImageIdealHighPass",
 &PyvtkImageIdealHighPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageIdealHighPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageIdealHighPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageIdealHighPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

