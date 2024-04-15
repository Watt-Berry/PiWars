// python wrapper for vtkPolygon
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolygon.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolygon(PyObject *dict); }
extern "C" { PyObject *PyvtkPolygon_ClassNew(); }

#ifndef DECLARED_PyvtkCell_ClassNew
extern "C" { PyObject *PyvtkCell_ClassNew(); }
#define DECLARED_PyvtkCell_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygon_EarCutMeasureTypes_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPolygon.EarCutMeasureTypes", // tp_name
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
PyObject *PyvtkPolygon_EarCutMeasureTypes_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkPolygon_EarCutMeasureTypes_Type, static_cast<int>(val));
}


static PyObject *
PyvtkPolygon_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolygon::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolygon::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolygon *tempr = vtkPolygon::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolygon *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolygon::NewInstance());

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
PyvtkPolygon_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolygon::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolygon::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetCellType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellType() :
      op->vtkPolygon::GetCellType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetCellDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCellDimension() :
      op->vtkPolygon::GetCellDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfEdges(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfEdges");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfEdges() :
      op->vtkPolygon::GetNumberOfEdges());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetNumberOfFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfFaces() :
      op->vtkPolygon::GetNumberOfFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetEdge(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEdge");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetEdge(temp0) :
      op->vtkPolygon::GetEdge(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetFace(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFace");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkCell *tempr = (ap.IsBound() ?
      op->GetFace(temp0) :
      op->vtkPolygon::GetFace(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_CellBoundary(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellBoundary");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  vtkIdList *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->CellBoundary(temp0, temp1, temp2) :
      op->vtkPolygon::CellBoundary(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_Contour(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Contour");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkCellArray *temp4 = nullptr;
  vtkCellArray *temp5 = nullptr;
  vtkPointData *temp6 = nullptr;
  vtkPointData *temp7 = nullptr;
  vtkCellData *temp8 = nullptr;
  long long temp9;
  vtkCellData *temp10 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(11) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkCellArray") &&
      ap.GetVTKObject(temp5, "vtkCellArray") &&
      ap.GetVTKObject(temp6, "vtkPointData") &&
      ap.GetVTKObject(temp7, "vtkPointData") &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9) &&
      ap.GetVTKObject(temp10, "vtkCellData"))
  {
    if (ap.IsBound())
    {
      op->Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }
    else
    {
      op->vtkPolygon::Contour(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9, temp10);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_Clip(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Clip");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  double temp0;
  vtkDataArray *temp1 = nullptr;
  vtkIncrementalPointLocator *temp2 = nullptr;
  vtkCellArray *temp3 = nullptr;
  vtkPointData *temp4 = nullptr;
  vtkPointData *temp5 = nullptr;
  vtkCellData *temp6 = nullptr;
  long long temp7;
  vtkCellData *temp8 = nullptr;
  int temp9;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(10) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkDataArray") &&
      ap.GetVTKObject(temp2, "vtkIncrementalPointLocator") &&
      ap.GetVTKObject(temp3, "vtkCellArray") &&
      ap.GetVTKObject(temp4, "vtkPointData") &&
      ap.GetVTKObject(temp5, "vtkPointData") &&
      ap.GetVTKObject(temp6, "vtkCellData") &&
      ap.GetValue(temp7) &&
      ap.GetVTKObject(temp8, "vtkCellData") &&
      ap.GetValue(temp9))
  {
    if (ap.IsBound())
    {
      op->Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }
    else
    {
      op->vtkPolygon::Clip(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8, temp9);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_EvaluatePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluatePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  int temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPolygon::EvaluatePosition(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_EvaluateLocation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EvaluateLocation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->EvaluateLocation(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkPolygon::EvaluateLocation(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
    }
    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectWithLine(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IntersectWithLine");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  const size_t size1 = 3;
  double temp1[3];
  double temp2;
  double temp3;
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  int temp6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(7) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6))
  {
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6) :
      op->vtkPolygon::IntersectWithLine(temp0, temp1, temp2, temp3, temp4, temp5, temp6));

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(3, temp3);
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

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(6, temp6);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_Triangulate_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0, temp1, temp2) :
      op->vtkPolygon::Triangulate(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Triangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->Triangulate(temp0) :
      op->vtkPolygon::Triangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_Triangulate(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkPolygon_Triangulate_s1(self, args);
    case 1:
      return PyvtkPolygon_Triangulate_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Triangulate");
  return nullptr;
}


static PyObject *
PyvtkPolygon_Derivatives(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Derivatives");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  const size_t size1 = 3;
  double temp1[3];
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  int temp3;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    if (ap.IsBound())
    {
      op->Derivatives(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkPolygon::Derivatives(temp0, temp1, temp2, temp3, temp4);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IsPrimaryCell(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsPrimaryCell");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->IsPrimaryCell() :
      op->vtkPolygon::IsPrimaryCell());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_ComputeArea_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeArea");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->ComputeArea() :
      op->vtkPolygon::ComputeArea());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeArea_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeArea");

  vtkPoints *temp0 = nullptr;
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    double tempr = vtkPolygon::ComputeArea(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeArea(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygon_ComputeArea_s1(self, args);
    case 4:
      return PyvtkPolygon_ComputeArea_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeArea");
  return nullptr;
}


static PyObject *
PyvtkPolygon_InterpolateFunctions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InterpolateFunctions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->InterpolateFunctions(temp0, temp1);
    }
    else
    {
      op->vtkPolygon::InterpolateFunctions(temp0, temp1);
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
PyvtkPolygon_ComputeNormal_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeNormal_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkPoints *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    vtkPolygon::ComputeNormal(temp0, temp1);

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
PyvtkPolygon_ComputeNormal_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeNormal_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeNormal");

  int temp0;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);

    vtkPolygon::ComputeNormal(temp0, temp1, temp2);

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygon_ComputeNormal_Methods[] = {
  {"ComputeNormal", PyvtkPolygon_ComputeNormal_s3, METH_VARARGS | METH_STATIC,
   "VVP *vtkIdTypeArray *vtkPoints *d"},
  {"ComputeNormal", PyvtkPolygon_ComputeNormal_s4, METH_VARARGS | METH_STATIC,
   "iPP *d *d"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygon_ComputeNormal(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolygon_ComputeNormal_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolygon_ComputeNormal_s1(self, args);
    case 2:
      return PyvtkPolygon_ComputeNormal_s2(self, args);
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeNormal");
  return nullptr;
}


static PyObject *
PyvtkPolygon_IsConvex_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsConvex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsConvex() :
      op->vtkPolygon::IsConvex());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2))
  {
    bool tempr = vtkPolygon::IsConvex(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints"))
  {
    bool tempr = vtkPolygon::IsConvex(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsConvex");

  vtkPoints *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPoints"))
  {
    bool tempr = vtkPolygon::IsConvex(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_IsConvex(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygon_IsConvex_s1(self, args);
    case 3:
      return PyvtkPolygon_IsConvex_s2(self, args);
    case 2:
      return PyvtkPolygon_IsConvex_s3(self, args);
    case 1:
      return PyvtkPolygon_IsConvex_s4(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "IsConvex");
  return nullptr;
}


static PyObject *
PyvtkPolygon_ComputeCentroid_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkPoints *temp0 = nullptr;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(size2);
  long long *temp2 = store2.Data();
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    bool tempr = vtkPolygon::ComputeCentroid(temp0, temp1, temp2, temp3);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeCentroid_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeCentroid");

  vtkIdTypeArray *temp0 = nullptr;
  vtkPoints *temp1 = nullptr;
  const size_t size2 = 3;
  double temp2[3];
  double save2[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkIdTypeArray") &&
      ap.GetVTKObject(temp1, "vtkPoints") &&
      ap.GetArray(temp2, size2))
  {
    vtkPythonArgs::Save(temp2, save2, size2);

    bool tempr = vtkPolygon::ComputeCentroid(temp0, temp1, temp2);

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_ComputeCentroid(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 4:
      return PyvtkPolygon_ComputeCentroid_s1(self, args);
    case 3:
      return PyvtkPolygon_ComputeCentroid_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ComputeCentroid");
  return nullptr;
}


static PyObject *
PyvtkPolygon_ParameterizePolygon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ParameterizePolygon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  double temp4;
  const size_t size5 = 3;
  double temp5[3];
  double save5[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    int tempr = (ap.IsBound() ?
      op->ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5) :
      op->vtkPolygon::ParameterizePolygon(temp0, temp1, temp2, temp3, temp4, temp5));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_PointInPolygon(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "PointInPolygon");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = vtkPolygon::PointInPolygon(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_NonDegenerateTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NonDegenerateTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIdList"))
  {
    int tempr = (ap.IsBound() ?
      op->NonDegenerateTriangulate(temp0) :
      op->vtkPolygon::NonDegenerateTriangulate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_BoundedTriangulate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BoundedTriangulate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->BoundedTriangulate(temp0, temp1) :
      op->vtkPolygon::BoundedTriangulate(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_DistanceToPolygon(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "DistanceToPolygon");

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  const size_t size3 = 6;
  double temp3[6];
  double save3[6];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    double tempr = vtkPolygon::DistanceToPolygon(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (vtkPythonArgs::HasChanged(temp2, save2, size2) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(2, temp2, size2);
    }

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectPolygonWithPolygon(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectPolygonWithPolygon");

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
  PyObject *result = nullptr;

  if (ap.CheckArgCount(8) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetValue(temp3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5) &&
      ap.GetValue(temp6) &&
      ap.GetArray(temp7, size7))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);
    vtkPythonArgs::Save(temp7, save7, size7);

    int tempr = vtkPolygon::IntersectPolygonWithPolygon(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7);

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_IntersectConvex2DCells(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IntersectConvex2DCells");

  vtkCell *temp0 = nullptr;
  vtkCell *temp1 = nullptr;
  double temp2;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  const size_t size4 = 3;
  double temp4[3];
  double save4[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetVTKObject(temp1, "vtkCell") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = vtkPolygon::IntersectConvex2DCells(temp0, temp1, temp2, temp3, temp4);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp4, save4, size4) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(4, temp4, size4);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseMVCInterpolation() :
      op->vtkPolygon::GetUseMVCInterpolation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_SetUseMVCInterpolation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseMVCInterpolation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseMVCInterpolation(temp0);
    }
    else
    {
      op->vtkPolygon::SetUseMVCInterpolation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTolerance(temp0);
    }
    else
    {
      op->vtkPolygon::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkPolygon::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkPolygon::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkPolygon::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolygon_EarCutTriangulation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EarCutTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0 = vtkPolygon::PERIMETER2_TO_AREA_RATIO;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    int tempr = (ap.IsBound() ?
      op->EarCutTriangulation(temp0) :
      op->vtkPolygon::EarCutTriangulation(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_EarCutTriangulation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "EarCutTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  vtkIdList *temp0 = nullptr;
  int temp1 = vtkPolygon::PERIMETER2_TO_AREA_RATIO;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->EarCutTriangulation(temp0, temp1) :
      op->vtkPolygon::EarCutTriangulation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygon_EarCutTriangulation_Methods[] = {
  {"EarCutTriangulation", PyvtkPolygon_EarCutTriangulation_s1, METH_VARARGS,
   "@|i"},
  {"EarCutTriangulation", PyvtkPolygon_EarCutTriangulation_s2, METH_VARARGS,
   "@V|i *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygon_EarCutTriangulation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolygon_EarCutTriangulation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkPolygon_EarCutTriangulation_s1(self, args);
    case 2:
      return PyvtkPolygon_EarCutTriangulation_s2(self, args);
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "EarCutTriangulation");
  return nullptr;
}


static PyObject *
PyvtkPolygon_UnbiasedEarCutTriangulation_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedEarCutTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  int temp1 = vtkPolygon::PERIMETER2_TO_AREA_RATIO;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    int tempr = (ap.IsBound() ?
      op->UnbiasedEarCutTriangulation(temp0, temp1) :
      op->vtkPolygon::UnbiasedEarCutTriangulation(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkPolygon_UnbiasedEarCutTriangulation_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnbiasedEarCutTriangulation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolygon *op = static_cast<vtkPolygon *>(vp);

  int temp0;
  vtkIdList *temp1 = nullptr;
  int temp2 = vtkPolygon::PERIMETER2_TO_AREA_RATIO;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkIdList") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    int tempr = (ap.IsBound() ?
      op->UnbiasedEarCutTriangulation(temp0, temp1, temp2) :
      op->vtkPolygon::UnbiasedEarCutTriangulation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkPolygon_UnbiasedEarCutTriangulation_Methods[] = {
  {"UnbiasedEarCutTriangulation", PyvtkPolygon_UnbiasedEarCutTriangulation_s1, METH_VARARGS,
   "@i|i"},
  {"UnbiasedEarCutTriangulation", PyvtkPolygon_UnbiasedEarCutTriangulation_s2, METH_VARARGS,
   "@iV|i *vtkIdList"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkPolygon_UnbiasedEarCutTriangulation(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkPolygon_UnbiasedEarCutTriangulation_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkPolygon_UnbiasedEarCutTriangulation_s1(self, args);
    case 3:
      return PyvtkPolygon_UnbiasedEarCutTriangulation_s2(self, args);
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnbiasedEarCutTriangulation");
  return nullptr;
}

static PyMethodDef PyvtkPolygon_Methods[] = {
  {"IsTypeOf", PyvtkPolygon_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolygon_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolygon_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolygon\nC++: static vtkPolygon *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolygon_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolygon\nC++: vtkPolygon *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolygon_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolygon_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCellType", PyvtkPolygon_GetCellType, METH_VARARGS,
   "GetCellType(self) -> int\nC++: int GetCellType() override;\n\nSee the vtkCell API for descriptions of these methods.\n"},
  {"GetCellDimension", PyvtkPolygon_GetCellDimension, METH_VARARGS,
   "GetCellDimension(self) -> int\nC++: int GetCellDimension() override;\n\nReturn the topological dimensional of the cell (0,1,2, or 3).\n"},
  {"GetNumberOfEdges", PyvtkPolygon_GetNumberOfEdges, METH_VARARGS,
   "GetNumberOfEdges(self) -> int\nC++: int GetNumberOfEdges() override;\n\nReturn the number of edges in the cell.\n"},
  {"GetNumberOfFaces", PyvtkPolygon_GetNumberOfFaces, METH_VARARGS,
   "GetNumberOfFaces(self) -> int\nC++: int GetNumberOfFaces() override;\n\nReturn the number of faces in the cell.\n"},
  {"GetEdge", PyvtkPolygon_GetEdge, METH_VARARGS,
   "GetEdge(self, edgeId:int) -> vtkCell\nC++: vtkCell *GetEdge(int edgeId) override;\n\nReturn the edge cell from the edgeId of the cell.\n"},
  {"GetFace", PyvtkPolygon_GetFace, METH_VARARGS,
   "GetFace(self, __a:int) -> vtkCell\nC++: vtkCell *GetFace(int) override;\n\nReturn the face cell from the faceId of the cell. The returned\nvtkCell is an object owned by this instance, hence the return\nvalue must not be deleted by the caller.\n\n@warning Repeat calls to this function for different face ids\n    will change\nthe data stored in the internal member object whose pointer is\nreturned by this function.\n\n@warning THIS METHOD IS NOT THREAD SAFE.\n"},
  {"CellBoundary", PyvtkPolygon_CellBoundary, METH_VARARGS,
   "CellBoundary(self, subId:int, pcoords:(float, float, float),\n    pts:vtkIdList) -> int\nC++: int CellBoundary(int subId, const double pcoords[3],\n    vtkIdList *pts) override;\n\nGiven parametric coordinates of a point, return the closest cell\nboundary, and whether the point is inside or outside of the cell.\nThe cell boundary is defined by a list of points (pts) that\nspecify a face (3D cell), edge (2D cell), or vertex (1D cell). If\nthe return value of the method is != 0, then the point is inside\nthe cell.\n"},
  {"Contour", PyvtkPolygon_Contour, METH_VARARGS,
   "Contour(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, verts:vtkCellArray,\n    lines:vtkCellArray, polys:vtkCellArray, inPd:vtkPointData,\n    outPd:vtkPointData, inCd:vtkCellData, cellId:int,\n    outCd:vtkCellData) -> None\nC++: void Contour(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *verts,\n    vtkCellArray *lines, vtkCellArray *polys, vtkPointData *inPd,\n    vtkPointData *outPd, vtkCellData *inCd, vtkIdType cellId,\n    vtkCellData *outCd) override;\n\nGenerate contouring primitives. The scalar list cellScalars are\nscalar values at each cell point. The point locator is\nessentially a points list that merges points as they are inserted\n(i.e., prevents duplicates). Contouring primitives can be\nvertices, lines, or polygons. It is possible to interpolate point\ndata along the edge by providing input and output point data - if\noutPd is nullptr, then no interpolation is performed. Also, if\nthe output cell data is non-nullptr, the cell data from the\ncontoured cell is passed to the generated contouring primitives.\n(Note: the CopyAllocate() method must be invoked on both the\noutput cell and point data. The cellId refers to the cell from\nwhich the cell data is copied.)\n"},
  {"Clip", PyvtkPolygon_Clip, METH_VARARGS,
   "Clip(self, value:float, cellScalars:vtkDataArray,\n    locator:vtkIncrementalPointLocator, tris:vtkCellArray,\n    inPd:vtkPointData, outPd:vtkPointData, inCd:vtkCellData,\n    cellId:int, outCd:vtkCellData, insideOut:int) -> None\nC++: void Clip(double value, vtkDataArray *cellScalars,\n    vtkIncrementalPointLocator *locator, vtkCellArray *tris,\n    vtkPointData *inPd, vtkPointData *outPd, vtkCellData *inCd,\n    vtkIdType cellId, vtkCellData *outCd, int insideOut) override;\n\nCut (or clip) the cell based on the input cellScalars and the\nspecified value. The output of the clip operation will be one or\nmore cells of the same topological dimension as the original\ncell. The flag insideOut controls what part of the cell is\nconsidered inside - normally cell points whose scalar value is\ngreater than \"value\" are considered inside. If insideOut is on,\nthis is reversed. Also, if the output cell data is non-nullptr,\nthe cell data from the clipped cell is passed to the generated\ncontouring primitives. (Note: the CopyAllocate() method must be\ninvoked on both the output cell and point data. The cellId refers\nto the cell from which the cell data is copied.)\n"},
  {"EvaluatePosition", PyvtkPolygon_EvaluatePosition, METH_VARARGS,
   "EvaluatePosition(self, x:(float, float, float),\n    closestPoint:[float, float, float], subId:int, pcoords:[float,\n     float, float], dist2:float, weights:[float, ...]) -> int\nC++: int EvaluatePosition(const double x[3],\n    double closestPoint[3], int &subId, double pcoords[3],\n    double &dist2, double weights[]) override;\n\nGiven a point x[3] return inside(=1), outside(=0) cell, or (-1)\ncomputational problem encountered; evaluate parametric\ncoordinates, sub-cell id (!=0 only if cell is composite),\ndistance squared of point x[3] to cell (in particular, the\nsub-cell indicated), closest point on cell to x[3] (unless\nclosestPoint is null, in which case, the closest point and dist2\nare not found), and interpolation weights in cell. (The number of\nweights is equal to the number of points defining the cell).\nNote: on rare occasions a -1 is returned from the method. This\nmeans that numerical error has occurred and all data returned\nfrom this method should be ignored. Also, inside/outside is\ndetermine parametrically. That is, a point is inside if it\nsatisfies parametric limits. This can cause problems for cells of\ntopological dimension 2 or less, since a point in 3D can project\nonto the cell within parametric limits but be \"far\" from the\ncell.  Thus the value dist2 may be checked to determine true\nin/out.\n"},
  {"EvaluateLocation", PyvtkPolygon_EvaluateLocation, METH_VARARGS,
   "EvaluateLocation(self, subId:int, pcoords:(float, float, float),\n    x:[float, float, float], weights:[float, ...]) -> None\nC++: void EvaluateLocation(int &subId, const double pcoords[3],\n    double x[3], double *weights) override;\n\nDetermine global coordinate (x[3]) from subId and parametric\ncoordinates. Also returns interpolation weights. (The number of\nweights is equal to the number of points in the cell.)\n"},
  {"IntersectWithLine", PyvtkPolygon_IntersectWithLine, METH_VARARGS,
   "IntersectWithLine(self, p1:(float, float, float), p2:(float,\n    float, float), tol:float, t:float, x:[float, float, float],\n    pcoords:[float, float, float], subId:int) -> int\nC++: int IntersectWithLine(const double p1[3], const double p2[3],\n     double tol, double &t, double x[3], double pcoords[3],\n    int &subId) override;\n\nIntersect with a ray. Return parametric coordinates (both line\nand cell) and global intersection coordinates, given ray\ndefinition p1[3], p2[3] and tolerance tol. The method returns\nnon-zero value if intersection occurs. A parametric distance t\nbetween 0 and 1 along the ray representing the intersection\npoint, the point coordinates x[3] in data coordinates and also\npcoords[3] in parametric coordinates. subId is the index within\nthe cell if a composed cell like a triangle strip.\n"},
  {"Triangulate", PyvtkPolygon_Triangulate, METH_VARARGS,
   "Triangulate(self, index:int, ptIds:vtkIdList, pts:vtkPoints)\n    -> int\nC++: int Triangulate(int index, vtkIdList *ptIds, vtkPoints *pts)\n    override;\nTriangulate(self, outTris:vtkIdList) -> int\nC++: int Triangulate(vtkIdList *outTris)\n\nGenerate simplices of proper dimension. If cell is 3D,\ntetrahedron are generated; if 2D triangles; if 1D lines; if 0D\npoints. The form of the output is a sequence of points, each n+1\npoints (where n is topological cell dimension) defining a\nsimplex. The index is a parameter that controls which\ntriangulation to use (if more than one is possible). If numerical\ndegeneracy encountered, 0 is returned, otherwise 1 is returned.\nThis method does not insert new points: all the points that\ndefine the simplices are the points that define the cell.\n"},
  {"Derivatives", PyvtkPolygon_Derivatives, METH_VARARGS,
   "Derivatives(self, subId:int, pcoords:(float, float, float),\n    values:(float, ...), dim:int, derivs:[float, ...]) -> None\nC++: void Derivatives(int subId, const double pcoords[3],\n    const double *values, int dim, double *derivs) override;\n\nCompute derivatives given cell subId and parametric coordinates.\nThe values array is a series of data value(s) at the cell points.\nThere is a one-to-one correspondence between cell point and data\nvalue(s). Dim is the number of data values per cell point. Derivs\nare derivatives in the x-y-z coordinate directions for each data\nvalue. Thus, if computing derivatives for a scalar function in a\nhexahedron, dim=1, 8 values are supplied, and 3 deriv values are\nreturned (i.e., derivatives in x-y-z directions). On the other\nhand, if computing derivatives of velocity (vx,vy,vz) dim=3, 24\nvalues are supplied ((vx,vy,vz)1, (vx,vy,vz)2, ....()8), and 9\nderiv values are returned ((d(vx)/dx),(d(vx)/dy),(d(vx)/dz),\n(d(vy)/dx),(d(vy)/dy), (d(vy)/dz),\n(d(vz)/dx),(d(vz)/dy),(d(vz)/dz)).\n"},
  {"IsPrimaryCell", PyvtkPolygon_IsPrimaryCell, METH_VARARGS,
   "IsPrimaryCell(self) -> int\nC++: int IsPrimaryCell() override;\n\nReturn whether this cell type has a fixed topology or whether the\ntopology varies depending on the data (e.g., vtkConvexPointSet).\nThis compares to composite cells that are typically composed of\nprimary cells (e.g., a triangle strip composite cell is made up\nof triangle primary cells).\n"},
  {"ComputeArea", PyvtkPolygon_ComputeArea, METH_VARARGS,
   "ComputeArea(self) -> float\nC++: double ComputeArea()\nComputeArea(p:vtkPoints, numPts:int, pts:(int, ...),\n    normal:[float, float, float]) -> float\nC++: static double ComputeArea(vtkPoints *p, vtkIdType numPts,\n    const vtkIdType *pts, double normal[3])\n\nCompute the area of a polygon. This is a convenience function\nwhich simply calls static double ComputeArea(vtkPoints *p,\nvtkIdType numPts, vtkIdType *pts, double normal[3]); with the\nappropriate parameters from the instantiated vtkPolygon.\n"},
  {"InterpolateFunctions", PyvtkPolygon_InterpolateFunctions, METH_VARARGS,
   "InterpolateFunctions(self, x:(float, float, float), sf:[float,\n    ...]) -> None\nC++: void InterpolateFunctions(const double x[3], double *sf)\n    override;\n\nCompute the interpolation functions/derivatives. (aka shape\nfunctions/derivatives) Two interpolation algorithms are\navailable: 1/r^2 and Mean Value Coordinate. The former is used by\ndefault. To use the second algorithm, set UseMVCInterpolation to\nbe true. The function assumes the input point lies on the polygon\nplane without checking that.\n"},
  {"ComputeNormal", PyvtkPolygon_ComputeNormal, METH_VARARGS,
   "ComputeNormal(p:vtkPoints, numPts:int, pts:(int, ...), n:[float,\n    float, float]) -> None\nC++: static void ComputeNormal(vtkPoints *p, int numPts,\n    const vtkIdType *pts, double n[3])\nComputeNormal(p:vtkPoints, n:[float, float, float]) -> None\nC++: static void ComputeNormal(vtkPoints *p, double n[3])\nComputeNormal(ids:vtkIdTypeArray, pts:vtkPoints, n:[float, float,\n    float]) -> None\nC++: static void ComputeNormal(vtkIdTypeArray *ids,\n    vtkPoints *pts, double n[3])\nComputeNormal(numPts:int, pts:[float, ...], n:[float, float,\n    float]) -> None\nC++: static void ComputeNormal(int numPts, double *pts,\n    double n[3])\n\nComputes the unit normal to the polygon. If pts=nullptr, point\nindexing is assumed to be {0, 1, ..., numPts-1}.\n"},
  {"IsConvex", PyvtkPolygon_IsConvex, METH_VARARGS,
   "IsConvex(self) -> bool\nC++: bool IsConvex()\nIsConvex(p:vtkPoints, numPts:int, pts:(int, ...)) -> bool\nC++: static bool IsConvex(vtkPoints *p, int numPts,\n    const vtkIdType *pts)\nIsConvex(ids:vtkIdTypeArray, p:vtkPoints) -> bool\nC++: static bool IsConvex(vtkIdTypeArray *ids, vtkPoints *p)\nIsConvex(p:vtkPoints) -> bool\nC++: static bool IsConvex(vtkPoints *p)\n\nDetermine whether or not a polygon is convex. This is a\nconvenience function that simply calls static bool IsConvex(int\nnumPts, vtkIdType *pts, vtkPoints *p) with the appropriate\nparameters from the instantiated vtkPolygon.\n"},
  {"ComputeCentroid", PyvtkPolygon_ComputeCentroid, METH_VARARGS,
   "ComputeCentroid(p:vtkPoints, numPts:int, pts:(int, ...),\n    centroid:[float, float, float]) -> bool\nC++: static bool ComputeCentroid(vtkPoints *p, int numPts,\n    const vtkIdType *pts, double centroid[3])\nComputeCentroid(ids:vtkIdTypeArray, pts:vtkPoints,\n    centroid:[float, float, float]) -> bool\nC++: static bool ComputeCentroid(vtkIdTypeArray *ids,\n    vtkPoints *pts, double centroid[3])\n\nCompute the centroid of a set of points. Returns false if the\ncomputation is invalid (this occurs when numPts=0 or when ids is\nempty).\n"},
  {"ParameterizePolygon", PyvtkPolygon_ParameterizePolygon, METH_VARARGS,
   "ParameterizePolygon(self, p0:[float, float, float], p10:[float,\n    float, float], l10:float, p20:[float, float, float],\n    l20:float, n:[float, float, float]) -> int\nC++: int ParameterizePolygon(double p0[3], double p10[3],\n    double &l10, double p20[3], double &l20, double n[3])\n\nCreate a local s-t coordinate system for a polygon. The point p0\nis the origin of the local system, p10 is s-axis vector, and p20\nis the t-axis vector. (These are expressed in the modeling\ncoordinate system and are vectors of dimension [3].) The values\nl20 and l20 are the lengths of the vectors p10 and p20, and n is\nthe polygon normal.\n"},
  {"PointInPolygon", PyvtkPolygon_PointInPolygon, METH_VARARGS,
   "PointInPolygon(x:[float, float, float], numPts:int, pts:[float,\n    ...], bounds:[float, float, float, float, float, float],\n    n:[float, float, float]) -> int\nC++: static int PointInPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double n[3])\n\nDetermine whether a point is inside the specified polygon. The\nfunction computes the winding number to assess inclusion. It\nworks for arbitrary polygon shapes (e.g., non-convex) oriented\narbitrarily in 3D space. Returns 0 if the point is not in the\npolygon; 1 if it is.  Can also return -1 to indicate a degenerate\npolygon. Parameters passed into the method include the point in\nquestion x[3]; the polygon defined by (npts,pts); the bounds of\nthe polygon bounds[6]; and the normal n[3] to the polygon. (The\nimplementation was inspired by Dan Sunday's book Practical\nGeometry Algorithms.) This method is thread safe.\n"},
  {"NonDegenerateTriangulate", PyvtkPolygon_NonDegenerateTriangulate, METH_VARARGS,
   "NonDegenerateTriangulate(self, outTris:vtkIdList) -> int\nC++: int NonDegenerateTriangulate(vtkIdList *outTris)\n\nSame as Triangulate(vtkIdList *outTris) but with a first pass to\nsplit the polygon into non-degenerate polygons.\n"},
  {"BoundedTriangulate", PyvtkPolygon_BoundedTriangulate, METH_VARARGS,
   "BoundedTriangulate(self, outTris:vtkIdList, tol:float) -> int\nC++: int BoundedTriangulate(vtkIdList *outTris, double tol)\n\nTriangulate polygon and enforce that the ratio of the smallest\ntriangle area to the polygon area is greater than a user-defined\ntolerance. The user must provide the vtkIdList outTris. On\noutput, the outTris list contains the ids of the points defining\nthe triangulation. The ids are ordered into groups of three: each\nthree-group defines one triangle.\n"},
  {"DistanceToPolygon", PyvtkPolygon_DistanceToPolygon, METH_VARARGS,
   "DistanceToPolygon(x:[float, float, float], numPts:int, pts:[float,\n     ...], bounds:[float, float, float, float, float, float],\n    closest:[float, float, float]) -> float\nC++: static double DistanceToPolygon(double x[3], int numPts,\n    double *pts, double bounds[6], double closest[3])\n\nCompute the distance of a point to a polygon. The closest point\non the polygon is also returned. The bounds should be provided to\naccelerate the computation.\n"},
  {"IntersectPolygonWithPolygon", PyvtkPolygon_IntersectPolygonWithPolygon, METH_VARARGS,
   "IntersectPolygonWithPolygon(npts:int, pts:[float, ...],\n    bounds:[float, float, float, float, float, float], npts2:int,\n    pts2:[float, ...], bounds2:[float, float, float, float, float,\n     float], tol:float, x:[float, float, float]) -> int\nC++: static int IntersectPolygonWithPolygon(int npts, double *pts,\n     double bounds[6], int npts2, double *pts2, double bounds2[6],\n     double tol, double x[3])\n\nMethod intersects two polygons. You must supply the number of\npoints and point coordinates (npts, *pts) and the bounding box\n(bounds) of the two polygons. Also supply a tolerance squared for\ncontrolling error. The method returns 1 if there is an\nintersection, and 0 if not. A single point of intersection x[3]\nis also returned if there is an intersection.\n"},
  {"IntersectConvex2DCells", PyvtkPolygon_IntersectConvex2DCells, METH_VARARGS,
   "IntersectConvex2DCells(cell1:vtkCell, cell2:vtkCell, tol:float,\n    p0:[float, float, float], p1:[float, float, float]) -> int\nC++: static int IntersectConvex2DCells(vtkCell *cell1,\n    vtkCell *cell2, double tol, double p0[3], double p1[3])\n\nIntersect two convex 2D polygons to produce a line segment as\noutput. The return status of the methods indicated no\nintersection (returns 0); a single point of intersection (returns\n1); or a line segment (i.e., two points of intersection, returns\n2). The points of intersection are returned in the arrays p0 and\np1.  If less than two points of intersection are generated then\np1 and/or p0 may be indeterminiate. Finally, if the two convex\npolygons are parallel, then \"0\" is returned (i.e., no\nintersection) even if the triangles lie on one another.\n"},
  {"GetUseMVCInterpolation", PyvtkPolygon_GetUseMVCInterpolation, METH_VARARGS,
   "GetUseMVCInterpolation(self) -> bool\nC++: virtual bool GetUseMVCInterpolation()\n\nSet/Get the flag indicating whether to use Mean Value Coordinate\nfor the interpolation. If true, InterpolateFunctions() uses the\nMean Value Coordinate to compute weights. Otherwise, the\nconventional 1/r^2 method is used. The UseMVCInterpolation\nparameter is set to false by default.\n"},
  {"SetUseMVCInterpolation", PyvtkPolygon_SetUseMVCInterpolation, METH_VARARGS,
   "SetUseMVCInterpolation(self, _arg:bool) -> None\nC++: virtual void SetUseMVCInterpolation(bool _arg)\n\n"},
  {"SetTolerance", PyvtkPolygon_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSpecify an internal tolerance for operations requiring polygon\ntriangulation.  (For example, clipping and contouring operations\nproceed by first triangulating the polygon, and then\nclipping/contouring the resulting triangles.)  This is a\nnormalized tolerance value multiplied by the diagonal length of\nthe polygon bounding box. Is it used to determine whether\npotential triangulation edges intersect one another.\n"},
  {"GetToleranceMinValue", PyvtkPolygon_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkPolygon_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkPolygon_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {"EarCutTriangulation", PyvtkPolygon_EarCutTriangulation, METH_VARARGS,
   "EarCutTriangulation(self, measure:int=...) -> int\nC++: int EarCutTriangulation(int measure=PERIMETER2_TO_AREA_RATIO)\nEarCutTriangulation(self, outTris:vtkIdList, measure:int=...)\n    -> int\nC++: int EarCutTriangulation(vtkIdList *outTris,\n    int measure=PERIMETER2_TO_AREA_RATIO)\n\nA fast triangulation method. Uses recursive divide and conquer\nbased on plane splitting to reduce loop into triangles. The cell\n(e.g., triangle) is presumed properly initialized (i.e., Points\nand PointIds). Ears can be removed using different measures (the\nmeasures indicate convexity plus characterize the local geometry\naround each vertex).\n"},
  {"UnbiasedEarCutTriangulation", PyvtkPolygon_UnbiasedEarCutTriangulation, METH_VARARGS,
   "UnbiasedEarCutTriangulation(self, seed:int, measure:int=...)\n    -> int\nC++: int UnbiasedEarCutTriangulation(int seed,\n    int measure=PERIMETER2_TO_AREA_RATIO)\nUnbiasedEarCutTriangulation(self, seed:int, outTris:vtkIdList,\n    measure:int=...) -> int\nC++: int UnbiasedEarCutTriangulation(int seed, vtkIdList *outTris,\n     int measure=PERIMETER2_TO_AREA_RATIO)\n\nA fast triangulation method. Uses recursive divide and conquer\nbased on plane splitting to reduce loop into triangles. The cell\n(e.g., triangle) is presumed properly initialized (i.e., Points\nand PointIds). Unlike EarCutTriangulation(), vertices are visited\nsequentially without preference to angle.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolygon_Doc =
  "vtkPolygon - a cell that represents an n-sided polygon\n\n"
  "Superclass: vtkCell\n\n"
  "vtkPolygon is a concrete implementation of vtkCell to represent a 2D\n"
  "n-sided polygon. The polygons cannot have any internal holes, and\n"
  "cannot self-intersect. Define the polygon with n-points ordered in\n"
  "the counter- clockwise direction; do not repeat the last point.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolygon_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkPolygon", // tp_name
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
  PyvtkPolygon_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolygon_StaticNew()
{
  return vtkPolygon::New();
}

PyObject *PyvtkPolygon_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolygon_Type, PyvtkPolygon_Methods,
    "vtkPolygon",
 &PyvtkPolygon_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkCell_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkPolygon_EarCutMeasureTypes_Type);
  PyVTKEnum_Add(&PyvtkPolygon_EarCutMeasureTypes_Type, "vtkPolygon.EarCutMeasureTypes");

  o = (PyObject *)&PyvtkPolygon_EarCutMeasureTypes_Type;
  if (PyDict_SetItemString(d, "EarCutMeasureTypes", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkPolygon::EarCutMeasureTypes cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "PERIMETER2_TO_AREA_RATIO", vtkPolygon::PERIMETER2_TO_AREA_RATIO },
        { "DOT_PRODUCT", vtkPolygon::DOT_PRODUCT },
        { "BEST_QUALITY", vtkPolygon::BEST_QUALITY },
      };

    o = PyvtkPolygon_EarCutMeasureTypes_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolygon(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolygon_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolygon", o) != 0)
  {
    Py_DECREF(o);
  }

}

