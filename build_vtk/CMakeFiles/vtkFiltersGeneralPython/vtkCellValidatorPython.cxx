// python wrapper for vtkCellValidator
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCellValidator.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCellValidator(PyObject *dict); }
extern "C" { PyObject *PyvtkCellValidator_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellValidator_State_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCellValidator.State", // tp_name
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
PyObject *PyvtkCellValidator_State_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkCellValidator_State_Type, static_cast<int>(val));
}


static PyObject *
PyvtkCellValidator_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCellValidator::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCellValidator::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCellValidator *tempr = vtkCellValidator::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCellValidator *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCellValidator::NewInstance());

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
PyvtkCellValidator_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCellValidator::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCellValidator::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_Check_s1(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkGenericCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkGenericCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s2(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s3(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkEmptyCell *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkEmptyCell") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s4(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkVertex *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVertex") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyVertex *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyVertex") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s6(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s7(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s8(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s9(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriangleStrip *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriangleStrip") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s10(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolygon *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolygon") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s11(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPixel *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPixel") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s12(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s13(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s14(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkVoxel *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkVoxel") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s15(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s16(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s17(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPyramid *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPyramid") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s18(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPentagonalPrism *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPentagonalPrism") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s19(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkHexagonalPrism *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkHexagonalPrism") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s20(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticEdge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticEdge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s21(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s22(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s23(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticPolygon *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticPolygon") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s24(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s25(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s26(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s27(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticPyramid *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticPyramid") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s28(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s29(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s30(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkTriQuadraticPyramid *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkTriQuadraticPyramid") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s31(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticLinearQuad *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticLinearQuad") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s32(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkQuadraticLinearWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkQuadraticLinearWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s33(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuadraticWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuadraticWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s34(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticQuadraticHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticQuadraticHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s35(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBiQuadraticTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBiQuadraticTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s36(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkCubicLine *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkCubicLine") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s37(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkConvexPointSet *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkConvexPointSet") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s38(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkPolyhedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPolyhedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s39(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeCurve *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeCurve") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s40(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s41(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeQuadrilateral *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeQuadrilateral") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s42(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s43(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s44(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkLagrangeWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkLagrangeWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s45(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierCurve *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierCurve") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s46(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierTriangle *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierTriangle") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s47(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierQuadrilateral *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierQuadrilateral") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s48(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierTetra *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierTetra") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s49(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierHexahedron *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierHexahedron") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkCellValidator_Check_s50(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "Check");

  vtkBezierWedge *temp0 = nullptr;
  double temp1;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkBezierWedge") &&
      ap.GetValue(temp1))
  {
    typedef vtkCellValidator::State tempr_type;
  tempr_type tempr = vtkCellValidator::Check(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkCellValidator_State_FromEnum(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellValidator_Check_Methods[] = {
  {"Check", PyvtkCellValidator_Check_s1, METH_VARARGS | METH_STATIC,
   "Vd *vtkGenericCell"},
  {"Check", PyvtkCellValidator_Check_s2, METH_VARARGS | METH_STATIC,
   "Vd *vtkCell"},
  {"Check", PyvtkCellValidator_Check_s3, METH_VARARGS | METH_STATIC,
   "Vd *vtkEmptyCell"},
  {"Check", PyvtkCellValidator_Check_s4, METH_VARARGS | METH_STATIC,
   "Vd *vtkVertex"},
  {"Check", PyvtkCellValidator_Check_s5, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyVertex"},
  {"Check", PyvtkCellValidator_Check_s6, METH_VARARGS | METH_STATIC,
   "Vd *vtkLine"},
  {"Check", PyvtkCellValidator_Check_s7, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyLine"},
  {"Check", PyvtkCellValidator_Check_s8, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriangle"},
  {"Check", PyvtkCellValidator_Check_s9, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriangleStrip"},
  {"Check", PyvtkCellValidator_Check_s10, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolygon"},
  {"Check", PyvtkCellValidator_Check_s11, METH_VARARGS | METH_STATIC,
   "Vd *vtkPixel"},
  {"Check", PyvtkCellValidator_Check_s12, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuad"},
  {"Check", PyvtkCellValidator_Check_s13, METH_VARARGS | METH_STATIC,
   "Vd *vtkTetra"},
  {"Check", PyvtkCellValidator_Check_s14, METH_VARARGS | METH_STATIC,
   "Vd *vtkVoxel"},
  {"Check", PyvtkCellValidator_Check_s15, METH_VARARGS | METH_STATIC,
   "Vd *vtkHexahedron"},
  {"Check", PyvtkCellValidator_Check_s16, METH_VARARGS | METH_STATIC,
   "Vd *vtkWedge"},
  {"Check", PyvtkCellValidator_Check_s17, METH_VARARGS | METH_STATIC,
   "Vd *vtkPyramid"},
  {"Check", PyvtkCellValidator_Check_s18, METH_VARARGS | METH_STATIC,
   "Vd *vtkPentagonalPrism"},
  {"Check", PyvtkCellValidator_Check_s19, METH_VARARGS | METH_STATIC,
   "Vd *vtkHexagonalPrism"},
  {"Check", PyvtkCellValidator_Check_s20, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticEdge"},
  {"Check", PyvtkCellValidator_Check_s21, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticTriangle"},
  {"Check", PyvtkCellValidator_Check_s22, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticQuad"},
  {"Check", PyvtkCellValidator_Check_s23, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticPolygon"},
  {"Check", PyvtkCellValidator_Check_s24, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticTetra"},
  {"Check", PyvtkCellValidator_Check_s25, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticHexahedron"},
  {"Check", PyvtkCellValidator_Check_s26, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticWedge"},
  {"Check", PyvtkCellValidator_Check_s27, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticPyramid"},
  {"Check", PyvtkCellValidator_Check_s28, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuad"},
  {"Check", PyvtkCellValidator_Check_s29, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriQuadraticHexahedron"},
  {"Check", PyvtkCellValidator_Check_s30, METH_VARARGS | METH_STATIC,
   "Vd *vtkTriQuadraticPyramid"},
  {"Check", PyvtkCellValidator_Check_s31, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticLinearQuad"},
  {"Check", PyvtkCellValidator_Check_s32, METH_VARARGS | METH_STATIC,
   "Vd *vtkQuadraticLinearWedge"},
  {"Check", PyvtkCellValidator_Check_s33, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuadraticWedge"},
  {"Check", PyvtkCellValidator_Check_s34, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticQuadraticHexahedron"},
  {"Check", PyvtkCellValidator_Check_s35, METH_VARARGS | METH_STATIC,
   "Vd *vtkBiQuadraticTriangle"},
  {"Check", PyvtkCellValidator_Check_s36, METH_VARARGS | METH_STATIC,
   "Vd *vtkCubicLine"},
  {"Check", PyvtkCellValidator_Check_s37, METH_VARARGS | METH_STATIC,
   "Vd *vtkConvexPointSet"},
  {"Check", PyvtkCellValidator_Check_s38, METH_VARARGS | METH_STATIC,
   "Vd *vtkPolyhedron"},
  {"Check", PyvtkCellValidator_Check_s39, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeCurve"},
  {"Check", PyvtkCellValidator_Check_s40, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeTriangle"},
  {"Check", PyvtkCellValidator_Check_s41, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeQuadrilateral"},
  {"Check", PyvtkCellValidator_Check_s42, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeTetra"},
  {"Check", PyvtkCellValidator_Check_s43, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeHexahedron"},
  {"Check", PyvtkCellValidator_Check_s44, METH_VARARGS | METH_STATIC,
   "Vd *vtkLagrangeWedge"},
  {"Check", PyvtkCellValidator_Check_s45, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierCurve"},
  {"Check", PyvtkCellValidator_Check_s46, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierTriangle"},
  {"Check", PyvtkCellValidator_Check_s47, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierQuadrilateral"},
  {"Check", PyvtkCellValidator_Check_s48, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierTetra"},
  {"Check", PyvtkCellValidator_Check_s49, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierHexahedron"},
  {"Check", PyvtkCellValidator_Check_s50, METH_VARARGS | METH_STATIC,
   "Vd *vtkBezierWedge"},
  {nullptr, nullptr, 0, nullptr}
};

static PyObject *
PyvtkCellValidator_Check(PyObject *self, PyObject *args)
{
  PyMethodDef *methods = PyvtkCellValidator_Check_Methods;
  int nargs = vtkPythonArgs::GetArgCount(args);

  switch(nargs)
  {
    case 2:
      return vtkPythonOverload::CallMethod(methods, self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "Check");
  return nullptr;
}


static PyObject *
PyvtkCellValidator_SetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

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
      op->vtkCellValidator::SetTolerance(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetToleranceMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMinValue() :
      op->vtkCellValidator::GetToleranceMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetToleranceMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetToleranceMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetToleranceMaxValue() :
      op->vtkCellValidator::GetToleranceMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCellValidator_GetTolerance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTolerance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCellValidator *op = static_cast<vtkCellValidator *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetTolerance() :
      op->vtkCellValidator::GetTolerance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkCellValidator_Methods[] = {
  {"IsTypeOf", PyvtkCellValidator_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCellValidator_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCellValidator_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCellValidator\nC++: static vtkCellValidator *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCellValidator_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCellValidator\nC++: vtkCellValidator *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCellValidator_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCellValidator_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Check", PyvtkCellValidator_Check, METH_VARARGS,
   "Check(__a:vtkGenericCell, tolerance:float) -> State\nC++: static State Check(vtkGenericCell *, double tolerance)\nCheck(__a:vtkCell, tolerance:float) -> State\nC++: static State Check(vtkCell *, double tolerance)\nCheck(__a:vtkEmptyCell, tolerance:float) -> State\nC++: static State Check(vtkEmptyCell *, double tolerance)\nCheck(__a:vtkVertex, tolerance:float) -> State\nC++: static State Check(vtkVertex *, double tolerance)\nCheck(__a:vtkPolyVertex, tolerance:float) -> State\nC++: static State Check(vtkPolyVertex *, double tolerance)\nCheck(__a:vtkLine, tolerance:float) -> State\nC++: static State Check(vtkLine *, double tolerance)\nCheck(__a:vtkPolyLine, tolerance:float) -> State\nC++: static State Check(vtkPolyLine *, double tolerance)\nCheck(__a:vtkTriangle, tolerance:float) -> State\nC++: static State Check(vtkTriangle *, double tolerance)\nCheck(__a:vtkTriangleStrip, tolerance:float) -> State\nC++: static State Check(vtkTriangleStrip *, double tolerance)\nCheck(__a:vtkPolygon, tolerance:float) -> State\nC++: static State Check(vtkPolygon *, double tolerance)\nCheck(__a:vtkPixel, tolerance:float) -> State\nC++: static State Check(vtkPixel *, double tolerance)\nCheck(__a:vtkQuad, tolerance:float) -> State\nC++: static State Check(vtkQuad *, double tolerance)\nCheck(__a:vtkTetra, tolerance:float) -> State\nC++: static State Check(vtkTetra *, double tolerance)\nCheck(__a:vtkVoxel, tolerance:float) -> State\nC++: static State Check(vtkVoxel *, double tolerance)\nCheck(__a:vtkHexahedron, tolerance:float) -> State\nC++: static State Check(vtkHexahedron *, double tolerance)\nCheck(__a:vtkWedge, tolerance:float) -> State\nC++: static State Check(vtkWedge *, double tolerance)\nCheck(__a:vtkPyramid, tolerance:float) -> State\nC++: static State Check(vtkPyramid *, double tolerance)\nCheck(__a:vtkPentagonalPrism, tolerance:float) -> State\nC++: static State Check(vtkPentagonalPrism *, double tolerance)\n\n"},
  {"SetTolerance", PyvtkCellValidator_SetTolerance, METH_VARARGS,
   "SetTolerance(self, _arg:float) -> None\nC++: virtual void SetTolerance(double _arg)\n\nSet/Get the tolerance. This value is used as an epsilon for\nfloating point equality checks throughout the cell checking\nprocess. The default value is FLT_EPSILON.\n"},
  {"GetToleranceMinValue", PyvtkCellValidator_GetToleranceMinValue, METH_VARARGS,
   "GetToleranceMinValue(self) -> float\nC++: virtual double GetToleranceMinValue()\n\n"},
  {"GetToleranceMaxValue", PyvtkCellValidator_GetToleranceMaxValue, METH_VARARGS,
   "GetToleranceMaxValue(self) -> float\nC++: virtual double GetToleranceMaxValue()\n\n"},
  {"GetTolerance", PyvtkCellValidator_GetTolerance, METH_VARARGS,
   "GetTolerance(self) -> float\nC++: virtual double GetTolerance()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCellValidator_Doc =
  "vtkCellValidator - validates cells in a dataset\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkCellValidator accepts as input a dataset and adds integral cell\n"
  "data to it corresponding to the \"validity\" of each cell. The validity\n"
  "field encodes a bitfield for identifying problems that prevent a cell\n"
  "from standard use, including:\n\n\n"
  "  WrongNumberOfPoints: filters assume that a cell has access to the\n"
  "                       appropriate number of points that comprise it.\n"
  "This\n"
  "                       assumption is often tacit, resulting in\n"
  "unexpected\n"
  "                       behavior when the condition is not met. This\n"
  "check\n"
  "                       simply confirms that the cell has the minimum\n"
  "number\n"
  "                       of points needed to describe it.\n\n\n"
  "  IntersectingEdges: cells that incorrectly describe the order of\n"
  "their\n"
  "                     points often manifest with intersecting edges or\n"
  "                     intersecting faces. Given a tolerance, this\n"
  "check\n"
  "                     ensures that two edges from a two-dimensional\n"
  "cell\n"
  "                     are separated by at least the tolerance\n"
  "(discounting\n"
  "                     end-to-end connections).\n\n\n"
  "  IntersectingFaces: cells that incorrectly describe the order of\n"
  "their\n"
  "                     points often manifest with intersecting edges or\n"
  "                     intersecting faces. Given a tolerance, this\n"
  "check\n"
  "                     ensures that two faces from a three-dimensional\n"
  "cell\n"
  "                     do not intersect.\n\n\n"
  "  NoncontiguousEdges: another symptom of incorrect point ordering\n"
  "within a\n"
  "                      cell is the presence of noncontiguous edges\n"
  "where\n"
  "                      contiguous edges are otherwise expected. Given\n"
  "a\n"
  "                      tolerance, this check ensures that edges around\n"
  "the\n"
  "                      perimeter of a two-dimensional cell are\n"
  "contiguous.\n\n\n"
  "  Nonconvex: many algorithms implicitly require that all input three-\n"
  "             dimensional cells be convex. This check uses the generic\n"
  "             convexity checkers implemented in vtkPolygon and\n"
  "vtkPolyhedron\n"
  "             to test this requirement.\n\n\n"
  "  FacesAreOrientedIncorrectly: All three-dimensional cells have an\n"
  "implicit\n"
  "                               expectation for the orientation of\n"
  "their\n"
  "                               faces. While the convention is\n"
  "unfortunately\n"
  "                               inconsistent across cell types, it is\n"
  "usually\n"
  "                               required that cell faces point\n"
  "outward. This\n"
  "                               check tests that the faces of a cell\n"
  "point in\n"
  "                               the direction required by the cell\n"
  "type,\n"
  "                               taking into account the cell types\n"
  "with\n"
  "                               nonstandard orientation requirements.\n\n"
  "@sa\n"
  "vtkCellQuality\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCellValidator_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCellValidator", // tp_name
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
  PyvtkCellValidator_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCellValidator_StaticNew()
{
  return vtkCellValidator::New();
}

PyObject *PyvtkCellValidator_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCellValidator_Type, PyvtkCellValidator_Methods,
    "vtkCellValidator",
 &PyvtkCellValidator_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkCellValidator_State_Type);
  PyVTKEnum_Add(&PyvtkCellValidator_State_Type, "vtkCellValidator.State");

  o = (PyObject *)&PyvtkCellValidator_State_Type;
  if (PyDict_SetItemString(d, "State", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 7; c++)
  {
    typedef vtkCellValidator::State cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[7] = {
        { "Valid", vtkCellValidator::Valid },
        { "WrongNumberOfPoints", vtkCellValidator::WrongNumberOfPoints },
        { "IntersectingEdges", vtkCellValidator::IntersectingEdges },
        { "IntersectingFaces", vtkCellValidator::IntersectingFaces },
        { "NoncontiguousEdges", vtkCellValidator::NoncontiguousEdges },
        { "Nonconvex", vtkCellValidator::Nonconvex },
        { "FacesAreOrientedIncorrectly", vtkCellValidator::FacesAreOrientedIncorrectly },
      };

    o = PyvtkCellValidator_State_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCellValidator(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCellValidator_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCellValidator", o) != 0)
  {
    Py_DECREF(o);
  }

}

