// python wrapper for vtkConvertToPolyhedra
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkConvertToPolyhedra.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkConvertToPolyhedra(PyObject *dict); }
extern "C" { PyObject *PyvtkConvertToPolyhedra_ClassNew(); }


static PyObject *
PyvtkConvertToPolyhedra_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkConvertToPolyhedra::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkConvertToPolyhedra::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkConvertToPolyhedra *tempr = vtkConvertToPolyhedra::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkConvertToPolyhedra *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkConvertToPolyhedra::NewInstance());

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
PyvtkConvertToPolyhedra_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkConvertToPolyhedra::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkConvertToPolyhedra::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_SetOutputAllCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetOutputAllCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetOutputAllCells(temp0);
    }
    else
    {
      op->vtkConvertToPolyhedra::SetOutputAllCells(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_GetOutputAllCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetOutputAllCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetOutputAllCells() :
      op->vtkConvertToPolyhedra::GetOutputAllCells());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_OutputAllCellsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputAllCellsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputAllCellsOn();
    }
    else
    {
      op->vtkConvertToPolyhedra::OutputAllCellsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkConvertToPolyhedra_OutputAllCellsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OutputAllCellsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkConvertToPolyhedra *op = static_cast<vtkConvertToPolyhedra *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OutputAllCellsOff();
    }
    else
    {
      op->vtkConvertToPolyhedra::OutputAllCellsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkConvertToPolyhedra_Methods[] = {
  {"IsTypeOf", PyvtkConvertToPolyhedra_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkConvertToPolyhedra_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkConvertToPolyhedra_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkConvertToPolyhedra\nC++: static vtkConvertToPolyhedra *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkConvertToPolyhedra_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkConvertToPolyhedra\nC++: vtkConvertToPolyhedra *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkConvertToPolyhedra_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkConvertToPolyhedra_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetOutputAllCells", PyvtkConvertToPolyhedra_SetOutputAllCells, METH_VARARGS,
   "SetOutputAllCells(self, _arg:bool) -> None\nC++: virtual void SetOutputAllCells(bool _arg)\n\nIndicate whether to include non-polyhedral cells in the filter\noutput. Non-polyhedral cells are cells which cannot be converted\nto polyhedra, for example cells of dimension < 3, and\nhigher-order cells. If enabled, the output will contain a mix of\npolyhedra and non-polyhedra cells. If disabled, only polyhedra\ncells will be output. By default, this is disabled.\n"},
  {"GetOutputAllCells", PyvtkConvertToPolyhedra_GetOutputAllCells, METH_VARARGS,
   "GetOutputAllCells(self) -> bool\nC++: virtual bool GetOutputAllCells()\n\n"},
  {"OutputAllCellsOn", PyvtkConvertToPolyhedra_OutputAllCellsOn, METH_VARARGS,
   "OutputAllCellsOn(self) -> None\nC++: virtual void OutputAllCellsOn()\n\n"},
  {"OutputAllCellsOff", PyvtkConvertToPolyhedra_OutputAllCellsOff, METH_VARARGS,
   "OutputAllCellsOff(self) -> None\nC++: virtual void OutputAllCellsOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkConvertToPolyhedra_Doc =
  "vtkConvertToPolyhedra - convert 3D linear cells to vtkPolyhedra\n\n"
  "Superclass: vtkUnstructuredGridAlgorithm\n\n"
  "vtkConvertToPolyhedra is a filter that takes a vtkUnstructuredGrid as\n"
  "input and produces a vtkUnstructuredGrid on output, converting 3D\n"
  "linear cells such as tetrahedra, hexahedra, wedges, and pyramids into\n"
  "vtkPolyhedron.\n\n"
  "@warning\n"
  "Certain cells are skipped and not converted, this includes cells of\n"
  "dimension two or less (e.g., triangles, quads, lines, verts, and so\n"
  "on); and higher order cells that cannot easily be converted to\n"
  "vtkPolyhedra. (TODO: tessellate high-order 3D cell faces and then use\n"
  "these to form the polyhedra.)\n\n"
  "@warning\n"
  "This filter is typically used for testing. In general, processing\n"
  "linear cells is preferable to processing polyhedra due to differences\n"
  "in speed of processing, and memory requirements.\n\n"
  "@sa\n"
  "vtkUnstructuredGrid vtkPolyhedron\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkConvertToPolyhedra_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCore.vtkConvertToPolyhedra", // tp_name
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
  PyvtkConvertToPolyhedra_Doc, // tp_doc
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

static vtkObjectBase *PyvtkConvertToPolyhedra_StaticNew()
{
  return vtkConvertToPolyhedra::New();
}

PyObject *PyvtkConvertToPolyhedra_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkConvertToPolyhedra_Type, PyvtkConvertToPolyhedra_Methods,
    "vtkConvertToPolyhedra",
 &PyvtkConvertToPolyhedra_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkUnstructuredGridAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkConvertToPolyhedra(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkConvertToPolyhedra_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkConvertToPolyhedra", o) != 0)
  {
    Py_DECREF(o);
  }

}

