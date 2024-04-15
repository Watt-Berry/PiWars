// python wrapper for vtkImageStencilSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageStencilSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageStencilSource(PyObject *dict); }
extern "C" { PyObject *PyvtkImageStencilSource_ClassNew(); }

#ifndef DECLARED_PyvtkImageStencilAlgorithm_ClassNew
extern "C" { PyObject *PyvtkImageStencilAlgorithm_ClassNew(); }
#define DECLARED_PyvtkImageStencilAlgorithm_ClassNew
#endif

static PyObject *
PyvtkImageStencilSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageStencilSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageStencilSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageStencilSource *tempr = vtkImageStencilSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageStencilSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageStencilSource::NewInstance());

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
PyvtkImageStencilSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageStencilSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageStencilSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  vtkImageData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkImageData"))
  {
    if (ap.IsBound())
    {
      op->SetInformationInput(temp0);
    }
    else
    {
      op->vtkImageStencilSource::SetInformationInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_GetInformationInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInformationInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageData *tempr = (ap.IsBound() ?
      op->GetInformationInput() :
      op->vtkImageStencilSource::GetInformationInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputOrigin_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

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
      op->SetOutputOrigin(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilSource::SetOutputOrigin(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputOrigin_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputOrigin(temp0);
    }
    else
    {
      op->vtkImageStencilSource::SetOutputOrigin(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputOrigin(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilSource_SetOutputOrigin_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputOrigin_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputOrigin");
  return nullptr;
}


static PyObject *
PyvtkImageStencilSource_GetOutputOrigin(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputOrigin");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputOrigin() :
      op->vtkImageStencilSource::GetOutputOrigin());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputSpacing_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

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
      op->SetOutputSpacing(temp0, temp1, temp2);
    }
    else
    {
      op->vtkImageStencilSource::SetOutputSpacing(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputSpacing_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputSpacing(temp0);
    }
    else
    {
      op->vtkImageStencilSource::SetOutputSpacing(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputSpacing(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkImageStencilSource_SetOutputSpacing_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputSpacing_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputSpacing");
  return nullptr;
}


static PyObject *
PyvtkImageStencilSource_GetOutputSpacing(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputSpacing");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetOutputSpacing() :
      op->vtkImageStencilSource::GetOutputSpacing());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

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
      op->vtkImageStencilSource::SetOutputWholeExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetOutputWholeExtent(temp0);
    }
    else
    {
      op->vtkImageStencilSource::SetOutputWholeExtent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkImageStencilSource_SetOutputWholeExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkImageStencilSource_SetOutputWholeExtent_s1(self, args);
    case 1:
      return PyvtkImageStencilSource_SetOutputWholeExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetOutputWholeExtent");
  return nullptr;
}


static PyObject *
PyvtkImageStencilSource_GetOutputWholeExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputWholeExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetOutputWholeExtent() :
      op->vtkImageStencilSource::GetOutputWholeExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkImageStencilSource_ReportReferences(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReportReferences");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageStencilSource *op = static_cast<vtkImageStencilSource *>(vp);

  vtkGarbageCollector *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkGarbageCollector"))
  {
    if (ap.IsBound())
    {
      op->ReportReferences(temp0);
    }
    else
    {
      op->vtkImageStencilSource::ReportReferences(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageStencilSource_Methods[] = {
  {"IsTypeOf", PyvtkImageStencilSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageStencilSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageStencilSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageStencilSource\nC++: static vtkImageStencilSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageStencilSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageStencilSource\nC++: vtkImageStencilSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageStencilSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageStencilSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetInformationInput", PyvtkImageStencilSource_SetInformationInput, METH_VARARGS,
   "SetInformationInput(self, __a:vtkImageData) -> None\nC++: virtual void SetInformationInput(vtkImageData *)\n\nSet a vtkImageData that has the Spacing, Origin, and WholeExtent\nthat will be used for the stencil.  This input should be set to\nthe image that you wish to apply the stencil to.  If you use this\nmethod, then any values set with the SetOutputSpacing,\nSetOutputOrigin, and SetOutputWholeExtent methods will be\nignored.\n"},
  {"GetInformationInput", PyvtkImageStencilSource_GetInformationInput, METH_VARARGS,
   "GetInformationInput(self) -> vtkImageData\nC++: virtual vtkImageData *GetInformationInput()\n\n"},
  {"SetOutputOrigin", PyvtkImageStencilSource_SetOutputOrigin, METH_VARARGS,
   "SetOutputOrigin(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutputOrigin(double _arg1, double _arg2,\n    double _arg3)\nSetOutputOrigin(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutputOrigin(const double _arg[3])\n\nSet the Origin to be used for the stencil.  It should be set to\nthe Origin of the image you intend to apply the stencil to. The\ndefault value is (0,0,0).\n"},
  {"GetOutputOrigin", PyvtkImageStencilSource_GetOutputOrigin, METH_VARARGS,
   "GetOutputOrigin(self) -> (float, float, float)\nC++: virtual double *GetOutputOrigin()\n\n"},
  {"SetOutputSpacing", PyvtkImageStencilSource_SetOutputSpacing, METH_VARARGS,
   "SetOutputSpacing(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetOutputSpacing(double _arg1, double _arg2,\n    double _arg3)\nSetOutputSpacing(self, _arg:(float, float, float)) -> None\nC++: virtual void SetOutputSpacing(const double _arg[3])\n\nSet the Spacing to be used for the stencil. It should be set to\nthe Spacing of the image you intend to apply the stencil to. The\ndefault value is (1,1,1)\n"},
  {"GetOutputSpacing", PyvtkImageStencilSource_GetOutputSpacing, METH_VARARGS,
   "GetOutputSpacing(self) -> (float, float, float)\nC++: virtual double *GetOutputSpacing()\n\n"},
  {"SetOutputWholeExtent", PyvtkImageStencilSource_SetOutputWholeExtent, METH_VARARGS,
   "SetOutputWholeExtent(self, _arg1:int, _arg2:int, _arg3:int,\n    _arg4:int, _arg5:int, _arg6:int) -> None\nC++: virtual void SetOutputWholeExtent(int _arg1, int _arg2,\n    int _arg3, int _arg4, int _arg5, int _arg6)\nSetOutputWholeExtent(self, _arg:(int, int, int, int, int, int))\n    -> None\nC++: virtual void SetOutputWholeExtent(const int _arg[6])\n\nSet the whole extent for the stencil (anything outside this\nextent will be considered to be \"outside\" the stencil).\n"},
  {"GetOutputWholeExtent", PyvtkImageStencilSource_GetOutputWholeExtent, METH_VARARGS,
   "GetOutputWholeExtent(self) -> (int, int, int, int, int, int)\nC++: virtual int *GetOutputWholeExtent()\n\n"},
  {"ReportReferences", PyvtkImageStencilSource_ReportReferences, METH_VARARGS,
   "ReportReferences(self, __a:vtkGarbageCollector) -> None\nC++: void ReportReferences(vtkGarbageCollector *) override;\n\nReport object referenced by instances of this class.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageStencilSource_Doc =
  "vtkImageStencilSource - generate an image stencil\n\n"
  "Superclass: vtkImageStencilAlgorithm\n\n"
  "vtkImageStencilSource is a superclass for filters that generate image\n"
  "stencils.  Given a clipping object such as a vtkImplicitFunction, it\n"
  "will set up a list of clipping extents for each x-row through the\n"
  "image data.  The extents for each x-row can be retrieved via the\n"
  "GetNextExtent() method after the extent lists have been built with\n"
  "the BuildExtents() method.  For large images, using clipping extents\n"
  "is much more memory efficient (and slightly more time-efficient) than\n"
  "building a mask.  This class can be subclassed to allow clipping with\n"
  "objects other than vtkImplicitFunction.\n"
  "@sa\n"
  "vtkImplicitFunction vtkImageStencil vtkPolyDataToImageStencil\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageStencilSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageStencilSource", // tp_name
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
  PyvtkImageStencilSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageStencilSource_StaticNew()
{
  return vtkImageStencilSource::New();
}

PyObject *PyvtkImageStencilSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageStencilSource_Type, PyvtkImageStencilSource_Methods,
    "vtkImageStencilSource",
 &PyvtkImageStencilSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageStencilAlgorithm_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageStencilSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageStencilSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageStencilSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

