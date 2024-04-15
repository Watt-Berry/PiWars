// python wrapper for vtkStreamTracer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStreamTracer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkStreamTracer(PyObject *dict); }

static PyObject *
PyvtkIntervalInformation_ConvertToLength_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToLength");

  double temp0;
  int temp1;
  double temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    double tempr = vtkIntervalInformation::ConvertToLength(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIntervalInformation_ConvertToLength_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ConvertToLength");

  vtkIntervalInformation *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetSpecialObject(temp0, "vtkIntervalInformation") &&
      ap.GetValue(temp1))
  {
    double tempr = vtkIntervalInformation::ConvertToLength(*temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkIntervalInformation_ConvertToLength(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 3:
      return PyvtkIntervalInformation_ConvertToLength_s1(self, args);
    case 2:
      return PyvtkIntervalInformation_ConvertToLength_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "ConvertToLength");
  return nullptr;
}

static PyMethodDef PyvtkIntervalInformation_Methods[] = {
  {"ConvertToLength", PyvtkIntervalInformation_ConvertToLength, METH_VARARGS,
   "ConvertToLength(interval:float, unit:int, cellLength:float)\n    -> float\nC++: static double ConvertToLength(double interval, int unit,\n    double cellLength)\nConvertToLength(interval:vtkIntervalInformation, cellLength:float)\n     -> float\nC++: static double ConvertToLength(\n    vtkIntervalInformation &interval, double cellLength)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkIntervalInformation_vtkIntervalInformation_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIntervalInformation");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkIntervalInformation *op = new vtkIntervalInformation();

    result = PyVTKSpecialObject_New("vtkIntervalInformation", op);
  }

  return result;
}

static PyObject *
PyvtkIntervalInformation_vtkIntervalInformation_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkIntervalInformation");

  vtkIntervalInformation *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkIntervalInformation"))
  {
    vtkIntervalInformation *op = new vtkIntervalInformation(*temp0);

    result = PyVTKSpecialObject_New("vtkIntervalInformation", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkIntervalInformation_vtkIntervalInformation_Methods[] = {
  {"vtkIntervalInformation", PyvtkIntervalInformation_vtkIntervalInformation_s2, METH_VARARGS,
   "@W vtkIntervalInformation"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkIntervalInformation_vtkIntervalInformation(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkIntervalInformation_vtkIntervalInformation_s1(self, args);
    case 1:
      return PyvtkIntervalInformation_vtkIntervalInformation_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkIntervalInformation");
  return nullptr;
}


static const char *PyvtkIntervalInformation_Doc =

  "vtkIntervalInformation() -> vtkIntervalInformation\nC++: vtkIntervalInformation()\nvtkIntervalInformation(__a:vtkIntervalInformation)\n    -> vtkIntervalInformation\nC++: vtkIntervalInformation(const &vtkIntervalInformation)\n""\n"
  "vtkIntervalInformation - no description provided.\n\n"
;

static PyObject *
PyvtkIntervalInformation_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkIntervalInformation_vtkIntervalInformation(nullptr, args);
}

static void PyvtkIntervalInformation_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkIntervalInformation *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkIntervalInformation_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkIntervalInformation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkIntervalInformation", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkIntervalInformation_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKSpecialObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  PyvtkIntervalInformation_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkIntervalInformation_Doc, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyvtkIntervalInformation_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkIntervalInformation_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkIntervalInformation(*static_cast<const vtkIntervalInformation*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkIntervalInformation_TypeNew
extern "C" { PyObject *PyvtkIntervalInformation_TypeNew(); }
#define DECLARED_PyvtkIntervalInformation_TypeNew
#endif

PyObject *PyvtkIntervalInformation_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkIntervalInformation_Type,
    PyvtkIntervalInformation_Methods,
    PyvtkIntervalInformation_vtkIntervalInformation_Methods,
    &PyvtkIntervalInformation_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkStreamTracer_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamTracer_Units_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkStreamTracer.Units", // tp_name
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
PyObject *PyvtkStreamTracer_Units_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStreamTracer_Units_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamTracer_Solvers_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkStreamTracer.Solvers", // tp_name
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
PyObject *PyvtkStreamTracer_Solvers_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStreamTracer_Solvers_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamTracer_ReasonForTermination_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkStreamTracer.ReasonForTermination", // tp_name
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
PyObject *PyvtkStreamTracer_ReasonForTermination_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkStreamTracer_ReasonForTermination_Type, static_cast<int>(val));
}


static PyObject *
PyvtkStreamTracer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkStreamTracer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkStreamTracer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkStreamTracer *tempr = vtkStreamTracer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkStreamTracer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkStreamTracer::NewInstance());

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
PyvtkStreamTracer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkStreamTracer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkStreamTracer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetStartPosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

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
      op->SetStartPosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStreamTracer::SetStartPosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetStartPosition(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetStartPosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkStreamTracer_SetStartPosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkStreamTracer_SetStartPosition_s1(self, args);
    case 1:
      return PyvtkStreamTracer_SetStartPosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetStartPosition");
  return nullptr;
}


