// python wrapper for vtkSelectionNode
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSelectionNode(PyObject *dict); }
extern "C" { PyObject *PyvtkSelectionNode_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectionNode_SelectionContent_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSelectionNode.SelectionContent", // tp_name
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
PyObject *PyvtkSelectionNode_SelectionContent_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSelectionNode_SelectionContent_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectionNode_SelectionField_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSelectionNode.SelectionField", // tp_name
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
PyObject *PyvtkSelectionNode_SelectionField_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSelectionNode_SelectionField_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSelectionNode_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSelectionNode::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSelectionNode *tempr = vtkSelectionNode::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSelectionNode *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSelectionNode::NewInstance());

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
PyvtkSelectionNode_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSelectionNode::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSelectionNode::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkSelectionNode::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkAbstractArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractArray"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractArray *tempr = (ap.IsBound() ?
      op->GetSelectionList() :
      op->vtkSelectionNode::GetSelectionList());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkDataSetAttributes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSetAttributes"))
  {
    if (ap.IsBound())
    {
      op->SetSelectionData(temp0);
    }
    else
    {
      op->vtkSelectionNode::SetSelectionData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetSelectionData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetAttributes *tempr = (ap.IsBound() ?
      op->GetSelectionData() :
      op->vtkSelectionNode::GetSelectionData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInformation *tempr = (ap.IsBound() ?
      op->GetProperties() :
      op->vtkSelectionNode::GetProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkSelectionNode::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSelectionNode::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkSelectionNode::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTENT_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTENT_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTENT_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      op->vtkSelectionNode::SetContentType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetContentType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContentType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetContentType() :
      op->vtkSelectionNode::GetContentType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetContentTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetContentTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSelectionNode::GetContentTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_FIELD_TYPE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "FIELD_TYPE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::FIELD_TYPE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      op->vtkSelectionNode::SetFieldType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFieldType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFieldType() :
      op->vtkSelectionNode::GetFieldType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldTypeAsString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldTypeAsString");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const char *tempr = vtkSelectionNode::GetFieldTypeAsString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetFieldTypeFromString(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFieldTypeFromString");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::GetFieldTypeFromString(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertSelectionFieldToAttributeType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertSelectionFieldToAttributeType");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::ConvertSelectionFieldToAttributeType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ConvertAttributeTypeToSelectionField(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertAttributeTypeToSelectionField");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSelectionNode::ConvertAttributeTypeToSelectionField(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

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
      op->vtkSelectionNode::SetQueryString(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_GetQueryString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQueryString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetQueryString() :
      op->vtkSelectionNode::GetQueryString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_EPSILON(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "EPSILON");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkSelectionNode::EPSILON();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ZBUFFER_VALUE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ZBUFFER_VALUE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationDoubleKey *tempr = vtkSelectionNode::ZBUFFER_VALUE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONTAINING_CELLS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONTAINING_CELLS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONTAINING_CELLS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONNECTED_LAYERS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONNECTED_LAYERS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONNECTED_LAYERS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONNECTED_LAYERS_REMOVE_SEED(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONNECTED_LAYERS_REMOVE_SEED");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONNECTED_LAYERS_REMOVE_SEED();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPONENT_NUMBER(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPONENT_NUMBER");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPONENT_NUMBER();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_INVERSE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "INVERSE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::INVERSE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PIXEL_COUNT(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PIXEL_COUNT");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PIXEL_COUNT();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::SOURCE();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SOURCE_ID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SOURCE_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::SOURCE_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationObjectBaseKey *tempr = vtkSelectionNode::PROP();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROP_ID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PROP_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROP_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_PROCESS_ID(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PROCESS_ID");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::PROCESS_ID();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_ASSEMBLY_NAME(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ASSEMBLY_NAME");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringKey *tempr = vtkSelectionNode::ASSEMBLY_NAME();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SELECTORS(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SELECTORS");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationStringVectorKey *tempr = vtkSelectionNode::SELECTORS();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_COMPOSITE_INDEX(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "COMPOSITE_INDEX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::COMPOSITE_INDEX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_LEVEL(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_LEVEL");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_LEVEL();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_HIERARCHICAL_INDEX(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "HIERARCHICAL_INDEX");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkInformationIntegerKey *tempr = vtkSelectionNode::HIERARCHICAL_INDEX();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_UnionSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnionSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->UnionSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::UnionSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_SubtractSelectionList(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SubtractSelectionList");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode"))
  {
    if (ap.IsBound())
    {
      op->SubtractSelectionList(temp0);
    }
    else
    {
      op->vtkSelectionNode::SubtractSelectionList(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSelectionNode_EqualProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EqualProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSelectionNode *op = static_cast<vtkSelectionNode *>(vp);

  vtkSelectionNode *temp0 = nullptr;
  bool temp1 = true;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkSelectionNode") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    bool tempr = (ap.IsBound() ?
      op->EqualProperties(temp0, temp1) :
      op->vtkSelectionNode::EqualProperties(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSelectionNode_Methods[] = {
  {"IsTypeOf", PyvtkSelectionNode_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSelectionNode_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSelectionNode_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSelectionNode\nC++: static vtkSelectionNode *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSelectionNode_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSelectionNode\nC++: vtkSelectionNode *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSelectionNode_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSelectionNode_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Initialize", PyvtkSelectionNode_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: virtual void Initialize()\n\nRestore data object to initial state,\n"},
  {"SetSelectionList", PyvtkSelectionNode_SetSelectionList, METH_VARARGS,
   "SetSelectionList(self, __a:vtkAbstractArray) -> None\nC++: virtual void SetSelectionList(vtkAbstractArray *)\n\nGet/Set the selection list. The selection list is the container\nthat stores values that indicate the selected items. What these\nvalues correspond to depends on the `ContentType`. `ContentType`\nmay also dictate the type and form of the selection list array.\n"},
  {"GetSelectionList", PyvtkSelectionNode_GetSelectionList, METH_VARARGS,
   "GetSelectionList(self) -> vtkAbstractArray\nC++: virtual vtkAbstractArray *GetSelectionList()\n\n"},
  {"SetSelectionData", PyvtkSelectionNode_SetSelectionData, METH_VARARGS,
   "SetSelectionData(self, data:vtkDataSetAttributes) -> None\nC++: virtual void SetSelectionData(vtkDataSetAttributes *data)\n\nSets the selection table.\n"},
  {"GetSelectionData", PyvtkSelectionNode_GetSelectionData, METH_VARARGS,
   "GetSelectionData(self) -> vtkDataSetAttributes\nC++: virtual vtkDataSetAttributes *GetSelectionData()\n\n"},
  {"GetProperties", PyvtkSelectionNode_GetProperties, METH_VARARGS,
   "GetProperties(self) -> vtkInformation\nC++: virtual vtkInformation *GetProperties()\n\nReturns the property map.\n"},
  {"DeepCopy", PyvtkSelectionNode_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkSelectionNode) -> None\nC++: virtual void DeepCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input.\n"},
  {"ShallowCopy", PyvtkSelectionNode_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkSelectionNode) -> None\nC++: virtual void ShallowCopy(vtkSelectionNode *src)\n\nCopy properties, selection list and children of the input. This\nis a shallow copy: selection lists and pointers in the properties\nare passed by reference.\n"},
  {"GetMTime", PyvtkSelectionNode_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn the MTime taking into account changes to the properties\n"},
  {"CONTENT_TYPE", PyvtkSelectionNode_CONTENT_TYPE, METH_VARARGS,
   "CONTENT_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTENT_TYPE()\n\nGet the (primary) property that describes the content of a\nselection node's data. This key takes on values from the\nSelectionContent enum. GetContentType() returns -1 if the content\ntype is not set.\n\n\\sa vtkSelectionNode::SelectionContent\n"},
  {"SetContentType", PyvtkSelectionNode_SetContentType, METH_VARARGS,
   "SetContentType(self, type:int) -> None\nC++: virtual void SetContentType(int type)\n\nGet or set the content type of the selection. This is the same as\nsetting the CONTENT_TYPE() key on the property.\n"},
  {"GetContentType", PyvtkSelectionNode_GetContentType, METH_VARARGS,
   "GetContentType(self) -> int\nC++: virtual int GetContentType()\n\n"},
  {"GetContentTypeAsString", PyvtkSelectionNode_GetContentTypeAsString, METH_VARARGS,
   "GetContentTypeAsString(type:int) -> str\nC++: static const char *GetContentTypeAsString(int type)\n\nGet the content type as a string.\n"},
  {"FIELD_TYPE", PyvtkSelectionNode_FIELD_TYPE, METH_VARARGS,
   "FIELD_TYPE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *FIELD_TYPE()\n\nControls whether cell, point, or field data determine what is\ninside and out. The default is CELL. Vertex and edge types are\nalso available for graph classes. GetFieldType() returns -1 if\nthe field type is not set.\n"},
  {"SetFieldType", PyvtkSelectionNode_SetFieldType, METH_VARARGS,
   "SetFieldType(self, type:int) -> None\nC++: virtual void SetFieldType(int type)\n\nGet or set the field type of the selection. This is the same as\nsetting the FIELD_TYPE() key on the property.\n"},
  {"GetFieldType", PyvtkSelectionNode_GetFieldType, METH_VARARGS,
   "GetFieldType(self) -> int\nC++: virtual int GetFieldType()\n\n"},
  {"GetFieldTypeAsString", PyvtkSelectionNode_GetFieldTypeAsString, METH_VARARGS,
   "GetFieldTypeAsString(type:int) -> str\nC++: static const char *GetFieldTypeAsString(int type)\n\nGet the field type as a string.\n"},
  {"GetFieldTypeFromString", PyvtkSelectionNode_GetFieldTypeFromString, METH_VARARGS,
   "GetFieldTypeFromString(type:str) -> int\nC++: static int GetFieldTypeFromString(const char *type)\n\nGet field type from string. Returns NUM_FIELD_TYPES if not found.\n"},
  {"ConvertSelectionFieldToAttributeType", PyvtkSelectionNode_ConvertSelectionFieldToAttributeType, METH_VARARGS,
   "ConvertSelectionFieldToAttributeType(val:int) -> int\nC++: static int ConvertSelectionFieldToAttributeType(int val)\n\nMethods to convert vtkSelectionNode::SelectionField to\nvtkDataSetAttribute::AttributeTypes and vice-versa.\n"},
  {"ConvertAttributeTypeToSelectionField", PyvtkSelectionNode_ConvertAttributeTypeToSelectionField, METH_VARARGS,
   "ConvertAttributeTypeToSelectionField(val:int) -> int\nC++: static int ConvertAttributeTypeToSelectionField(int val)\n\n"},
  {"SetQueryString", PyvtkSelectionNode_SetQueryString, METH_VARARGS,
   "SetQueryString(self, _arg:str) -> None\nC++: virtual void SetQueryString(const char *_arg)\n\nSet/Get the query expression string.\n"},
  {"GetQueryString", PyvtkSelectionNode_GetQueryString, METH_VARARGS,
   "GetQueryString(self) -> str\nC++: virtual char *GetQueryString()\n\n"},
  {"EPSILON", PyvtkSelectionNode_EPSILON, METH_VARARGS,
   "EPSILON() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *EPSILON()\n\nFor location selection of points, if distance is greater than\nthis reject.\n"},
  {"ZBUFFER_VALUE", PyvtkSelectionNode_ZBUFFER_VALUE, METH_VARARGS,
   "ZBUFFER_VALUE() -> vtkInformationDoubleKey\nC++: static vtkInformationDoubleKey *ZBUFFER_VALUE()\n\nIf present, closest zbuffer value of this selection\n"},
  {"CONTAINING_CELLS", PyvtkSelectionNode_CONTAINING_CELLS, METH_VARARGS,
   "CONTAINING_CELLS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONTAINING_CELLS()\n\nThis flag tells the extraction filter, when FIELD_TYPE==POINT,\nthat it should also extract the cells that contain any of the\nextracted points.\n"},
  {"CONNECTED_LAYERS", PyvtkSelectionNode_CONNECTED_LAYERS, METH_VARARGS,
   "CONNECTED_LAYERS() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONNECTED_LAYERS()\n\nWhen specified, this indicates how many layers of *connected*\nelements in addition to those chosen explicitly are being\nselected. Currently, this is only supported for cells and points.\n"},
  {"CONNECTED_LAYERS_REMOVE_SEED", PyvtkSelectionNode_CONNECTED_LAYERS_REMOVE_SEED, METH_VARARGS,
   "CONNECTED_LAYERS_REMOVE_SEED() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONNECTED_LAYERS_REMOVE_SEED(\n    )\n\nWhen specified and also using CONNECTED_LAYERS(), this indicates\nif the initial selection should be kept or not.\n"},
  {"CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS", PyvtkSelectionNode_CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS, METH_VARARGS,
   "CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS()\n    -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS(\n    )\n\nWhen specified and also using CONNECTED_LAYERS(), this indicates\nif the intermediate layers should be kept or not.\n"},
  {"COMPONENT_NUMBER", PyvtkSelectionNode_COMPONENT_NUMBER, METH_VARARGS,
   "COMPONENT_NUMBER() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPONENT_NUMBER()\n\nWhen ContentType==THRESHOLDS  or ContentType==VALUES i.e.\nthreshold and value based selections, it is possible pick the\ncomponent number using this key. If none is specified, the 0th\ncomponent is used. If any number less than 0 is specified, then\nthe magnitude is used.\n"},
  {"INVERSE", PyvtkSelectionNode_INVERSE, METH_VARARGS,
   "INVERSE() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *INVERSE()\n\nThis flag tells the extraction filter to exclude the selection.\n"},
  {"PIXEL_COUNT", PyvtkSelectionNode_PIXEL_COUNT, METH_VARARGS,
   "PIXEL_COUNT() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PIXEL_COUNT()\n\nA helper for visible cell selector, this is the number of pixels\ncovered by the actor whose cells are listed in the selection.\n"},
  {"SOURCE", PyvtkSelectionNode_SOURCE, METH_VARARGS,
   "SOURCE() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *SOURCE()\n\nPointer to the data or algorithm the selection belongs to.\n"},
  {"SOURCE_ID", PyvtkSelectionNode_SOURCE_ID, METH_VARARGS,
   "SOURCE_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *SOURCE_ID()\n\nID of the data or algorithm the selection belongs to. What ID\nmeans is application specific.\n"},
  {"PROP", PyvtkSelectionNode_PROP, METH_VARARGS,
   "PROP() -> vtkInformationObjectBaseKey\nC++: static vtkInformationObjectBaseKey *PROP()\n\nPointer to the prop the selection belongs to.\n"},
  {"PROP_ID", PyvtkSelectionNode_PROP_ID, METH_VARARGS,
   "PROP_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROP_ID()\n\nID of the prop the selection belongs to. What ID means is\napplication specific.\n"},
  {"PROCESS_ID", PyvtkSelectionNode_PROCESS_ID, METH_VARARGS,
   "PROCESS_ID() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *PROCESS_ID()\n\nProcess id the selection is on.\n"},
  {"ASSEMBLY_NAME", PyvtkSelectionNode_ASSEMBLY_NAME, METH_VARARGS,
   "ASSEMBLY_NAME() -> vtkInformationStringKey\nC++: static vtkInformationStringKey *ASSEMBLY_NAME()\n\nKeys for selector-based identification of blocks to choose from a\ncomposite dataset. `ASSEMBLY_NAME` identifies the name for the\nassembly to use and `SELECTORS` provide a list of node selectors\napplied to the chosen assembly.\n\nUse `vtkDataAssemblyUtilities::HierarchyName` as the assembly\nname to use the data hierarchy\n"},
  {"SELECTORS", PyvtkSelectionNode_SELECTORS, METH_VARARGS,
   "SELECTORS() -> vtkInformationStringVectorKey\nC++: static vtkInformationStringVectorKey *SELECTORS()\n\n"},
  {"COMPOSITE_INDEX", PyvtkSelectionNode_COMPOSITE_INDEX, METH_VARARGS,
   "COMPOSITE_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *COMPOSITE_INDEX()\n\nUsed to identify a node in composite datasets.\n"},
  {"HIERARCHICAL_LEVEL", PyvtkSelectionNode_HIERARCHICAL_LEVEL, METH_VARARGS,
   "HIERARCHICAL_LEVEL() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_LEVEL()\n\nUsed to identify a dataset in a hiererchical box dataset.\n"},
  {"HIERARCHICAL_INDEX", PyvtkSelectionNode_HIERARCHICAL_INDEX, METH_VARARGS,
   "HIERARCHICAL_INDEX() -> vtkInformationIntegerKey\nC++: static vtkInformationIntegerKey *HIERARCHICAL_INDEX()\n\n"},
  {"UnionSelectionList", PyvtkSelectionNode_UnionSelectionList, METH_VARARGS,
   "UnionSelectionList(self, other:vtkSelectionNode) -> None\nC++: void UnionSelectionList(vtkSelectionNode *other)\n\nMerges the selection list between self and the other. Assumes\nthat both has identical properties.\n"},
  {"SubtractSelectionList", PyvtkSelectionNode_SubtractSelectionList, METH_VARARGS,
   "SubtractSelectionList(self, other:vtkSelectionNode) -> None\nC++: void SubtractSelectionList(vtkSelectionNode *other)\n\nSubtracts the items in the selection list, other, from this\nselection list. Assumes that both selections have identical\nproperties (i.e., test with EqualProperties before using).\n"},
  {"EqualProperties", PyvtkSelectionNode_EqualProperties, METH_VARARGS,
   "EqualProperties(self, other:vtkSelectionNode,\n    fullcompare:bool=True) -> bool\nC++: bool EqualProperties(vtkSelectionNode *other,\n    bool fullcompare=true)\n\nCompares Properties of self and other to ensure that they are\nexactly same.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSelectionNode_Doc =
  "vtkSelectionNode - a node in a vtkSelection the defines the selection\ncriteria.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkSelectionNode helps define the selection criteria in a\n"
  "vtkSelection. vtkSelection can comprise of multiple such\n"
  "vtkSelectionNode instances that help define the selection.\n\n"
  "vtkSelectionNode has two components: a list of properties (stored in\n"
  "a vtkInformation) and a selection list (a vtkAbstractArray subclass).\n"
  "The properties help indicate how to interpret the values specified in\n"
  "a selection-list.\n\n"
  "The properties can be broadly classified into three categories: core,\n"
  "qualifiers, and information. The core properties must be specified\n"
  "other wise the vtkSelectionNode is not considered valid. These are\n"
  "`FIELD_TYPE` and `CONTENT_TYPE`. `FIELD_TYPE` defines what kinds of\n"
  "entities are being selected. Since selections are used to select\n"
  "items in a data-object, these correspond to things like cells,\n"
  "points, nodes, edges, rows, etc. Supported FIELD_TYPE values are\n"
  "defined in `vtkSelectionNode::SelectionField`. `CONTENT_TYPE` defines\n"
  "the how the selection is described. Supported values are\n"
  "`vtkSelectionNode::SelectionContent`. For example, if CONTENT_TYPE is\n"
  "`INDICES`, then selection is described as ids for entities being\n"
  "selected. The ids themselves will be specified using the selection\n"
  "list. Thus, the CONTENT_TYPE dictates what the selection list\n"
  "comprises.\n\n"
  "Qualifiers are used to further qualify the selection criteria. All\n"
  "qualifiers are optional. When present they restrict the selection.\n"
  "For example, when selecting elements from a composite-dataset, the\n"
  "`COMPOSITE_INDEX` qualifier can be specified of limit the selection\n"
  "to a specific dataset (or subtree).\n\n"
  "Information properties are simply for informative purposes and\n"
  "generally used to provide information about the selection when the\n"
  "selection is created. For example, `PIXEL_COUNT` is used to indicate\n"
  "how many screen pixels resulted in creation of this selection node.\n\n"
  "@section SelectionTypes Selection Types\n\n"
  "`CONTENT_TYPE` property is one of the required properties that helps\n"
  "describe how the selection is defined. To set the content type, one\n"
  "can access the properties store using\n"
  "`vtkSelectionNode::GetProperties()` and then set the `CONTENT_TYPE`\n"
  "using the `vtkSelectionNode::CONTENT_TYPE()` key or simply use\n"
  "`vtkSelectionNode::SetContentType`.\n\n"
  "* `vtkSelectionNode::GLOBALIDS`: indicates that the selection is\n"
  "  defined using global ids. In VTK data-object, global ids are\n"
  "  specified an `vtkIdTypeArray` added to a appropriate\n"
  "  `vtkDataSetAttributes` and marked as global-ids using\n"
  "  vtkDataSetAttributes API. Since global ids are expected to be\n"
  "  unique for that element type over the entire dataset, it's a\n"
  "  convenient way of defining selections. For this content-type, the\n"
  "  selection list must be a single-component, `vtkIdTypeArray` that\n"
  "  lists all the globals ids for the selected elements.\n\n"
  "* `vtkSelectionNode::PEDIGREEIDS`: similar to `GLOBALIDS` except uses\n"
  "  pedigree ids instead of global ids.\n\n"
  "* `vtkSelectionNode::VALUES`: this type is used to define a selection\n"
  "based on array values. The selection list specifies the values to be\n"
  "  selected. All elements with array values in the selection list are\n"
  "  treated as selected. The qualifier COMPONENT_NUMBER is used to\n"
  "  indicate which component to use for the checks. Use `-1` for\n"
  "  magnitude. Current implementation does not support checking\n"
  "  multiple-components or non-exact matches although support for both\n"
  "  is conceivable in future. The selection list array name is used to\n"
  "  specify the name of the array from the dataset to use for the\n"
  "  checks. Thus, for defining a selection for a dataset where all\n"
  "  `TEMP` values match those specified in the selection list, ensure\n"
  "  that the selection list array's name is set to `TEMP` as well.\n\n"
  "* `vtkSelectionNode::INDICES`: this is similar to global ids except\n"
  "  in this case the selection list is simply the VTK element id which\n"
  "  is 0-based index of that element in the particular dataset. Often\n"
  "  with this type of selection, additional qualifiers such as\n"
  "  `COMPOSITE_INDEX`, `BLOCK_SELECTORS`, `PROCESS_ID` etc. are needed\n"
  "  to correctly identify the chosen element(s) in case of composite or\n"
  "distributed datasets.\n\n"
  "* `vtkSelectionNode::FRUSTUM`: this type is used to define a frustum\n"
  "  in world coordinates that identifies the selected elements. In this\n"
  "case, the selection list is a vtkDoubleArray with 32 values\n"
  "  specifying the 8 frustum corners in homogeneous world coordinates.\n\n"
  "* `vtkSelectionNode::LOCATIONS`: this is used to select points (or\n"
  "  cells) near (or containing) specified locations. The selection list\n"
  "is a 3-component vtkDoubleArray with coordinates for locations of\n"
  "  interest.\n\n"
  "* `vtkSelectionNode::THRESHOLDS`: this type is used to define a\n"
  "  selection based on array value ranges. This is akin to\n"
  "  thresholding. All elements with values in the specified ranges are\n"
  "  to be treated as selected. For this content-type, the\n"
  "  selection-list is a 2-component `vtkDataArray`-subclass that\n"
  "  specifies where each tuple defines the min and max values for a\n"
  "  range. The selection list can have multiple tuples to define\n"
  "  multiple ranges. Elements with values in any of the specified\n"
  "  ranges are treated as selected. The selection list array name is\n"
  "  used to specify the name of the array from the dataset to use for\n"
  "  the checks. Thus, for defining a selection for a dataset where all\n"
  "  `TEMP` values are within a range, ensure that the selection list\n"
  "  array's name is set to `TEMP` as well.\n\n"
  "* `vtkSelectionNode::BLOCKS`: this type is used to select blocks in a\n"
  "  composite dataset. The term blocks is used loosely here and can\n"
  "  correspond to a block in a multiblock dataset or a partition in a\n"
  "  partitioned-dataset. The selection list is an integral type\n"
  "  vtkDataArray subclass that can be 1- or 2- component. If\n"
  "  1-component, it's interpreted as the composite-index (also called\n"
  "  flat index) and can be applied to any composite-dataset to choose\n"
  "  specific datasets. If 2-component, it's typically associated with\n"
  "  vtkUniformGridAMR or vtkPartitionedDataSetCollection which support\n"
  "  2-tuple indexing to locate a dataset.\n\n"
  "* `vtkSelectionNode::BLOCK_SELECTORS`: this is similar to BLOCKS,\n"
  "  however instead of using indices to select datasets, here, the\n"
  "  selection list is a vtkStringArray which lists selector expressions\n"
  "to select blocks in the composite dataset. By default, the selector\n"
  "  expressions are applied to a vtkDataAssembly generated from the\n"
  "  composite dataset that represents its hierarchy (see\n"
  "  `vtkDataAssembly::GenerateHierarchy`). However, in case of\n"
  "  vtkPartitionedDataSetCollection, one can select any other data\n"
  "  assembly associated with the vtkPartitionedDataSetCollection by\n"
  "  naming the array with the name of the assembly.\n\n"
  "ote, currently vtkPartitionedDataSetCollection only supports a single\n"
  "  vtkDataAssembly but this may change in the future.\n\n"
  "* `vtkSelectionNode::QUERY`: this type is primarily added for\n"
  "  ParaView where selection expression is specified as a query string.\n"
  "This is likely to change in the future and hence applications are\n"
  "  discouraged from using this type.\n\n"
  "@section Properties Properties\n\n"
  "Following a properties that can be used to qualify the selection.\n\n"
  "* `vtkSelectionNode::EPSILON()`: this is a qualifier that can be used\n"
  "to indicate a fuzz-factor when comparing values for equality.\n"
  "  Currently, this is only used with content-type LOCATIONS, however,\n"
  "  it can be expanded to other selection types in the future.\n\n"
  "* `vtkSelectionNode::CONTAINING_CELLS()`: this qualifier is intended\n"
  "  to be used with field-type `POINT`. When present, it indicates that\n"
  "while the selection criteria selects a collection of points the\n"
  "  selection should be formed using cell containing the chosen points.\n\n"
  "* `vtkSelectionNode::CONNECTED_LAYERS()`: a qualifier used to expand\n"
  "  the definition of selected elements to connected elements for the\n"
  "  specified number of layers. Layers can only be positive to grow the\n"
  "selection.\n\n"
  "* `vtkSelectionNode::CONNECTED_LAYERS_REMOVE_SEED()`: this qualifier\n"
  "  indicates that when using a number of CONNECTED_LAYERS >= 1, the\n"
  "  initial selection will not be kept.\n\n"
  "* `vtkSelectionNode::CONNECTED_LAYERS_REMOVE_INTERMEDIATE_LAYERS()`:\n"
  "  this qualifier indicates that when using a number of\n"
  "  CONNECTED_LAYERS >= 2, the intermediate layers will not be kept.\n\n"
  "* `vtkSelectionNode::INVERSE()`: a qualifier that causes the\n"
  "  selection to be inverted i.e. all elements not chosen by the\n"
  "  criteria are to be treated as selected.\n\n"
  "* `vtkSelectionNode::COMPONENT_NUMBER()`: for VALUES and THRESHOLDS\n"
  "  selection types, this qualifier identifies the array component of\n"
  "  interest. -1 indicates magnitude.\n\n"
  "* `vtkSelectionNode::PROCESS_ID()`: limits the selection to a\n"
  "  particular rank in a distributed environment.\n\n"
  "* `vtkSelectionNode::COMPOSITE_INDEX()`: a qualifier used to limit\n"
  "  the selection to a specific composite index for a\n"
  "  composite-dataset.\n\n"
  "* `vtkSelectionNode::ASSEMBLY_NAME()`,\n"
  "  `vtkSelectionNode::SELECTORS()`: similar to composite index, except\n"
  "uses data-assembly and selectors to limit the selection to a subset\n"
  "  of nodes in a composite-dataset.\n\n"
  "* `vtkSelectionNode::HIERARCHICAL_LEVEL()`,\n"
  "  `vtkSelectionNode::HIERARCHICAL_INDEX()`: similar to composite\n"
  "  index, except uses level and index for an AMR dataset so limit the\n"
  "  selection to a specific AMR level or dataset.\n\n"
  "Following for properties that are primarily intended to provide\n"
  "additional information when the selection is created.\n\n"
  "* `vtkSelectionNode::ZBUFFER_VALUE()`: an information qualifier\n"
  "  representing the z-depth for a particular selection when it was\n"
  "  created.\n\n"
  "* `vtkSelectionNode::PIXEL_COUNT()`: a qualifier used to provide a\n"
  "  count for the number of pixels that resulted in this selection.\n\n"
  "* `vtkSelectionNode::SOURCE()`, `vtkSelectionNode::SOURCE_ID()`:\n"
  "  provides information about data producer or selection originator.\n"
  "  The interpretation is very specific to the creator creating the\n"
  "  selection and varies greatly with VTK.\n\n"
  "* `vtkSelectionNode::PROP(), `vtkSelectionNode::PROP_ID()`: similar\n"
  "  to SOURCE/SOURCE_ID except is used to represent a rendering prop\n"
  "  from which the selection was created.\n\n"
  "@warning\n"
  "No SelectionList is created by default. It should be assigned.\n\n"
  "@section SelectionFieldMismatch vtkSelectionNode::SelectionField and\n"
  "vtkDataSetAttribute::AttributeTypes\n\n"
  "Strictly speaking, vtkSelectionNode::SelectionField maps directly to\n"
  "vtkDataSetAttribute::AttributeTypes. However, the two enum values are\n"
  "not identical for historical reasons. Use\n"
  "`vtkSelectionNode::ConvertSelectionFieldToAttributeType` and\n"
  "`vtkSelectionNode::ConvertAttributeTypeToSelectionField` to convert\n"
  "between the two.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSelectionNode_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkSelectionNode", // tp_name
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
  PyvtkSelectionNode_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSelectionNode_StaticNew()
{
  return vtkSelectionNode::New();
}

PyObject *PyvtkSelectionNode_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSelectionNode_Type, PyvtkSelectionNode_Methods,
    "vtkSelectionNode",
 &PyvtkSelectionNode_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSelectionNode_SelectionContent_Type);
  PyVTKEnum_Add(&PyvtkSelectionNode_SelectionContent_Type, "vtkSelectionNode.SelectionContent");

  o = (PyObject *)&PyvtkSelectionNode_SelectionContent_Type;
  if (PyDict_SetItemString(d, "SelectionContent", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSelectionNode_SelectionField_Type);
  PyVTKEnum_Add(&PyvtkSelectionNode_SelectionField_Type, "vtkSelectionNode.SelectionField");

  o = (PyObject *)&PyvtkSelectionNode_SelectionField_Type;
  if (PyDict_SetItemString(d, "SelectionField", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 12; c++)
  {
    typedef vtkSelectionNode::SelectionContent cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[12] = {
        { "GLOBALIDS", vtkSelectionNode::GLOBALIDS },
        { "PEDIGREEIDS", vtkSelectionNode::PEDIGREEIDS },
        { "VALUES", vtkSelectionNode::VALUES },
        { "INDICES", vtkSelectionNode::INDICES },
        { "FRUSTUM", vtkSelectionNode::FRUSTUM },
        { "LOCATIONS", vtkSelectionNode::LOCATIONS },
        { "THRESHOLDS", vtkSelectionNode::THRESHOLDS },
        { "BLOCKS", vtkSelectionNode::BLOCKS },
        { "BLOCK_SELECTORS", vtkSelectionNode::BLOCK_SELECTORS },
        { "QUERY", vtkSelectionNode::QUERY },
        { "USER", vtkSelectionNode::USER },
        { "NUM_CONTENT_TYPES", vtkSelectionNode::NUM_CONTENT_TYPES },
      };

    o = PyvtkSelectionNode_SelectionContent_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkSelectionNode::SelectionField cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "CELL", vtkSelectionNode::CELL },
        { "POINT", vtkSelectionNode::POINT },
        { "FIELD", vtkSelectionNode::FIELD },
        { "VERTEX", vtkSelectionNode::VERTEX },
        { "EDGE", vtkSelectionNode::EDGE },
        { "ROW", vtkSelectionNode::ROW },
        { "NUM_FIELD_TYPES", vtkSelectionNode::NUM_FIELD_TYPES },
      };

    o = PyvtkSelectionNode_SelectionField_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSelectionNode(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSelectionNode_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSelectionNode", o) != 0)
  {
    Py_DECREF(o);
  }

}

