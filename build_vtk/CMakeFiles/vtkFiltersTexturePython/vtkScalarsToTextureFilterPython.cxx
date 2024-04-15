// python wrapper for vtkScalarsToTextureFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkScalarsToTextureFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkScalarsToTextureFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkScalarsToTextureFilter_ClassNew(); }


static PyObject *
PyvtkScalarsToTextureFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkScalarsToTextureFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkScalarsToTextureFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkScalarsToTextureFilter *tempr = vtkScalarsToTextureFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToTextureFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkScalarsToTextureFilter::NewInstance());

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
PyvtkScalarsToTextureFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkScalarsToTextureFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkScalarsToTextureFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetTransferFunction(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetTransferFunction() :
      op->vtkScalarsToTextureFilter::GetTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetUseTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseTransferFunction() :
      op->vtkScalarsToTextureFilter::GetUseTransferFunction());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SetUseTransferFunction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseTransferFunction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseTransferFunction(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetUseTransferFunction(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_UseTransferFunctionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransferFunctionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransferFunctionOn();
    }
    else
    {
      op->vtkScalarsToTextureFilter::UseTransferFunctionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_UseTransferFunctionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseTransferFunctionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseTransferFunctionOff();
    }
    else
    {
      op->vtkScalarsToTextureFilter::UseTransferFunctionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0, temp1);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTextureDimensions(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTextureDimensions(temp0);
    }
    else
    {
      op->vtkScalarsToTextureFilter::SetTextureDimensions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkScalarsToTextureFilter_SetTextureDimensions(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkScalarsToTextureFilter_SetTextureDimensions_s1(self, args);
    case 1:
      return PyvtkScalarsToTextureFilter_SetTextureDimensions_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTextureDimensions");
  return nullptr;
}


static PyObject *
PyvtkScalarsToTextureFilter_GetTextureDimensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTextureDimensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkScalarsToTextureFilter *op = static_cast<vtkScalarsToTextureFilter *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetTextureDimensions() :
      op->vtkScalarsToTextureFilter::GetTextureDimensions());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyMethodDef PyvtkScalarsToTextureFilter_Methods[] = {
  {"IsTypeOf", PyvtkScalarsToTextureFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkScalarsToTextureFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkScalarsToTextureFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkScalarsToTextureFilter\nC++: static vtkScalarsToTextureFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkScalarsToTextureFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkScalarsToTextureFilter\nC++: vtkScalarsToTextureFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkScalarsToTextureFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkScalarsToTextureFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTransferFunction", PyvtkScalarsToTextureFilter_SetTransferFunction, METH_VARARGS,
   "SetTransferFunction(self, stc:vtkScalarsToColors) -> None\nC++: void SetTransferFunction(vtkScalarsToColors *stc)\n\nSet/Get a color transfer function. This transfer function will be\nused to determine the pixel colors of the texture. If not\nspecified, the filter use a default one (blue/white/red) based on\nthe range of the input array.\n"},
  {"GetTransferFunction", PyvtkScalarsToTextureFilter_GetTransferFunction, METH_VARARGS,
   "GetTransferFunction(self) -> vtkScalarsToColors\nC++: vtkScalarsToColors *GetTransferFunction()\n\n"},
  {"GetUseTransferFunction", PyvtkScalarsToTextureFilter_GetUseTransferFunction, METH_VARARGS,
   "GetUseTransferFunction(self) -> bool\nC++: virtual bool GetUseTransferFunction()\n\nSpecify if a new point array containing RGBA values have to be\ncomputed by the specified color transfer function.\n"},
  {"SetUseTransferFunction", PyvtkScalarsToTextureFilter_SetUseTransferFunction, METH_VARARGS,
   "SetUseTransferFunction(self, _arg:bool) -> None\nC++: virtual void SetUseTransferFunction(bool _arg)\n\n"},
  {"UseTransferFunctionOn", PyvtkScalarsToTextureFilter_UseTransferFunctionOn, METH_VARARGS,
   "UseTransferFunctionOn(self) -> None\nC++: virtual void UseTransferFunctionOn()\n\n"},
  {"UseTransferFunctionOff", PyvtkScalarsToTextureFilter_UseTransferFunctionOff, METH_VARARGS,
   "UseTransferFunctionOff(self) -> None\nC++: virtual void UseTransferFunctionOff()\n\n"},
  {"SetTextureDimensions", PyvtkScalarsToTextureFilter_SetTextureDimensions, METH_VARARGS,
   "SetTextureDimensions(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetTextureDimensions(int _arg1, int _arg2)\nSetTextureDimensions(self, _arg:(int, int)) -> None\nC++: void SetTextureDimensions(const int _arg[2])\n\nGet/Set the width and height of the generated texture. Default is\n128x128. The width and height must be greater than 1.\n"},
  {"GetTextureDimensions", PyvtkScalarsToTextureFilter_GetTextureDimensions, METH_VARARGS,
   "GetTextureDimensions(self) -> (int, int)\nC++: virtual int *GetTextureDimensions()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkScalarsToTextureFilter_Doc =
  "vtkScalarsToTextureFilter - generate texture coordinates and a\ntexture image based on a scalar field\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter computes texture coordinates and a 2D texture image based\n"
  "on a polydata, a color transfer function and an array. The output\n"
  "port 0 will contain the input polydata with computed texture\n"
  "coordinates. The output port 1 will contain the texture. The computed\n"
  "texture coordinates is based on vtkTextureMapToPlane which computes\n"
  "them using 3D positions projected on the best fitting plane.\n"
  "@sa vtkTextureMapToPlane vtkResampleToImage\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkScalarsToTextureFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersTexture.vtkScalarsToTextureFilter", // tp_name
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
  PyvtkScalarsToTextureFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkScalarsToTextureFilter_StaticNew()
{
  return vtkScalarsToTextureFilter::New();
}

PyObject *PyvtkScalarsToTextureFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkScalarsToTextureFilter_Type, PyvtkScalarsToTextureFilter_Methods,
    "vtkScalarsToTextureFilter",
 &PyvtkScalarsToTextureFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkScalarsToTextureFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkScalarsToTextureFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkScalarsToTextureFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

