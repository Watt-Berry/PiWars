// python wrapper for vtkSplitColumnComponents
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSplitColumnComponents.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSplitColumnComponents(PyObject *dict); }
extern "C" { PyObject *PyvtkSplitColumnComponents_ClassNew(); }


static PyObject *
PyvtkSplitColumnComponents_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSplitColumnComponents::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSplitColumnComponents::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSplitColumnComponents *tempr = vtkSplitColumnComponents::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSplitColumnComponents *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSplitColumnComponents::NewInstance());

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
PyvtkSplitColumnComponents_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSplitColumnComponents::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSplitColumnComponents::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCalculateMagnitudes(temp0);
    }
    else
    {
      op->vtkSplitColumnComponents::SetCalculateMagnitudes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetCalculateMagnitudes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCalculateMagnitudes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCalculateMagnitudes() :
      op->vtkSplitColumnComponents::GetCalculateMagnitudes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_CalculateMagnitudesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateMagnitudesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateMagnitudesOn();
    }
    else
    {
      op->vtkSplitColumnComponents::CalculateMagnitudesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_CalculateMagnitudesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateMagnitudesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CalculateMagnitudesOff();
    }
    else
    {
      op->vtkSplitColumnComponents::CalculateMagnitudesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNamingMode(temp0);
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMinValue() :
      op->vtkSplitColumnComponents::GetNamingModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingModeMaxValue() :
      op->vtkSplitColumnComponents::GetNamingModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNumberWithParens();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithParens();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNumberWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNumberWithUnderscores();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNumberWithUnderscores();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithParens");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNamesWithParens();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithParens();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNamingModeToNamesWithUnderscores");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetNamingModeToNamesWithUnderscores();
    }
    else
    {
      op->vtkSplitColumnComponents::SetNamingModeToNamesWithUnderscores();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_GetNamingMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNamingMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSplitColumnComponents *op = static_cast<vtkSplitColumnComponents *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNamingMode() :
      op->vtkSplitColumnComponents::GetNamingMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_ORIGINAL_ARRAY_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_ARRAY_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkSplitColumnComponents::ORIGINAL_ARRAY_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSplitColumnComponents_ORIGINAL_COMPONENT_NUMBER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ORIGINAL_COMPONENT_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSplitColumnComponents::ORIGINAL_COMPONENT_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSplitColumnComponents_Methods[] = {
  {"IsTypeOf", PyvtkSplitColumnComponents_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSplitColumnComponents_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSplitColumnComponents_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSplitColumnComponents\nC++: static vtkSplitColumnComponents *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSplitColumnComponents_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSplitColumnComponents\nC++: vtkSplitColumnComponents *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSplitColumnComponents_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSplitColumnComponents_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCalculateMagnitudes", PyvtkSplitColumnComponents_SetCalculateMagnitudes, METH_VARARGS,
   "SetCalculateMagnitudes(self, _arg:bool) -> None\nC++: virtual void SetCalculateMagnitudes(bool _arg)\n\nIf on this filter will calculate an additional magnitude column\nfor all columns it splits with two or more components. Default is\non.\n"},
  {"GetCalculateMagnitudes", PyvtkSplitColumnComponents_GetCalculateMagnitudes, METH_VARARGS,
   "GetCalculateMagnitudes(self) -> bool\nC++: virtual bool GetCalculateMagnitudes()\n\n"},
  {"CalculateMagnitudesOn", PyvtkSplitColumnComponents_CalculateMagnitudesOn, METH_VARARGS,
   "CalculateMagnitudesOn(self) -> None\nC++: virtual void CalculateMagnitudesOn()\n\n"},
  {"CalculateMagnitudesOff", PyvtkSplitColumnComponents_CalculateMagnitudesOff, METH_VARARGS,
   "CalculateMagnitudesOff(self) -> None\nC++: virtual void CalculateMagnitudesOff()\n\n"},
  {"SetNamingMode", PyvtkSplitColumnComponents_SetNamingMode, METH_VARARGS,
   "SetNamingMode(self, _arg:int) -> None\nC++: virtual void SetNamingMode(int _arg)\n\nGet/Set the array naming mode. Description is\nNUMBERS_WITH_PARENS.\n"},
  {"GetNamingModeMinValue", PyvtkSplitColumnComponents_GetNamingModeMinValue, METH_VARARGS,
   "GetNamingModeMinValue(self) -> int\nC++: virtual int GetNamingModeMinValue()\n\n"},
  {"GetNamingModeMaxValue", PyvtkSplitColumnComponents_GetNamingModeMaxValue, METH_VARARGS,
   "GetNamingModeMaxValue(self) -> int\nC++: virtual int GetNamingModeMaxValue()\n\n"},
  {"SetNamingModeToNumberWithParens", PyvtkSplitColumnComponents_SetNamingModeToNumberWithParens, METH_VARARGS,
   "SetNamingModeToNumberWithParens(self) -> None\nC++: void SetNamingModeToNumberWithParens()\n\n"},
  {"SetNamingModeToNumberWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNumberWithUnderscores, METH_VARARGS,
   "SetNamingModeToNumberWithUnderscores(self) -> None\nC++: void SetNamingModeToNumberWithUnderscores()\n\n"},
  {"SetNamingModeToNamesWithParens", PyvtkSplitColumnComponents_SetNamingModeToNamesWithParens, METH_VARARGS,
   "SetNamingModeToNamesWithParens(self) -> None\nC++: void SetNamingModeToNamesWithParens()\n\n"},
  {"SetNamingModeToNamesWithUnderscores", PyvtkSplitColumnComponents_SetNamingModeToNamesWithUnderscores, METH_VARARGS,
   "SetNamingModeToNamesWithUnderscores(self) -> None\nC++: void SetNamingModeToNamesWithUnderscores()\n\n"},
  {"GetNamingMode", PyvtkSplitColumnComponents_GetNamingMode, METH_VARARGS,
   "GetNamingMode(self) -> int\nC++: virtual int GetNamingMode()\n\n"},
  {"ORIGINAL_ARRAY_NAME", PyvtkSplitColumnComponents_ORIGINAL_ARRAY_NAME, METH_VARARGS,
   "ORIGINAL_ARRAY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *ORIGINAL_ARRAY_NAME()\n\nThese are keys that get added to each output array to make it\neasier for downstream filters to know which output array were\nextracted from which input array.\n\nIf either of these keys are missing, then the array was not\nextracted at all.\n\n`ORIGINAL_COMPONENT_NUMBER` of -1 indicates magnitude.\n"},
  {"ORIGINAL_COMPONENT_NUMBER", PyvtkSplitColumnComponents_ORIGINAL_COMPONENT_NUMBER, METH_VARARGS,
   "ORIGINAL_COMPONENT_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *ORIGINAL_COMPONENT_NUMBER()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSplitColumnComponents_Doc =
  "vtkSplitColumnComponents - split multicomponent table columns\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Splits any columns in a table that have more than one component into\n"
  "individual columns. Single component columns are passed through\n"
  "without any data duplication. NamingMode can be used to control how\n"
  "columns with multiple components are labelled in the output, e.g., if\n"
  "column names \"Points\" had three components this column would be split\n"
  "into \"Points (0)\", \"Points (1)\", and Points (2)\" when NamingMode is\n"
  "NUMBERS_WITH_PARENS, into Points_0, Points_1, and Points_2 when\n"
  "NamingMode is NUMBERS_WITH_UNDERSCORES, into \"Points (X)\", \"Points\n"
  "(Y)\", and \"Points (Z)\" when NamingMode is NAMES_WITH_PARENS, and into\n"
  "Points_X, Points_Y, and Points_Z when NamingMode is\n"
  "NAMES_WITH_UNDERSCORES.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSplitColumnComponents_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkSplitColumnComponents", // tp_name
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
  PyvtkSplitColumnComponents_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSplitColumnComponents_StaticNew()
{
  return vtkSplitColumnComponents::New();
}

PyObject *PyvtkSplitColumnComponents_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSplitColumnComponents_Type, PyvtkSplitColumnComponents_Methods,
    "vtkSplitColumnComponents",
 &PyvtkSplitColumnComponents_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "NUMBERS_WITH_PARENS", vtkSplitColumnComponents::NUMBERS_WITH_PARENS },
        { "NAMES_WITH_PARENS", vtkSplitColumnComponents::NAMES_WITH_PARENS },
        { "NUMBERS_WITH_UNDERSCORES", vtkSplitColumnComponents::NUMBERS_WITH_UNDERSCORES },
        { "NAMES_WITH_UNDERSCORES", vtkSplitColumnComponents::NAMES_WITH_UNDERSCORES },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSplitColumnComponents(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSplitColumnComponents_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSplitColumnComponents", o) != 0)
  {
    Py_DECREF(o);
  }

}

