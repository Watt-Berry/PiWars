// python wrapper for vtkDataSet
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSet(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSet_ClassNew(); }

#ifndef DECLARED_PyvtkDataObject_ClassNew
extern "C" { PyObject *PyvtkDataObject_ClassNew(); }
#define DECLARED_PyvtkDataObject_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSet_FieldDataType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSet.FieldDataType", // tp_name
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
PyObject *PyvtkDataSet_FieldDataType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDataSet_FieldDataType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDataSet_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSet::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSet::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSet *tempr = vtkDataSet::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSet::NewInstance());

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
PyvtkDataSet_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSet::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSet::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_CopyStructure(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyStructure");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    op->CopyStructure(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_CopyAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CopyAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->CopyAttributes(temp0);
    }
    else
    {
      op->vtkDataSet::CopyAttributes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfPoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    long long tempr = op->GetNumberOfCells();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double *tempr = op->GetPoint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetPoint(temp0, temp1);
    }
    else
    {
      op->vtkDataSet::GetPoint(temp0, temp1);
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
PyvtkDataSet_GetPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataSet_GetPoint_s1(self, args);
    case 2:
      return PyvtkDataSet_GetPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetPoint");
  return nullptr;
}


static PyObject *
PyvtkDataSet_NewCellIterator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewCellIterator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellIterator *tempr = (ap.IsBound() ?
      op->NewCellIterator() :
      op->vtkDataSet::NewCellIterator());

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
PyvtkDataSet_GetCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = op->GetCell(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetCell(temp0, temp1, temp2) :
      op->vtkDataSet::GetCell(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCell_s3(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    op->GetCell(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataSet_GetCell_s1(self, args);
    case 3:
      return PyvtkDataSet_GetCell_s2(self, args);
    case 2:
      return PyvtkDataSet_GetCell_s3(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCell");
  return nullptr;
}


static PyObject *
PyvtkDataSet_SetCellOrderAndRationalWeights(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellOrderAndRationalWeights");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  vtkGenericCell *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkGenericCell"))
  {
    if (ap.IsBound())
    {
      op->SetCellOrderAndRationalWeights(temp0, temp1);
    }
    else
    {
      op->vtkDataSet::SetCellOrderAndRationalWeights(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GetCellBounds(temp0, temp1);
    }
    else
    {
      op->vtkDataSet::GetCellBounds(temp0, temp1);
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
PyvtkDataSet_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetCellType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellSize(temp0) :
      op->vtkDataSet::GetCellSize(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkCellTypes *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCellTypes"))
  {
    if (ap.IsBound())
    {
      op->GetCellTypes(temp0);
    }
    else
    {
      op->vtkDataSet::GetCellTypes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellPoints_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    op->GetCellPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCellPoints_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const long long *temp2c = temp2;
  vtkIdList *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellPoints(temp0, temp1, temp2c, temp3);
    }
    else
    {
      op->vtkDataSet::GetCellPoints(temp0, temp1, temp2c, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2c, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCellPoints(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataSet_GetCellPoints_s1(self, args);
    case 4:
      return PyvtkDataSet_GetCellPoints_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCellPoints");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetPointCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList"))
  {
    op->GetPointCells(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellNeighbors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNeighbors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  vtkIdList *temp1 = nullptr;
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    if (ap.IsBound())
    {
      op->GetCellNeighbors(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDataSet::GetCellNeighbors(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  long long temp0;
  unsigned char temp1;
  vtkGenericCell *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkGenericCell"))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellNumberOfFaces(temp0, temp1, temp2) :
      op->vtkDataSet::GetCellNumberOfFaces(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(1, temp1);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_FindPoint_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  double temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    long long tempr = (ap.IsBound() ?
      op->FindPoint(temp0, temp1, temp2) :
      op->vtkDataSet::FindPoint(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_FindPoint_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    long long tempr = op->FindPoint(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_FindPoint(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkDataSet_FindPoint_s1(self, args);
    case 1:
      return PyvtkDataSet_FindPoint_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindPoint");
  return nullptr;
}


static PyObject *
PyvtkDataSet_FindCell_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  long long temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    long long tempr = op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_FindCell_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  vtkGenericCell *temp2 = nullptr;
  long long temp3;
  double temp4;
  int temp5;
  const size_t size6 = 3;
  double temp6[3];
  double save6[3];
  size_t size7 = ap.GetArgSize(7);
  vtkPythonArgs::Array<double> store7(2*size7);
  double *temp7 = store7.Data();
  double *save7 = (size7 == 0 ? nullptr : temp7 + size7);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(8) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetVTKObject(temp2, "vtkGenericCell") &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5) &&
      ap.GetArray(temp6, size6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp6, save6, size6);
    vtkPythonArgs::Save(temp7, save7, size7);

    long long tempr = op->FindCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(5, temp5);
    }
    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (vtkPythonArgs::HasChanged(temp7, save7, size7) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(7, temp7, size7);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_FindCell(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 7:
      return PyvtkDataSet_FindCell_s1(self, args);
    case 8:
      return PyvtkDataSet_FindCell_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "FindCell");
  return nullptr;
}


static PyObject *
PyvtkDataSet_FindAndGetCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FindAndGetCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  vtkCell *temp1 = nullptr;
  long long temp2;
  double temp3;
  int temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  size_t size6 = ap.GetArgSize(6);
  vtkPythonArgs::Array<double> store6(2*size6);
  double *temp6 = store6.Data();
  double *save6 = (size6 == 0 ? nullptr : temp6 + size6);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetArray(temp6, size6))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp6, save6, size6);

    vtkCell *tempr = (ap.IsBound() ?
      op->FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkDataSet::FindAndGetCell(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(4, temp4);
    }
    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (vtkPythonArgs::HasChanged(temp6, save6, size6) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(6, temp6, size6);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDataSet::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellData *tempr = (ap.IsBound() ?
      op->GetCellData() :
      op->vtkDataSet::GetCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetPointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPointData *tempr = (ap.IsBound() ?
      op->GetPointData() :
      op->vtkDataSet::GetPointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_Squeeze(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Squeeze");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Squeeze();
    }
    else
    {
      op->vtkDataSet::Squeeze();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_ComputeBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeBounds();
    }
    else
    {
      op->vtkDataSet::ComputeBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetBounds() :
      op->vtkDataSet::GetBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBounds(temp0);
    }
    else
    {
      op->vtkDataSet::GetBounds(temp0);
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
PyvtkDataSet_GetBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSet_GetBounds_s1(self, args);
    case 1:
      return PyvtkDataSet_GetBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetBounds");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetCenter_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetCenter() :
      op->vtkDataSet::GetCenter());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetCenter_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCenter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetCenter(temp0);
    }
    else
    {
      op->vtkDataSet::GetCenter(temp0);
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
PyvtkDataSet_GetCenter(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDataSet_GetCenter_s1(self, args);
    case 1:
      return PyvtkDataSet_GetCenter_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetCenter");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetLength(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength() :
      op->vtkDataSet::GetLength());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetLength2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLength2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLength2() :
      op->vtkDataSet::GetLength2());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkDataSet::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetScalarRange_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetScalarRange(temp0);
    }
    else
    {
      op->vtkDataSet::GetScalarRange(temp0);
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
PyvtkDataSet_GetScalarRange_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScalarRange");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetScalarRange() :
      op->vtkDataSet::GetScalarRange());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetScalarRange(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataSet_GetScalarRange_s1(self, args);
    case 0:
      return PyvtkDataSet_GetScalarRange_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetScalarRange");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetMaxCellSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetMaxCellSize();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetActualMemorySize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActualMemorySize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetActualMemorySize() :
      op->vtkDataSet::GetActualMemorySize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetDataObjectType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDataObjectType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDataObjectType() :
      op->vtkDataSet::GetDataObjectType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkDataSet::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_DeepCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DeepCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  vtkDataObject *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataObject"))
  {
    if (ap.IsBound())
    {
      op->DeepCopy(temp0);
    }
    else
    {
      op->vtkDataSet::DeepCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_CheckAttributes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CheckAttributes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->CheckAttributes() :
      op->vtkDataSet::CheckAttributes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GenerateGhostArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateGhostArray(temp0);
    }
    else
    {
      op->vtkDataSet::GenerateGhostArray(temp0);
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
PyvtkDataSet_GenerateGhostArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  const size_t size0 = 6;
  int temp0[6];
  int save0[6];
  bool temp1 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GenerateGhostArray(temp0, temp1);
    }
    else
    {
      op->vtkDataSet::GenerateGhostArray(temp0, temp1);
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
PyvtkDataSet_GenerateGhostArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDataSet_GenerateGhostArray_s1(self, args);
    case 2:
      return PyvtkDataSet_GenerateGhostArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateGhostArray");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetData_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformation *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInformation"))
  {
    vtkDataSet *tempr = vtkDataSet::GetData(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSet_GetData_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetData");

  vtkInformationVector *temp0 = nullptr;
  int temp1 = 0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkInformationVector") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    vtkDataSet *tempr = vtkDataSet::GetData(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSet_GetData_Methods[] = {
  {"GetData", PyvtkDataSet_GetData_s1, METH_VARARGS | METH_STATIC,
   "V *vtkInformation"},
  {"GetData", PyvtkDataSet_GetData_s2, METH_VARARGS | METH_STATIC,
   "V|i *vtkInformationVector"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSet_GetData(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSet_GetData_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return PyvtkDataSet_GetData_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetData");
  return nullptr;
}


static PyObject *
PyvtkDataSet_GetAttributesAsFieldData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAttributesAsFieldData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkFieldData *tempr = (ap.IsBound() ?
      op->GetAttributesAsFieldData(temp0) :
      op->vtkDataSet::GetAttributesAsFieldData(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetNumberOfElements(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfElements");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfElements(temp0) :
      op->vtkDataSet::GetNumberOfElements(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_HasAnyGhostCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyGhostCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyGhostCells() :
      op->vtkDataSet::HasAnyGhostCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_HasAnyGhostPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyGhostPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyGhostPoints() :
      op->vtkDataSet::HasAnyGhostPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_HasAnyBlankCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankCells() :
      op->vtkDataSet::HasAnyBlankCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_HasAnyBlankPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasAnyBlankPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->HasAnyBlankPoints() :
      op->vtkDataSet::HasAnyBlankPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetPointGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetPointGhostArray() :
      op->vtkDataSet::GetPointGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_UpdatePointGhostArrayCache(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UpdatePointGhostArrayCache."
    " (" "This function is deprecated. It has no effect." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "UpdatePointGhostArrayCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdatePointGhostArrayCache();
    }
    else
    {
      op->vtkDataSet::UpdatePointGhostArrayCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_AllocatePointGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocatePointGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->AllocatePointGhostArray() :
      op->vtkDataSet::AllocatePointGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetCellGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetCellGhostArray() :
      op->vtkDataSet::GetCellGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_UpdateCellGhostArrayCache(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method UpdateCellGhostArrayCache."
    " (" "This function is deprecated. It has no effect." ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "UpdateCellGhostArrayCache");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UpdateCellGhostArrayCache();
    }
    else
    {
      op->vtkDataSet::UpdateCellGhostArrayCache();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_AllocateCellGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AllocateCellGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->AllocateCellGhostArray() :
      op->vtkDataSet::AllocateCellGhostArray());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSet_GetGhostArray(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGhostArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSet *op = static_cast<vtkDataSet *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkUnsignedCharArray *tempr = (ap.IsBound() ?
      op->GetGhostArray(temp0) :
      op->vtkDataSet::GetGhostArray(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSet_Methods[] = {
  {"IsTypeOf", PyvtkDataSet_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSet_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSet_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSet\nC++: static vtkDataSet *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSet_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSet\nC++: vtkDataSet *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSet_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSet_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"CopyStructure", PyvtkDataSet_CopyStructure, METH_VARARGS,
   "CopyStructure(self, ds:vtkDataSet) -> None\nC++: virtual void CopyStructure(vtkDataSet *ds)\n\nCopy the geometric and topological structure of an object. Note\nthat the invoking object and the object pointed to by the\nparameter ds must be of the same type. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"CopyAttributes", PyvtkDataSet_CopyAttributes, METH_VARARGS,
   "CopyAttributes(self, ds:vtkDataSet) -> None\nC++: virtual void CopyAttributes(vtkDataSet *ds)\n\nCopy the attributes associated with the specified dataset to this\ninstance of vtkDataSet. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetNumberOfPoints", PyvtkDataSet_GetNumberOfPoints, METH_VARARGS,
   "GetNumberOfPoints(self) -> int\nC++: virtual vtkIdType GetNumberOfPoints()\n\nDetermine the number of points composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {"GetNumberOfCells", PyvtkDataSet_GetNumberOfCells, METH_VARARGS,
   "GetNumberOfCells(self) -> int\nC++: virtual vtkIdType GetNumberOfCells()\n\nDetermine the number of cells composing the dataset. THIS METHOD\nIS THREAD SAFE\n"},
  {"GetPoint", PyvtkDataSet_GetPoint, METH_VARARGS,
   "GetPoint(self, ptId:int) -> (float, float, float)\nC++: virtual double *GetPoint(vtkIdType ptId)\nGetPoint(self, id:int, x:[float, float, float]) -> None\nC++: virtual void GetPoint(vtkIdType id, double x[3])\n\nGet point coordinates with ptId such that: 0 <= ptId <\nNumberOfPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"NewCellIterator", PyvtkDataSet_NewCellIterator, METH_VARARGS,
   "NewCellIterator(self) -> vtkCellIterator\nC++: virtual vtkCellIterator *NewCellIterator()\n\nReturn an iterator that traverses the cells in this data set.\n"},
  {"GetCell", PyvtkDataSet_GetCell, METH_VARARGS,
   "GetCell(self, cellId:int) -> vtkCell\nC++: virtual vtkCell *GetCell(vtkIdType cellId)\nGetCell(self, i:int, j:int, k:int) -> vtkCell\nC++: virtual vtkCell *GetCell(int i, int j, int k)\nGetCell(self, cellId:int, cell:vtkGenericCell) -> None\nC++: virtual void GetCell(vtkIdType cellId, vtkGenericCell *cell)\n\nGet cell with cellId such that: 0 <= cellId < NumberOfCells. The\nreturned vtkCell is an object owned by this instance, hence the\nreturn value must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE. For a thread-safe\n    version, please use\nvoid GetCell(vtkIdType cellId, vtkGenericCell* cell).\n"},
  {"SetCellOrderAndRationalWeights", PyvtkDataSet_SetCellOrderAndRationalWeights, METH_VARARGS,
   "SetCellOrderAndRationalWeights(self, cellId:int,\n    cell:vtkGenericCell) -> None\nC++: void SetCellOrderAndRationalWeights(vtkIdType cellId,\n    vtkGenericCell *cell)\n\n"},
  {"GetCellBounds", PyvtkDataSet_GetCellBounds, METH_VARARGS,
   "GetCellBounds(self, cellId:int, bounds:[float, float, float,\n    float, float, float]) -> None\nC++: virtual void GetCellBounds(vtkIdType cellId,\n    double bounds[6])\n\nGet the bounds of the cell with cellId such that: 0 <= cellId <\nNumberOfCells. A subclass may be able to determine the bounds of\ncell without using an expensive GetCell() method. A default\nimplementation is provided that actually uses a GetCell() call. \nThis is to ensure the method is available to all datasets. \nSubclasses should override this method to provide an efficient\nimplementation. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellType", PyvtkDataSet_GetCellType, METH_VARARGS,
   "GetCellType(self, cellId:int) -> int\nC++: virtual int GetCellType(vtkIdType cellId)\n\nGet type of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetCellSize", PyvtkDataSet_GetCellSize, METH_VARARGS,
   "GetCellSize(self, cellId:int) -> int\nC++: virtual vtkIdType GetCellSize(vtkIdType cellId)\n\nGet the size of cell with cellId such that: 0 <= cellId <\nNumberOfCells. THIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A\nSINGLE THREAD AND THE DATASET IS NOT MODIFIED\n\n@warning This method MUST be overridden for performance reasons.\nDefault implementation is very unefficient.\n"},
  {"GetCellTypes", PyvtkDataSet_GetCellTypes, METH_VARARGS,
   "GetCellTypes(self, types:vtkCellTypes) -> None\nC++: virtual void GetCellTypes(vtkCellTypes *types)\n\nGet a list of types of cells in a dataset. The list consists of\nan array of types (not necessarily in any order), with a single\nentry per type. For example a dataset 5 triangles, 3 lines, and\n100 hexahedra would result a list of three entries, corresponding\nto the types VTK_TRIANGLE, VTK_LINE, and VTK_HEXAHEDRON. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"GetCellPoints", PyvtkDataSet_GetCellPoints, METH_VARARGS,
   "GetCellPoints(self, cellId:int, ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId,\n    vtkIdList *ptIds)\nGetCellPoints(self, cellId:int, npts:int, pts:(int, ...),\n    ptIds:vtkIdList) -> None\nC++: virtual void GetCellPoints(vtkIdType cellId, vtkIdType &npts,\n     vtkIdType const *&pts, vtkIdList *ptIds)\n\nTopological inquiry to get points defining cell. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetPointCells", PyvtkDataSet_GetPointCells, METH_VARARGS,
   "GetPointCells(self, ptId:int, cellIds:vtkIdList) -> None\nC++: virtual void GetPointCells(vtkIdType ptId,\n    vtkIdList *cellIds)\n\nTopological inquiry to get cells using point. THIS METHOD IS\nTHREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND THE DATASET\nIS NOT MODIFIED\n"},
  {"GetCellNeighbors", PyvtkDataSet_GetCellNeighbors, METH_VARARGS,
   "GetCellNeighbors(self, cellId:int, ptIds:vtkIdList,\n    cellIds:vtkIdList) -> None\nC++: virtual void GetCellNeighbors(vtkIdType cellId,\n    vtkIdList *ptIds, vtkIdList *cellIds)\n\nTopological inquiry to get all cells using list of points\nexclusive of cell specified (e.g., cellId). Note that the list\nconsists of only cells that use ALL the points provided. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"GetCellNumberOfFaces", PyvtkDataSet_GetCellNumberOfFaces, METH_VARARGS,
   "GetCellNumberOfFaces(self, cellId:int, cellType:int,\n    cell:vtkGenericCell) -> int\nC++: int GetCellNumberOfFaces(vtkIdType cellId,\n    unsigned char &cellType, vtkGenericCell *cell)\n\nGet the number of faces of a cell.\n\nMost of the times extracting the number of faces requires only\nextracting the cell type. However, for some cell types, the\nnumber of faces is not constant. For example, a vtkPolyhedron\ncell can have a different number of faces for each cell. That's\nwhy this method requires the cell id and the dataset.\n"},
  {"FindPoint", PyvtkDataSet_FindPoint, METH_VARARGS,
   "FindPoint(self, x:float, y:float, z:float) -> int\nC++: vtkIdType FindPoint(double x, double y, double z)\nFindPoint(self, x:[float, float, float]) -> int\nC++: virtual vtkIdType FindPoint(double x[3])\n\nLocate the closest point to the global coordinate x. Return the\npoint id. If point id < 0; then no point found. (This may arise\nwhen point is outside of dataset.) THIS METHOD IS THREAD SAFE IF\nFIRST CALLED FROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"FindCell", PyvtkDataSet_FindCell, METH_VARARGS,
   "FindCell(self, x:[float, float, float], cell:vtkCell, cellId:int,\n    tol2:float, subId:int, pcoords:[float, float, float],\n    weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\nFindCell(self, x:[float, float, float], cell:vtkCell,\n    gencell:vtkGenericCell, cellId:int, tol2:float, subId:int,\n    pcoords:[float, float, float], weights:[float, ...]) -> int\nC++: virtual vtkIdType FindCell(double x[3], vtkCell *cell,\n    vtkGenericCell *gencell, vtkIdType cellId, double tol2,\n    int &subId, double pcoords[3], double *weights)\n\nLocate cell based on global coordinate x and tolerance squared.\nIf cell and cellId is non-nullptr, then search starts from this\ncell and looks at immediate neighbors.  Returns cellId >= 0 if\ninside, < 0 otherwise.  The parametric coordinates are provided\nin pcoords[3]. The interpolation weights are returned in\nweights[]. (The number of weights is equal to the number of\npoints in the found cell). Tolerance is used to control how close\nthe point is to be considered \"in\" the cell. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"FindAndGetCell", PyvtkDataSet_FindAndGetCell, METH_VARARGS,
   "FindAndGetCell(self, x:[float, float, float], cell:vtkCell,\n    cellId:int, tol2:float, subId:int, pcoords:[float, float,\n    float], weights:[float, ...]) -> vtkCell\nC++: virtual vtkCell *FindAndGetCell(double x[3], vtkCell *cell,\n    vtkIdType cellId, double tol2, int &subId, double pcoords[3],\n    double *weights)\n\nLocate the cell that contains a point and return the cell. Also\nreturns the subcell id, parametric coordinates and weights for\nsubsequent interpolation. This method combines the derived class\nmethods int FindCell and vtkCell *GetCell. Derived classes may\nprovide a more efficient implementation. See for example\nvtkStructuredPoints. THIS METHOD IS NOT THREAD SAFE.\n"},
  {"GetMTime", PyvtkDataSet_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nDatasets are composite objects and need to check each part for\nMTime THIS METHOD IS THREAD SAFE\n"},
  {"GetCellData", PyvtkDataSet_GetCellData, METH_VARARGS,
   "GetCellData(self) -> vtkCellData\nC++: vtkCellData *GetCellData()\n\nReturn a pointer to this dataset's cell data. THIS METHOD IS\nTHREAD SAFE\n"},
  {"GetPointData", PyvtkDataSet_GetPointData, METH_VARARGS,
   "GetPointData(self) -> vtkPointData\nC++: vtkPointData *GetPointData()\n\nReturn a pointer to this dataset's point data. THIS METHOD IS\nTHREAD SAFE\n"},
  {"Squeeze", PyvtkDataSet_Squeeze, METH_VARARGS,
   "Squeeze(self) -> None\nC++: virtual void Squeeze()\n\nReclaim any extra memory used to store data. THIS METHOD IS NOT\nTHREAD SAFE.\n"},
  {"ComputeBounds", PyvtkDataSet_ComputeBounds, METH_VARARGS,
   "ComputeBounds(self) -> None\nC++: virtual void ComputeBounds()\n\nCompute the data bounding box from data points. THIS METHOD IS\nNOT THREAD SAFE.\n"},
  {"GetBounds", PyvtkDataSet_GetBounds, METH_VARARGS,
   "GetBounds(self) -> (float, float, float, float, float, float)\nC++: double *GetBounds()\nGetBounds(self, bounds:[float, float, float, float, float, float])\n     -> None\nC++: void GetBounds(double bounds[6])\n\nReturn a pointer to the geometry bounding box in the form\n(xmin,xmax, ymin,ymax, zmin,zmax). THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"GetCenter", PyvtkDataSet_GetCenter, METH_VARARGS,
   "GetCenter(self) -> (float, float, float)\nC++: double *GetCenter()\nGetCenter(self, center:[float, float, float]) -> None\nC++: void GetCenter(double center[3])\n\nGet the center of the bounding box. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"GetLength", PyvtkDataSet_GetLength, METH_VARARGS,
   "GetLength(self) -> float\nC++: double GetLength()\n\nReturn the length of the diagonal of the bounding box. THIS\nMETHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD AND\nTHE DATASET IS NOT MODIFIED\n"},
  {"GetLength2", PyvtkDataSet_GetLength2, METH_VARARGS,
   "GetLength2(self) -> float\nC++: double GetLength2()\n\nReturn the squared length of the diagonal of the bounding box.\nTHIS METHOD IS THREAD SAFE IF FIRST CALLED FROM A SINGLE THREAD\nAND THE DATASET IS NOT MODIFIED\n"},
  {"Initialize", PyvtkDataSet_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize() override;\n\nRestore data object to initial state. THIS METHOD IS NOT THREAD\nSAFE.\n"},
  {"GetScalarRange", PyvtkDataSet_GetScalarRange, METH_VARARGS,
   "GetScalarRange(self, range:[float, float]) -> None\nC++: virtual void GetScalarRange(double range[2])\nGetScalarRange(self) -> (float, float)\nC++: double *GetScalarRange()\n\nConvenience method to get the range of the first component (and\nonly the first component) of any scalars in the data set.  If the\ndata has both point data and cell data, it returns the (min/max)\nrange of combined point and cell data.  If there are no point or\ncell scalars the method will return (0,1).  Note: It might be\nnecessary to call Update to create or refresh the scalars before\ncalling this method. THIS METHOD IS THREAD SAFE IF FIRST CALLED\nFROM A SINGLE THREAD AND THE DATASET IS NOT MODIFIED\n"},
  {"GetMaxCellSize", PyvtkDataSet_GetMaxCellSize, METH_VARARGS,
   "GetMaxCellSize(self) -> int\nC++: virtual int GetMaxCellSize()\n\nConvenience method returns largest cell size in dataset. This is\ngenerally used to allocate memory for supporting data structures.\nTHIS METHOD IS THREAD SAFE\n"},
  {"GetActualMemorySize", PyvtkDataSet_GetActualMemorySize, METH_VARARGS,
   "GetActualMemorySize(self) -> int\nC++: unsigned long GetActualMemorySize() override;\n\nReturn the actual size of the data in kibibytes (1024 bytes).\nThis number is valid only after the pipeline has updated. The\nmemory size returned is guaranteed to be greater than or equal to\nthe memory required to represent the data (e.g., extra space in\narrays, etc. are not included in the return value). THIS METHOD\nIS THREAD SAFE.\n"},
  {"GetDataObjectType", PyvtkDataSet_GetDataObjectType, METH_VARARGS,
   "GetDataObjectType(self) -> int\nC++: int GetDataObjectType() override;\n\nReturn the type of data object.\n"},
  {"ShallowCopy", PyvtkDataSet_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, src:vtkDataObject) -> None\nC++: void ShallowCopy(vtkDataObject *src) override;\n\nShallow and Deep copy.\n"},
  {"DeepCopy", PyvtkDataSet_DeepCopy, METH_VARARGS,
   "DeepCopy(self, src:vtkDataObject) -> None\nC++: void DeepCopy(vtkDataObject *src) override;\n\nThe goal of the method is to copy the complete data from src into\nthis object. The implementation is delegated to the differenent\nsubclasses. If you want to copy the data up to the array pointers\nonly, @see ShallowCopy.\n\nThis method deep copy the field data and copy the internal\nstructure.\n"},
  {"CheckAttributes", PyvtkDataSet_CheckAttributes, METH_VARARGS,
   "CheckAttributes(self) -> int\nC++: int CheckAttributes()\n\nThis method checks to see if the cell and point attributes match\nthe geometry.  Many filters will crash if the number of tuples in\nan array is less than the number of points/cells. This method\nreturns 1 if there is a mismatch, and 0 if everything is ok.  It\nprints an error if an array is too short, and a warning if an\narray is too long.\n"},
  {"GenerateGhostArray", PyvtkDataSet_GenerateGhostArray, METH_VARARGS,
   "GenerateGhostArray(self, zeroExt:[int, int, int, int, int, int])\n    -> None\nC++: virtual void GenerateGhostArray(int zeroExt[6])\nGenerateGhostArray(self, zeroExt:[int, int, int, int, int, int],\n    cellOnly:bool) -> None\nC++: virtual void GenerateGhostArray(int zeroExt[6],\n    bool cellOnly)\n\nNormally called by pipeline executives or algorithms only. This\nmethod computes the ghost arrays for a given dataset. The zeroExt\nargument specifies the extent of the region which ghost type = 0.\n"},
  {"GetData", PyvtkDataSet_GetData, METH_VARARGS,
   "GetData(info:vtkInformation) -> vtkDataSet\nC++: static vtkDataSet *GetData(vtkInformation *info)\nGetData(v:vtkInformationVector, i:int=0) -> vtkDataSet\nC++: static vtkDataSet *GetData(vtkInformationVector *v, int i=0)\n\nRetrieve an instance of this class from an information object.\n"},
  {"GetAttributesAsFieldData", PyvtkDataSet_GetAttributesAsFieldData, METH_VARARGS,
   "GetAttributesAsFieldData(self, type:int) -> vtkFieldData\nC++: vtkFieldData *GetAttributesAsFieldData(int type) override;\n\nReturns the attributes of the data object as a vtkFieldData. This\nreturns non-null values in all the same cases as GetAttributes,\nin addition to the case of FIELD, which will return the field\ndata for any vtkDataObject subclass.\n"},
  {"GetNumberOfElements", PyvtkDataSet_GetNumberOfElements, METH_VARARGS,
   "GetNumberOfElements(self, type:int) -> int\nC++: vtkIdType GetNumberOfElements(int type) override;\n\nGet the number of elements for a specific attribute type (POINT,\nCELL, etc.).\n"},
  {"HasAnyGhostCells", PyvtkDataSet_HasAnyGhostCells, METH_VARARGS,
   "HasAnyGhostCells(self) -> bool\nC++: bool HasAnyGhostCells()\n\nReturns 1 if there are any ghost cells 0 otherwise.\n"},
  {"HasAnyGhostPoints", PyvtkDataSet_HasAnyGhostPoints, METH_VARARGS,
   "HasAnyGhostPoints(self) -> bool\nC++: bool HasAnyGhostPoints()\n\nReturns 1 if there are any ghost points 0 otherwise.\n"},
  {"HasAnyBlankCells", PyvtkDataSet_HasAnyBlankCells, METH_VARARGS,
   "HasAnyBlankCells(self) -> bool\nC++: virtual bool HasAnyBlankCells()\n\nReturns 1 if there are any blanking cells 0 otherwise. Blanking\nis supported only for vtkStructuredGrid and vtkUniformGrid\n"},
  {"HasAnyBlankPoints", PyvtkDataSet_HasAnyBlankPoints, METH_VARARGS,
   "HasAnyBlankPoints(self) -> bool\nC++: virtual bool HasAnyBlankPoints()\n\nReturns 1 if there are any blanking points 0 otherwise. Blanking\nis supported only for vtkStructuredGrid and vtkUniformGrid\n"},
  {"GetPointGhostArray", PyvtkDataSet_GetPointGhostArray, METH_VARARGS,
   "GetPointGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetPointGhostArray()\n\nGets the array that defines the ghost type of each point. We\ncache the pointer to the array to save a lookup involving string\ncomparisons\n"},
  {"UpdatePointGhostArrayCache", PyvtkDataSet_UpdatePointGhostArrayCache, METH_VARARGS,
   "UpdatePointGhostArrayCache(self) -> None\nC++: void UpdatePointGhostArrayCache()\n\nUpdates the pointer to the point ghost array.\n"},
  {"AllocatePointGhostArray", PyvtkDataSet_AllocatePointGhostArray, METH_VARARGS,
   "AllocatePointGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *AllocatePointGhostArray()\n\nAllocate ghost array for points.\n"},
  {"GetCellGhostArray", PyvtkDataSet_GetCellGhostArray, METH_VARARGS,
   "GetCellGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetCellGhostArray()\n\nGet the array that defines the ghost type of each cell. We cache\nthe pointer to the array to save a lookup involving string\ncomparisons\n"},
  {"UpdateCellGhostArrayCache", PyvtkDataSet_UpdateCellGhostArrayCache, METH_VARARGS,
   "UpdateCellGhostArrayCache(self) -> None\nC++: void UpdateCellGhostArrayCache()\n\nUpdates the pointer to the cell ghost array.\n"},
  {"AllocateCellGhostArray", PyvtkDataSet_AllocateCellGhostArray, METH_VARARGS,
   "AllocateCellGhostArray(self) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *AllocateCellGhostArray()\n\nAllocate ghost array for cells.\n"},
  {"GetGhostArray", PyvtkDataSet_GetGhostArray, METH_VARARGS,
   "GetGhostArray(self, type:int) -> vtkUnsignedCharArray\nC++: vtkUnsignedCharArray *GetGhostArray(int type) override;\n\nReturns the ghost array for the given type (point or cell). Takes\nadvantage of the cache with the pointer to the array to save a\nstring comparison.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSet_Doc =
  "vtkDataSet - abstract class to specify dataset behavior\n\n"
  "Superclass: vtkDataObject\n\n"
  "vtkDataSet is an abstract class that specifies an interface for\n"
  "dataset objects. vtkDataSet also provides methods to provide\n"
  "information about the data, such as center, bounding box, and\n"
  "representative length.\n\n"
  "In vtk a dataset consists of a structure (geometry and topology) and\n"
  "attribute data. The structure is defined implicitly or explicitly as\n"
  "a collection of cells. The geometry of the structure is contained in\n"
  "point coordinates plus the cell interpolation functions. The topology\n"
  "of the dataset structure is defined by cell types and how the cells\n"
  "share their defining points.\n\n"
  "Attribute data in vtk is either point data (data at points) or cell\n"
  "data (data at cells). Typically filters operate on point data, but\n"
  "some may operate on cell data, both cell and point data, either one,\n"
  "or none.\n\n"
  "@sa\n"
  "vtkPointSet vtkStructuredPoints vtkStructuredGrid vtkUnstructuredGrid\n"
  "vtkRectilinearGrid vtkPolyData vtkPointData vtkCellData vtkDataObject\n"
  "vtkFieldData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSet_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkDataSet", // tp_name
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
  PyvtkDataSet_Doc, // tp_doc
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

PyObject *PyvtkDataSet_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSet_Type, PyvtkDataSet_Methods,
    "vtkDataSet",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkDataObject_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDataSet_FieldDataType_Type);
  PyVTKEnum_Add(&PyvtkDataSet_FieldDataType_Type, "vtkDataSet.FieldDataType");

  o = (PyObject *)&PyvtkDataSet_FieldDataType_Type;
  if (PyDict_SetItemString(d, "FieldDataType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkDataSet::FieldDataType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "DATA_OBJECT_FIELD", vtkDataSet::DATA_OBJECT_FIELD },
        { "POINT_DATA_FIELD", vtkDataSet::POINT_DATA_FIELD },
        { "CELL_DATA_FIELD", vtkDataSet::CELL_DATA_FIELD },
      };

    o = PyvtkDataSet_FieldDataType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSet(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSet_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSet", o) != 0)
  {
    Py_DECREF(o);
  }

}

