// python wrapper for vtkSegYReader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSegYReader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSegYReader(PyObject *dict); }
extern "C" { PyObject *PyvtkSegYReader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegYReader_VTKSegYCoordinateModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSegY.vtkSegYReader.VTKSegYCoordinateModes", // tp_name
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
PyObject *PyvtkSegYReader_VTKSegYCoordinateModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSegYReader_VTKSegYCoordinateModes_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegYReader_VTKSegYVerticalCRS_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSegY.vtkSegYReader.VTKSegYVerticalCRS", // tp_name
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
PyObject *PyvtkSegYReader_VTKSegYVerticalCRS_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkSegYReader_VTKSegYVerticalCRS_Type, static_cast<int>(val));
}


static PyObject *
PyvtkSegYReader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSegYReader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSegYReader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSegYReader *tempr = vtkSegYReader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSegYReader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSegYReader::NewInstance());

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
PyvtkSegYReader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSegYReader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSegYReader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkSegYReader::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkSegYReader::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordMode(temp0);
    }
    else
    {
      op->vtkSegYReader::SetXYCoordMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordModeMinValue() :
      op->vtkSegYReader::GetXYCoordModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordModeMaxValue() :
      op->vtkSegYReader::GetXYCoordModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXYCoordMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXYCoordMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXYCoordMode() :
      op->vtkSegYReader::GetXYCoordMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToSource();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToSource();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToCDP(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToCDP");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToCDP();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToCDP();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXYCoordModeToCustom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXYCoordModeToCustom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetXYCoordModeToCustom();
    }
    else
    {
      op->vtkSegYReader::SetXYCoordModeToCustom();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetXCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetXCoordByte(temp0);
    }
    else
    {
      op->vtkSegYReader::SetXCoordByte(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetXCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetXCoordByte() :
      op->vtkSegYReader::GetXCoordByte());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetYCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetYCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetYCoordByte(temp0);
    }
    else
    {
      op->vtkSegYReader::SetYCoordByte(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetYCoordByte(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetYCoordByte");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetYCoordByte() :
      op->vtkSegYReader::GetYCoordByte());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetVerticalCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVerticalCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVerticalCRS(temp0);
    }
    else
    {
      op->vtkSegYReader::SetVerticalCRS(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetVerticalCRS(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVerticalCRS");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetVerticalCRS() :
      op->vtkSegYReader::GetVerticalCRS());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetStructuredGrid(temp0);
    }
    else
    {
      op->vtkSegYReader::SetStructuredGrid(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetStructuredGrid(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStructuredGrid");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetStructuredGrid() :
      op->vtkSegYReader::GetStructuredGrid());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_StructuredGridOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredGridOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StructuredGridOn();
    }
    else
    {
      op->vtkSegYReader::StructuredGridOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_StructuredGridOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredGridOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->StructuredGridOff();
    }
    else
    {
      op->vtkSegYReader::StructuredGridOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_SetForce2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForce2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForce2D(temp0);
    }
    else
    {
      op->vtkSegYReader::SetForce2D(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_GetForce2D(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForce2D");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForce2D() :
      op->vtkSegYReader::GetForce2D());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_Force2DOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Force2DOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Force2DOn();
    }
    else
    {
      op->vtkSegYReader::Force2DOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSegYReader_Force2DOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Force2DOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSegYReader *op = static_cast<vtkSegYReader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Force2DOff();
    }
    else
    {
      op->vtkSegYReader::Force2DOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkSegYReader_Methods[] = {
  {"IsTypeOf", PyvtkSegYReader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSegYReader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSegYReader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSegYReader\nC++: static vtkSegYReader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSegYReader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSegYReader\nC++: vtkSegYReader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSegYReader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSegYReader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkSegYReader_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\n"},
  {"GetFileName", PyvtkSegYReader_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"SetXYCoordMode", PyvtkSegYReader_SetXYCoordMode, METH_VARARGS,
   "SetXYCoordMode(self, _arg:int) -> None\nC++: virtual void SetXYCoordMode(int _arg)\n\nSpecify whether to use source x/y coordinates or CDP coordinates\nor custom byte positions for data position in the SEG-Y trace\nheader. Defaults to source x/y coordinates.\n\nAs per SEG-Y rev 2.0 specification, Source XY coordinate bytes =\n(73, 77) CDP XY coordinate bytes = (181, 185)\n"},
  {"GetXYCoordModeMinValue", PyvtkSegYReader_GetXYCoordModeMinValue, METH_VARARGS,
   "GetXYCoordModeMinValue(self) -> int\nC++: virtual int GetXYCoordModeMinValue()\n\n"},
  {"GetXYCoordModeMaxValue", PyvtkSegYReader_GetXYCoordModeMaxValue, METH_VARARGS,
   "GetXYCoordModeMaxValue(self) -> int\nC++: virtual int GetXYCoordModeMaxValue()\n\n"},
  {"GetXYCoordMode", PyvtkSegYReader_GetXYCoordMode, METH_VARARGS,
   "GetXYCoordMode(self) -> int\nC++: virtual int GetXYCoordMode()\n\n"},
  {"SetXYCoordModeToSource", PyvtkSegYReader_SetXYCoordModeToSource, METH_VARARGS,
   "SetXYCoordModeToSource(self) -> None\nC++: void SetXYCoordModeToSource()\n\n"},
  {"SetXYCoordModeToCDP", PyvtkSegYReader_SetXYCoordModeToCDP, METH_VARARGS,
   "SetXYCoordModeToCDP(self) -> None\nC++: void SetXYCoordModeToCDP()\n\n"},
  {"SetXYCoordModeToCustom", PyvtkSegYReader_SetXYCoordModeToCustom, METH_VARARGS,
   "SetXYCoordModeToCustom(self) -> None\nC++: void SetXYCoordModeToCustom()\n\n"},
  {"SetXCoordByte", PyvtkSegYReader_SetXCoordByte, METH_VARARGS,
   "SetXCoordByte(self, _arg:int) -> None\nC++: virtual void SetXCoordByte(int _arg)\n\nSpecify X and Y byte positions for custom XYCoordinateMode. By\ndefault, XCoordByte = 73, YCoordByte = 77 i.e. source xy.\n\n\\sa SetXYCoordinatesModeToCustom()\n"},
  {"GetXCoordByte", PyvtkSegYReader_GetXCoordByte, METH_VARARGS,
   "GetXCoordByte(self) -> int\nC++: virtual int GetXCoordByte()\n\n"},
  {"SetYCoordByte", PyvtkSegYReader_SetYCoordByte, METH_VARARGS,
   "SetYCoordByte(self, _arg:int) -> None\nC++: virtual void SetYCoordByte(int _arg)\n\n"},
  {"GetYCoordByte", PyvtkSegYReader_GetYCoordByte, METH_VARARGS,
   "GetYCoordByte(self) -> int\nC++: virtual int GetYCoordByte()\n\n"},
  {"SetVerticalCRS", PyvtkSegYReader_SetVerticalCRS, METH_VARARGS,
   "SetVerticalCRS(self, _arg:int) -> None\nC++: virtual void SetVerticalCRS(int _arg)\n\nSpecify whether the vertical coordinates in the SEG-Y file are\nheights (positive up) or depths (positive down). By default, the\nvertical coordinates are treated as heights (i.e. positive up).\nThis means that the Z-axis of the dataset goes from 0 (surface)\nto -ve depth (last sample).\n\note As per the SEG-Y rev 2.0 specification, this information is\ndefined in the Location Data Stanza of the Extended Textual\nHeader. However, as of this revision, vtkSegY2DReader does not\nsupport reading the extended textual header.\n"},
  {"GetVerticalCRS", PyvtkSegYReader_GetVerticalCRS, METH_VARARGS,
   "GetVerticalCRS(self) -> int\nC++: virtual int GetVerticalCRS()\n\n"},
  {"SetStructuredGrid", PyvtkSegYReader_SetStructuredGrid, METH_VARARGS,
   "SetStructuredGrid(self, _arg:int) -> None\nC++: virtual void SetStructuredGrid(int _arg)\n\nSpecify if we create a vtkStructuredGrid even when the data is\n3D. Note this consumes more memory but it shows the precise\nlocation for each point and the correct shape of the data. The\ndefault value is true.  If we set this option to false we create\na vtkImageData for the SegY 3D dataset.\n"},
  {"GetStructuredGrid", PyvtkSegYReader_GetStructuredGrid, METH_VARARGS,
   "GetStructuredGrid(self) -> int\nC++: virtual int GetStructuredGrid()\n\n"},
  {"StructuredGridOn", PyvtkSegYReader_StructuredGridOn, METH_VARARGS,
   "StructuredGridOn(self) -> None\nC++: virtual void StructuredGridOn()\n\n"},
  {"StructuredGridOff", PyvtkSegYReader_StructuredGridOff, METH_VARARGS,
   "StructuredGridOff(self) -> None\nC++: virtual void StructuredGridOff()\n\n"},
  {"SetForce2D", PyvtkSegYReader_SetForce2D, METH_VARARGS,
   "SetForce2D(self, _arg:bool) -> None\nC++: virtual void SetForce2D(bool _arg)\n\nShould we force the data to be interpreted as a 2D dataset? It\nmay be a 2D sheet through 3D space. When this is turned on we\nignore the cross line and line values and instead build a 2D data\nby processing and connecting the traces in order from first to\nlast. The output will be a Structrured Grid.\n"},
  {"GetForce2D", PyvtkSegYReader_GetForce2D, METH_VARARGS,
   "GetForce2D(self) -> bool\nC++: virtual bool GetForce2D()\n\n"},
  {"Force2DOn", PyvtkSegYReader_Force2DOn, METH_VARARGS,
   "Force2DOn(self) -> None\nC++: virtual void Force2DOn()\n\n"},
  {"Force2DOff", PyvtkSegYReader_Force2DOff, METH_VARARGS,
   "Force2DOff(self) -> None\nC++: virtual void Force2DOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSegYReader_Doc =
  "vtkSegYReader - Reads SegY data files.\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkSegYReader reads SegY data files. We create a vtkStructuredGrid\n"
  "for 2.5D SegY and 3D data. If we set the StructuredGrid option to 0\n"
  "we create a vtkImageData for 3D data. This saves memory and may\n"
  "speed-up certain algorithms, but the position and the shape of the\n"
  "data may not be correct. The axes for the data are: crossline,\n"
  "inline, depth. For situations where traces are missing values of zero\n"
  "are used to fill in the dataset.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSegYReader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOSegY.vtkSegYReader", // tp_name
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
  PyvtkSegYReader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSegYReader_StaticNew()
{
  return vtkSegYReader::New();
}

PyObject *PyvtkSegYReader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSegYReader_Type, PyvtkSegYReader_Methods,
    "vtkSegYReader",
 &PyvtkSegYReader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkSegYReader_VTKSegYCoordinateModes_Type);
  PyVTKEnum_Add(&PyvtkSegYReader_VTKSegYCoordinateModes_Type, "vtkSegYReader.VTKSegYCoordinateModes");

  o = (PyObject *)&PyvtkSegYReader_VTKSegYCoordinateModes_Type;
  if (PyDict_SetItemString(d, "VTKSegYCoordinateModes", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkSegYReader_VTKSegYVerticalCRS_Type);
  PyVTKEnum_Add(&PyvtkSegYReader_VTKSegYVerticalCRS_Type, "vtkSegYReader.VTKSegYVerticalCRS");

  o = (PyObject *)&PyvtkSegYReader_VTKSegYVerticalCRS_Type;
  if (PyDict_SetItemString(d, "VTKSegYVerticalCRS", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkSegYReader::VTKSegYCoordinateModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_SEGY_SOURCE", vtkSegYReader::VTK_SEGY_SOURCE },
        { "VTK_SEGY_CDP", vtkSegYReader::VTK_SEGY_CDP },
        { "VTK_SEGY_CUSTOM", vtkSegYReader::VTK_SEGY_CUSTOM },
      };

    o = PyvtkSegYReader_VTKSegYCoordinateModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkSegYReader::VTKSegYVerticalCRS cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "VTK_SEGY_VERTICAL_HEIGHTS", vtkSegYReader::VTK_SEGY_VERTICAL_HEIGHTS },
        { "VTK_SEGY_VERTICAL_DEPTHS", vtkSegYReader::VTK_SEGY_VERTICAL_DEPTHS },
      };

    o = PyvtkSegYReader_VTKSegYVerticalCRS_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSegYReader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSegYReader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSegYReader", o) != 0)
  {
    Py_DECREF(o);
  }

}

