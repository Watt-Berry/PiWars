// python wrapper for vtkChart
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkChart.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkChart(PyObject *dict); }
extern "C" { PyObject *PyvtkChart_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChart_EventIds_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChart.EventIds", // tp_name
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
PyObject *PyvtkChart_EventIds_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkChart_EventIds_Type, static_cast<int>(val));
}


static PyObject *
PyvtkChart_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkChart::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkChart::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkChart *tempr = vtkChart::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChart *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkChart::NewInstance());

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
PyvtkChart_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkChart::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkChart::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_Paint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Paint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkContext2D *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkContext2D"))
  {
    bool tempr = op->Paint(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_AddPlot_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChart::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkChart_AddPlot_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    long long tempr = (ap.IsBound() ?
      op->AddPlot(temp0) :
      op->vtkChart::AddPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChart_AddPlot_Methods[] = {
  {"AddPlot", PyvtkChart_AddPlot_s1, METH_VARARGS,
   "@i"},
  {"AddPlot", PyvtkChart_AddPlot_s2, METH_VARARGS,
   "@V *vtkPlot"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkChart_AddPlot(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkChart_AddPlot_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "AddPlot");
  return nullptr;
}


static PyObject *
PyvtkChart_RemovePlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePlot(temp0) :
      op->vtkChart::RemovePlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_RemovePlotInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemovePlotInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkPlot *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPlot"))
  {
    bool tempr = (ap.IsBound() ?
      op->RemovePlotInstance(temp0) :
      op->vtkChart::RemovePlotInstance(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_ClearPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ClearPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ClearPlots();
    }
    else
    {
      op->vtkChart::ClearPlots();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetPlot(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPlot");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkPlot *tempr = (ap.IsBound() ?
      op->GetPlot(temp0) :
      op->vtkChart::GetPlot(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfPlots(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfPlots");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfPlots() :
      op->vtkChart::GetNumberOfPlots());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkAxis *tempr = (ap.IsBound() ?
      op->GetAxis(temp0) :
      op->vtkChart::GetAxis(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetAxis(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxis");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  vtkAxis *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkAxis"))
  {
    if (ap.IsBound())
    {
      op->SetAxis(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetAxis(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkChart::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_RecalculateBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RecalculateBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RecalculateBounds();
    }
    else
    {
      op->vtkChart::RecalculateBounds();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMethod(temp0);
    }
    else
    {
      op->vtkChart::SetSelectionMethod(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionMethod(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMethod");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMethod() :
      op->vtkChart::GetSelectionMethod());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkAnnotationLink *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAnnotationLink"))
  {
    if (ap.IsBound())
    {
      op->SetAnnotationLink(temp0);
    }
    else
    {
      op->vtkChart::SetAnnotationLink(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetAnnotationLink(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAnnotationLink");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAnnotationLink *tempr = (ap.IsBound() ?
      op->GetAnnotationLink() :
      op->vtkChart::GetAnnotationLink());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetGeometry_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetGeometry(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetGeometry(temp0);
    }
    else
    {
      op->vtkChart::SetGeometry(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetGeometry(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkChart_SetGeometry_s1(self, args);
    case 1:
      return PyvtkChart_SetGeometry_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetGeometry");
  return nullptr;
}


static PyObject *
PyvtkChart_GetGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetGeometry() :
      op->vtkChart::GetGeometry());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetPoint1_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetPoint1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint1(temp0);
    }
    else
    {
      op->vtkChart::SetPoint1(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetPoint1(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkChart_SetPoint1_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint1_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint1");
  return nullptr;
}


static PyObject *
PyvtkChart_GetPoint1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPoint1() :
      op->vtkChart::GetPoint1());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetPoint2_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetPoint2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetPoint2(temp0);
    }
    else
    {
      op->vtkChart::SetPoint2(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkChart_SetPoint2(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkChart_SetPoint2_s1(self, args);
    case 1:
      return PyvtkChart_SetPoint2_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetPoint2");
  return nullptr;
}


static PyObject *
PyvtkChart_GetPoint2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPoint2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  size_t sizer = 2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int *tempr = (ap.IsBound() ?
      op->GetPoint2() :
      op->vtkChart::GetPoint2());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetShowLegend(temp0);
    }
    else
    {
      op->vtkChart::SetShowLegend(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetShowLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShowLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetShowLegend() :
      op->vtkChart::GetShowLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetLegend(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLegend");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkChartLegend *tempr = (ap.IsBound() ?
      op->GetLegend() :
      op->vtkChart::GetLegend());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkStdString temp0;
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
      op->vtkChart::SetTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStdString tempr = (ap.IsBound() ?
      op->GetTitle() :
      op->vtkChart::GetTitle());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetTitleProperties(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTitleProperties");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTextProperty *tempr = (ap.IsBound() ?
      op->GetTitleProperties() :
      op->vtkChart::GetTitleProperties());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetBottomBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBottomBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetBottomBorder(temp0);
    }
    else
    {
      op->vtkChart::SetBottomBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetTopBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTopBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTopBorder(temp0);
    }
    else
    {
      op->vtkChart::SetTopBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetLeftBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLeftBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLeftBorder(temp0);
    }
    else
    {
      op->vtkChart::SetLeftBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetRightBorder(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRightBorder");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRightBorder(temp0);
    }
    else
    {
      op->vtkChart::SetRightBorder(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetBorders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBorders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

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
      op->vtkChart::SetBorders(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkRectf *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkRectf"))
  {
    if (ap.IsBound())
    {
      op->SetSize(*temp0);
    }
    else
    {
      op->vtkChart::SetSize(*temp0);
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
PyvtkChart_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRectf tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkChart::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkRectf");
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLayoutStrategy(temp0);
    }
    else
    {
      op->vtkChart::SetLayoutStrategy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetLayoutStrategy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayoutStrategy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLayoutStrategy() :
      op->vtkChart::GetLayoutStrategy());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAutoSize(temp0);
    }
    else
    {
      op->vtkChart::SetAutoSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetAutoSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAutoSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetAutoSize() :
      op->vtkChart::GetAutoSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRenderEmpty(temp0);
    }
    else
    {
      op->vtkChart::SetRenderEmpty(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetRenderEmpty(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderEmpty");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRenderEmpty() :
      op->vtkChart::GetRenderEmpty());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetActionToButton(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetActionToButton(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetActionToButton(temp0) :
      op->vtkChart::GetActionToButton(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetClickActionToButton(temp0, temp1);
    }
    else
    {
      op->vtkChart::SetClickActionToButton(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetClickActionToButton(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetClickActionToButton");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetClickActionToButton(temp0) :
      op->vtkChart::GetClickActionToButton(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetBackgroundBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetBackgroundBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  vtkBrush *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkBrush"))
  {
    if (ap.IsBound())
    {
      op->SetBackgroundBrush(temp0);
    }
    else
    {
      op->vtkChart::SetBackgroundBrush(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetBackgroundBrush(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetBackgroundBrush");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkBrush *tempr = (ap.IsBound() ?
      op->GetBackgroundBrush() :
      op->vtkChart::GetBackgroundBrush());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_SetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionMode(temp0);
    }
    else
    {
      op->vtkChart::SetSelectionMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionModeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMinValue() :
      op->vtkChart::GetSelectionModeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionModeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionModeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionModeMaxValue() :
      op->vtkChart::GetSelectionModeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkChart_GetSelectionMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkChart *op = static_cast<vtkChart *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionMode() :
      op->vtkChart::GetSelectionMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkChart_Methods[] = {
  {"IsTypeOf", PyvtkChart_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkChart_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkChart_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkChart\nC++: static vtkChart *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkChart_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkChart\nC++: vtkChart *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkChart_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkChart_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Paint", PyvtkChart_Paint, METH_VARARGS,
   "Paint(self, painter:vtkContext2D) -> bool\nC++: bool Paint(vtkContext2D *painter) override = 0;\n\nPaint event for the chart, called whenever the chart needs to be\ndrawn\n"},
  {"AddPlot", PyvtkChart_AddPlot, METH_VARARGS,
   "AddPlot(self, type:int) -> vtkPlot\nC++: virtual vtkPlot *AddPlot(int type)\nAddPlot(self, plot:vtkPlot) -> int\nC++: virtual vtkIdType AddPlot(vtkPlot *plot)\n\nAdd a plot to the chart, defaults to using the name of the y\ncolumn\n"},
  {"RemovePlot", PyvtkChart_RemovePlot, METH_VARARGS,
   "RemovePlot(self, index:int) -> bool\nC++: virtual bool RemovePlot(vtkIdType index)\n\nRemove the plot at the specified index, returns true if\nsuccessful, false if the index was invalid.\n"},
  {"RemovePlotInstance", PyvtkChart_RemovePlotInstance, METH_VARARGS,
   "RemovePlotInstance(self, plot:vtkPlot) -> bool\nC++: virtual bool RemovePlotInstance(vtkPlot *plot)\n\nRemove the given plot.  Returns true if successful, false if the\nplot was not contained in this chart.  Note, the base\nimplementation of this method performs a linear search to locate\nthe plot.\n"},
  {"ClearPlots", PyvtkChart_ClearPlots, METH_VARARGS,
   "ClearPlots(self) -> None\nC++: virtual void ClearPlots()\n\nRemove all plots from the chart.\n"},
  {"GetPlot", PyvtkChart_GetPlot, METH_VARARGS,
   "GetPlot(self, index:int) -> vtkPlot\nC++: virtual vtkPlot *GetPlot(vtkIdType index)\n\nGet the plot at the specified index, returns null if the index is\ninvalid.\n"},
  {"GetNumberOfPlots", PyvtkChart_GetNumberOfPlots, METH_VARARGS,
   "GetNumberOfPlots(self) -> int\nC++: virtual vtkIdType GetNumberOfPlots()\n\nGet the number of plots the chart contains.\n"},
  {"GetAxis", PyvtkChart_GetAxis, METH_VARARGS,
   "GetAxis(self, axisIndex:int) -> vtkAxis\nC++: virtual vtkAxis *GetAxis(int axisIndex)\n\nGet the axis specified by axisIndex. 0 is x, 1 is y. This should\nprobably be improved either using a string or enum to select the\naxis.\n"},
  {"SetAxis", PyvtkChart_SetAxis, METH_VARARGS,
   "SetAxis(self, axisIndex:int, __b:vtkAxis) -> None\nC++: virtual void SetAxis(int axisIndex, vtkAxis *)\n\nSet the axis specified by axisIndex. 0 is x, 1 is y. This should\nprobably be improved either using a string or enum to select the\naxis.\n"},
  {"GetNumberOfAxes", PyvtkChart_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: virtual vtkIdType GetNumberOfAxes()\n\nGet the number of axes in the current chart.\n"},
  {"RecalculateBounds", PyvtkChart_RecalculateBounds, METH_VARARGS,
   "RecalculateBounds(self) -> None\nC++: virtual void RecalculateBounds()\n\nRequest that the chart recalculates the range of its axes.\nEspecially useful in applications after the parameters of plots\nhave been modified.\n"},
  {"SetSelectionMethod", PyvtkChart_SetSelectionMethod, METH_VARARGS,
   "SetSelectionMethod(self, method:int) -> None\nC++: virtual void SetSelectionMethod(int method)\n\nSet the selection method, which controls how selections are\nhandled by the chart. The default is SELECTION_ROWS which selects\nall points in all plots in a chart that have values in the rows\nselected. SELECTION_PLOTS allows for finer-grained selections\nspecific to each plot, and so to each XY column pair.\nSELECTION_COLUMNS selects all points of plots that correspond to\nselected columns.\n"},
  {"GetSelectionMethod", PyvtkChart_GetSelectionMethod, METH_VARARGS,
   "GetSelectionMethod(self) -> int\nC++: virtual int GetSelectionMethod()\n\n"},
  {"SetAnnotationLink", PyvtkChart_SetAnnotationLink, METH_VARARGS,
   "SetAnnotationLink(self, link:vtkAnnotationLink) -> None\nC++: virtual void SetAnnotationLink(vtkAnnotationLink *link)\n\nSet the vtkAnnotationLink for the chart.\n"},
  {"GetAnnotationLink", PyvtkChart_GetAnnotationLink, METH_VARARGS,
   "GetAnnotationLink(self) -> vtkAnnotationLink\nC++: virtual vtkAnnotationLink *GetAnnotationLink()\n\nGet the vtkAnnotationLink for the chart.\n"},
  {"SetGeometry", PyvtkChart_SetGeometry, METH_VARARGS,
   "SetGeometry(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetGeometry(int _arg1, int _arg2)\nSetGeometry(self, _arg:(int, int)) -> None\nC++: void SetGeometry(const int _arg[2])\n\nSet/get the width and the height of the chart.\n"},
  {"GetGeometry", PyvtkChart_GetGeometry, METH_VARARGS,
   "GetGeometry(self) -> (int, int)\nC++: virtual int *GetGeometry()\n\n"},
  {"SetPoint1", PyvtkChart_SetPoint1, METH_VARARGS,
   "SetPoint1(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetPoint1(int _arg1, int _arg2)\nSetPoint1(self, _arg:(int, int)) -> None\nC++: void SetPoint1(const int _arg[2])\n\nSet/get the first point in the chart (the bottom left).\n"},
  {"GetPoint1", PyvtkChart_GetPoint1, METH_VARARGS,
   "GetPoint1(self) -> (int, int)\nC++: virtual int *GetPoint1()\n\n"},
  {"SetPoint2", PyvtkChart_SetPoint2, METH_VARARGS,
   "SetPoint2(self, _arg1:int, _arg2:int) -> None\nC++: virtual void SetPoint2(int _arg1, int _arg2)\nSetPoint2(self, _arg:(int, int)) -> None\nC++: void SetPoint2(const int _arg[2])\n\nSet/get the second point in the chart (the top right).\n"},
  {"GetPoint2", PyvtkChart_GetPoint2, METH_VARARGS,
   "GetPoint2(self) -> (int, int)\nC++: virtual int *GetPoint2()\n\n"},
  {"SetShowLegend", PyvtkChart_SetShowLegend, METH_VARARGS,
   "SetShowLegend(self, visible:bool) -> None\nC++: virtual void SetShowLegend(bool visible)\n\nSet/get whether the chart should draw a legend.\n"},
  {"GetShowLegend", PyvtkChart_GetShowLegend, METH_VARARGS,
   "GetShowLegend(self) -> bool\nC++: virtual bool GetShowLegend()\n\n"},
  {"GetLegend", PyvtkChart_GetLegend, METH_VARARGS,
   "GetLegend(self) -> vtkChartLegend\nC++: virtual vtkChartLegend *GetLegend()\n\nGet the legend for the chart, if available. Can return null if\nthere is no legend.\n"},
  {"SetTitle", PyvtkChart_SetTitle, METH_VARARGS,
   "SetTitle(self, title:str) -> None\nC++: virtual void SetTitle(const vtkStdString &title)\n\nGet/set the title text of the chart.\n"},
  {"GetTitle", PyvtkChart_GetTitle, METH_VARARGS,
   "GetTitle(self) -> str\nC++: virtual vtkStdString GetTitle()\n\n"},
  {"GetTitleProperties", PyvtkChart_GetTitleProperties, METH_VARARGS,
   "GetTitleProperties(self) -> vtkTextProperty\nC++: virtual vtkTextProperty *GetTitleProperties()\n\nGet the vtkTextProperty that governs how the chart title is\ndisplayed.\n"},
  {"SetBottomBorder", PyvtkChart_SetBottomBorder, METH_VARARGS,
   "SetBottomBorder(self, border:int) -> None\nC++: void SetBottomBorder(int border)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {"SetTopBorder", PyvtkChart_SetTopBorder, METH_VARARGS,
   "SetTopBorder(self, border:int) -> None\nC++: void SetTopBorder(int border)\n\n"},
  {"SetLeftBorder", PyvtkChart_SetLeftBorder, METH_VARARGS,
   "SetLeftBorder(self, border:int) -> None\nC++: void SetLeftBorder(int border)\n\n"},
  {"SetRightBorder", PyvtkChart_SetRightBorder, METH_VARARGS,
   "SetRightBorder(self, border:int) -> None\nC++: void SetRightBorder(int border)\n\n"},
  {"SetBorders", PyvtkChart_SetBorders, METH_VARARGS,
   "SetBorders(self, left:int, bottom:int, right:int, top:int) -> None\nC++: void SetBorders(int left, int bottom, int right, int top)\n\nSet/get the borders of the chart (space in pixels around the\nchart).\n"},
  {"SetSize", PyvtkChart_SetSize, METH_VARARGS,
   "SetSize(self, rect:vtkRectf) -> None\nC++: virtual void SetSize(const vtkRectf &rect)\n\nSet the size of the chart. The rect argument specifies the bottom\ncorner, width and height of the chart. The borders will be laid\nout within the specified rectangle.\n"},
  {"GetSize", PyvtkChart_GetSize, METH_VARARGS,
   "GetSize(self) -> vtkRectf\nC++: vtkRectf GetSize()\n\nGet the current size of the chart.\n"},
  {"SetLayoutStrategy", PyvtkChart_SetLayoutStrategy, METH_VARARGS,
   "SetLayoutStrategy(self, _arg:int) -> None\nC++: virtual void SetLayoutStrategy(int _arg)\n\nSet/get the layout strategy that should be used by the chart. As\nwe don't support enums this can take any value in the integer\nrange, but the only valid enums are FILL_SCENE, FILL_RECT and\nAXES_TO_RECT.\n"},
  {"GetLayoutStrategy", PyvtkChart_GetLayoutStrategy, METH_VARARGS,
   "GetLayoutStrategy(self) -> int\nC++: virtual int GetLayoutStrategy()\n\n"},
  {"SetAutoSize", PyvtkChart_SetAutoSize, METH_VARARGS,
   "SetAutoSize(self, isAutoSized:bool) -> None\nC++: virtual void SetAutoSize(bool isAutoSized)\n\nSet/get whether the chart should automatically resize to fill the\ncurrent render window. Default is true.\n"},
  {"GetAutoSize", PyvtkChart_GetAutoSize, METH_VARARGS,
   "GetAutoSize(self) -> bool\nC++: virtual bool GetAutoSize()\n\n"},
  {"SetRenderEmpty", PyvtkChart_SetRenderEmpty, METH_VARARGS,
   "SetRenderEmpty(self, _arg:bool) -> None\nC++: virtual void SetRenderEmpty(bool _arg)\n\nSet/get whether the chart should still render its axes and\ndecorations even if the chart has no visible plots. Default is\nfalse (do not render an empty plot).\n\n* Note that if you wish to render axes for an empty plot you\n  should also\n* set AutoSize to false, as that will hide all axes for an empty\n  plot.\n"},
  {"GetRenderEmpty", PyvtkChart_GetRenderEmpty, METH_VARARGS,
   "GetRenderEmpty(self) -> bool\nC++: virtual bool GetRenderEmpty()\n\n"},
  {"SetActionToButton", PyvtkChart_SetActionToButton, METH_VARARGS,
   "SetActionToButton(self, action:int, button:int) -> None\nC++: virtual void SetActionToButton(int action, int button)\n\nAssign action types to mouse buttons. Available action types are\nPAN, ZOOM and SELECT in the chart enum, the default assigns the\nLEFT_BUTTON to PAN, MIDDLE_BUTTON to ZOOM and RIGHT_BUTTON to\nSELECT. Valid mouse enums are in the vtkContextMouseEvent class.\n\n* Note that only one mouse button can be assigned to each action,\nan action\n* will have -1 (invalid button) assigned if it had the same\n  button as the one\n* assigned to a different action.\n"},
  {"GetActionToButton", PyvtkChart_GetActionToButton, METH_VARARGS,
   "GetActionToButton(self, action:int) -> int\nC++: virtual int GetActionToButton(int action)\n\nGet the mouse button associated with the supplied action. The\nmouse button enum is from vtkContextMouseEvent, and the action\nenum is from vtkChart.\n"},
  {"SetClickActionToButton", PyvtkChart_SetClickActionToButton, METH_VARARGS,
   "SetClickActionToButton(self, action:int, button:int) -> None\nC++: virtual void SetClickActionToButton(int action, int button)\n\nAssign action types to single mouse clicks. Available action\ntypes are SELECT and NOTIFY in the chart enum. The default\nassigns the LEFT_BUTTON to NOTIFY, and the RIGHT_BUTTON to\nSELECT.\n"},
  {"GetClickActionToButton", PyvtkChart_GetClickActionToButton, METH_VARARGS,
   "GetClickActionToButton(self, action:int) -> int\nC++: virtual int GetClickActionToButton(int action)\n\nGet the mouse button associated with the supplied click action.\nThe mouse button enum is from vtkContextMouseEvent, and the\naction enum is from vtkChart.\n"},
  {"SetBackgroundBrush", PyvtkChart_SetBackgroundBrush, METH_VARARGS,
   "SetBackgroundBrush(self, brush:vtkBrush) -> None\nC++: void SetBackgroundBrush(vtkBrush *brush)\n\nSet/Get the brush to use for the background color.\n"},
  {"GetBackgroundBrush", PyvtkChart_GetBackgroundBrush, METH_VARARGS,
   "GetBackgroundBrush(self) -> vtkBrush\nC++: vtkBrush *GetBackgroundBrush()\n\n"},
  {"SetSelectionMode", PyvtkChart_SetSelectionMode, METH_VARARGS,
   "SetSelectionMode(self, _arg:int) -> None\nC++: virtual void SetSelectionMode(int _arg)\n\nSet/get the Selection Mode that will be used by the chart while\ndoing selection. The only valid enums are\nvtkContextScene::SelectionModifier.\n"},
  {"GetSelectionModeMinValue", PyvtkChart_GetSelectionModeMinValue, METH_VARARGS,
   "GetSelectionModeMinValue(self) -> int\nC++: virtual int GetSelectionModeMinValue()\n\n"},
  {"GetSelectionModeMaxValue", PyvtkChart_GetSelectionModeMaxValue, METH_VARARGS,
   "GetSelectionModeMaxValue(self) -> int\nC++: virtual int GetSelectionModeMaxValue()\n\n"},
  {"GetSelectionMode", PyvtkChart_GetSelectionMode, METH_VARARGS,
   "GetSelectionMode(self) -> int\nC++: virtual int GetSelectionMode()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkChart_Doc =
  "vtkChart - Factory class for drawing 2D charts\n\n"
  "Superclass: vtkContextItem\n\n"
  "This defines the interface for a chart.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkChart_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkChartsCore.vtkChart", // tp_name
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
  PyvtkChart_Doc, // tp_doc
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

PyObject *PyvtkChart_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkChart_Type, PyvtkChart_Methods,
    "vtkChart",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkContextItem");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkChart_EventIds_Type);
  PyVTKEnum_Add(&PyvtkChart_EventIds_Type, "vtkChart.EventIds");

  o = (PyObject *)&PyvtkChart_EventIds_Type;
  if (PyDict_SetItemString(d, "EventIds", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 16; c++)
  {
    static const struct { const char *name; int value; }
      constants[16] = {
        { "LINE", vtkChart::LINE },
        { "POINTS", vtkChart::POINTS },
        { "BAR", vtkChart::BAR },
        { "STACKED", vtkChart::STACKED },
        { "BAG", vtkChart::BAG },
        { "FUNCTIONALBAG", vtkChart::FUNCTIONALBAG },
        { "AREA", vtkChart::AREA },
        { "PAN", vtkChart::PAN },
        { "ZOOM", vtkChart::ZOOM },
        { "ZOOM_AXIS", vtkChart::ZOOM_AXIS },
        { "SELECT", vtkChart::SELECT },
        { "SELECT_RECTANGLE", vtkChart::SELECT_RECTANGLE },
        { "SELECT_POLYGON", vtkChart::SELECT_POLYGON },
        { "CLICK_AND_DRAG", vtkChart::CLICK_AND_DRAG },
        { "NOTIFY", vtkChart::NOTIFY },
        { "ACTION_TYPES_COUNT", vtkChart::ACTION_TYPES_COUNT },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 1; c++)
  {
    typedef vtkChart::EventIds cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[1] = {
        { "UpdateRange", vtkChart::UpdateRange },
      };

    o = PyvtkChart_EventIds_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 6; c++)
  {
    static const struct { const char *name; int value; }
      constants[6] = {
        { "SELECTION_ROWS", vtkChart::SELECTION_ROWS },
        { "SELECTION_PLOTS", vtkChart::SELECTION_PLOTS },
        { "SELECTION_COLUMNS", vtkChart::SELECTION_COLUMNS },
        { "FILL_SCENE", vtkChart::FILL_SCENE },
        { "FILL_RECT", vtkChart::FILL_RECT },
        { "AXES_TO_RECT", vtkChart::AXES_TO_RECT },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkChart(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkChart_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkChart", o) != 0)
  {
    Py_DECREF(o);
  }

}

