// python wrapper for vtkCollisionDetectionFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCollisionDetectionFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCollisionDetectionFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkCollisionDetectionFilter_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCollisionDetectionFilter_CollisionModes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkCollisionDetectionFilter.CollisionModes", // tp_name
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
PyObject *PyvtkCollisionDetectionFilter_CollisionModes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCollisionDetectionFilter_CollisionModes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCollisionDetectionFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCollisionDetectionFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCollisionDetectionFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCollisionDetectionFilter *tempr = vtkCollisionDetectionFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCollisionDetectionFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCollisionDetectionFilter::NewInstance());

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
PyvtkCollisionDetectionFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCollisionDetectionFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCollisionDetectionFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetCollisionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollisionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCollisionMode(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetCollisionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetCollisionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollisionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCollisionModeMinValue() :
      op->vtkCollisionDetectionFilter::GetCollisionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetCollisionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollisionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCollisionModeMaxValue() :
      op->vtkCollisionDetectionFilter::GetCollisionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetCollisionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollisionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCollisionMode() :
      op->vtkCollisionDetectionFilter::GetCollisionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetCollisionModeToAllContacts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollisionModeToAllContacts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCollisionModeToAllContacts();
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetCollisionModeToAllContacts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetCollisionModeToFirstContact(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollisionModeToFirstContact");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCollisionModeToFirstContact();
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetCollisionModeToFirstContact();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetCollisionModeToHalfContacts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCollisionModeToHalfContacts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCollisionModeToHalfContacts();
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetCollisionModeToHalfContacts();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetCollisionModeAsString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCollisionModeAsString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetCollisionModeAsString() :
      op->vtkCollisionDetectionFilter::GetCollisionModeAsString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_IntersectPolygonWithPolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectPolygonWithPolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 6;
  double temp2[6];
  double save2[6];
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  const size_t size5 = 6;
  double temp5[6];
  double save5[6];
  double temp6;
  const size_t size7 = 3;
  double temp7[3];
  double save7[3];
  const size_t size8 = 3;
  double temp8[3];
  double save8[3];
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7) &&
      ap.GetArray(temp8, size8) &&
      ap.GetValue(temp9))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp7, save7, size7);
    vtkPythonArgs::Save(temp8, save8, size8);

    int tempr = (ap.IsBound() ?
      op->IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9) :
      op->vtkCollisionDetectionFilter::IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (vtkPythonArgs::HasChanged(temp8, save8, size8) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(8, temp8, size8);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetInputData(temp0, temp1);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetInputData(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetInputData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInputData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetInputData(temp0) :
      op->vtkCollisionDetectionFilter::GetInputData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetContactCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContactCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkIdTypeArray *tempr = (ap.IsBound() ?
      op->GetContactCells(temp0) :
      op->vtkCollisionDetectionFilter::GetContactCells(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetContactsOutputPort(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContactsOutputPort");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAlgorithmOutput *tempr = (ap.IsBound() ?
      op->GetContactsOutputPort() :
      op->vtkCollisionDetectionFilter::GetContactsOutputPort());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetContactsOutput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetContactsOutput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetContactsOutput() :
      op->vtkCollisionDetectionFilter::GetContactsOutput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  vtkLinearTransform *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkLinearTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0, temp1);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetTransform(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkLinearTransform *tempr = (ap.IsBound() ?
      op->GetTransform(temp0) :
      op->vtkCollisionDetectionFilter::GetTransform(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  vtkMatrix4x4 *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetMatrix(temp0, temp1);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetMatrix(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetMatrix(temp0) :
      op->vtkCollisionDetectionFilter::GetMatrix(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetBoxTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBoxTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBoxTolerance(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetBoxTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetBoxTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBoxTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetBoxTolerance() :
      op->vtkCollisionDetectionFilter::GetBoxTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetCellTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellTolerance(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetCellTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetCellTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetCellTolerance() :
      op->vtkCollisionDetectionFilter::GetCellTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGenerateScalars(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetGenerateScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetGenerateScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGenerateScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGenerateScalars() :
      op->vtkCollisionDetectionFilter::GetGenerateScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GenerateScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOn();
    }
    else
    {
      op->vtkCollisionDetectionFilter::GenerateScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GenerateScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->GenerateScalarsOff();
    }
    else
    {
      op->vtkCollisionDetectionFilter::GenerateScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetNumberOfContacts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContacts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfContacts() :
      op->vtkCollisionDetectionFilter::GetNumberOfContacts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetNumberOfBoxTests(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfBoxTests");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfBoxTests() :
      op->vtkCollisionDetectionFilter::GetNumberOfBoxTests());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCellsPerNode(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetNumberOfCellsPerNode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetNumberOfCellsPerNode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCellsPerNode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCellsPerNode() :
      op->vtkCollisionDetectionFilter::GetNumberOfCellsPerNode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_SetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOpacity(temp0);
    }
    else
    {
      op->vtkCollisionDetectionFilter::SetOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetOpacityMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOpacityMinValue() :
      op->vtkCollisionDetectionFilter::GetOpacityMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetOpacityMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacityMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOpacityMaxValue() :
      op->vtkCollisionDetectionFilter::GetOpacityMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetOpacity() :
      op->vtkCollisionDetectionFilter::GetOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCollisionDetectionFilter_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCollisionDetectionFilter *op = static_cast<vtkCollisionDetectionFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkCollisionDetectionFilter::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCollisionDetectionFilter_Methods[] = {
  {"IsTypeOf", PyvtkCollisionDetectionFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCollisionDetectionFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCollisionDetectionFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCollisionDetectionFilter\nC++: static vtkCollisionDetectionFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCollisionDetectionFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCollisionDetectionFilter\nC++: vtkCollisionDetectionFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCollisionDetectionFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCollisionDetectionFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCollisionMode", PyvtkCollisionDetectionFilter_SetCollisionMode, METH_VARARGS,
   "SetCollisionMode(self, _arg:int) -> None\nC++: virtual void SetCollisionMode(int _arg)\n\nSet the collision mode to VTK_ALL_CONTACTS to find all the\ncontacting cell pairs with two points per collision, or\nVTK_HALF_CONTACTS to find all the contacting cell pairs with one\npoint per collision, or VTK_FIRST_CONTACT to quickly find the\nfirst contact point.\n"},
  {"GetCollisionModeMinValue", PyvtkCollisionDetectionFilter_GetCollisionModeMinValue, METH_VARARGS,
   "GetCollisionModeMinValue(self) -> int\nC++: virtual int GetCollisionModeMinValue()\n\n"},
  {"GetCollisionModeMaxValue", PyvtkCollisionDetectionFilter_GetCollisionModeMaxValue, METH_VARARGS,
   "GetCollisionModeMaxValue(self) -> int\nC++: virtual int GetCollisionModeMaxValue()\n\n"},
  {"GetCollisionMode", PyvtkCollisionDetectionFilter_GetCollisionMode, METH_VARARGS,
   "GetCollisionMode(self) -> int\nC++: virtual int GetCollisionMode()\n\n"},
  {"SetCollisionModeToAllContacts", PyvtkCollisionDetectionFilter_SetCollisionModeToAllContacts, METH_VARARGS,
   "SetCollisionModeToAllContacts(self) -> None\nC++: void SetCollisionModeToAllContacts()\n\n"},
  {"SetCollisionModeToFirstContact", PyvtkCollisionDetectionFilter_SetCollisionModeToFirstContact, METH_VARARGS,
   "SetCollisionModeToFirstContact(self) -> None\nC++: void SetCollisionModeToFirstContact()\n\n"},
  {"SetCollisionModeToHalfContacts", PyvtkCollisionDetectionFilter_SetCollisionModeToHalfContacts, METH_VARARGS,
   "SetCollisionModeToHalfContacts(self) -> None\nC++: void SetCollisionModeToHalfContacts()\n\n"},
  {"GetCollisionModeAsString", PyvtkCollisionDetectionFilter_GetCollisionModeAsString, METH_VARARGS,
   "GetCollisionModeAsString(self) -> str\nC++: const char *GetCollisionModeAsString()\n\n"},
  {"IntersectPolygonWithPolygon", PyvtkCollisionDetectionFilter_IntersectPolygonWithPolygon, METH_VARARGS,
   "IntersectPolygonWithPolygon(self, npts:int, pts:[float, ...],\n    bounds:[float, float, float, float, float, float], npts2:int,\n    pts2:[float, ...], bounds2:[float, float, float, float, float,\n     float], tol2:float, x1:[float, float, float], x2:[float,\n    float, float], CollisionMode:int) -> int\nC++: int IntersectPolygonWithPolygon(int npts, double *pts,\n    double bounds[6], int npts2, double *pts2, double bounds2[6],\n    double tol2, double x1[3], double x2[3], int CollisionMode)\n\nDescription: Intersect two polygons, return x1 and x2 as the two\npoints of intersection. If CollisionMode = VTK_ALL_CONTACTS, both\ncontact points are found. If CollisionMode = VTK_FIRST_CONTACT or\nVTK_HALF_CONTACTS, only one contact point is found.\n"},
  {"SetInputData", PyvtkCollisionDetectionFilter_SetInputData, METH_VARARGS,
   "SetInputData(self, i:int, model:vtkPolyData) -> None\nC++: void SetInputData(int i, vtkPolyData *model)\n\nSet and Get the input vtk polydata models\n"},
  {"GetInputData", PyvtkCollisionDetectionFilter_GetInputData, METH_VARARGS,
   "GetInputData(self, i:int) -> vtkPolyData\nC++: vtkPolyData *GetInputData(int i)\n\n"},
  {"GetContactCells", PyvtkCollisionDetectionFilter_GetContactCells, METH_VARARGS,
   "GetContactCells(self, i:int) -> vtkIdTypeArray\nC++: vtkIdTypeArray *GetContactCells(int i)\n\nGet an array of the contacting cells. This is a convenience\nmethod to access the \"ContactCells\" field array in outputs 0 and\n1. These arrays index contacting cells (eg) index 50 of array 0\npoints to a cell (triangle) which contacts/intersects a cell at\nindex 50 of array 1. This method is equivalent to\nGetOutput(i)->GetFieldData()->GetArray(\"ContactCells\")\n"},
  {"GetContactsOutputPort", PyvtkCollisionDetectionFilter_GetContactsOutputPort, METH_VARARGS,
   "GetContactsOutputPort(self) -> vtkAlgorithmOutput\nC++: vtkAlgorithmOutput *GetContactsOutputPort()\n\nGet the output with the points where the contacting cells\nintersect. This method is is equivalent to\nGetOutputPort(2)/GetOutput(2)\n"},
  {"GetContactsOutput", PyvtkCollisionDetectionFilter_GetContactsOutput, METH_VARARGS,
   "GetContactsOutput(self) -> vtkPolyData\nC++: vtkPolyData *GetContactsOutput()\n\n"},
  {"SetTransform", PyvtkCollisionDetectionFilter_SetTransform, METH_VARARGS,
   "SetTransform(self, i:int, transform:vtkLinearTransform) -> None\nC++: void SetTransform(int i, vtkLinearTransform *transform)\n\n"},
  {"GetTransform", PyvtkCollisionDetectionFilter_GetTransform, METH_VARARGS,
   "GetTransform(self, i:int) -> vtkLinearTransform\nC++: vtkLinearTransform *GetTransform(int i)\n\n"},
  {"SetMatrix", PyvtkCollisionDetectionFilter_SetMatrix, METH_VARARGS,
   "SetMatrix(self, i:int, matrix:vtkMatrix4x4) -> None\nC++: void SetMatrix(int i, vtkMatrix4x4 *matrix)\n\n"},
  {"GetMatrix", PyvtkCollisionDetectionFilter_GetMatrix, METH_VARARGS,
   "GetMatrix(self, i:int) -> vtkMatrix4x4\nC++: vtkMatrix4x4 *GetMatrix(int i)\n\n"},
  {"SetBoxTolerance", PyvtkCollisionDetectionFilter_SetBoxTolerance, METH_VARARGS,
   "SetBoxTolerance(self, _arg:float) -> None\nC++: virtual void SetBoxTolerance(float _arg)\n\n"},
  {"GetBoxTolerance", PyvtkCollisionDetectionFilter_GetBoxTolerance, METH_VARARGS,
   "GetBoxTolerance(self) -> float\nC++: virtual float GetBoxTolerance()\n\n"},
  {"SetCellTolerance", PyvtkCollisionDetectionFilter_SetCellTolerance, METH_VARARGS,
   "SetCellTolerance(self, _arg:float) -> None\nC++: virtual void SetCellTolerance(double _arg)\n\n"},
  {"GetCellTolerance", PyvtkCollisionDetectionFilter_GetCellTolerance, METH_VARARGS,
   "GetCellTolerance(self) -> float\nC++: virtual double GetCellTolerance()\n\n"},
  {"SetGenerateScalars", PyvtkCollisionDetectionFilter_SetGenerateScalars, METH_VARARGS,
   "SetGenerateScalars(self, _arg:int) -> None\nC++: virtual void SetGenerateScalars(int _arg)\n\n"},
  {"GetGenerateScalars", PyvtkCollisionDetectionFilter_GetGenerateScalars, METH_VARARGS,
   "GetGenerateScalars(self) -> int\nC++: virtual int GetGenerateScalars()\n\n"},
  {"GenerateScalarsOn", PyvtkCollisionDetectionFilter_GenerateScalarsOn, METH_VARARGS,
   "GenerateScalarsOn(self) -> None\nC++: virtual void GenerateScalarsOn()\n\n"},
  {"GenerateScalarsOff", PyvtkCollisionDetectionFilter_GenerateScalarsOff, METH_VARARGS,
   "GenerateScalarsOff(self) -> None\nC++: virtual void GenerateScalarsOff()\n\n"},
  {"GetNumberOfContacts", PyvtkCollisionDetectionFilter_GetNumberOfContacts, METH_VARARGS,
   "GetNumberOfContacts(self) -> int\nC++: int GetNumberOfContacts()\n\n"},
  {"GetNumberOfBoxTests", PyvtkCollisionDetectionFilter_GetNumberOfBoxTests, METH_VARARGS,
   "GetNumberOfBoxTests(self) -> int\nC++: virtual int GetNumberOfBoxTests()\n\n"},
  {"SetNumberOfCellsPerNode", PyvtkCollisionDetectionFilter_SetNumberOfCellsPerNode, METH_VARARGS,
   "SetNumberOfCellsPerNode(self, _arg:int) -> None\nC++: virtual void SetNumberOfCellsPerNode(int _arg)\n\n"},
  {"GetNumberOfCellsPerNode", PyvtkCollisionDetectionFilter_GetNumberOfCellsPerNode, METH_VARARGS,
   "GetNumberOfCellsPerNode(self) -> int\nC++: virtual int GetNumberOfCellsPerNode()\n\n"},
  {"SetOpacity", PyvtkCollisionDetectionFilter_SetOpacity, METH_VARARGS,
   "SetOpacity(self, _arg:float) -> None\nC++: virtual void SetOpacity(float _arg)\n\n"},
  {"GetOpacityMinValue", PyvtkCollisionDetectionFilter_GetOpacityMinValue, METH_VARARGS,
   "GetOpacityMinValue(self) -> float\nC++: virtual float GetOpacityMinValue()\n\n"},
  {"GetOpacityMaxValue", PyvtkCollisionDetectionFilter_GetOpacityMaxValue, METH_VARARGS,
   "GetOpacityMaxValue(self) -> float\nC++: virtual float GetOpacityMaxValue()\n\n"},
  {"GetOpacity", PyvtkCollisionDetectionFilter_GetOpacity, METH_VARARGS,
   "GetOpacity(self) -> float\nC++: virtual float GetOpacity()\n\n"},
  {"GetMTime", PyvtkCollisionDetectionFilter_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCollisionDetectionFilter_Doc =
  "vtkCollisionDetectionFilter - performs collision determination\nbetween two polyhedral surfaces\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCollisionDetectionFilter performs collision determination between\n"
  " two polyhedral surfaces using two instances of vtkOBBTree. Set the\n"
  " polydata inputs, the tolerance and transforms or matrices. If\n"
  " CollisionMode is set to AllContacts, the Contacts output will be\n"
  "lines\n"
  " of contact.  If CollisionMode is FirstContact or HalfContacts then\n"
  "the\n"
  " Contacts output will be vertices.  See below for an explanation of\n"
  " these options.\n\n\n"
  " This class can be used to clip one polydata surface with another,\n"
  " using the Contacts output as a loop set in vtkSelectPolyData\n\n"
  "@authors Goodwin Lawlor, Bill Lorensen\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCollisionDetectionFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkCollisionDetectionFilter", // tp_name
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
  PyvtkCollisionDetectionFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCollisionDetectionFilter_StaticNew()
{
  return vtkCollisionDetectionFilter::New();
}

PyObject *PyvtkCollisionDetectionFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCollisionDetectionFilter_Type, PyvtkCollisionDetectionFilter_Methods,
    "vtkCollisionDetectionFilter",
 &PyvtkCollisionDetectionFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCollisionDetectionFilter_CollisionModes_Type);
  PyVTKEnum_Add(&PyvtkCollisionDetectionFilter_CollisionModes_Type, "vtkCollisionDetectionFilter.CollisionModes");

  o = (PyObject *)&PyvtkCollisionDetectionFilter_CollisionModes_Type;
  if (PyDict_SetItemString(d, "CollisionModes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkCollisionDetectionFilter::CollisionModes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "VTK_ALL_CONTACTS", vtkCollisionDetectionFilter::VTK_ALL_CONTACTS },
        { "VTK_FIRST_CONTACT", vtkCollisionDetectionFilter::VTK_FIRST_CONTACT },
        { "VTK_HALF_CONTACTS", vtkCollisionDetectionFilter::VTK_HALF_CONTACTS },
      };

    o = PyvtkCollisionDetectionFilter_CollisionModes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCollisionDetectionFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCollisionDetectionFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCollisionDetectionFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

