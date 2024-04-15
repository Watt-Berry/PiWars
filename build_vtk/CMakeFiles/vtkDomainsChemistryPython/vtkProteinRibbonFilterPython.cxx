// python wrapper for vtkProteinRibbonFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkProteinRibbonFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkProteinRibbonFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkProteinRibbonFilter_ClassNew(); }


static PyObject *
PyvtkProteinRibbonFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkProteinRibbonFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkProteinRibbonFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkProteinRibbonFilter *tempr = vtkProteinRibbonFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkProteinRibbonFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkProteinRibbonFilter::NewInstance());

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
PyvtkProteinRibbonFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkProteinRibbonFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkProteinRibbonFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetCoilWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCoilWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetCoilWidth() :
      op->vtkProteinRibbonFilter::GetCoilWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetCoilWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCoilWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCoilWidth(temp0);
    }
    else
    {
      op->vtkProteinRibbonFilter::SetCoilWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetHelixWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelixWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    float tempr = (ap.IsBound() ?
      op->GetHelixWidth() :
      op->vtkProteinRibbonFilter::GetHelixWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetHelixWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHelixWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  float temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHelixWidth(temp0);
    }
    else
    {
      op->vtkProteinRibbonFilter::SetHelixWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetSubdivideFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSubdivideFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSubdivideFactor() :
      op->vtkProteinRibbonFilter::GetSubdivideFactor());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetSubdivideFactor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSubdivideFactor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSubdivideFactor(temp0);
    }
    else
    {
      op->vtkProteinRibbonFilter::SetSubdivideFactor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetDrawSmallMoleculesAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDrawSmallMoleculesAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetDrawSmallMoleculesAsSpheres() :
      op->vtkProteinRibbonFilter::GetDrawSmallMoleculesAsSpheres());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetDrawSmallMoleculesAsSpheres(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDrawSmallMoleculesAsSpheres");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDrawSmallMoleculesAsSpheres(temp0);
    }
    else
    {
      op->vtkProteinRibbonFilter::SetDrawSmallMoleculesAsSpheres(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_GetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSphereResolution() :
      op->vtkProteinRibbonFilter::GetSphereResolution());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkProteinRibbonFilter_SetSphereResolution(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSphereResolution");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkProteinRibbonFilter *op = static_cast<vtkProteinRibbonFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSphereResolution(temp0);
    }
    else
    {
      op->vtkProteinRibbonFilter::SetSphereResolution(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkProteinRibbonFilter_Methods[] = {
  {"IsTypeOf", PyvtkProteinRibbonFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkProteinRibbonFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkProteinRibbonFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkProteinRibbonFilter\nC++: static vtkProteinRibbonFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkProteinRibbonFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkProteinRibbonFilter\nC++: vtkProteinRibbonFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkProteinRibbonFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkProteinRibbonFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetCoilWidth", PyvtkProteinRibbonFilter_GetCoilWidth, METH_VARARGS,
   "GetCoilWidth(self) -> float\nC++: virtual float GetCoilWidth()\n\nWidth of the ribbon coil. Default is 0.3.\n"},
  {"SetCoilWidth", PyvtkProteinRibbonFilter_SetCoilWidth, METH_VARARGS,
   "SetCoilWidth(self, _arg:float) -> None\nC++: virtual void SetCoilWidth(float _arg)\n\n"},
  {"GetHelixWidth", PyvtkProteinRibbonFilter_GetHelixWidth, METH_VARARGS,
   "GetHelixWidth(self) -> float\nC++: virtual float GetHelixWidth()\n\nWidth of the helix part of the ribbon. Default is 1.3.\n"},
  {"SetHelixWidth", PyvtkProteinRibbonFilter_SetHelixWidth, METH_VARARGS,
   "SetHelixWidth(self, _arg:float) -> None\nC++: virtual void SetHelixWidth(float _arg)\n\n"},
  {"GetSubdivideFactor", PyvtkProteinRibbonFilter_GetSubdivideFactor, METH_VARARGS,
   "GetSubdivideFactor(self) -> int\nC++: virtual int GetSubdivideFactor()\n\nSmoothing factor of the ribbon. Default is 20.\n"},
  {"SetSubdivideFactor", PyvtkProteinRibbonFilter_SetSubdivideFactor, METH_VARARGS,
   "SetSubdivideFactor(self, _arg:int) -> None\nC++: virtual void SetSubdivideFactor(int _arg)\n\n"},
  {"GetDrawSmallMoleculesAsSpheres", PyvtkProteinRibbonFilter_GetDrawSmallMoleculesAsSpheres, METH_VARARGS,
   "GetDrawSmallMoleculesAsSpheres(self) -> bool\nC++: virtual bool GetDrawSmallMoleculesAsSpheres()\n\nIf enabled, small molecules (HETATMs) are drawn as spheres.\nDefault is true.\n"},
  {"SetDrawSmallMoleculesAsSpheres", PyvtkProteinRibbonFilter_SetDrawSmallMoleculesAsSpheres, METH_VARARGS,
   "SetDrawSmallMoleculesAsSpheres(self, _arg:bool) -> None\nC++: virtual void SetDrawSmallMoleculesAsSpheres(bool _arg)\n\n"},
  {"GetSphereResolution", PyvtkProteinRibbonFilter_GetSphereResolution, METH_VARARGS,
   "GetSphereResolution(self) -> int\nC++: virtual int GetSphereResolution()\n\nResolution of the spheres for small molecules. Default is 20.\n"},
  {"SetSphereResolution", PyvtkProteinRibbonFilter_SetSphereResolution, METH_VARARGS,
   "SetSphereResolution(self, _arg:int) -> None\nC++: virtual void SetSphereResolution(int _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkProteinRibbonFilter_Doc =
  "vtkProteinRibbonFilter - generates protein ribbons\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkProteinRibbonFilter is a polydata algorithm that generates protein\n"
  "ribbons.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkProteinRibbonFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkDomainsChemistry.vtkProteinRibbonFilter", // tp_name
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
  PyvtkProteinRibbonFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkProteinRibbonFilter_StaticNew()
{
  return vtkProteinRibbonFilter::New();
}

PyObject *PyvtkProteinRibbonFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkProteinRibbonFilter_Type, PyvtkProteinRibbonFilter_Methods,
    "vtkProteinRibbonFilter",
 &PyvtkProteinRibbonFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkProteinRibbonFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkProteinRibbonFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkProteinRibbonFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

