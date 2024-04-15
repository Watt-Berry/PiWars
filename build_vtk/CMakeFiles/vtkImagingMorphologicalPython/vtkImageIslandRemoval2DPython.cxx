// python wrapper for vtkImageIslandRemoval2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageIslandRemoval2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageIslandRemoval2D(PyObject *dict); }
static PyMethodDef PyvtkImage2DIslandPixel_t_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImage2DIslandPixel_t");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkImage2DIslandPixel_t *op = new vtkImage2DIslandPixel_t();

    result = PyVTKSpecialObject_New("vtkImage2DIslandPixel_t", op);
  }

  return result;
}

static PyObject *
PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkImage2DIslandPixel_t");

  vtkImage2DIslandPixel_t *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkImage2DIslandPixel_t"))
  {
    vtkImage2DIslandPixel_t *op = new vtkImage2DIslandPixel_t(*temp0);

    result = PyVTKSpecialObject_New("vtkImage2DIslandPixel_t", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_Methods[] = {
  {"vtkImage2DIslandPixel_t", PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_s2, METH_VARARGS,
   "@W vtkImage2DIslandPixel_t"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_s1(self, args);
    case 1:
      return PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkImage2DIslandPixel_t");
  return nullptr;
}


static const char *PyvtkImage2DIslandPixel_t_Doc =

  "vtkImage2DIslandPixel_t() -> vtkImage2DIslandPixel_t\nC++: vtkImage2DIslandPixel_t()\nvtkImage2DIslandPixel_t(__a:vtkImage2DIslandPixel_t)\n    -> vtkImage2DIslandPixel_t\nC++: vtkImage2DIslandPixel_t(const &vtkImage2DIslandPixel_t)\n""\n"
  "vtkImage2DIslandPixel_t - no description provided.\n\n"
;

static PyObject *
PyvtkImage2DIslandPixel_t_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t(nullptr, args);
}

static void PyvtkImage2DIslandPixel_t_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkImage2DIslandPixel_t *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkImage2DIslandPixel_t_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImage2DIslandPixel_t_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImage2DIslandPixel_t", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkImage2DIslandPixel_t_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkImage2DIslandPixel_t_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkImage2DIslandPixel_t_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkImage2DIslandPixel_t_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkImage2DIslandPixel_t_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkImage2DIslandPixel_t(*static_cast<const vtkImage2DIslandPixel_t*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkImage2DIslandPixel_t_TypeNew
extern "C" { PyObject *PyvtkImage2DIslandPixel_t_TypeNew(); }
#define DECLARED_PyvtkImage2DIslandPixel_t_TypeNew
#endif

PyObject *PyvtkImage2DIslandPixel_t_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkImage2DIslandPixel_t_Type,
    PyvtkImage2DIslandPixel_t_Methods,
    PyvtkImage2DIslandPixel_t_vtkImage2DIslandPixel_t_Methods,
    &PyvtkImage2DIslandPixel_t_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkImageIslandRemoval2D_ClassNew(); }


static PyObject *
PyvtkImageIslandRemoval2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageIslandRemoval2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageIslandRemoval2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageIslandRemoval2D *tempr = vtkImageIslandRemoval2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageIslandRemoval2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageIslandRemoval2D::NewInstance());

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
PyvtkImageIslandRemoval2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageIslandRemoval2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageIslandRemoval2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAreaThreshold(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetAreaThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetAreaThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAreaThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAreaThreshold() :
      op->vtkImageIslandRemoval2D::GetAreaThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSquareNeighborhood(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetSquareNeighborhood(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetSquareNeighborhood(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSquareNeighborhood");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSquareNeighborhood() :
      op->vtkImageIslandRemoval2D::GetSquareNeighborhood());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SquareNeighborhoodOn();
    }
    else
    {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SquareNeighborhoodOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SquareNeighborhoodOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SquareNeighborhoodOff();
    }
    else
    {
      op->vtkImageIslandRemoval2D::SquareNeighborhoodOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIslandValue(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetIslandValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetIslandValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIslandValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetIslandValue() :
      op->vtkImageIslandRemoval2D::GetIslandValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_SetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReplaceValue(temp0);
    }
    else
    {
      op->vtkImageIslandRemoval2D::SetReplaceValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageIslandRemoval2D_GetReplaceValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReplaceValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageIslandRemoval2D *op = static_cast<vtkImageIslandRemoval2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReplaceValue() :
      op->vtkImageIslandRemoval2D::GetReplaceValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageIslandRemoval2D_Methods[] = {
  {"IsTypeOf", PyvtkImageIslandRemoval2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageIslandRemoval2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageIslandRemoval2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageIslandRemoval2D\nC++: static vtkImageIslandRemoval2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageIslandRemoval2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageIslandRemoval2D\nC++: vtkImageIslandRemoval2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageIslandRemoval2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageIslandRemoval2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetAreaThreshold", PyvtkImageIslandRemoval2D_SetAreaThreshold, METH_VARARGS,
   "SetAreaThreshold(self, _arg:int) -> None\nC++: virtual void SetAreaThreshold(int _arg)\n\nSet/Get the cutoff area for removal\n"},
  {"GetAreaThreshold", PyvtkImageIslandRemoval2D_GetAreaThreshold, METH_VARARGS,
   "GetAreaThreshold(self) -> int\nC++: virtual int GetAreaThreshold()\n\n"},
  {"SetSquareNeighborhood", PyvtkImageIslandRemoval2D_SetSquareNeighborhood, METH_VARARGS,
   "SetSquareNeighborhood(self, _arg:int) -> None\nC++: virtual void SetSquareNeighborhood(vtkTypeBool _arg)\n\nSet/Get whether to use 4 or 8 neighbors\n"},
  {"GetSquareNeighborhood", PyvtkImageIslandRemoval2D_GetSquareNeighborhood, METH_VARARGS,
   "GetSquareNeighborhood(self) -> int\nC++: virtual vtkTypeBool GetSquareNeighborhood()\n\n"},
  {"SquareNeighborhoodOn", PyvtkImageIslandRemoval2D_SquareNeighborhoodOn, METH_VARARGS,
   "SquareNeighborhoodOn(self) -> None\nC++: virtual void SquareNeighborhoodOn()\n\n"},
  {"SquareNeighborhoodOff", PyvtkImageIslandRemoval2D_SquareNeighborhoodOff, METH_VARARGS,
   "SquareNeighborhoodOff(self) -> None\nC++: virtual void SquareNeighborhoodOff()\n\n"},
  {"SetIslandValue", PyvtkImageIslandRemoval2D_SetIslandValue, METH_VARARGS,
   "SetIslandValue(self, _arg:float) -> None\nC++: virtual void SetIslandValue(double _arg)\n\nSet/Get the value to remove.\n"},
  {"GetIslandValue", PyvtkImageIslandRemoval2D_GetIslandValue, METH_VARARGS,
   "GetIslandValue(self) -> float\nC++: virtual double GetIslandValue()\n\n"},
  {"SetReplaceValue", PyvtkImageIslandRemoval2D_SetReplaceValue, METH_VARARGS,
   "SetReplaceValue(self, _arg:float) -> None\nC++: virtual void SetReplaceValue(double _arg)\n\nSet/Get the value to put in the place of removed pixels.\n"},
  {"GetReplaceValue", PyvtkImageIslandRemoval2D_GetReplaceValue, METH_VARARGS,
   "GetReplaceValue(self) -> float\nC++: virtual double GetReplaceValue()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageIslandRemoval2D_Doc =
  "vtkImageIslandRemoval2D - Removes small clusters in masks.\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "vtkImageIslandRemoval2D computes the area of separate islands in a\n"
  "mask image.  It removes any island that has less than AreaThreshold\n"
  "pixels.  Output has the same ScalarType as input.  It generates the\n"
  "whole 2D output image for any output request.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageIslandRemoval2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMorphological.vtkImageIslandRemoval2D", // tp_name
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
  PyvtkImageIslandRemoval2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageIslandRemoval2D_StaticNew()
{
  return vtkImageIslandRemoval2D::New();
}

PyObject *PyvtkImageIslandRemoval2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageIslandRemoval2D_Type, PyvtkImageIslandRemoval2D_Methods,
    "vtkImageIslandRemoval2D",
 &PyvtkImageIslandRemoval2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageIslandRemoval2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImage2DIslandPixel_t_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkImage2DIslandPixel_t", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkImageIslandRemoval2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageIslandRemoval2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

