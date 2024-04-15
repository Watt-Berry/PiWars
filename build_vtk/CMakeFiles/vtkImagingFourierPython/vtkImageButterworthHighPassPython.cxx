// python wrapper for vtkImageButterworthHighPass
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageButterworthHighPass.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageButterworthHighPass(PyObject *dict); }
extern "C" { PyObject *PyvtkImageButterworthHighPass_ClassNew(); }


static PyObject *
PyvtkImageButterworthHighPass_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageButterworthHighPass::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageButterworthHighPass::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageButterworthHighPass *tempr = vtkImageButterworthHighPass::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageButterworthHighPass *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageButterworthHighPass::NewInstance());

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
PyvtkImageButterworthHighPass_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageButterworthHighPass::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageButterworthHighPass::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageButterworthHighPass_SetCutOff_Methods[] = {
  {"SetCutOff", PyvtkImageButterworthHighPass_SetCutOff_s2, METH_VARARGS,
   "@P *d"},
  {"SetCutOff", PyvtkImageButterworthHighPass_SetCutOff_s3, METH_VARARGS,
   "@d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImageButterworthHighPass_SetCutOff(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkImageButterworthHighPass_SetCutOff_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageButterworthHighPass_SetCutOff_s1(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCutOff");
  return nullptr;
}


static PyObject *
PyvtkImageButterworthHighPass_SetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetXCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetYCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

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
      op->vtkImageButterworthHighPass::SetZCutOff(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCutOff() :
      op->vtkImageButterworthHighPass::GetCutOff());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetXCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXCutOff() :
      op->vtkImageButterworthHighPass::GetXCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetYCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetYCutOff() :
      op->vtkImageButterworthHighPass::GetYCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetZCutOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetZCutOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetZCutOff() :
      op->vtkImageButterworthHighPass::GetZCutOff());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_SetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOrder(temp0);
    }
    else
    {
      op->vtkImageButterworthHighPass::SetOrder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageButterworthHighPass_GetOrder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOrder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageButterworthHighPass *op = static_cast<vtkImageButterworthHighPass *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOrder() :
      op->vtkImageButterworthHighPass::GetOrder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageButterworthHighPass_Methods[] = {
  {"IsTypeOf", PyvtkImageButterworthHighPass_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageButterworthHighPass_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageButterworthHighPass_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageButterworthHighPass\nC++: static vtkImageButterworthHighPass *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageButterworthHighPass_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageButterworthHighPass\nC++: vtkImageButterworthHighPass *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageButterworthHighPass_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageButterworthHighPass_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCutOff", PyvtkImageButterworthHighPass_SetCutOff, METH_VARARGS,
   "SetCutOff(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetCutOff(double _arg1, double _arg2,\n    double _arg3)\nSetCutOff(self, _arg:(float, float, float)) -> None\nC++: virtual void SetCutOff(const double _arg[3])\nSetCutOff(self, v:float) -> None\nC++: void SetCutOff(double v)\n\nSet/Get the cutoff frequency for each axis. The values are\nspecified in the order X, Y, Z, Time. Units: Cycles per world\nunit (as defined by the data spacing).\n"},
  {"SetXCutOff", PyvtkImageButterworthHighPass_SetXCutOff, METH_VARARGS,
   "SetXCutOff(self, cutOff:float) -> None\nC++: void SetXCutOff(double cutOff)\n\n"},
  {"SetYCutOff", PyvtkImageButterworthHighPass_SetYCutOff, METH_VARARGS,
   "SetYCutOff(self, cutOff:float) -> None\nC++: void SetYCutOff(double cutOff)\n\n"},
  {"SetZCutOff", PyvtkImageButterworthHighPass_SetZCutOff, METH_VARARGS,
   "SetZCutOff(self, cutOff:float) -> None\nC++: void SetZCutOff(double cutOff)\n\n"},
  {"GetCutOff", PyvtkImageButterworthHighPass_GetCutOff, METH_VARARGS,
   "GetCutOff(self) -> (float, float, float)\nC++: virtual double *GetCutOff()\n\n"},
  {"GetXCutOff", PyvtkImageButterworthHighPass_GetXCutOff, METH_VARARGS,
   "GetXCutOff(self) -> float\nC++: double GetXCutOff()\n\n"},
  {"GetYCutOff", PyvtkImageButterworthHighPass_GetYCutOff, METH_VARARGS,
   "GetYCutOff(self) -> float\nC++: double GetYCutOff()\n\n"},
  {"GetZCutOff", PyvtkImageButterworthHighPass_GetZCutOff, METH_VARARGS,
   "GetZCutOff(self) -> float\nC++: double GetZCutOff()\n\n"},
  {"SetOrder", PyvtkImageButterworthHighPass_SetOrder, METH_VARARGS,
   "SetOrder(self, _arg:int) -> None\nC++: virtual void SetOrder(int _arg)\n\nThe order determines sharpness of the cutoff curve.\n"},
  {"GetOrder", PyvtkImageButterworthHighPass_GetOrder, METH_VARARGS,
   "GetOrder(self) -> int\nC++: virtual int GetOrder()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageButterworthHighPass_Doc =
  "vtkImageButterworthHighPass - Frequency domain high pass.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "This filter only works on an image after it has been converted to\n"
  "frequency domain by a vtkImageFFT filter.  A vtkImageRFFT filter can\n"
  "be used to convert the output back into the spatial domain.\n"
  "vtkImageButterworthHighPass the frequency components around 0 are\n"
  "attenuated.  Input and output are in doubles, with two components\n"
  "(complex numbers). out(i, j) = 1 / (1 + pow(CutOff/Freq(i,j),\n"
  "2*Order));\n\n"
  "@sa\n"
  "vtkImageButterworthLowPass\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageButterworthHighPass_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingFourier.vtkImageButterworthHighPass", // tp_name
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
  PyvtkImageButterworthHighPass_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageButterworthHighPass_StaticNew()
{
  return vtkImageButterworthHighPass::New();
}

PyObject *PyvtkImageButterworthHighPass_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageButterworthHighPass_Type, PyvtkImageButterworthHighPass_Methods,
    "vtkImageButterworthHighPass",
 &PyvtkImageButterworthHighPass_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageButterworthHighPass(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageButterworthHighPass_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageButterworthHighPass", o) != 0)
  {
    Py_DECREF(o);
  }

}

