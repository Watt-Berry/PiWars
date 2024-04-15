// python wrapper for vtkFillHolesFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkFillHolesFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkFillHolesFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkFillHolesFilter_ClassNew(); }


static PyObject *
PyvtkFillHolesFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkFillHolesFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkFillHolesFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkFillHolesFilter *tempr = vtkFillHolesFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkFillHolesFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkFillHolesFilter::NewInstance());

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
PyvtkFillHolesFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkFillHolesFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkFillHolesFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_SetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHoleSize(temp0);
    }
    else
    {
      op->vtkFillHolesFilter::SetHoleSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMinValue() :
      op->vtkFillHolesFilter::GetHoleSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSizeMaxValue() :
      op->vtkFillHolesFilter::GetHoleSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkFillHolesFilter_GetHoleSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHoleSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkFillHolesFilter *op = static_cast<vtkFillHolesFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHoleSize() :
      op->vtkFillHolesFilter::GetHoleSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkFillHolesFilter_Methods[] = {
  {"IsTypeOf", PyvtkFillHolesFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkFillHolesFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkFillHolesFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkFillHolesFilter\nC++: static vtkFillHolesFilter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkFillHolesFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkFillHolesFilter\nC++: vtkFillHolesFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkFillHolesFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkFillHolesFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetHoleSize", PyvtkFillHolesFilter_SetHoleSize, METH_VARARGS,
   "SetHoleSize(self, _arg:float) -> None\nC++: virtual void SetHoleSize(double _arg)\n\nSpecify the maximum hole size to fill. This is represented as a\nradius to the bounding circumsphere containing the hole.  Note\nthat this is an approximate area; the actual area cannot be\ncomputed without first triangulating the hole.\n"},
  {"GetHoleSizeMinValue", PyvtkFillHolesFilter_GetHoleSizeMinValue, METH_VARARGS,
   "GetHoleSizeMinValue(self) -> float\nC++: virtual double GetHoleSizeMinValue()\n\n"},
  {"GetHoleSizeMaxValue", PyvtkFillHolesFilter_GetHoleSizeMaxValue, METH_VARARGS,
   "GetHoleSizeMaxValue(self) -> float\nC++: virtual double GetHoleSizeMaxValue()\n\n"},
  {"GetHoleSize", PyvtkFillHolesFilter_GetHoleSize, METH_VARARGS,
   "GetHoleSize(self) -> float\nC++: virtual double GetHoleSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkFillHolesFilter_Doc =
  "vtkFillHolesFilter - identify and fill holes in meshes\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkFillHolesFilter is a filter that identifies and fills holes in\n"
  "input vtkPolyData meshes. Holes are identified by locating boundary\n"
  "edges, linking them together into loops, and then triangulating the\n"
  "resulting loops. Note that you can specify an approximate limit to\n"
  "the size of the hole that can be filled.\n\n"
  "@warning\n"
  "Note that any mesh with boundary edges by definition has a\n"
  "topological hole. This even includes a reactangular grid (e.g., the\n"
  "output of vtkPlaneSource). In such situations, if the outer hole is\n"
  "filled, retriangulation of the hole will cause geometric overlap of\n"
  "the mesh. This can be prevented by using the hole size instance\n"
  "variable to prevent the larger holes from being triangulated.\n\n"
  "@warning\n"
  "Note this filter only operates on polygons and triangle strips.\n"
  "Vertices and polylines are passed through untouched.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkFillHolesFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersModeling.vtkFillHolesFilter", // tp_name
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
  PyvtkFillHolesFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkFillHolesFilter_StaticNew()
{
  return vtkFillHolesFilter::New();
}

PyObject *PyvtkFillHolesFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkFillHolesFilter_Type, PyvtkFillHolesFilter_Methods,
    "vtkFillHolesFilter",
 &PyvtkFillHolesFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkFillHolesFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkFillHolesFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkFillHolesFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

