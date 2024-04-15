// python wrapper for vtkMoleculeToAtomBallFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMoleculeToAtomBallFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMoleculeToAtomBallFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkMoleculeToAtomBallFilter_ClassNew(); }

#ifndef DECLARED_PyvtkMoleculeToPolyDataFilter_ClassNew
extern "C" { PyObject *PyvtkMoleculeToPolyDataFilter_ClassNew(); }
#define DECLARED_PyvtkMoleculeToPolyDataFilter_ClassNew
#endif

static PyObject *
PyvtkMoleculeToAtomBallFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMoleculeToAtomBallFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMoleculeToAtomBallFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMoleculeToAtomBallFilter *tempr = vtkMoleculeToAtomBallFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMoleculeToAtomBallFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMoleculeToAtomBallFilter::NewInstance());

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
PyvtkMoleculeToAtomBallFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMoleculeToAtomBallFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMoleculeToAtomBallFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetRadiusSource() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusSource());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusSource(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusSource");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusSource(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetRadiusSource(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetResolution() :
      op->vtkMoleculeToAtomBallFilter::GetResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetResolution(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_GetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetRadiusScale() :
      op->vtkMoleculeToAtomBallFilter::GetRadiusScale());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMoleculeToAtomBallFilter_SetRadiusScale(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRadiusScale");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMoleculeToAtomBallFilter *op = static_cast<vtkMoleculeToAtomBallFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetRadiusScale(temp0);
    }
    else
    {
      op->vtkMoleculeToAtomBallFilter::SetRadiusScale(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMoleculeToAtomBallFilter_Methods[] = {
  {"IsTypeOf", PyvtkMoleculeToAtomBallFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMoleculeToAtomBallFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMoleculeToAtomBallFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMoleculeToAtomBallFilter\nC++: static vtkMoleculeToAtomBallFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMoleculeToAtomBallFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMoleculeToAtomBallFilter\nC++: vtkMoleculeToAtomBallFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMoleculeToAtomBallFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMoleculeToAtomBallFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetRadiusSource", PyvtkMoleculeToAtomBallFilter_GetRadiusSource, METH_VARARGS,
   "GetRadiusSource(self) -> int\nC++: virtual int GetRadiusSource()\n\n"},
  {"SetRadiusSource", PyvtkMoleculeToAtomBallFilter_SetRadiusSource, METH_VARARGS,
   "SetRadiusSource(self, _arg:int) -> None\nC++: virtual void SetRadiusSource(int _arg)\n\n"},
  {"GetResolution", PyvtkMoleculeToAtomBallFilter_GetResolution, METH_VARARGS,
   "GetResolution(self) -> int\nC++: virtual int GetResolution()\n\n"},
  {"SetResolution", PyvtkMoleculeToAtomBallFilter_SetResolution, METH_VARARGS,
   "SetResolution(self, _arg:int) -> None\nC++: virtual void SetResolution(int _arg)\n\n"},
  {"GetRadiusScale", PyvtkMoleculeToAtomBallFilter_GetRadiusScale, METH_VARARGS,
   "GetRadiusScale(self) -> float\nC++: virtual double GetRadiusScale()\n\n"},
  {"SetRadiusScale", PyvtkMoleculeToAtomBallFilter_SetRadiusScale, METH_VARARGS,
   "SetRadiusScale(self, _arg:float) -> None\nC++: virtual void SetRadiusScale(double _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMoleculeToAtomBallFilter_Doc =
  "vtkMoleculeToAtomBallFilter - Generate polydata with spheres\nrepresenting atoms\n\n"
  "Superclass: vtkMoleculeToPolyDataFilter\n\n"
  "This filter is used to generate one sphere for each atom in the input\n"
  "vtkMolecule. Each sphere is centered at the atom center and can be\n"
  "scaled using either covalent or van der Waals radii. The point\n"
  "scalars of the output vtkPolyData contains the atomic number of the\n"
  "appropriate atom for color mapping.\n\n"
  "ote Consider using the faster, simpler vtkMoleculeMapper class,\n"
  "rather than generating polydata manually via these filters.\n\n"
  "@sa\n"
  "vtkMoleculeMapper vtkMoleculeToBondStickFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMoleculeToAtomBallFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkMoleculeToAtomBallFilter", // tp_name
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
  PyvtkMoleculeToAtomBallFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMoleculeToAtomBallFilter_StaticNew()
{
  return vtkMoleculeToAtomBallFilter::New();
}

PyObject *PyvtkMoleculeToAtomBallFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMoleculeToAtomBallFilter_Type, PyvtkMoleculeToAtomBallFilter_Methods,
    "vtkMoleculeToAtomBallFilter",
 &PyvtkMoleculeToAtomBallFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkMoleculeToPolyDataFilter_ClassNew();

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "CovalentRadius", vtkMoleculeToAtomBallFilter::CovalentRadius },
        { "VDWRadius", vtkMoleculeToAtomBallFilter::VDWRadius },
        { "UnitRadius", vtkMoleculeToAtomBallFilter::UnitRadius },
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

void PyVTKAddFile_vtkMoleculeToAtomBallFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMoleculeToAtomBallFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMoleculeToAtomBallFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

