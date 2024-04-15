// python wrapper for vtkQuantizePolyDataPoints
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkQuantizePolyDataPoints.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkQuantizePolyDataPoints(PyObject *dict); }
extern "C" { PyObject *PyvtkQuantizePolyDataPoints_ClassNew(); }


static PyObject *
PyvtkQuantizePolyDataPoints_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkQuantizePolyDataPoints::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkQuantizePolyDataPoints::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkQuantizePolyDataPoints *tempr = vtkQuantizePolyDataPoints::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkQuantizePolyDataPoints *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkQuantizePolyDataPoints::NewInstance());

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
PyvtkQuantizePolyDataPoints_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkQuantizePolyDataPoints::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkQuantizePolyDataPoints::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_SetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetQFactor(temp0);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::SetQFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMinValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactorMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactorMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactorMaxValue() :
      op->vtkQuantizePolyDataPoints::GetQFactorMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_GetQFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetQFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetQFactor() :
      op->vtkQuantizePolyDataPoints::GetQFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnPoint(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnPoint");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  const size_t size1 = 3;
  double temp1[3];
  double save1[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnPoint(temp0, temp1);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::OperateOnPoint(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkQuantizePolyDataPoints_OperateOnBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OperateOnBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkQuantizePolyDataPoints *op = static_cast<vtkQuantizePolyDataPoints *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  double save0[6];
  const size_t size1 = 6;
  double temp1[6];
  double save1[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp0, save0, size0);
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->OperateOnBounds(temp0, temp1);
    }
    else
    {
      op->vtkQuantizePolyDataPoints::OperateOnBounds(temp0, temp1);
    }

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
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkQuantizePolyDataPoints_Methods[] = {
  {"IsTypeOf", PyvtkQuantizePolyDataPoints_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkQuantizePolyDataPoints_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkQuantizePolyDataPoints_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkQuantizePolyDataPoints\nC++: static vtkQuantizePolyDataPoints *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkQuantizePolyDataPoints_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkQuantizePolyDataPoints\nC++: vtkQuantizePolyDataPoints *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkQuantizePolyDataPoints_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkQuantizePolyDataPoints_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetQFactor", PyvtkQuantizePolyDataPoints_SetQFactor, METH_VARARGS,
   "SetQFactor(self, _arg:float) -> None\nC++: virtual void SetQFactor(double _arg)\n\nSpecify quantization grain size. Default is 0.25\n"},
  {"GetQFactorMinValue", PyvtkQuantizePolyDataPoints_GetQFactorMinValue, METH_VARARGS,
   "GetQFactorMinValue(self) -> float\nC++: virtual double GetQFactorMinValue()\n\n"},
  {"GetQFactorMaxValue", PyvtkQuantizePolyDataPoints_GetQFactorMaxValue, METH_VARARGS,
   "GetQFactorMaxValue(self) -> float\nC++: virtual double GetQFactorMaxValue()\n\n"},
  {"GetQFactor", PyvtkQuantizePolyDataPoints_GetQFactor, METH_VARARGS,
   "GetQFactor(self) -> float\nC++: virtual double GetQFactor()\n\n"},
  {"OperateOnPoint", PyvtkQuantizePolyDataPoints_OperateOnPoint, METH_VARARGS,
   "OperateOnPoint(self, in_:[float, float, float], out:[float, float,\n     float]) -> None\nC++: void OperateOnPoint(double in[3], double out[3]) override;\n\nPerform quantization on a point\n"},
  {"OperateOnBounds", PyvtkQuantizePolyDataPoints_OperateOnBounds, METH_VARARGS,
   "OperateOnBounds(self, in_:[float, float, float, float, float,\n    float], out:[float, float, float, float, float, float])\n    -> None\nC++: void OperateOnBounds(double in[6], double out[6]) override;\n\nPerform quantization on bounds\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkQuantizePolyDataPoints_Doc =
  "vtkQuantizePolyDataPoints - quantizes x,y,z coordinates of points\n\n"
  "Superclass: vtkCleanPolyData\n\n"
  "vtkQuantizePolyDataPoints is a subclass of vtkCleanPolyData and\n"
  "inherits the functionality of vtkCleanPolyData with the addition that\n"
  "it quantizes the point coordinates before inserting into the point\n"
  "list. The user should set QFactor to a positive value (0.25 by\n"
  "default) and all {x,y,z} coordinates will be quantized to that grain\n"
  "size.\n\n"
  "A tolerance of zero is expected, though positive values may be used,\n"
  "the quantization will take place before the tolerance is applied.\n\n"
  "@warning\n"
  "Merging points can alter topology, including introducing non-manifold\n"
  "forms. Handling of degenerate cells is controlled by switches in\n"
  "vtkCleanPolyData.\n\n"
  "@warning\n"
  "If you wish to operate on a set of coordinates that has no cells, you\n"
  "must add a vtkPolyVertex cell with all of the points to the PolyData\n"
  "(or use a vtkVertexGlyphFilter) before using the vtkCleanPolyData\n"
  "filter.\n\n"
  "@sa\n"
  "vtkCleanPolyData\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkQuantizePolyDataPoints_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkQuantizePolyDataPoints", // tp_name
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
  PyvtkQuantizePolyDataPoints_Doc, // tp_doc
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

static vtkObjectBase *PyvtkQuantizePolyDataPoints_StaticNew()
{
  return vtkQuantizePolyDataPoints::New();
}

PyObject *PyvtkQuantizePolyDataPoints_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkQuantizePolyDataPoints_Type, PyvtkQuantizePolyDataPoints_Methods,
    "vtkQuantizePolyDataPoints",
 &PyvtkQuantizePolyDataPoints_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCleanPolyData");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkQuantizePolyDataPoints(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkQuantizePolyDataPoints_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkQuantizePolyDataPoints", o) != 0)
  {
    Py_DECREF(o);
  }

}

