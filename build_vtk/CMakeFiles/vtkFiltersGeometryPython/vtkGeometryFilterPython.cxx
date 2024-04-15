// python wrapper for vtkGeometryFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGeometryFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGeometryFilter(PyObject *dict); }
#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeometryFilterHelper_CellType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkGeometryFilterHelper.CellType", // tp_name
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
PyObject *PyvtkGeometryFilterHelper_CellType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGeometryFilterHelper_CellType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGeometryFilterHelper_CopyFilterParams_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyFilterParams");

  vtkGeometryFilter *temp0 = nullptr;
  vtkDataSetSurfaceFilter *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGeometryFilter") &&
      ap.GetVTKObject(temp1, "vtkDataSetSurfaceFilter"))
  {
    vtkGeometryFilterHelper::CopyFilterParams(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilterHelper_CopyFilterParams_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "CopyFilterParams");

  vtkDataSetSurfaceFilter *temp0 = nullptr;
  vtkGeometryFilter *temp1 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSetSurfaceFilter") &&
      ap.GetVTKObject(temp1, "vtkGeometryFilter"))
  {
    vtkGeometryFilterHelper::CopyFilterParams(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometryFilterHelper_CopyFilterParams_Methods[] = {
  {"CopyFilterParams", PyvtkGeometryFilterHelper_CopyFilterParams_s1, METH_VARARGS | METH_STATIC,
   "VV *vtkGeometryFilter *vtkDataSetSurfaceFilter"},
  {"CopyFilterParams", PyvtkGeometryFilterHelper_CopyFilterParams_s2, METH_VARARGS | METH_STATIC,
   "VV *vtkDataSetSurfaceFilter *vtkGeometryFilter"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeometryFilterHelper_CopyFilterParams(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryFilterHelper_CopyFilterParams_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "CopyFilterParams");
  return nullptr;
}


static PyObject *
PyvtkGeometryFilterHelper_HasOnlyVerts(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOnlyVerts");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkGeometryFilterHelper *op = static_cast<vtkGeometryFilterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->HasOnlyVerts();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilterHelper_HasOnlyLines(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOnlyLines");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkGeometryFilterHelper *op = static_cast<vtkGeometryFilterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->HasOnlyLines();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilterHelper_HasOnlyPolys(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOnlyPolys");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkGeometryFilterHelper *op = static_cast<vtkGeometryFilterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->HasOnlyPolys();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilterHelper_HasOnlyStrips(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "HasOnlyStrips");
  void *vp = ap.GetSelfSpecialPointer(self, args);
  vtkGeometryFilterHelper *op = static_cast<vtkGeometryFilterHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = op->HasOnlyStrips();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGeometryFilterHelper_Methods[] = {
  {"CopyFilterParams", PyvtkGeometryFilterHelper_CopyFilterParams, METH_VARARGS,
   "CopyFilterParams(gf:vtkGeometryFilter,\n    dssf:vtkDataSetSurfaceFilter) -> None\nC++: static void CopyFilterParams(vtkGeometryFilter *gf,\n    vtkDataSetSurfaceFilter *dssf)\nCopyFilterParams(dssf:vtkDataSetSurfaceFilter,\n    gf:vtkGeometryFilter) -> None\nC++: static void CopyFilterParams(vtkDataSetSurfaceFilter *dssf,\n    vtkGeometryFilter *gf)\n\n"},
  {"HasOnlyVerts", PyvtkGeometryFilterHelper_HasOnlyVerts, METH_VARARGS,
   "HasOnlyVerts(self) -> bool\nC++: bool HasOnlyVerts()\n\n"},
  {"HasOnlyLines", PyvtkGeometryFilterHelper_HasOnlyLines, METH_VARARGS,
   "HasOnlyLines(self) -> bool\nC++: bool HasOnlyLines()\n\n"},
  {"HasOnlyPolys", PyvtkGeometryFilterHelper_HasOnlyPolys, METH_VARARGS,
   "HasOnlyPolys(self) -> bool\nC++: bool HasOnlyPolys()\n\n"},
  {"HasOnlyStrips", PyvtkGeometryFilterHelper_HasOnlyStrips, METH_VARARGS,
   "HasOnlyStrips(self) -> bool\nC++: bool HasOnlyStrips()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};


static PyObject *
PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkGeometryFilterHelper");

  PyObject *result = nullptr;

  if (ap.CheckArgCount(0))
  {
    vtkGeometryFilterHelper *op = new vtkGeometryFilterHelper();

    result = PyVTKSpecialObject_New("vtkGeometryFilterHelper", op);
  }

  return result;
}

static PyObject *
PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "vtkGeometryFilterHelper");

  vtkGeometryFilterHelper *temp0 = nullptr;
  PyObject *pobj0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetSpecialObject(temp0, pobj0, "vtkGeometryFilterHelper"))
  {
    vtkGeometryFilterHelper *op = new vtkGeometryFilterHelper(*temp0);

    result = PyVTKSpecialObject_New("vtkGeometryFilterHelper", op);
  }

  Py_XDECREF(pobj0);

  return result;
}

static PyMethodDef PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_Methods[] = {
  {"vtkGeometryFilterHelper", PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_s2, METH_VARARGS,
   "@W vtkGeometryFilterHelper"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeometryFilterHelper_vtkGeometryFilterHelper(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 0:
      return PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_s1(self, args);
    case 1:
      return PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "vtkGeometryFilterHelper");
  return nullptr;
}


static const char *PyvtkGeometryFilterHelper_Doc =

  "vtkGeometryFilterHelper() -> vtkGeometryFilterHelper\nC++: vtkGeometryFilterHelper()\nvtkGeometryFilterHelper(__a:vtkGeometryFilterHelper)\n    -> vtkGeometryFilterHelper\nC++: vtkGeometryFilterHelper(const &vtkGeometryFilterHelper)\n""\n"
  "vtkGeometryFilterHelper - no description provided.\n\n"
;

static PyObject *
PyvtkGeometryFilterHelper_New(PyTypeObject *, PyObject *args, PyObject *kwds)
{
  if (kwds && PyDict_Size(kwds))
  {
    PyErr_SetString(PyExc_TypeError,
                    "this function takes no keyword arguments");
    return nullptr;
  }

  return PyvtkGeometryFilterHelper_vtkGeometryFilterHelper(nullptr, args);
}

static void PyvtkGeometryFilterHelper_Delete(PyObject *self)
{
  PyVTKSpecialObject *obj = (PyVTKSpecialObject *)self;
  delete static_cast<vtkGeometryFilterHelper *>(obj->vtk_ptr);
  PyObject_Del(self);
}

static Py_hash_t PyvtkGeometryFilterHelper_Hash(PyObject *self)
{
  return PyObject_HashNotImplemented(self);
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeometryFilterHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkGeometryFilterHelper", // tp_name
  sizeof(PyVTKSpecialObject), // tp_basicsize
  0, // tp_itemsize
  PyvtkGeometryFilterHelper_Delete, // tp_dealloc
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
  PyvtkGeometryFilterHelper_Hash, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT, // tp_flags
  PyvtkGeometryFilterHelper_Doc, // tp_doc
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
  PyvtkGeometryFilterHelper_New, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static void *PyvtkGeometryFilterHelper_CCopy(const void *obj)
{
  if (obj)
  {
    return new vtkGeometryFilterHelper(*static_cast<const vtkGeometryFilterHelper*>(obj));
  }
  return nullptr;
}

#ifndef DECLARED_PyvtkGeometryFilterHelper_TypeNew
extern "C" { PyObject *PyvtkGeometryFilterHelper_TypeNew(); }
#define DECLARED_PyvtkGeometryFilterHelper_TypeNew
#endif

PyObject *PyvtkGeometryFilterHelper_TypeNew()
{
  PyTypeObject *pytype = PyVTKSpecialType_Add(
    &PyvtkGeometryFilterHelper_Type,
    PyvtkGeometryFilterHelper_Methods,
    PyvtkGeometryFilterHelper_vtkGeometryFilterHelper_Methods,
    &PyvtkGeometryFilterHelper_CCopy);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGeometryFilterHelper_CellType_Type);
  PyVTKEnum_Add(&PyvtkGeometryFilterHelper_CellType_Type, "vtkGeometryFilterHelper.CellType");

  o = (PyObject *)&PyvtkGeometryFilterHelper_CellType_Type;
  if (PyDict_SetItemString(d, "CellType", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkGeometryFilterHelper::CellType cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "VERTS", vtkGeometryFilterHelper::VERTS },
        { "LINES", vtkGeometryFilterHelper::LINES },
        { "POLYS", vtkGeometryFilterHelper::POLYS },
        { "STRIPS", vtkGeometryFilterHelper::STRIPS },
        { "OTHER_LINEAR_CELLS", vtkGeometryFilterHelper::OTHER_LINEAR_CELLS },
        { "NON_LINEAR_CELLS", vtkGeometryFilterHelper::NON_LINEAR_CELLS },
        { "NUM_CELL_TYPES", vtkGeometryFilterHelper::NUM_CELL_TYPES },
      };

    o = PyvtkGeometryFilterHelper_CellType_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

extern "C" { PyObject *PyvtkGeometryFilter_ClassNew(); }


static PyObject *
PyvtkGeometryFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGeometryFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGeometryFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGeometryFilter *tempr = vtkGeometryFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGeometryFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGeometryFilter::NewInstance());

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
PyvtkGeometryFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGeometryFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGeometryFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointClipping(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetPointClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetPointClipping() :
      op->vtkGeometryFilter::GetPointClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PointClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOn();
    }
    else
    {
      op->vtkGeometryFilter::PointClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PointClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PointClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PointClippingOff();
    }
    else
    {
      op->vtkGeometryFilter::PointClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellClipping(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetCellClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetCellClipping() :
      op->vtkGeometryFilter::GetCellClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CellClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOn();
    }
    else
    {
      op->vtkGeometryFilter::CellClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CellClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "CellClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CellClippingOff();
    }
    else
    {
      op->vtkGeometryFilter::CellClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetExtentClipping(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetExtentClipping(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetExtentClipping(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtentClipping");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetExtentClipping() :
      op->vtkGeometryFilter::GetExtentClipping());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_ExtentClippingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOn();
    }
    else
    {
      op->vtkGeometryFilter::ExtentClippingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_ExtentClippingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ExtentClippingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ExtentClippingOff();
    }
    else
    {
      op->vtkGeometryFilter::ExtentClippingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMinimum(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetPointMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimumMinValue() :
      op->vtkGeometryFilter::GetPointMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimumMaxValue() :
      op->vtkGeometryFilter::GetPointMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMinimum() :
      op->vtkGeometryFilter::GetPointMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetPointMaximum(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetPointMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximumMinValue() :
      op->vtkGeometryFilter::GetPointMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximumMaxValue() :
      op->vtkGeometryFilter::GetPointMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPointMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPointMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetPointMaximum() :
      op->vtkGeometryFilter::GetPointMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMinimum(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetCellMinimum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimumMinValue() :
      op->vtkGeometryFilter::GetCellMinimumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimumMaxValue() :
      op->vtkGeometryFilter::GetCellMinimumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMinimum() :
      op->vtkGeometryFilter::GetCellMinimum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellMaximum(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetCellMaximum(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximumMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximumMinValue() :
      op->vtkGeometryFilter::GetCellMaximumMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximumMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximumMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximumMaxValue() :
      op->vtkGeometryFilter::GetCellMaximumMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetCellMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetCellMaximum() :
      op->vtkGeometryFilter::GetCellMaximum());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExtent_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkGeometryFilter::SetExtent(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_SetExtent_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->SetExtent(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetExtent(temp0);
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
PyvtkGeometryFilter_SetExtent(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkGeometryFilter_SetExtent_s1(self, args);
    case 1:
      return PyvtkGeometryFilter_SetExtent_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetExtent");
  return nullptr;
}


static PyObject *
PyvtkGeometryFilter_GetExtent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExtent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetExtent() :
      op->vtkGeometryFilter::GetExtent());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMerging(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetMerging(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetMerging(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMerging");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetMerging() :
      op->vtkGeometryFilter::GetMerging());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_MergingOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOn();
    }
    else
    {
      op->vtkGeometryFilter::MergingOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_MergingOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "MergingOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->MergingOff();
    }
    else
    {
      op->vtkGeometryFilter::MergingOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputPointsPrecision(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetOutputPointsPrecision(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetOutputPointsPrecision(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputPointsPrecision");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetOutputPointsPrecision() :
      op->vtkGeometryFilter::GetOutputPointsPrecision());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetFastMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFastMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetFastMode(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetFastMode(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFastMode");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFastMode() :
      op->vtkGeometryFilter::GetFastMode());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_FastModeOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastModeOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastModeOn();
    }
    else
    {
      op->vtkGeometryFilter::FastModeOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_FastModeOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FastModeOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FastModeOff();
    }
    else
    {
      op->vtkGeometryFilter::FastModeOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetDegree(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetDegree."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  unsigned int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDegree(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetDegree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetDegreeMinValue(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetDegreeMinValue."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetDegreeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDegreeMinValue() :
      op->vtkGeometryFilter::GetDegreeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetDegreeMaxValue(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetDegreeMaxValue."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetDegreeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDegreeMaxValue() :
      op->vtkGeometryFilter::GetDegreeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetDegree(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetDegree."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetDegree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned int tempr = (ap.IsBound() ?
      op->GetDegree() :
      op->vtkGeometryFilter::GetDegree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetLocator(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method SetLocator."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "SetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkIncrementalPointLocator *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkIncrementalPointLocator"))
  {
    if (ap.IsBound())
    {
      op->SetLocator(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetLocator(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetLocator(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method GetLocator."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "GetLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkIncrementalPointLocator *tempr = (ap.IsBound() ?
      op->GetLocator() :
      op->vtkGeometryFilter::GetLocator());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_CreateDefaultLocator(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method CreateDefaultLocator."
    " (" "This method is no longer used and has no effect." ")"
    " -- Deprecated since version " "9.2.0" ".", 1);

  vtkPythonArgs ap(self, args, "CreateDefaultLocator");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->CreateDefaultLocator();
    }
    else
    {
      op->vtkGeometryFilter::CreateDefaultLocator();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetPieceInvariant(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPieceInvariant(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPieceInvariant");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPieceInvariant() :
      op->vtkGeometryFilter::GetPieceInvariant());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetPassThroughCellIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPassThroughCellIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughCellIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughCellIds() :
      op->vtkGeometryFilter::GetPassThroughCellIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PassThroughCellIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOn();
    }
    else
    {
      op->vtkGeometryFilter::PassThroughCellIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PassThroughCellIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughCellIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughCellIdsOff();
    }
    else
    {
      op->vtkGeometryFilter::PassThroughCellIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetPassThroughPointIds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetPassThroughPointIds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPassThroughPointIds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetPassThroughPointIds() :
      op->vtkGeometryFilter::GetPassThroughPointIds());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PassThroughPointIdsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOn();
    }
    else
    {
      op->vtkGeometryFilter::PassThroughPointIdsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PassThroughPointIdsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PassThroughPointIdsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->PassThroughPointIdsOff();
    }
    else
    {
      op->vtkGeometryFilter::PassThroughPointIdsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetOriginalCellIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetOriginalCellIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalCellIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalCellIdsName() :
      op->vtkGeometryFilter::GetOriginalCellIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetOriginalPointIdsName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetOriginalPointIdsName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOriginalPointIdsName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetOriginalPointIdsName() :
      op->vtkGeometryFilter::GetOriginalPointIdsName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExcludedFacesData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExcludedFacesData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetExcludedFacesData(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetExcludedFacesData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetExcludedFacesConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetExcludedFacesConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkAlgorithmOutput *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAlgorithmOutput"))
  {
    if (ap.IsBound())
    {
      op->SetExcludedFacesConnection(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetExcludedFacesConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetExcludedFaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetExcludedFaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetExcludedFaces() :
      op->vtkGeometryFilter::GetExcludedFaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetNonlinearSubdivisionLevel(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetNonlinearSubdivisionLevel(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNonlinearSubdivisionLevel");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNonlinearSubdivisionLevel() :
      op->vtkGeometryFilter::GetNonlinearSubdivisionLevel());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetDelegation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDelegation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

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
      op->vtkGeometryFilter::SetDelegation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetDelegation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDelegation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDelegation() :
      op->vtkGeometryFilter::GetDelegation());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_DelegationOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegationOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DelegationOn();
    }
    else
    {
      op->vtkGeometryFilter::DelegationOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_DelegationOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DelegationOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->DelegationOff();
    }
    else
    {
      op->vtkGeometryFilter::DelegationOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_SetRemoveGhostInterfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRemoveGhostInterfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRemoveGhostInterfaces(temp0);
    }
    else
    {
      op->vtkGeometryFilter::SetRemoveGhostInterfaces(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_RemoveGhostInterfacesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostInterfacesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostInterfacesOn();
    }
    else
    {
      op->vtkGeometryFilter::RemoveGhostInterfacesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_RemoveGhostInterfacesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RemoveGhostInterfacesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->RemoveGhostInterfacesOff();
    }
    else
    {
      op->vtkGeometryFilter::RemoveGhostInterfacesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_GetRemoveGhostInterfaces(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRemoveGhostInterfaces");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetRemoveGhostInterfaces() :
      op->vtkGeometryFilter::GetRemoveGhostInterfaces());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_PolyDataExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolyDataExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->PolyDataExecute(temp0, temp1, temp2) :
      op->vtkGeometryFilter::PolyDataExecute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_PolyDataExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PolyDataExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->PolyDataExecute(temp0, temp1) :
      op->vtkGeometryFilter::PolyDataExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_PolyDataExecute(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGeometryFilter_PolyDataExecute_s1(self, args);
    case 2:
      return PyvtkGeometryFilter_PolyDataExecute_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PolyDataExecute");
  return nullptr;
}


static PyObject *
PyvtkGeometryFilter_UnstructuredGridExecute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UnstructuredGridExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->UnstructuredGridExecute(temp0, temp1) :
      op->vtkGeometryFilter::UnstructuredGridExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGeometryFilter_StructuredExecute_s1(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method StructuredExecute."
    " (" "Use the new version that has int* instead of vtkInformation*" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  vtkPolyData *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<bool> store4(2*size4);
  bool *temp4 = store4.Data();
  bool *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkInformation") &&
      ap.GetVTKObject(temp3, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkGeometryFilter::StructuredExecute(temp0, temp1, temp2, temp3, temp4));

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
PyvtkGeometryFilter_StructuredExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  vtkPolyData *temp3 = nullptr;
  size_t size4 = ap.GetArgSize(4);
  vtkPythonArgs::Array<bool> store4(2*size4);
  bool *temp4 = store4.Data();
  bool *save4 = (size4 == 0 ? nullptr : temp4 + size4);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4, 5) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      ap.GetVTKObject(temp3, "vtkPolyData") &&
      (ap.NoArgsLeft() || ap.GetArray(temp4, size4)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp4, save4, size4);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3, temp4) :
      op->vtkGeometryFilter::StructuredExecute(temp0, temp1, temp2, temp3, temp4));

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

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_StructuredExecute_s3(PyObject *self, PyObject *args)
{
  PyErr_WarnEx(PyExc_DeprecationWarning,
    "Call to deprecated method StructuredExecute."
    " (" "Use the new version that has int* instead of vtkInformation*" ")"
    " -- Deprecated since version " "9.3.0" ".", 1);

  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  vtkInformation *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<bool> store3(2*size3);
  bool *temp3 = store3.Data();
  bool *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkInformation") &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkGeometryFilter::StructuredExecute(temp0, temp1, temp2, temp3));

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
PyvtkGeometryFilter_StructuredExecute_s4(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "StructuredExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<int> store2(2*size2);
  int *temp2 = store2.Data();
  int *save2 = (size2 == 0 ? nullptr : temp2 + size2);
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<bool> store3(2*size3);
  bool *temp3 = store3.Data();
  bool *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3, 4) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetArray(temp2, size2) &&
      (ap.NoArgsLeft() || ap.GetArray(temp3, size3)))
  {
    vtkPythonArgs::Save(temp2, save2, size2);
    vtkPythonArgs::Save(temp3, save3, size3);

    int tempr = (ap.IsBound() ?
      op->StructuredExecute(temp0, temp1, temp2, temp3) :
      op->vtkGeometryFilter::StructuredExecute(temp0, temp1, temp2, temp3));

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

static PyMethodDef PyvtkGeometryFilter_StructuredExecute_Methods[] = {
  {"StructuredExecute", PyvtkGeometryFilter_StructuredExecute_s1, METH_VARARGS,
   "@VVVV|P *vtkDataSet *vtkPolyData *vtkInformation *vtkPolyData *q"},
  {"StructuredExecute", PyvtkGeometryFilter_StructuredExecute_s2, METH_VARARGS,
   "@VVPV|P *vtkDataSet *vtkPolyData *i *vtkPolyData *q"},
  {"StructuredExecute", PyvtkGeometryFilter_StructuredExecute_s3, METH_VARARGS,
   "@VVV|P *vtkDataSet *vtkPolyData *vtkInformation *q"},
  {"StructuredExecute", PyvtkGeometryFilter_StructuredExecute_s4, METH_VARARGS,
   "@VVP|P *vtkDataSet *vtkPolyData *i *q"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkGeometryFilter_StructuredExecute(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkGeometryFilter_StructuredExecute_Methods;
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
    case 4:
    case 5:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "StructuredExecute");
  return nullptr;
}


static PyObject *
PyvtkGeometryFilter_DataSetExecute_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  vtkPolyData *temp2 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData") &&
      ap.GetVTKObject(temp2, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->DataSetExecute(temp0, temp1, temp2) :
      op->vtkGeometryFilter::DataSetExecute(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_DataSetExecute_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "DataSetExecute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGeometryFilter *op = static_cast<vtkGeometryFilter *>(vp);

  vtkDataSet *temp0 = nullptr;
  vtkPolyData *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkDataSet") &&
      ap.GetVTKObject(temp1, "vtkPolyData"))
  {
    int tempr = (ap.IsBound() ?
      op->DataSetExecute(temp0, temp1) :
      op->vtkGeometryFilter::DataSetExecute(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkGeometryFilter_DataSetExecute(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkGeometryFilter_DataSetExecute_s1(self, args);
    case 2:
      return PyvtkGeometryFilter_DataSetExecute_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "DataSetExecute");
  return nullptr;
}

static PyMethodDef PyvtkGeometryFilter_Methods[] = {
  {"IsTypeOf", PyvtkGeometryFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGeometryFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGeometryFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGeometryFilter\nC++: static vtkGeometryFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGeometryFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGeometryFilter\nC++: vtkGeometryFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGeometryFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGeometryFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetPointClipping", PyvtkGeometryFilter_SetPointClipping, METH_VARARGS,
   "SetPointClipping(self, _arg:bool) -> None\nC++: virtual void SetPointClipping(bool _arg)\n\nTurn on/off selection of geometry by point id.\n"},
  {"GetPointClipping", PyvtkGeometryFilter_GetPointClipping, METH_VARARGS,
   "GetPointClipping(self) -> bool\nC++: virtual bool GetPointClipping()\n\n"},
  {"PointClippingOn", PyvtkGeometryFilter_PointClippingOn, METH_VARARGS,
   "PointClippingOn(self) -> None\nC++: virtual void PointClippingOn()\n\n"},
  {"PointClippingOff", PyvtkGeometryFilter_PointClippingOff, METH_VARARGS,
   "PointClippingOff(self) -> None\nC++: virtual void PointClippingOff()\n\n"},
  {"SetCellClipping", PyvtkGeometryFilter_SetCellClipping, METH_VARARGS,
   "SetCellClipping(self, _arg:bool) -> None\nC++: virtual void SetCellClipping(bool _arg)\n\nTurn on/off selection of geometry by cell id.\n"},
  {"GetCellClipping", PyvtkGeometryFilter_GetCellClipping, METH_VARARGS,
   "GetCellClipping(self) -> bool\nC++: virtual bool GetCellClipping()\n\n"},
  {"CellClippingOn", PyvtkGeometryFilter_CellClippingOn, METH_VARARGS,
   "CellClippingOn(self) -> None\nC++: virtual void CellClippingOn()\n\n"},
  {"CellClippingOff", PyvtkGeometryFilter_CellClippingOff, METH_VARARGS,
   "CellClippingOff(self) -> None\nC++: virtual void CellClippingOff()\n\n"},
  {"SetExtentClipping", PyvtkGeometryFilter_SetExtentClipping, METH_VARARGS,
   "SetExtentClipping(self, _arg:bool) -> None\nC++: virtual void SetExtentClipping(bool _arg)\n\nTurn on/off selection of geometry via bounding box.\n"},
  {"GetExtentClipping", PyvtkGeometryFilter_GetExtentClipping, METH_VARARGS,
   "GetExtentClipping(self) -> bool\nC++: virtual bool GetExtentClipping()\n\n"},
  {"ExtentClippingOn", PyvtkGeometryFilter_ExtentClippingOn, METH_VARARGS,
   "ExtentClippingOn(self) -> None\nC++: virtual void ExtentClippingOn()\n\n"},
  {"ExtentClippingOff", PyvtkGeometryFilter_ExtentClippingOff, METH_VARARGS,
   "ExtentClippingOff(self) -> None\nC++: virtual void ExtentClippingOff()\n\n"},
  {"SetPointMinimum", PyvtkGeometryFilter_SetPointMinimum, METH_VARARGS,
   "SetPointMinimum(self, _arg:int) -> None\nC++: virtual void SetPointMinimum(vtkIdType _arg)\n\nSpecify the minimum point id for point id selection.\n"},
  {"GetPointMinimumMinValue", PyvtkGeometryFilter_GetPointMinimumMinValue, METH_VARARGS,
   "GetPointMinimumMinValue(self) -> int\nC++: virtual vtkIdType GetPointMinimumMinValue()\n\n"},
  {"GetPointMinimumMaxValue", PyvtkGeometryFilter_GetPointMinimumMaxValue, METH_VARARGS,
   "GetPointMinimumMaxValue(self) -> int\nC++: virtual vtkIdType GetPointMinimumMaxValue()\n\n"},
  {"GetPointMinimum", PyvtkGeometryFilter_GetPointMinimum, METH_VARARGS,
   "GetPointMinimum(self) -> int\nC++: virtual vtkIdType GetPointMinimum()\n\n"},
  {"SetPointMaximum", PyvtkGeometryFilter_SetPointMaximum, METH_VARARGS,
   "SetPointMaximum(self, _arg:int) -> None\nC++: virtual void SetPointMaximum(vtkIdType _arg)\n\nSpecify the maximum point id for point id selection.\n"},
  {"GetPointMaximumMinValue", PyvtkGeometryFilter_GetPointMaximumMinValue, METH_VARARGS,
   "GetPointMaximumMinValue(self) -> int\nC++: virtual vtkIdType GetPointMaximumMinValue()\n\n"},
  {"GetPointMaximumMaxValue", PyvtkGeometryFilter_GetPointMaximumMaxValue, METH_VARARGS,
   "GetPointMaximumMaxValue(self) -> int\nC++: virtual vtkIdType GetPointMaximumMaxValue()\n\n"},
  {"GetPointMaximum", PyvtkGeometryFilter_GetPointMaximum, METH_VARARGS,
   "GetPointMaximum(self) -> int\nC++: virtual vtkIdType GetPointMaximum()\n\n"},
  {"SetCellMinimum", PyvtkGeometryFilter_SetCellMinimum, METH_VARARGS,
   "SetCellMinimum(self, _arg:int) -> None\nC++: virtual void SetCellMinimum(vtkIdType _arg)\n\nSpecify the minimum cell id for point id selection.\n"},
  {"GetCellMinimumMinValue", PyvtkGeometryFilter_GetCellMinimumMinValue, METH_VARARGS,
   "GetCellMinimumMinValue(self) -> int\nC++: virtual vtkIdType GetCellMinimumMinValue()\n\n"},
  {"GetCellMinimumMaxValue", PyvtkGeometryFilter_GetCellMinimumMaxValue, METH_VARARGS,
   "GetCellMinimumMaxValue(self) -> int\nC++: virtual vtkIdType GetCellMinimumMaxValue()\n\n"},
  {"GetCellMinimum", PyvtkGeometryFilter_GetCellMinimum, METH_VARARGS,
   "GetCellMinimum(self) -> int\nC++: virtual vtkIdType GetCellMinimum()\n\n"},
  {"SetCellMaximum", PyvtkGeometryFilter_SetCellMaximum, METH_VARARGS,
   "SetCellMaximum(self, _arg:int) -> None\nC++: virtual void SetCellMaximum(vtkIdType _arg)\n\nSpecify the maximum cell id for point id selection.\n"},
  {"GetCellMaximumMinValue", PyvtkGeometryFilter_GetCellMaximumMinValue, METH_VARARGS,
   "GetCellMaximumMinValue(self) -> int\nC++: virtual vtkIdType GetCellMaximumMinValue()\n\n"},
  {"GetCellMaximumMaxValue", PyvtkGeometryFilter_GetCellMaximumMaxValue, METH_VARARGS,
   "GetCellMaximumMaxValue(self) -> int\nC++: virtual vtkIdType GetCellMaximumMaxValue()\n\n"},
  {"GetCellMaximum", PyvtkGeometryFilter_GetCellMaximum, METH_VARARGS,
   "GetCellMaximum(self) -> int\nC++: virtual vtkIdType GetCellMaximum()\n\n"},
  {"SetExtent", PyvtkGeometryFilter_SetExtent, METH_VARARGS,
   "SetExtent(self, xMin:float, xMax:float, yMin:float, yMax:float,\n    zMin:float, zMax:float) -> None\nC++: void SetExtent(double xMin, double xMax, double yMin,\n    double yMax, double zMin, double zMax)\nSetExtent(self, extent:[float, float, float, float, float, float])\n     -> None\nC++: void SetExtent(double extent[6])\n\nSpecify a (xmin,xmax, ymin,ymax, zmin,zmax) bounding box to clip\ndata.\n"},
  {"GetExtent", PyvtkGeometryFilter_GetExtent, METH_VARARGS,
   "GetExtent(self) -> (float, float, float, float, float, float)\nC++: double *GetExtent()\n\n"},
  {"SetMerging", PyvtkGeometryFilter_SetMerging, METH_VARARGS,
   "SetMerging(self, _arg:bool) -> None\nC++: virtual void SetMerging(bool _arg)\n\nTurn on/off merging of points. This will reduce the number of\noutput points, at some cost to performance. If Merging is off,\nthen if possible (i.e., if the point representation is explicit),\nthe filter will reuse the input points to create the output\npolydata. Certain input dataset types (with implicit point\nrepresentations) will always create new points (effectively\nperforming a merge operation).\n"},
  {"GetMerging", PyvtkGeometryFilter_GetMerging, METH_VARARGS,
   "GetMerging(self) -> bool\nC++: virtual bool GetMerging()\n\n"},
  {"MergingOn", PyvtkGeometryFilter_MergingOn, METH_VARARGS,
   "MergingOn(self) -> None\nC++: virtual void MergingOn()\n\n"},
  {"MergingOff", PyvtkGeometryFilter_MergingOff, METH_VARARGS,
   "MergingOff(self) -> None\nC++: virtual void MergingOff()\n\n"},
  {"SetOutputPointsPrecision", PyvtkGeometryFilter_SetOutputPointsPrecision, METH_VARARGS,
   "SetOutputPointsPrecision(self, precision:int) -> None\nC++: void SetOutputPointsPrecision(int precision)\n\nSet/get the desired precision for the output types. See the\ndocumentation for the vtkAlgorithm::DesiredOutputPrecision enum\nfor an explanation of the available precision settings. This only\napplies for data types where we create points (merging) as\nopposed to passing them from input to output, such as\nunstructured grids.\n"},
  {"GetOutputPointsPrecision", PyvtkGeometryFilter_GetOutputPointsPrecision, METH_VARARGS,
   "GetOutputPointsPrecision(self) -> int\nC++: int GetOutputPointsPrecision()\n\n"},
  {"SetFastMode", PyvtkGeometryFilter_SetFastMode, METH_VARARGS,
   "SetFastMode(self, _arg:bool) -> None\nC++: virtual void SetFastMode(bool _arg)\n\nTurn on/off fast mode execution. If enabled, fast mode typically\nruns much faster (2-3x) than the standard algorithm, however the\noutput is an approximation to the correct result. FastMode is\nonly meaningful when the input is\nvtkImageData/vtkRectilinearGrid/vtkStructuredGrid and there are\nblank cells.\n"},
  {"GetFastMode", PyvtkGeometryFilter_GetFastMode, METH_VARARGS,
   "GetFastMode(self) -> bool\nC++: virtual bool GetFastMode()\n\n"},
  {"FastModeOn", PyvtkGeometryFilter_FastModeOn, METH_VARARGS,
   "FastModeOn(self) -> None\nC++: virtual void FastModeOn()\n\n"},
  {"FastModeOff", PyvtkGeometryFilter_FastModeOff, METH_VARARGS,
   "FastModeOff(self) -> None\nC++: virtual void FastModeOff()\n\n"},
  {"SetDegree", PyvtkGeometryFilter_SetDegree, METH_VARARGS,
   "SetDegree(self, arg:int) -> None\nC++: virtual void SetDegree(unsigned int arg)\n\nIf fast mode is enabled, then Degree controls which cells are\nvisited. Basically, any cell connected to a point with\nconnectivity degree <= is visited and processed. Low degree\npoints tend to be located on the boundary of datasets - thus\nattached cells frequently produce output boundary fragments.\n"},
  {"GetDegreeMinValue", PyvtkGeometryFilter_GetDegreeMinValue, METH_VARARGS,
   "GetDegreeMinValue(self) -> int\nC++: virtual unsigned int GetDegreeMinValue()\n\n"},
  {"GetDegreeMaxValue", PyvtkGeometryFilter_GetDegreeMaxValue, METH_VARARGS,
   "GetDegreeMaxValue(self) -> int\nC++: virtual unsigned int GetDegreeMaxValue()\n\n"},
  {"GetDegree", PyvtkGeometryFilter_GetDegree, METH_VARARGS,
   "GetDegree(self) -> int\nC++: virtual unsigned int GetDegree()\n\n"},
  {"SetLocator", PyvtkGeometryFilter_SetLocator, METH_VARARGS,
   "SetLocator(self, locator:vtkIncrementalPointLocator) -> None\nC++: void SetLocator(vtkIncrementalPointLocator *locator)\n\nSet / get a spatial locator for merging points. By default an\ninstance of vtkMergePoints is used. (This method is now\ndeprecated and has no effect.)\n"},
  {"GetLocator", PyvtkGeometryFilter_GetLocator, METH_VARARGS,
   "GetLocator(self) -> vtkIncrementalPointLocator\nC++: virtual vtkIncrementalPointLocator *GetLocator()\n\n"},
  {"CreateDefaultLocator", PyvtkGeometryFilter_CreateDefaultLocator, METH_VARARGS,
   "CreateDefaultLocator(self) -> None\nC++: void CreateDefaultLocator()\n\nCreate default locator. Used to create one when none is\nspecified. This method is now deprecated.\n"},
  {"SetPieceInvariant", PyvtkGeometryFilter_SetPieceInvariant, METH_VARARGS,
   "SetPieceInvariant(self, _arg:int) -> None\nC++: virtual void SetPieceInvariant(int _arg)\n\nIf PieceInvariant is true, vtkGeometryFilter requests 1 ghost\nlevel from input in order to remove internal surface that are\nbetween processes. False by default.\n"},
  {"GetPieceInvariant", PyvtkGeometryFilter_GetPieceInvariant, METH_VARARGS,
   "GetPieceInvariant(self) -> int\nC++: virtual int GetPieceInvariant()\n\n"},
  {"SetPassThroughCellIds", PyvtkGeometryFilter_SetPassThroughCellIds, METH_VARARGS,
   "SetPassThroughCellIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughCellIds(vtkTypeBool _arg)\n\nThis parameter drives the generation or not of a CellData array\nfor the output polygonal dataset that holds the cell index of the\noriginal 3D cell that produced each output cell. This is useful\nfor cell picking. The default is off to conserve memory.\n\nNote: Use SetOriginalCellIdsName() to set the name of the\nCellData array.\n"},
  {"GetPassThroughCellIds", PyvtkGeometryFilter_GetPassThroughCellIds, METH_VARARGS,
   "GetPassThroughCellIds(self) -> int\nC++: virtual vtkTypeBool GetPassThroughCellIds()\n\n"},
  {"PassThroughCellIdsOn", PyvtkGeometryFilter_PassThroughCellIdsOn, METH_VARARGS,
   "PassThroughCellIdsOn(self) -> None\nC++: virtual void PassThroughCellIdsOn()\n\n"},
  {"PassThroughCellIdsOff", PyvtkGeometryFilter_PassThroughCellIdsOff, METH_VARARGS,
   "PassThroughCellIdsOff(self) -> None\nC++: virtual void PassThroughCellIdsOff()\n\n"},
  {"SetPassThroughPointIds", PyvtkGeometryFilter_SetPassThroughPointIds, METH_VARARGS,
   "SetPassThroughPointIds(self, _arg:int) -> None\nC++: virtual void SetPassThroughPointIds(vtkTypeBool _arg)\n\nThis parameter drives the generation or not of a PointData array\nfor the output polygonal dataset that holds the cell/point index\nof the original point that produced each output point. This is\nuseful for point picking. The default is off to conserve memory.\n\nNote: Use SetOriginalPointIdsName() to set the name of the\nPointData array.\n"},
  {"GetPassThroughPointIds", PyvtkGeometryFilter_GetPassThroughPointIds, METH_VARARGS,
   "GetPassThroughPointIds(self) -> int\nC++: virtual vtkTypeBool GetPassThroughPointIds()\n\n"},
  {"PassThroughPointIdsOn", PyvtkGeometryFilter_PassThroughPointIdsOn, METH_VARARGS,
   "PassThroughPointIdsOn(self) -> None\nC++: virtual void PassThroughPointIdsOn()\n\n"},
  {"PassThroughPointIdsOff", PyvtkGeometryFilter_PassThroughPointIdsOff, METH_VARARGS,
   "PassThroughPointIdsOff(self) -> None\nC++: virtual void PassThroughPointIdsOff()\n\n"},
  {"SetOriginalCellIdsName", PyvtkGeometryFilter_SetOriginalCellIdsName, METH_VARARGS,
   "SetOriginalCellIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalCellIdsName(const char *_arg)\n\nIf PassThroughCellIds or PassThroughPointIds is on, then these\nivars control the name given to the field in which the ids are\nwritten into.  If set to nullptr, then vtkOriginalCellIds or\nvtkOriginalPointIds (the default) is used, respectively.\n"},
  {"GetOriginalCellIdsName", PyvtkGeometryFilter_GetOriginalCellIdsName, METH_VARARGS,
   "GetOriginalCellIdsName(self) -> str\nC++: virtual const char *GetOriginalCellIdsName()\n\n"},
  {"SetOriginalPointIdsName", PyvtkGeometryFilter_SetOriginalPointIdsName, METH_VARARGS,
   "SetOriginalPointIdsName(self, _arg:str) -> None\nC++: virtual void SetOriginalPointIdsName(const char *_arg)\n\n"},
  {"GetOriginalPointIdsName", PyvtkGeometryFilter_GetOriginalPointIdsName, METH_VARARGS,
   "GetOriginalPointIdsName(self) -> str\nC++: virtual const char *GetOriginalPointIdsName()\n\n"},
  {"SetExcludedFacesData", PyvtkGeometryFilter_SetExcludedFacesData, METH_VARARGS,
   "SetExcludedFacesData(self, __a:vtkPolyData) -> None\nC++: void SetExcludedFacesData(vtkPolyData *)\n\nIf a second, vtkPolyData input is provided, this second input\nspecifies a list of faces to be excluded from the output (in the\nvtkPolyData::Polys attribute). This is useful to prevent the same\nface to be output multiple times in complex pipelines. (A\ncandidate output boundary face is the same as a face in the\nexcluded face list if it uses the same point ids as one of the\npolygons defined in the second input.) For example, a face may be\nextracted separately via a threshold filter; thus this face\nshould not be also extracted via the vtkGeometryFilter. (This\nfunctionality is related to vtkRemovePolyData.)\n"},
  {"SetExcludedFacesConnection", PyvtkGeometryFilter_SetExcludedFacesConnection, METH_VARARGS,
   "SetExcludedFacesConnection(self, algOutput:vtkAlgorithmOutput)\n    -> None\nC++: void SetExcludedFacesConnection(\n    vtkAlgorithmOutput *algOutput)\n\n"},
  {"GetExcludedFaces", PyvtkGeometryFilter_GetExcludedFaces, METH_VARARGS,
   "GetExcludedFaces(self) -> vtkPolyData\nC++: vtkPolyData *GetExcludedFaces()\n\n"},
  {"SetNonlinearSubdivisionLevel", PyvtkGeometryFilter_SetNonlinearSubdivisionLevel, METH_VARARGS,
   "SetNonlinearSubdivisionLevel(self, _arg:int) -> None\nC++: virtual void SetNonlinearSubdivisionLevel(int _arg)\n\nIf the input is an unstructured grid with nonlinear faces, this\nparameter determines how many times the face is subdivided into\nlinear faces.  If 0, the output is the equivalent of its linear\ncounterpart (and the midpoints determining the nonlinear\ninterpolation are discarded).  If 1 (the default), the nonlinear\nface is triangulated based on the midpoints.  If greater than 1,\nthe triangulated pieces are recursively subdivided to reach the\ndesired subdivision.  Setting the value to greater than 1 may\ncause some point data to not be passed even if no nonlinear faces\nexist.  This option has no effect if the input is not an\nunstructured grid.\n"},
  {"GetNonlinearSubdivisionLevel", PyvtkGeometryFilter_GetNonlinearSubdivisionLevel, METH_VARARGS,
   "GetNonlinearSubdivisionLevel(self) -> int\nC++: virtual int GetNonlinearSubdivisionLevel()\n\n"},
  {"SetDelegation", PyvtkGeometryFilter_SetDelegation, METH_VARARGS,
   "SetDelegation(self, _arg:int) -> None\nC++: virtual void SetDelegation(vtkTypeBool _arg)\n\nDisable delegation to an internal vtkDataSetSurfaceFilter.\n"},
  {"GetDelegation", PyvtkGeometryFilter_GetDelegation, METH_VARARGS,
   "GetDelegation(self) -> int\nC++: virtual vtkTypeBool GetDelegation()\n\n"},
  {"DelegationOn", PyvtkGeometryFilter_DelegationOn, METH_VARARGS,
   "DelegationOn(self) -> None\nC++: virtual void DelegationOn()\n\n"},
  {"DelegationOff", PyvtkGeometryFilter_DelegationOff, METH_VARARGS,
   "DelegationOff(self) -> None\nC++: virtual void DelegationOff()\n\n"},
  {"SetRemoveGhostInterfaces", PyvtkGeometryFilter_SetRemoveGhostInterfaces, METH_VARARGS,
   "SetRemoveGhostInterfaces(self, _arg:bool) -> None\nC++: virtual void SetRemoveGhostInterfaces(bool _arg)\n\nSet/Get if Ghost interfaces will be removed. When you are\nrendering you want to remove ghost interfaces that originate from\nduplicate cells.\n\nThere are certain algorithms though that need the ghost\ninterfaces, such as GhostCellGenerator and FeatureEdges.\n\nSince Rendering is the most common case, the Default is on.\n\nNote: DON'T change it if there are no ghost cells.\n"},
  {"RemoveGhostInterfacesOn", PyvtkGeometryFilter_RemoveGhostInterfacesOn, METH_VARARGS,
   "RemoveGhostInterfacesOn(self) -> None\nC++: virtual void RemoveGhostInterfacesOn()\n\n"},
  {"RemoveGhostInterfacesOff", PyvtkGeometryFilter_RemoveGhostInterfacesOff, METH_VARARGS,
   "RemoveGhostInterfacesOff(self) -> None\nC++: virtual void RemoveGhostInterfacesOff()\n\n"},
  {"GetRemoveGhostInterfaces", PyvtkGeometryFilter_GetRemoveGhostInterfaces, METH_VARARGS,
   "GetRemoveGhostInterfaces(self) -> bool\nC++: virtual bool GetRemoveGhostInterfaces()\n\n"},
  {"PolyDataExecute", PyvtkGeometryFilter_PolyDataExecute, METH_VARARGS,
   "PolyDataExecute(self, input:vtkDataSet, output:vtkPolyData,\n    exc:vtkPolyData) -> int\nC++: int PolyDataExecute(vtkDataSet *input, vtkPolyData *output,\n    vtkPolyData *exc)\nPolyDataExecute(self, __a:vtkDataSet, __b:vtkPolyData) -> int\nC++: virtual int PolyDataExecute(vtkDataSet *, vtkPolyData *)\n\nDirect access methods so that this class can be used as an\nalgorithm without using it as a filter (i.e., no pipeline\nupdates). Also some internal methods with additional options.\n"},
  {"UnstructuredGridExecute", PyvtkGeometryFilter_UnstructuredGridExecute, METH_VARARGS,
   "UnstructuredGridExecute(self, input:vtkDataSet,\n    output:vtkPolyData) -> int\nC++: virtual int UnstructuredGridExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\n"},
  {"StructuredExecute", PyvtkGeometryFilter_StructuredExecute, METH_VARARGS,
   "StructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    inInfo:vtkInformation, exc:vtkPolyData, extractFace:[bool,\n    ...]=...) -> int\nC++: int StructuredExecute(vtkDataSet *input, vtkPolyData *output,\n     vtkInformation *inInfo, vtkPolyData *exc,\n    bool *extractFace=nullptr)\nStructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    wholeExtent:[int, ...], exc:vtkPolyData, extractFace:[bool,\n    ...]=...) -> int\nC++: int StructuredExecute(vtkDataSet *input, vtkPolyData *output,\n     int *wholeExtent, vtkPolyData *exc,\n    bool *extractFace=nullptr)\nStructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    inInfo:vtkInformation, extractFace:[bool, ...]=...) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, vtkInformation *inInfo,\n    bool *extractFace=nullptr)\nStructuredExecute(self, input:vtkDataSet, output:vtkPolyData,\n    wholeExt:[int, ...], extractFace:[bool, ...]=...) -> int\nC++: virtual int StructuredExecute(vtkDataSet *input,\n    vtkPolyData *output, int *wholeExt, bool *extractFace=nullptr)\n\n"},
  {"DataSetExecute", PyvtkGeometryFilter_DataSetExecute, METH_VARARGS,
   "DataSetExecute(self, input:vtkDataSet, output:vtkPolyData,\n    exc:vtkPolyData) -> int\nC++: int DataSetExecute(vtkDataSet *input, vtkPolyData *output,\n    vtkPolyData *exc)\nDataSetExecute(self, input:vtkDataSet, output:vtkPolyData) -> int\nC++: virtual int DataSetExecute(vtkDataSet *input,\n    vtkPolyData *output)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGeometryFilter_Doc =
  "vtkGeometryFilter - extract boundary geometry from dataset (or\nconvert data to polygonal type)\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkGeometryFilter is a general-purpose filter to extract dataset\n"
  "boundary geometry, topology, and associated attribute data from any\n"
  "type of dataset. Geometry is obtained as follows: all 0D, 1D, and 2D\n"
  "cells are extracted. All 2D faces that are used by only one 3D cell\n"
  "(i.e., boundary faces) are extracted. It also is possible to specify\n"
  "conditions on point ids, cell ids, and on a bounding box (referred to\n"
  "as \"Extent\") to control the extraction process.  This point and cell\n"
  "id- and extent-based clipping is a powerful way to \"see inside\"\n"
  "datasets; however it may impact performance significantly.\n\n"
  "This filter may also be used to convert any type of data to polygonal\n"
  "type. This is particularly useful for surface rendering. The\n"
  "conversion process may be less than satisfactory for some 3D\n"
  "datasets. For example, this filter will extract the outer surface of\n"
  "a volume or structured grid dataset (if point, cell, and extent\n"
  "clipping is disabled). (For structured data you may want to use\n"
  "vtkImageDataGeometryFilter, vtkStructuredGridGeometryFilter,\n"
  "vtkExtractUnstructuredGrid, vtkRectilinearGridGeometryFilter, or\n"
  "vtkExtractVOI.)\n\n"
  "Another important feature of vtkGeometryFilter is that it preserves\n"
  "topological connectivity. This enables filters that depend on correct\n"
  "connectivity (e.g., vtkQuadricDecimation, vtkFeatureEdges, etc.) to\n"
  "operate properly . It is possible to label the output polydata with\n"
  "an originating cell (PassThroughCellIds) or point id\n"
  "(PassThroughPointIds). The output precision of created points (if\n"
  "they need to be created) can also be specified.\n\n"
  "Finally, this filter takes an optional second, vtkPolyData input.\n"
  "This input represents a list of faces that are to be excluded from\n"
  "the output of vtkGeometryFilter.\n\n"
  "@warning\n"
  "While vtkGeometryFilter and vtkDataSetSurfaceFilter perform similar\n"
  "operations, there are important differences as follows:\n"
  "1. vtkGeometryFilter can preserve (using RemoveGhostInterfaces)\n"
  "   topological connectivity. vtkDataSetSurfaceFilter produces output\n"
  "   primitives which may be disconnected from one another.\n"
  "2. vtkGeometryFilter can generate output based on cell ids, point\n"
  "   ids, and/or extent (bounding box) clipping.\n"
  "   vtkDataSetSurfaceFilter strictly extracts the boundary surface of\n"
  "   a dataset.\n"
  "3. vtkGeometryFilter is much faster than vtkDataSetSurfaceFilter,\n"
  "   because it's multi-threaded. As a result, vtkDataSetSurfaceFilter\n"
  "   will delegate the processing of linear unstructured grids to\n"
  "   vtkGeometryFilter.\n"
  "4. vtkGeometryFilter can (currently) only handle linear cells. The\n"
  "   filter will delegate to vtkDataSetSurfaceFilter for higher-order\n"
  "   cells. (This is a historical artifact and may be rectified in the\n"
  "   future.)\n\n"
  "@warning\n"
  "If point merging (MergingOff) is disabled, the filter will (if\n"
  "possible) use the input points and point attributes.  This can result\n"
  "in a lot of unused points in the output, at some gain in filter\n"
  "performance.  If enabled, point merging will generate only new points\n"
  "that are used by the output polydata cells.\n\n"
  "@warning\n"
  "This class is templated. It may run slower than serial execution if\n"
  "the code is not optimized during compilation. Build in Release or\n"
  "ReleaseWithDebugInfo.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkDataSetSurfaceFilter vtkImageDataGeometryFilter\n"
  "vtkStructuredGridGeometryFilter vtkExtractGeometry vtkExtractVOI\n"
  "vtkMarkBoundaryFilter vtkRemovePolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGeometryFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkGeometryFilter", // tp_name
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
  PyvtkGeometryFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGeometryFilter_StaticNew()
{
  return vtkGeometryFilter::New();
}

PyObject *PyvtkGeometryFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGeometryFilter_Type, PyvtkGeometryFilter_Methods,
    "vtkGeometryFilter",
 &PyvtkGeometryFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGeometryFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGeometryFilterHelper_TypeNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometryFilterHelper", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyvtkGeometryFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGeometryFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

