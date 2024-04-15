// python wrapper for vtkRecoverGeometryWireframe
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRecoverGeometryWireframe.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRecoverGeometryWireframe(PyObject *dict); }
extern "C" { PyObject *PyvtkRecoverGeometryWireframe_ClassNew(); }


static PyObject *
PyvtkRecoverGeometryWireframe_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRecoverGeometryWireframe::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecoverGeometryWireframe *op = static_cast<vtkRecoverGeometryWireframe *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRecoverGeometryWireframe::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRecoverGeometryWireframe *tempr = vtkRecoverGeometryWireframe::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecoverGeometryWireframe *op = static_cast<vtkRecoverGeometryWireframe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRecoverGeometryWireframe *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRecoverGeometryWireframe::NewInstance());

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
PyvtkRecoverGeometryWireframe_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRecoverGeometryWireframe::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecoverGeometryWireframe *op = static_cast<vtkRecoverGeometryWireframe *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRecoverGeometryWireframe::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_SetCellIdsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCellIdsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecoverGeometryWireframe *op = static_cast<vtkRecoverGeometryWireframe *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetCellIdsAttribute(temp0);
    }
    else
    {
      op->vtkRecoverGeometryWireframe::SetCellIdsAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRecoverGeometryWireframe_GetCellIdsAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCellIdsAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRecoverGeometryWireframe *op = static_cast<vtkRecoverGeometryWireframe *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->GetCellIdsAttribute() :
      op->vtkRecoverGeometryWireframe::GetCellIdsAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRecoverGeometryWireframe_Methods[] = {
  {"IsTypeOf", PyvtkRecoverGeometryWireframe_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRecoverGeometryWireframe_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRecoverGeometryWireframe_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRecoverGeometryWireframe\nC++: static vtkRecoverGeometryWireframe *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRecoverGeometryWireframe_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRecoverGeometryWireframe\nC++: vtkRecoverGeometryWireframe *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRecoverGeometryWireframe_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRecoverGeometryWireframe_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetCellIdsAttribute", PyvtkRecoverGeometryWireframe_SetCellIdsAttribute, METH_VARARGS,
   "SetCellIdsAttribute(self, _arg:str) -> None\nC++: virtual void SetCellIdsAttribute(std::string _arg)\n\nGet/Set the cell attribute name that will be used to discriminate\nedges that should be kept from edges that shouldn't. This array\nshould be a vtkIdType array.\n\nDefault is empty.\n"},
  {"GetCellIdsAttribute", PyvtkRecoverGeometryWireframe_GetCellIdsAttribute, METH_VARARGS,
   "GetCellIdsAttribute(self) -> str\nC++: virtual std::string GetCellIdsAttribute()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRecoverGeometryWireframe_Doc =
  "vtkRecoverGeometryWireframe - Get corrected wireframe from\ntessellated facets\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "This filter create an edge mask that is used at render time to ignore\n"
  "the rendering of specific edges in wireframe mode. For that it checks\n"
  "a cell attribute so that each adjacent cells having the same\n"
  "attribute value will not display an edge between them.\n\n"
  "The main usage of this filter is at the output of\n"
  "vtkDataSetSurfaceFilter or vtkGeometryFilter, when we are subdividing\n"
  "non-linear cells but we still want to visualize the edges of the\n"
  "original cells. In this case the cell attribute will usually be the\n"
  "original cell id values.\n\n"
  "@warning As the edge flag mechanism does not allow to specify a\n"
  "    single edge\n"
  "from a point the filter might duplicate some points, so topology is\n"
  "not preserved.\n\n"
  "@sa\n"
  "vtkDataSetSurfaceFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRecoverGeometryWireframe_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeometry.vtkRecoverGeometryWireframe", // tp_name
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
  PyvtkRecoverGeometryWireframe_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRecoverGeometryWireframe_StaticNew()
{
  return vtkRecoverGeometryWireframe::New();
}

PyObject *PyvtkRecoverGeometryWireframe_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRecoverGeometryWireframe_Type, PyvtkRecoverGeometryWireframe_Methods,
    "vtkRecoverGeometryWireframe",
 &PyvtkRecoverGeometryWireframe_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRecoverGeometryWireframe(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRecoverGeometryWireframe_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRecoverGeometryWireframe", o) != 0)
  {
    Py_DECREF(o);
  }

}

