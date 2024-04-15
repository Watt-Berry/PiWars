// python wrapper for vtkImageDilateErode3D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageDilateErode3D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageDilateErode3D(PyObject *dict); }
extern "C" { PyObject *PyvtkImageDilateErode3D_ClassNew(); }


static PyObject *
PyvtkImageDilateErode3D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageDilateErode3D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageDilateErode3D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageDilateErode3D *tempr = vtkImageDilateErode3D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageDilateErode3D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageDilateErode3D::NewInstance());

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
PyvtkImageDilateErode3D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageDilateErode3D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageDilateErode3D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetKernelSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKernelSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetKernelSize(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageDilateErode3D::SetKernelSize(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDilateValue(temp0);
    }
    else
    {
      op->vtkImageDilateErode3D::SetDilateValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetDilateValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDilateValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDilateValue() :
      op->vtkImageDilateErode3D::GetDilateValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_SetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetErodeValue(temp0);
    }
    else
    {
      op->vtkImageDilateErode3D::SetErodeValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageDilateErode3D_GetErodeValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetErodeValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageDilateErode3D *op = static_cast<vtkImageDilateErode3D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetErodeValue() :
      op->vtkImageDilateErode3D::GetErodeValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageDilateErode3D_Methods[] = {
  {"IsTypeOf", PyvtkImageDilateErode3D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageDilateErode3D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageDilateErode3D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageDilateErode3D\nC++: static vtkImageDilateErode3D *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageDilateErode3D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageDilateErode3D\nC++: vtkImageDilateErode3D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageDilateErode3D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageDilateErode3D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetKernelSize", PyvtkImageDilateErode3D_SetKernelSize, METH_VARARGS,
   "SetKernelSize(self, size0:int, size1:int, size2:int) -> None\nC++: void SetKernelSize(int size0, int size1, int size2)\n\nThis method sets the size of the neighborhood.  It also sets the\ndefault middle of the neighborhood and computes the elliptical\nfoot print.\n"},
  {"SetDilateValue", PyvtkImageDilateErode3D_SetDilateValue, METH_VARARGS,
   "SetDilateValue(self, _arg:float) -> None\nC++: virtual void SetDilateValue(double _arg)\n\nSet/Get the Dilate and Erode values to be used by this filter.\n"},
  {"GetDilateValue", PyvtkImageDilateErode3D_GetDilateValue, METH_VARARGS,
   "GetDilateValue(self) -> float\nC++: virtual double GetDilateValue()\n\n"},
  {"SetErodeValue", PyvtkImageDilateErode3D_SetErodeValue, METH_VARARGS,
   "SetErodeValue(self, _arg:float) -> None\nC++: virtual void SetErodeValue(double _arg)\n\n"},
  {"GetErodeValue", PyvtkImageDilateErode3D_GetErodeValue, METH_VARARGS,
   "GetErodeValue(self) -> float\nC++: virtual double GetErodeValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageDilateErode3D_Doc =
  "vtkImageDilateErode3D - Dilates one value and erodes another.\n\n"
  "Superclass: vtkImageSpatialAlgorithm\n\n"
  "vtkImageDilateErode3D will dilate one value and erode another. It\n"
  "uses an elliptical foot print, and only erodes/dilates on the\n"
  "boundary of the two values.  The filter is restricted to the X, Y,\n"
  "and Z axes for now.  It can degenerate to a 2 or 1 dimensional filter\n"
  "by setting the kernel size to 1 for a specific axis.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageDilateErode3D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageDilateErode3D", // tp_name
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
  PyvtkImageDilateErode3D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageDilateErode3D_StaticNew()
{
  return vtkImageDilateErode3D::New();
}

PyObject *PyvtkImageDilateErode3D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageDilateErode3D_Type, PyvtkImageDilateErode3D_Methods,
    "vtkImageDilateErode3D",
 &PyvtkImageDilateErode3D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageSpatialAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageDilateErode3D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageDilateErode3D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageDilateErode3D", o) != 0)
  {
    Py_DECREF(o);
  }

}

