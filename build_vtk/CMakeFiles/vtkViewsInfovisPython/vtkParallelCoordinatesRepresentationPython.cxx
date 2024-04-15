// python wrapper for vtkParallelCoordinatesRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkParallelCoordinatesRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkParallelCoordinatesRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkParallelCoordinatesRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkRenderedRepresentation_ClassNew
extern "C" { PyObject *PyvtkRenderedRepresentation_ClassNew(); }
#define DECLARED_PyvtkRenderedRepresentation_ClassNew
#endif
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelCoordinatesRepresentation_InputPorts_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkParallelCoordinatesRepresentation.InputPorts", // tp_name
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
PyObject *PyvtkParallelCoordinatesRepresentation_InputPorts_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkParallelCoordinatesRepresentation_InputPorts_Type, static_cast<int>(val));
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkParallelCoordinatesRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkParallelCoordinatesRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkParallelCoordinatesRepresentation *tempr = vtkParallelCoordinatesRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkParallelCoordinatesRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkParallelCoordinatesRepresentation::NewInstance());

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
PyvtkParallelCoordinatesRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkParallelCoordinatesRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkParallelCoordinatesRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_ApplyViewTheme(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyViewTheme");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkViewTheme *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewTheme"))
  {
    if (ap.IsBound())
    {
      op->ApplyViewTheme(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::ApplyViewTheme(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetHoverString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoverString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkView *temp0 = nullptr;
  int temp1;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkView") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetHoverString(temp0, temp1, temp2) :
      op->vtkParallelCoordinatesRepresentation::GetHoverString(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetPositionAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPositionAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetPositionAndSize(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::SetPositionAndSize(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetPositionAndSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionAndSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetPositionAndSize(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::GetPositionAndSize(temp0, temp1));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkStringArray *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkStringArray"))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitles(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAxisTitles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisTitles");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetAxisTitles(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAxisTitles(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkParallelCoordinatesRepresentation_SetAxisTitles_Methods[] = {
  {"SetAxisTitles", PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s1, METH_VARARGS,
   "@V *vtkStringArray"},
  {"SetAxisTitles", PyvtkParallelCoordinatesRepresentation_SetAxisTitles_s2, METH_VARARGS,
   "@V *vtkAlgorithmOutput"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisTitles(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkParallelCoordinatesRepresentation_SetAxisTitles_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisTitles");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetPlotTitle(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPlotTitle");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPlotTitle(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetPlotTitle(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxes() :
      op->vtkParallelCoordinatesRepresentation::GetNumberOfAxes());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfSamples(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSamples");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfSamples() :
      op->vtkParallelCoordinatesRepresentation::GetNumberOfSamples());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetNumberOfAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfAxisLabels(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetNumberOfAxisLabels(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetNumberOfAxisLabels(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfAxisLabels");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfAxisLabels() :
      op->vtkParallelCoordinatesRepresentation::GetNumberOfAxisLabels());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SwapAxisPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SwapAxisPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SwapAxisPositions(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::SwapAxisPositions(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetXCoordinateOfPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetXCoordinateOfPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    int tempr = (ap.IsBound() ?
      op->SetXCoordinateOfPosition(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::SetXCoordinateOfPosition(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetXCoordinateOfPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinateOfPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetXCoordinateOfPosition(temp0) :
      op->vtkParallelCoordinatesRepresentation::GetXCoordinateOfPosition(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetXCoordinatesOfPositions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetXCoordinatesOfPositions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->GetXCoordinatesOfPositions(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::GetXCoordinatesOfPositions(temp0);
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
PyvtkParallelCoordinatesRepresentation_GetPositionNearXCoordinate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPositionNearXCoordinate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPositionNearXCoordinate(temp0) :
      op->vtkParallelCoordinatesRepresentation::GetPositionNearXCoordinate(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetUseCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseCurves(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetUseCurves(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetUseCurves(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseCurves");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUseCurves() :
      op->vtkParallelCoordinatesRepresentation::GetUseCurves());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_UseCurvesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurvesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCurvesOn();
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::UseCurvesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_UseCurvesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseCurvesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseCurvesOff();
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::UseCurvesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetCurveResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurveResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurveResolution(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetCurveResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetCurveResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurveResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurveResolution() :
      op->vtkParallelCoordinatesRepresentation::GetCurveResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetLineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetLineOpacity() :
      op->vtkParallelCoordinatesRepresentation::GetLineOpacity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFontSize() :
      op->vtkParallelCoordinatesRepresentation::GetFontSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetLineColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetLineColor() :
      op->vtkParallelCoordinatesRepresentation::GetLineColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAxisColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisColor() :
      op->vtkParallelCoordinatesRepresentation::GetAxisColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAxisLabelColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetAxisLabelColor() :
      op->vtkParallelCoordinatesRepresentation::GetAxisLabelColor());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineOpacity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineOpacity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLineOpacity(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetLineOpacity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetFontSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFontSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFontSize(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetFontSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->SetLineColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetLineColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLineColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetLineColor(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetLineColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetLineColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetLineColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetLineColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetLineColor");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->SetAxisColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAxisColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisColor(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAxisColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetAxisColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetAxisColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisColor");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

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
      op->vtkParallelCoordinatesRepresentation::SetAxisLabelColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAxisLabelColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetAxisLabelColor(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAxisLabelColor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s1(self, args);
    case 1:
      return PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetAxisLabelColor");
  return nullptr;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetAngleBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetAngleBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetAngleBrushThreshold(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetAngleBrushThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetAngleBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetAngleBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetAngleBrushThreshold() :
      op->vtkParallelCoordinatesRepresentation::GetAngleBrushThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetFunctionBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFunctionBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFunctionBrushThreshold(temp0);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::SetFunctionBrushThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetFunctionBrushThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFunctionBrushThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetFunctionBrushThreshold() :
      op->vtkParallelCoordinatesRepresentation::GetFunctionBrushThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_GetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->GetRangeAtPosition(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::GetRangeAtPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_SetRangeAtPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRangeAtPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    int tempr = (ap.IsBound() ?
      op->SetRangeAtPosition(temp0, temp1) :
      op->vtkParallelCoordinatesRepresentation::SetRangeAtPosition(temp0, temp1));

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_ResetAxes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAxes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ResetAxes();
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::ResetAxes();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_LassoSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LassoSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  vtkPoints *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetVTKObject(temp2, "vtkPoints"))
  {
    if (ap.IsBound())
    {
      op->LassoSelect(temp0, temp1, temp2);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::LassoSelect(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_AngleSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AngleSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->AngleSelect(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::AngleSelect(temp0, temp1, temp2, temp3);
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
PyvtkParallelCoordinatesRepresentation_FunctionSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FunctionSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<double> store4(2*size4);
  double *temp4 = store4.Data();
  double *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);
    vtkPythonArgs::Save(temp5, save5, size5);

    if (ap.IsBound())
    {
      op->FunctionSelect(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::FunctionSelect(temp0, temp1, temp2, temp3, temp4, temp5);
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

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkParallelCoordinatesRepresentation_RangeSelect(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RangeSelect");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkParallelCoordinatesRepresentation *op = static_cast<vtkParallelCoordinatesRepresentation *>(vp);

  int temp0;
  int temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(2*size2);
  double *temp2 = store2.Data();
  double *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->RangeSelect(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkParallelCoordinatesRepresentation::RangeSelect(temp0, temp1, temp2, temp3);
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

static PyMethodDef PyvtkParallelCoordinatesRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkParallelCoordinatesRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkParallelCoordinatesRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkParallelCoordinatesRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase)\n    -> vtkParallelCoordinatesRepresentation\nC++: static vtkParallelCoordinatesRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkParallelCoordinatesRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkParallelCoordinatesRepresentation\nC++: vtkParallelCoordinatesRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkParallelCoordinatesRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkParallelCoordinatesRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ApplyViewTheme", PyvtkParallelCoordinatesRepresentation_ApplyViewTheme, METH_VARARGS,
   "ApplyViewTheme(self, theme:vtkViewTheme) -> None\nC++: void ApplyViewTheme(vtkViewTheme *theme) override;\n\nApply the theme to this view.  CellColor is used for line\ncoloring and titles.  EdgeLabelColor is used for axis color.\nCellOpacity is used for line opacity.\n"},
  {"GetHoverString", PyvtkParallelCoordinatesRepresentation_GetHoverString, METH_VARARGS,
   "GetHoverString(self, view:vtkView, x:int, y:int) -> str\nC++: virtual std::string GetHoverString(vtkView *view, int x,\n    int y)\n\nReturns the hover text at an x,y location.\n"},
  {"SetPositionAndSize", PyvtkParallelCoordinatesRepresentation_SetPositionAndSize, METH_VARARGS,
   "SetPositionAndSize(self, position:[float, ...], size:[float, ...])\n     -> int\nC++: int SetPositionAndSize(double *position, double *size)\n\nChange the position of the plot\n"},
  {"GetPositionAndSize", PyvtkParallelCoordinatesRepresentation_GetPositionAndSize, METH_VARARGS,
   "GetPositionAndSize(self, position:[float, ...], size:[float, ...])\n     -> int\nC++: int GetPositionAndSize(double *position, double *size)\n\n"},
  {"SetAxisTitles", PyvtkParallelCoordinatesRepresentation_SetAxisTitles, METH_VARARGS,
   "SetAxisTitles(self, __a:vtkStringArray) -> None\nC++: void SetAxisTitles(vtkStringArray *)\nSetAxisTitles(self, __a:vtkAlgorithmOutput) -> None\nC++: void SetAxisTitles(vtkAlgorithmOutput *)\n\nSet/Get the axis titles\n"},
  {"SetPlotTitle", PyvtkParallelCoordinatesRepresentation_SetPlotTitle, METH_VARARGS,
   "SetPlotTitle(self, __a:str) -> None\nC++: void SetPlotTitle(const char *)\n\nSet the title for the entire plot\n"},
  {"GetNumberOfAxes", PyvtkParallelCoordinatesRepresentation_GetNumberOfAxes, METH_VARARGS,
   "GetNumberOfAxes(self) -> int\nC++: virtual int GetNumberOfAxes()\n\nGet the number of axes in the plot\n"},
  {"GetNumberOfSamples", PyvtkParallelCoordinatesRepresentation_GetNumberOfSamples, METH_VARARGS,
   "GetNumberOfSamples(self) -> int\nC++: virtual int GetNumberOfSamples()\n\nGet the number of samples in the plot\n"},
  {"SetNumberOfAxisLabels", PyvtkParallelCoordinatesRepresentation_SetNumberOfAxisLabels, METH_VARARGS,
   "SetNumberOfAxisLabels(self, num:int) -> None\nC++: void SetNumberOfAxisLabels(int num)\n\nSet/Get the number of labels to display on each axis\n"},
  {"GetNumberOfAxisLabels", PyvtkParallelCoordinatesRepresentation_GetNumberOfAxisLabels, METH_VARARGS,
   "GetNumberOfAxisLabels(self) -> int\nC++: virtual int GetNumberOfAxisLabels()\n\n"},
  {"SwapAxisPositions", PyvtkParallelCoordinatesRepresentation_SwapAxisPositions, METH_VARARGS,
   "SwapAxisPositions(self, position1:int, position2:int) -> int\nC++: virtual int SwapAxisPositions(int position1, int position2)\n\nMove an axis to a particular screen position.  Using these\nmethods requires an Update() before they will work properly.\n"},
  {"SetXCoordinateOfPosition", PyvtkParallelCoordinatesRepresentation_SetXCoordinateOfPosition, METH_VARARGS,
   "SetXCoordinateOfPosition(self, position:int, xcoord:float) -> int\nC++: int SetXCoordinateOfPosition(int position, double xcoord)\n\n"},
  {"GetXCoordinateOfPosition", PyvtkParallelCoordinatesRepresentation_GetXCoordinateOfPosition, METH_VARARGS,
   "GetXCoordinateOfPosition(self, axis:int) -> float\nC++: double GetXCoordinateOfPosition(int axis)\n\n"},
  {"GetXCoordinatesOfPositions", PyvtkParallelCoordinatesRepresentation_GetXCoordinatesOfPositions, METH_VARARGS,
   "GetXCoordinatesOfPositions(self, coords:[float, ...]) -> None\nC++: void GetXCoordinatesOfPositions(double *coords)\n\n"},
  {"GetPositionNearXCoordinate", PyvtkParallelCoordinatesRepresentation_GetPositionNearXCoordinate, METH_VARARGS,
   "GetPositionNearXCoordinate(self, xcoord:float) -> int\nC++: int GetPositionNearXCoordinate(double xcoord)\n\n"},
  {"SetUseCurves", PyvtkParallelCoordinatesRepresentation_SetUseCurves, METH_VARARGS,
   "SetUseCurves(self, _arg:int) -> None\nC++: virtual void SetUseCurves(vtkTypeBool _arg)\n\nWhether or not to display using curves\n"},
  {"GetUseCurves", PyvtkParallelCoordinatesRepresentation_GetUseCurves, METH_VARARGS,
   "GetUseCurves(self) -> int\nC++: virtual vtkTypeBool GetUseCurves()\n\n"},
  {"UseCurvesOn", PyvtkParallelCoordinatesRepresentation_UseCurvesOn, METH_VARARGS,
   "UseCurvesOn(self) -> None\nC++: virtual void UseCurvesOn()\n\n"},
  {"UseCurvesOff", PyvtkParallelCoordinatesRepresentation_UseCurvesOff, METH_VARARGS,
   "UseCurvesOff(self) -> None\nC++: virtual void UseCurvesOff()\n\n"},
  {"SetCurveResolution", PyvtkParallelCoordinatesRepresentation_SetCurveResolution, METH_VARARGS,
   "SetCurveResolution(self, _arg:int) -> None\nC++: virtual void SetCurveResolution(int _arg)\n\nResolution of the curves displayed, enabled by setting UseCurves\n"},
  {"GetCurveResolution", PyvtkParallelCoordinatesRepresentation_GetCurveResolution, METH_VARARGS,
   "GetCurveResolution(self) -> int\nC++: virtual int GetCurveResolution()\n\n"},
  {"GetLineOpacity", PyvtkParallelCoordinatesRepresentation_GetLineOpacity, METH_VARARGS,
   "GetLineOpacity(self) -> float\nC++: virtual double GetLineOpacity()\n\nAccess plot properties\n"},
  {"GetFontSize", PyvtkParallelCoordinatesRepresentation_GetFontSize, METH_VARARGS,
   "GetFontSize(self) -> float\nC++: virtual double GetFontSize()\n\n"},
  {"GetLineColor", PyvtkParallelCoordinatesRepresentation_GetLineColor, METH_VARARGS,
   "GetLineColor(self) -> (float, float, float)\nC++: virtual double *GetLineColor()\n\n"},
  {"GetAxisColor", PyvtkParallelCoordinatesRepresentation_GetAxisColor, METH_VARARGS,
   "GetAxisColor(self) -> (float, float, float)\nC++: virtual double *GetAxisColor()\n\n"},
  {"GetAxisLabelColor", PyvtkParallelCoordinatesRepresentation_GetAxisLabelColor, METH_VARARGS,
   "GetAxisLabelColor(self) -> (float, float, float)\nC++: virtual double *GetAxisLabelColor()\n\n"},
  {"SetLineOpacity", PyvtkParallelCoordinatesRepresentation_SetLineOpacity, METH_VARARGS,
   "SetLineOpacity(self, _arg:float) -> None\nC++: virtual void SetLineOpacity(double _arg)\n\n"},
  {"SetFontSize", PyvtkParallelCoordinatesRepresentation_SetFontSize, METH_VARARGS,
   "SetFontSize(self, _arg:float) -> None\nC++: virtual void SetFontSize(double _arg)\n\n"},
  {"SetLineColor", PyvtkParallelCoordinatesRepresentation_SetLineColor, METH_VARARGS,
   "SetLineColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetLineColor(double _arg1, double _arg2,\n    double _arg3)\nSetLineColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetLineColor(const double _arg[3])\n\n"},
  {"SetAxisColor", PyvtkParallelCoordinatesRepresentation_SetAxisColor, METH_VARARGS,
   "SetAxisColor(self, _arg1:float, _arg2:float, _arg3:float) -> None\nC++: virtual void SetAxisColor(double _arg1, double _arg2,\n    double _arg3)\nSetAxisColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisColor(const double _arg[3])\n\n"},
  {"SetAxisLabelColor", PyvtkParallelCoordinatesRepresentation_SetAxisLabelColor, METH_VARARGS,
   "SetAxisLabelColor(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetAxisLabelColor(double _arg1, double _arg2,\n    double _arg3)\nSetAxisLabelColor(self, _arg:(float, float, float)) -> None\nC++: virtual void SetAxisLabelColor(const double _arg[3])\n\n"},
  {"SetAngleBrushThreshold", PyvtkParallelCoordinatesRepresentation_SetAngleBrushThreshold, METH_VARARGS,
   "SetAngleBrushThreshold(self, _arg:float) -> None\nC++: virtual void SetAngleBrushThreshold(double _arg)\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {"GetAngleBrushThreshold", PyvtkParallelCoordinatesRepresentation_GetAngleBrushThreshold, METH_VARARGS,
   "GetAngleBrushThreshold(self) -> float\nC++: virtual double GetAngleBrushThreshold()\n\n"},
  {"SetFunctionBrushThreshold", PyvtkParallelCoordinatesRepresentation_SetFunctionBrushThreshold, METH_VARARGS,
   "SetFunctionBrushThreshold(self, _arg:float) -> None\nC++: virtual void SetFunctionBrushThreshold(double _arg)\n\nMaximum angle difference (in degrees) of selection using\nangle/function brushes\n"},
  {"GetFunctionBrushThreshold", PyvtkParallelCoordinatesRepresentation_GetFunctionBrushThreshold, METH_VARARGS,
   "GetFunctionBrushThreshold(self) -> float\nC++: virtual double GetFunctionBrushThreshold()\n\n"},
  {"GetRangeAtPosition", PyvtkParallelCoordinatesRepresentation_GetRangeAtPosition, METH_VARARGS,
   "GetRangeAtPosition(self, position:int, range:[float, float])\n    -> int\nC++: int GetRangeAtPosition(int position, double range[2])\n\nSet/get the value range of the axis at a particular screen\nposition\n"},
  {"SetRangeAtPosition", PyvtkParallelCoordinatesRepresentation_SetRangeAtPosition, METH_VARARGS,
   "SetRangeAtPosition(self, position:int, range:[float, float])\n    -> int\nC++: virtual int SetRangeAtPosition(int position, double range[2])\n\n"},
  {"ResetAxes", PyvtkParallelCoordinatesRepresentation_ResetAxes, METH_VARARGS,
   "ResetAxes(self) -> None\nC++: void ResetAxes()\n\nReset the axes to their default positions and orders\n"},
  {"LassoSelect", PyvtkParallelCoordinatesRepresentation_LassoSelect, METH_VARARGS,
   "LassoSelect(self, brushClass:int, brushOperator:int,\n    brushPoints:vtkPoints) -> None\nC++: virtual void LassoSelect(int brushClass, int brushOperator,\n    vtkPoints *brushPoints)\n\nDo a selection of the lines.  See the main description for how to\nuse these functions. RangeSelect is currently stubbed out.\n"},
  {"AngleSelect", PyvtkParallelCoordinatesRepresentation_AngleSelect, METH_VARARGS,
   "AngleSelect(self, brushClass:int, brushOperator:int, p1:[float,\n    ...], p2:[float, ...]) -> None\nC++: virtual void AngleSelect(int brushClass, int brushOperator,\n    double *p1, double *p2)\n\n"},
  {"FunctionSelect", PyvtkParallelCoordinatesRepresentation_FunctionSelect, METH_VARARGS,
   "FunctionSelect(self, brushClass:int, brushOperator:int, p1:[float,\n     ...], p2:[float, ...], q1:[float, ...], q2:[float, ...])\n    -> None\nC++: virtual void FunctionSelect(int brushClass,\n    int brushOperator, double *p1, double *p2, double *q1,\n    double *q2)\n\n"},
  {"RangeSelect", PyvtkParallelCoordinatesRepresentation_RangeSelect, METH_VARARGS,
   "RangeSelect(self, brushClass:int, brushOperator:int, p1:[float,\n    ...], p2:[float, ...]) -> None\nC++: virtual void RangeSelect(int brushClass, int brushOperator,\n    double *p1, double *p2)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkParallelCoordinatesRepresentation_Doc =
  "vtkParallelCoordinatesRepresentation - Data representation that\n takes generic multivariate data and produces a parallel coordinates\nplot.\n\n"
  "Superclass: vtkRenderedRepresentation\n\n"
  "A parallel coordinates plot represents each variable in a\n"
  "multivariate\n"
  " data set as a separate axis.  Individual samples of that data set\n"
  "are\n"
  " represented as a polyline that pass through each variable axis at\n"
  " positions that correspond to data values. \n"
  "vtkParallelCoordinatesRepresentation\n"
  " generates this plot when added to a vtkParallelCoordinatesView,\n"
  "which handles\n"
  " interaction and highlighting.  Sample polylines can alternatively\n"
  " be represented as s-curves by enabling the UseCurves flag.\n\n\n"
  " There are three selection modes: lasso, angle, and function. Lasso\n"
  "selection\n"
  " picks sample lines that pass through a polyline.  Angle selection\n"
  "picks sample\n"
  " lines that have similar slope to a line segment.  Function selection\n"
  "picks\n"
  " sample lines that are near a linear function defined on two\n"
  "variables.  This\n"
  " function specified by passing two (x,y) variable value pairs.\n\n\n"
  " All primitives are plotted in normalized view coordinates [0,1].\n\n"
  "@sa\n"
  " vtkParallelCoordinatesView\n"
  "vtkParallelCoordinatesHistogramRepresentation\n"
  " vtkSCurveSpline\n\n"
  "@par Thanks:\n"
  " Developed by David Feng at Sandia National Laboratories\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkParallelCoordinatesRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkParallelCoordinatesRepresentation", // tp_name
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
  PyvtkParallelCoordinatesRepresentation_Doc, // tp_doc
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

static vtkObjectBase *PyvtkParallelCoordinatesRepresentation_StaticNew()
{
  return vtkParallelCoordinatesRepresentation::New();
}

PyObject *PyvtkParallelCoordinatesRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkParallelCoordinatesRepresentation_Type, PyvtkParallelCoordinatesRepresentation_Methods,
    "vtkParallelCoordinatesRepresentation",
 &PyvtkParallelCoordinatesRepresentation_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkRenderedRepresentation_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkParallelCoordinatesRepresentation_InputPorts_Type);
  PyVTKEnum_Add(&PyvtkParallelCoordinatesRepresentation_InputPorts_Type, "vtkParallelCoordinatesRepresentation.InputPorts");

  o = (PyObject *)&PyvtkParallelCoordinatesRepresentation_InputPorts_Type;
  if (PyDict_SetItemString(d, "InputPorts", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    typedef vtkParallelCoordinatesRepresentation::InputPorts cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[3] = {
        { "INPUT_DATA", vtkParallelCoordinatesRepresentation::INPUT_DATA },
        { "INPUT_TITLES", vtkParallelCoordinatesRepresentation::INPUT_TITLES },
        { "NUM_INPUT_PORTS", vtkParallelCoordinatesRepresentation::NUM_INPUT_PORTS },
      };

    o = PyvtkParallelCoordinatesRepresentation_InputPorts_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkParallelCoordinatesRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkParallelCoordinatesRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkParallelCoordinatesRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

