// python wrapper for vtkChartMatrix
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkRect.h"
#include "vtkChartMatrix.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChartMatrix(PyObject *dict); }
extern "C" { PyObject *PyvtkChartMatrix_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartMatrix_StretchType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartMatrix.StretchType", // tp_name
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
PyObject *PyvtkChartMatrix_StretchType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkChartMatrix_StretchType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkChartMatrix_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChartMatrix::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChartMatrix::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChartMatrix *tempr = vtkChartMatrix::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartMatrix *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChartMatrix::NewInstance());

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
PyvtkChartMatrix_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChartMatrix::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChartMatrix::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_Update(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Update");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Update();
    }
    else
    {
      op->vtkChartMatrix::Update();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = (ap.IsBound() ?
      op->Paint(temp0) :
      op->vtkChartMatrix::Paint(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkChartMatrix::SetSize(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkChartMatrix::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  int temp1;
  int temp2;
  int temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->SetBorders(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkChartMatrix::SetBorders(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderLeft(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderLeft");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderLeft(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderLeft(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderBottom(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderBottom");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderBottom(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderBottom(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderRight(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderRight");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderRight(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderRight(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetBorderTop(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorderTop");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBorderTop(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetBorderTop(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  const size_t size0 = 4;
  int temp0[4];
  int save0[4];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetBorders(temp0);
    }
    else
    {
      op->vtkChartMatrix::GetBorders(temp0);
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
PyvtkChartMatrix_SetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetGutter(*temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutter(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutterX(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterX");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterX(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutterX(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetGutterY(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGutterY");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGutterY(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetGutterY(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetPadding(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPadding");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPadding(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetPadding(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetSpecificResize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSpecificResize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->SetSpecificResize(*temp0, *temp1);
    }
    else
    {
      op->vtkChartMatrix::SetSpecificResize(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_ClearSpecificResizes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearSpecificResizes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearSpecificResizes();
    }
    else
    {
      op->vtkChartMatrix::ClearSpecificResizes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetGutter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGutter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVector2f tempr = (ap.IsBound() ?
      op->GetGutter() :
      op->vtkChartMatrix::GetGutter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2f");
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_Allocate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Allocate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Allocate();
    }
    else
    {
      op->vtkChartMatrix::Allocate();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkChart *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetVTKObject(temp1, "vtkChart"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetChart(*temp0, temp1) :
      op->vtkChartMatrix::SetChart(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChart(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChart");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->GetChart(*temp0) :
      op->vtkChartMatrix::GetChart(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetChartSpan(*temp0, *temp1) :
      op->vtkChartMatrix::SetChartSpan(*temp0, *temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartSpan(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartSpan");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartSpan(*temp0) :
      op->vtkChartMatrix::GetChartSpan(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2f *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2f"))
  {
    vtkVector2i tempr = (ap.IsBound() ?
      op->GetChartIndex(*temp0) :
      op->vtkChartMatrix::GetChartIndex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetFlatIndex(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFlatIndex");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetFlatIndex(*temp0) :
      op->vtkChartMatrix::GetFlatIndex(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetNumberOfCharts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCharts");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    size_t tempr = (ap.IsBound() ?
      op->GetNumberOfCharts() :
      op->vtkChartMatrix::GetNumberOfCharts());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_LabelOuter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LabelOuter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i"))
  {
    if (ap.IsBound())
    {
      op->LabelOuter(*temp0, *temp1);
    }
    else
    {
      op->vtkChartMatrix::LabelOuter(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}


static PyObject *
PyvtkChartMatrix_Link_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Link");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Link(*temp0, *temp1, temp2);
    }
    else
    {
      op->vtkChartMatrix::Link(*temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkChartMatrix_Link_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Link");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  size_t temp0;
  size_t temp1;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Link(temp0, temp1, temp2);
    }
    else
    {
      op->vtkChartMatrix::Link(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartMatrix_Link_Methods[] = {
  {"Link", PyvtkChartMatrix_Link_s1, METH_VARARGS,
   "@WW|i vtkVector2i vtkVector2i"},
  {"Link", PyvtkChartMatrix_Link_s2, METH_VARARGS,
   "@KK|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartMatrix_Link(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartMatrix_Link_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Link");
  return nullptr;
}


static PyObject *
PyvtkChartMatrix_LinkAll_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->LinkAll(*temp0, temp1);
    }
    else
    {
      op->vtkChartMatrix::LinkAll(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkChartMatrix_LinkAll_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LinkAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  size_t temp0;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->LinkAll(temp0, temp1);
    }
    else
    {
      op->vtkChartMatrix::LinkAll(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartMatrix_LinkAll_Methods[] = {
  {"LinkAll", PyvtkChartMatrix_LinkAll_s1, METH_VARARGS,
   "@W|i vtkVector2i"},
  {"LinkAll", PyvtkChartMatrix_LinkAll_s2, METH_VARARGS,
   "@K|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartMatrix_LinkAll(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartMatrix_LinkAll_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "LinkAll");
  return nullptr;
}


static PyObject *
PyvtkChartMatrix_Unlink_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2i *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2i") &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Unlink(*temp0, *temp1, temp2);
    }
    else
    {
      op->vtkChartMatrix::Unlink(*temp0, *temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);

  return result;
}

static PyObject *
PyvtkChartMatrix_Unlink_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Unlink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  size_t temp0;
  size_t temp1;
  int temp2 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    if (ap.IsBound())
    {
      op->Unlink(temp0, temp1, temp2);
    }
    else
    {
      op->vtkChartMatrix::Unlink(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartMatrix_Unlink_Methods[] = {
  {"Unlink", PyvtkChartMatrix_Unlink_s1, METH_VARARGS,
   "@WW|i vtkVector2i vtkVector2i"},
  {"Unlink", PyvtkChartMatrix_Unlink_s2, METH_VARARGS,
   "@KK|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartMatrix_Unlink(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartMatrix_Unlink_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
    case 3:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Unlink");
  return nullptr;
}


static PyObject *
PyvtkChartMatrix_UnlinkAll_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnlinkAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->UnlinkAll(*temp0, temp1);
    }
    else
    {
      op->vtkChartMatrix::UnlinkAll(*temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyObject *
PyvtkChartMatrix_UnlinkAll_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnlinkAll");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  size_t temp0;
  int temp1 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetValue(temp0) &&
      (ap.NoArgsLeft() || ap.GetValue(temp1)))
  {
    if (ap.IsBound())
    {
      op->UnlinkAll(temp0, temp1);
    }
    else
    {
      op->vtkChartMatrix::UnlinkAll(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkChartMatrix_UnlinkAll_Methods[] = {
  {"UnlinkAll", PyvtkChartMatrix_UnlinkAll_s1, METH_VARARGS,
   "@W|i vtkVector2i"},
  {"UnlinkAll", PyvtkChartMatrix_UnlinkAll_s2, METH_VARARGS,
   "@K|i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChartMatrix_UnlinkAll(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChartMatrix_UnlinkAll_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UnlinkAll");
  return nullptr;
}


static PyObject *
PyvtkChartMatrix_ResetLinks(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetLinks");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  int temp0 = 1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0, 1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp0)))
  {
    if (ap.IsBound())
    {
      op->ResetLinks(temp0);
    }
    else
    {
      op->vtkChartMatrix::ResetLinks(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_ResetLinkedLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetLinkedLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetLinkedLayout();
    }
    else
    {
      op->vtkChartMatrix::ResetLinkedLayout();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkRecti *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRecti"))
  {
    if (ap.IsBound())
    {
      op->SetRect(*temp0);
    }
    else
    {
      op->vtkChartMatrix::SetRect(*temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecti tempr = (ap.IsBound() ?
      op->GetRect() :
      op->vtkChartMatrix::GetRect());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRecti");
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_SetChartMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChartMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkChartMatrix *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetVTKObject(temp1, "vtkChartMatrix"))
  {
    bool tempr = (ap.IsBound() ?
      op->SetChartMatrix(*temp0, temp1) :
      op->vtkChartMatrix::SetChartMatrix(*temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_GetChartMatrix(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChartMatrix");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i"))
  {
    vtkChartMatrix *tempr = (ap.IsBound() ?
      op->GetChartMatrix(*temp0) :
      op->vtkChartMatrix::GetChartMatrix(*temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  Py_XDECREF(pobj0);

  return result;
}


static PyObject *
PyvtkChartMatrix_InitLayoutTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitLayoutTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  vtkVector2f *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, "vtkVector2f") &&
      ap.GetSpecialObject(temp2, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->InitLayoutTraversal(*temp0, *temp1, *temp2);
    }
    else
    {
      op->vtkChartMatrix::InitLayoutTraversal(*temp0, *temp1, *temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GoToNextElement(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GoToNextElement");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, "vtkVector2f"))
  {
    if (ap.IsBound())
    {
      op->GoToNextElement(*temp0, *temp1);
    }
    else
    {
      op->vtkChartMatrix::GoToNextElement(*temp0, *temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_IsDoneWithTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsDoneWithTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->IsDoneWithTraversal() :
      op->vtkChartMatrix::IsDoneWithTraversal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_ComputeCurrentElementSceneRect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeCurrentElementSceneRect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  vtkVector2i *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  vtkVector2f *temp1 = nullptr;
  PyObject *pobj1 = nullptr;
  vtkVector2f *temp2 = nullptr;
  PyObject *pobj2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkVector2i") &&
      ap.GetSpecialObject(temp1, pobj1, "vtkVector2f") &&
      ap.GetSpecialObject(temp2, pobj2, "vtkVector2f"))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->ComputeCurrentElementSceneRect(*temp0, *temp1, *temp2) :
      op->vtkChartMatrix::ComputeCurrentElementSceneRect(*temp0, *temp1, *temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  Py_XDECREF(pobj0);
  Py_XDECREF(pobj1);
  Py_XDECREF(pobj2);

  return result;
}


static PyObject *
PyvtkChartMatrix_SetFillStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFillStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  typedef vtkChartMatrix::StretchType temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkChartMatrix.StretchType"))
  {
    if (ap.IsBound())
    {
      op->SetFillStrategy(temp0);
    }
    else
    {
      op->vtkChartMatrix::SetFillStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChartMatrix_GetFillStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFillStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChartMatrix *op = static_cast<vtkChartMatrix *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    typedef vtkChartMatrix::StretchType tempr_type;
  tempr_type tempr = (ap.IsBound() ?
      op->GetFillStrategy() :
      op->vtkChartMatrix::GetFillStrategy());

    if (!ap.ErrorOccurred())
    {
      result = PyvtkChartMatrix_StretchType_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChartMatrix_Methods[] = {
  {"IsTypeOf", PyvtkChartMatrix_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChartMatrix_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChartMatrix_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChartMatrix\nC++: static vtkChartMatrix *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChartMatrix_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChartMatrix\nC++: vtkChartMatrix *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChartMatrix_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChartMatrix_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Update", PyvtkChartMatrix_Update, METH_VARARGS,
   "Update(self) -> None\nC++: void Update() override;\n\nPerform any updates to the item that may be necessary before\nrendering.\n"},
  {"Paint", PyvtkChartMatrix_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override;\n\nPaint event for the chart matrix.\n"},
  {"SetSize", PyvtkChartMatrix_SetSize, METH_VARARGS,
   "SetSize(self, size:vtkVector2i) -> None\nC++: virtual void SetSize(const vtkVector2i &size)\n\nSet the width and height of the chart matrix. This will cause an\nimmediate resize of the chart matrix, the default size is 0x0 (no\ncharts). No chart objects are created until Allocate is called.\n"},
  {"GetSize", PyvtkChartMatrix_GetSize, METH_VARARGS,
   "GetSize(self) -> vtkVector2i\nC++: virtual vtkVector2i GetSize()\n\nGet the width and height of the chart matrix.\n"},
  {"SetBorders", PyvtkChartMatrix_SetBorders, METH_VARARGS,
   "SetBorders(self, left:int, bottom:int, right:int, top:int) -> None\nC++: virtual void SetBorders(int left, int bottom, int right,\n    int top)\n\nSet/get the borders of the chart matrix (space in pixels around\neach chart).\n"},
  {"SetBorderLeft", PyvtkChartMatrix_SetBorderLeft, METH_VARARGS,
   "SetBorderLeft(self, value:int) -> None\nC++: void SetBorderLeft(int value)\n\n"},
  {"SetBorderBottom", PyvtkChartMatrix_SetBorderBottom, METH_VARARGS,
   "SetBorderBottom(self, value:int) -> None\nC++: void SetBorderBottom(int value)\n\n"},
  {"SetBorderRight", PyvtkChartMatrix_SetBorderRight, METH_VARARGS,
   "SetBorderRight(self, value:int) -> None\nC++: void SetBorderRight(int value)\n\n"},
  {"SetBorderTop", PyvtkChartMatrix_SetBorderTop, METH_VARARGS,
   "SetBorderTop(self, value:int) -> None\nC++: void SetBorderTop(int value)\n\n"},
  {"GetBorders", PyvtkChartMatrix_GetBorders, METH_VARARGS,
   "GetBorders(self, borders:[int, int, int, int]) -> None\nC++: virtual void GetBorders(int borders[4])\n\n"},
  {"SetGutter", PyvtkChartMatrix_SetGutter, METH_VARARGS,
   "SetGutter(self, gutter:vtkVector2f) -> None\nC++: virtual void SetGutter(const vtkVector2f &gutter)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"SetGutterX", PyvtkChartMatrix_SetGutterX, METH_VARARGS,
   "SetGutterX(self, value:float) -> None\nC++: void SetGutterX(float value)\n\n"},
  {"SetGutterY", PyvtkChartMatrix_SetGutterY, METH_VARARGS,
   "SetGutterY(self, value:float) -> None\nC++: void SetGutterY(float value)\n\n"},
  {"SetPadding", PyvtkChartMatrix_SetPadding, METH_VARARGS,
   "SetPadding(self, padding:float) -> None\nC++: virtual void SetPadding(const float &padding)\n\nSet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"SetSpecificResize", PyvtkChartMatrix_SetSpecificResize, METH_VARARGS,
   "SetSpecificResize(self, index:vtkVector2i, resize:vtkVector2f)\n    -> None\nC++: virtual void SetSpecificResize(const vtkVector2i &index,\n    const vtkVector2f &resize)\n\nSet a specific resize that will move the bottom left point of a\nchart.\n"},
  {"ClearSpecificResizes", PyvtkChartMatrix_ClearSpecificResizes, METH_VARARGS,
   "ClearSpecificResizes(self) -> None\nC++: virtual void ClearSpecificResizes()\n\n"},
  {"GetGutter", PyvtkChartMatrix_GetGutter, METH_VARARGS,
   "GetGutter(self) -> vtkVector2f\nC++: virtual vtkVector2f GetGutter()\n\nGet the gutter that should be left between the charts in the\nmatrix.\n"},
  {"Allocate", PyvtkChartMatrix_Allocate, METH_VARARGS,
   "Allocate(self) -> None\nC++: virtual void Allocate()\n\nAllocate the charts, this will cause any null chart to be\nallocated.\n"},
  {"SetChart", PyvtkChartMatrix_SetChart, METH_VARARGS,
   "SetChart(self, position:vtkVector2i, chart:vtkChart) -> bool\nC++: virtual bool SetChart(const vtkVector2i &position,\n    vtkChart *chart)\n\nSet the chart element, note that the chart matrix must be large\nenough to accommodate the element being set. Note that this class\nwill take ownership of the chart object.\n\\return false if the element cannot be set.\n"},
  {"GetChart", PyvtkChartMatrix_GetChart, METH_VARARGS,
   "GetChart(self, position:vtkVector2i) -> vtkChart\nC++: virtual vtkChart *GetChart(const vtkVector2i &position)\n\nGet the specified chart element, if the element does not exist\nnullptr will be returned. If the chart element has not yet been\nallocated it will be at this point.\n"},
  {"SetChartSpan", PyvtkChartMatrix_SetChartSpan, METH_VARARGS,
   "SetChartSpan(self, position:vtkVector2i, span:vtkVector2i) -> bool\nC++: virtual bool SetChartSpan(const vtkVector2i &position,\n    const vtkVector2i &span)\n\nSet the span of an element in the matrix. This defaults to 1x1,\nand cannot exceed the remaining space in x or y.\n\\return false If the span is not possible.\n"},
  {"GetChartSpan", PyvtkChartMatrix_GetChartSpan, METH_VARARGS,
   "GetChartSpan(self, position:vtkVector2i) -> vtkVector2i\nC++: virtual vtkVector2i GetChartSpan(const vtkVector2i &position)\n\nGet the span of the specified element.\n"},
  {"GetChartIndex", PyvtkChartMatrix_GetChartIndex, METH_VARARGS,
   "GetChartIndex(self, position:vtkVector2f) -> vtkVector2i\nC++: virtual vtkVector2i GetChartIndex(\n    const vtkVector2f &position)\n\nGet the position of an element in the matrix at the specified\nlocation. The position should be specified in scene coordinates.\n"},
  {"GetFlatIndex", PyvtkChartMatrix_GetFlatIndex, METH_VARARGS,
   "GetFlatIndex(self, index:vtkVector2i) -> int\nC++: virtual std::size_t GetFlatIndex(const vtkVector2i &index)\n\nGet internal 1-D index corresponding to the 2-D element index.\n"},
  {"GetNumberOfCharts", PyvtkChartMatrix_GetNumberOfCharts, METH_VARARGS,
   "GetNumberOfCharts(self) -> int\nC++: virtual std::size_t GetNumberOfCharts()\n\nTotal number of charts within this chart matrix.\n"},
  {"LabelOuter", PyvtkChartMatrix_LabelOuter, METH_VARARGS,
   "LabelOuter(self, leftBottomIdx:vtkVector2i,\n    rightTopIdx:vtkVector2i) -> None\nC++: virtual void LabelOuter(const vtkVector2i &leftBottomIdx,\n    const vtkVector2i &rightTopIdx)\n\nLink all charts in the rectangle from leftBottom to rightTop.\nLabel only the outer most y-axis and x-axis. This removes of\ngutter space between the linked charts.\n"},
  {"Link", PyvtkChartMatrix_Link, METH_VARARGS,
   "Link(self, index1:vtkVector2i, index2:vtkVector2i, axis:int=1)\n    -> None\nC++: virtual void Link(const vtkVector2i &index1,\n    const vtkVector2i &index2, int axis=1)\nLink(self, flatIndex1:int, flatIndex2:int, axis:int=1) -> None\nC++: virtual void Link(const size_t &flatIndex1,\n    const size_t &flatIndex2, int axis=1)\n\nThe chart at index2 will be setup to mimic axis range of chart at\nindex1 for specified axis. Note: index is a two dimensional chart\nindex. See vtkChartMatrix::GetChartIndex()\n      flatIndex is a one dimensional chart index. See\nvtkChartMatrix::GetFlatIndex()\n"},
  {"LinkAll", PyvtkChartMatrix_LinkAll, METH_VARARGS,
   "LinkAll(self, index:vtkVector2i, axis:int=1) -> None\nC++: virtual void LinkAll(const vtkVector2i &index, int axis=1)\nLinkAll(self, flatIndex:int, axis:int=1) -> None\nC++: virtual void LinkAll(const size_t &flatIndex, int axis=1)\n\nLink a chart to all other charts in this chart matrix for\nspecified axis\n"},
  {"Unlink", PyvtkChartMatrix_Unlink, METH_VARARGS,
   "Unlink(self, index1:vtkVector2i, index2:vtkVector2i, axis:int=1)\n    -> None\nC++: virtual void Unlink(const vtkVector2i &index1,\n    const vtkVector2i &index2, int axis=1)\nUnlink(self, flatIndex1:int, flatIndex2:int, axis:int=1) -> None\nC++: virtual void Unlink(const size_t &flatIndex1,\n    const size_t &flatIndex2, int axis=1)\n\nUnlink the two charts for specified axis i.e, Chart at index2\nwill no longer mimic the axis range of chart at index1\n"},
  {"UnlinkAll", PyvtkChartMatrix_UnlinkAll, METH_VARARGS,
   "UnlinkAll(self, index:vtkVector2i, axis:int=1) -> None\nC++: virtual void UnlinkAll(const vtkVector2i &index, int axis=1)\nUnlinkAll(self, flatIndex:int, axis:int=1) -> None\nC++: virtual void UnlinkAll(const size_t &flatIndex, int axis=1)\n\nUnlink all charts from given chart for a specified axis.\n"},
  {"ResetLinks", PyvtkChartMatrix_ResetLinks, METH_VARARGS,
   "ResetLinks(self, axis:int=1) -> None\nC++: virtual void ResetLinks(int axis=1)\n\nUnlink every chart from all other charts for a specified axis.\nThis effectively removes any linkage in the chart matrix. If\nvtkChartMatrix::LabelOuter() was used, call ResetLinkedLayout,\nsot that the gutters that were removed will be put back in place.\n"},
  {"ResetLinkedLayout", PyvtkChartMatrix_ResetLinkedLayout, METH_VARARGS,
   "ResetLinkedLayout(self) -> None\nC++: virtual void ResetLinkedLayout()\n\n"},
  {"SetRect", PyvtkChartMatrix_SetRect, METH_VARARGS,
   "SetRect(self, rect:vtkRecti) -> None\nC++: virtual void SetRect(vtkRecti rect)\n\nSet the rectangular region that this chart matrix will occupy.\nMust also set FillStrategy to StretchType::CUSTOM\n"},
  {"GetRect", PyvtkChartMatrix_GetRect, METH_VARARGS,
   "GetRect(self) -> vtkRecti\nC++: virtual vtkRecti GetRect()\n\n"},
  {"SetChartMatrix", PyvtkChartMatrix_SetChartMatrix, METH_VARARGS,
   "SetChartMatrix(self, position:vtkVector2i,\n    chartMatrix:vtkChartMatrix) -> bool\nC++: virtual bool SetChartMatrix(const vtkVector2i &position,\n    vtkChartMatrix *chartMatrix)\n\nSet the element at position to a chart matrix, note that the\nchart matrix must be large enough to accommodate the element\nbeing set. Note that this class will take ownership of the chart\nmatrix object.\n\\return false if the element cannot be set.\n"},
  {"GetChartMatrix", PyvtkChartMatrix_GetChartMatrix, METH_VARARGS,
   "GetChartMatrix(self, position:vtkVector2i) -> vtkChartMatrix\nC++: virtual vtkChartMatrix *GetChartMatrix(\n    const vtkVector2i &position)\n\nGet the specified chart matrix element. if the element does not\nexist, nullptr will be returned. If the element has not yet been\nallocated it will be at this point\n"},
  {"InitLayoutTraversal", PyvtkChartMatrix_InitLayoutTraversal, METH_VARARGS,
   "InitLayoutTraversal(self, index:vtkVector2i, offset:vtkVector2f,\n    increment:vtkVector2f) -> None\nC++: virtual void InitLayoutTraversal(vtkVector2i &index,\n    vtkVector2f &offset, vtkVector2f &increment)\n\nThese methods offer an API to iterate over the layout and obtain\nthe offset of each child element (chart or chart matrix) within\nthe scene, the index and the increment b/w each element.\n"},
  {"GoToNextElement", PyvtkChartMatrix_GoToNextElement, METH_VARARGS,
   "GoToNextElement(self, index:vtkVector2i, offset:vtkVector2f)\n    -> None\nC++: virtual void GoToNextElement(vtkVector2i &index,\n    vtkVector2f &offset)\n\n"},
  {"IsDoneWithTraversal", PyvtkChartMatrix_IsDoneWithTraversal, METH_VARARGS,
   "IsDoneWithTraversal(self) -> bool\nC++: virtual bool IsDoneWithTraversal()\n\n"},
  {"ComputeCurrentElementSceneRect", PyvtkChartMatrix_ComputeCurrentElementSceneRect, METH_VARARGS,
   "ComputeCurrentElementSceneRect(self, index:vtkVector2i,\n    offset:vtkVector2f, increment:vtkVector2f) -> vtkRectf\nC++: virtual vtkRectf ComputeCurrentElementSceneRect(\n    const vtkVector2i &index, const vtkVector2f &offset,\n    const vtkVector2f &increment)\n\nOverride this method if you want to customize layout instead of\nthe default. The returned rect will be in scene coordinates and\nsuitable for a chart element or chart matrix element.\n"},
  {"SetFillStrategy", PyvtkChartMatrix_SetFillStrategy, METH_VARARGS,
   "SetFillStrategy(self, _arg:StretchType) -> None\nC++: virtual void SetFillStrategy(StretchType _arg)\n\nThis specifies whether the chart matrix will fill the entire\nscene or instead draw itself in a user provided rectangular\nsubset of the scene.\n"},
  {"GetFillStrategy", PyvtkChartMatrix_GetFillStrategy, METH_VARARGS,
   "GetFillStrategy(self) -> StretchType\nC++: StretchType GetFillStrategy()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChartMatrix_Doc =
  "vtkChartMatrix - container for a matrix of charts.\n\n"
  "Superclass: vtkAbstractContextItem\n\n"
  "This class contains a matrix of charts. These charts will be of type\n"
  "vtkChartXY by default, but this can be overridden. The class will\n"
  "manage their layout and object lifetime.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChartMatrix_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChartMatrix", // tp_name
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
  PyvtkChartMatrix_Doc, // tp_doc
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

static vtkObjectBase *PyvtkChartMatrix_StaticNew()
{
  return vtkChartMatrix::New();
}

PyObject *PyvtkChartMatrix_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChartMatrix_Type, PyvtkChartMatrix_Methods,
    "vtkChartMatrix",
 &PyvtkChartMatrix_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAbstractContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkChartMatrix_StretchType_Type);
  // members of vtkChartMatrix::StretchType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkChartMatrix_StretchType_Type.tp_dict = enumdict;

    typedef vtkChartMatrix::StretchType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "SCENE", cxx_enum_type::SCENE },
      { "CUSTOM", cxx_enum_type::CUSTOM },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkChartMatrix_StretchType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkChartMatrix_StretchType_Type, "vtkChartMatrix.StretchType");

  o = (PyObject *)&PyvtkChartMatrix_StretchType_Type;
  if (PyDict_SetItemString(d, "StretchType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChartMatrix(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChartMatrix_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChartMatrix", o) != 0)
  {
    Py_DECREF(o);
  }

}

