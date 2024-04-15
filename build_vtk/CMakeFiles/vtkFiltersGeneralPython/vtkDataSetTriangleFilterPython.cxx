// python wrapper for vtkDataSetTriangleFilter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDataSetTriangleFilter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDataSetTriangleFilter(PyObject *dict); }
extern "C" { PyObject *PyvtkDataSetTriangleFilter_ClassNew(); }


static PyObject *
PyvtkDataSetTriangleFilter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDataSetTriangleFilter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDataSetTriangleFilter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDataSetTriangleFilter *tempr = vtkDataSetTriangleFilter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSetTriangleFilter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDataSetTriangleFilter::NewInstance());

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
PyvtkDataSetTriangleFilter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDataSetTriangleFilter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDataSetTriangleFilter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_SetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetTetrahedraOnly(temp0);
    }
    else
    {
      op->vtkDataSetTriangleFilter::SetTetrahedraOnly(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_GetTetrahedraOnly(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTetrahedraOnly");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetTetrahedraOnly() :
      op->vtkDataSetTriangleFilter::GetTetrahedraOnly());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TetrahedraOnlyOn();
    }
    else
    {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDataSetTriangleFilter_TetrahedraOnlyOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "TetrahedraOnlyOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDataSetTriangleFilter *op = static_cast<vtkDataSetTriangleFilter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->TetrahedraOnlyOff();
    }
    else
    {
      op->vtkDataSetTriangleFilter::TetrahedraOnlyOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDataSetTriangleFilter_Methods[] = {
  {"IsTypeOf", PyvtkDataSetTriangleFilter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDataSetTriangleFilter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDataSetTriangleFilter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDataSetTriangleFilter\nC++: static vtkDataSetTriangleFilter *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDataSetTriangleFilter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDataSetTriangleFilter\nC++: vtkDataSetTriangleFilter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDataSetTriangleFilter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDataSetTriangleFilter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetTetrahedraOnly", PyvtkDataSetTriangleFilter_SetTetrahedraOnly, METH_VARARGS,
   "SetTetrahedraOnly(self, _arg:int) -> None\nC++: virtual void SetTetrahedraOnly(vtkTypeBool _arg)\n\nWhen On this filter will cull all 1D and 2D cells from the\noutput. The default is Off.\n"},
  {"GetTetrahedraOnly", PyvtkDataSetTriangleFilter_GetTetrahedraOnly, METH_VARARGS,
   "GetTetrahedraOnly(self) -> int\nC++: virtual vtkTypeBool GetTetrahedraOnly()\n\n"},
  {"TetrahedraOnlyOn", PyvtkDataSetTriangleFilter_TetrahedraOnlyOn, METH_VARARGS,
   "TetrahedraOnlyOn(self) -> None\nC++: virtual void TetrahedraOnlyOn()\n\n"},
  {"TetrahedraOnlyOff", PyvtkDataSetTriangleFilter_TetrahedraOnlyOff, METH_VARARGS,
   "TetrahedraOnlyOff(self) -> None\nC++: virtual void TetrahedraOnlyOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDataSetTriangleFilter_Doc =
  "vtkDataSetTriangleFilter - triangulate any type of dataset\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkDataSetTriangleFilter generates n-dimensional simplices from any\n"
  "input dataset. That is, 3D cells are converted to tetrahedral meshes,\n"
  "2D cells to triangles, and so on. The triangulation is guaranteed to\n"
  "be compatible.\n\n"
  "This filter uses simple 1D and 2D triangulation techniques for cells\n"
  "that are of topological dimension 2 or less. For 3D cells--due to the\n"
  "issue of face compatibility across quadrilateral faces (which way to\n"
  "orient the diagonal?)--a fancier ordered Delaunay triangulation is\n"
  "used. This approach produces templates on the fly for triangulating\n"
  "the cells. The templates are then used to do the actual\n"
  "triangulation.\n\n"
  "@sa\n"
  "vtkOrderedTriangulator vtkTriangleFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDataSetTriangleFilter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDataSetTriangleFilter", // tp_name
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
  PyvtkDataSetTriangleFilter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDataSetTriangleFilter_StaticNew()
{
  return vtkDataSetTriangleFilter::New();
}

PyObject *PyvtkDataSetTriangleFilter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDataSetTriangleFilter_Type, PyvtkDataSetTriangleFilter_Methods,
    "vtkDataSetTriangleFilter",
 &PyvtkDataSetTriangleFilter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDataSetTriangleFilter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDataSetTriangleFilter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDataSetTriangleFilter", o) != 0)
  {
    Py_DECREF(o);
  }

}

