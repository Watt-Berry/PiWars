// python wrapper for vtkSelectionSource
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSelectionSource.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionSource(PyObject *dict); }
extern "C" { PyObject *PyvtkSelectionSource_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectionSource_FieldTypeOptions_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkSelectionSource.FieldTypeOptions", // tp_name
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
PyObject *PyvtkSelectionSource_FieldTypeOptions_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSelectionSource_FieldTypeOptions_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSelectionSource_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionSource::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionSource::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionSource *tempr = vtkSelectionSource::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionSource *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionSource::NewInstance());

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
PyvtkSelectionSource_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSelectionSource::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSelectionSource::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfNodes(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetNumberOfNodes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetNumberOfNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetNumberOfNodes() :
      op->vtkSelectionSource::GetNumberOfNodes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_RemoveNode_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveNode_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveNode(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionSource_RemoveNode_Methods[] = {
  {"RemoveNode", PyvtkSelectionSource_RemoveNode_s1, METH_VARARGS,
   "@I"},
  {"RemoveNode", PyvtkSelectionSource_RemoveNode_s2, METH_VARARGS,
   "@z"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkSelectionSource_RemoveNode(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkSelectionSource_RemoveNode_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveNode");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllNodes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllNodes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllNodes();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllNodes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExpression(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetExpression(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetExpression(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExpression");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetExpression() :
      op->vtkSelectionSource::GetExpression());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldTypeOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldTypeOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldTypeOption(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetFieldTypeOption(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldTypeOptionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeOptionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeOptionMinValue() :
      op->vtkSelectionSource::GetFieldTypeOptionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldTypeOptionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeOptionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeOptionMaxValue() :
      op->vtkSelectionSource::GetFieldTypeOptionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldTypeOptionToFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldTypeOptionToFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFieldTypeOptionToFieldType();
    }
    else
    {
      op->vtkSelectionSource::SetFieldTypeOptionToFieldType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldTypeOptionToElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldTypeOptionToElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetFieldTypeOptionToElementType();
    }
    else
    {
      op->vtkSelectionSource::SetFieldTypeOptionToElementType();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldTypeOption(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeOption");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeOption() :
      op->vtkSelectionSource::GetFieldTypeOption());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFieldType(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMinValue() :
      op->vtkSelectionSource::GetFieldTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldTypeMaxValue() :
      op->vtkSelectionSource::GetFieldTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionSource::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetElementType(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetElementType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetElementTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementTypeMinValue() :
      op->vtkSelectionSource::GetElementTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetElementTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementTypeMaxValue() :
      op->vtkSelectionSource::GetElementTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetElementType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetElementType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetElementType() :
      op->vtkSelectionSource::GetElementType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProcessID(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetProcessID(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetProcessIDMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIDMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessIDMinValue() :
      op->vtkSelectionSource::GetProcessIDMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetProcessIDMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessIDMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessIDMaxValue() :
      op->vtkSelectionSource::GetProcessIDMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetProcessID(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProcessID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProcessID() :
      op->vtkSelectionSource::GetProcessID());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_SetNodeName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNodeName(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetNodeName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetNodeName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNodeName(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetNodeName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetNodeName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetNodeName_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetNodeName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNodeName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetNodeName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeName(temp0) :
      op->vtkSelectionSource::GetNodeName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetNodeName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNodeName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetNodeName() :
      op->vtkSelectionSource::GetNodeName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetNodeName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetNodeName_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetNodeName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNodeName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddID_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  long long temp1;
  long long temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionSource::AddID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddID_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  long long temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddID(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSelectionSource_AddID_s1(self, args);
    case 2:
      return PyvtkSelectionSource_AddID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddID");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddStringID_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  long long temp1;
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->AddStringID(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionSource::AddStringID(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddStringID_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddStringID");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  long long temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddStringID(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddStringID(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddStringID(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSelectionSource_AddStringID_s1(self, args);
    case 2:
      return PyvtkSelectionSource_AddStringID_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddStringID");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddLocation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
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
      op->AddLocation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkSelectionSource::AddLocation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddLocation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

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
      op->AddLocation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionSource::AddLocation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddLocation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return PyvtkSelectionSource_AddLocation_s1(self, args);
    case 3:
      return PyvtkSelectionSource_AddLocation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddLocation");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddThreshold_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
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
      op->AddThreshold(temp0, temp1, temp2);
    }
    else
    {
      op->vtkSelectionSource::AddThreshold(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddThreshold_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  double temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddThreshold(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddThreshold(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddThreshold(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkSelectionSource_AddThreshold_s1(self, args);
    case 2:
      return PyvtkSelectionSource_AddThreshold_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddThreshold");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetFrustum_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->SetFrustum(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetFrustum(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetFrustum_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFrustum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetFrustum(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetFrustum(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetFrustum(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetFrustum_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetFrustum_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetFrustum");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddBlock_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddBlock(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddBlock(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddBlock_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlock");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddBlock(temp0);
    }
    else
    {
      op->vtkSelectionSource::AddBlock(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddBlock(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_AddBlock_s1(self, args);
    case 1:
      return PyvtkSelectionSource_AddBlock_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddBlock");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddBlockSelector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddBlockSelector(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddBlockSelector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddBlockSelector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddBlockSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddBlockSelector(temp0);
    }
    else
    {
      op->vtkSelectionSource::AddBlockSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddBlockSelector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_AddBlockSelector_s1(self, args);
    case 1:
      return PyvtkSelectionSource_AddBlockSelector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddBlockSelector");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllBlockSelectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlockSelectors(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllBlockSelectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllBlockSelectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlockSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlockSelectors();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllBlockSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllBlockSelectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllBlockSelectors_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllBlockSelectors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllBlockSelectors");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllIDs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIDs(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllIDs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllIDs();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllIDs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllIDs_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllIDs_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllIDs");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllStringIDs(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllStringIDs(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllStringIDs");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllStringIDs();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllStringIDs();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllStringIDs(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllStringIDs_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllStringIDs_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllStringIDs");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllThresholds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllThresholds(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllThresholds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllThresholds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllThresholds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllThresholds();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllThresholds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllThresholds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllThresholds_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllThresholds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllThresholds");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllLocations_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocations(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllLocations(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllLocations_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllLocations");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllLocations();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllLocations();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllLocations(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllLocations_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllLocations_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllLocations");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllBlocks_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlocks(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllBlocks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllBlocks_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllBlocks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllBlocks();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllBlocks();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllBlocks(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllBlocks_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllBlocks_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllBlocks");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetContentType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetContentType(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetContentType(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetContentType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContentType(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetContentType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetContentType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetContentType_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetContentType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetContentType");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetContentTypeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentTypeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentTypeMinValue() :
      op->vtkSelectionSource::GetContentTypeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContentTypeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentTypeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentTypeMaxValue() :
      op->vtkSelectionSource::GetContentTypeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetContentType_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentType(temp0) :
      op->vtkSelectionSource::GetContentType(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetContentType_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionSource::GetContentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetContentType(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetContentType_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetContentType_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetContentType");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetContainingCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetContainingCells(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetContainingCells(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetContainingCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetContainingCells(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetContainingCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetContainingCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetContainingCells_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetContainingCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetContainingCells");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetContainingCells_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells(temp0) :
      op->vtkSelectionSource::GetContainingCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetContainingCells_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContainingCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContainingCells() :
      op->vtkSelectionSource::GetContainingCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetContainingCells(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetContainingCells_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetContainingCells_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetContainingCells");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetNumberOfLayers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLayers(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetNumberOfLayers(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetNumberOfLayers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLayers(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetNumberOfLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetNumberOfLayers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetNumberOfLayers_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetNumberOfLayers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetNumberOfLayers");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetNumberOfLayersMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMinValue() :
      op->vtkSelectionSource::GetNumberOfLayersMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetNumberOfLayersMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayersMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayersMaxValue() :
      op->vtkSelectionSource::GetNumberOfLayersMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionSource_GetNumberOfLayers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers(temp0) :
      op->vtkSelectionSource::GetNumberOfLayers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetNumberOfLayers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfLayers() :
      op->vtkSelectionSource::GetNumberOfLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetNumberOfLayers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetNumberOfLayers_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetNumberOfLayers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetNumberOfLayers");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetRemoveSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRemoveSeed(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetRemoveSeed(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetRemoveSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveSeed(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetRemoveSeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetRemoveSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetRemoveSeed_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetRemoveSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRemoveSeed");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetRemoveSeed_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveSeed(temp0) :
      op->vtkSelectionSource::GetRemoveSeed(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetRemoveSeed_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveSeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveSeed() :
      op->vtkSelectionSource::GetRemoveSeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetRemoveSeed(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetRemoveSeed_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetRemoveSeed_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRemoveSeed");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetRemoveIntermediateLayers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetRemoveIntermediateLayers(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetRemoveIntermediateLayers(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetRemoveIntermediateLayers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveIntermediateLayers(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetRemoveIntermediateLayers(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetRemoveIntermediateLayers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetRemoveIntermediateLayers_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetRemoveIntermediateLayers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetRemoveIntermediateLayers");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetRemoveIntermediateLayers_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveIntermediateLayers(temp0) :
      op->vtkSelectionSource::GetRemoveIntermediateLayers(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetRemoveIntermediateLayers_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveIntermediateLayers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveIntermediateLayers() :
      op->vtkSelectionSource::GetRemoveIntermediateLayers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetRemoveIntermediateLayers(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetRemoveIntermediateLayers_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetRemoveIntermediateLayers_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetRemoveIntermediateLayers");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetInverse(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInverse(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetInverse(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetInverse_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetInverse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetInverse");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetInverse_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverse(temp0) :
      op->vtkSelectionSource::GetInverse(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetInverse_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverse");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInverse() :
      op->vtkSelectionSource::GetInverse());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetInverse(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetInverse_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetInverse_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetInverse");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetArrayName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayName(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetArrayName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetArrayName_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArrayName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetArrayName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName(temp0) :
      op->vtkSelectionSource::GetArrayName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetArrayName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetArrayName() :
      op->vtkSelectionSource::GetArrayName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetArrayName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetArrayName_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetArrayName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetArrayComponent(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetArrayComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetArrayComponent_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetArrayComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetArrayComponent");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetArrayComponent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent(temp0) :
      op->vtkSelectionSource::GetArrayComponent(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetArrayComponent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkSelectionSource::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetArrayComponent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetArrayComponent_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetArrayComponent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetArrayComponent");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetCompositeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIndex(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetCompositeIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetCompositeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCompositeIndex(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetCompositeIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetCompositeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetCompositeIndex_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetCompositeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetCompositeIndex");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetCompositeIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex(temp0) :
      op->vtkSelectionSource::GetCompositeIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetCompositeIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCompositeIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCompositeIndex() :
      op->vtkSelectionSource::GetCompositeIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetCompositeIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetCompositeIndex_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetCompositeIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCompositeIndex");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalLevel(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalLevel(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalLevel(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetHierarchicalLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetHierarchicalLevel_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetHierarchicalLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHierarchicalLevel");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel(temp0) :
      op->vtkSelectionSource::GetHierarchicalLevel(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalLevel() :
      op->vtkSelectionSource::GetHierarchicalLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetHierarchicalLevel(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetHierarchicalLevel_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetHierarchicalLevel_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHierarchicalLevel");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalIndex(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalIndex(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHierarchicalIndex(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetHierarchicalIndex(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetHierarchicalIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetHierarchicalIndex_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetHierarchicalIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetHierarchicalIndex");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex(temp0) :
      op->vtkSelectionSource::GetHierarchicalIndex(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHierarchicalIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetHierarchicalIndex() :
      op->vtkSelectionSource::GetHierarchicalIndex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetHierarchicalIndex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetHierarchicalIndex_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetHierarchicalIndex_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetHierarchicalIndex");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetAssemblyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyName(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetAssemblyName(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetAssemblyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAssemblyName(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetAssemblyName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetAssemblyName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetAssemblyName_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetAssemblyName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAssemblyName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetAssemblyName_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAssemblyName(temp0) :
      op->vtkSelectionSource::GetAssemblyName(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetAssemblyName_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAssemblyName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetAssemblyName() :
      op->vtkSelectionSource::GetAssemblyName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetAssemblyName(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetAssemblyName_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetAssemblyName_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetAssemblyName");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_AddSelector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddSelector(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::AddSelector(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddSelector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddSelector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->AddSelector(temp0);
    }
    else
    {
      op->vtkSelectionSource::AddSelector(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_AddSelector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_AddSelector_s1(self, args);
    case 1:
      return PyvtkSelectionSource_AddSelector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddSelector");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_RemoveAllSelectors_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSelectors(temp0);
    }
    else
    {
      op->vtkSelectionSource::RemoveAllSelectors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllSelectors_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveAllSelectors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveAllSelectors();
    }
    else
    {
      op->vtkSelectionSource::RemoveAllSelectors();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_RemoveAllSelectors(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_RemoveAllSelectors_s1(self, args);
    case 0:
      return PyvtkSelectionSource_RemoveAllSelectors_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "RemoveAllSelectors");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_SetQueryString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  const char *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetQueryString(temp0, temp1);
    }
    else
    {
      op->vtkSelectionSource::SetQueryString(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetQueryString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQueryString(temp0);
    }
    else
    {
      op->vtkSelectionSource::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_SetQueryString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkSelectionSource_SetQueryString_s1(self, args);
    case 1:
      return PyvtkSelectionSource_SetQueryString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetQueryString");
  return nullptr;
}


static PyObject *
PyvtkSelectionSource_GetQueryString_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetQueryString(temp0) :
      op->vtkSelectionSource::GetQueryString(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetQueryString_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionSource *op = static_cast<vtkSelectionSource *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionSource::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkSelectionSource_GetQueryString(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkSelectionSource_GetQueryString_s1(self, args);
    case 0:
      return PyvtkSelectionSource_GetQueryString_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetQueryString");
  return nullptr;
}

static PyMethodDef PyvtkSelectionSource_Methods[] = {
  {"IsTypeOf", PyvtkSelectionSource_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionSource_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionSource_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSelectionSource\nC++: static vtkSelectionSource *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionSource_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSelectionSource\nC++: vtkSelectionSource *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSelectionSource_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSelectionSource_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfNodes", PyvtkSelectionSource_SetNumberOfNodes, METH_VARARGS,
   "SetNumberOfNodes(self, numberOfNodes:int) -> None\nC++: void SetNumberOfNodes(unsigned int numberOfNodes)\n\nSet/Get the number of nodes that will be created for the\ngenerated selection.\n\nThe default is 1.\n"},
  {"GetNumberOfNodes", PyvtkSelectionSource_GetNumberOfNodes, METH_VARARGS,
   "GetNumberOfNodes(self) -> int\nC++: unsigned int GetNumberOfNodes()\n\n"},
  {"RemoveNode", PyvtkSelectionSource_RemoveNode, METH_VARARGS,
   "RemoveNode(self, idx:int) -> None\nC++: void RemoveNode(unsigned int idx)\nRemoveNode(self, name:str) -> None\nC++: void RemoveNode(const char *name)\n\nRemove a selection node.\n"},
  {"RemoveAllNodes", PyvtkSelectionSource_RemoveAllNodes, METH_VARARGS,
   "RemoveAllNodes(self) -> None\nC++: virtual void RemoveAllNodes()\n\nRemove all selection nodes.\n"},
  {"SetExpression", PyvtkSelectionSource_SetExpression, METH_VARARGS,
   "SetExpression(self, arg:str) -> None\nC++: virtual void SetExpression(const char *arg)\n\nSet/Get the expression that defines the boolean expression to\ncombine the selection nodes. Expression consists of node name\nidentifiers, `|` for boolean-or, '^' for boolean-xor, '&' for\nboolean and, '!' for boolean not, and parenthesis `(` and `)`. If\nyou want to set the expression, be sure to define the node names.\nIf no expression is specified and there are multiple selection\nnodes, then the default expression simply combines all the\nselection nodes using an `or` operator.\n\n`SetExpression` does not validate the expression. It will be\nvalidated in `internally.\n"},
  {"GetExpression", PyvtkSelectionSource_GetExpression, METH_VARARGS,
   "GetExpression(self) -> str\nC++: virtual const char *GetExpression()\n\n"},
  {"SetFieldTypeOption", PyvtkSelectionSource_SetFieldTypeOption, METH_VARARGS,
   "SetFieldTypeOption(self, _arg:int) -> None\nC++: virtual void SetFieldTypeOption(int _arg)\n\n"},
  {"GetFieldTypeOptionMinValue", PyvtkSelectionSource_GetFieldTypeOptionMinValue, METH_VARARGS,
   "GetFieldTypeOptionMinValue(self) -> int\nC++: virtual int GetFieldTypeOptionMinValue()\n\n"},
  {"GetFieldTypeOptionMaxValue", PyvtkSelectionSource_GetFieldTypeOptionMaxValue, METH_VARARGS,
   "GetFieldTypeOptionMaxValue(self) -> int\nC++: virtual int GetFieldTypeOptionMaxValue()\n\n"},
  {"SetFieldTypeOptionToFieldType", PyvtkSelectionSource_SetFieldTypeOptionToFieldType, METH_VARARGS,
   "SetFieldTypeOptionToFieldType(self) -> None\nC++: virtual void SetFieldTypeOptionToFieldType()\n\n"},
  {"SetFieldTypeOptionToElementType", PyvtkSelectionSource_SetFieldTypeOptionToElementType, METH_VARARGS,
   "SetFieldTypeOptionToElementType(self) -> None\nC++: virtual void SetFieldTypeOptionToElementType()\n\n"},
  {"GetFieldTypeOption", PyvtkSelectionSource_GetFieldTypeOption, METH_VARARGS,
   "GetFieldTypeOption(self) -> int\nC++: virtual int GetFieldTypeOption()\n\n"},
  {"SetFieldType", PyvtkSelectionSource_SetFieldType, METH_VARARGS,
   "SetFieldType(self, _arg:int) -> None\nC++: virtual void SetFieldType(int _arg)\n\nSet/Get the field type for the generated selection. Possible\nvalues are as defined by vtkSelectionNode::SelectionField.\n\nThe default is vtkSelectionNode::SelectionField::CELL.\n"},
  {"GetFieldTypeMinValue", PyvtkSelectionSource_GetFieldTypeMinValue, METH_VARARGS,
   "GetFieldTypeMinValue(self) -> int\nC++: virtual int GetFieldTypeMinValue()\n\n"},
  {"GetFieldTypeMaxValue", PyvtkSelectionSource_GetFieldTypeMaxValue, METH_VARARGS,
   "GetFieldTypeMaxValue(self) -> int\nC++: virtual int GetFieldTypeMaxValue()\n\n"},
  {"GetFieldType", PyvtkSelectionSource_GetFieldType, METH_VARARGS,
   "GetFieldType(self) -> int\nC++: virtual int GetFieldType()\n\n"},
  {"SetElementType", PyvtkSelectionSource_SetElementType, METH_VARARGS,
   "SetElementType(self, _arg:int) -> None\nC++: virtual void SetElementType(int _arg)\n\nSet/Get which types of elements are being selected. Accepted\nvalues are defined in `vtkDataObject::AttributeTypes`. Note,\n`vtkDataObject::FIELD` and `vtkDataObject::POINT_THEN_CELL` are\nnot supported.\n\nThe default is vtkDataObject::AttributeTypes::Cell.\n"},
  {"GetElementTypeMinValue", PyvtkSelectionSource_GetElementTypeMinValue, METH_VARARGS,
   "GetElementTypeMinValue(self) -> int\nC++: virtual int GetElementTypeMinValue()\n\n"},
  {"GetElementTypeMaxValue", PyvtkSelectionSource_GetElementTypeMaxValue, METH_VARARGS,
   "GetElementTypeMaxValue(self) -> int\nC++: virtual int GetElementTypeMaxValue()\n\n"},
  {"GetElementType", PyvtkSelectionSource_GetElementType, METH_VARARGS,
   "GetElementType(self) -> int\nC++: virtual int GetElementType()\n\n"},
  {"SetProcessID", PyvtkSelectionSource_SetProcessID, METH_VARARGS,
   "SetProcessID(self, _arg:int) -> None\nC++: virtual void SetProcessID(int _arg)\n\nSet/Get which process to limit the selection to. `-1` is treated\nas all processes.\n\nThe default is -1.\n"},
  {"GetProcessIDMinValue", PyvtkSelectionSource_GetProcessIDMinValue, METH_VARARGS,
   "GetProcessIDMinValue(self) -> int\nC++: virtual int GetProcessIDMinValue()\n\n"},
  {"GetProcessIDMaxValue", PyvtkSelectionSource_GetProcessIDMaxValue, METH_VARARGS,
   "GetProcessIDMaxValue(self) -> int\nC++: virtual int GetProcessIDMaxValue()\n\n"},
  {"GetProcessID", PyvtkSelectionSource_GetProcessID, METH_VARARGS,
   "GetProcessID(self) -> int\nC++: virtual int GetProcessID()\n\n"},
  {"SetNodeName", PyvtkSelectionSource_SetNodeName, METH_VARARGS,
   "SetNodeName(self, nodeId:int, name:str) -> None\nC++: void SetNodeName(unsigned int nodeId, const char *name)\nSetNodeName(self, name:str) -> None\nC++: void SetNodeName(const char *name)\n\nSet/Get the node name.\n\nIf you want to set the Expression, be sure to define the node\nnames.\n\nIf the node name is not defined, a default node name is created\natomically at each execution of the filter to guarantee\nuniqueness. GetNodeName() will return a non-empty name only if\nyou have defined it before.\n"},
  {"GetNodeName", PyvtkSelectionSource_GetNodeName, METH_VARARGS,
   "GetNodeName(self, nodeId:int) -> str\nC++: const char *GetNodeName(unsigned int nodeId)\nGetNodeName(self) -> str\nC++: const char *GetNodeName()\n\n"},
  {"AddID", PyvtkSelectionSource_AddID, METH_VARARGS,
   "AddID(self, nodeId:int, piece:int, id:int) -> None\nC++: void AddID(unsigned int nodeId, vtkIdType piece,\n    vtkIdType id)\nAddID(self, piece:int, id:int) -> None\nC++: void AddID(vtkIdType piece, vtkIdType id)\n\nAdd a (piece, id) to the selection set. The source will generate\nonly the ids for which piece == UPDATE_PIECE_NUMBER. If piece ==\n-1, the id applies to all pieces.\n"},
  {"AddStringID", PyvtkSelectionSource_AddStringID, METH_VARARGS,
   "AddStringID(self, nodeId:int, piece:int, id:str) -> None\nC++: void AddStringID(unsigned int nodeId, vtkIdType piece,\n    const char *id)\nAddStringID(self, piece:int, id:str) -> None\nC++: void AddStringID(vtkIdType piece, const char *id)\n\n"},
  {"AddLocation", PyvtkSelectionSource_AddLocation, METH_VARARGS,
   "AddLocation(self, nodeId:int, x:float, y:float, z:float) -> None\nC++: void AddLocation(unsigned int nodeId, double x, double y,\n    double z)\nAddLocation(self, x:float, y:float, z:float) -> None\nC++: void AddLocation(double x, double y, double z)\n\nAdd a point in world space to probe at.\n"},
  {"AddThreshold", PyvtkSelectionSource_AddThreshold, METH_VARARGS,
   "AddThreshold(self, nodeId:int, min:float, max:float) -> None\nC++: void AddThreshold(unsigned int nodeId, double min,\n    double max)\nAddThreshold(self, min:float, max:float) -> None\nC++: void AddThreshold(double min, double max)\n\nAdd a value range to threshold within.\n"},
  {"SetFrustum", PyvtkSelectionSource_SetFrustum, METH_VARARGS,
   "SetFrustum(self, nodeId:int, vertices:[float, ...]) -> None\nC++: void SetFrustum(unsigned int nodeId, double *vertices)\nSetFrustum(self, vertices:[float, ...]) -> None\nC++: void SetFrustum(double *vertices)\n\nSet a frustum to choose within.\n"},
  {"AddBlock", PyvtkSelectionSource_AddBlock, METH_VARARGS,
   "AddBlock(self, nodeId:int, block:int) -> None\nC++: void AddBlock(unsigned int nodeId, vtkIdType block)\nAddBlock(self, blockno:int) -> None\nC++: void AddBlock(vtkIdType blockno)\n\nAdd the flat-index/composite index for a block.\n"},
  {"AddBlockSelector", PyvtkSelectionSource_AddBlockSelector, METH_VARARGS,
   "AddBlockSelector(self, nodeId:int, block:str) -> None\nC++: void AddBlockSelector(unsigned int nodeId, const char *block)\nAddBlockSelector(self, selector:str) -> None\nC++: void AddBlockSelector(const char *selector)\n\nAdd/Remove block-selectors to make selections with\nvtkSelectionNode::BLOCK_SELECTORS as the content-type.\n"},
  {"RemoveAllBlockSelectors", PyvtkSelectionSource_RemoveAllBlockSelectors, METH_VARARGS,
   "RemoveAllBlockSelectors(self, nodeId:int) -> None\nC++: void RemoveAllBlockSelectors(unsigned int nodeId)\nRemoveAllBlockSelectors(self) -> None\nC++: void RemoveAllBlockSelectors()\n\n"},
  {"RemoveAllIDs", PyvtkSelectionSource_RemoveAllIDs, METH_VARARGS,
   "RemoveAllIDs(self, nodeId:int) -> None\nC++: void RemoveAllIDs(unsigned int nodeId)\nRemoveAllIDs(self) -> None\nC++: void RemoveAllIDs()\n\nRemoves all IDs.\n"},
  {"RemoveAllStringIDs", PyvtkSelectionSource_RemoveAllStringIDs, METH_VARARGS,
   "RemoveAllStringIDs(self, nodeId:int) -> None\nC++: void RemoveAllStringIDs(unsigned int nodeId)\nRemoveAllStringIDs(self) -> None\nC++: void RemoveAllStringIDs()\n\n"},
  {"RemoveAllThresholds", PyvtkSelectionSource_RemoveAllThresholds, METH_VARARGS,
   "RemoveAllThresholds(self, nodeId:int) -> None\nC++: void RemoveAllThresholds(unsigned int nodeId)\nRemoveAllThresholds(self) -> None\nC++: void RemoveAllThresholds()\n\nRemove all thresholds added with AddThreshold.\n"},
  {"RemoveAllLocations", PyvtkSelectionSource_RemoveAllLocations, METH_VARARGS,
   "RemoveAllLocations(self, nodeId:int) -> None\nC++: void RemoveAllLocations(unsigned int nodeId)\nRemoveAllLocations(self) -> None\nC++: void RemoveAllLocations()\n\nRemove all locations added with AddLocation.\n"},
  {"RemoveAllBlocks", PyvtkSelectionSource_RemoveAllBlocks, METH_VARARGS,
   "RemoveAllBlocks(self, nodeId:int) -> None\nC++: void RemoveAllBlocks(unsigned int nodeId)\nRemoveAllBlocks(self) -> None\nC++: void RemoveAllBlocks()\n\nRemove all blocks added with AddBlock.\n"},
  {"SetContentType", PyvtkSelectionSource_SetContentType, METH_VARARGS,
   "SetContentType(self, nodeId:int, type:int) -> None\nC++: void SetContentType(unsigned int nodeId, int type)\nSetContentType(self, contentType:int) -> None\nC++: void SetContentType(int contentType)\n\nSet/Get the content type. Possible values are as defined by\nvtkSelectionNode::SelectionContent.\n\nThe default is vtkSelectionNode::SelectionContent::INDICES.\n"},
  {"GetContentTypeMinValue", PyvtkSelectionSource_GetContentTypeMinValue, METH_VARARGS,
   "GetContentTypeMinValue(self) -> int\nC++: int GetContentTypeMinValue()\n\n"},
  {"GetContentTypeMaxValue", PyvtkSelectionSource_GetContentTypeMaxValue, METH_VARARGS,
   "GetContentTypeMaxValue(self) -> int\nC++: int GetContentTypeMaxValue()\n\n"},
  {"GetContentType", PyvtkSelectionSource_GetContentType, METH_VARARGS,
   "GetContentType(self, nodeId:int) -> int\nC++: int GetContentType(unsigned int nodeId)\nGetContentType(self) -> int\nC++: int GetContentType()\n\n"},
  {"SetContainingCells", PyvtkSelectionSource_SetContainingCells, METH_VARARGS,
   "SetContainingCells(self, nodeId:int, containingCells:int) -> None\nC++: void SetContainingCells(unsigned int nodeId,\n    vtkTypeBool containingCells)\nSetContainingCells(self, containingCells:int) -> None\nC++: void SetContainingCells(vtkTypeBool containingCells)\n\nWhen extracting by points, extract the cells that contain the\npassing points.\n\nThe default is false.\n"},
  {"GetContainingCells", PyvtkSelectionSource_GetContainingCells, METH_VARARGS,
   "GetContainingCells(self, nodeId:int) -> int\nC++: vtkTypeBool GetContainingCells(unsigned int nodeId)\nGetContainingCells(self) -> int\nC++: vtkTypeBool GetContainingCells()\n\n"},
  {"SetNumberOfLayers", PyvtkSelectionSource_SetNumberOfLayers, METH_VARARGS,
   "SetNumberOfLayers(self, nodeId:int, numberOfLayers:int) -> None\nC++: void SetNumberOfLayers(unsigned int nodeId,\n    int numberOfLayers)\nSetNumberOfLayers(self, numberOfLayers:int) -> None\nC++: void SetNumberOfLayers(int numberOfLayers)\n\nSet/Get the number of layers to extract connected to the selected\nelements.\n\nThe default is 0.\n"},
  {"GetNumberOfLayersMinValue", PyvtkSelectionSource_GetNumberOfLayersMinValue, METH_VARARGS,
   "GetNumberOfLayersMinValue(self) -> int\nC++: int GetNumberOfLayersMinValue()\n\n"},
  {"GetNumberOfLayersMaxValue", PyvtkSelectionSource_GetNumberOfLayersMaxValue, METH_VARARGS,
   "GetNumberOfLayersMaxValue(self) -> int\nC++: int GetNumberOfLayersMaxValue()\n\n"},
  {"GetNumberOfLayers", PyvtkSelectionSource_GetNumberOfLayers, METH_VARARGS,
   "GetNumberOfLayers(self, nodeId:int) -> int\nC++: int GetNumberOfLayers(unsigned int nodeId)\nGetNumberOfLayers(self) -> int\nC++: int GetNumberOfLayers()\n\n"},
  {"SetRemoveSeed", PyvtkSelectionSource_SetRemoveSeed, METH_VARARGS,
   "SetRemoveSeed(self, nodeId:int, RemoveSeed:bool) -> None\nC++: void SetRemoveSeed(unsigned int nodeId, bool RemoveSeed)\nSetRemoveSeed(self, RemoveSeed:bool) -> None\nC++: void SetRemoveSeed(bool RemoveSeed)\n\nSet/Get the number of layers related flag to remove seed\nselection\n\nThe default is false.\n"},
  {"GetRemoveSeed", PyvtkSelectionSource_GetRemoveSeed, METH_VARARGS,
   "GetRemoveSeed(self, nodeId:int) -> bool\nC++: bool GetRemoveSeed(unsigned int nodeId)\nGetRemoveSeed(self) -> bool\nC++: bool GetRemoveSeed()\n\n"},
  {"SetRemoveIntermediateLayers", PyvtkSelectionSource_SetRemoveIntermediateLayers, METH_VARARGS,
   "SetRemoveIntermediateLayers(self, nodeId:int,\n    RemoveIntermediateLayers:bool) -> None\nC++: void SetRemoveIntermediateLayers(unsigned int nodeId,\n    bool RemoveIntermediateLayers)\nSetRemoveIntermediateLayers(self, RemoveIntermediateLayers:bool)\n    -> None\nC++: void SetRemoveIntermediateLayers(\n    bool RemoveIntermediateLayers)\n\nSet/Get the number of layers related flag to remove intermediate\nlayers\n\nThe default is false.\n"},
  {"GetRemoveIntermediateLayers", PyvtkSelectionSource_GetRemoveIntermediateLayers, METH_VARARGS,
   "GetRemoveIntermediateLayers(self, nodeId:int) -> bool\nC++: bool GetRemoveIntermediateLayers(unsigned int nodeId)\nGetRemoveIntermediateLayers(self) -> bool\nC++: bool GetRemoveIntermediateLayers()\n\n"},
  {"SetInverse", PyvtkSelectionSource_SetInverse, METH_VARARGS,
   "SetInverse(self, nodeId:int, inverse:int) -> None\nC++: void SetInverse(unsigned int nodeId, vtkTypeBool inverse)\nSetInverse(self, inverse:int) -> None\nC++: void SetInverse(vtkTypeBool inverse)\n\nDetermines whether the selection describes what to include or\nexclude.\n\nThe Default is 0, meaning include.\n"},
  {"GetInverse", PyvtkSelectionSource_GetInverse, METH_VARARGS,
   "GetInverse(self, nodeId:int) -> int\nC++: vtkTypeBool GetInverse(unsigned int nodeId)\nGetInverse(self) -> int\nC++: vtkTypeBool GetInverse()\n\n"},
  {"SetArrayName", PyvtkSelectionSource_SetArrayName, METH_VARARGS,
   "SetArrayName(self, nodeId:int, name:str) -> None\nC++: void SetArrayName(unsigned int nodeId, const char *name)\nSetArrayName(self, name:str) -> None\nC++: void SetArrayName(const char *name)\n\nGet/Set the name used for the SelectionList in the generated\nvtkSelectionNode.\n"},
  {"GetArrayName", PyvtkSelectionSource_GetArrayName, METH_VARARGS,
   "GetArrayName(self, nodeId:int) -> str\nC++: const char *GetArrayName(unsigned int nodeId)\nGetArrayName(self) -> str\nC++: const char *GetArrayName()\n\n"},
  {"SetArrayComponent", PyvtkSelectionSource_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, nodeId:int, component:int) -> None\nC++: void SetArrayComponent(unsigned int nodeId, int component)\nSetArrayComponent(self, component:int) -> None\nC++: void SetArrayComponent(int component)\n\nSet/Get the component number for the array specified by\nArrayName.\n\nThe default is component 0. Use -1 for magnitude.\n"},
  {"GetArrayComponent", PyvtkSelectionSource_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self, nodeId:int) -> int\nC++: int GetArrayComponent(unsigned int nodeId)\nGetArrayComponent(self) -> int\nC++: int GetArrayComponent()\n\n"},
  {"SetCompositeIndex", PyvtkSelectionSource_SetCompositeIndex, METH_VARARGS,
   "SetCompositeIndex(self, nodeId:int, index:int) -> None\nC++: void SetCompositeIndex(unsigned int nodeId, int index)\nSetCompositeIndex(self, compositeIndex:int) -> None\nC++: void SetCompositeIndex(int compositeIndex)\n\nSet/Get the CompositeIndex. If CompositeIndex < 0 then\nCOMPOSITE_INDEX() is not added to the output.\n\nThe default is -1.\n"},
  {"GetCompositeIndex", PyvtkSelectionSource_GetCompositeIndex, METH_VARARGS,
   "GetCompositeIndex(self, nodeId:int) -> int\nC++: int GetCompositeIndex(unsigned int nodeId)\nGetCompositeIndex(self) -> int\nC++: int GetCompositeIndex()\n\n"},
  {"SetHierarchicalLevel", PyvtkSelectionSource_SetHierarchicalLevel, METH_VARARGS,
   "SetHierarchicalLevel(self, nodeId:int, level:int) -> None\nC++: void SetHierarchicalLevel(unsigned int nodeId, int level)\nSetHierarchicalLevel(self, level:int) -> None\nC++: void SetHierarchicalLevel(int level)\n\nSet/Get the Hierarchical/HierarchicalIndex. If HierarchicalLevel\nor HierarchicalIndex < 0 , then HIERARCHICAL_LEVEL() and\nHIERARCHICAL_INDEX() keys are not added to the output.\n\nThe default for both is -1.\n"},
  {"GetHierarchicalLevel", PyvtkSelectionSource_GetHierarchicalLevel, METH_VARARGS,
   "GetHierarchicalLevel(self, nodeId:int) -> int\nC++: int GetHierarchicalLevel(unsigned int nodeId)\nGetHierarchicalLevel(self) -> int\nC++: int GetHierarchicalLevel()\n\n"},
  {"SetHierarchicalIndex", PyvtkSelectionSource_SetHierarchicalIndex, METH_VARARGS,
   "SetHierarchicalIndex(self, nodeId:int, index:int) -> None\nC++: void SetHierarchicalIndex(unsigned int nodeId, int index)\nSetHierarchicalIndex(self, index:int) -> None\nC++: void SetHierarchicalIndex(int index)\n\n"},
  {"GetHierarchicalIndex", PyvtkSelectionSource_GetHierarchicalIndex, METH_VARARGS,
   "GetHierarchicalIndex(self, nodeId:int) -> int\nC++: int GetHierarchicalIndex(unsigned int nodeId)\nGetHierarchicalIndex(self) -> int\nC++: int GetHierarchicalIndex()\n\n"},
  {"SetAssemblyName", PyvtkSelectionSource_SetAssemblyName, METH_VARARGS,
   "SetAssemblyName(self, nodeId:int, name:str) -> None\nC++: void SetAssemblyName(unsigned int nodeId, const char *name)\nSetAssemblyName(self, name:str) -> None\nC++: void SetAssemblyName(const char *name)\n\nFor selector-based selection qualification. Note, this should not\nbe confused with block-selectors used to select blocks using\nselectors. These here are qualifiers i.e. they limit the selected\nitems.\n"},
  {"GetAssemblyName", PyvtkSelectionSource_GetAssemblyName, METH_VARARGS,
   "GetAssemblyName(self, nodeId:int) -> str\nC++: const char *GetAssemblyName(unsigned int nodeId)\nGetAssemblyName(self) -> str\nC++: const char *GetAssemblyName()\n\n"},
  {"AddSelector", PyvtkSelectionSource_AddSelector, METH_VARARGS,
   "AddSelector(self, nodeId:int, selector:str) -> None\nC++: void AddSelector(unsigned int nodeId, const char *selector)\nAddSelector(self, selector:str) -> None\nC++: void AddSelector(const char *selector)\n\n"},
  {"RemoveAllSelectors", PyvtkSelectionSource_RemoveAllSelectors, METH_VARARGS,
   "RemoveAllSelectors(self, nodeId:int) -> None\nC++: void RemoveAllSelectors(unsigned int nodeId)\nRemoveAllSelectors(self) -> None\nC++: void RemoveAllSelectors()\n\n"},
  {"SetQueryString", PyvtkSelectionSource_SetQueryString, METH_VARARGS,
   "SetQueryString(self, nodeId:int, queryString:str) -> None\nC++: void SetQueryString(unsigned int nodeId,\n    const char *queryString)\nSetQueryString(self, query:str) -> None\nC++: void SetQueryString(const char *query)\n\nSet/Get the query expression string.\n"},
  {"GetQueryString", PyvtkSelectionSource_GetQueryString, METH_VARARGS,
   "GetQueryString(self, nodeId:int) -> str\nC++: const char *GetQueryString(unsigned int nodeId)\nGetQueryString(self) -> str\nC++: const char *GetQueryString()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSelectionSource_Doc =
  "vtkSelectionSource - Generate selection from given set of ids\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "vtkSelectionSource generates a vtkSelection from a set of (piece id,\n"
  "cell id) pairs. It will only generate the selection values that match\n"
  "UPDATE_PIECE_NUMBER (i.e. piece == UPDATE_PIECE_NUMBER).\n"
  "vtkSelectionSource can generate a vtkSelection with one or many\n"
  "vtkSelectionNodes.\n\n"
  "To generate only one vtkSelectionNode, use the functions which don't\n"
  "pass a nodeId to set/get the node information. To generate more than\n"
  "one vtkSelectionNode, use the SetNumberOfNodes/RemoveNode to\n"
  "manipulate the number of nodes, and use the functions that pass the\n"
  "nodeId to set the node information The different nodes can have\n"
  "different contentType per node but the fieldType/elementType is\n"
  "common across all nodes.\n\n"
  "To define the relation between the nodes you can use SetExpression.\n"
  "If non-empty, the expression is a boolean expression that defines how\n"
  "the selection nodes present in the selection are to be combined\n"
  "together to form the selection. If no expression is specified and\n"
  "there are multiple selection nodes, then the default expression\n"
  "simply combines all the selection nodes using an `or` operator.\n\n"
  "User-supplied, application-specific selections (with a ContentType of\n"
  "vtkSelectionNode::USER) are not supported.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectionSource_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSources.vtkSelectionSource", // tp_name
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
  PyvtkSelectionSource_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionSource_StaticNew()
{
  return vtkSelectionSource::New();
}

PyObject *PyvtkSelectionSource_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSelectionSource_Type, PyvtkSelectionSource_Methods,
    "vtkSelectionSource",
 &PyvtkSelectionSource_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSelectionSource_FieldTypeOptions_Type);
  PyVTKEnum_Add(&PyvtkSelectionSource_FieldTypeOptions_Type, "vtkSelectionSource.FieldTypeOptions");

  o = (PyObject *)&PyvtkSelectionSource_FieldTypeOptions_Type;
  if (PyDict_SetItemString(d, "FieldTypeOptions", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSelectionSource::FieldTypeOptions cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "FIELD_TYPE", vtkSelectionSource::FIELD_TYPE },
        { "ELEMENT_TYPE", vtkSelectionSource::ELEMENT_TYPE },
      };

    o = PyvtkSelectionSource_FieldTypeOptions_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionSource(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionSource_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionSource", o) != 0)
  {
    Py_DECREF(o);
  }

}

