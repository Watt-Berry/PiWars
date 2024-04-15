// python wrapper for vtkXYPlotActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkXYPlotActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkXYPlotActor(PyObject *dict); }
extern "C" { PyObject *PyvtkXYPlotActor_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXYPlotActor_Alignment_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkXYPlotActor.Alignment", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkXYPlotActor_Alignment_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkXYPlotActor_Alignment_Type, static_cast<int>(val));
}


static PyObject *
PyvtkXYPlotActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkXYPlotActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkXYPlotActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkXYPlotActor *tempr = vtkXYPlotActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkXYPlotActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkXYPlotActor::NewInstance());

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
PyvtkXYPlotActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkXYPlotActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkXYPlotActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataSetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddDataSetInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::AddDataSetInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->AddDataSetInput(temp0);
    }
    else
    {
      op->vtkXYPlotActor::AddDataSetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_AddDataSetInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_AddDataSetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddDataSetInput");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddDataSetInputConnection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::AddDataSetInputConnection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddDataSetInputConnection(temp0);
    }
    else
    {
      op->vtkXYPlotActor::AddDataSetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_AddDataSetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_AddDataSetInputConnection_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_AddDataSetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddDataSetInputConnection");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSetInput(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataSetInput(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSetInput(temp0);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataSetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInput(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_RemoveDataSetInput_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_RemoveDataSetInput_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSetInput");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSetInputConnection(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataSetInputConnection(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataSetInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataSetInputConnection(temp0);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataSetInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_RemoveDataSetInputConnection(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_RemoveDataSetInputConnection_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_RemoveDataSetInputConnection_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveDataSetInputConnection");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_RemoveAllDataSetInputConnections(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllDataSetInputConnections");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllDataSetInputConnections();
    }
    else
    {
      op->vtkXYPlotActor::RemoveAllDataSetInputConnections();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPointComponent(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPointComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPointComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPointComponent(temp0) :
      op->vtkXYPlotActor::GetPointComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXValues(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetXValues(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXValuesMinValue() :
      op->vtkXYPlotActor::GetXValuesMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXValuesMaxValue() :
      op->vtkXYPlotActor::GetXValuesMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValues(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXValues() :
      op->vtkXYPlotActor::GetXValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXValuesToIndex();
    }
    else
    {
      op->vtkXYPlotActor::SetXValuesToIndex();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXValuesToArcLength();
    }
    else
    {
      op->vtkXYPlotActor::SetXValuesToArcLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToNormalizedArcLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToNormalizedArcLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXValuesToNormalizedArcLength();
    }
    else
    {
      op->vtkXYPlotActor::SetXValuesToNormalizedArcLength();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXValuesToValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXValuesToValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXValuesToValue();
    }
    else
    {
      op->vtkXYPlotActor::SetXValuesToValue();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXValuesAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXValuesAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetXValuesAsString() :
      op->vtkXYPlotActor::GetXValuesAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->AddDataObjectInput(temp0);
    }
    else
    {
      op->vtkXYPlotActor::AddDataObjectInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddDataObjectInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddDataObjectInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->AddDataObjectInputConnection(temp0);
    }
    else
    {
      op->vtkXYPlotActor::AddDataObjectInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataObjectInputConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataObjectInputConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataObjectInputConnection(temp0);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataObjectInputConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveDataObjectInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveDataObjectInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->RemoveDataObjectInput(temp0);
    }
    else
    {
      op->vtkXYPlotActor::RemoveDataObjectInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectPlotMode(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetDataObjectPlotMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeMinValue() :
      op->vtkXYPlotActor::GetDataObjectPlotModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeMaxValue() :
      op->vtkXYPlotActor::GetDataObjectPlotModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectPlotMode() :
      op->vtkXYPlotActor::GetDataObjectPlotMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToRows(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToRows");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectPlotModeToRows();
    }
    else
    {
      op->vtkXYPlotActor::SetDataObjectPlotModeToRows();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectPlotModeToColumns(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectPlotModeToColumns");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectPlotModeToColumns();
    }
    else
    {
      op->vtkXYPlotActor::SetDataObjectPlotModeToColumns();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectPlotModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectPlotModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDataObjectPlotModeAsString() :
      op->vtkXYPlotActor::GetDataObjectPlotModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectXComponent(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetDataObjectXComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectXComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectXComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectXComponent(temp0) :
      op->vtkXYPlotActor::GetDataObjectXComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetDataObjectYComponent(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetDataObjectYComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetDataObjectYComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectYComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectYComponent(temp0) :
      op->vtkXYPlotActor::GetDataObjectYComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPlotColor(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    if (ap.IsBound())
    {
      op->SetPlotColor(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotColor(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkXYPlotActor_SetPlotColor_s1(self, args);
    case 2:
      return PyvtkXYPlotActor_SetPlotColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotColor");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetPlotColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlotColor(temp0) :
      op->vtkXYPlotActor::GetPlotColor(temp0));

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetPlotSymbol(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotSymbol(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotSymbol(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotSymbol");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetPlotSymbol(temp0) :
      op->vtkXYPlotActor::GetPlotSymbol(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotLabel(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotLabel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotLabel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLabel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetPlotLabel(temp0) :
      op->vtkXYPlotActor::GetPlotLabel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotCurvePoints() :
      op->vtkXYPlotActor::GetPlotCurvePoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurvePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurvePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotCurvePoints(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotCurvePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotCurvePointsOn();
    }
    else
    {
      op->vtkXYPlotActor::PlotCurvePointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurvePointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurvePointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotCurvePointsOff();
    }
    else
    {
      op->vtkXYPlotActor::PlotCurvePointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotCurveLines() :
      op->vtkXYPlotActor::GetPlotCurveLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCurveLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCurveLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotCurveLines(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotCurveLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotCurveLinesOn();
    }
    else
    {
      op->vtkXYPlotActor::PlotCurveLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotCurveLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotCurveLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotCurveLinesOff();
    }
    else
    {
      op->vtkXYPlotActor::PlotCurveLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotLines(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotLines(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotLines(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotLines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetPlotLines_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotLines_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotLines");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetPlotLines_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotLines(temp0) :
      op->vtkXYPlotActor::GetPlotLines(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotLines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotLines() :
      op->vtkXYPlotActor::GetPlotLines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotLines(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkXYPlotActor_GetPlotLines_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotLines_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotLines");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotPoints(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotPoints(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotPoints(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetPlotPoints_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotPoints");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotPoints(temp0) :
      op->vtkXYPlotActor::GetPlotPoints(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPlotPoints() :
      op->vtkXYPlotActor::GetPlotPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_GetPlotPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkXYPlotActor_GetPlotPoints_s1(self, args);
    case 0:
      return PyvtkXYPlotActor_GetPlotPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPlotPoints");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_SetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExchangeAxes(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetExchangeAxes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetExchangeAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExchangeAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetExchangeAxes() :
      op->vtkXYPlotActor::GetExchangeAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExchangeAxesOn();
    }
    else
    {
      op->vtkXYPlotActor::ExchangeAxesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ExchangeAxesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExchangeAxesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExchangeAxesOff();
    }
    else
    {
      op->vtkXYPlotActor::ExchangeAxesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseXAxis(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetReverseXAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseXAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseXAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseXAxis() :
      op->vtkXYPlotActor::GetReverseXAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseXAxisOn();
    }
    else
    {
      op->vtkXYPlotActor::ReverseXAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseXAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseXAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseXAxisOff();
    }
    else
    {
      op->vtkXYPlotActor::ReverseXAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReverseYAxis(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetReverseYAxis(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReverseYAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReverseYAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetReverseYAxis() :
      op->vtkXYPlotActor::GetReverseYAxis());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseYAxisOn();
    }
    else
    {
      op->vtkXYPlotActor::ReverseYAxisOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReverseYAxisOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReverseYAxisOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ReverseYAxisOff();
    }
    else
    {
      op->vtkXYPlotActor::ReverseYAxisOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegendActor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendActor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLegendBoxActor *tempr = (ap.IsBound() ?
      op->GetLegendActor() :
      op->vtkXYPlotActor::GetLegendActor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGlyphSource2D *tempr = (ap.IsBound() ?
      op->GetGlyphSource() :
      op->vtkXYPlotActor::GetGlyphSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitle(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkXYPlotActor::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXTitle(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetXTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXTitle() :
      op->vtkXYPlotActor::GetXTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitle(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetYTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYTitle() :
      op->vtkXYPlotActor::GetYTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetXAxisActor2D() :
      op->vtkXYPlotActor::GetXAxisActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYAxisActor2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYAxisActor2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAxisActor2D *tempr = (ap.IsBound() ?
      op->GetYAxisActor2D() :
      op->vtkXYPlotActor::GetYAxisActor2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetXRange(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetXRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetXRange(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetXRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetXRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetXRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetXRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetXRange");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetXRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetXRange() :
      op->vtkXYPlotActor::GetXRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetYRange(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetYRange(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetYRange(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetYRange(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetYRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetYRange_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetYRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetYRange");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetYRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetYRange() :
      op->vtkXYPlotActor::GetYRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotRange(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetPlotRange(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotRange(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXLabels(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetNumberOfXLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabelsMinValue() :
      op->vtkXYPlotActor::GetNumberOfXLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabelsMaxValue() :
      op->vtkXYPlotActor::GetNumberOfXLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXLabels() :
      op->vtkXYPlotActor::GetNumberOfXLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYLabels(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetNumberOfYLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabelsMinValue() :
      op->vtkXYPlotActor::GetNumberOfYLabelsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabelsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabelsMaxValue() :
      op->vtkXYPlotActor::GetNumberOfYLabelsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYLabels() :
      op->vtkXYPlotActor::GetNumberOfYLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLabels(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetNumberOfLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustXLabels(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAdjustXLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustXLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustXLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustXLabels() :
      op->vtkXYPlotActor::GetAdjustXLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustYLabels(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAdjustYLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustYLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustYLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustYLabels() :
      op->vtkXYPlotActor::GetAdjustYLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfXMinorTicks(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetNumberOfXMinorTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfXMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfXMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfXMinorTicks() :
      op->vtkXYPlotActor::GetNumberOfXMinorTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfYMinorTicks(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetNumberOfYMinorTicks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetNumberOfYMinorTicks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfYMinorTicks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfYMinorTicks() :
      op->vtkXYPlotActor::GetNumberOfYMinorTicks());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegend(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkXYPlotActor::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendOn();
    }
    else
    {
      op->vtkXYPlotActor::LegendOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LegendOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LegendOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LegendOff();
    }
    else
    {
      op->vtkXYPlotActor::LegendOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetTitlePosition(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetTitlePosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetTitlePosition(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetTitlePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetTitlePosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetTitlePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetTitlePosition");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetTitlePosition() :
      op->vtkXYPlotActor::GetTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustTitlePosition(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAdjustTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustTitlePosition() :
      op->vtkXYPlotActor::GetAdjustTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustTitlePositionOn();
    }
    else
    {
      op->vtkXYPlotActor::AdjustTitlePositionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AdjustTitlePositionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AdjustTitlePositionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->AdjustTitlePositionOff();
    }
    else
    {
      op->vtkXYPlotActor::AdjustTitlePositionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAdjustTitlePositionMode(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAdjustTitlePositionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAdjustTitlePositionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAdjustTitlePositionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetAdjustTitlePositionMode() :
      op->vtkXYPlotActor::GetAdjustTitlePositionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLegendPosition(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendPosition(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLegendPosition(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetLegendPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLegendPosition() :
      op->vtkXYPlotActor::GetLegendPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetLegendPosition2(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendPosition2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLegendPosition2(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendPosition2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetLegendPosition2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetLegendPosition2_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetLegendPosition2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLegendPosition2");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetLegendPosition2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegendPosition2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLegendPosition2() :
      op->vtkXYPlotActor::GetLegendPosition2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetTitleTextProperty(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleTextProperty() :
      op->vtkXYPlotActor::GetTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleTextProperty(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisTitleTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisTitleTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisTitleTextProperty() :
      op->vtkXYPlotActor::GetAxisTitleTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkTextProperty *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTextProperty"))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelTextProperty(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelTextProperty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetAxisLabelTextProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelTextProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetAxisLabelTextProperty() :
      op->vtkXYPlotActor::GetAxisLabelTextProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLogx(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLogx(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLogx(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLogx");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLogx() :
      op->vtkXYPlotActor::GetLogx());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogxOn();
    }
    else
    {
      op->vtkXYPlotActor::LogxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_LogxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LogxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->LogxOff();
    }
    else
    {
      op->vtkXYPlotActor::LogxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelFormat(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetLabelFormat() :
      op->vtkXYPlotActor::GetLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXLabelFormat(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetXLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetXLabelFormat() :
      op->vtkXYPlotActor::GetXLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYLabelFormat(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetYLabelFormat(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYLabelFormat(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYLabelFormat");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetYLabelFormat() :
      op->vtkXYPlotActor::GetYLabelFormat());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorder(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderMinValue() :
      op->vtkXYPlotActor::GetBorderMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorderMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorderMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorderMaxValue() :
      op->vtkXYPlotActor::GetBorderMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetBorder() :
      op->vtkXYPlotActor::GetBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotPointsOn();
    }
    else
    {
      op->vtkXYPlotActor::PlotPointsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotPointsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotPointsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotPointsOff();
    }
    else
    {
      op->vtkXYPlotActor::PlotPointsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotLinesOn();
    }
    else
    {
      op->vtkXYPlotActor::PlotLinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotLinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotLinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PlotLinesOff();
    }
    else
    {
      op->vtkXYPlotActor::PlotLinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphSize(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetGlyphSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSizeMinValue() :
      op->vtkXYPlotActor::GetGlyphSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSizeMaxValue() :
      op->vtkXYPlotActor::GetGlyphSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetGlyphSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetGlyphSize() :
      op->vtkXYPlotActor::GetGlyphSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->ViewportToPlotCoordinate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ViewportToPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->ViewportToPlotCoordinate(temp0);
    }
    else
    {
      op->vtkXYPlotActor::ViewportToPlotCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_ViewportToPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_ViewportToPlotCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ViewportToPlotCoordinate");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotCoordinate(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPlotCoordinate(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetPlotCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetPlotCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetPlotCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPlotCoordinate");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetPlotCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlotCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetPlotCoordinate() :
      op->vtkXYPlotActor::GetPlotCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->PlotToViewportCoordinate(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PlotToViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    if (ap.IsBound())
    {
      op->PlotToViewportCoordinate(temp0);
    }
    else
    {
      op->vtkXYPlotActor::PlotToViewportCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_PlotToViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_PlotToViewportCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PlotToViewportCoordinate");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetViewportCoordinate(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetViewportCoordinate(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetViewportCoordinate(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkXYPlotActor_SetViewportCoordinate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkXYPlotActor_SetViewportCoordinate_s1(self, args);
    case 1:
      return PyvtkXYPlotActor_SetViewportCoordinate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetViewportCoordinate");
  return nullptr;
}


static PyObject *
PyvtkXYPlotActor_GetViewportCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetViewportCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetViewportCoordinate() :
      op->vtkXYPlotActor::GetViewportCoordinate());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_IsInPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsInPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkViewport") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    int tempr = (ap.IsBound() ?
      op->IsInPlot(temp0, temp1, temp2) :
      op->vtkXYPlotActor::IsInPlot(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChartBox(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetChartBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChartBox() :
      op->vtkXYPlotActor::GetChartBox());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChartBoxOn();
    }
    else
    {
      op->vtkXYPlotActor::ChartBoxOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBoxOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBoxOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChartBoxOff();
    }
    else
    {
      op->vtkXYPlotActor::ChartBoxOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChartBorder(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetChartBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetChartBorder() :
      op->vtkXYPlotActor::GetChartBorder());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChartBorderOn();
    }
    else
    {
      op->vtkXYPlotActor::ChartBorderOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ChartBorderOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ChartBorderOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ChartBorderOff();
    }
    else
    {
      op->vtkXYPlotActor::ChartBorderOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetChartBoxProperty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartBoxProperty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProperty2D *tempr = (ap.IsBound() ?
      op->GetChartBoxProperty() :
      op->vtkXYPlotActor::GetChartBoxProperty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowReferenceXLine(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetShowReferenceXLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceXLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceXLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowReferenceXLine() :
      op->vtkXYPlotActor::GetShowReferenceXLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReferenceXLineOn();
    }
    else
    {
      op->vtkXYPlotActor::ShowReferenceXLineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceXLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceXLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReferenceXLineOff();
    }
    else
    {
      op->vtkXYPlotActor::ShowReferenceXLineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceXValue(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetReferenceXValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceXValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceXValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReferenceXValue() :
      op->vtkXYPlotActor::GetReferenceXValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowReferenceYLine(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetShowReferenceYLine(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetShowReferenceYLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowReferenceYLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetShowReferenceYLine() :
      op->vtkXYPlotActor::GetShowReferenceYLine());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReferenceYLineOn();
    }
    else
    {
      op->vtkXYPlotActor::ShowReferenceYLineOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ShowReferenceYLineOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShowReferenceYLineOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ShowReferenceYLineOff();
    }
    else
    {
      op->vtkXYPlotActor::ShowReferenceYLineOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetReferenceYValue(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetReferenceYValue(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetReferenceYValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferenceYValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetReferenceYValue() :
      op->vtkXYPlotActor::GetReferenceYValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkXYPlotActor::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkXYPlotActor::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderOverlay(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOverlay");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOverlay(temp0) :
      op->vtkXYPlotActor::RenderOverlay(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderTranslucentPolygonalGeometry(temp0) :
      op->vtkXYPlotActor::RenderTranslucentPolygonalGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_HasTranslucentPolygonalGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasTranslucentPolygonalGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->HasTranslucentPolygonalGeometry() :
      op->vtkXYPlotActor::HasTranslucentPolygonalGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkXYPlotActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXTitlePosition(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetXTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetXTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXTitlePosition() :
      op->vtkXYPlotActor::GetXTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYTitlePosition(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetYTitlePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_GetYTitlePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYTitlePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYTitlePosition() :
      op->vtkXYPlotActor::GetYTitlePosition());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTitlePositionToTop();
    }
    else
    {
      op->vtkXYPlotActor::SetYTitlePositionToTop();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToHCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToHCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTitlePositionToHCenter();
    }
    else
    {
      op->vtkXYPlotActor::SetYTitlePositionToHCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYTitlePositionToVCenter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYTitlePositionToVCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetYTitlePositionToVCenter();
    }
    else
    {
      op->vtkXYPlotActor::SetYTitlePositionToVCenter();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetPlotGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPlotGlyphType(temp0, temp1);
    }
    else
    {
      op->vtkXYPlotActor::SetPlotGlyphType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLineWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineWidth(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLineWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_AddUserCurvesPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddUserCurvesPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->AddUserCurvesPoint(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::AddUserCurvesPoint(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_RemoveAllActiveCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllActiveCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllActiveCurves();
    }
    else
    {
      op->vtkXYPlotActor::RemoveAllActiveCurves();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendBorder(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBox(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBox");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendBox(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendBox(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendUseBackground(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendUseBackground");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLegendUseBackground(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendUseBackground(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetLegendBackgroundColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLegendBackgroundColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetLegendBackgroundColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetLegendBackgroundColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontFamily(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleBold(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleItalic(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleShadow(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleFontSize(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetTitleVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitleVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTitleVerticalJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetTitleVerticalJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetXAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetXAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetXAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetYAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetYAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetYAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetAxisTitleColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontFamily(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleBold(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleItalic(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleShadow(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleFontSize(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisTitleVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitleVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitleVerticalJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisTitleVerticalJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

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
      op->SetAxisLabelColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelFontFamily(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontFamily");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontFamily(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelFontFamily(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelBold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelBold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelBold(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelBold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelItalic(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelItalic");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelItalic(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelItalic(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelShadow(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelShadow");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelShadow(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelShadow(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelFontSize(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkXYPlotActor_SetAxisLabelVerticalJustification(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelVerticalJustification");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkXYPlotActor *op = static_cast<vtkXYPlotActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelVerticalJustification(temp0);
    }
    else
    {
      op->vtkXYPlotActor::SetAxisLabelVerticalJustification(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkXYPlotActor_Methods[] = {
  {"IsTypeOf", PyvtkXYPlotActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkXYPlotActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkXYPlotActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkXYPlotActor\nC++: static vtkXYPlotActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkXYPlotActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkXYPlotActor\nC++: vtkXYPlotActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkXYPlotActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkXYPlotActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"AddDataSetInput", PyvtkXYPlotActor_AddDataSetInput, METH_VARARGS,
   "AddDataSetInput(self, ds:vtkDataSet, arrayName:str, component:int)\n     -> None\nC++: void AddDataSetInput(vtkDataSet *ds, const char *arrayName,\n    int component)\nAddDataSetInput(self, ds:vtkDataSet) -> None\nC++: void AddDataSetInput(vtkDataSet *ds)\n\nAdd a dataset to the list of data to append. The array name\nspecifies which point array to plot. The array must be a\nvtkDataArray subclass, i.e. a numeric array. If the array name is\nNULL, then the default scalars are used.  The array can have\nmultiple components, but only the first component is plotted.\nNote that AddInputDataSet() does not setup a pipeline connection\nwhereas AddInputConnection() does.\n"},
  {"AddDataSetInputConnection", PyvtkXYPlotActor_AddDataSetInputConnection, METH_VARARGS,
   "AddDataSetInputConnection(self, in_:vtkAlgorithmOutput,\n    arrayName:str, component:int) -> None\nC++: void AddDataSetInputConnection(vtkAlgorithmOutput *in,\n    const char *arrayName, int component)\nAddDataSetInputConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void AddDataSetInputConnection(vtkAlgorithmOutput *in)\n\n"},
  {"RemoveDataSetInput", PyvtkXYPlotActor_RemoveDataSetInput, METH_VARARGS,
   "RemoveDataSetInput(self, ds:vtkDataSet, arrayName:str,\n    component:int) -> None\nC++: void RemoveDataSetInput(vtkDataSet *ds,\n    const char *arrayName, int component)\nRemoveDataSetInput(self, ds:vtkDataSet) -> None\nC++: void RemoveDataSetInput(vtkDataSet *ds)\n\nRemove a dataset from the list of data to append.\n"},
  {"RemoveDataSetInputConnection", PyvtkXYPlotActor_RemoveDataSetInputConnection, METH_VARARGS,
   "RemoveDataSetInputConnection(self, in_:vtkAlgorithmOutput,\n    arrayName:str, component:int) -> None\nC++: void RemoveDataSetInputConnection(vtkAlgorithmOutput *in,\n    const char *arrayName, int component)\nRemoveDataSetInputConnection(self, in_:vtkAlgorithmOutput) -> None\nC++: void RemoveDataSetInputConnection(vtkAlgorithmOutput *in)\n\n"},
  {"RemoveAllDataSetInputConnections", PyvtkXYPlotActor_RemoveAllDataSetInputConnections, METH_VARARGS,
   "RemoveAllDataSetInputConnections(self) -> None\nC++: void RemoveAllDataSetInputConnections()\n\nThis removes all of the data set inputs, but does not change the\ndata object inputs.\n"},
  {"SetPointComponent", PyvtkXYPlotActor_SetPointComponent, METH_VARARGS,
   "SetPointComponent(self, i:int, comp:int) -> None\nC++: void SetPointComponent(int i, int comp)\n\nIf plotting points by value, which component to use to determine\nthe value. This sets a value per each input dataset (i.e., the\nith dataset).\n"},
  {"GetPointComponent", PyvtkXYPlotActor_GetPointComponent, METH_VARARGS,
   "GetPointComponent(self, i:int) -> int\nC++: int GetPointComponent(int i)\n\n"},
  {"SetXValues", PyvtkXYPlotActor_SetXValues, METH_VARARGS,
   "SetXValues(self, _arg:int) -> None\nC++: virtual void SetXValues(int _arg)\n\nSpecify how the independent (x) variable is computed from the\npoints. The independent variable can be the scalar/point index\n(i.e., point id), the accumulated arc length along the points,\nthe normalized arc length, or by component value. If plotting\ndatasets (e.g., points), the value that is used is specified by\nthe PointComponent ivar.  (Note: these methods also control how\nfield data is plotted. Field data is usually plotted by value or\nindex, if plotting length 1-dimensional length measures are\nused.)\n"},
  {"GetXValuesMinValue", PyvtkXYPlotActor_GetXValuesMinValue, METH_VARARGS,
   "GetXValuesMinValue(self) -> int\nC++: virtual int GetXValuesMinValue()\n\n"},
  {"GetXValuesMaxValue", PyvtkXYPlotActor_GetXValuesMaxValue, METH_VARARGS,
   "GetXValuesMaxValue(self) -> int\nC++: virtual int GetXValuesMaxValue()\n\n"},
  {"GetXValues", PyvtkXYPlotActor_GetXValues, METH_VARARGS,
   "GetXValues(self) -> int\nC++: virtual int GetXValues()\n\n"},
  {"SetXValuesToIndex", PyvtkXYPlotActor_SetXValuesToIndex, METH_VARARGS,
   "SetXValuesToIndex(self) -> None\nC++: void SetXValuesToIndex()\n\n"},
  {"SetXValuesToArcLength", PyvtkXYPlotActor_SetXValuesToArcLength, METH_VARARGS,
   "SetXValuesToArcLength(self) -> None\nC++: void SetXValuesToArcLength()\n\n"},
  {"SetXValuesToNormalizedArcLength", PyvtkXYPlotActor_SetXValuesToNormalizedArcLength, METH_VARARGS,
   "SetXValuesToNormalizedArcLength(self) -> None\nC++: void SetXValuesToNormalizedArcLength()\n\n"},
  {"SetXValuesToValue", PyvtkXYPlotActor_SetXValuesToValue, METH_VARARGS,
   "SetXValuesToValue(self) -> None\nC++: void SetXValuesToValue()\n\n"},
  {"GetXValuesAsString", PyvtkXYPlotActor_GetXValuesAsString, METH_VARARGS,
   "GetXValuesAsString(self) -> str\nC++: const char *GetXValuesAsString()\n\n"},
  {"AddDataObjectInput", PyvtkXYPlotActor_AddDataObjectInput, METH_VARARGS,
   "AddDataObjectInput(self, in_:vtkDataObject) -> None\nC++: void AddDataObjectInput(vtkDataObject *in)\n\nAdd a data object to the list of data to display.\n"},
  {"AddDataObjectInputConnection", PyvtkXYPlotActor_AddDataObjectInputConnection, METH_VARARGS,
   "AddDataObjectInputConnection(self, alg:vtkAlgorithmOutput) -> None\nC++: void AddDataObjectInputConnection(vtkAlgorithmOutput *alg)\n\n"},
  {"RemoveDataObjectInputConnection", PyvtkXYPlotActor_RemoveDataObjectInputConnection, METH_VARARGS,
   "RemoveDataObjectInputConnection(self, aout:vtkAlgorithmOutput)\n    -> None\nC++: void RemoveDataObjectInputConnection(\n    vtkAlgorithmOutput *aout)\n\nRemove a dataset from the list of data to display.\n"},
  {"RemoveDataObjectInput", PyvtkXYPlotActor_RemoveDataObjectInput, METH_VARARGS,
   "RemoveDataObjectInput(self, in_:vtkDataObject) -> None\nC++: void RemoveDataObjectInput(vtkDataObject *in)\n\n"},
  {"SetDataObjectPlotMode", PyvtkXYPlotActor_SetDataObjectPlotMode, METH_VARARGS,
   "SetDataObjectPlotMode(self, _arg:int) -> None\nC++: virtual void SetDataObjectPlotMode(int _arg)\n\nIndicate whether to plot rows or columns. If plotting rows, then\nthe dependent variables is taken from a specified row, versus\nrows (y).\n"},
  {"GetDataObjectPlotModeMinValue", PyvtkXYPlotActor_GetDataObjectPlotModeMinValue, METH_VARARGS,
   "GetDataObjectPlotModeMinValue(self) -> int\nC++: virtual int GetDataObjectPlotModeMinValue()\n\n"},
  {"GetDataObjectPlotModeMaxValue", PyvtkXYPlotActor_GetDataObjectPlotModeMaxValue, METH_VARARGS,
   "GetDataObjectPlotModeMaxValue(self) -> int\nC++: virtual int GetDataObjectPlotModeMaxValue()\n\n"},
  {"GetDataObjectPlotMode", PyvtkXYPlotActor_GetDataObjectPlotMode, METH_VARARGS,
   "GetDataObjectPlotMode(self) -> int\nC++: virtual int GetDataObjectPlotMode()\n\n"},
  {"SetDataObjectPlotModeToRows", PyvtkXYPlotActor_SetDataObjectPlotModeToRows, METH_VARARGS,
   "SetDataObjectPlotModeToRows(self) -> None\nC++: void SetDataObjectPlotModeToRows()\n\n"},
  {"SetDataObjectPlotModeToColumns", PyvtkXYPlotActor_SetDataObjectPlotModeToColumns, METH_VARARGS,
   "SetDataObjectPlotModeToColumns(self) -> None\nC++: void SetDataObjectPlotModeToColumns()\n\n"},
  {"GetDataObjectPlotModeAsString", PyvtkXYPlotActor_GetDataObjectPlotModeAsString, METH_VARARGS,
   "GetDataObjectPlotModeAsString(self) -> str\nC++: const char *GetDataObjectPlotModeAsString()\n\n"},
  {"SetDataObjectXComponent", PyvtkXYPlotActor_SetDataObjectXComponent, METH_VARARGS,
   "SetDataObjectXComponent(self, i:int, comp:int) -> None\nC++: void SetDataObjectXComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\nindependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectXComponent is the row\nnumber; otherwise it's the column number.\n"},
  {"GetDataObjectXComponent", PyvtkXYPlotActor_GetDataObjectXComponent, METH_VARARGS,
   "GetDataObjectXComponent(self, i:int) -> int\nC++: int GetDataObjectXComponent(int i)\n\n"},
  {"SetDataObjectYComponent", PyvtkXYPlotActor_SetDataObjectYComponent, METH_VARARGS,
   "SetDataObjectYComponent(self, i:int, comp:int) -> None\nC++: void SetDataObjectYComponent(int i, int comp)\n\nSpecify which component of the input data object to use as the\ndependent variable for the ith input data object. (This ivar is\nignored if plotting the index.) Note that the value is\ninterpreted differently depending on DataObjectPlotMode. If the\nmode is Rows, then the value of DataObjectYComponent is the row\nnumber; otherwise it's the column number.\n"},
  {"GetDataObjectYComponent", PyvtkXYPlotActor_GetDataObjectYComponent, METH_VARARGS,
   "GetDataObjectYComponent(self, i:int) -> int\nC++: int GetDataObjectYComponent(int i)\n\n"},
  {"SetPlotColor", PyvtkXYPlotActor_SetPlotColor, METH_VARARGS,
   "SetPlotColor(self, i:int, r:float, g:float, b:float) -> None\nC++: void SetPlotColor(int i, double r, double g, double b)\nSetPlotColor(self, i:int, color:(float, float, float)) -> None\nC++: void SetPlotColor(int i, const double color[3])\n\n"},
  {"GetPlotColor", PyvtkXYPlotActor_GetPlotColor, METH_VARARGS,
   "GetPlotColor(self, i:int) -> (float, float, float)\nC++: double *GetPlotColor(int i)\n\n"},
  {"SetPlotSymbol", PyvtkXYPlotActor_SetPlotSymbol, METH_VARARGS,
   "SetPlotSymbol(self, i:int, input:vtkPolyData) -> None\nC++: void SetPlotSymbol(int i, vtkPolyData *input)\n\n"},
  {"GetPlotSymbol", PyvtkXYPlotActor_GetPlotSymbol, METH_VARARGS,
   "GetPlotSymbol(self, i:int) -> vtkPolyData\nC++: vtkPolyData *GetPlotSymbol(int i)\n\n"},
  {"SetPlotLabel", PyvtkXYPlotActor_SetPlotLabel, METH_VARARGS,
   "SetPlotLabel(self, i:int, label:str) -> None\nC++: void SetPlotLabel(int i, const char *label)\n\n"},
  {"GetPlotLabel", PyvtkXYPlotActor_GetPlotLabel, METH_VARARGS,
   "GetPlotLabel(self, i:int) -> str\nC++: const char *GetPlotLabel(int i)\n\n"},
  {"GetPlotCurvePoints", PyvtkXYPlotActor_GetPlotCurvePoints, METH_VARARGS,
   "GetPlotCurvePoints(self) -> int\nC++: virtual vtkTypeBool GetPlotCurvePoints()\n\n"},
  {"SetPlotCurvePoints", PyvtkXYPlotActor_SetPlotCurvePoints, METH_VARARGS,
   "SetPlotCurvePoints(self, _arg:int) -> None\nC++: virtual void SetPlotCurvePoints(vtkTypeBool _arg)\n\n"},
  {"PlotCurvePointsOn", PyvtkXYPlotActor_PlotCurvePointsOn, METH_VARARGS,
   "PlotCurvePointsOn(self) -> None\nC++: virtual void PlotCurvePointsOn()\n\n"},
  {"PlotCurvePointsOff", PyvtkXYPlotActor_PlotCurvePointsOff, METH_VARARGS,
   "PlotCurvePointsOff(self) -> None\nC++: virtual void PlotCurvePointsOff()\n\n"},
  {"GetPlotCurveLines", PyvtkXYPlotActor_GetPlotCurveLines, METH_VARARGS,
   "GetPlotCurveLines(self) -> int\nC++: virtual vtkTypeBool GetPlotCurveLines()\n\n"},
  {"SetPlotCurveLines", PyvtkXYPlotActor_SetPlotCurveLines, METH_VARARGS,
   "SetPlotCurveLines(self, _arg:int) -> None\nC++: virtual void SetPlotCurveLines(vtkTypeBool _arg)\n\n"},
  {"PlotCurveLinesOn", PyvtkXYPlotActor_PlotCurveLinesOn, METH_VARARGS,
   "PlotCurveLinesOn(self) -> None\nC++: virtual void PlotCurveLinesOn()\n\n"},
  {"PlotCurveLinesOff", PyvtkXYPlotActor_PlotCurveLinesOff, METH_VARARGS,
   "PlotCurveLinesOff(self) -> None\nC++: virtual void PlotCurveLinesOff()\n\n"},
  {"SetPlotLines", PyvtkXYPlotActor_SetPlotLines, METH_VARARGS,
   "SetPlotLines(self, i:int, __b:int) -> None\nC++: void SetPlotLines(int i, int)\nSetPlotLines(self, _arg:int) -> None\nC++: virtual void SetPlotLines(vtkTypeBool _arg)\n\n"},
  {"GetPlotLines", PyvtkXYPlotActor_GetPlotLines, METH_VARARGS,
   "GetPlotLines(self, i:int) -> int\nC++: int GetPlotLines(int i)\nGetPlotLines(self) -> int\nC++: virtual vtkTypeBool GetPlotLines()\n\n"},
  {"SetPlotPoints", PyvtkXYPlotActor_SetPlotPoints, METH_VARARGS,
   "SetPlotPoints(self, i:int, __b:int) -> None\nC++: void SetPlotPoints(int i, int)\nSetPlotPoints(self, _arg:int) -> None\nC++: virtual void SetPlotPoints(vtkTypeBool _arg)\n\n"},
  {"GetPlotPoints", PyvtkXYPlotActor_GetPlotPoints, METH_VARARGS,
   "GetPlotPoints(self, i:int) -> int\nC++: int GetPlotPoints(int i)\nGetPlotPoints(self) -> int\nC++: virtual vtkTypeBool GetPlotPoints()\n\n"},
  {"SetExchangeAxes", PyvtkXYPlotActor_SetExchangeAxes, METH_VARARGS,
   "SetExchangeAxes(self, _arg:int) -> None\nC++: virtual void SetExchangeAxes(vtkTypeBool _arg)\n\nEnable/Disable exchange of the x-y axes (i.e., what was x becomes\ny, and vice-versa). Exchanging axes affects the labeling as well.\n"},
  {"GetExchangeAxes", PyvtkXYPlotActor_GetExchangeAxes, METH_VARARGS,
   "GetExchangeAxes(self) -> int\nC++: virtual vtkTypeBool GetExchangeAxes()\n\n"},
  {"ExchangeAxesOn", PyvtkXYPlotActor_ExchangeAxesOn, METH_VARARGS,
   "ExchangeAxesOn(self) -> None\nC++: virtual void ExchangeAxesOn()\n\n"},
  {"ExchangeAxesOff", PyvtkXYPlotActor_ExchangeAxesOff, METH_VARARGS,
   "ExchangeAxesOff(self) -> None\nC++: virtual void ExchangeAxesOff()\n\n"},
  {"SetReverseXAxis", PyvtkXYPlotActor_SetReverseXAxis, METH_VARARGS,
   "SetReverseXAxis(self, _arg:int) -> None\nC++: virtual void SetReverseXAxis(vtkTypeBool _arg)\n\nNormally the x-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the x-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\nx-axis even if ExchangeAxes is set.\n"},
  {"GetReverseXAxis", PyvtkXYPlotActor_GetReverseXAxis, METH_VARARGS,
   "GetReverseXAxis(self) -> int\nC++: virtual vtkTypeBool GetReverseXAxis()\n\n"},
  {"ReverseXAxisOn", PyvtkXYPlotActor_ReverseXAxisOn, METH_VARARGS,
   "ReverseXAxisOn(self) -> None\nC++: virtual void ReverseXAxisOn()\n\n"},
  {"ReverseXAxisOff", PyvtkXYPlotActor_ReverseXAxisOff, METH_VARARGS,
   "ReverseXAxisOff(self) -> None\nC++: virtual void ReverseXAxisOff()\n\n"},
  {"SetReverseYAxis", PyvtkXYPlotActor_SetReverseYAxis, METH_VARARGS,
   "SetReverseYAxis(self, _arg:int) -> None\nC++: virtual void SetReverseYAxis(vtkTypeBool _arg)\n\nNormally the y-axis is plotted from minimum to maximum. Setting\nthis instance variable causes the y-axis to be plotted from\nmaximum to minimum. Note that boolean always applies to the\ny-axis even if ExchangeAxes is set.\n"},
  {"GetReverseYAxis", PyvtkXYPlotActor_GetReverseYAxis, METH_VARARGS,
   "GetReverseYAxis(self) -> int\nC++: virtual vtkTypeBool GetReverseYAxis()\n\n"},
  {"ReverseYAxisOn", PyvtkXYPlotActor_ReverseYAxisOn, METH_VARARGS,
   "ReverseYAxisOn(self) -> None\nC++: virtual void ReverseYAxisOn()\n\n"},
  {"ReverseYAxisOff", PyvtkXYPlotActor_ReverseYAxisOff, METH_VARARGS,
   "ReverseYAxisOff(self) -> None\nC++: virtual void ReverseYAxisOff()\n\n"},
  {"GetLegendActor", PyvtkXYPlotActor_GetLegendActor, METH_VARARGS,
   "GetLegendActor(self) -> vtkLegendBoxActor\nC++: virtual vtkLegendBoxActor *GetLegendActor()\n\nRetrieve handles to the legend box and glyph source. This is\nuseful if you would like to change the default behavior of the\nlegend box or glyph source. For example, the default glyph can be\nchanged from a line to a vertex plus line, etc.)\n"},
  {"GetGlyphSource", PyvtkXYPlotActor_GetGlyphSource, METH_VARARGS,
   "GetGlyphSource(self) -> vtkGlyphSource2D\nC++: virtual vtkGlyphSource2D *GetGlyphSource()\n\n"},
  {"SetTitle", PyvtkXYPlotActor_SetTitle, METH_VARARGS,
   "SetTitle(self, _arg:str) -> None\nC++: virtual void SetTitle(const char *_arg)\n\nSet/Get the title of the x-y plot.\n"},
  {"GetTitle", PyvtkXYPlotActor_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual char *GetTitle()\n\n"},
  {"SetXTitle", PyvtkXYPlotActor_SetXTitle, METH_VARARGS,
   "SetXTitle(self, _arg:str) -> None\nC++: virtual void SetXTitle(const char *_arg)\n\nSet/Get the title of the x axis\n"},
  {"GetXTitle", PyvtkXYPlotActor_GetXTitle, METH_VARARGS,
   "GetXTitle(self) -> str\nC++: virtual char *GetXTitle()\n\n"},
  {"SetYTitle", PyvtkXYPlotActor_SetYTitle, METH_VARARGS,
   "SetYTitle(self, __a:str) -> None\nC++: virtual void SetYTitle(const char *)\n\nSet/Get the title of the y axis\n"},
  {"GetYTitle", PyvtkXYPlotActor_GetYTitle, METH_VARARGS,
   "GetYTitle(self) -> str\nC++: char *GetYTitle()\n\n"},
  {"GetXAxisActor2D", PyvtkXYPlotActor_GetXAxisActor2D, METH_VARARGS,
   "GetXAxisActor2D(self) -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetXAxisActor2D()\n\nRetrieve handles to the X and Y axis (so that you can set their\ntext properties for example)\n"},
  {"GetYAxisActor2D", PyvtkXYPlotActor_GetYAxisActor2D, METH_VARARGS,
   "GetYAxisActor2D(self) -> vtkAxisActor2D\nC++: vtkAxisActor2D *GetYAxisActor2D()\n\n"},
  {"SetXRange", PyvtkXYPlotActor_SetXRange, METH_VARARGS,
   "SetXRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetXRange(double _arg1, double _arg2)\nSetXRange(self, _arg:(float, float)) -> None\nC++: void SetXRange(const double _arg[2])\n\nSet the plot range (range of independent and dependent variables)\nto plot. Data outside of the range will be clipped. If the plot\nrange of either the x or y variables is set to (v1,v2), where v1\n== v2, then the range will be computed automatically. Note that\nthe x-range values should be consistent with the way the\nindependent variable is created (via INDEX, DISTANCE, or\nARC_LENGTH).\n"},
  {"GetXRange", PyvtkXYPlotActor_GetXRange, METH_VARARGS,
   "GetXRange(self) -> (float, float)\nC++: virtual double *GetXRange()\n\n"},
  {"SetYRange", PyvtkXYPlotActor_SetYRange, METH_VARARGS,
   "SetYRange(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetYRange(double _arg1, double _arg2)\nSetYRange(self, _arg:(float, float)) -> None\nC++: void SetYRange(const double _arg[2])\n\n"},
  {"GetYRange", PyvtkXYPlotActor_GetYRange, METH_VARARGS,
   "GetYRange(self) -> (float, float)\nC++: virtual double *GetYRange()\n\n"},
  {"SetPlotRange", PyvtkXYPlotActor_SetPlotRange, METH_VARARGS,
   "SetPlotRange(self, xmin:float, ymin:float, xmax:float, ymax:float)\n     -> None\nC++: void SetPlotRange(double xmin, double ymin, double xmax,\n    double ymax)\n\n"},
  {"SetNumberOfXLabels", PyvtkXYPlotActor_SetNumberOfXLabels, METH_VARARGS,
   "SetNumberOfXLabels(self, _arg:int) -> None\nC++: virtual void SetNumberOfXLabels(int _arg)\n\nSet/Get the number of annotation labels to show along the x and y\naxes. This values is a suggestion: the number of labels may vary\ndepending on the particulars of the data. The convenience method\nSetNumberOfLabels() sets the number of x and y labels to the same\nvalue.\n"},
  {"GetNumberOfXLabelsMinValue", PyvtkXYPlotActor_GetNumberOfXLabelsMinValue, METH_VARARGS,
   "GetNumberOfXLabelsMinValue(self) -> int\nC++: virtual int GetNumberOfXLabelsMinValue()\n\n"},
  {"GetNumberOfXLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfXLabelsMaxValue, METH_VARARGS,
   "GetNumberOfXLabelsMaxValue(self) -> int\nC++: virtual int GetNumberOfXLabelsMaxValue()\n\n"},
  {"GetNumberOfXLabels", PyvtkXYPlotActor_GetNumberOfXLabels, METH_VARARGS,
   "GetNumberOfXLabels(self) -> int\nC++: virtual int GetNumberOfXLabels()\n\n"},
  {"SetNumberOfYLabels", PyvtkXYPlotActor_SetNumberOfYLabels, METH_VARARGS,
   "SetNumberOfYLabels(self, _arg:int) -> None\nC++: virtual void SetNumberOfYLabels(int _arg)\n\n"},
  {"GetNumberOfYLabelsMinValue", PyvtkXYPlotActor_GetNumberOfYLabelsMinValue, METH_VARARGS,
   "GetNumberOfYLabelsMinValue(self) -> int\nC++: virtual int GetNumberOfYLabelsMinValue()\n\n"},
  {"GetNumberOfYLabelsMaxValue", PyvtkXYPlotActor_GetNumberOfYLabelsMaxValue, METH_VARARGS,
   "GetNumberOfYLabelsMaxValue(self) -> int\nC++: virtual int GetNumberOfYLabelsMaxValue()\n\n"},
  {"GetNumberOfYLabels", PyvtkXYPlotActor_GetNumberOfYLabels, METH_VARARGS,
   "GetNumberOfYLabels(self) -> int\nC++: virtual int GetNumberOfYLabels()\n\n"},
  {"SetNumberOfLabels", PyvtkXYPlotActor_SetNumberOfLabels, METH_VARARGS,
   "SetNumberOfLabels(self, num:int) -> None\nC++: void SetNumberOfLabels(int num)\n\n"},
  {"SetAdjustXLabels", PyvtkXYPlotActor_SetAdjustXLabels, METH_VARARGS,
   "SetAdjustXLabels(self, adjust:int) -> None\nC++: void SetAdjustXLabels(int adjust)\n\nSet/Get the flag that controls whether the labels and ticks are\nadjusted for \"nice\" numerical values to make it easier to read\nthe labels. The adjustment is based in the Range instance\nvariable. Call GetAdjustedRange and GetAdjustedNumberOfLabels to\nget the adjusted range and number of labels.\n"},
  {"GetAdjustXLabels", PyvtkXYPlotActor_GetAdjustXLabels, METH_VARARGS,
   "GetAdjustXLabels(self) -> int\nC++: virtual int GetAdjustXLabels()\n\n"},
  {"SetAdjustYLabels", PyvtkXYPlotActor_SetAdjustYLabels, METH_VARARGS,
   "SetAdjustYLabels(self, adjust:int) -> None\nC++: void SetAdjustYLabels(int adjust)\n\n"},
  {"GetAdjustYLabels", PyvtkXYPlotActor_GetAdjustYLabels, METH_VARARGS,
   "GetAdjustYLabels(self) -> int\nC++: virtual int GetAdjustYLabels()\n\n"},
  {"SetNumberOfXMinorTicks", PyvtkXYPlotActor_SetNumberOfXMinorTicks, METH_VARARGS,
   "SetNumberOfXMinorTicks(self, num:int) -> None\nC++: void SetNumberOfXMinorTicks(int num)\n\nSet/Get the number of minor ticks in X or Y.\n"},
  {"GetNumberOfXMinorTicks", PyvtkXYPlotActor_GetNumberOfXMinorTicks, METH_VARARGS,
   "GetNumberOfXMinorTicks(self) -> int\nC++: int GetNumberOfXMinorTicks()\n\n"},
  {"SetNumberOfYMinorTicks", PyvtkXYPlotActor_SetNumberOfYMinorTicks, METH_VARARGS,
   "SetNumberOfYMinorTicks(self, num:int) -> None\nC++: void SetNumberOfYMinorTicks(int num)\n\n"},
  {"GetNumberOfYMinorTicks", PyvtkXYPlotActor_GetNumberOfYMinorTicks, METH_VARARGS,
   "GetNumberOfYMinorTicks(self) -> int\nC++: int GetNumberOfYMinorTicks()\n\n"},
  {"SetLegend", PyvtkXYPlotActor_SetLegend, METH_VARARGS,
   "SetLegend(self, _arg:int) -> None\nC++: virtual void SetLegend(vtkTypeBool _arg)\n\nEnable/Disable the creation of a legend. If on, the legend labels\nwill be created automatically unless the per plot legend symbol\nhas been set.\n"},
  {"GetLegend", PyvtkXYPlotActor_GetLegend, METH_VARARGS,
   "GetLegend(self) -> int\nC++: virtual vtkTypeBool GetLegend()\n\n"},
  {"LegendOn", PyvtkXYPlotActor_LegendOn, METH_VARARGS,
   "LegendOn(self) -> None\nC++: virtual void LegendOn()\n\n"},
  {"LegendOff", PyvtkXYPlotActor_LegendOff, METH_VARARGS,
   "LegendOff(self) -> None\nC++: virtual void LegendOff()\n\n"},
  {"SetTitlePosition", PyvtkXYPlotActor_SetTitlePosition, METH_VARARGS,
   "SetTitlePosition(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetTitlePosition(double _arg1, double _arg2)\nSetTitlePosition(self, _arg:(float, float)) -> None\nC++: void SetTitlePosition(const double _arg[2])\n\nSet/Get the position of the title. This has no effect if\nAdjustTitlePosition is true.\n"},
  {"GetTitlePosition", PyvtkXYPlotActor_GetTitlePosition, METH_VARARGS,
   "GetTitlePosition(self) -> (float, float)\nC++: virtual double *GetTitlePosition()\n\n"},
  {"SetAdjustTitlePosition", PyvtkXYPlotActor_SetAdjustTitlePosition, METH_VARARGS,
   "SetAdjustTitlePosition(self, _arg:int) -> None\nC++: virtual void SetAdjustTitlePosition(vtkTypeBool _arg)\n\nIf true, the xyplot actor will adjust the position of the title\nautomatically to be upper-middle. Default is true.\n"},
  {"GetAdjustTitlePosition", PyvtkXYPlotActor_GetAdjustTitlePosition, METH_VARARGS,
   "GetAdjustTitlePosition(self) -> int\nC++: virtual vtkTypeBool GetAdjustTitlePosition()\n\n"},
  {"AdjustTitlePositionOn", PyvtkXYPlotActor_AdjustTitlePositionOn, METH_VARARGS,
   "AdjustTitlePositionOn(self) -> None\nC++: virtual void AdjustTitlePositionOn()\n\n"},
  {"AdjustTitlePositionOff", PyvtkXYPlotActor_AdjustTitlePositionOff, METH_VARARGS,
   "AdjustTitlePositionOff(self) -> None\nC++: virtual void AdjustTitlePositionOff()\n\n"},
  {"SetAdjustTitlePositionMode", PyvtkXYPlotActor_SetAdjustTitlePositionMode, METH_VARARGS,
   "SetAdjustTitlePositionMode(self, _arg:int) -> None\nC++: virtual void SetAdjustTitlePositionMode(int _arg)\n\nIf AdjustTitlePosition is true, the xyplot actor will adjust the\nposition of the title automatically depending on the given mode,\nthe mode is a combination of the Alignment flags. by default:\nvtkXYPlotActor::AlignHCenter | vtkXYPlotActor::Top |\nvtkXYPlotActor::AlignAxisVCenter\n"},
  {"GetAdjustTitlePositionMode", PyvtkXYPlotActor_GetAdjustTitlePositionMode, METH_VARARGS,
   "GetAdjustTitlePositionMode(self) -> int\nC++: virtual int GetAdjustTitlePositionMode()\n\n"},
  {"SetLegendPosition", PyvtkXYPlotActor_SetLegendPosition, METH_VARARGS,
   "SetLegendPosition(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetLegendPosition(double _arg1, double _arg2)\nSetLegendPosition(self, _arg:(float, float)) -> None\nC++: void SetLegendPosition(const double _arg[2])\n\nUse these methods to control the position of the legend. The\nvariables LegendPosition and LegendPosition2 define the\nlower-left and upper-right position of the legend. The\ncoordinates are expressed as normalized values with respect to\nthe rectangle defined by PositionCoordinate and\nPosition2Coordinate. Note that LegendPosition2 is relative to\nLegendPosition.\n"},
  {"GetLegendPosition", PyvtkXYPlotActor_GetLegendPosition, METH_VARARGS,
   "GetLegendPosition(self) -> (float, float)\nC++: virtual double *GetLegendPosition()\n\n"},
  {"SetLegendPosition2", PyvtkXYPlotActor_SetLegendPosition2, METH_VARARGS,
   "SetLegendPosition2(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetLegendPosition2(double _arg1, double _arg2)\nSetLegendPosition2(self, _arg:(float, float)) -> None\nC++: void SetLegendPosition2(const double _arg[2])\n\n"},
  {"GetLegendPosition2", PyvtkXYPlotActor_GetLegendPosition2, METH_VARARGS,
   "GetLegendPosition2(self) -> (float, float)\nC++: virtual double *GetLegendPosition2()\n\n"},
  {"SetTitleTextProperty", PyvtkXYPlotActor_SetTitleTextProperty, METH_VARARGS,
   "SetTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property.\n"},
  {"GetTitleTextProperty", PyvtkXYPlotActor_GetTitleTextProperty, METH_VARARGS,
   "GetTitleTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleTextProperty()\n\n"},
  {"SetAxisTitleTextProperty", PyvtkXYPlotActor_SetAxisTitleTextProperty, METH_VARARGS,
   "SetAxisTitleTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetAxisTitleTextProperty(vtkTextProperty *p)\n\nSet/Get the title text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {"GetAxisTitleTextProperty", PyvtkXYPlotActor_GetAxisTitleTextProperty, METH_VARARGS,
   "GetAxisTitleTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAxisTitleTextProperty()\n\n"},
  {"SetAxisLabelTextProperty", PyvtkXYPlotActor_SetAxisLabelTextProperty, METH_VARARGS,
   "SetAxisLabelTextProperty(self, p:vtkTextProperty) -> None\nC++: virtual void SetAxisLabelTextProperty(vtkTextProperty *p)\n\nSet/Get the labels text property of all axes. Note that each axis\ncan be controlled individually through the GetX/YAxisActor2D()\nmethods.\n"},
  {"GetAxisLabelTextProperty", PyvtkXYPlotActor_GetAxisLabelTextProperty, METH_VARARGS,
   "GetAxisLabelTextProperty(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetAxisLabelTextProperty()\n\n"},
  {"SetLogx", PyvtkXYPlotActor_SetLogx, METH_VARARGS,
   "SetLogx(self, _arg:int) -> None\nC++: virtual void SetLogx(vtkTypeBool _arg)\n\nEnable/Disable plotting of Log of x-values.\n"},
  {"GetLogx", PyvtkXYPlotActor_GetLogx, METH_VARARGS,
   "GetLogx(self) -> int\nC++: virtual vtkTypeBool GetLogx()\n\n"},
  {"LogxOn", PyvtkXYPlotActor_LogxOn, METH_VARARGS,
   "LogxOn(self) -> None\nC++: virtual void LogxOn()\n\n"},
  {"LogxOff", PyvtkXYPlotActor_LogxOff, METH_VARARGS,
   "LogxOff(self) -> None\nC++: virtual void LogxOff()\n\n"},
  {"SetLabelFormat", PyvtkXYPlotActor_SetLabelFormat, METH_VARARGS,
   "SetLabelFormat(self, __a:str) -> None\nC++: virtual void SetLabelFormat(const char *)\n\nSet/Get the format with which to print the labels . This sets\nboth X and Y label formats. GetLabelFormat() returns X label\nformat.\n"},
  {"GetLabelFormat", PyvtkXYPlotActor_GetLabelFormat, METH_VARARGS,
   "GetLabelFormat(self) -> str\nC++: const char *GetLabelFormat()\n\n"},
  {"SetXLabelFormat", PyvtkXYPlotActor_SetXLabelFormat, METH_VARARGS,
   "SetXLabelFormat(self, __a:str) -> None\nC++: virtual void SetXLabelFormat(const char *)\n\nSet/Get the format with which to print the X label.\n"},
  {"GetXLabelFormat", PyvtkXYPlotActor_GetXLabelFormat, METH_VARARGS,
   "GetXLabelFormat(self) -> str\nC++: virtual char *GetXLabelFormat()\n\n"},
  {"SetYLabelFormat", PyvtkXYPlotActor_SetYLabelFormat, METH_VARARGS,
   "SetYLabelFormat(self, __a:str) -> None\nC++: virtual void SetYLabelFormat(const char *)\n\nSet/Get the format with which to print the Y label.\n"},
  {"GetYLabelFormat", PyvtkXYPlotActor_GetYLabelFormat, METH_VARARGS,
   "GetYLabelFormat(self) -> str\nC++: virtual char *GetYLabelFormat()\n\n"},
  {"SetBorder", PyvtkXYPlotActor_SetBorder, METH_VARARGS,
   "SetBorder(self, _arg:int) -> None\nC++: virtual void SetBorder(int _arg)\n\nSet/Get the spacing between the plot window and the plot. The\nvalue is specified in pixels.\n"},
  {"GetBorderMinValue", PyvtkXYPlotActor_GetBorderMinValue, METH_VARARGS,
   "GetBorderMinValue(self) -> int\nC++: virtual int GetBorderMinValue()\n\n"},
  {"GetBorderMaxValue", PyvtkXYPlotActor_GetBorderMaxValue, METH_VARARGS,
   "GetBorderMaxValue(self) -> int\nC++: virtual int GetBorderMaxValue()\n\n"},
  {"GetBorder", PyvtkXYPlotActor_GetBorder, METH_VARARGS,
   "GetBorder(self) -> int\nC++: virtual int GetBorder()\n\n"},
  {"PlotPointsOn", PyvtkXYPlotActor_PlotPointsOn, METH_VARARGS,
   "PlotPointsOn(self) -> None\nC++: virtual void PlotPointsOn()\n\n"},
  {"PlotPointsOff", PyvtkXYPlotActor_PlotPointsOff, METH_VARARGS,
   "PlotPointsOff(self) -> None\nC++: virtual void PlotPointsOff()\n\n"},
  {"PlotLinesOn", PyvtkXYPlotActor_PlotLinesOn, METH_VARARGS,
   "PlotLinesOn(self) -> None\nC++: virtual void PlotLinesOn()\n\n"},
  {"PlotLinesOff", PyvtkXYPlotActor_PlotLinesOff, METH_VARARGS,
   "PlotLinesOff(self) -> None\nC++: virtual void PlotLinesOff()\n\n"},
  {"SetGlyphSize", PyvtkXYPlotActor_SetGlyphSize, METH_VARARGS,
   "SetGlyphSize(self, _arg:float) -> None\nC++: virtual void SetGlyphSize(double _arg)\n\nSet/Get the factor that controls how big glyphs are in the plot.\nThe number is expressed as a fraction of the length of the\ndiagonal of the plot bounding box.\n"},
  {"GetGlyphSizeMinValue", PyvtkXYPlotActor_GetGlyphSizeMinValue, METH_VARARGS,
   "GetGlyphSizeMinValue(self) -> float\nC++: virtual double GetGlyphSizeMinValue()\n\n"},
  {"GetGlyphSizeMaxValue", PyvtkXYPlotActor_GetGlyphSizeMaxValue, METH_VARARGS,
   "GetGlyphSizeMaxValue(self) -> float\nC++: virtual double GetGlyphSizeMaxValue()\n\n"},
  {"GetGlyphSize", PyvtkXYPlotActor_GetGlyphSize, METH_VARARGS,
   "GetGlyphSize(self) -> float\nC++: virtual double GetGlyphSize()\n\n"},
  {"ViewportToPlotCoordinate", PyvtkXYPlotActor_ViewportToPlotCoordinate, METH_VARARGS,
   "ViewportToPlotCoordinate(self, viewport:vtkViewport, u:float,\n    v:float) -> None\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nViewportToPlotCoordinate(self, viewport:vtkViewport) -> None\nC++: void ViewportToPlotCoordinate(vtkViewport *viewport)\n\nGiven a position within the viewport used by the plot, return the\nthe plot coordinates (XAxis value, YAxis value)\n"},
  {"SetPlotCoordinate", PyvtkXYPlotActor_SetPlotCoordinate, METH_VARARGS,
   "SetPlotCoordinate(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetPlotCoordinate(double _arg1, double _arg2)\nSetPlotCoordinate(self, _arg:(float, float)) -> None\nC++: void SetPlotCoordinate(const double _arg[2])\n\n"},
  {"GetPlotCoordinate", PyvtkXYPlotActor_GetPlotCoordinate, METH_VARARGS,
   "GetPlotCoordinate(self) -> (float, float)\nC++: virtual double *GetPlotCoordinate()\n\n"},
  {"PlotToViewportCoordinate", PyvtkXYPlotActor_PlotToViewportCoordinate, METH_VARARGS,
   "PlotToViewportCoordinate(self, viewport:vtkViewport, u:float,\n    v:float) -> None\nC++: void PlotToViewportCoordinate(vtkViewport *viewport,\n    double &u, double &v)\nPlotToViewportCoordinate(self, viewport:vtkViewport) -> None\nC++: void PlotToViewportCoordinate(vtkViewport *viewport)\n\nGiven a plot coordinate, return the viewpoint position\n"},
  {"SetViewportCoordinate", PyvtkXYPlotActor_SetViewportCoordinate, METH_VARARGS,
   "SetViewportCoordinate(self, _arg1:float, _arg2:float) -> None\nC++: virtual void SetViewportCoordinate(double _arg1,\n    double _arg2)\nSetViewportCoordinate(self, _arg:(float, float)) -> None\nC++: void SetViewportCoordinate(const double _arg[2])\n\n"},
  {"GetViewportCoordinate", PyvtkXYPlotActor_GetViewportCoordinate, METH_VARARGS,
   "GetViewportCoordinate(self) -> (float, float)\nC++: virtual double *GetViewportCoordinate()\n\n"},
  {"IsInPlot", PyvtkXYPlotActor_IsInPlot, METH_VARARGS,
   "IsInPlot(self, viewport:vtkViewport, u:float, v:float) -> int\nC++: int IsInPlot(vtkViewport *viewport, double u, double v)\n\nIs the specified viewport position within the plot area (as\nopposed to the region used by the plot plus the labels)?\n"},
  {"SetChartBox", PyvtkXYPlotActor_SetChartBox, METH_VARARGS,
   "SetChartBox(self, _arg:int) -> None\nC++: virtual void SetChartBox(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the chart box.\n"},
  {"GetChartBox", PyvtkXYPlotActor_GetChartBox, METH_VARARGS,
   "GetChartBox(self) -> int\nC++: virtual vtkTypeBool GetChartBox()\n\n"},
  {"ChartBoxOn", PyvtkXYPlotActor_ChartBoxOn, METH_VARARGS,
   "ChartBoxOn(self) -> None\nC++: virtual void ChartBoxOn()\n\n"},
  {"ChartBoxOff", PyvtkXYPlotActor_ChartBoxOff, METH_VARARGS,
   "ChartBoxOff(self) -> None\nC++: virtual void ChartBoxOff()\n\n"},
  {"SetChartBorder", PyvtkXYPlotActor_SetChartBorder, METH_VARARGS,
   "SetChartBorder(self, _arg:int) -> None\nC++: virtual void SetChartBorder(vtkTypeBool _arg)\n\nSet/Get the flag that controls whether a box will be drawn/filled\ncorresponding to the legend box.\n"},
  {"GetChartBorder", PyvtkXYPlotActor_GetChartBorder, METH_VARARGS,
   "GetChartBorder(self) -> int\nC++: virtual vtkTypeBool GetChartBorder()\n\n"},
  {"ChartBorderOn", PyvtkXYPlotActor_ChartBorderOn, METH_VARARGS,
   "ChartBorderOn(self) -> None\nC++: virtual void ChartBorderOn()\n\n"},
  {"ChartBorderOff", PyvtkXYPlotActor_ChartBorderOff, METH_VARARGS,
   "ChartBorderOff(self) -> None\nC++: virtual void ChartBorderOff()\n\n"},
  {"GetChartBoxProperty", PyvtkXYPlotActor_GetChartBoxProperty, METH_VARARGS,
   "GetChartBoxProperty(self) -> vtkProperty2D\nC++: vtkProperty2D *GetChartBoxProperty()\n\nGet the box vtkProperty2D.\n"},
  {"SetShowReferenceXLine", PyvtkXYPlotActor_SetShowReferenceXLine, METH_VARARGS,
   "SetShowReferenceXLine(self, _arg:int) -> None\nC++: virtual void SetShowReferenceXLine(vtkTypeBool _arg)\n\nSet/Get if the X reference line is visible. hidden by default\n"},
  {"GetShowReferenceXLine", PyvtkXYPlotActor_GetShowReferenceXLine, METH_VARARGS,
   "GetShowReferenceXLine(self) -> int\nC++: virtual vtkTypeBool GetShowReferenceXLine()\n\n"},
  {"ShowReferenceXLineOn", PyvtkXYPlotActor_ShowReferenceXLineOn, METH_VARARGS,
   "ShowReferenceXLineOn(self) -> None\nC++: virtual void ShowReferenceXLineOn()\n\n"},
  {"ShowReferenceXLineOff", PyvtkXYPlotActor_ShowReferenceXLineOff, METH_VARARGS,
   "ShowReferenceXLineOff(self) -> None\nC++: virtual void ShowReferenceXLineOff()\n\n"},
  {"SetReferenceXValue", PyvtkXYPlotActor_SetReferenceXValue, METH_VARARGS,
   "SetReferenceXValue(self, _arg:float) -> None\nC++: virtual void SetReferenceXValue(double _arg)\n\nSet/Get the value for the X reference line\n"},
  {"GetReferenceXValue", PyvtkXYPlotActor_GetReferenceXValue, METH_VARARGS,
   "GetReferenceXValue(self) -> float\nC++: virtual double GetReferenceXValue()\n\n"},
  {"SetShowReferenceYLine", PyvtkXYPlotActor_SetShowReferenceYLine, METH_VARARGS,
   "SetShowReferenceYLine(self, _arg:int) -> None\nC++: virtual void SetShowReferenceYLine(vtkTypeBool _arg)\n\nSet/Get if the Y reference line is visible. hidden by default\n"},
  {"GetShowReferenceYLine", PyvtkXYPlotActor_GetShowReferenceYLine, METH_VARARGS,
   "GetShowReferenceYLine(self) -> int\nC++: virtual vtkTypeBool GetShowReferenceYLine()\n\n"},
  {"ShowReferenceYLineOn", PyvtkXYPlotActor_ShowReferenceYLineOn, METH_VARARGS,
   "ShowReferenceYLineOn(self) -> None\nC++: virtual void ShowReferenceYLineOn()\n\n"},
  {"ShowReferenceYLineOff", PyvtkXYPlotActor_ShowReferenceYLineOff, METH_VARARGS,
   "ShowReferenceYLineOff(self) -> None\nC++: virtual void ShowReferenceYLineOff()\n\n"},
  {"SetReferenceYValue", PyvtkXYPlotActor_SetReferenceYValue, METH_VARARGS,
   "SetReferenceYValue(self, _arg:float) -> None\nC++: virtual void SetReferenceYValue(double _arg)\n\nSet/Get the value for the Y reference line\n"},
  {"GetReferenceYValue", PyvtkXYPlotActor_GetReferenceYValue, METH_VARARGS,
   "GetReferenceYValue(self) -> float\nC++: virtual double GetReferenceYValue()\n\n"},
  {"GetMTime", PyvtkXYPlotActor_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nTake into account the modified time of internal helper classes.\n"},
  {"RenderOpaqueGeometry", PyvtkXYPlotActor_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THIS METHOD OUTSIDE OF THE RENDERING PROCESS. Draw the x-y\nplot.\n"},
  {"RenderOverlay", PyvtkXYPlotActor_RenderOverlay, METH_VARARGS,
   "RenderOverlay(self, __a:vtkViewport) -> int\nC++: int RenderOverlay(vtkViewport *) override;\n\nSupport the standard render methods.\n"},
  {"RenderTranslucentPolygonalGeometry", PyvtkXYPlotActor_RenderTranslucentPolygonalGeometry, METH_VARARGS,
   "RenderTranslucentPolygonalGeometry(self, __a:vtkViewport) -> int\nC++: int RenderTranslucentPolygonalGeometry(vtkViewport *)\n    override;\n\n"},
  {"HasTranslucentPolygonalGeometry", PyvtkXYPlotActor_HasTranslucentPolygonalGeometry, METH_VARARGS,
   "HasTranslucentPolygonalGeometry(self) -> int\nC++: vtkTypeBool HasTranslucentPolygonalGeometry() override;\n\nDoes this prop have some translucent polygonal geometry?\n"},
  {"ReleaseGraphicsResources", PyvtkXYPlotActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"SetXTitlePosition", PyvtkXYPlotActor_SetXTitlePosition, METH_VARARGS,
   "SetXTitlePosition(self, position:float) -> None\nC++: void SetXTitlePosition(double position)\n\nSet/Get the position of the title of X axis.\n"},
  {"GetXTitlePosition", PyvtkXYPlotActor_GetXTitlePosition, METH_VARARGS,
   "GetXTitlePosition(self) -> float\nC++: double GetXTitlePosition()\n\n"},
  {"SetYTitlePosition", PyvtkXYPlotActor_SetYTitlePosition, METH_VARARGS,
   "SetYTitlePosition(self, _arg:int) -> None\nC++: virtual void SetYTitlePosition(int _arg)\n\nSet/Get the position of the title of Y axis.\n"},
  {"GetYTitlePosition", PyvtkXYPlotActor_GetYTitlePosition, METH_VARARGS,
   "GetYTitlePosition(self) -> int\nC++: virtual int GetYTitlePosition()\n\n"},
  {"SetYTitlePositionToTop", PyvtkXYPlotActor_SetYTitlePositionToTop, METH_VARARGS,
   "SetYTitlePositionToTop(self) -> None\nC++: void SetYTitlePositionToTop()\n\n"},
  {"SetYTitlePositionToHCenter", PyvtkXYPlotActor_SetYTitlePositionToHCenter, METH_VARARGS,
   "SetYTitlePositionToHCenter(self) -> None\nC++: void SetYTitlePositionToHCenter()\n\n"},
  {"SetYTitlePositionToVCenter", PyvtkXYPlotActor_SetYTitlePositionToVCenter, METH_VARARGS,
   "SetYTitlePositionToVCenter(self) -> None\nC++: void SetYTitlePositionToVCenter()\n\n"},
  {"SetPlotGlyphType", PyvtkXYPlotActor_SetPlotGlyphType, METH_VARARGS,
   "SetPlotGlyphType(self, __a:int, __b:int) -> None\nC++: virtual void SetPlotGlyphType(int, int)\n\nSet plot properties\n"},
  {"SetLineWidth", PyvtkXYPlotActor_SetLineWidth, METH_VARARGS,
   "SetLineWidth(self, __a:float) -> None\nC++: virtual void SetLineWidth(double)\n\n"},
  {"AddUserCurvesPoint", PyvtkXYPlotActor_AddUserCurvesPoint, METH_VARARGS,
   "AddUserCurvesPoint(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void AddUserCurvesPoint(double, double, double)\n\n"},
  {"RemoveAllActiveCurves", PyvtkXYPlotActor_RemoveAllActiveCurves, METH_VARARGS,
   "RemoveAllActiveCurves(self) -> None\nC++: virtual void RemoveAllActiveCurves()\n\n"},
  {"SetLegendBorder", PyvtkXYPlotActor_SetLegendBorder, METH_VARARGS,
   "SetLegendBorder(self, __a:int) -> None\nC++: virtual void SetLegendBorder(int)\n\nSet legend properties\n"},
  {"SetLegendBox", PyvtkXYPlotActor_SetLegendBox, METH_VARARGS,
   "SetLegendBox(self, __a:int) -> None\nC++: virtual void SetLegendBox(int)\n\n"},
  {"SetLegendUseBackground", PyvtkXYPlotActor_SetLegendUseBackground, METH_VARARGS,
   "SetLegendUseBackground(self, __a:int) -> None\nC++: virtual void SetLegendUseBackground(int)\n\n"},
  {"SetLegendBackgroundColor", PyvtkXYPlotActor_SetLegendBackgroundColor, METH_VARARGS,
   "SetLegendBackgroundColor(self, __a:float, __b:float, __c:float)\n    -> None\nC++: virtual void SetLegendBackgroundColor(double, double, double)\n\n"},
  {"SetTitleColor", PyvtkXYPlotActor_SetTitleColor, METH_VARARGS,
   "SetTitleColor(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetTitleColor(double, double, double)\n\nSet title properties\n"},
  {"SetTitleFontFamily", PyvtkXYPlotActor_SetTitleFontFamily, METH_VARARGS,
   "SetTitleFontFamily(self, __a:int) -> None\nC++: virtual void SetTitleFontFamily(int)\n\n"},
  {"SetTitleBold", PyvtkXYPlotActor_SetTitleBold, METH_VARARGS,
   "SetTitleBold(self, __a:int) -> None\nC++: virtual void SetTitleBold(int)\n\n"},
  {"SetTitleItalic", PyvtkXYPlotActor_SetTitleItalic, METH_VARARGS,
   "SetTitleItalic(self, __a:int) -> None\nC++: virtual void SetTitleItalic(int)\n\n"},
  {"SetTitleShadow", PyvtkXYPlotActor_SetTitleShadow, METH_VARARGS,
   "SetTitleShadow(self, __a:int) -> None\nC++: virtual void SetTitleShadow(int)\n\n"},
  {"SetTitleFontSize", PyvtkXYPlotActor_SetTitleFontSize, METH_VARARGS,
   "SetTitleFontSize(self, __a:int) -> None\nC++: virtual void SetTitleFontSize(int)\n\n"},
  {"SetTitleJustification", PyvtkXYPlotActor_SetTitleJustification, METH_VARARGS,
   "SetTitleJustification(self, __a:int) -> None\nC++: virtual void SetTitleJustification(int)\n\n"},
  {"SetTitleVerticalJustification", PyvtkXYPlotActor_SetTitleVerticalJustification, METH_VARARGS,
   "SetTitleVerticalJustification(self, __a:int) -> None\nC++: virtual void SetTitleVerticalJustification(int)\n\n"},
  {"SetXAxisColor", PyvtkXYPlotActor_SetXAxisColor, METH_VARARGS,
   "SetXAxisColor(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetXAxisColor(double, double, double)\n\nSet axes properties\n"},
  {"SetYAxisColor", PyvtkXYPlotActor_SetYAxisColor, METH_VARARGS,
   "SetYAxisColor(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetYAxisColor(double, double, double)\n\n"},
  {"SetAxisTitleColor", PyvtkXYPlotActor_SetAxisTitleColor, METH_VARARGS,
   "SetAxisTitleColor(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetAxisTitleColor(double, double, double)\n\nSet axis title properties\n"},
  {"SetAxisTitleFontFamily", PyvtkXYPlotActor_SetAxisTitleFontFamily, METH_VARARGS,
   "SetAxisTitleFontFamily(self, __a:int) -> None\nC++: virtual void SetAxisTitleFontFamily(int)\n\n"},
  {"SetAxisTitleBold", PyvtkXYPlotActor_SetAxisTitleBold, METH_VARARGS,
   "SetAxisTitleBold(self, __a:int) -> None\nC++: virtual void SetAxisTitleBold(int)\n\n"},
  {"SetAxisTitleItalic", PyvtkXYPlotActor_SetAxisTitleItalic, METH_VARARGS,
   "SetAxisTitleItalic(self, __a:int) -> None\nC++: virtual void SetAxisTitleItalic(int)\n\n"},
  {"SetAxisTitleShadow", PyvtkXYPlotActor_SetAxisTitleShadow, METH_VARARGS,
   "SetAxisTitleShadow(self, __a:int) -> None\nC++: virtual void SetAxisTitleShadow(int)\n\n"},
  {"SetAxisTitleFontSize", PyvtkXYPlotActor_SetAxisTitleFontSize, METH_VARARGS,
   "SetAxisTitleFontSize(self, __a:int) -> None\nC++: virtual void SetAxisTitleFontSize(int)\n\n"},
  {"SetAxisTitleJustification", PyvtkXYPlotActor_SetAxisTitleJustification, METH_VARARGS,
   "SetAxisTitleJustification(self, __a:int) -> None\nC++: virtual void SetAxisTitleJustification(int)\n\n"},
  {"SetAxisTitleVerticalJustification", PyvtkXYPlotActor_SetAxisTitleVerticalJustification, METH_VARARGS,
   "SetAxisTitleVerticalJustification(self, __a:int) -> None\nC++: virtual void SetAxisTitleVerticalJustification(int)\n\n"},
  {"SetAxisLabelColor", PyvtkXYPlotActor_SetAxisLabelColor, METH_VARARGS,
   "SetAxisLabelColor(self, __a:float, __b:float, __c:float) -> None\nC++: virtual void SetAxisLabelColor(double, double, double)\n\nSet axis label properties\n"},
  {"SetAxisLabelFontFamily", PyvtkXYPlotActor_SetAxisLabelFontFamily, METH_VARARGS,
   "SetAxisLabelFontFamily(self, __a:int) -> None\nC++: virtual void SetAxisLabelFontFamily(int)\n\n"},
  {"SetAxisLabelBold", PyvtkXYPlotActor_SetAxisLabelBold, METH_VARARGS,
   "SetAxisLabelBold(self, __a:int) -> None\nC++: virtual void SetAxisLabelBold(int)\n\n"},
  {"SetAxisLabelItalic", PyvtkXYPlotActor_SetAxisLabelItalic, METH_VARARGS,
   "SetAxisLabelItalic(self, __a:int) -> None\nC++: virtual void SetAxisLabelItalic(int)\n\n"},
  {"SetAxisLabelShadow", PyvtkXYPlotActor_SetAxisLabelShadow, METH_VARARGS,
   "SetAxisLabelShadow(self, __a:int) -> None\nC++: virtual void SetAxisLabelShadow(int)\n\n"},
  {"SetAxisLabelFontSize", PyvtkXYPlotActor_SetAxisLabelFontSize, METH_VARARGS,
   "SetAxisLabelFontSize(self, __a:int) -> None\nC++: virtual void SetAxisLabelFontSize(int)\n\n"},
  {"SetAxisLabelJustification", PyvtkXYPlotActor_SetAxisLabelJustification, METH_VARARGS,
   "SetAxisLabelJustification(self, __a:int) -> None\nC++: virtual void SetAxisLabelJustification(int)\n\n"},
  {"SetAxisLabelVerticalJustification", PyvtkXYPlotActor_SetAxisLabelVerticalJustification, METH_VARARGS,
   "SetAxisLabelVerticalJustification(self, __a:int) -> None\nC++: virtual void SetAxisLabelVerticalJustification(int)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkXYPlotActor_Doc =
  "vtkXYPlotActor - generate an x-y plot from input dataset(s) or field\ndata\n\n"
  "Superclass: vtkActor2D\n\n"
  "vtkXYPlotActor creates an x-y plot of data from one or more input\n"
  "data sets or field data. The class plots dataset scalar values\n"
  "(y-axis) against the points (x-axis). The x-axis values are generated\n"
  "by taking the point ids, computing a cumulative arc length, or a\n"
  "normalized arc length. More than one input data set can be specified\n"
  "to generate multiple plots. Alternatively, if field data is supplied\n"
  "as input, the class plots one component against another. (The user\n"
  "must specify which component to use as the x-axis and which for the\n"
  "y-axis.)\n\n"
  "To use this class to plot dataset(s), you must specify one or more\n"
  "input datasets containing scalar and point data.  You'll probably\n"
  "also want to invoke a method to control how the point coordinates are\n"
  "converted into x values (by default point ids are used).\n\n"
  "To use this class to plot field data, you must specify one or more\n"
  "input data objects with its associated field data. You'll also want\n"
  "to specify which component to use as the x-axis and which to use as\n"
  "the y-axis. Note that when plotting field data, the x and y values\n"
  "are used directly (i.e., there are no options to normalize the\n"
  "components).\n\n"
  "Once you've set up the plot, you'll want to position it.  The\n"
  "PositionCoordinate defines the lower-left location of the x-y plot\n"
  "(specified in normalized viewport coordinates) and the\n"
  "Position2Coordinate define the upper-right corner. (Note: the\n"
  "Position2Coordinate is relative to PositionCoordinate, so you can\n"
  "move the vtkXYPlotActor around the viewport by setting just the\n"
  "PositionCoordinate.) The combination of the two position coordinates\n"
  "specifies a rectangle in which the plot will lie.\n\n"
  "Optional features include the ability to specify axes labels, label\n"
  "format and plot title. You can also manually specify the x and y plot\n"
  "ranges (by default they are computed automatically). The Border\n"
  "instance variable is used to create space between the boundary of the\n"
  "plot window (specified by PositionCoordinate and Position2Coordinate)\n"
  "and the plot itself.\n\n"
  "The font property of the plot title can be modified through the\n"
  "TitleTextProperty attribute. The font property of the axes titles and\n"
  "labels can be modified through the AxisTitleTextProperty and\n"
  "AxisLabelTextProperty attributes. You may also use the\n"
  "GetXAxisActor2D or GetYAxisActor2D methods to access each individual\n"
  "axis actor to modify their font properties. In the same way, the\n"
  "GetLegendBoxActor method can be used to access the legend box actor\n"
  "to modify its font properties.\n\n"
  "There are several advanced features as well. You can assign per curve\n"
  "properties (such as color and a plot symbol). (Note that each input\n"
  "dataset and/or data object creates a single curve.) Another option is\n"
  "to add a plot legend that graphically indicates the correspondence\n"
  "between the curve, curve symbols, and the data source. You can also\n"
  "exchange the x and y axes if you prefer you plot orientation that\n"
  "way.\n\n"
  "@warning\n"
  "If you are interested in plotting something other than scalar data,\n"
  "you can use the vtk data shuffling filters (e.g.,\n"
  "vtkAttributeDataToFieldDataFilter and\n"
  "vtkFieldDataToAttributeDataFilter) to convert the data into scalar\n"
  "data and/or points.\n\n"
  "@par Thanks: This class was written by: Will Schroeder, Jim Miller,\n"
  "Charles Law, Sebastien Barre, Amy Squillacote, Ken Martin, Mathieu\n"
  "Malaterre, Jeff Lee, Francois Finet, Julien Bertel, Claire Guilbaud,\n"
  "and Philippe Pebay\n\n"
  "@sa\n"
  "vtkActor2D vtkTextMapper vtkScalarBarActor vtkAxisActor2D\n"
  "vtkCubeAxesActor2D vtkAttributeDataToFieldDataFilter\n"
  "vtkFieldDataToAttributeDataFilter vtkTextProperty\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkXYPlotActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingAnnotation.vtkXYPlotActor", // tp_name
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
  PyvtkXYPlotActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkXYPlotActor_StaticNew()
{
  return vtkXYPlotActor::New();
}

PyObject *PyvtkXYPlotActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkXYPlotActor_Type, PyvtkXYPlotActor_Methods,
    "vtkXYPlotActor",
 &PyvtkXYPlotActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor2D");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkXYPlotActor_Alignment_Type);
  PyVTKEnum_Add(&PyvtkXYPlotActor_Alignment_Type, "vtkXYPlotActor.Alignment");

  o = (PyObject *)&PyvtkXYPlotActor_Alignment_Type;
  if (PyDict_SetItemString(d, "Alignment", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkXYPlotActor::Alignment cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "AlignLeft", vtkXYPlotActor::AlignLeft },
        { "AlignRight", vtkXYPlotActor::AlignRight },
        { "AlignHCenter", vtkXYPlotActor::AlignHCenter },
        { "AlignTop", vtkXYPlotActor::AlignTop },
        { "AlignBottom", vtkXYPlotActor::AlignBottom },
        { "AlignVCenter", vtkXYPlotActor::AlignVCenter },
        { "AlignAxisLeft", vtkXYPlotActor::AlignAxisLeft },
        { "AlignAxisRight", vtkXYPlotActor::AlignAxisRight },
        { "AlignAxisHCenter", vtkXYPlotActor::AlignAxisHCenter },
        { "AlignAxisTop", vtkXYPlotActor::AlignAxisTop },
        { "AlignAxisBottom", vtkXYPlotActor::AlignAxisBottom },
        { "AlignAxisVCenter", vtkXYPlotActor::AlignAxisVCenter },
      };

    o = PyvtkXYPlotActor_Alignment_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkXYPlotActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkXYPlotActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkXYPlotActor", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VTK_XYPLOT_INDEX", 0 },
        { "VTK_XYPLOT_ARC_LENGTH", 1 },
        { "VTK_XYPLOT_NORMALIZED_ARC_LENGTH", 2 },
        { "VTK_XYPLOT_VALUE", 3 },
        { "VTK_XYPLOT_ROW", 0 },
        { "VTK_XYPLOT_COLUMN", 1 },
        { "VTK_XYPLOT_Y_AXIS_TOP", 0 },
        { "VTK_XYPLOT_Y_AXIS_HCENTER", 1 },
        { "VTK_XYPLOT_Y_AXIS_VCENTER", 2 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

