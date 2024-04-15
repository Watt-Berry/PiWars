// python wrapper for vtkDSPFilterDefinition
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDSPFilterDefinition.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDSPFilterDefinition(PyObject *dict); }
extern "C" { PyObject *PyvtkDSPFilterDefinition_ClassNew(); }


static PyObject *
PyvtkDSPFilterDefinition_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDSPFilterDefinition::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDSPFilterDefinition::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDSPFilterDefinition *tempr = vtkDSPFilterDefinition::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDSPFilterDefinition *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDSPFilterDefinition::NewInstance());

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
PyvtkDSPFilterDefinition_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDSPFilterDefinition::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDSPFilterDefinition::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_Copy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Copy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  vtkDSPFilterDefinition *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDSPFilterDefinition"))
  {
    if (ap.IsBound())
    {
      op->Copy(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::Copy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_Clear(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clear");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Clear();
    }
    else
    {
      op->vtkDSPFilterDefinition::Clear();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsThisInputVariableInstanceNeeded");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    bool tempr = (ap.IsBound() ?
      op->IsThisInputVariableInstanceNeeded(temp0, temp1) :
      op->vtkDSPFilterDefinition::IsThisInputVariableInstanceNeeded(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackNumeratorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackNumeratorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackDenominatorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackDenominatorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PushBackForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->PushBackForwardNumeratorWeight(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::PushBackForwardNumeratorWeight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInputVariableName(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::SetInputVariableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_SetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputVariableName(temp0);
    }
    else
    {
      op->vtkDSPFilterDefinition::SetOutputVariableName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetInputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetInputVariableName() :
      op->vtkDSPFilterDefinition::GetInputVariableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetOutputVariableName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputVariableName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOutputVariableName() :
      op->vtkDSPFilterDefinition::GetOutputVariableName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumNumeratorWeights() :
      op->vtkDSPFilterDefinition::GetNumNumeratorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumDenominatorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumDenominatorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumDenominatorWeights() :
      op->vtkDSPFilterDefinition::GetNumDenominatorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumForwardNumeratorWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumForwardNumeratorWeights() :
      op->vtkDSPFilterDefinition::GetNumForwardNumeratorWeights());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetNumeratorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetNumeratorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetDenominatorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDenominatorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetDenominatorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetDenominatorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDSPFilterDefinition_GetForwardNumeratorWeight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForwardNumeratorWeight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDSPFilterDefinition *op = static_cast<vtkDSPFilterDefinition *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetForwardNumeratorWeight(temp0) :
      op->vtkDSPFilterDefinition::GetForwardNumeratorWeight(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDSPFilterDefinition_Methods[] = {
  {"IsTypeOf", PyvtkDSPFilterDefinition_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDSPFilterDefinition_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDSPFilterDefinition_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDSPFilterDefinition\nC++: static vtkDSPFilterDefinition *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDSPFilterDefinition_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDSPFilterDefinition\nC++: vtkDSPFilterDefinition *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDSPFilterDefinition_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDSPFilterDefinition_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Copy", PyvtkDSPFilterDefinition_Copy, METH_VARARGS,
   "Copy(self, other:vtkDSPFilterDefinition) -> None\nC++: void Copy(vtkDSPFilterDefinition *other)\n\n"},
  {"Clear", PyvtkDSPFilterDefinition_Clear, METH_VARARGS,
   "Clear(self) -> None\nC++: void Clear()\n\n"},
  {"IsThisInputVariableInstanceNeeded", PyvtkDSPFilterDefinition_IsThisInputVariableInstanceNeeded, METH_VARARGS,
   "IsThisInputVariableInstanceNeeded(self, a_timestep:int,\n    a_outputTimestep:int) -> bool\nC++: bool IsThisInputVariableInstanceNeeded(int a_timestep,\n    int a_outputTimestep)\n\n"},
  {"PushBackNumeratorWeight", PyvtkDSPFilterDefinition_PushBackNumeratorWeight, METH_VARARGS,
   "PushBackNumeratorWeight(self, a_value:float) -> None\nC++: void PushBackNumeratorWeight(double a_value)\n\n"},
  {"PushBackDenominatorWeight", PyvtkDSPFilterDefinition_PushBackDenominatorWeight, METH_VARARGS,
   "PushBackDenominatorWeight(self, a_value:float) -> None\nC++: void PushBackDenominatorWeight(double a_value)\n\n"},
  {"PushBackForwardNumeratorWeight", PyvtkDSPFilterDefinition_PushBackForwardNumeratorWeight, METH_VARARGS,
   "PushBackForwardNumeratorWeight(self, a_value:float) -> None\nC++: void PushBackForwardNumeratorWeight(double a_value)\n\n"},
  {"SetInputVariableName", PyvtkDSPFilterDefinition_SetInputVariableName, METH_VARARGS,
   "SetInputVariableName(self, a_value:str) -> None\nC++: void SetInputVariableName(const char *a_value)\n\n"},
  {"SetOutputVariableName", PyvtkDSPFilterDefinition_SetOutputVariableName, METH_VARARGS,
   "SetOutputVariableName(self, a_value:str) -> None\nC++: void SetOutputVariableName(const char *a_value)\n\n"},
  {"GetInputVariableName", PyvtkDSPFilterDefinition_GetInputVariableName, METH_VARARGS,
   "GetInputVariableName(self) -> str\nC++: const char *GetInputVariableName()\n\n"},
  {"GetOutputVariableName", PyvtkDSPFilterDefinition_GetOutputVariableName, METH_VARARGS,
   "GetOutputVariableName(self) -> str\nC++: const char *GetOutputVariableName()\n\n"},
  {"GetNumNumeratorWeights", PyvtkDSPFilterDefinition_GetNumNumeratorWeights, METH_VARARGS,
   "GetNumNumeratorWeights(self) -> int\nC++: int GetNumNumeratorWeights()\n\n"},
  {"GetNumDenominatorWeights", PyvtkDSPFilterDefinition_GetNumDenominatorWeights, METH_VARARGS,
   "GetNumDenominatorWeights(self) -> int\nC++: int GetNumDenominatorWeights()\n\n"},
  {"GetNumForwardNumeratorWeights", PyvtkDSPFilterDefinition_GetNumForwardNumeratorWeights, METH_VARARGS,
   "GetNumForwardNumeratorWeights(self) -> int\nC++: int GetNumForwardNumeratorWeights()\n\n"},
  {"GetNumeratorWeight", PyvtkDSPFilterDefinition_GetNumeratorWeight, METH_VARARGS,
   "GetNumeratorWeight(self, a_which:int) -> float\nC++: double GetNumeratorWeight(int a_which)\n\n"},
  {"GetDenominatorWeight", PyvtkDSPFilterDefinition_GetDenominatorWeight, METH_VARARGS,
   "GetDenominatorWeight(self, a_which:int) -> float\nC++: double GetDenominatorWeight(int a_which)\n\n"},
  {"GetForwardNumeratorWeight", PyvtkDSPFilterDefinition_GetForwardNumeratorWeight, METH_VARARGS,
   "GetForwardNumeratorWeight(self, a_which:int) -> float\nC++: double GetForwardNumeratorWeight(int a_which)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDSPFilterDefinition_Doc =
  "vtkDSPFilterDefinition - used by the Exodus readers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkDSPFilterDefinition is used by vtkExodusReader, vtkExodusIIReader\n"
  "and vtkPExodusReader to do temporal smoothing of data\n"
  "@sa\n"
  "vtkDSPFilterGroup vtkExodusReader vtkExodusIIReader vtkPExodusReader\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDSPFilterDefinition_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersHybrid.vtkDSPFilterDefinition", // tp_name
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
  PyvtkDSPFilterDefinition_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDSPFilterDefinition_StaticNew()
{
  return vtkDSPFilterDefinition::New();
}

PyObject *PyvtkDSPFilterDefinition_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDSPFilterDefinition_Type, PyvtkDSPFilterDefinition_Methods,
    "vtkDSPFilterDefinition",
 &PyvtkDSPFilterDefinition_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDSPFilterDefinition(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDSPFilterDefinition_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDSPFilterDefinition", o) != 0)
  {
    Py_DECREF(o);
  }

}

