// python wrapper for vtkCurvatures
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkCurvatures.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkCurvatures(PyObject *dict); }
extern "C" { PyObject *PyvtkCurvatures_ClassNew(); }


static PyObject *
PyvtkCurvatures_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkCurvatures::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkCurvatures::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkCurvatures *tempr = vtkCurvatures::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCurvatures *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkCurvatures::NewInstance());

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
PyvtkCurvatures_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkCurvatures::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkCurvatures::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureType(temp0);
    }
    else
    {
      op->vtkCurvatures::SetCurvatureType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_GetCurvatureType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCurvatureType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetCurvatureType() :
      op->vtkCurvatures::GetCurvatureType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToGaussian(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToGaussian");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToGaussian();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToGaussian();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMean(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMean");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMean();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMean();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMaximum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMaximum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMaximum();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMaximum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetCurvatureTypeToMinimum(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCurvatureTypeToMinimum");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetCurvatureTypeToMinimum();
    }
    else
    {
      op->vtkCurvatures::SetCurvatureTypeToMinimum();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_SetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInvertMeanCurvature(temp0);
    }
    else
    {
      op->vtkCurvatures::SetInvertMeanCurvature(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_GetInvertMeanCurvature(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInvertMeanCurvature");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetInvertMeanCurvature() :
      op->vtkCurvatures::GetInvertMeanCurvature());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertMeanCurvatureOn();
    }
    else
    {
      op->vtkCurvatures::InvertMeanCurvatureOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkCurvatures_InvertMeanCurvatureOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InvertMeanCurvatureOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkCurvatures *op = static_cast<vtkCurvatures *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InvertMeanCurvatureOff();
    }
    else
    {
      op->vtkCurvatures::InvertMeanCurvatureOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkCurvatures_Methods[] = {
  {"IsTypeOf", PyvtkCurvatures_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkCurvatures_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkCurvatures_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkCurvatures\nC++: static vtkCurvatures *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkCurvatures_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkCurvatures\nC++: vtkCurvatures *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkCurvatures_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkCurvatures_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCurvatureType", PyvtkCurvatures_SetCurvatureType, METH_VARARGS,
   "SetCurvatureType(self, _arg:int) -> None\nC++: virtual void SetCurvatureType(int _arg)\n\nSet/Get Curvature type VTK_CURVATURE_GAUSS: Gaussian curvature,\nstored as DataArray \"Gauss_Curvature\" VTK_CURVATURE_MEAN : Mean\ncurvature, stored as DataArray \"Mean_Curvature\"\n"},
  {"GetCurvatureType", PyvtkCurvatures_GetCurvatureType, METH_VARARGS,
   "GetCurvatureType(self) -> int\nC++: virtual int GetCurvatureType()\n\n"},
  {"SetCurvatureTypeToGaussian", PyvtkCurvatures_SetCurvatureTypeToGaussian, METH_VARARGS,
   "SetCurvatureTypeToGaussian(self) -> None\nC++: void SetCurvatureTypeToGaussian()\n\n"},
  {"SetCurvatureTypeToMean", PyvtkCurvatures_SetCurvatureTypeToMean, METH_VARARGS,
   "SetCurvatureTypeToMean(self) -> None\nC++: void SetCurvatureTypeToMean()\n\n"},
  {"SetCurvatureTypeToMaximum", PyvtkCurvatures_SetCurvatureTypeToMaximum, METH_VARARGS,
   "SetCurvatureTypeToMaximum(self) -> None\nC++: void SetCurvatureTypeToMaximum()\n\n"},
  {"SetCurvatureTypeToMinimum", PyvtkCurvatures_SetCurvatureTypeToMinimum, METH_VARARGS,
   "SetCurvatureTypeToMinimum(self) -> None\nC++: void SetCurvatureTypeToMinimum()\n\n"},
  {"SetInvertMeanCurvature", PyvtkCurvatures_SetInvertMeanCurvature, METH_VARARGS,
   "SetInvertMeanCurvature(self, _arg:int) -> None\nC++: virtual void SetInvertMeanCurvature(vtkTypeBool _arg)\n\nSet/Get the flag which inverts the mean curvature calculation for\nmeshes with inward pointing normals (default false)\n"},
  {"GetInvertMeanCurvature", PyvtkCurvatures_GetInvertMeanCurvature, METH_VARARGS,
   "GetInvertMeanCurvature(self) -> int\nC++: virtual vtkTypeBool GetInvertMeanCurvature()\n\n"},
  {"InvertMeanCurvatureOn", PyvtkCurvatures_InvertMeanCurvatureOn, METH_VARARGS,
   "InvertMeanCurvatureOn(self) -> None\nC++: virtual void InvertMeanCurvatureOn()\n\n"},
  {"InvertMeanCurvatureOff", PyvtkCurvatures_InvertMeanCurvatureOff, METH_VARARGS,
   "InvertMeanCurvatureOff(self) -> None\nC++: virtual void InvertMeanCurvatureOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkCurvatures_Doc =
  "vtkCurvatures - compute curvatures (Gauss and mean) of a Polydata\nobject\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkCurvatures takes a polydata input and computes the curvature of\n"
  "the mesh at each point. Four possible methods of computation are\n"
  "available :\n\n"
  "Gauss Curvature discrete Gauss curvature ( $ K $),$K_v =\n"
  "2\\pi-n_vf_v(\\alpha) $, where $K_v $ is the curvature at vertex $v $,\n"
  "$n_v $ the facet neighbours of the vertex $v $ and $f_v(\\alpha) $ is\n"
  "the angle of $f $ at vertex $v $. The contribution of every facet is\n"
  "for the moment weighted by the (area of each facet)/3 The units of\n"
  "Gaussian Curvature are $m^{-2} $.\n\n"
  "Mean Curvature $H_v = \\overline{H_e} $, where $\\overline{H_e} $ is\n"
  "the average over the edge neighbours of $H_e $.$H_e = l(e)*\\alpha(e) $\n"
  "where $e $ is an edge, $l $ is the length and $\\alpha $ is the\n"
  "dihederal angle such that$-\\pi < \\alpha < \\pi $. This means that the\n"
  "surface is assumed to be orientable and the computation creates the\n"
  "orientation. The units of Mean Curvature are $m^{-1} $.\n\n"
  "Maximum ( $k_{max} $) and Minimum ( $k_{min} $) Principal Curvatures\n"
  " are $k_{max} = H + \\sqrt{H^2 - K} $ and$k_{min} = H - \\sqrt{H^2 - K}\n"
  "$. Excepting spherical and planar surfaces which have equal principal\n"
  "curvatures, the curvature at a point on a surface varies with the\n"
  "direction one \"sets off\" from the point. For all directions, the\n"
  "curvature will pass through two extrema: a minimum ( $k_{min} $) and\n"
  "a maximum ( $k_{max} $) which occur at mutually orthogonal directions\n"
  "to each other.\n\n"
  "The sign of the Gauss curvature is a geometric ivariant, it should be\n"
  "positive when the surface looks like a sphere, negative when it looks\n"
  "like a saddle, however, the sign of the Mean curvature is not, it\n"
  "depends on the convention for normals, This code assumes that normals\n"
  "point outwards (ie from the surface of a sphere outwards). If a given\n"
  "mesh produces curvatures of opposite senses then the flag\n"
  "InvertMeanCurvature\n"
  " can be set and the Curvature reported by the Mean calculation will\n"
  "be inverted.\n\n"
  "For a little more information see <a\n"
  "href=\"https://public.kitware.com/pipermail/vtkusers/2002-July/012198.html\"\n"
  ">Computing curvature of a surface\n\n"
  "@par Thanks: <a\n"
  "href=\"https://en.wikipedia.org/wiki/Philip_Batchelor\">Philip\n"
  "Batchelor for creating and contributing the class and Andrew Maclean\n"
  "for cleanups and fixes. Thanks also to John Biddiscombe for adding\n"
  "the class and Goodwin Lawlor for contributing a patch to calculate\n"
  "principal curvatures\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkCurvatures_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkCurvatures", // tp_name
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
  PyvtkCurvatures_Doc, // tp_doc
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

static vtkObjectBase *PyvtkCurvatures_StaticNew()
{
  return vtkCurvatures::New();
}

PyObject *PyvtkCurvatures_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkCurvatures_Type, PyvtkCurvatures_Methods,
    "vtkCurvatures",
 &PyvtkCurvatures_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkCurvatures(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkCurvatures_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkCurvatures", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 4; c++)
  {
    static const struct { const char *name; int value; }
      constants[4] = {
        { "VTK_CURVATURE_GAUSS", 0 },
        { "VTK_CURVATURE_MEAN", 1 },
        { "VTK_CURVATURE_MAXIMUM", 2 },
        { "VTK_CURVATURE_MINIMUM", 3 },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

