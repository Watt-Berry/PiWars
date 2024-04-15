// python wrapper for vtkProbePolyhedron
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProbePolyhedron.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProbePolyhedron(PyObject *dict); }
extern "C" { PyObject *PyvtkProbePolyhedron_ClassNew(); }


static PyObject *
PyvtkProbePolyhedron_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProbePolyhedron::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProbePolyhedron::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProbePolyhedron *tempr = vtkProbePolyhedron::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProbePolyhedron *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProbePolyhedron::NewInstance());

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
PyvtkProbePolyhedron_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProbePolyhedron::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProbePolyhedron::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetSourceData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetSourceData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetSourceData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyData *tempr = (ap.IsBound() ?
      op->GetSource() :
      op->vtkProbePolyhedron::GetSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetSourceConnection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSourceConnection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

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
      op->vtkProbePolyhedron::SetSourceConnection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbePointData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetProbePointData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbePointData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePointData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProbePointData() :
      op->vtkProbePolyhedron::GetProbePointData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbePointDataOn();
    }
    else
    {
      op->vtkProbePolyhedron::ProbePointDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbePointDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbePointDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbePointDataOff();
    }
    else
    {
      op->vtkProbePolyhedron::ProbePointDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_SetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbeCellData(temp0);
    }
    else
    {
      op->vtkProbePolyhedron::SetProbeCellData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_GetProbeCellData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetProbeCellData() :
      op->vtkProbePolyhedron::GetProbeCellData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbeCellDataOn();
    }
    else
    {
      op->vtkProbePolyhedron::ProbeCellDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProbePolyhedron_ProbeCellDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ProbeCellDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProbePolyhedron *op = static_cast<vtkProbePolyhedron *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ProbeCellDataOff();
    }
    else
    {
      op->vtkProbePolyhedron::ProbeCellDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProbePolyhedron_Methods[] = {
  {"IsTypeOf", PyvtkProbePolyhedron_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProbePolyhedron_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProbePolyhedron_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProbePolyhedron\nC++: static vtkProbePolyhedron *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProbePolyhedron_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProbePolyhedron\nC++: vtkProbePolyhedron *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProbePolyhedron_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProbePolyhedron_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSourceData", PyvtkProbePolyhedron_SetSourceData, METH_VARARGS,
   "SetSourceData(self, source:vtkPolyData) -> None\nC++: void SetSourceData(vtkPolyData *source)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used.\n"},
  {"GetSource", PyvtkProbePolyhedron_GetSource, METH_VARARGS,
   "GetSource(self) -> vtkPolyData\nC++: vtkPolyData *GetSource()\n\n"},
  {"SetSourceConnection", PyvtkProbePolyhedron_SetSourceConnection, METH_VARARGS,
   "SetSourceConnection(self, algOutput:vtkAlgorithmOutput) -> None\nC++: void SetSourceConnection(vtkAlgorithmOutput *algOutput)\n\nSpecify the point locations used to probe input. Any geometry can\nbe used. New style. Equivalent to SetInputConnection(1,\nalgOutput).\n"},
  {"SetProbePointData", PyvtkProbePolyhedron_SetProbePointData, METH_VARARGS,
   "SetProbePointData(self, _arg:int) -> None\nC++: virtual void SetProbePointData(vtkTypeBool _arg)\n\nSpecify whether to probe (and hence produce) point data. The\ninterpolated point data of the source will produce the output\npoint data (output points are passed from the input points).\n"},
  {"GetProbePointData", PyvtkProbePolyhedron_GetProbePointData, METH_VARARGS,
   "GetProbePointData(self) -> int\nC++: virtual vtkTypeBool GetProbePointData()\n\n"},
  {"ProbePointDataOn", PyvtkProbePolyhedron_ProbePointDataOn, METH_VARARGS,
   "ProbePointDataOn(self) -> None\nC++: virtual void ProbePointDataOn()\n\n"},
  {"ProbePointDataOff", PyvtkProbePolyhedron_ProbePointDataOff, METH_VARARGS,
   "ProbePointDataOff(self) -> None\nC++: virtual void ProbePointDataOff()\n\n"},
  {"SetProbeCellData", PyvtkProbePolyhedron_SetProbeCellData, METH_VARARGS,
   "SetProbeCellData(self, _arg:int) -> None\nC++: virtual void SetProbeCellData(vtkTypeBool _arg)\n\nSpecify whether to probe (and hence produce) cell data. The\ninterpolated point data of the source will produce the output\ncell data (output cells are passed from the input cells). Note\nthat the probing of the input uses the centers of the cells as\nthe probe position.\n"},
  {"GetProbeCellData", PyvtkProbePolyhedron_GetProbeCellData, METH_VARARGS,
   "GetProbeCellData(self) -> int\nC++: virtual vtkTypeBool GetProbeCellData()\n\n"},
  {"ProbeCellDataOn", PyvtkProbePolyhedron_ProbeCellDataOn, METH_VARARGS,
   "ProbeCellDataOn(self) -> None\nC++: virtual void ProbeCellDataOn()\n\n"},
  {"ProbeCellDataOff", PyvtkProbePolyhedron_ProbeCellDataOff, METH_VARARGS,
   "ProbeCellDataOff(self) -> None\nC++: virtual void ProbeCellDataOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProbePolyhedron_Doc =
  "vtkProbePolyhedron - probe/interpolate data values in the interior,\nexterior or of the surface of a closed, manifold polyhedron\n\n"
  "Superclass: vtkDataSetAlgorithm\n\n"
  "vtkProbePolyhedron is a filter that computes point attributes (e.g.,\n"
  "scalars, vectors, etc.) at specified point positions. The filter has\n"
  "two inputs: the Input and Source. The Source geometric structure is\n"
  "passed through the filter. The point attributes are computed at the\n"
  "Input point positions by interpolating into the source data. In this\n"
  "filter, the Source is always a closed, non-self-intersecting,\n"
  "polyhedral mesh. For example, we can compute data values on a plane\n"
  "(plane specified as Input) from a triangle mesh (e.g., output of\n"
  "marching cubes).\n\n"
  "This filter can be used to resample data from a mesh onto a different\n"
  "dataset type. For example, a polyhedral mesh (vtkPolyData) can be\n"
  "probed with a volume (three-dimensional vtkImageData), and then\n"
  "volume rendering techniques can be used to visualize the results.\n"
  "Another example: a line or curve can be used to probe a mesh to\n"
  "produce x-y plots along that line or curve.\n\n"
  "@warning\n"
  "Note that cell data is not interpolated from the source. If you need\n"
  "cell data, you can always use vtkPointDataToCellData and/or\n"
  "vtkCellDataToPointData in various combinations.\n\n"
  "@warning\n"
  "Note that the filter interpolates from a mesh to points interior,\n"
  "exterior or on the surface of the mesh. This process is necessarily\n"
  "an approximation. Currently the approach of Mean Value Coordinates is\n"
  "used, but this filter may be extended in the future to use other\n"
  "methods.\n\n"
  "@sa\n"
  "vtkProbeFilter vtkMeanValueCoordinatesInterpolator vtkPolyhedron\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProbePolyhedron_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkProbePolyhedron", // tp_name
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
  PyvtkProbePolyhedron_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProbePolyhedron_StaticNew()
{
  return vtkProbePolyhedron::New();
}

PyObject *PyvtkProbePolyhedron_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProbePolyhedron_Type, PyvtkProbePolyhedron_Methods,
    "vtkProbePolyhedron",
 &PyvtkProbePolyhedron_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkDataSetAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProbePolyhedron(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProbePolyhedron_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProbePolyhedron", o) != 0)
  {
    Py_DECREF(o);
  }

}

