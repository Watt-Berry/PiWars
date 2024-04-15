// python wrapper for vtkLabelSizeCalculator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLabelSizeCalculator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLabelSizeCalculator(PyObject *dict); }
extern "C" { PyObject *PyvtkLabelSizeCalculator_ClassNew(); }


static PyObject *
PyvtkLabelSizeCalculator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLabelSizeCalculator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLabelSizeCalculator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLabelSizeCalculator *tempr = vtkLabelSizeCalculator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLabelSizeCalculator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLabelSizeCalculator::NewInstance());

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
PyvtkLabelSizeCalculator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLabelSizeCalculator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLabelSizeCalculator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  vtkTextProperty *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkTextProperty") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->SetFontProperty(temp0, temp1);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetFontProperty(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetFontProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  int temp0 = 0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetFontProperty(temp0) :
      op->vtkLabelSizeCalculator::GetFontProperty(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelSizeArrayName(temp0);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetLabelSizeArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetLabelSizeArrayName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelSizeArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelSizeArrayName() :
      op->vtkLabelSizeCalculator::GetLabelSizeArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_SetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDPI(temp0);
    }
    else
    {
      op->vtkLabelSizeCalculator::SetDPI(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLabelSizeCalculator_GetDPI(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDPI");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLabelSizeCalculator *op = static_cast<vtkLabelSizeCalculator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDPI() :
      op->vtkLabelSizeCalculator::GetDPI());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkLabelSizeCalculator_Methods[] = {
  {"IsTypeOf", PyvtkLabelSizeCalculator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLabelSizeCalculator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLabelSizeCalculator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLabelSizeCalculator\nC++: static vtkLabelSizeCalculator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLabelSizeCalculator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLabelSizeCalculator\nC++: vtkLabelSizeCalculator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLabelSizeCalculator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLabelSizeCalculator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFontProperty", PyvtkLabelSizeCalculator_SetFontProperty, METH_VARARGS,
   "SetFontProperty(self, fontProp:vtkTextProperty, type:int=0)\n    -> None\nC++: virtual void SetFontProperty(vtkTextProperty *fontProp,\n    int type=0)\n\nGet/Set the font used compute label sizes. This defaults to\n\"Arial\" at 12 points. If type is provided, it refers to the type\nof the text label provided in the optional label type array. The\ndefault type is type 0.\n"},
  {"GetFontProperty", PyvtkLabelSizeCalculator_GetFontProperty, METH_VARARGS,
   "GetFontProperty(self, type:int=0) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetFontProperty(int type=0)\n\n"},
  {"SetLabelSizeArrayName", PyvtkLabelSizeCalculator_SetLabelSizeArrayName, METH_VARARGS,
   "SetLabelSizeArrayName(self, _arg:str) -> None\nC++: virtual void SetLabelSizeArrayName(const char *_arg)\n\nThe name of the output array containing text label sizes This\ndefaults to \"LabelSize\"\n"},
  {"GetLabelSizeArrayName", PyvtkLabelSizeCalculator_GetLabelSizeArrayName, METH_VARARGS,
   "GetLabelSizeArrayName(self) -> str\nC++: virtual char *GetLabelSizeArrayName()\n\n"},
  {"SetDPI", PyvtkLabelSizeCalculator_SetDPI, METH_VARARGS,
   "SetDPI(self, _arg:int) -> None\nC++: virtual void SetDPI(int _arg)\n\nGet/Set the DPI at which the labels are to be rendered. Defaults\nto 72.\n@sa vtkWindow::GetDPI()\n"},
  {"GetDPI", PyvtkLabelSizeCalculator_GetDPI, METH_VARARGS,
   "GetDPI(self) -> int\nC++: virtual int GetDPI()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLabelSizeCalculator_Doc =
  "vtkLabelSizeCalculator - This filter takes an input dataset, an array\nto process (which must be a string array), and a text property.\n\n"
  "Superclass: vtkPassInputTypeAlgorithm\n\n"
  "It creates a new output array (named \"LabelSize\" by default) with 4\n"
  "components per tuple that contain the width, height, horizontal\n"
  "offset, and descender height (in that order) of each string in the\n"
  "array.\n\n"
  "Use the inherited SelectInputArrayToProcess to indicate a string\n"
  "array. In no input array is specified, the first of the following\n"
  "that is a string array is used: point scalars, cell scalars, field\n"
  "scalars.\n\n"
  "The second input array to process is an array specifying the type of\n"
  "each label. Different label types may have different font properties.\n"
  "This array must be a vtkIntArray. Any type that does not map to a\n"
  "font property that was set will be set to the type 0's type property.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLabelSizeCalculator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLabel.vtkLabelSizeCalculator", // tp_name
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
  PyvtkLabelSizeCalculator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLabelSizeCalculator_StaticNew()
{
  return vtkLabelSizeCalculator::New();
}

PyObject *PyvtkLabelSizeCalculator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLabelSizeCalculator_Type, PyvtkLabelSizeCalculator_Methods,
    "vtkLabelSizeCalculator",
 &PyvtkLabelSizeCalculator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPassInputTypeAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLabelSizeCalculator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLabelSizeCalculator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLabelSizeCalculator", o) != 0)
  {
    Py_DECREF(o);
  }

}

