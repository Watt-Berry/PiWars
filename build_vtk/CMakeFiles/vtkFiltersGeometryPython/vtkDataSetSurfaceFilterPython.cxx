// python wrapper for vtkDataSetSurfaceFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetSurfaceFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetSurfaceFilter(PyObject *dict); }
static PyMethodDef PyvtkFastGeomQuadStruct_Methods[] = {
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFastGeomQuadStruct");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkFastGeomQuadStruct *op = new vtkFastGeomQuadStruct();

    result = PyVTKSpecialObject_New("vtkFastGeomQuadStruct", op);
  }

  return result;
}

static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkFastGeomQuadStruct");

  vtkFastGeomQuadStruct *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkFastGeomQuadStruct"))
  {
    vtkFastGeomQuadStruct *op = new vtkFastGeomQuadStruct(*temp0);

    result = PyVTKSpecialObject_New("vtkFastGeomQuadStruct", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods[] = {
  {"vtkFastGeomQuadStruct", PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2, METH_VARARGS,
   "@W vtkFastGeomQuadStruct"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s1(self, args);
    case 1:
      return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkFastGeomQuadStruct");
  return nullptr;
}


static const char *PyvtkFastGeomQuadStruct_Doc =

  "vtkFastGeomQuadStruct() -> vtkFastGeomQuadStruct\nC++: vtkFastGeomQuadStruct()\nvtkFastGeomQuadStruct(__a:vtkFastGeomQuadStruct)\n    -> vtkFastGeomQuadStruct\nC++: vtkFastGeomQuadStruct(const &vtkFastGeomQuadStruct)\n""\n"
  "vtkFastGeomQuadStruct - no description provided.\n\n"
;

static PyObject *
PyvtkFastGeomQuadStruct_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct(nullptr, args);
}

static void PyvtkFastGeomQuadStruct_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkFastGeomQuadStruct *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkFastGeomQuadStruct_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFastGeomQuadStruct_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkFastGeomQuadStruct", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkFastGeomQuadStruct_Delete, // tp_dealloc
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
  PyvtkFastGeomQuadStruct_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkFastGeomQuadStruct_Doc, // tp_doc
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
  PyvtkFastGeomQuadStruct_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkFastGeomQuadStruct_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkFastGeomQuadStruct(*static_cast<const vtkFastGeomQuadStruct*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkFastGeomQuadStruct_TypeNew
extern "C" { PyObject *PyvtkFastGeomQuadStruct_TypeNew(); }
#define DECLARED_PyvtkFastGeomQuadStruct_TypeNew
#endif

PyObject *PyvtkFastGeomQuadStruct_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkFastGeomQuadStruct_Type,
    PyvtkFastGeomQuadStruct_Methods,
    PyvtkFastGeomQuadStruct_vtkFastGeomQuadStruct_Methods,
    &PyvtkFastGeomQuadStruct_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkDataSetSurfaceFilter_ClassNew(); }


static PyObject *
PyvtkDataSetSurfaceFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetSurfaceFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetSurfaceFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetSurfaceFilter *tempr = vtkDataSetSurfaceFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetSurfaceFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetSurfaceFilter::NewInstance());

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
PyvtkDataSetSurfaceFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetSurfaceFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetSurfaceFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPieceInvariant(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkDataSetSurfaceFilter::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughCellIds(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkDataSetSurfaceFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPassThroughPointIds(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkDataSetSurfaceFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetFastMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFastMode(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetFastMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetFastMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFastMode() :
      op->vtkDataSetSurfaceFilter::GetFastMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_FastModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastModeOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::FastModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_FastModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastModeOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::FastModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalCellIdsName(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetOriginalCellIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalCellIdsName() :
      op->vtkDataSetSurfaceFilter::GetOriginalCellIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOriginalPointIdsName(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetOriginalPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsName() :
      op->vtkDataSetSurfaceFilter::GetOriginalPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNonlinearSubdivisionLevel(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetNonlinearSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonlinearSubdivisionLevel() :
      op->vtkDataSetSurfaceFilter::GetNonlinearSubdivisionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_SetDelegation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDelegation(temp0);
    }
    else
    {
      op->vtkDataSetSurfaceFilter::SetDelegation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_GetDelegation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDelegation() :
      op->vtkDataSetSurfaceFilter::GetDelegation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_DelegationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DelegationOn();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::DelegationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_DelegationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DelegationOff();
    }
    else
    {
      op->vtkDataSetSurfaceFilter::DelegationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkDataSetSurfaceFilter::StructuredExecute(temp0, temp1, temp2, temp3));

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
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3))
  {
    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkDataSetSurfaceFilter::StructuredExecute(temp0, temp1, temp2, temp3));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetSurfaceFilter_StructuredExecute_Methods[] = {
  {"StructuredExecute", PyvtkDataSetSurfaceFilter_StructuredExecute_s1, METH_VARARGS,
   "@VVPP *vtkDataSet *vtkPolyData *k *k"},
  {"StructuredExecute", PyvtkDataSetSurfaceFilter_StructuredExecute_s2, METH_VARARGS,
   "@VVPP *vtkDataSet *vtkPolyData *i *i"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetSurfaceFilter_StructuredExecute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetSurfaceFilter_StructuredExecute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 4:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StructuredExecute");
  return nullptr;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->UnstructuredGridExecute(temp0, temp1) :
      op->vtkDataSetSurfaceFilter::UnstructuredGridExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_DataSetExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->DataSetExecute(temp0, temp1) :
      op->vtkDataSetSurfaceFilter::DataSetExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetSurfaceFilter_UniformGridExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<long long> store2(2*size2);
  long long *temp2 = store2.Data();
  long long *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<long long> store3(2*size3);
  long long *temp3 = store3.Data();
  long long *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  const size_t size4 = 6;
  bool temp4[6];
  bool save4[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->UniformGridExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataSetSurfaceFilter::UniformGridExecute(temp0, temp1, temp2, temp3, temp4));

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
PyvtkDataSetSurfaceFilter_UniformGridExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UniformGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetSurfaceFilter *op = static_cast<vtkDataSetSurfaceFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(size2);
  int *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<int> store3(size3);
  int *temp3 = store3.Data();
  const size_t size4 = 6;
  bool temp4[6];
  bool save4[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetArray(temp4, size4))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->UniformGridExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkDataSetSurfaceFilter::UniformGridExecute(temp0, temp1, temp2, temp3, temp4));

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

static PyMethodDef PyvtkDataSetSurfaceFilter_UniformGridExecute_Methods[] = {
  {"UniformGridExecute", PyvtkDataSetSurfaceFilter_UniformGridExecute_s1, METH_VARARGS,
   "@VVPPP *vtkDataSet *vtkPolyData *k *k *q"},
  {"UniformGridExecute", PyvtkDataSetSurfaceFilter_UniformGridExecute_s2, METH_VARARGS,
   "@VVPPP *vtkDataSet *vtkPolyData *i *i *q"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkDataSetSurfaceFilter_UniformGridExecute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkDataSetSurfaceFilter_UniformGridExecute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "UniformGridExecute");
  return nullptr;
}

static PyMethodDef PyvtkDataSetSurfaceFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetSurfaceFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetSurfaceFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetSurfaceFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetSurfaceFilter\nC++: static vtkDataSetSurfaceFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetSurfaceFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetSurfaceFilter\nC++: vtkDataSetSurfaceFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetSurfaceFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetSurfaceFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPieceInvariant", PyvtkDataSetSurfaceFilter_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:int) -> None\nC++: virtual void SetPieceInvariant(int _arg)\n\nIf PieceInvariant is true, vtkDataSetSurfaceFilter requests 1\nghost level from input in order to remove internal surface that\nare between processes. False by default.\n"},
  {"GetPieceInvariant", PyvtkDataSetSurfaceFilter_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> int\nC++: virtual int GetPieceInvariant()\n\n"},
  {"SetPassThroughCellIds", PyvtkDataSetSurfaceFilter_SetPassThroughCellIds, METH_VARARGS,
   "SetPassThroughCellIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nIf on, the output polygonal dataset will have a celldata array\nthat holds the cell index of the original 3D cell that produced\neach output cell. This is useful for cell picking. The default is\noff to conserve memory.\n"},
  {"GetPassThroughCellIds", PyvtkDataSetSurfaceFilter_GetPassThroughCellIds, METH_VARARGS,
   "GetPassThroughCellIds(self) -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\n"},
  {"PassThroughCellIdsOn", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOn, METH_VARARGS,
   "PassThroughCellIdsOn(self) -> None\nC++: virtual void PassThroughCellIdsOn()\n\n"},
  {"PassThroughCellIdsOff", PyvtkDataSetSurfaceFilter_PassThroughCellIdsOff, METH_VARARGS,
   "PassThroughCellIdsOff(self) -> None\nC++: virtual void PassThroughCellIdsOff()\n\n"},
  {"SetPassThroughPointIds", PyvtkDataSetSurfaceFilter_SetPassThroughPointIds, METH_VARARGS,
   "SetPassThroughPointIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughPointIds(vtkTypeBool _arg)\n\n"},
  {"GetPassThroughPointIds", PyvtkDataSetSurfaceFilter_GetPassThroughPointIds, METH_VARARGS,
   "GetPassThroughPointIds(self) -> int\nC++: virtual vtkTypeBool GetPassThroughPointIds()\n\n"},
  {"PassThroughPointIdsOn", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOn, METH_VARARGS,
   "PassThroughPointIdsOn(self) -> None\nC++: virtual void PassThroughPointIdsOn()\n\n"},
  {"PassThroughPointIdsOff", PyvtkDataSetSurfaceFilter_PassThroughPointIdsOff, METH_VARARGS,
   "PassThroughPointIdsOff(self) -> None\nC++: virtual void PassThroughPointIdsOff()\n\n"},
  {"SetFastMode", PyvtkDataSetSurfaceFilter_SetFastMode, METH_VARARGS,
   "SetFastMode(self, _arg:bool) -> None\nC++: virtual void SetFastMode(bool _arg)\n\nTurn on/off fast mode execution. If enabled, fast mode typically\nruns much faster (2-3x) than the standard algorithm, however the\noutput is an approximation to the correct result. Also, note that\nthe FastMode depends on the data member Degree for its execution.\n"},
  {"GetFastMode", PyvtkDataSetSurfaceFilter_GetFastMode, METH_VARARGS,
   "GetFastMode(self) -> bool\nC++: virtual bool GetFastMode()\n\n"},
  {"FastModeOn", PyvtkDataSetSurfaceFilter_FastModeOn, METH_VARARGS,
   "FastModeOn(self) -> None\nC++: virtual void FastModeOn()\n\n"},
  {"FastModeOff", PyvtkDataSetSurfaceFilter_FastModeOff, METH_VARARGS,
   "FastModeOff(self) -> None\nC++: virtual void FastModeOff()\n\n"},
  {"SetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_SetOriginalCellIdsName, METH_VARARGS,
   "SetOriginalCellIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalCellIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalCellIdsName", PyvtkDataSetSurfaceFilter_GetOriginalCellIdsName, METH_VARARGS,
   "GetOriginalCellIdsName(self) -> str\nC++: virtual const char *GetOriginalCellIdsName()\n\n"},
  {"SetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_SetOriginalPointIdsName, METH_VARARGS,
   "SetOriginalPointIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalPointIdsName(const char *_arg)\n\n"},
  {"GetOriginalPointIdsName", PyvtkDataSetSurfaceFilter_GetOriginalPointIdsName, METH_VARARGS,
   "GetOriginalPointIdsName(self) -> str\nC++: virtual const char *GetOriginalPointIdsName()\n\n"},
  {"SetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_SetNonlinearSubdivisionLevel, METH_VARARGS,
   "SetNonlinearSubdivisionLevel(self, _arg:int) -> None\nC++: virtual void SetNonlinearSubdivisionLevel(int _arg)\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncounterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {"GetNonlinearSubdivisionLevel", PyvtkDataSetSurfaceFilter_GetNonlinearSubdivisionLevel, METH_VARARGS,
   "GetNonlinearSubdivisionLevel(self) -> int\nC++: virtual int GetNonlinearSubdivisionLevel()\n\n"},
  {"SetDelegation", PyvtkDataSetSurfaceFilter_SetDelegation, METH_VARARGS,
   "SetDelegation(self, _arg:int) -> None\nC++: virtual void SetDelegation(vtkTypeBool _arg)\n\nDisable delegation to an internal vtkGeometryFilter. The geometry\nfilter runs much faster (especially for unstructured grids);\nhowever the two filters produce slightly different output. Hence\nby default delegation is disabled.\n"},
  {"GetDelegation", PyvtkDataSetSurfaceFilter_GetDelegation, METH_VARARGS,
   "GetDelegation(self) -> int\nC++: virtual vtkTypeBool GetDelegation()\n\n"},
  {"DelegationOn", PyvtkDataSetSurfaceFilter_DelegationOn, METH_VARARGS,
   "DelegationOn(self) -> None\nC++: virtual void DelegationOn()\n\n"},
  {"DelegationOff", PyvtkDataSetSurfaceFilter_DelegationOff, METH_VARARGS,
   "DelegationOff(self) -> None\nC++: virtual void DelegationOff()\n\n"},
  {"StructuredExecute", PyvtkDataSetSurfaceFilter_StructuredExecute, METH_VARARGS,
   "StructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    ext:[int, ...], wholeExt:[int, ...]) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, vtkIdType *ext, vtkIdType *wholeExt)\nStructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    ext32:(int, ...), wholeExt32:(int, ...)) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, const int *ext32, const int *wholeExt32)\n\nDirect access methods so that this class can be used as an\nalgorithm without using it as a filter (i.e., no pipeline\nupdates).\n"},
  {"UnstructuredGridExecute", PyvtkDataSetSurfaceFilter_UnstructuredGridExecute, METH_VARARGS,
   "UnstructuredGridExecute(self, input:vtkDataSet,\n    output:vtkPolyData) -> int\nC++: virtual int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nExecute the filter on input and store the result in output. The\ncorrect function should be used accordingly to the type of the\ninput.\n\nInput can be any subclass of vtkUnstructuredGridBase. In case of\na vtkUnstructuredGrid or subclass instance, an optimized version\nof the filter is executed.\n"},
  {"DataSetExecute", PyvtkDataSetSurfaceFilter_DataSetExecute, METH_VARARGS,
   "DataSetExecute(self, input:vtkDataSet, output:vtkPolyData) -> int\nC++: virtual int DataSetExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\nExecute the filter on input and store the result in output. The\ncorrect function should be used accordingly to the type of the\ninput.\n"},
  {"UniformGridExecute", PyvtkDataSetSurfaceFilter_UniformGridExecute, METH_VARARGS,
   "UniformGridExecute(self, input:vtkDataSet, output:vtkPolyData,\n    ext:[int, ...], wholeExt:[int, ...], extractface:[bool, bool,\n    bool, bool, bool, bool]) -> int\nC++: virtual int UniformGridExecute(vtkDataSet *input,\n    vtkPolyData *output, vtkIdType *ext, vtkIdType *wholeExt,\n    bool extractface[6])\nUniformGridExecute(self, input:vtkDataSet, output:vtkPolyData,\n    ext32:(int, ...), wholeExt32:(int, ...), extractface:[bool,\n    bool, bool, bool, bool, bool]) -> int\nC++: virtual int UniformGridExecute(vtkDataSet *input,\n    vtkPolyData *output, const int *ext32, const int *wholeExt32,\n    bool extractface[6])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetSurfaceFilter_Doc =
  "vtkDataSetSurfaceFilter - Extracts outer surface (as vtkPolyData) of\nany dataset\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDataSetSurfaceFilter is a general-purpose filter to extract\n"
  "boundary geometry (and associated data) from any type of dataset.\n"
  "Geometry is obtained as follows: all 0D, 1D, and 2D cells are\n"
  "extracted. All 2D faces that are used by only one 3D cell (i.e.,\n"
  "boundary faces) are extracted. The filter will handle any type of\n"
  "dataset, including unstructured grids with non-linear cells. (See\n"
  "also vtkGeometryFilter for additional documentation and information -\n"
  "vtkGeometryFilter is the preferred filter to use in most cases and\n"
  "may be deprecated in the future.)\n\n"
  "The filter only has only a few options: methods for passing through\n"
  "point and cell ids (to support picking); and controls for nonlinear\n"
  "cell subdivision. At this time vtkDataSetSurfaceFilter has the\n"
  "distinction of being able to process non-linear cells requiring\n"
  "subdivision. For this reason, vtkDataSetSurfaceFilter should be used\n"
  "with non-linear cells; otherwise vtkGeometryFilter should be used.\n"
  "(Note: by default this filter will delegate processing of linear\n"
  "vtkUnstructuredGrids to vtkGeometryFilter as vtkGeometryFilter is so\n"
  "much faster. And vtkGeometryFilter will delegate to\n"
  "vtkDataSetSurfaceFilter when it encounters nonlinear cells.)\n\n"
  "@section FastMode Fast Mode\n\n"
  "vtkDataSetSurfaceFilter is sometimes used to simply render a 3D\n"
  "dataset. In which case we only are concerned about an approximate\n"
  "representation of the data and not necessarily the true exterior\n"
  "surface. In that case, simply set the FastMode flag to true.\n\n"
  "Currently FastMode is used when extracting surface from a structured\n"
  "dataset or when `Delegation` is true. When Delegation is true, the\n"
  "flag is passed on to `vtkGeometryFilter` (see\n"
  "`vtkGeometryFilter:SetFastMode`).\n\n"
  "@warning\n"
  "At one time, vtkDataSetSurfaceFilter was a faster version of\n"
  "vtkGeometryFilter when processing unstructured grids, however\n"
  "vtkGeometryFilter is now faster. Also, vtkDataSetSurfaceFilter\n"
  "typically uses more memory than vtkGeometryFilter.  Consequently as a\n"
  "convenience to the user, vtkDataSetSurfaceFilter will delegate to\n"
  "vtkGeometryFilter when processing linear vtkUnstructuredGrids. This\n"
  "typically produces a 5-10x speed up. (See vtkGeometryFilter for more\n"
  "information.) This delegation can be disabled by setting the\n"
  "Delegation data member.\n\n"
  "@warning\n"
  "vtkDataSetSurfaceFilter will generally not preserve topological\n"
  "connectivity.  In other words, the output polygonal primitives may\n"
  "not be connected although in the originating dataset the boundary\n"
  "entities (e.g., faces) may have been connected. This can result in\n"
  "issues for filters that expect proper topological connectivity (e.g.,\n"
  "vtkQuadricDecimation or vtkFeatureEdges).\n\n"
  "@warning\n"
  "A key step in this algorithm (for 3D cells) is to count the number\n"
  "times a face is used by a cell. If used only once, then the face is\n"
  "considered a boundary face and sent to the filter output. The filter\n"
  "determines this by creating a hash table of faces: faces that are\n"
  "placed into the hash table a single time are used only once, and\n"
  "therefore sent to the output. Thus large amounts of extra memory is\n"
  "necessary to build the hash table. This obsoleted approach requires a\n"
  "significant amount of memory, and is a significant bottleneck to\n"
  "threading.\n\n"
  "@warning\n"
  "This filter may create duplicate points. Unlike vtkGeometryFilter, it\n"
  "does not have the option to merge points. However it will eliminate\n"
  "points not used by any output polygonal primitive (i.e., not on the\n"
  "boundary).\n\n"
  "@sa\n"
  "vtkGeometryFilter vtkStructuredGridGeometryFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetSurfaceFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkDataSetSurfaceFilter", // tp_name
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
  PyvtkDataSetSurfaceFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetSurfaceFilter_StaticNew()
{
  return vtkDataSetSurfaceFilter::New();
}

PyObject *PyvtkDataSetSurfaceFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetSurfaceFilter_Type, PyvtkDataSetSurfaceFilter_Methods,
    "vtkDataSetSurfaceFilter",
 &PyvtkDataSetSurfaceFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetSurfaceFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFastGeomQuadStruct_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkFastGeomQuadStruct", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkDataSetSurfaceFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetSurfaceFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