static PyObject *
PyvtkStreamTracer_GetStartPosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetStartPosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetStartPosition() :
      op->vtkStreamTracer::GetStartPosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkStreamTracer::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetSourceConnection(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkInitialValueProblemSolver *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkInitialValueProblemSolver"))
  {
    if (ap.IsBound())
    {
      op->SetIntegrator(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegrator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInitialValueProblemSolver *tempr = (ap.IsBound() ?
      op->GetIntegrator() :
      op->vtkStreamTracer::GetIntegrator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorType(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegratorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegratorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegratorType() :
      op->vtkStreamTracer::GetIntegratorType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta2();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta2();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta4");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta4();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta4();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegratorTypeToRungeKutta45");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegratorTypeToRungeKutta45();
    }
    else
    {
      op->vtkStreamTracer::SetIntegratorTypeToRungeKutta45();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToDataSetPointLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToDataSetPointLocator();
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorTypeToDataSetPointLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorTypeToCellLocator(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorTypeToCellLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorTypeToCellLocator();
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorTypeToCellLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumPropagation(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumPropagation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumPropagation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumPropagation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumPropagation() :
      op->vtkStreamTracer::GetMaximumPropagation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationStepUnit(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationStepUnit(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationStepUnit(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationStepUnit");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationStepUnit() :
      op->vtkStreamTracer::GetIntegrationStepUnit());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInitialIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInitialIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetInitialIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInitialIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetInitialIntegrationStep() :
      op->vtkStreamTracer::GetInitialIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMinimumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMinimumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumIntegrationStep() :
      op->vtkStreamTracer::GetMinimumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumIntegrationStep(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumIntegrationStep(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumIntegrationStep(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumIntegrationStep");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumIntegrationStep() :
      op->vtkStreamTracer::GetMaximumIntegrationStep());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumError(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumError(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumError(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumError");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMaximumError() :
      op->vtkStreamTracer::GetMaximumError());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumNumberOfSteps(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetMaximumNumberOfSteps(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetMaximumNumberOfSteps(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumNumberOfSteps");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumNumberOfSteps() :
      op->vtkStreamTracer::GetMaximumNumberOfSteps());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTerminalSpeed(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetTerminalSpeed(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetTerminalSpeed(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTerminalSpeed");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTerminalSpeed() :
      op->vtkStreamTracer::GetTerminalSpeed());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetSurfaceStreamlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSurfaceStreamlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSurfaceStreamlines() :
      op->vtkStreamTracer::GetSurfaceStreamlines());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetSurfaceStreamlines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSurfaceStreamlines");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSurfaceStreamlines(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetSurfaceStreamlines(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SurfaceStreamlinesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceStreamlinesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceStreamlinesOn();
    }
    else
    {
      op->vtkStreamTracer::SurfaceStreamlinesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SurfaceStreamlinesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SurfaceStreamlinesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SurfaceStreamlinesOff();
    }
    else
    {
      op->vtkStreamTracer::SurfaceStreamlinesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirection(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMinValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirectionMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirectionMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirectionMaxValue() :
      op->vtkStreamTracer::GetIntegrationDirectionMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetIntegrationDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIntegrationDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetIntegrationDirection() :
      op->vtkStreamTracer::GetIntegrationDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToForward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToForward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToForward();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToForward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBackward(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBackward");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBackward();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToBackward();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetIntegrationDirectionToBoth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetIntegrationDirectionToBoth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetIntegrationDirectionToBoth();
    }
    else
    {
      op->vtkStreamTracer::SetIntegrationDirectionToBoth();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeVorticity(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetComputeVorticity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetComputeVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetComputeVorticity() :
      op->vtkStreamTracer::GetComputeVorticity());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRotationScale(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetRotationScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetRotationScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRotationScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRotationScale() :
      op->vtkStreamTracer::GetRotationScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorPrototype(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorPrototype");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkAbstractInterpolatedVelocityField *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractInterpolatedVelocityField"))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorPrototype(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorPrototype(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetInterpolatorType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInterpolatorType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInterpolatorType(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetInterpolatorType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetForceSerialExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetForceSerialExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetForceSerialExecution() :
      op->vtkStreamTracer::GetForceSerialExecution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_SetForceSerialExecution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetForceSerialExecution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetForceSerialExecution(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetForceSerialExecution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_ForceSerialExecutionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceSerialExecutionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceSerialExecutionOn();
    }
    else
    {
      op->vtkStreamTracer::ForceSerialExecutionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_ForceSerialExecutionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ForceSerialExecutionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ForceSerialExecutionOff();
    }
    else
    {
      op->vtkStreamTracer::ForceSerialExecutionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_ConvertIntervals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ConvertIntervals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  double temp0;
  double temp1;
  double temp2;
  int temp3;
  double temp4;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4))
  {
    if (ap.IsBound())
    {
      op->ConvertIntervals(temp0, temp1, temp2, temp3, temp4);
    }
    else
    {
      op->vtkStreamTracer::ConvertIntervals(temp0, temp1, temp2, temp3, temp4);
    }

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(0, temp0);
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
PyvtkStreamTracer_GenerateNormals(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateNormals");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkPolyData *temp0 = nullptr;
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(2*size1);
  double *temp1 = store1.Data();
  double *save1 = (size1 == 0 ? nullptr : temp1 + size1);
  const char *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkPolyData") &&
      ap.GetArray(temp1, size1) &&
      ap.GetValue(temp2))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateNormals(temp0, temp1, temp2);
    }
    else
    {
      op->vtkStreamTracer::GenerateNormals(temp0, temp1, temp2);
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
PyvtkStreamTracer_CalculateVorticity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CalculateVorticity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  vtkGenericCell *temp0 = nullptr;
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  vtkDoubleArray *temp2 = nullptr;
  const size_t size3 = 3;
  double temp3[3];
  double save3[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkDoubleArray") &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp1, save1, size1);
    vtkPythonArgs::Save(temp3, save3, size3);

    if (ap.IsBound())
    {
      op->CalculateVorticity(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkStreamTracer::CalculateVorticity(temp0, temp1, temp2, temp3);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
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
PyvtkStreamTracer_SetUseLocalSeedSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseLocalSeedSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseLocalSeedSource(temp0);
    }
    else
    {
      op->vtkStreamTracer::SetUseLocalSeedSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_GetUseLocalSeedSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseLocalSeedSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseLocalSeedSource() :
      op->vtkStreamTracer::GetUseLocalSeedSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_UseLocalSeedSourceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLocalSeedSourceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLocalSeedSourceOn();
    }
    else
    {
      op->vtkStreamTracer::UseLocalSeedSourceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkStreamTracer_UseLocalSeedSourceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseLocalSeedSourceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkStreamTracer *op = static_cast<vtkStreamTracer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseLocalSeedSourceOff();
    }
    else
    {
      op->vtkStreamTracer::UseLocalSeedSourceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkStreamTracer_Methods[] = {
  {"IsTypeOf", PyvtkStreamTracer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkStreamTracer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkStreamTracer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkStreamTracer\nC++: static vtkStreamTracer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkStreamTracer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkStreamTracer\nC++: vtkStreamTracer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkStreamTracer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkStreamTracer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetStartPosition", PyvtkStreamTracer_SetStartPosition, METH_VARARGS,
   "SetStartPosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetStartPosition(double _arg1, double _arg2,\n    double _arg3)\nSetStartPosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetStartPosition(const double _arg[3])\n\nSpecify the starting point (seed) of a streamline in the global\ncoordinate system. Search must be performed to find the initial\ncell from which to start integration.\n"},
  {"GetStartPosition", PyvtkStreamTracer_GetStartPosition, METH_VARARGS,
   "GetStartPosition(self) -> (float, float, float)\nC++: virtual double *GetStartPosition()\n\n"},
  {"SetSourceData", PyvtkStreamTracer_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkDataSet) -> None\nC++: void SetSourceData(vtkDataSet *source)\n\nSpecify the source object used to generate starting points\n(seeds). Note that this method does not connect the pipeline. The\nalgorithm will work on the input data as it is without updating\nthe producer of the data. See SetSourceConnection for connecting\nthe pipeline.\n"},
  {"GetSource", PyvtkStreamTracer_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkDataSet\nC++: vtkDataSet *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkStreamTracer_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the source object used to generate starting points\n(seeds). This method connects to the pipeline: the Source will be\nupdated and the results used as streamline seeds.\n"},
  {"SetIntegrator", PyvtkStreamTracer_SetIntegrator, METH_VARARGS,
   "SetIntegrator(self, __a:vtkInitialValueProblemSolver) -> None\nC++: void SetIntegrator(vtkInitialValueProblemSolver *)\n\nSet/get the integrator type to be used for streamline generation.\nThe object passed is not actually used but is cloned with\nNewInstance in the process of integration  (prototype pattern).\nThe default is Runge-Kutta2. The integrator can also be changed\nusing SetIntegratorType. The recognized solvers are: RUNGE_KUTTA2\n = 0 RUNGE_KUTTA4  = 1 RUNGE_KUTTA45 = 2\n"},
  {"GetIntegrator", PyvtkStreamTracer_GetIntegrator, METH_VARARGS,
   "GetIntegrator(self) -> vtkInitialValueProblemSolver\nC++: virtual vtkInitialValueProblemSolver *GetIntegrator()\n\n"},
  {"SetIntegratorType", PyvtkStreamTracer_SetIntegratorType, METH_VARARGS,
   "SetIntegratorType(self, type:int) -> None\nC++: void SetIntegratorType(int type)\n\n"},
  {"GetIntegratorType", PyvtkStreamTracer_GetIntegratorType, METH_VARARGS,
   "GetIntegratorType(self) -> int\nC++: int GetIntegratorType()\n\n"},
  {"SetIntegratorTypeToRungeKutta2", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta2, METH_VARARGS,
   "SetIntegratorTypeToRungeKutta2(self) -> None\nC++: void SetIntegratorTypeToRungeKutta2()\n\n"},
  {"SetIntegratorTypeToRungeKutta4", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta4, METH_VARARGS,
   "SetIntegratorTypeToRungeKutta4(self) -> None\nC++: void SetIntegratorTypeToRungeKutta4()\n\n"},
  {"SetIntegratorTypeToRungeKutta45", PyvtkStreamTracer_SetIntegratorTypeToRungeKutta45, METH_VARARGS,
   "SetIntegratorTypeToRungeKutta45(self) -> None\nC++: void SetIntegratorTypeToRungeKutta45()\n\n"},
  {"SetInterpolatorTypeToDataSetPointLocator", PyvtkStreamTracer_SetInterpolatorTypeToDataSetPointLocator, METH_VARARGS,
   "SetInterpolatorTypeToDataSetPointLocator(self) -> None\nC++: void SetInterpolatorTypeToDataSetPointLocator()\n\nSet the velocity field interpolator type to one that uses a point\nlocator to perform local spatial searching. Typically a point\nlocator is faster than searches with a cell locator, but it may\nnot always find the correct cells enclosing a point. This is\nparticularly true with meshes that are disjoint at seams, or abut\nmeshes in an incompatible manner. By default (and if a\nInterpolationPrototype is not set), a point locator is used.\n"},
  {"SetInterpolatorTypeToCellLocator", PyvtkStreamTracer_SetInterpolatorTypeToCellLocator, METH_VARARGS,
   "SetInterpolatorTypeToCellLocator(self) -> None\nC++: void SetInterpolatorTypeToCellLocator()\n\nSet the velocity field interpolator type to one that uses a cell\nlocator to perform spatial searching. Using a cell locator should\nalways return the correct results, but it can be much slower that\npoint locator-based searches.\n"},
  {"SetMaximumPropagation", PyvtkStreamTracer_SetMaximumPropagation, METH_VARARGS,
   "SetMaximumPropagation(self, _arg:float) -> None\nC++: virtual void SetMaximumPropagation(double _arg)\n\nSpecify the maximum length of a streamline expressed in\nLENGTH_UNIT.\n"},
  {"GetMaximumPropagation", PyvtkStreamTracer_GetMaximumPropagation, METH_VARARGS,
   "GetMaximumPropagation(self) -> float\nC++: virtual double GetMaximumPropagation()\n\n"},
  {"SetIntegrationStepUnit", PyvtkStreamTracer_SetIntegrationStepUnit, METH_VARARGS,
   "SetIntegrationStepUnit(self, unit:int) -> None\nC++: void SetIntegrationStepUnit(int unit)\n\nSpecify a uniform integration step unit for\nMinimumIntegrationStep, InitialIntegrationStep, and\nMaximumIntegrationStep. NOTE: The valid unit is now limited to\nonly LENGTH_UNIT (1) and CELL_LENGTH_UNIT (2), EXCLUDING the\npreviously-supported TIME_UNIT.\n"},
  {"GetIntegrationStepUnit", PyvtkStreamTracer_GetIntegrationStepUnit, METH_VARARGS,
   "GetIntegrationStepUnit(self) -> int\nC++: int GetIntegrationStepUnit()\n\n"},
  {"SetInitialIntegrationStep", PyvtkStreamTracer_SetInitialIntegrationStep, METH_VARARGS,
   "SetInitialIntegrationStep(self, _arg:float) -> None\nC++: virtual void SetInitialIntegrationStep(double _arg)\n\nSpecify the Initial step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (either\nthe starting size for an adaptive integrator, e.g., RK45, or the\nconstant / fixed size for non-adaptive ones, i.e., RK2 and RK4)\n"},
  {"GetInitialIntegrationStep", PyvtkStreamTracer_GetInitialIntegrationStep, METH_VARARGS,
   "GetInitialIntegrationStep(self) -> float\nC++: virtual double GetInitialIntegrationStep()\n\n"},
  {"SetMinimumIntegrationStep", PyvtkStreamTracer_SetMinimumIntegrationStep, METH_VARARGS,
   "SetMinimumIntegrationStep(self, _arg:float) -> None\nC++: virtual void SetMinimumIntegrationStep(double _arg)\n\nSpecify the Minimum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"GetMinimumIntegrationStep", PyvtkStreamTracer_GetMinimumIntegrationStep, METH_VARARGS,
   "GetMinimumIntegrationStep(self) -> float\nC++: virtual double GetMinimumIntegrationStep()\n\n"},
  {"SetMaximumIntegrationStep", PyvtkStreamTracer_SetMaximumIntegrationStep, METH_VARARGS,
   "SetMaximumIntegrationStep(self, _arg:float) -> None\nC++: virtual void SetMaximumIntegrationStep(double _arg)\n\nSpecify the Maximum step size used for line integration,\nexpressed in: LENGTH_UNIT      = 1 CELL_LENGTH_UNIT = 2 (Only\nvalid for an adaptive integrator, e.g., RK45)\n"},
  {"GetMaximumIntegrationStep", PyvtkStreamTracer_GetMaximumIntegrationStep, METH_VARARGS,
   "GetMaximumIntegrationStep(self) -> float\nC++: virtual double GetMaximumIntegrationStep()\n\n"},
  {"SetMaximumError", PyvtkStreamTracer_SetMaximumError, METH_VARARGS,
   "SetMaximumError(self, _arg:float) -> None\nC++: virtual void SetMaximumError(double _arg)\n\nSpecify the maximum error tolerated throughout streamline\nintegration.\n"},
  {"GetMaximumError", PyvtkStreamTracer_GetMaximumError, METH_VARARGS,
   "GetMaximumError(self) -> float\nC++: virtual double GetMaximumError()\n\n"},
  {"SetMaximumNumberOfSteps", PyvtkStreamTracer_SetMaximumNumberOfSteps, METH_VARARGS,
   "SetMaximumNumberOfSteps(self, _arg:int) -> None\nC++: virtual void SetMaximumNumberOfSteps(vtkIdType _arg)\n\nSpecify the maximum number of steps for integrating a streamline.\nNote that the number of steps generated is always one greater\nthan MaximumNumberOfSteps. So if MaximumNumberOfSteps==0, then\nonly one step will be generated. This is useful for advection\nsituations when the stream tracer is to be propagated just one\nstep at a time (e.g., see vtkStreamSurface which depends on this\nbehavior).\n"},
  {"GetMaximumNumberOfSteps", PyvtkStreamTracer_GetMaximumNumberOfSteps, METH_VARARGS,
   "GetMaximumNumberOfSteps(self) -> int\nC++: virtual vtkIdType GetMaximumNumberOfSteps()\n\n"},
  {"SetTerminalSpeed", PyvtkStreamTracer_SetTerminalSpeed, METH_VARARGS,
   "SetTerminalSpeed(self, _arg:float) -> None\nC++: virtual void SetTerminalSpeed(double _arg)\n\nSpecify the terminal speed value, below which streamline\nintegration is terminated.\n"},
  {"GetTerminalSpeed", PyvtkStreamTracer_GetTerminalSpeed, METH_VARARGS,
   "GetTerminalSpeed(self) -> float\nC++: virtual double GetTerminalSpeed()\n\n"},
  {"GetSurfaceStreamlines", PyvtkStreamTracer_GetSurfaceStreamlines, METH_VARARGS,
   "GetSurfaceStreamlines(self) -> bool\nC++: virtual bool GetSurfaceStreamlines()\n\nSpecify whether streamlines should be computed on a surface.\n"},
  {"SetSurfaceStreamlines", PyvtkStreamTracer_SetSurfaceStreamlines, METH_VARARGS,
   "SetSurfaceStreamlines(self, _arg:bool) -> None\nC++: virtual void SetSurfaceStreamlines(bool _arg)\n\n"},
  {"SurfaceStreamlinesOn", PyvtkStreamTracer_SurfaceStreamlinesOn, METH_VARARGS,
   "SurfaceStreamlinesOn(self) -> None\nC++: virtual void SurfaceStreamlinesOn()\n\n"},
  {"SurfaceStreamlinesOff", PyvtkStreamTracer_SurfaceStreamlinesOff, METH_VARARGS,
   "SurfaceStreamlinesOff(self) -> None\nC++: virtual void SurfaceStreamlinesOff()\n\n"},
  {"SetIntegrationDirection", PyvtkStreamTracer_SetIntegrationDirection, METH_VARARGS,
   "SetIntegrationDirection(self, _arg:int) -> None\nC++: virtual void SetIntegrationDirection(int _arg)\n\nSpecify whether the streamline is integrated in the upstream or\ndownstream direction, or in both directions. (If integrated in\nboth directions, two separate streamlines are generated, both of\nwhich which start at the seed point with one traveling in the\nforward direction, and one in the backward direction.)\n"},
  {"GetIntegrationDirectionMinValue", PyvtkStreamTracer_GetIntegrationDirectionMinValue, METH_VARARGS,
   "GetIntegrationDirectionMinValue(self) -> int\nC++: virtual int GetIntegrationDirectionMinValue()\n\n"},
  {"GetIntegrationDirectionMaxValue", PyvtkStreamTracer_GetIntegrationDirectionMaxValue, METH_VARARGS,
   "GetIntegrationDirectionMaxValue(self) -> int\nC++: virtual int GetIntegrationDirectionMaxValue()\n\n"},
  {"GetIntegrationDirection", PyvtkStreamTracer_GetIntegrationDirection, METH_VARARGS,
   "GetIntegrationDirection(self) -> int\nC++: virtual int GetIntegrationDirection()\n\n"},
  {"SetIntegrationDirectionToForward", PyvtkStreamTracer_SetIntegrationDirectionToForward, METH_VARARGS,
   "SetIntegrationDirectionToForward(self) -> None\nC++: void SetIntegrationDirectionToForward()\n\n"},
  {"SetIntegrationDirectionToBackward", PyvtkStreamTracer_SetIntegrationDirectionToBackward, METH_VARARGS,
   "SetIntegrationDirectionToBackward(self) -> None\nC++: void SetIntegrationDirectionToBackward()\n\n"},
  {"SetIntegrationDirectionToBoth", PyvtkStreamTracer_SetIntegrationDirectionToBoth, METH_VARARGS,
   "SetIntegrationDirectionToBoth(self) -> None\nC++: void SetIntegrationDirectionToBoth()\n\n"},
  {"SetComputeVorticity", PyvtkStreamTracer_SetComputeVorticity, METH_VARARGS,
   "SetComputeVorticity(self, _arg:bool) -> None\nC++: virtual void SetComputeVorticity(bool _arg)\n\nTurn on/off vorticity computation at streamline points (necessary\nfor generating proper stream-ribbons using the vtkRibbonFilter).\n"},
  {"GetComputeVorticity", PyvtkStreamTracer_GetComputeVorticity, METH_VARARGS,
   "GetComputeVorticity(self) -> bool\nC++: virtual bool GetComputeVorticity()\n\n"},
  {"SetRotationScale", PyvtkStreamTracer_SetRotationScale, METH_VARARGS,
   "SetRotationScale(self, _arg:float) -> None\nC++: virtual void SetRotationScale(double _arg)\n\nThis can be used to scale the rate with which the streamribbons\ntwist. The default is 1.\n"},
  {"GetRotationScale", PyvtkStreamTracer_GetRotationScale, METH_VARARGS,
   "GetRotationScale(self) -> float\nC++: virtual double GetRotationScale()\n\n"},
  {"SetInterpolatorPrototype", PyvtkStreamTracer_SetInterpolatorPrototype, METH_VARARGS,
   "SetInterpolatorPrototype(self,\n    ivf:vtkAbstractInterpolatedVelocityField) -> None\nC++: void SetInterpolatorPrototype(\n    vtkAbstractInterpolatedVelocityField *ivf)\n\nThe object used to interpolate the velocity field during\nintegration is of the same class as this prototype. The\nperformance of streamline generations can be significantly\naffected by the choice of the interpolator, particularly its use\nof the locator to use.\n\nFor non AMR datasets, initialize a\nvtkCompositeInterpolatedVelocityField and set the\nFindCellStrategyType.\n"},
  {"SetInterpolatorType", PyvtkStreamTracer_SetInterpolatorType, METH_VARARGS,
   "SetInterpolatorType(self, interpType:int) -> None\nC++: void SetInterpolatorType(int interpType)\n\nSet the type of the velocity field interpolator to determine\nwhether INTERPOLATOR_WITH_DATASET_POINT_LOCATOR or\nINTERPOLATOR_WITH_CELL_LOCATOR is employed for locating cells\nduring streamline integration. The latter (adopting\nvtkAbstractCellLocator sub-classes such as vtkCellLocator and\nvtkModifiedBSPTree) is more robust than the former (through\nvtkDataSet / vtkPointSet::FindCell() coupled with\nvtkPointLocator). However the former can be much faster and\nproduce adequate results.\n"},
  {"GetForceSerialExecution", PyvtkStreamTracer_GetForceSerialExecution, METH_VARARGS,
   "GetForceSerialExecution(self) -> bool\nC++: virtual bool GetForceSerialExecution()\n\nForce the filter to run stream tracer advection in serial. This\naffects the filter only if more than one streamline is to be\ngenerated.\n"},
  {"SetForceSerialExecution", PyvtkStreamTracer_SetForceSerialExecution, METH_VARARGS,
   "SetForceSerialExecution(self, _arg:bool) -> None\nC++: virtual void SetForceSerialExecution(bool _arg)\n\n"},
  {"ForceSerialExecutionOn", PyvtkStreamTracer_ForceSerialExecutionOn, METH_VARARGS,
   "ForceSerialExecutionOn(self) -> None\nC++: virtual void ForceSerialExecutionOn()\n\n"},
  {"ForceSerialExecutionOff", PyvtkStreamTracer_ForceSerialExecutionOff, METH_VARARGS,
   "ForceSerialExecutionOff(self) -> None\nC++: virtual void ForceSerialExecutionOff()\n\n"},
  {"ConvertIntervals", PyvtkStreamTracer_ConvertIntervals, METH_VARARGS,
   "ConvertIntervals(self, step:float, minStep:float, maxStep:float,\n    direction:int, cellLength:float) -> None\nC++: void ConvertIntervals(double &step, double &minStep,\n    double &maxStep, int direction, double cellLength)\n\nThe following methods should not be called by the user. They\nserve as integration bridges between this vtkStreamTracer class\nand classes defined and implemented in anonymous namespace.\n\nHelper method to convert between length scales. Made public so\ninternal threaded classes in anonymous namespace can invoke the\nmethod.\n"},
  {"GenerateNormals", PyvtkStreamTracer_GenerateNormals, METH_VARARGS,
   "GenerateNormals(self, output:vtkPolyData, firstNormal:[float,\n    ...], vecName:str) -> None\nC++: void GenerateNormals(vtkPolyData *output,\n    double *firstNormal, const char *vecName)\n\nHelper methods to generate normals on streamlines. Made public so\ninternal threaded classes in anonymous namespace can invoke the\nmethods.\n"},
  {"CalculateVorticity", PyvtkStreamTracer_CalculateVorticity, METH_VARARGS,
   "CalculateVorticity(self, cell:vtkGenericCell, pcoords:[float,\n    float, float], cellVectors:vtkDoubleArray, vorticity:[float,\n    float, float]) -> None\nC++: void CalculateVorticity(vtkGenericCell *cell,\n    double pcoords[3], vtkDoubleArray *cellVectors,\n    double vorticity[3])\n\n"},
  {"SetUseLocalSeedSource", PyvtkStreamTracer_SetUseLocalSeedSource, METH_VARARGS,
   "SetUseLocalSeedSource(self, _arg:bool) -> None\nC++: virtual void SetUseLocalSeedSource(bool _arg)\n\nIf true the filter considers that the whole seed source is\navailable on all ranks. Else the filter will aggregate all seed\nsources from all ranks and merge their points.\n\nThis property only makes sense when the filter is parallelized\nand is a no-op for its sequential version. However, this member\nfunction needs to be defined in this class to maintain a uniform\ninterface between vtkStreamTracer and its parallel override\nclass, vtkPStreamTracer. Default is true.\n"},
  {"GetUseLocalSeedSource", PyvtkStreamTracer_GetUseLocalSeedSource, METH_VARARGS,
   "GetUseLocalSeedSource(self) -> bool\nC++: virtual bool GetUseLocalSeedSource()\n\n"},
  {"UseLocalSeedSourceOn", PyvtkStreamTracer_UseLocalSeedSourceOn, METH_VARARGS,
   "UseLocalSeedSourceOn(self) -> None\nC++: virtual void UseLocalSeedSourceOn()\n\n"},
  {"UseLocalSeedSourceOff", PyvtkStreamTracer_UseLocalSeedSourceOff, METH_VARARGS,
   "UseLocalSeedSourceOff(self) -> None\nC++: virtual void UseLocalSeedSourceOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkStreamTracer_Doc =
  "vtkStreamTracer - Streamline generator\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkStreamTracer is a filter that integrates a vector field to\n"
  "generate streamlines. The integration is performed using a specified\n"
  "integrator, by default Runge-Kutta2.\n\n"
  "vtkStreamTracer produces polylines as the output, with each cell\n"
  "(i.e., polyline) representing a streamline. The attribute values\n"
  "associated with each streamline are stored in the cell data, whereas\n"
  "those associated with streamline-points are stored in the point data.\n\n"
  "vtkStreamTracer supports forward (the default), backward, and\n"
  "combined (i.e., BOTH) integration. The length of a streamline is\n"
  "governed by specifying a maximum value either in physical arc length\n"
  "or in (local) cell length. Otherwise, the integration terminates upon\n"
  "exiting the flow field domain, or if the particle speed is reduced to\n"
  "a value less than a specified terminal speed, or when a maximum\n"
  "number of steps is completed. The specific reason for the termination\n"
  "is stored in a cell array named ReasonForTermination.\n\n"
  "Note that normalized vectors are adopted in streamline integration,\n"
  "which achieves high numerical accuracy/smoothness of flow lines that\n"
  "is particularly guaranteed for Runge-Kutta45 with adaptive step size\n"
  "and error control). In support of this feature, the underlying step\n"
  "size is ALWAYS in arc length unit (LENGTH_UNIT) while the 'real' time\n"
  "interval (virtual for steady flows) that a particle actually takes to\n"
  "trave in a single step is obtained by dividing the arc length by the\n"
  "LOCAL speed. The overall elapsed time (i.e., the life span) of the\n"
  "particle is the sum of those individual step-wise time intervals.\n\n"
  "The quality of streamline integration can be controlled by setting\n"
  "the initial integration step (InitialIntegrationStep), particularly\n"
  "for Runge-Kutta2 and Runge-Kutta4 (with a fixed step size), and in\n"
  "the case of Runge-Kutta45 (with an adaptive step size and error\n"
  "control) the minimum integration step, the maximum integration step,\n"
  "and the maximum error. These steps are in either LENGTH_UNIT or\n"
  "CELL_LENGTH_UNIT while the error is in physical arc length. For the\n"
  "former two integrators, there is a trade-off between integration\n"
  "speed and streamline quality.\n\n"
  "The integration time, vorticity, rotation and angular velocity are\n"
  "stored in point data arrays named \"IntegrationTime\", \"Vorticity\",\n"
  "\"Rotation\" and \"AngularVelocity\", respectively (vorticity, rotation\n"
  "and angular velocity are computed only when ComputeVorticity is on).\n"
  "All point data attributes in the source dataset are interpolated on\n"
  "the new streamline points.\n\n"
  "vtkStreamTracer supports integration through any type of dataset.\n"
  "Thus if the dataset contains 2D cells like polygons or triangles, the\n"
  "integration is constrained to lie on the surface defined by 2D cells.\n\n"
  "The starting point, or the so-called 'seed', of a streamline may be\n"
  "set in two different ways. Starting from global x-y-z \"position\"\n"
  "allows you to start a single trace at a specified x-y-z coordinate.\n"
  "If you specify a source object, traces will be generated from each\n"
  "point in the source that is inside the dataset. Note that if the\n"
  "integration direction is BOTH, then potentially 2N streamlines will\n"
  "be generated given N seed points.\n\n"
  "ote This class has been threaded using vtkSMPTools. Each separate\n"
  "streamline (corresponding to the initial seeds) is processed in a\n"
  "separate thread. Consequently, if threading is enabled and many\n"
  "streamlines are generated, significant performance improvement is\n"
  "possible.\n\n"
  "ote Field data is shallow copied to the output. When the input is a\n"
  "composite data set, field data associated with the root block is\n"
  "shallow- copied to the output vtkPolyData.\n\n"
  "@sa\n"
  "vtkRibbonFilter vtkRuledSurfaceFilter vtkInitialValueProblemSolver\n"
  "vtkRungeKutta2 vtkRungeKutta4 vtkRungeKutta45 vtkParticleTracerBase\n"
  "vtkParticleTracer vtkParticlePathFilter vtkStreaklineFilter\n"
  "vtkAbstractInterpolatedVelocityField\n"
  "vtkCompositeInterpolatedVelocityField vtkAMRInterpolatedVelocityField\n"
  "vtkSMPTools vtkPStreamTracer\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkStreamTracer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersFlowPaths.vtkStreamTracer", // tp_name
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
  PyvtkStreamTracer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkStreamTracer_StaticNew()
{
  return vtkStreamTracer::New();
}

PyObject *PyvtkStreamTracer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkStreamTracer_Type, PyvtkStreamTracer_Methods,
    "vtkStreamTracer",
 &PyvtkStreamTracer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkStreamTracer_Units_Type);
  PyVTKEnum_Add(&PyvtkStreamTracer_Units_Type, "vtkStreamTracer.Units");

  o = (PyObject *)&PyvtkStreamTracer_Units_Type;
  if (PyDict_SetItemString(d, "Units", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStreamTracer_Solvers_Type);
  PyVTKEnum_Add(&PyvtkStreamTracer_Solvers_Type, "vtkStreamTracer.Solvers");

  o = (PyObject *)&PyvtkStreamTracer_Solvers_Type;
  if (PyDict_SetItemString(d, "Solvers", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkStreamTracer_ReasonForTermination_Type);
  PyVTKEnum_Add(&PyvtkStreamTracer_ReasonForTermination_Type, "vtkStreamTracer.ReasonForTermination");

  o = (PyObject *)&PyvtkStreamTracer_ReasonForTermination_Type;
  if (PyDict_SetItemString(d, "ReasonForTermination", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 2; c++)
  {
    typedef vtkStreamTracer::Units cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[2] = {
        { "LENGTH_UNIT", vtkStreamTracer::LENGTH_UNIT },
        { "CELL_LENGTH_UNIT", vtkStreamTracer::CELL_LENGTH_UNIT },
      };

    o = PyvtkStreamTracer_Units_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    typedef vtkStreamTracer::Solvers cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[5] = {
        { "RUNGE_KUTTA2", vtkStreamTracer::RUNGE_KUTTA2 },
        { "RUNGE_KUTTA4", vtkStreamTracer::RUNGE_KUTTA4 },
        { "RUNGE_KUTTA45", vtkStreamTracer::RUNGE_KUTTA45 },
        { "NONE", vtkStreamTracer::NONE },
        { "UNKNOWN", vtkStreamTracer::UNKNOWN },
      };

    o = PyvtkStreamTracer_Solvers_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkStreamTracer::ReasonForTermination cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "OUT_OF_DOMAIN", vtkStreamTracer::OUT_OF_DOMAIN },
        { "NOT_INITIALIZED", vtkStreamTracer::NOT_INITIALIZED },
        { "UNEXPECTED_VALUE", vtkStreamTracer::UNEXPECTED_VALUE },
        { "OUT_OF_LENGTH", vtkStreamTracer::OUT_OF_LENGTH },
        { "OUT_OF_STEPS", vtkStreamTracer::OUT_OF_STEPS },
        { "STAGNATION", vtkStreamTracer::STAGNATION },
        { "FIXED_REASONS_FOR_TERMINATION_COUNT", vtkStreamTracer::FIXED_REASONS_FOR_TERMINATION_COUNT },
      };

    o = PyvtkStreamTracer_ReasonForTermination_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  for (int c = 0; c < 5; c++)
  {
    static const struct { const char *name; int value; }
      constants[5] = {
        { "FORWARD", vtkStreamTracer::FORWARD },
        { "BACKWARD", vtkStreamTracer::BACKWARD },
        { "BOTH", vtkStreamTracer::BOTH },
        { "INTERPOLATOR_WITH_DATASET_POINT_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_DATASET_POINT_LOCATOR },
        { "INTERPOLATOR_WITH_CELL_LOCATOR", vtkStreamTracer::INTERPOLATOR_WITH_CELL_LOCATOR },
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

void PyVTKAddFile_vtkStreamTracer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkIntervalInformation_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkIntervalInformation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkStreamTracer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkStreamTracer", o) != 0)
  {
    Py_DECREF(o);
  }

}

