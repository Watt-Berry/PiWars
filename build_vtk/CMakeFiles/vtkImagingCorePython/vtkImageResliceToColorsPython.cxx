// python wrapper for vtkImageResliceToColors
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageResliceToColors.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageResliceToColors(PyObject *dict); }
extern "C" { PyObject *PyvtkImageResliceToColors_ClassNew(); }

#ifndef DECLARED_PyvtkImageReslice_ClassNew
extern "C" { PyObject *PyvtkImageReslice_ClassNew(); }
#define DECLARED_PyvtkImageReslice_ClassNew
#endif

static PyObject *
PyvtkImageResliceToColors_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageResliceToColors::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageResliceToColors::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageResliceToColors *tempr = vtkImageResliceToColors::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageResliceToColors *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageResliceToColors::NewInstance());

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
PyvtkImageResliceToColors_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageResliceToColors::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageResliceToColors::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  vtkScalarsToColors *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkScalarsToColors"))
  {
    if (ap.IsBound())
    {
      op->SetLookupTable(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetLookupTable(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetLookupTable(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLookupTable");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkScalarsToColors *tempr = (ap.IsBound() ?
      op->GetLookupTable() :
      op->vtkImageResliceToColors::GetLookupTable());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormat(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMinValue() :
      op->vtkImageResliceToColors::GetOutputFormatMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormatMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormatMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormatMaxValue() :
      op->vtkImageResliceToColors::GetOutputFormatMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetOutputFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputFormat() :
      op->vtkImageResliceToColors::GetOutputFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGBA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGBA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGBA();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToRGBA();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToRGB(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToRGB");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToRGB();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToRGB();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminanceAlpha");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminanceAlpha();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToLuminanceAlpha();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetOutputFormatToLuminance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputFormatToLuminance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOutputFormatToLuminance();
    }
    else
    {
      op->vtkImageResliceToColors::SetOutputFormatToLuminance();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_SetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBypass(temp0);
    }
    else
    {
      op->vtkImageResliceToColors::SetBypass(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOn();
    }
    else
    {
      op->vtkImageResliceToColors::BypassOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_BypassOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BypassOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BypassOff();
    }
    else
    {
      op->vtkImageResliceToColors::BypassOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetBypass(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBypass");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBypass() :
      op->vtkImageResliceToColors::GetBypass());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageResliceToColors_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageResliceToColors *op = static_cast<vtkImageResliceToColors *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkImageResliceToColors::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkImageResliceToColors_Methods[] = {
  {"IsTypeOf", PyvtkImageResliceToColors_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageResliceToColors_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageResliceToColors_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageResliceToColors\nC++: static vtkImageResliceToColors *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageResliceToColors_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageResliceToColors\nC++: vtkImageResliceToColors *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageResliceToColors_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageResliceToColors_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLookupTable", PyvtkImageResliceToColors_SetLookupTable, METH_VARARGS,
   "SetLookupTable(self, table:vtkScalarsToColors) -> None\nC++: virtual void SetLookupTable(vtkScalarsToColors *table)\n\nSet a lookup table to apply to the data.  Use the Range,\nVectorMode, and VectorComponents of the table to control the\nmapping of the input data to colors.  If any output voxel is\ntransformed to a point outside the input volume, then that voxel\nwill be set to the BackgroundColor.\n"},
  {"GetLookupTable", PyvtkImageResliceToColors_GetLookupTable, METH_VARARGS,
   "GetLookupTable(self) -> vtkScalarsToColors\nC++: virtual vtkScalarsToColors *GetLookupTable()\n\n"},
  {"SetOutputFormat", PyvtkImageResliceToColors_SetOutputFormat, METH_VARARGS,
   "SetOutputFormat(self, _arg:int) -> None\nC++: virtual void SetOutputFormat(int _arg)\n\nSet the output format, the default is RGBA.\n"},
  {"GetOutputFormatMinValue", PyvtkImageResliceToColors_GetOutputFormatMinValue, METH_VARARGS,
   "GetOutputFormatMinValue(self) -> int\nC++: virtual int GetOutputFormatMinValue()\n\n"},
  {"GetOutputFormatMaxValue", PyvtkImageResliceToColors_GetOutputFormatMaxValue, METH_VARARGS,
   "GetOutputFormatMaxValue(self) -> int\nC++: virtual int GetOutputFormatMaxValue()\n\n"},
  {"GetOutputFormat", PyvtkImageResliceToColors_GetOutputFormat, METH_VARARGS,
   "GetOutputFormat(self) -> int\nC++: virtual int GetOutputFormat()\n\n"},
  {"SetOutputFormatToRGBA", PyvtkImageResliceToColors_SetOutputFormatToRGBA, METH_VARARGS,
   "SetOutputFormatToRGBA(self) -> None\nC++: void SetOutputFormatToRGBA()\n\n"},
  {"SetOutputFormatToRGB", PyvtkImageResliceToColors_SetOutputFormatToRGB, METH_VARARGS,
   "SetOutputFormatToRGB(self) -> None\nC++: void SetOutputFormatToRGB()\n\n"},
  {"SetOutputFormatToLuminanceAlpha", PyvtkImageResliceToColors_SetOutputFormatToLuminanceAlpha, METH_VARARGS,
   "SetOutputFormatToLuminanceAlpha(self) -> None\nC++: void SetOutputFormatToLuminanceAlpha()\n\n"},
  {"SetOutputFormatToLuminance", PyvtkImageResliceToColors_SetOutputFormatToLuminance, METH_VARARGS,
   "SetOutputFormatToLuminance(self) -> None\nC++: void SetOutputFormatToLuminance()\n\n"},
  {"SetBypass", PyvtkImageResliceToColors_SetBypass, METH_VARARGS,
   "SetBypass(self, bypass:int) -> None\nC++: void SetBypass(int bypass)\n\nBypass the color mapping operation and output the scalar values\ndirectly.  The output values will be float, rather than the input\ndata type.\n"},
  {"BypassOn", PyvtkImageResliceToColors_BypassOn, METH_VARARGS,
   "BypassOn(self) -> None\nC++: void BypassOn()\n\n"},
  {"BypassOff", PyvtkImageResliceToColors_BypassOff, METH_VARARGS,
   "BypassOff(self) -> None\nC++: void BypassOff()\n\n"},
  {"GetBypass", PyvtkImageResliceToColors_GetBypass, METH_VARARGS,
   "GetBypass(self) -> int\nC++: int GetBypass()\n\n"},
  {"GetMTime", PyvtkImageResliceToColors_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nWhen determining the modified time of the filter, this checks the\nmodified time of the transform and matrix.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageResliceToColors_Doc =
  "vtkImageResliceToColors - Reslice and produce color scalars.\n\n"
  "Superclass: vtkImageReslice\n\n"
  "vtkImageResliceToColors is an extension of vtkImageReslice that\n"
  "produces color scalars.  It should be provided with a lookup table\n"
  "that defines the output colors and the desired range of input values\n"
  "to map to those colors.  If the input has multiple components, then\n"
  "you should use the SetVectorMode() method of the lookup table to\n"
  "specify how the vectors will be colored.  If no lookup table is\n"
  "provided, then the input must already be color scalars, but they will\n"
  "be converted to the specified output format.\n"
  "@sa\n"
  "vtkImageMapToColors\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageResliceToColors_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingCore.vtkImageResliceToColors", // tp_name
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
  PyvtkImageResliceToColors_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageResliceToColors_StaticNew()
{
  return vtkImageResliceToColors::New();
}

PyObject *PyvtkImageResliceToColors_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageResliceToColors_Type, PyvtkImageResliceToColors_Methods,
    "vtkImageResliceToColors",
 &PyvtkImageResliceToColors_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkImageReslice_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageResliceToColors(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageResliceToColors_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageResliceToColors", o) != 0)
  {
    Py_DECREF(o);
  }

}

