// python wrapper for vtkImageLogic
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkImageLogic.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkImageLogic(PyObject *dict); }
extern "C" { PyObject *PyvtkImageLogic_ClassNew(); }


static PyObject *
PyvtkImageLogic_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkImageLogic::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkImageLogic::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkImageLogic *tempr = vtkImageLogic::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkImageLogic *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkImageLogic::NewInstance());

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
PyvtkImageLogic_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkImageLogic::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkImageLogic::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOperation(temp0);
    }
    else
    {
      op->vtkImageLogic::SetOperation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOperation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOperation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOperation() :
      op->vtkImageLogic::GetOperation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToAnd(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToAnd");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToAnd();
    }
    else
    {
      op->vtkImageLogic::SetOperationToAnd();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToOr(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToOr");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToOr();
    }
    else
    {
      op->vtkImageLogic::SetOperationToOr();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToXor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToXor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToXor();
    }
    else
    {
      op->vtkImageLogic::SetOperationToXor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNand(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNand");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNand();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNand();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNor();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNor();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOperationToNot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOperationToNot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetOperationToNot();
    }
    else
    {
      op->vtkImageLogic::SetOperationToNot();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputTrueValue(temp0);
    }
    else
    {
      op->vtkImageLogic::SetOutputTrueValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_GetOutputTrueValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputTrueValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetOutputTrueValue() :
      op->vtkImageLogic::GetOutputTrueValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput1Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput1Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput1Data(temp0);
    }
    else
    {
      op->vtkImageLogic::SetInput1Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkImageLogic_SetInput2Data(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput2Data");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkImageLogic *op = static_cast<vtkImageLogic *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->SetInput2Data(temp0);
    }
    else
    {
      op->vtkImageLogic::SetInput2Data(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkImageLogic_Methods[] = {
  {"IsTypeOf", PyvtkImageLogic_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkImageLogic_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkImageLogic_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkImageLogic\nC++: static vtkImageLogic *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkImageLogic_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkImageLogic\nC++: vtkImageLogic *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkImageLogic_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkImageLogic_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOperation", PyvtkImageLogic_SetOperation, METH_VARARGS,
   "SetOperation(self, _arg:int) -> None\nC++: virtual void SetOperation(int _arg)\n\nSet/Get the Operation to perform.\n"},
  {"GetOperation", PyvtkImageLogic_GetOperation, METH_VARARGS,
   "GetOperation(self) -> int\nC++: virtual int GetOperation()\n\n"},
  {"SetOperationToAnd", PyvtkImageLogic_SetOperationToAnd, METH_VARARGS,
   "SetOperationToAnd(self) -> None\nC++: void SetOperationToAnd()\n\n"},
  {"SetOperationToOr", PyvtkImageLogic_SetOperationToOr, METH_VARARGS,
   "SetOperationToOr(self) -> None\nC++: void SetOperationToOr()\n\n"},
  {"SetOperationToXor", PyvtkImageLogic_SetOperationToXor, METH_VARARGS,
   "SetOperationToXor(self) -> None\nC++: void SetOperationToXor()\n\n"},
  {"SetOperationToNand", PyvtkImageLogic_SetOperationToNand, METH_VARARGS,
   "SetOperationToNand(self) -> None\nC++: void SetOperationToNand()\n\n"},
  {"SetOperationToNor", PyvtkImageLogic_SetOperationToNor, METH_VARARGS,
   "SetOperationToNor(self) -> None\nC++: void SetOperationToNor()\n\n"},
  {"SetOperationToNot", PyvtkImageLogic_SetOperationToNot, METH_VARARGS,
   "SetOperationToNot(self) -> None\nC++: void SetOperationToNot()\n\n"},
  {"SetOutputTrueValue", PyvtkImageLogic_SetOutputTrueValue, METH_VARARGS,
   "SetOutputTrueValue(self, _arg:float) -> None\nC++: virtual void SetOutputTrueValue(double _arg)\n\nSet the value to use for true in the output.\n"},
  {"GetOutputTrueValue", PyvtkImageLogic_GetOutputTrueValue, METH_VARARGS,
   "GetOutputTrueValue(self) -> float\nC++: virtual double GetOutputTrueValue()\n\n"},
  {"SetInput1Data", PyvtkImageLogic_SetInput1Data, METH_VARARGS,
   "SetInput1Data(self, input:vtkDataObject) -> None\nC++: virtual void SetInput1Data(vtkDataObject *input)\n\nSet the Input1 of this filter.\n"},
  {"SetInput2Data", PyvtkImageLogic_SetInput2Data, METH_VARARGS,
   "SetInput2Data(self, input:vtkDataObject) -> None\nC++: virtual void SetInput2Data(vtkDataObject *input)\n\nSet the Input2 of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkImageLogic_Doc =
  "vtkImageLogic - And, or, xor, nand, nor, not.\n\n"
  "Superclass: vtkThreadedImageAlgorithm\n\n"
  "vtkImageLogic implements basic logic operations. SetOperation is used\n"
  "to select the filter's behavior. The filter can take two or one\n"
  "input. Inputs must have the same type.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkImageLogic_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkImagingMath.vtkImageLogic", // tp_name
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
  PyvtkImageLogic_Doc, // tp_doc
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

static vtkObjectBase *PyvtkImageLogic_StaticNew()
{
  return vtkImageLogic::New();
}

PyObject *PyvtkImageLogic_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkImageLogic_Type, PyvtkImageLogic_Methods,
    "vtkImageLogic",
 &PyvtkImageLogic_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkThreadedImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkImageLogic(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkImageLogic_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkImageLogic", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    static const struct { const char *name; int value; }
      constants[7] = {
        { "VTK_AND", 0 },
        { "VTK_OR", 1 },
        { "VTK_XOR", 2 },
        { "VTK_NAND", 3 },
        { "VTK_NOR", 4 },
        { "VTK_NOT", 5 },
        { "VTK_NOP", 6 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

